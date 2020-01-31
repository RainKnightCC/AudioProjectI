/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <customwidget/folderwidget.h>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRecord;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionFull_Screen;
    QAction *actionRecordSettings;
    QAction *actionProcessSettings;
    QAction *actionChartSettings;
    QAction *actionAbout_TFG;
    QAction *actionAbout_Qt;
    QAction *actionShowEnergy;
    QAction *actionShowPitch;
    QAction *actionShowSpectrogram;
    QAction *actionShowTerminal;
    QAction *actionPlay;
    QAction *actionPreview;
    QAction *actionFollow_Us;
    QAction *actionLike_This;
    QAction *actionSource_Code;
    QAction *actionEstimate_Levels;
    QAction *actionSpanish;
    QAction *actionEnglish;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QFrame *line_4;
    QCustomPlot *chartWAVFile;
    QSplitter *splitter;
    QCustomPlot *chartEnergy;
    QCustomPlot *chartPitch;
    QCustomPlot *chartSpectrogram;
    QWidget *infoPanel;
    QGridLayout *gridLayout_2;
    FolderWidget *folderWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuLanguage;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(840, 553);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/app_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QStringLiteral("actionRecord"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/icons/full_screen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFull_Screen->setIcon(icon6);
        actionRecordSettings = new QAction(MainWindow);
        actionRecordSettings->setObjectName(QStringLiteral("actionRecordSettings"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/icons/record_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecordSettings->setIcon(icon7);
        actionProcessSettings = new QAction(MainWindow);
        actionProcessSettings->setObjectName(QStringLiteral("actionProcessSettings"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/icons/process_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProcessSettings->setIcon(icon8);
        actionChartSettings = new QAction(MainWindow);
        actionChartSettings->setObjectName(QStringLiteral("actionChartSettings"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/icons/chart_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChartSettings->setIcon(icon9);
        actionAbout_TFG = new QAction(MainWindow);
        actionAbout_TFG->setObjectName(QStringLiteral("actionAbout_TFG"));
        actionAbout_TFG->setIcon(icon);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/icons/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon10);
        actionShowEnergy = new QAction(MainWindow);
        actionShowEnergy->setObjectName(QStringLiteral("actionShowEnergy"));
        actionShowEnergy->setCheckable(true);
        actionShowPitch = new QAction(MainWindow);
        actionShowPitch->setObjectName(QStringLiteral("actionShowPitch"));
        actionShowPitch->setCheckable(true);
        actionShowSpectrogram = new QAction(MainWindow);
        actionShowSpectrogram->setObjectName(QStringLiteral("actionShowSpectrogram"));
        actionShowSpectrogram->setCheckable(true);
        actionShowTerminal = new QAction(MainWindow);
        actionShowTerminal->setObjectName(QStringLiteral("actionShowTerminal"));
        actionShowTerminal->setCheckable(true);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        actionPlay->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/resources/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon11);
        actionPreview = new QAction(MainWindow);
        actionPreview->setObjectName(QStringLiteral("actionPreview"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/resources/icons/overview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreview->setIcon(icon12);
        actionFollow_Us = new QAction(MainWindow);
        actionFollow_Us->setObjectName(QStringLiteral("actionFollow_Us"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/resources/icons/twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFollow_Us->setIcon(icon13);
        actionLike_This = new QAction(MainWindow);
        actionLike_This->setObjectName(QStringLiteral("actionLike_This"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/resources/icons/facebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLike_This->setIcon(icon14);
        actionSource_Code = new QAction(MainWindow);
        actionSource_Code->setObjectName(QStringLiteral("actionSource_Code"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/resources/icons/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSource_Code->setIcon(icon15);
        actionEstimate_Levels = new QAction(MainWindow);
        actionEstimate_Levels->setObjectName(QStringLiteral("actionEstimate_Levels"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/resources/icons/levels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstimate_Levels->setIcon(icon16);
        actionSpanish = new QAction(MainWindow);
        actionSpanish->setObjectName(QStringLiteral("actionSpanish"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 0, 1, 3);

        chartWAVFile = new QCustomPlot(centralWidget);
        chartWAVFile->setObjectName(QStringLiteral("chartWAVFile"));
        chartWAVFile->setMinimumSize(QSize(0, 40));
        chartWAVFile->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(chartWAVFile, 2, 0, 1, 3);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setStyleSheet(QLatin1String("QSplitter::handle {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, \n"
"stop:0 rgba(255, 255, 255, 0), \n"
"stop:0.407273 rgba(200, 200, 200, 255), \n"
"stop:0.4825 rgba(101, 104, 113, 235), \n"
"stop:0.6 rgba(255, 255, 255, 0));\n"
"    image: url(:/images/splitter.png);\n"
"     }"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(1);
        chartEnergy = new QCustomPlot(splitter);
        chartEnergy->setObjectName(QStringLiteral("chartEnergy"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chartEnergy->sizePolicy().hasHeightForWidth());
        chartEnergy->setSizePolicy(sizePolicy1);
        chartEnergy->setMinimumSize(QSize(0, 50));
        chartEnergy->setContextMenuPolicy(Qt::CustomContextMenu);
        chartEnergy->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(chartEnergy);
        chartPitch = new QCustomPlot(splitter);
        chartPitch->setObjectName(QStringLiteral("chartPitch"));
        sizePolicy1.setHeightForWidth(chartPitch->sizePolicy().hasHeightForWidth());
        chartPitch->setSizePolicy(sizePolicy1);
        chartPitch->setMinimumSize(QSize(0, 50));
        chartPitch->setContextMenuPolicy(Qt::CustomContextMenu);
        chartPitch->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(chartPitch);
        chartSpectrogram = new QCustomPlot(splitter);
        chartSpectrogram->setObjectName(QStringLiteral("chartSpectrogram"));
        sizePolicy1.setHeightForWidth(chartSpectrogram->sizePolicy().hasHeightForWidth());
        chartSpectrogram->setSizePolicy(sizePolicy1);
        chartSpectrogram->setMinimumSize(QSize(0, 50));
        chartSpectrogram->setContextMenuPolicy(Qt::CustomContextMenu);
        chartSpectrogram->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(chartSpectrogram);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        infoPanel = new QWidget(centralWidget);
        infoPanel->setObjectName(QStringLiteral("infoPanel"));
        infoPanel->setMaximumSize(QSize(200, 16777215));
        gridLayout_2 = new QGridLayout(infoPanel);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        folderWidget = new FolderWidget(infoPanel);
        folderWidget->setObjectName(QStringLiteral("folderWidget"));
        folderWidget->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(folderWidget, 0, 0, 1, 1);


        gridLayout->addWidget(infoPanel, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 840, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuLanguage = new QMenu(menuEdit);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy2);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setStyleSheet(QStringLiteral(""));
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        mainToolBar->setIconSize(QSize(30, 30));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral(""));
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionRecord);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionPreview);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionRecordSettings);
        menuEdit->addAction(actionProcessSettings);
        menuEdit->addAction(actionChartSettings);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEstimate_Levels);
        menuEdit->addSeparator();
        menuEdit->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionSpanish);
        menuLanguage->addAction(actionEnglish);
        menuView->addAction(actionShowTerminal);
        menuView->addSeparator();
        menuView->addAction(actionShowEnergy);
        menuView->addAction(actionShowPitch);
        menuView->addAction(actionShowSpectrogram);
        menuView->addSeparator();
        menuView->addAction(actionFull_Screen);
        menuHelp->addAction(actionFollow_Us);
        menuHelp->addAction(actionLike_This);
        menuHelp->addAction(actionSource_Code);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_TFG);
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionPreview);
        mainToolBar->addAction(actionPrint);
        toolBar->addAction(actionRecord);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LogoSpeech Studio", Q_NULLPTR));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRecord->setToolTip(QApplication::translate("MainWindow", "Click to record speech signals ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRecord->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open an existing audio file ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save the current signal ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindow", "Print the current signal processing ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Full Screen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFull_Screen->setToolTip(QApplication::translate("MainWindow", "Toggle Full Screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionFull_Screen->setShortcut(QApplication::translate("MainWindow", "F11", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRecordSettings->setText(QApplication::translate("MainWindow", "Record Settings", Q_NULLPTR));
        actionProcessSettings->setText(QApplication::translate("MainWindow", "Processing Settings", Q_NULLPTR));
        actionChartSettings->setText(QApplication::translate("MainWindow", "Chart Settings", Q_NULLPTR));
        actionAbout_TFG->setText(QApplication::translate("MainWindow", "About TFG", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionShowEnergy->setText(QApplication::translate("MainWindow", "Energy  Chart", Q_NULLPTR));
        actionShowPitch->setText(QApplication::translate("MainWindow", "Pitch Chart", Q_NULLPTR));
        actionShowSpectrogram->setText(QApplication::translate("MainWindow", "Spectrogram", Q_NULLPTR));
        actionShowTerminal->setText(QApplication::translate("MainWindow", "Terminal", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        actionPreview->setText(QApplication::translate("MainWindow", "Overview", Q_NULLPTR));
        actionFollow_Us->setText(QApplication::translate("MainWindow", "Follow Us", Q_NULLPTR));
        actionLike_This->setText(QApplication::translate("MainWindow", "Like This", Q_NULLPTR));
        actionSource_Code->setText(QApplication::translate("MainWindow", "Source Code", Q_NULLPTR));
        actionEstimate_Levels->setText(QApplication::translate("MainWindow", "Estimate Levels", Q_NULLPTR));
        actionSpanish->setText(QApplication::translate("MainWindow", "Spanish", Q_NULLPTR));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "View", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Settings Toolbar", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "Record Toolbar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
