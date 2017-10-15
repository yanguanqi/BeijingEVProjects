/********************************************************************************
** Form generated from reading UI file 'ev_xldmain.ui'
**
** Created: Sun Oct 15 09:20:50 2017
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
#include "qtplugins/atlaswidget.h"
#include "qtplugins/evworkspace.h"
#include "qtplugins/globewidget.h"
#include "qtplugins/kmlwidget.h"

QT_BEGIN_NAMESPACE

class Ui_EV_XldMainClass
{
public:
    QAction *actionReadGrd;
    QAction *actionGrd2GTiff;
    QAction *actionGrdLOD;
    QAction *actionGrdRender;
    QAction *actionDrawRect;
    QAction *actionDrawPolyline;
    QAction *actionRenderWater;
    QAction *actionRaiseWater;
    QAction *actionDecreaseWater;
    QAction *actionHideWater;
    QAction *actionShowWater;
    QAction *actionDeleteWater;
    QAction *actionCreateStencil;
    QAction *actionRenderStencil;
    QWidget *centralWidget;
    EVWorkspace *evWorkspace;
    GlobeWidget *globeWidget;
    QTreeWidget *treeWidget;
    QTreeView *treeView;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    AtlasWidget *atlasWidget;
    KmlWidget *kmlWidget;
    QMenuBar *menuBar;
    QMenu *menuGrd;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
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
        actionDrawRect = new QAction(EV_XldMainClass);
        actionDrawRect->setObjectName(QString::fromUtf8("actionDrawRect"));
        actionDrawPolyline = new QAction(EV_XldMainClass);
        actionDrawPolyline->setObjectName(QString::fromUtf8("actionDrawPolyline"));
        actionRenderWater = new QAction(EV_XldMainClass);
        actionRenderWater->setObjectName(QString::fromUtf8("actionRenderWater"));
        actionRaiseWater = new QAction(EV_XldMainClass);
        actionRaiseWater->setObjectName(QString::fromUtf8("actionRaiseWater"));
        actionDecreaseWater = new QAction(EV_XldMainClass);
        actionDecreaseWater->setObjectName(QString::fromUtf8("actionDecreaseWater"));
        actionHideWater = new QAction(EV_XldMainClass);
        actionHideWater->setObjectName(QString::fromUtf8("actionHideWater"));
        actionShowWater = new QAction(EV_XldMainClass);
        actionShowWater->setObjectName(QString::fromUtf8("actionShowWater"));
        actionDeleteWater = new QAction(EV_XldMainClass);
        actionDeleteWater->setObjectName(QString::fromUtf8("actionDeleteWater"));
        actionCreateStencil = new QAction(EV_XldMainClass);
        actionCreateStencil->setObjectName(QString::fromUtf8("actionCreateStencil"));
        actionRenderStencil = new QAction(EV_XldMainClass);
        actionRenderStencil->setObjectName(QString::fromUtf8("actionRenderStencil"));
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
        atlasWidget = new AtlasWidget(centralWidget);
        atlasWidget->setObjectName(QString::fromUtf8("atlasWidget"));
        atlasWidget->setGeometry(QRect(940, 520, 211, 316));
        kmlWidget = new KmlWidget(centralWidget);
        kmlWidget->setObjectName(QString::fromUtf8("kmlWidget"));
        kmlWidget->setGeometry(QRect(1177, 520, 181, 180));
        EV_XldMainClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EV_XldMainClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1372, 23));
        menuGrd = new QMenu(menuBar);
        menuGrd->setObjectName(QString::fromUtf8("menuGrd"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        EV_XldMainClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EV_XldMainClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EV_XldMainClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EV_XldMainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EV_XldMainClass->setStatusBar(statusBar);

        menuBar->addAction(menuGrd->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuGrd->addAction(actionReadGrd);
        menuGrd->addAction(actionGrd2GTiff);
        menuGrd->addAction(actionGrdLOD);
        menuGrd->addAction(actionGrdRender);
        menu->addAction(actionDrawRect);
        menu->addAction(actionDrawPolyline);
        menu_2->addAction(actionRenderWater);
        menu_2->addAction(actionRaiseWater);
        menu_2->addAction(actionDecreaseWater);
        menu_2->addAction(actionHideWater);
        menu_2->addAction(actionShowWater);
        menu_2->addAction(actionDeleteWater);
        menu_3->addAction(actionCreateStencil);
        menu_3->addAction(actionRenderStencil);

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
        actionDrawRect->setText(QApplication::translate("EV_XldMainClass", "\347\224\273\347\237\251\345\275\242", 0, QApplication::UnicodeUTF8));
        actionDrawPolyline->setText(QApplication::translate("EV_XldMainClass", "\347\224\273\345\244\232\350\276\271\345\275\242", 0, QApplication::UnicodeUTF8));
        actionRenderWater->setText(QApplication::translate("EV_XldMainClass", "\346\270\262\346\237\223\346\260\264\351\235\242", 0, QApplication::UnicodeUTF8));
        actionRaiseWater->setText(QApplication::translate("EV_XldMainClass", "\346\212\254\351\253\230", 0, QApplication::UnicodeUTF8));
        actionDecreaseWater->setText(QApplication::translate("EV_XldMainClass", "\351\231\215\344\275\216", 0, QApplication::UnicodeUTF8));
        actionHideWater->setText(QApplication::translate("EV_XldMainClass", "\351\232\220\350\227\217", 0, QApplication::UnicodeUTF8));
        actionShowWater->setText(QApplication::translate("EV_XldMainClass", "\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        actionDeleteWater->setText(QApplication::translate("EV_XldMainClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        actionCreateStencil->setText(QApplication::translate("EV_XldMainClass", "\347\224\237\346\210\220\345\260\217\346\265\252\345\272\225\350\214\203\345\233\264\346\250\241\346\235\277", 0, QApplication::UnicodeUTF8));
        actionRenderStencil->setText(QApplication::translate("EV_XldMainClass", "\346\270\262\346\237\223\345\260\217\346\265\252\345\272\225\350\214\203\345\233\264\346\250\241\346\235\277", 0, QApplication::UnicodeUTF8));
        evWorkspace->setProperty("projectName", QVariant(QApplication::translate("EV_XldMainClass", "xld.evproj", 0, QApplication::UnicodeUTF8)));
        evWorkspace->setProperty("localProjectName", QVariant(QApplication::translate("EV_XldMainClass", "D:/Projects/XiaolangdiSystem/System/EV_Xld/bin64/MyData/xld.evproj", 0, QApplication::UnicodeUTF8)));
        globeWidget->setProperty("globeName", QVariant(QApplication::translate("EV_XldMainClass", "\346\226\260\345\234\272\346\231\2571", 0, QApplication::UnicodeUTF8)));
        checkBox->setText(QApplication::translate("EV_XldMainClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        menuGrd->setTitle(QApplication::translate("EV_XldMainClass", "Grd\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("EV_XldMainClass", "\345\212\237\350\203\275\344\272\244\344\272\222", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("EV_XldMainClass", "\346\260\264\351\235\242", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("EV_XldMainClass", "\345\220\216\345\217\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EV_XldMainClass: public Ui_EV_XldMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EV_XLDMAIN_H
