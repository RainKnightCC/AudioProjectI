/********************************************************************************
** Form generated from reading UI file 'chartsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTSETTINGSDIALOG_H
#define UI_CHARTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChartSettingsDialog
{
public:
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *energyTab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_24;
    QCheckBox *energyXGrid;
    QCheckBox *energyYGrid;
    QCheckBox *energyYAxis;
    QSpinBox *energyLineWidth;
    QCheckBox *energyXAxis;
    QLabel *label_21;
    QPushButton *energyColor;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *pitchChart;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_7;
    QLabel *label_27;
    QCheckBox *pitchXAxis;
    QCheckBox *pitchYGrid;
    QCheckBox *pitchYAxis;
    QCheckBox *pitchXGrid;
    QSpinBox *pitchLineWidth;
    QLabel *label_19;
    QPushButton *pitchColor;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *spectrogramTab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_10;
    QLabel *label_37;
    QComboBox *spectrogramColorMap;
    QLabel *colormapImage;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *spectrogramXAxis;
    QCheckBox *spectrogramYAxis;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *valueLabel;
    QFrame *line_2;
    QSlider *muLaw;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *restoreButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *saveButton;
    QPushButton *closeButton;

    void setupUi(QDialog *ChartSettingsDialog)
    {
        if (ChartSettingsDialog->objectName().isEmpty())
            ChartSettingsDialog->setObjectName(QStringLiteral("ChartSettingsDialog"));
        ChartSettingsDialog->resize(326, 236);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/chart_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChartSettingsDialog->setWindowIcon(icon);
        ChartSettingsDialog->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(ChartSettingsDialog);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tabWidget = new QTabWidget(ChartSettingsDialog);
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
        energyTab = new QWidget();
        energyTab->setObjectName(QStringLiteral("energyTab"));
        gridLayout_2 = new QGridLayout(energyTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_24 = new QLabel(energyTab);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout->addWidget(label_24, 1, 0, 1, 1);

        energyXGrid = new QCheckBox(energyTab);
        energyXGrid->setObjectName(QStringLiteral("energyXGrid"));

        gridLayout->addWidget(energyXGrid, 3, 0, 1, 1);

        energyYGrid = new QCheckBox(energyTab);
        energyYGrid->setObjectName(QStringLiteral("energyYGrid"));

        gridLayout->addWidget(energyYGrid, 3, 1, 1, 1);

        energyYAxis = new QCheckBox(energyTab);
        energyYAxis->setObjectName(QStringLiteral("energyYAxis"));

        gridLayout->addWidget(energyYAxis, 2, 1, 1, 1);

        energyLineWidth = new QSpinBox(energyTab);
        energyLineWidth->setObjectName(QStringLiteral("energyLineWidth"));
        energyLineWidth->setMinimum(1);
        energyLineWidth->setMaximum(10);

        gridLayout->addWidget(energyLineWidth, 0, 1, 1, 1);

        energyXAxis = new QCheckBox(energyTab);
        energyXAxis->setObjectName(QStringLiteral("energyXAxis"));

        gridLayout->addWidget(energyXAxis, 2, 0, 1, 1);

        label_21 = new QLabel(energyTab);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout->addWidget(label_21, 0, 0, 1, 1);

        energyColor = new QPushButton(energyTab);
        energyColor->setObjectName(QStringLiteral("energyColor"));
        energyColor->setStyleSheet(QStringLiteral(""));
        energyColor->setFlat(true);

        gridLayout->addWidget(energyColor, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 0, 1, 1);

        tabWidget->addTab(energyTab, QString());
        pitchChart = new QWidget();
        pitchChart->setObjectName(QStringLiteral("pitchChart"));
        gridLayout_3 = new QGridLayout(pitchChart);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_27 = new QLabel(pitchChart);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        pitchXAxis = new QCheckBox(pitchChart);
        pitchXAxis->setObjectName(QStringLiteral("pitchXAxis"));

        gridLayout_7->addWidget(pitchXAxis, 2, 0, 1, 1);

        pitchYGrid = new QCheckBox(pitchChart);
        pitchYGrid->setObjectName(QStringLiteral("pitchYGrid"));

        gridLayout_7->addWidget(pitchYGrid, 3, 1, 1, 1);

        pitchYAxis = new QCheckBox(pitchChart);
        pitchYAxis->setObjectName(QStringLiteral("pitchYAxis"));

        gridLayout_7->addWidget(pitchYAxis, 2, 1, 1, 1);

        pitchXGrid = new QCheckBox(pitchChart);
        pitchXGrid->setObjectName(QStringLiteral("pitchXGrid"));

        gridLayout_7->addWidget(pitchXGrid, 3, 0, 1, 1);

        pitchLineWidth = new QSpinBox(pitchChart);
        pitchLineWidth->setObjectName(QStringLiteral("pitchLineWidth"));
        pitchLineWidth->setMinimum(1);
        pitchLineWidth->setMaximum(10);

        gridLayout_7->addWidget(pitchLineWidth, 0, 1, 1, 1);

        label_19 = new QLabel(pitchChart);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_7->addWidget(label_19, 0, 0, 1, 1);

        pitchColor = new QPushButton(pitchChart);
        pitchColor->setObjectName(QStringLiteral("pitchColor"));
        pitchColor->setStyleSheet(QStringLiteral(""));
        pitchColor->setFlat(true);

        gridLayout_7->addWidget(pitchColor, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_7, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(pitchChart, QString());
        spectrogramTab = new QWidget();
        spectrogramTab->setObjectName(QStringLiteral("spectrogramTab"));
        verticalLayout = new QVBoxLayout(spectrogramTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_37 = new QLabel(spectrogramTab);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_10->addWidget(label_37, 2, 0, 1, 1);

        spectrogramColorMap = new QComboBox(spectrogramTab);
        spectrogramColorMap->setObjectName(QStringLiteral("spectrogramColorMap"));

        gridLayout_10->addWidget(spectrogramColorMap, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_10);

        colormapImage = new QLabel(spectrogramTab);
        colormapImage->setObjectName(QStringLiteral("colormapImage"));
        colormapImage->setMinimumSize(QSize(0, 20));
        colormapImage->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(colormapImage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spectrogramXAxis = new QCheckBox(spectrogramTab);
        spectrogramXAxis->setObjectName(QStringLiteral("spectrogramXAxis"));

        horizontalLayout_2->addWidget(spectrogramXAxis);

        spectrogramYAxis = new QCheckBox(spectrogramTab);
        spectrogramYAxis->setObjectName(QStringLiteral("spectrogramYAxis"));

        horizontalLayout_2->addWidget(spectrogramYAxis);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(spectrogramTab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        valueLabel = new QLabel(spectrogramTab);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        horizontalLayout_3->addWidget(valueLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(spectrogramTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        muLaw = new QSlider(spectrogramTab);
        muLaw->setObjectName(QStringLiteral("muLaw"));
        muLaw->setMinimum(-100);
        muLaw->setMaximum(100);
        muLaw->setSingleStep(1);
        muLaw->setPageStep(1);
        muLaw->setValue(0);
        muLaw->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(muLaw);

        tabWidget->addTab(spectrogramTab, QString());

        horizontalLayout_4->addWidget(tabWidget);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        line = new QFrame(ChartSettingsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        restoreButton = new QPushButton(ChartSettingsDialog);
        restoreButton->setObjectName(QStringLiteral("restoreButton"));
        restoreButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(restoreButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        saveButton = new QPushButton(ChartSettingsDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(saveButton);

        closeButton = new QPushButton(ChartSettingsDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(closeButton);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ChartSettingsDialog);

        tabWidget->setCurrentIndex(2);
        energyColor->setDefault(false);
        pitchColor->setDefault(false);
        restoreButton->setDefault(false);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(ChartSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ChartSettingsDialog)
    {
        ChartSettingsDialog->setWindowTitle(QApplication::translate("ChartSettingsDialog", "Chart Settings", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_24->setText(QApplication::translate("ChartSettingsDialog", "Color - Linea", Q_NULLPTR));
        energyXGrid->setText(QApplication::translate("ChartSettingsDialog", "X Grid", Q_NULLPTR));
        energyYGrid->setText(QApplication::translate("ChartSettingsDialog", "Y Grid", Q_NULLPTR));
        energyYAxis->setText(QApplication::translate("ChartSettingsDialog", "Y Axis", Q_NULLPTR));
        energyXAxis->setText(QApplication::translate("ChartSettingsDialog", "X Axis", Q_NULLPTR));
        label_21->setText(QApplication::translate("ChartSettingsDialog", "Grosor - Linea", Q_NULLPTR));
        energyColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(energyTab), QApplication::translate("ChartSettingsDialog", "Energy Chart", Q_NULLPTR));
        label_27->setText(QApplication::translate("ChartSettingsDialog", "Color - Linea", Q_NULLPTR));
        pitchXAxis->setText(QApplication::translate("ChartSettingsDialog", "X Axis", Q_NULLPTR));
        pitchYGrid->setText(QApplication::translate("ChartSettingsDialog", "Y Grid", Q_NULLPTR));
        pitchYAxis->setText(QApplication::translate("ChartSettingsDialog", "Y Axis", Q_NULLPTR));
        pitchXGrid->setText(QApplication::translate("ChartSettingsDialog", "X Grid", Q_NULLPTR));
        label_19->setText(QApplication::translate("ChartSettingsDialog", "Grosor - Linea", Q_NULLPTR));
        pitchColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pitchChart), QApplication::translate("ChartSettingsDialog", "Pitch Chart", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        spectrogramTab->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_37->setText(QApplication::translate("ChartSettingsDialog", "Color", Q_NULLPTR));
        spectrogramColorMap->clear();
        spectrogramColorMap->insertItems(0, QStringList()
         << QApplication::translate("ChartSettingsDialog", "Spectral", Q_NULLPTR)
         << QApplication::translate("ChartSettingsDialog", "Jet", Q_NULLPTR)
         << QApplication::translate("ChartSettingsDialog", "Grey", Q_NULLPTR)
         << QApplication::translate("ChartSettingsDialog", "Hot", Q_NULLPTR)
         << QApplication::translate("ChartSettingsDialog", "Cold", Q_NULLPTR)
         << QApplication::translate("ChartSettingsDialog", "Hues", Q_NULLPTR)
        );
        colormapImage->setText(QString());
        spectrogramXAxis->setText(QApplication::translate("ChartSettingsDialog", "X Axis", Q_NULLPTR));
        spectrogramYAxis->setText(QApplication::translate("ChartSettingsDialog", "Y Axis", Q_NULLPTR));
        label->setText(QApplication::translate("ChartSettingsDialog", "Compretion Factor", Q_NULLPTR));
        valueLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(spectrogramTab), QApplication::translate("ChartSettingsDialog", "Spectrogram Chart", Q_NULLPTR));
        restoreButton->setText(QApplication::translate("ChartSettingsDialog", "Restore", Q_NULLPTR));
        saveButton->setText(QApplication::translate("ChartSettingsDialog", "Save", Q_NULLPTR));
        closeButton->setText(QApplication::translate("ChartSettingsDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChartSettingsDialog: public Ui_ChartSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTSETTINGSDIALOG_H
