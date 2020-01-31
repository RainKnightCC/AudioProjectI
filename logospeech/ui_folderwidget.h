/********************************************************************************
** Form generated from reading UI file 'folderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIDGET_H
#define UI_FOLDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <customwidget/controlwidget.h>
#include <customwidget/folderlistview.h>

QT_BEGIN_NAMESPACE

class Ui_FolderWidget
{
public:
    QGridLayout *gridLayout_3;
    FolderListView *folderListView;
    QStackedWidget *stackedWidget;
    QWidget *fileDetail;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QWidget *detailWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QLabel *labelSize;
    QLabel *label_4;
    QLabel *labelDateCreated;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *labelDateModified;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *iconItem;
    QLabel *nameItem;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelFormat;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *goLeftButton;
    QToolButton *openButton;
    QSpacerItem *horizontalSpacer_5;
    ControlWidget *controlWidget;

    void setupUi(QWidget *FolderWidget)
    {
        if (FolderWidget->objectName().isEmpty())
            FolderWidget->setObjectName(QStringLiteral("FolderWidget"));
        FolderWidget->resize(182, 399);
        gridLayout_3 = new QGridLayout(FolderWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(5);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        folderListView = new FolderListView(FolderWidget);
        folderListView->setObjectName(QStringLiteral("folderListView"));

        gridLayout_3->addWidget(folderListView, 3, 0, 1, 1);

        stackedWidget = new QStackedWidget(FolderWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        fileDetail = new QWidget();
        fileDetail->setObjectName(QStringLiteral("fileDetail"));
        gridLayout = new QGridLayout(fileDetail);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        detailWidget = new QWidget(fileDetail);
        detailWidget->setObjectName(QStringLiteral("detailWidget"));
        gridLayout_2 = new QGridLayout(detailWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelSize = new QLabel(detailWidget);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        gridLayout_5->addWidget(labelSize, 1, 1, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        labelDateCreated = new QLabel(detailWidget);
        labelDateCreated->setObjectName(QStringLiteral("labelDateCreated"));

        gridLayout_5->addWidget(labelDateCreated, 2, 1, 1, 1);

        label_3 = new QLabel(detailWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(detailWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        labelDateModified = new QLabel(detailWidget);
        labelDateModified->setObjectName(QStringLiteral("labelDateModified"));

        gridLayout_5->addWidget(labelDateModified, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 3, 0, 1, 1);

        line = new QFrame(detailWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        iconItem = new QPushButton(detailWidget);
        iconItem->setObjectName(QStringLiteral("iconItem"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconItem->sizePolicy().hasHeightForWidth());
        iconItem->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/app_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconItem->setIcon(icon);
        iconItem->setIconSize(QSize(30, 30));
        iconItem->setFlat(true);

        horizontalLayout_4->addWidget(iconItem);

        nameItem = new QLabel(detailWidget);
        nameItem->setObjectName(QStringLiteral("nameItem"));

        horizontalLayout_4->addWidget(nameItem);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        labelFormat = new QLabel(detailWidget);
        labelFormat->setObjectName(QStringLiteral("labelFormat"));

        horizontalLayout_4->addWidget(labelFormat);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout_3->addWidget(detailWidget);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        stackedWidget->addWidget(fileDetail);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        goLeftButton = new QToolButton(FolderWidget);
        goLeftButton->setObjectName(QStringLiteral("goLeftButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/left_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goLeftButton->setIcon(icon1);
        goLeftButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(goLeftButton);

        openButton = new QToolButton(FolderWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/open_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon2);
        openButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(openButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        controlWidget = new ControlWidget(FolderWidget);
        controlWidget->setObjectName(QStringLiteral("controlWidget"));

        gridLayout_3->addWidget(controlWidget, 0, 0, 1, 1);


        retranslateUi(FolderWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FolderWidget);
    } // setupUi

    void retranslateUi(QWidget *FolderWidget)
    {
        FolderWidget->setWindowTitle(QApplication::translate("FolderWidget", "Form", Q_NULLPTR));
        labelSize->setText(QString());
        label_4->setText(QApplication::translate("FolderWidget", "Date created:", Q_NULLPTR));
        labelDateCreated->setText(QString());
        label_3->setText(QApplication::translate("FolderWidget", "Size:", Q_NULLPTR));
        label_2->setText(QApplication::translate("FolderWidget", "Date modified:", Q_NULLPTR));
        labelDateModified->setText(QString());
        iconItem->setText(QString());
        nameItem->setText(QString());
        labelFormat->setText(QString());
        goLeftButton->setText(QString());
        openButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FolderWidget: public Ui_FolderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIDGET_H
