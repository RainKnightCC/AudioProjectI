#include "AudioReceiver.h"
#include "MainForm.h"

#define DEBUG qDebug() << __FILE__ << __LINE__ << __FUNCTION__

//template <class T>

AudioReceiver::AudioReceiver(QWidget *parent) : QWidget(parent), outputLocationSet(false)
{   
    audioRecorder = new QAudioRecorder(this);
    probe = new QAudioProbe();
    QObject::connect(probe, SIGNAL(audioBufferProbed(QAudioBuffer)), this, SLOT(processBuffer(QAudioBuffer)));
    probe->setSource(audioRecorder);

    int index;

    // scan audio devices
    foreach(const QString &device, audioRecorder->audioInputs()) {
        inputDeviceField = "default:";
    }

    // scan audio codecs
    foreach (const QString &codecName, audioRecorder->supportedAudioCodecs()) {
        audioCodecField = "Default";
    }

    // containers
    foreach (const QString &containerName, audioRecorder->supportedContainers()) {     
        if(containerName == "audio/x-wav") {
            // equal
            fileContainerField = containerName;
//            fileContainerField = "wav";
        }
    }


    // sample rate
    foreach(const int sampleRate, audioRecorder->supportedAudioSampleRates()) {
        DEBUG << QString(sampleRate);
    }
    sampleRateField = "8000";
    channelsField = "1";

//    format.setSampleSize(8);
//    format.setCodec("audio/wav");
//    format.setByteOrder(QAudioFormat::LittleEndian);
//    format.setSampleType(QAudioFormat::UnSignedInt);

    this->initObjectEvent();
}

AudioReceiver::~AudioReceiver() {
    releaseObjectEvent();
    if(!settings.isNull())
        delete &settings;
    delete audioRecorder;
    delete probe;
}

void AudioReceiver::initObjectEvent() {
    QObject::connect(audioRecorder, SIGNAL(durationChanged(qint64)),
                     this, SLOT(updateProgress(qint64)));
    QObject::connect(audioRecorder, SIGNAL(statusChanged(QMediaRecorder::Status)),
                     this, SLOT(updateStatus(QMediaRecorder::Status)));
    QObject::connect(audioRecorder, SIGNAL(stateChanged(QMediaRecorder::State)),
                     this, SLOT(onStateChanged(QMediaRecorder::State)));
    QObject::connect(audioRecorder, SIGNAL(error(QMediaRecorder::Error)),
                     this, SLOT(displayErrorMessage()));
}


void AudioReceiver::releaseObjectEvent() {
    QObject::disconnect(audioRecorder, SIGNAL(durationChanged(qint64)),
                     this, SLOT(updateProgress(qint64)));
    QObject::disconnect(audioRecorder, SIGNAL(statusChanged(QMediaRecorder::Status)),
                     this, SLOT(updateStatus(QMediaRecorder::Status)));
    QObject::disconnect(audioRecorder, SIGNAL(stateChanged(QMediaRecorder::State)),
                     this, SLOT(onStateChanged(QMediaRecorder::State)));
    QObject::disconnect(audioRecorder, SIGNAL(error(QMediaRecorder::Error)),
                     this, SLOT(displayErrorMessage()));
}

void AudioReceiver::startReceiveAudio() {
    audioRecorder->record();
}


void AudioReceiver::stopReceiveAudio() {
    audioRecorder->stop();
}

void AudioReceiver::pauseReceiveAudio() {
    audioRecorder->pause();
}


void AudioReceiver::processBuffer(const QAudioBuffer &buffer) {
    DEBUG << "processing";
}


void AudioReceiver::setOutputLocation() {

}


void AudioReceiver::togglePause() {

}


void AudioReceiver::toggleRecord() {

}


void AudioReceiver::updateStatus(QMediaRecorder::Status status) {
    DEBUG << status;
}


void AudioReceiver::onStateChanged(QMediaRecorder::State state) {
    DEBUG << state;
}


void AudioReceiver::updateProgress(qint64 duration) {
    if(audioRecorder->error() != QMediaRecorder::NoError || duration < 1000) {
        return;
    }
}


void AudioReceiver::displayErrorMessage() {
    DEBUG << audioRecorder->errorString();
}


void AudioReceiver::onVolumeSliderValueChanged(int value) {
    qreal volume = value;
    volume /= 100;
    audioRecorder->setVolume(volume);
}


void AudioReceiver::clearAudioLevels() {

}

void AudioReceiver::setAudioCodec(QString codec) {
    settings.setCodec(codec);
    DEBUG << codec;
}

void AudioReceiver::setSampleRate(QString rate) {
    settings.setSampleRate(rate.toInt());
    DEBUG << rate;
}

void AudioReceiver::setChannelCount(QString channls) {
    settings.setChannelCount(channls.toInt());
    DEBUG << channls;
}

void AudioReceiver::setAudioInputDevice(QString device) {
    audioRecorder->setAudioInput(device);
    DEBUG << device;
}

void AudioReceiver::setBitRate(QString bitRate) {
    settings.setBitRate(bitRate.toInt());
    DEBUG << bitRate;
}

void AudioReceiver::setQuality(int volume) {
    settings.setQuality(QMultimedia::EncodingQuality(volume));
    DEBUG << volume;
}


void AudioReceiver::setEncodingMode(ConstantType mode) {
    if(mode == QualityEncoding) {
        settings.setEncodingMode(QMultimedia::ConstantQualityEncoding);
    }else if(mode == BitRateEncoding) {
        settings.setEncodingMode(QMultimedia::ConstantBitRateEncoding);
    }
}

void AudioReceiver::setEncodingSettingsConfig(QString container) {
    audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings(), container);
    DEBUG << container;
}

QString AudioReceiver::getFileContainer() {
    return this->fileContainerField;
}

QString AudioReceiver::getInputDevice() {
    return this->inputDeviceField;
}

QString AudioReceiver::getAudioCodec() {
    return this->audioCodecField;
}

QString AudioReceiver::getSampleRate() {
    return this->sampleRateField;
}

QString AudioReceiver::getChannels() {
    return this->channelsField;
}



template <class T>
QVector<qreal> getBufferLevels(const T *buffer, int frames, int channels)
{
    QVector<qreal> max_values;
    max_values.fill(0, channels);

    for (int i = 0; i < frames; ++i) {
        for (int j = 0; j < channels; ++j) {
            qreal value = qAbs(qreal(buffer[i * channels + j]));
            if (value > max_values.at(j))
                max_values.replace(j, value);
        }
    }

    return max_values;
}
