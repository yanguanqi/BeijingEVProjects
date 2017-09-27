#ifndef EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IWEBACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IWEBACCESSOR_H

#include "spatialinterface/idataaccessor.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Accessor{
				class EV_INTERFACE_DLL IWebAccessor :
					public EarthView::World::Spatial::Accessor::IDataAccessor
				{
				public:		
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IWebAccessor();
				protected:
					IWebAccessor();
                ev_private:
					IWebAccessor( EarthView::World::Core::CNameValuePairList *pList );
				private:
					IWebAccessor(IWebAccessor & obj);
				};
			}
		}
	}
}

#endif
