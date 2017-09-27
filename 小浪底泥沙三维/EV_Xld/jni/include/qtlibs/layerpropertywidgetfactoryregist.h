#pragma once
#ifndef LAYERPROPERTYWIDGETFACTORYREGIST_H
#define LAYERPROPERTYWIDGETFACTORYREGIST_H

#include "qtlibs/atlastreeexport.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{
				class ILayerPropertyWidgetFactory;
				class CLayerPropertyWidgetFactoryRegistImp;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Desktop{
			namespace QT{

				class ATLASTREE_DLL CLayerPropertyWidgetFactoryRegist : 
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					CLayerPropertyWidgetFactoryRegist();
					virtual ~CLayerPropertyWidgetFactoryRegist();

					ev_bool registFactory( ILayerPropertyWidgetFactory* pFactory);
					std::vector<ILayerPropertyWidgetFactory*>& getFactory() const;

				private:
					CLayerPropertyWidgetFactoryRegistImp* m_private;
				};
			}
		}
	}
}
#endif