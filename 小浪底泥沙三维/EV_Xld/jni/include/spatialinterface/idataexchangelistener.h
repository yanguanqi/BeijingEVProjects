#ifndef  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_IDATAEXCHANGELISTENER_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_IDATAEXCHANGELISTENER_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换监听类接口
				/// </summary>
				class EV_INTERFACE_DLL IDataExchangeListener:
					public EarthView::World::Core::CAllocatedObject
				{

				public:
					/// <summary>
					/// 初始化总要素数目
					/// </summary>
					/// <param name="totalNum">总要素数</param>
					/// <returns></returns>
					virtual ev_void init(_in ev_uint32 totalNum);
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IDataExchangeListener();
					//--
                ev_private:
					IDataExchangeListener( EarthView::World::Core::CNameValuePairList *pList );
					//--
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IDataExchangeListener();
				};
			}
		}
	}
}
#endif


