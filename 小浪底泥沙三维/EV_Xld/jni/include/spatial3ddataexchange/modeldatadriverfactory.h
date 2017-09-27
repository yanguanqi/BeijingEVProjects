#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DRIVERFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DRIVERFACTORY_H

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换驱动类
				/// </summary>
				class CModelDataDriver;

				/// <summary>
				/// 数据交换驱动类工厂
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CModelDataDriverFactory
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CModelDataDriverFactory();

					/// <summary>
					/// 创建数据转换驱动
					/// </summary>
					/// <param name="type">驱动类型</param>
					/// <returns>驱动对象的指针，用factory销毁</returns>
					static _extfree CModelDataDriver* createDriver(_in EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType type);

					/// <summary>
					/// 销毁数据转换驱动
					/// </summary>
					/// <param name="driver">要释放的驱动</param>
					/// <returns></returns>
					static ev_void disposeDriver(_in const CModelDataDriver* driver);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CModelDataDriverFactory();
				ev_private:
					CModelDataDriverFactory(_in EarthView::World::Core::CNameValuePairList* pList );
				};
			}
		}
	}
}
#endif

