#ifndef ILAYERPROPERTYWIDGET_H
#define ILAYERPROPERTYWIDGET_H

#include <QtGui/QWidget>
#include "qtlibs/atlastreeexport.h"
#include "spatialinterface/ilayer.h"

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{

				class ATLASTREE_DLL ILayerPropertyWidget : public QWidget
				{
					Q_OBJECT
				public:
					ILayerPropertyWidget(QWidget *parent = 0, Qt::WFlags flags = 0);
					virtual ~ILayerPropertyWidget();
					virtual ev_bool isConstructSuccess() const;
				};
			}
		}
	}
}
#endif