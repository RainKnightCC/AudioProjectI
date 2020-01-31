/********************************************************************************
** Form generated from reading UI file 'processsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSSETTINGSDIALOG_H
#define UI_PROCESSSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *restoreButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *saveButton;
    QPushButton *closeButton;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *preProcessingTab;
    QGridLayout *gridLayout_3;
    QLabel *windowImage;
    QComboBox *windowComboBox;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QCheckBox *useDC;
    QCheckBox *usePreEnphasis;
    QLabel *label_11;
    QWidget *timeAnalysisTab;
    QGridLayout *gridLayout_10;
    QLabel *label_6;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QComboBox *pitchMethodCombobox;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *minPitch;
    QSpinBox *maxPitch;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *label_3;
    QDoubleSpinBox *windowShift;
    QDoubleSpinBox *windowTime;
    QLabel *label_16;
    QSpinBox *bufferTime;
    QLabel *label_12;
    QComboBox *shortTimeMethodCombobox;
    QFrame *line_2;
    QLabel *label_9;
    QFrame *line_3;
    QWidget *frequencyAnalysisTabAnalysis;
    QGridLayout *gridLayout_13;
    QLabel *label_10;
    QComboBox *spectrogramMethod;
    QGridLayout *gridLayout_21;
    QLabel *label_7;
    QSpinBox *samplesFFT;
    QSpinBox *orderCepstrum;
    QLabel *label_17;
    QLabel *label_8;
    QSpinBox *orderLPC;
    QLabel *label_18;
    QSpinBox *orderFilterBanks;
    QFrame *line_4;
    QLabel *labelInfo;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_5;

    void setupUi(QWidget *ProcessSettingsDialog)
    {
        if (ProcessSettingsDialog->objectName().isEmpty())
            ProcessSettingsDialog->setObjectName(QStringLiteral("ProcessSettingsDialog"));
        ProcessSettingsDialog->resize(329, 354);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/process_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProcessSettingsDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ProcessSettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        restoreButton = new QPushButton(ProcessSettingsDialog);
        restoreButton->setObjectName(QStringLiteral("restoreButton"));
        restoreButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(restoreButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        saveButton = new QPushButton(ProcessSettingsDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(saveButton);

        closeButton = new QPushButton(ProcessSettingsDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tabWidget = new QTabWidget(ProcessSettingsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 "
                        "#fafafa);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}"));
        preProcessingTab = new QWidget();
        preProcessingTab->setObjectName(QStringLiteral("preProcessingTab"));
        gridLayout_3 = new QGridLayout(preProcessingTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        windowImage = new QLabel(preProcessingTab);
        windowImage->setObjectName(QStringLiteral("windowImage"));
        windowImage->setMaximumSize(QSize(300, 150));

        gridLayout_3->addWidget(windowImage, 4, 0, 1, 1);

        windowComboBox = new QComboBox(preProcessingTab);
        windowComboBox->setObjectName(QStringLiteral("windowComboBox"));

        gridLayout_3->addWidget(windowComboBox, 3, 0, 1, 1);

        line = new QFrame(preProcessingTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        useDC = new QCheckBox(preProcessingTab);
        useDC->setObjectName(QStringLiteral("useDC"));

        verticalLayout->addWidget(useDC);

        usePreEnphasis = new QCheckBox(preProcessingTab);
        usePreEnphasis->setObjectName(QStringLiteral("usePreEnphasis"));

        verticalLayout->addWidget(usePreEnphasis);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        label_11 = new QLabel(preProcessingTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        tabWidget->addTab(preProcessingTab, QString());
        timeAnalysisTab = new QWidget();
        timeAnalysisTab->setObjectName(QStringLiteral("timeAnalysisTab"));
        gridLayout_10 = new QGridLayout(timeAnalysisTab);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_6 = new QLabel(timeAnalysisTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_10->addWidget(label_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label = new QLabel(timeAnalysisTab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        pitchMethodCombobox = new QComboBox(timeAnalysisTab);
        pitchMethodCombobox->setObjectName(QStringLiteral("pitchMethodCombobox"));

        gridLayout_7->addWidget(pitchMethodCombobox, 0, 1, 1, 1);

        label_2 = new QLabel(timeAnalysisTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(timeAnalysisTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_7->addWidget(label_5, 2, 0, 1, 1);

        minPitch = new QSpinBox(timeAnalysisTab);
        minPitch->setObjectName(QStringLiteral("minPitch"));
        minPitch->setMinimum(80);
        minPitch->setMaximum(5000);
        minPitch->setSingleStep(10);
        minPitch->setValue(100);

        gridLayout_7->addWidget(minPitch, 1, 1, 1, 1);

        maxPitch = new QSpinBox(timeAnalysisTab);
        maxPitch->setObjectName(QStringLiteral("maxPitch"));
        maxPitch->setMinimum(80);
        maxPitch->setMaximum(5000);
        maxPitch->setSingleStep(10);
        maxPitch->setValue(500);

        gridLayout_7->addWidget(maxPitch, 2, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 6, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_4 = new QLabel(timeAnalysisTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(timeAnalysisTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        windowShift = new QDoubleSpinBox(timeAnalysisTab);
        windowShift->setObjectName(QStringLiteral("windowShift"));
        windowShift->setReadOnly(false);
        windowShift->setKeyboardTracking(false);
        windowShift->setDecimals(3);
        windowShift->setMinimum(0.005);
        windowShift->setMaximum(0.04);
        windowShift->setSingleStep(0.005);
        windowShift->setValue(0.01);

        gridLayout_6->addWidget(windowShift, 1, 1, 1, 1);

        windowTime = new QDoubleSpinBox(timeAnalysisTab);
        windowTime->setObjectName(QStringLiteral("windowTime"));
        windowTime->setReadOnly(false);
        windowTime->setKeyboardTracking(false);
        windowTime->setDecimals(3);
        windowTime->setMinimum(0.02);
        windowTime->setMaximum(0.1);
        windowTime->setSingleStep(0.005);
        windowTime->setValue(0.03);

        gridLayout_6->addWidget(windowTime, 0, 1, 1, 1);

        label_16 = new QLabel(timeAnalysisTab);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_6->addWidget(label_16, 2, 0, 1, 1);

        bufferTime = new QSpinBox(timeAnalysisTab);
        bufferTime->setObjectName(QStringLiteral("bufferTime"));
        bufferTime->setReadOnly(false);
        bufferTime->setKeyboardTracking(false);
        bufferTime->setMinimum(2);
        bufferTime->setMaximum(10);
        bufferTime->setValue(5);

        gridLayout_6->addWidget(bufferTime, 2, 1, 1, 1);

        label_12 = new QLabel(timeAnalysisTab);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 3, 0, 1, 1);

        shortTimeMethodCombobox = new QComboBox(timeAnalysisTab);
        shortTimeMethodCombobox->setObjectName(QStringLiteral("shortTimeMethodCombobox"));

        gridLayout_6->addWidget(shortTimeMethodCombobox, 3, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_6, 2, 0, 1, 1);

        line_2 = new QFrame(timeAnalysisTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 1, 0, 1, 1);

        label_9 = new QLabel(timeAnalysisTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_10->addWidget(label_9, 4, 0, 1, 1);

        line_3 = new QFrame(timeAnalysisTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_3, 5, 0, 1, 1);

        tabWidget->addTab(timeAnalysisTab, QString());
        label_6->raise();
        line_2->raise();
        label_9->raise();
        line_3->raise();
        frequencyAnalysisTabAnalysis = new QWidget();
        frequencyAnalysisTabAnalysis->setObjectName(QStringLiteral("frequencyAnalysisTabAnalysis"));
        gridLayout_13 = new QGridLayout(frequencyAnalysisTabAnalysis);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_10 = new QLabel(frequencyAnalysisTabAnalysis);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_13->addWidget(label_10, 0, 0, 1, 1);

        spectrogramMethod = new QComboBox(frequencyAnalysisTabAnalysis);
        spectrogramMethod->setObjectName(QStringLiteral("spectrogramMethod"));

        gridLayout_13->addWidget(spectrogramMethod, 3, 0, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        label_7 = new QLabel(frequencyAnalysisTabAnalysis);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_21->addWidget(label_7, 0, 0, 1, 1);

        samplesFFT = new QSpinBox(frequencyAnalysisTabAnalysis);
        samplesFFT->setObjectName(QStringLiteral("samplesFFT"));
        samplesFFT->setMinimum(256);
        samplesFFT->setMaximum(4096);
        samplesFFT->setSingleStep(256);
        samplesFFT->setValue(512);

        gridLayout_21->addWidget(samplesFFT, 0, 1, 1, 1);

        orderCepstrum = new QSpinBox(frequencyAnalysisTabAnalysis);
        orderCepstrum->setObjectName(QStringLiteral("orderCepstrum"));
        orderCepstrum->setMinimum(8);
        orderCepstrum->setMaximum(20);
        orderCepstrum->setValue(10);

        gridLayout_21->addWidget(orderCepstrum, 2, 1, 1, 1);

        label_17 = new QLabel(frequencyAnalysisTabAnalysis);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_21->addWidget(label_17, 2, 0, 1, 1);

        label_8 = new QLabel(frequencyAnalysisTabAnalysis);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_21->addWidget(label_8, 1, 0, 1, 1);

        orderLPC = new QSpinBox(frequencyAnalysisTabAnalysis);
        orderLPC->setObjectName(QStringLiteral("orderLPC"));
        orderLPC->setMinimum(8);
        orderLPC->setMaximum(20);
        orderLPC->setValue(13);

        gridLayout_21->addWidget(orderLPC, 1, 1, 1, 1);

        label_18 = new QLabel(frequencyAnalysisTabAnalysis);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_21->addWidget(label_18, 3, 0, 1, 1);

        orderFilterBanks = new QSpinBox(frequencyAnalysisTabAnalysis);
        orderFilterBanks->setObjectName(QStringLiteral("orderFilterBanks"));
        orderFilterBanks->setMinimum(10);
        orderFilterBanks->setMaximum(30);

        gridLayout_21->addWidget(orderFilterBanks, 3, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_21, 2, 0, 1, 1);

        line_4 = new QFrame(frequencyAnalysisTabAnalysis);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_4, 1, 0, 1, 1);

        labelInfo = new QLabel(frequencyAnalysisTabAnalysis);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));

        gridLayout_13->addWidget(labelInfo, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_4, 4, 0, 1, 1);

        tabWidget->addTab(frequencyAnalysisTabAnalysis, QString());

        horizontalLayout_5->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        line_5 = new QFrame(ProcessSettingsDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setStyleSheet(QLatin1String("Line {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 1, 0, 1, 1);


        retranslateUi(ProcessSettingsDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ProcessSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *ProcessSettingsDialog)
    {
        ProcessSettingsDialog->setWindowTitle(QApplication::translate("ProcessSettingsDialog", "Processing Settings", Q_NULLPTR));
        restoreButton->setText(QApplication::translate("ProcessSettingsDialog", "Restore", Q_NULLPTR));
        saveButton->setText(QApplication::translate("ProcessSettingsDialog", "Save", Q_NULLPTR));
        closeButton->setText(QApplication::translate("ProcessSettingsDialog", "Close", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        windowImage->setText(QString());
        windowComboBox->clear();
        windowComboBox->insertItems(0, QStringList()
         << QApplication::translate("ProcessSettingsDialog", "Hamming", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Hann", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Bartlet", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Blackman", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Kaiser", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Gauss", Q_NULLPTR)
        );
        useDC->setText(QApplication::translate("ProcessSettingsDialog", "Use Offset filter", Q_NULLPTR));
        usePreEnphasis->setText(QApplication::translate("ProcessSettingsDialog", "Use PreEnphasis filter", Q_NULLPTR));
        label_11->setText(QApplication::translate("ProcessSettingsDialog", "Windowing", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(preProcessingTab), QApplication::translate("ProcessSettingsDialog", "Pre-Processing", Q_NULLPTR));
        label_6->setText(QApplication::translate("ProcessSettingsDialog", "Short Time Analysis", Q_NULLPTR));
        label->setText(QApplication::translate("ProcessSettingsDialog", "Pitch Estimation", Q_NULLPTR));
        pitchMethodCombobox->clear();
        pitchMethodCombobox->insertItems(0, QStringList()
         << QApplication::translate("ProcessSettingsDialog", "ACF", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "AMDF", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "CEPSTRUM", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("ProcessSettingsDialog", "Min Pitch", Q_NULLPTR));
        label_5->setText(QApplication::translate("ProcessSettingsDialog", "Max Pitch", Q_NULLPTR));
        label_4->setText(QApplication::translate("ProcessSettingsDialog", "Window shift:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ProcessSettingsDialog", "Window time:", Q_NULLPTR));
        label_16->setText(QApplication::translate("ProcessSettingsDialog", "Buffer Time", Q_NULLPTR));
        label_12->setText(QApplication::translate("ProcessSettingsDialog", "Parameter", Q_NULLPTR));
        label_9->setText(QApplication::translate("ProcessSettingsDialog", "Pitch Analysis", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(timeAnalysisTab), QApplication::translate("ProcessSettingsDialog", "Time Analysis", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        frequencyAnalysisTabAnalysis->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_10->setText(QApplication::translate("ProcessSettingsDialog", "Processing Configuration", Q_NULLPTR));
        spectrogramMethod->clear();
        spectrogramMethod->insertItems(0, QStringList()
         << QApplication::translate("ProcessSettingsDialog", "FFT", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "LPC", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Cepstrum", Q_NULLPTR)
         << QApplication::translate("ProcessSettingsDialog", "Filter Bank", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("ProcessSettingsDialog", "Samples", Q_NULLPTR));
        label_17->setText(QApplication::translate("ProcessSettingsDialog", "Order Cepstrum", Q_NULLPTR));
        label_8->setText(QApplication::translate("ProcessSettingsDialog", "Order LPC", Q_NULLPTR));
        label_18->setText(QApplication::translate("ProcessSettingsDialog", "Filter Banks", Q_NULLPTR));
        labelInfo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(frequencyAnalysisTabAnalysis), QApplication::translate("ProcessSettingsDialog", "Frequency Analysis", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessSettingsDialog: public Ui_ProcessSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSSETTINGSDIALOG_H
