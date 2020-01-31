/********************************************************************************
** Form generated from reading UI file 'recordersettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDERSETTINGSDIALOG_H
#define UI_RECORDERSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RecorderSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *folderText;
    QToolButton *folderButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *restoreButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *saveButton;
    QPushButton *closeButton;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *codecLabel;
    QComboBox *codecComboBox;
    QLabel *sampleRateLabel;
    QLabel *deviceLabel;
    QComboBox *containerComboBox;
    QComboBox *sampleRateComboBox;
    QLabel *containerLabel;
    QComboBox *deviceComboBox;

    void setupUi(QDialog *RecorderSettingsDialog)
    {
        if (RecorderSettingsDialog->objectName().isEmpty())
            RecorderSettingsDialog->setObjectName(QStringLiteral("RecorderSettingsDialog"));
        RecorderSettingsDialog->resize(381, 232);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/record_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        RecorderSettingsDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(RecorderSettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        folderText = new QTextEdit(RecorderSettingsDialog);
        folderText->setObjectName(QStringLiteral("folderText"));
        folderText->setMaximumSize(QSize(16777215, 25));
        folderText->setReadOnly(true);

        horizontalLayout->addWidget(folderText);

        folderButton = new QToolButton(RecorderSettingsDialog);
        folderButton->setObjectName(QStringLiteral("folderButton"));

        horizontalLayout->addWidget(folderButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        restoreButton = new QPushButton(RecorderSettingsDialog);
        restoreButton->setObjectName(QStringLiteral("restoreButton"));

        horizontalLayout_2->addWidget(restoreButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        saveButton = new QPushButton(RecorderSettingsDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        closeButton = new QPushButton(RecorderSettingsDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        label = new QLabel(RecorderSettingsDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        groupBox = new QGroupBox(RecorderSettingsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        codecLabel = new QLabel(groupBox);
        codecLabel->setObjectName(QStringLiteral("codecLabel"));

        gridLayout_2->addWidget(codecLabel, 1, 0, 1, 1);

        codecComboBox = new QComboBox(groupBox);
        codecComboBox->setObjectName(QStringLiteral("codecComboBox"));

        gridLayout_2->addWidget(codecComboBox, 1, 2, 1, 1);

        sampleRateLabel = new QLabel(groupBox);
        sampleRateLabel->setObjectName(QStringLiteral("sampleRateLabel"));

        gridLayout_2->addWidget(sampleRateLabel, 3, 0, 1, 1);

        deviceLabel = new QLabel(groupBox);
        deviceLabel->setObjectName(QStringLiteral("deviceLabel"));

        gridLayout_2->addWidget(deviceLabel, 0, 0, 1, 1);

        containerComboBox = new QComboBox(groupBox);
        containerComboBox->setObjectName(QStringLiteral("containerComboBox"));

        gridLayout_2->addWidget(containerComboBox, 2, 2, 1, 1);

        sampleRateComboBox = new QComboBox(groupBox);
        sampleRateComboBox->setObjectName(QStringLiteral("sampleRateComboBox"));

        gridLayout_2->addWidget(sampleRateComboBox, 3, 2, 1, 1);

        containerLabel = new QLabel(groupBox);
        containerLabel->setObjectName(QStringLiteral("containerLabel"));

        gridLayout_2->addWidget(containerLabel, 2, 0, 1, 1);

        deviceComboBox = new QComboBox(groupBox);
        deviceComboBox->setObjectName(QStringLiteral("deviceComboBox"));

        gridLayout_2->addWidget(deviceComboBox, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(RecorderSettingsDialog);

        QMetaObject::connectSlotsByName(RecorderSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *RecorderSettingsDialog)
    {
        RecorderSettingsDialog->setWindowTitle(QApplication::translate("RecorderSettingsDialog", "Record Settings", Q_NULLPTR));
        folderButton->setText(QApplication::translate("RecorderSettingsDialog", "...", Q_NULLPTR));
        restoreButton->setText(QApplication::translate("RecorderSettingsDialog", "Restore", Q_NULLPTR));
        saveButton->setText(QApplication::translate("RecorderSettingsDialog", "Save", Q_NULLPTR));
        closeButton->setText(QApplication::translate("RecorderSettingsDialog", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("RecorderSettingsDialog", "Folder", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RecorderSettingsDialog", "Record Settings", Q_NULLPTR));
        codecLabel->setText(QApplication::translate("RecorderSettingsDialog", "Codec", Q_NULLPTR));
        sampleRateLabel->setText(QApplication::translate("RecorderSettingsDialog", "Samplerate", Q_NULLPTR));
        deviceLabel->setText(QApplication::translate("RecorderSettingsDialog", "Device", Q_NULLPTR));
        containerLabel->setText(QApplication::translate("RecorderSettingsDialog", "Container", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RecorderSettingsDialog: public Ui_RecorderSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDERSETTINGSDIALOG_H
