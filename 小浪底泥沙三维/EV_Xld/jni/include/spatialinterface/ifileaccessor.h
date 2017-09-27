#ifndef EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IFILEACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IFILEACCESSOR_H

#include "spatialinterface/idataaccessor.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Accessor{
				/// <summary>
				/// 文件获取基类
				/// </summary>
				class EV_INTERFACE_DLL IFileAccessor :
					public EarthView::World::Spatial::Accessor::IDataAccessor
				{
				public:		
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IFileAccessor();
                ev_private:
					IFileAccessor( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IFileAccessor();
				private:
					IFileAccessor(IFileAccessor & obj);
				};
			}
		}
	}
}

#endif
