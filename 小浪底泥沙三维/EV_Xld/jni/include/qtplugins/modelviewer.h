#ifndef MODELVIEWER_H
#define MODELVIEWER_H

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "modelviewer_d.lib")
#else
#pragma comment(lib, "modelviewer.lib")
#endif
#define MODELVIEWER_DLL Q_DECL_IMPORT
#else
#define MODELVIEWER_DLL Q_DECL_EXPORT
#endif

#include <QWidget>
#include "globecontrol/commonscenecontrol.h"
#include "spatial3dengine/commonscenemanager.h"
#include "graphic/camera.h"
class ModelViewerHelper;
class MODELVIEWER_DLL ModelViewer : public QWidget
{
	Q_OBJECT
public:
	ModelViewer(QWidget* parent = 0);
	~ModelViewer();

	void static startDragTo(QWidget* sourceWidget, int dataType, const QString& target);

	void static startDragModel(QWidget* sourceWidget, const QString& dataSrcName,
		int dsType,
		int modelID, int modelType);

	void static startDragEffect(QWidget* sourceWidget, const QString& dataSrcName,
		int dsType,
		int modelID);

	void static startDragTrail(QWidget* sourceWidget, const QString& dataSrcName,
		int dsType,
		int modelID);

	EarthView::World::Spatial3D::Controls::CCommonSceneControl* getControl();
	EarthView::World::Spatial3D::CCommonSceneManager* getSceneManager();
	EarthView::World::Spatial3D::CCommonSceneCamera* getCamera();

	void setName(const QString& name);

	void clear();

signals:
	void signalWidgetCreated();

private:
	QScopedPointer<ModelViewerHelper> helper;
};

#endif // MODELVIEWER_H
