#ifndef EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IDBACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IDBACCESSOR_H

#include "spatialinterface/idataaccessor.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Accessor{
				/// <summary>
				/// 数据库句柄接口
				/// </summary>
				class EV_INTERFACE_DLL IDBAccessor :
					public EarthView::World::Spatial::Accessor::IDataAccessor
				{
				public:			
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IDBAccessor();
					///
                ev_private:
					IDBAccessor( EarthView::World::Core::CNameValuePairList *pList );
					///
				public:
				protected:
					IDBAccessor();
				};
			}
		}
	}
}

#endif
