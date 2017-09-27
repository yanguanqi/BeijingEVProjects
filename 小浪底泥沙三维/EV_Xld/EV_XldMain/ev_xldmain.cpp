#include "ev_xldmain.h"
#include "core/object.h"
#include "core/event.h"
#include "xld\WaterConservancyManager.h"
#include <QtGui\QMessageBox>
#include <QtGui\QFileDialog>
#include <QtGui\QTreeView>
#include <QtGui\QStandardItem>
#include "QStandardItemModel"
EV_XldMain::EV_XldMain(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	ui.actionReadGrd->setCheckable(true);
	ui.horizontalSlider->setMinimum(-1000);
	ui.horizontalSlider->setMaximum(1000);
	ui.horizontalSlider->setTickInterval(1);
	ui.horizontalSlider->setSliderPosition(0);
	connect(ui.globeWidget, SIGNAL(signalGlobeOpened(GlobeWidget*)),
		SLOT(slotGlobeOpened(GlobeWidget*)));
	connect(ui.actionReadGrd, SIGNAL(triggered()), this, SLOT(ReadGrd()));
	connect(ui.actionGrd2GTiff, SIGNAL(triggered()), this, SLOT(GrdToTiff()));
	connect(ui.actionGrdLOD, SIGNAL(triggered()), this, SLOT(GrdToLOD()));
	connect(ui.actionGrdRender, SIGNAL(trigger()), this, SLOT(GrdToRenderTerrain()));
	connect(ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(GrdVisible(int)));
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(SliderValueChanged(int)));
	connect(ui.treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(treeViewSelected(QModelIndex)));
	connect(ui.treeView, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT());
	connect(ui.treeWidget, SIGNAL(itemClicked(QTreeWidgetItem *item, int column)), this, SLOT(treeViewSelected(QTreeWidgetItem *item, int column)));
	currrentName = "";
	model = NULL;
}
void EV_XldMain::treeViewSelected(QTreeWidgetItem *item, int column)
{
	currrentName = item->text(column);
}

EV_XldMain::~EV_XldMain()
{

}
void EV_XldMain::GrdToTiff()
{
	EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->GetTerrainCount();
}
void EV_XldMain::GrdToLOD()
{
	EVString s = currrentName.toStdString().c_str();
	EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->SetTerrainVisible(s, ui.checkBox->isChecked());
	
}
void EV_XldMain::GrdToRenderTerrain()
{
	
}
void EV_XldMain::slotGlobeOpened(GlobeWidget * globeWidget)
{
	EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->Initialise(ui.globeWidget->getGlobeControl());
}
void EV_XldMain::SliderValueChanged(int value)
{
	int pos = ui.horizontalSlider->value();
	EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->SetTerrainOffset(currrentName.toStdString().c_str(), pos);
}
void EV_XldMain::GrdVisible(int g)
{
	EVString s = currrentName.toStdString().c_str();
	if (g == Qt::Checked) 
	{
		EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->SetTerrainVisible(s, ui.checkBox->isChecked());
	}
	else if (g == Qt::PartiallyChecked)
	{
		EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->SetTerrainVisible(s, ui.checkBox->isChecked());
	}
	else 
	{
		EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->SetTerrainVisible(s, ui.checkBox->isChecked());
	}
	
}
void EV_XldMain::ReadGrd()
{
	QString path = QFileDialog::getOpenFileName(this, tr("打开水底高程文件"), ".", tr("水底高程文件(*.grd)"));
	if (path.length() != 0)
	{
		QString fileName = path.mid(path.lastIndexOf("/")+1, path.lastIndexOf(".")- path.lastIndexOf("/")-1);
		currrentName = fileName;
		EVString current = fileName.toStdString().c_str();
		EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->CreateTerrain(path.toStdString().c_str());
		ev_uint64 tc = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->GetTerrainCount();
		QTreeWidgetItem * item = new QTreeWidgetItem(QStringList(currrentName));
		ui.treeWidget->addTopLevelItem(item);
		if (model) 
		{
			model->clear();
			ui.treeView->setModel(model);
		}
		for (int i=0;i<tc;i++)
		{
			//EVString* tn;
			//EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->GetTerrainNames(tn);
		
			QStandardItem* item = new QStandardItem(fileName);
			if (!model)
			{
				model = new QStandardItemModel(1, 1);
			}
			model->appendRow(item);
			ui.treeView->setModel(model);
		}
		

	}
}