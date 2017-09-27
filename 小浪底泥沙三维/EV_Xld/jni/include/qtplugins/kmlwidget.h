#ifndef KMLWIDGET_H
#define KMLWIDGET_H

#include <QtGui/QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "kmlwidget_d.lib")
#else				
#pragma comment(lib, "kmlwidget.lib")
#endif
#define ATLASWIDGET_DLL Q_DECL_IMPORT
#else
#define ATLASWIDGET_DLL Q_DECL_EXPORT
#endif

class KmlWidgetHelper;
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CKmlLayer;
			}
		}

		namespace Desktop
		{
			namespace QT
			{
				class KmlTree;
			}
		}
	}
}

// using namespace EarthView::World::Spatial3D::Atlas;
class ATLASWIDGET_DLL KmlWidget : public QWidget
{
	Q_OBJECT

public:
	KmlWidget(QWidget *parent = 0);
	~KmlWidget();
	EarthView::World::Desktop::QT::KmlTree* kmlTree() const;
	QScopedPointer<KmlWidgetHelper> helper;
protected:
	virtual void paintEvent(QPaintEvent * ev);
	
public:
	void showKmlTree(EarthView::World::Spatial3D::Atlas::CKmlLayer* layer);
};

#endif // KMLWIDGET_H
