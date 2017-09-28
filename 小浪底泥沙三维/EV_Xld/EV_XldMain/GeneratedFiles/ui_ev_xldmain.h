/********************************************************************************
** Form generated from reading UI file 'ev_xldmain.ui'
**
** Created: Thu Sep 28 16:43:06 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EV_XLDMAIN_H
#define UI_EV_XLDMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "qtplugins/evworkspace.h"
#include "qtplugins/globewidget.h"

QT_BEGIN_NAMESPACE

class Ui_EV_XldMainClass
{
public:
    QAction *actionReadGrd;
    QAction *actionGrd2GTiff;
    QAction *actionGrdLOD;
    QAction *actionGrdRender;
    QWidget *centralWidget;
    EVWorkspace *evWorkspace;
    GlobeWidget *globeWidget;
    QTreeWidget *treeWidget;
    QTreeView *treeView;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuGrd;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EV_XldMainClass)
    {
        if (EV_XldMainClass->objectName().isEmpty())
            EV_XldMainClass->setObjectName(QString::fromUtf8("EV_XldMainClass"));
        EV_XldMainClass->resize(1372, 895);
        actionReadGrd = new QAction(EV_XldMainClass);
        actionReadGrd->setObjectName(QString::fromUtf8("actionReadGrd"));
        actionGrd2GTiff = new QAction(EV_XldMainClass);
        actionGrd2GTiff->setObjectName(QString::fromUtf8("actionGrd2GTiff"));
        actionGrdLOD = new QAction(EV_XldMainClass);
        actionGrdLOD->setObjectName(QString::fromUtf8("actionGrdLOD"));
        actionGrdRender = new QAction(EV_XldMainClass);
        actionGrdRender->setObjectName(QString::fromUtf8("actionGrdRender"));
        centralWidget = new QWidget(EV_XldMainClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        evWorkspace = new EVWorkspace(centralWidget);
        evWorkspace->setObjectName(QString::fromUtf8("evWorkspace"));
        evWorkspace->setGeometry(QRect(210, 260, 48, 48));
        evWorkspace->setProperty("useAbsolutePath", QVariant(false));
        evWorkspace->setProperty("showSplash", QVariant(false));
        globeWidget = new GlobeWidget(centralWidget);
        globeWidget->setObjectName(QString::fromUtf8("globeWidget"));
        globeWidget->setGeometry(QRect(9, 9, 831, 831));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(1110, 10, 256, 471));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(850, 10, 256, 471));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(850, 540, 71, 16));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(850, 500, 511, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        EV_XldMainClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EV_XldMainClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1372, 23));
        menuGrd = new QMenu(menuBar);
        menuGrd->setObjectName(QString::fromUtf8("menuGrd"));
        EV_XldMainClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EV_XldMainClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EV_XldMainClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EV_XldMainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EV_XldMainClass->setStatusBar(statusBar);

        menuBar->addAction(menuGrd->menuAction());
        menuGrd->addAction(actionReadGrd);
        menuGrd->addAction(actionGrd2GTiff);
        menuGrd->addAction(actionGrdLOD);
        menuGrd->addAction(actionGrdRender);

        retranslateUi(EV_XldMainClass);

        QMetaObject::connectSlotsByName(EV_XldMainClass);
    } // setupUi

    void retranslateUi(QMainWindow *EV_XldMainClass)
    {
        EV_XldMainClass->setWindowTitle(QApplication::translate("EV_XldMainClass", "EV_XldMain", 0, QApplication::UnicodeUTF8));
        actionReadGrd->setText(QApplication::translate("EV_XldMainClass", "Grd\346\226\207\344\273\266\350\257\273\345\217\226", 0, QApplication::UnicodeUTF8));
        actionGrd2GTiff->setText(QApplication::translate("EV_XldMainClass", "Grd\346\226\207\344\273\266\350\275\254\346\215\242", 0, QApplication::UnicodeUTF8));
        actionGrdLOD->setText(QApplication::translate("EV_XldMainClass", "Grd\345\234\260\345\275\242\346\225\260\346\215\256\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        actionGrdRender->setText(QApplication::translate("EV_XldMainClass", "Grd\345\234\260\345\275\242\346\270\262\346\237\223", 0, QApplication::UnicodeUTF8));
        evWorkspace->setProperty("projectName", QVariant(QApplication::translate("EV_XldMainClass", "xld.evproj", 0, QApplication::UnicodeUTF8)));
        evWorkspace->setProperty("localProjectName", QVariant(QApplication::translate("EV_XldMainClass", "D:/Projects/XiaolangdiSystem/System/EV_Xld/bin64/MyData/xld.evproj", 0, QApplication::UnicodeUTF8)));
        globeWidget->setProperty("globeName", QVariant(QApplication::translate("EV_XldMainClass", "\346\226\260\345\234\272\346\231\2571", 0, QApplication::UnicodeUTF8)));
        checkBox->setText(QApplication::translate("EV_XldMainClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        menuGrd->setTitle(QApplication::translate("EV_XldMainClass", "Grd\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EV_XldMainClass: public Ui_EV_XldMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EV_XLDMAIN_H
