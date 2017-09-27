#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATADRIVERFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATADRIVERFACTORY_H
#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			
			namespace Convertor
			{
				/// <summary>
				/// 数据交换驱动类
				/// </summary>
				class CDataDriver;

				/// <summary>
				/// 数据交换驱动类工厂
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataDriverFactory
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CDataDriverFactory();

					/// <summary>
					/// 创建数据转换驱动
					/// </summary>
					/// <param name="type">驱动类型</param>
					/// <returns>驱动对象的指针，用factory销毁</returns>
					static EarthView::World::Spatial::Convertor::CDataDriver* createDriver(_in EarthView::World::Spatial::Convertor::EVDataDriverType type);

					/// <summary>
					/// 销毁数据转换驱动
					/// </summary>
					/// <param name="driver">要释放的驱动</param>
					/// <returns></returns>
					static ev_void disposeDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* driver);
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CDataDriverFactory();
				ev_private:
					CDataDriverFactory(_in EarthView::World::Core::CNameValuePairList* pList );
				};
			}
		}
	}
}
#endif

