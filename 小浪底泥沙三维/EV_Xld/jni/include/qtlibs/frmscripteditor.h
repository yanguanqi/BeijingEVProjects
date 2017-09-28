#ifndef FRMSCRIPTEDITOR_H
#define FRMSCRIPTEDITOR_H
#include <qdialog.h>
#include "qtlibs/datasourcetreeexport.h"
#include "spatialinterface/ifeatureclass.h"
namespace Ui {
	class FrmScriptEditor;
}
class QTreeWidgetItem;
class DATASOURCETREE_DLL FrmScriptEditor : public QDialog
{
	Q_OBJECT

public:
	FrmScriptEditor(EarthView::World::Spatial::GeoDataset::IFeatureClass* fs,QString& ,bool bShowExpression,QWidget *parent = 0);
	~FrmScriptEditor();
	EVString getScriptString();
private:
	void reLoadScript(const EVString& code);
	bool validateScript();
private slots:
	void fieldDoubleClicked( QTreeWidgetItem *item, int column );
	void preCodeBlockShow( int b);
	void buttonClicked();
	void slotOkButtonClicked();
	void slotValidate();
	void slotLoadOrSave();
private:
	Ui::FrmScriptEditor* ui;
	EarthView::World::Spatial::GeoDataset::IFeatureClass* mpFeatureclass;
};

#endif // FRMSCRIPTEDITOR_H
