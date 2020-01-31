/********************************************************************************
** Form generated from reading UI file 'folderlistview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERLISTVIEW_H
#define UI_FOLDERLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderListView
{
public:

    void setupUi(QWidget *FolderListView)
    {
        if (FolderListView->objectName().isEmpty())
            FolderListView->setObjectName(QStringLiteral("FolderListView"));
        FolderListView->resize(400, 300);

        retranslateUi(FolderListView);

        QMetaObject::connectSlotsByName(FolderListView);
    } // setupUi

    void retranslateUi(QWidget *FolderListView)
    {
        FolderListView->setWindowTitle(QApplication::translate("FolderListView", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FolderListView: public Ui_FolderListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERLISTVIEW_H
