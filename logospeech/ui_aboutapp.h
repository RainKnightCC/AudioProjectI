/********************************************************************************
** Form generated from reading UI file 'aboutapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTAPP_H
#define UI_ABOUTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutApp
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *AboutApp)
    {
        if (AboutApp->objectName().isEmpty())
            AboutApp->setObjectName(QStringLiteral("AboutApp"));
        AboutApp->resize(383, 311);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/app_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutApp->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(AboutApp);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(AboutApp);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(60, 60));
        toolButton->setAutoRepeatDelay(306);
        toolButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AboutApp);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AboutApp);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(AboutApp);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(textBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toolButton_5 = new QToolButton(AboutApp);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/windows.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon1);
        toolButton_5->setIconSize(QSize(35, 35));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_5->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(AboutApp);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/mac.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon2);
        toolButton_6->setIconSize(QSize(35, 35));
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_6->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(AboutApp);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/icons/linux.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon3);
        toolButton_7->setIconSize(QSize(35, 35));
        toolButton_7->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_7->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(AboutApp);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/icons/android.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon4);
        toolButton_8->setIconSize(QSize(35, 35));
        toolButton_8->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_8->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_8);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_3 = new QLabel(AboutApp);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(AboutApp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_4);


        retranslateUi(AboutApp);

        QMetaObject::connectSlotsByName(AboutApp);
    } // setupUi

    void retranslateUi(QDialog *AboutApp)
    {
        AboutApp->setWindowTitle(QApplication::translate("AboutApp", "About", Q_NULLPTR));
        toolButton->setText(QString());
        label->setText(QApplication::translate("AboutApp", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">LogoSpeech Studio</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AboutApp", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#55aaff;\">An easy way to improve Linguistic Research</span></p></body></html>", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("AboutApp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Geneva,sans-serif'; font-size:10pt; font-weight:600; color:#000000; background-color:#ffffff;\">LogoSpeech Studio is a multiplatform free software tool for linguistic research. It's designed to support the process of vocalization and speech recognition in speech therapy teaching by an easy variety of measurements and tasks like measuring duration, formants or pitch.</span></p></body></html>", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("AboutApp", "Windows", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        toolButton_5->setShortcut(QApplication::translate("AboutApp", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        toolButton_6->setText(QApplication::translate("AboutApp", "Mac", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("AboutApp", "Linux", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("AboutApp", "Android", Q_NULLPTR));
        label_3->setText(QApplication::translate("AboutApp", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Copyright \302\251 2015, Mohammed Boujemaoui. All Rights Reseved.</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("AboutApp", "<html><head/><body><p>\n"
"Contact:\n"
"<a href=\"mailto:mohaboujemaoui@gmail.com?Subject=LogoSpeech%20Studio\" target=\"_top\">mohaboujemaoui@gmail.com</a>\n"
"</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutApp: public Ui_AboutApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTAPP_H
