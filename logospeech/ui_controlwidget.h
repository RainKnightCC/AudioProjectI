/********************************************************************************
** Form generated from reading UI file 'controlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWIDGET_H
#define UI_CONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDial *pitchTolerance;
    QDial *pitchLevel;
    QLabel *label;
    QLabel *label_2;
    QLabel *levelValue;
    QLabel *toleranceValue;
    QSlider *compressionFactor;

    void setupUi(QWidget *ControlWidget)
    {
        if (ControlWidget->objectName().isEmpty())
            ControlWidget->setObjectName(QStringLiteral("ControlWidget"));
        ControlWidget->resize(190, 120);
        verticalLayout = new QVBoxLayout(ControlWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pitchTolerance = new QDial(ControlWidget);
        pitchTolerance->setObjectName(QStringLiteral("pitchTolerance"));
        pitchTolerance->setMaximum(100);
        pitchTolerance->setPageStep(10);
        pitchTolerance->setValue(0);
        pitchTolerance->setOrientation(Qt::Horizontal);
        pitchTolerance->setWrapping(false);
        pitchTolerance->setNotchTarget(7.7);
        pitchTolerance->setNotchesVisible(false);

        gridLayout->addWidget(pitchTolerance, 0, 1, 1, 1);

        pitchLevel = new QDial(ControlWidget);
        pitchLevel->setObjectName(QStringLiteral("pitchLevel"));
        pitchLevel->setMinimum(-100);
        pitchLevel->setMaximum(100);
        pitchLevel->setValue(0);
        pitchLevel->setSliderPosition(0);

        gridLayout->addWidget(pitchLevel, 0, 0, 1, 1);

        label = new QLabel(ControlWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(ControlWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        levelValue = new QLabel(ControlWidget);
        levelValue->setObjectName(QStringLiteral("levelValue"));
        levelValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(levelValue, 2, 0, 1, 1);

        toleranceValue = new QLabel(ControlWidget);
        toleranceValue->setObjectName(QStringLiteral("toleranceValue"));
        toleranceValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(toleranceValue, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        compressionFactor = new QSlider(ControlWidget);
        compressionFactor->setObjectName(QStringLiteral("compressionFactor"));
        compressionFactor->setMaximum(100);
        compressionFactor->setPageStep(1);
        compressionFactor->setValue(0);
        compressionFactor->setTracking(true);
        compressionFactor->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(compressionFactor);


        retranslateUi(ControlWidget);

        QMetaObject::connectSlotsByName(ControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlWidget)
    {
        ControlWidget->setWindowTitle(QApplication::translate("ControlWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ControlWidget", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Level</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ControlWidget", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Tolerance</span></p></body></html>", Q_NULLPTR));
        levelValue->setText(QString());
        toleranceValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ControlWidget: public Ui_ControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWIDGET_H
