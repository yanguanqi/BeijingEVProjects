#ifndef ILAYERPROPERTYWIDGETFACTORY_H
#define ILAYERPROPERTYWIDGETFACTORY_H

#include "qtlibs/atlastreeexport.h"
#include "core/memoryallocatedobject.h"
#include "core/multibytestring.h"
#include <QtCore/qglobal.h>
#include <QtCore/QObject>
#include <QtGui/QWidget>

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{
				class ILayerPropertyWidget;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayer;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{
				class ATLASTREE_DLL ILayerPropertyWidgetFactory : 
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					ILayerPropertyWidgetFactory();
					virtual ~ILayerPropertyWidgetFactory();

					virtual ILayerPropertyWidget* create ( EarthView::World::Spatial::Atlas::ILayer* pLayer,
																				QWidget* parent = 0,
																				Qt::WFlags flags = 0);

					virtual EVString getText() const;
					virtual EVString getIconDir() const;
				};
			}
		}
	}
}
#endif