/********************************************************************************
** Form generated from reading UI file 'levelthresholddetector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELTHRESHOLDDETECTOR_H
#define UI_LEVELTHRESHOLDDETECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_LevelThreSholdDetector
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QToolButton *toolButton;

    void setupUi(QDialog *LevelThreSholdDetector)
    {
        if (LevelThreSholdDetector->objectName().isEmpty())
            LevelThreSholdDetector->setObjectName(QStringLiteral("LevelThreSholdDetector"));
        LevelThreSholdDetector->resize(412, 182);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/levels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LevelThreSholdDetector->setWindowIcon(icon);
        gridLayout = new QGridLayout(LevelThreSholdDetector);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(LevelThreSholdDetector);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progressBar = new QProgressBar(LevelThreSholdDetector);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);

        toolButton = new QToolButton(LevelThreSholdDetector);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(35, 35));
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(LevelThreSholdDetector);

        QMetaObject::connectSlotsByName(LevelThreSholdDetector);
    } // setupUi

    void retranslateUi(QDialog *LevelThreSholdDetector)
    {
        LevelThreSholdDetector->setWindowTitle(QApplication::translate("LevelThreSholdDetector", "Level Dector", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("LevelThreSholdDetector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">LogoSpeech Studio will try to detect the best level threshold and tolerance to estimate correctly the  speech's melodic componentes.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;"
                        "\">Try to not speak during the process. When you get ready, click on  record button. It will takes a few seconds.</span></p></body></html>", Q_NULLPTR));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LevelThreSholdDetector: public Ui_LevelThreSholdDetector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELTHRESHOLDDETECTOR_H
