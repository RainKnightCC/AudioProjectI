#ifndef AUDIORECEIVER_H
#define AUDIORECEIVER_H

#include <QObject>
#include <QWidget>
#include <QMediaRecorder>
#include <QAudioBuffer>
#include <QAudioRecorder>
#include <QAudioProbe>

#include "globaldefine.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class AudioReceiver;
}
class QAudioBuffer;
class QAudioRecorder;
class QAudioProbe;
QT_END_NAMESPACE

static QVector<qreal> getBufferLevels(const QAudioBuffer &buffer);

//template <class T>

class AudioReceiver : public QWidget
{
    Q_OBJECT
public:
    AudioReceiver(QWidget *parent = nullptr);
    ~AudioReceiver();

    void initObjectEvent();
    void releaseObjectEvent();

    void startReceiveAudio();
    void stopReceiveAudio();
    void pauseReceiveAudio();

    void setAudioCodec(QString codec);
    void setSampleRate(QString rate);
    void setChannelCount(QString channls);
    void setAudioInputDevice(QString device);
    void setBitRate(QString bitRate);
    void setQuality(int volume);
    void setEncodingMode(ConstantType mode);
    void setEncodingSettingsConfig(QString container);

    QString getFileContainer();
    QString getInputDevice();
    QString getAudioCodec();
    QString getSampleRate();
    QString getChannels();

public slots:
    void processBuffer(const QAudioBuffer&);

private slots:
    void setOutputLocation();
    void togglePause();
    void toggleRecord();

    void updateStatus(QMediaRecorder::Status);
    void onStateChanged(QMediaRecorder::State);
    void updateProgress(qint64 duration);
    void displayErrorMessage();

    void onVolumeSliderValueChanged(int value);

private:
    void clearAudioLevels();

    QAudioRecorder *audioRecorder;
    QAudioProbe *probe;
    QAudioEncoderSettings settings;
    bool outputLocationSet;

    QString inputDeviceField;
    QString audioCodecField;
    QString fileContainerField;
    QString sampleRateField;
    QString channelsField;

signals:

};

#endif // AUDIORECEIVER_H