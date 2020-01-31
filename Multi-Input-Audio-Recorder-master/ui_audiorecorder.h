/********************************************************************************
** Form generated from reading UI file 'audiorecorder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIORECORDER_H
#define UI_AUDIORECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioRecorder
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *settingsWidgets;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *audioDeviceBox;
    QLabel *label;
    QLabel *label_3;
    QComboBox *audioCodecBox;
    QComboBox *sampleRateBox;
    QComboBox *containerBox;
    QComboBox *channelsBox;
    QLabel *label_5;
    QLabel *label_2;
    QGroupBox *encodingModeBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSlider *qualitySlider;
    QComboBox *bitrateBox;
    QRadioButton *constantBitrateRadioButton;
    QRadioButton *constantQualityRadioButton;
    QWidget *volumeWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *volumeLabel;
    QSlider *volumeSlider;
    QWidget *levelsWidget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *levelsLayout;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pauseButton;
    QPushButton *recordButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *outputButton;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QLabel *statusText;
    QWidget *waveformWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *waveformLayout;
    QFrame *line;

    void setupUi(QWidget *AudioRecorder)
    {
        if (AudioRecorder->objectName().isEmpty())
            AudioRecorder->setObjectName(QStringLiteral("AudioRecorder"));
        AudioRecorder->resize(856, 325);
        AudioRecorder->setMinimumSize(QSize(250, 325));
        verticalLayout = new QVBoxLayout(AudioRecorder);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        settingsWidgets = new QWidget(AudioRecorder);
        settingsWidgets->setObjectName(QStringLiteral("settingsWidgets"));
        settingsWidgets->setMinimumSize(QSize(300, 125));
        settingsWidgets->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_3 = new QHBoxLayout(settingsWidgets);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(settingsWidgets);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        audioDeviceBox = new QComboBox(settingsWidgets);
        audioDeviceBox->setObjectName(QStringLiteral("audioDeviceBox"));

        gridLayout_2->addWidget(audioDeviceBox, 0, 1, 1, 1);

        label = new QLabel(settingsWidgets);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(settingsWidgets);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        audioCodecBox = new QComboBox(settingsWidgets);
        audioCodecBox->setObjectName(QStringLiteral("audioCodecBox"));

        gridLayout_2->addWidget(audioCodecBox, 1, 1, 1, 1);

        sampleRateBox = new QComboBox(settingsWidgets);
        sampleRateBox->setObjectName(QStringLiteral("sampleRateBox"));

        gridLayout_2->addWidget(sampleRateBox, 3, 1, 1, 1);

        containerBox = new QComboBox(settingsWidgets);
        containerBox->setObjectName(QStringLiteral("containerBox"));

        gridLayout_2->addWidget(containerBox, 2, 1, 1, 1);

        channelsBox = new QComboBox(settingsWidgets);
        channelsBox->setObjectName(QStringLiteral("channelsBox"));

        gridLayout_2->addWidget(channelsBox, 4, 1, 1, 1);

        label_5 = new QLabel(settingsWidgets);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(settingsWidgets);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        horizontalLayout->addWidget(settingsWidgets);

        encodingModeBox = new QGroupBox(AudioRecorder);
        encodingModeBox->setObjectName(QStringLiteral("encodingModeBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(encodingModeBox->sizePolicy().hasHeightForWidth());
        encodingModeBox->setSizePolicy(sizePolicy);
        encodingModeBox->setMinimumSize(QSize(0, 125));
        encodingModeBox->setMaximumSize(QSize(16777215, 150));
        gridLayout = new QGridLayout(encodingModeBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        qualitySlider = new QSlider(encodingModeBox);
        qualitySlider->setObjectName(QStringLiteral("qualitySlider"));
        qualitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qualitySlider, 1, 1, 1, 1);

        bitrateBox = new QComboBox(encodingModeBox);
        bitrateBox->setObjectName(QStringLiteral("bitrateBox"));
        bitrateBox->setEnabled(false);

        gridLayout->addWidget(bitrateBox, 3, 1, 1, 1);

        constantBitrateRadioButton = new QRadioButton(encodingModeBox);
        constantBitrateRadioButton->setObjectName(QStringLiteral("constantBitrateRadioButton"));

        gridLayout->addWidget(constantBitrateRadioButton, 2, 0, 1, 2);

        constantQualityRadioButton = new QRadioButton(encodingModeBox);
        constantQualityRadioButton->setObjectName(QStringLiteral("constantQualityRadioButton"));
        constantQualityRadioButton->setChecked(true);

        gridLayout->addWidget(constantQualityRadioButton, 0, 0, 1, 2);


        horizontalLayout->addWidget(encodingModeBox);

        volumeWidget = new QWidget(AudioRecorder);
        volumeWidget->setObjectName(QStringLiteral("volumeWidget"));
        volumeWidget->setMinimumSize(QSize(50, 125));
        volumeWidget->setMaximumSize(QSize(16777215, 150));
        verticalLayout_3 = new QVBoxLayout(volumeWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        volumeLabel = new QLabel(volumeWidget);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));

        verticalLayout_3->addWidget(volumeLabel);

        volumeSlider = new QSlider(volumeWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setOrientation(Qt::Vertical);
        volumeSlider->setTickPosition(QSlider::TicksBothSides);
        volumeSlider->setTickInterval(5);

        verticalLayout_3->addWidget(volumeSlider);


        horizontalLayout->addWidget(volumeWidget);

        levelsWidget = new QWidget(AudioRecorder);
        levelsWidget->setObjectName(QStringLiteral("levelsWidget"));
        levelsWidget->setMinimumSize(QSize(30, 20));
        levelsWidget->setMaximumSize(QSize(50, 150));
        gridLayout_5 = new QGridLayout(levelsWidget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        levelsLayout = new QHBoxLayout();
        levelsLayout->setObjectName(QStringLiteral("levelsLayout"));

        gridLayout_5->addLayout(levelsLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(levelsWidget);


        gridLayout_3->addLayout(horizontalLayout, 5, 0, 1, 1);

        buttonsWidget = new QWidget(AudioRecorder);
        buttonsWidget->setObjectName(QStringLiteral("buttonsWidget"));
        buttonsWidget->setMinimumSize(QSize(0, 30));
        buttonsWidget->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_4 = new QHBoxLayout(buttonsWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pauseButton = new QPushButton(buttonsWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setEnabled(false);
        pauseButton->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        QString iconThemeName = QStringLiteral("SP_MediaPlay");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pauseButton->setIcon(icon);

        horizontalLayout_2->addWidget(pauseButton);

        recordButton = new QPushButton(buttonsWidget);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(recordButton);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        outputButton = new QPushButton(buttonsWidget);
        outputButton->setObjectName(QStringLiteral("outputButton"));

        horizontalLayout_2->addWidget(outputButton);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        line_2 = new QFrame(buttonsWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_6 = new QLabel(buttonsWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_2->addWidget(label_6);

        statusText = new QLabel(buttonsWidget);
        statusText->setObjectName(QStringLiteral("statusText"));

        horizontalLayout_2->addWidget(statusText);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        gridLayout_3->addWidget(buttonsWidget, 7, 0, 1, 1);

        waveformWidget = new QWidget(AudioRecorder);
        waveformWidget->setObjectName(QStringLiteral("waveformWidget"));
        waveformWidget->setMinimumSize(QSize(0, 100));
        verticalLayout_4 = new QVBoxLayout(waveformWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        waveformLayout = new QVBoxLayout();
        waveformLayout->setSpacing(5);
        waveformLayout->setObjectName(QStringLiteral("waveformLayout"));

        verticalLayout_4->addLayout(waveformLayout);


        gridLayout_3->addWidget(waveformWidget, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        line = new QFrame(AudioRecorder);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(AudioRecorder);
        QObject::connect(recordButton, SIGNAL(clicked()), AudioRecorder, SLOT(toggleRecord()));
        QObject::connect(outputButton, SIGNAL(clicked()), AudioRecorder, SLOT(setOutputLocation()));
        QObject::connect(pauseButton, SIGNAL(clicked()), AudioRecorder, SLOT(togglePause()));
        QObject::connect(constantQualityRadioButton, SIGNAL(toggled(bool)), qualitySlider, SLOT(setEnabled(bool)));
        QObject::connect(constantBitrateRadioButton, SIGNAL(toggled(bool)), bitrateBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AudioRecorder);
    } // setupUi

    void retranslateUi(QWidget *AudioRecorder)
    {
        AudioRecorder->setWindowTitle(QApplication::translate("AudioRecorder", "MainWindow", Q_NULLPTR));
        label_4->setText(QApplication::translate("AudioRecorder", "Sample rate:", Q_NULLPTR));
        label->setText(QApplication::translate("AudioRecorder", "Input Device:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AudioRecorder", "File Container:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AudioRecorder", "Channels:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AudioRecorder", "Audio Codec:", Q_NULLPTR));
        encodingModeBox->setTitle(QApplication::translate("AudioRecorder", "Encoding Mode:", Q_NULLPTR));
        constantBitrateRadioButton->setText(QApplication::translate("AudioRecorder", "Constant Bitrate:", Q_NULLPTR));
        constantQualityRadioButton->setText(QApplication::translate("AudioRecorder", "Constant &Quality:", Q_NULLPTR));
        volumeLabel->setText(QApplication::translate("AudioRecorder", "Volume", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("AudioRecorder", "Pause", Q_NULLPTR));
        recordButton->setText(QApplication::translate("AudioRecorder", "Record", Q_NULLPTR));
        outputButton->setText(QApplication::translate("AudioRecorder", "Set Output File...", Q_NULLPTR));
        label_6->setText(QApplication::translate("AudioRecorder", "Status: ", Q_NULLPTR));
        statusText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AudioRecorder: public Ui_AudioRecorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIORECORDER_H
