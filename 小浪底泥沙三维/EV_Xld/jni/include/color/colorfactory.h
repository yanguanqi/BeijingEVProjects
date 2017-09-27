#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORFACTORY_H
#include "core/memoryallocatedobject.h"
#include "spatialinterface/icolor.h"
#include "color/colorexports.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// Color类工厂
				/// 提供方法如下：
				/// 获取Color工厂的指针、销毁颜色、销毁所有颜色
				/// 通过数据流创建EarthView::World::Spatial::Display::IColor、通过xmlElement恢复Color信息
				/// </summary>
				class EV_COLOR_DLL CColorFactory:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取Color工厂的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>Color工厂的指针</returns>
					static EarthView::World::Spatial::Display::CColorFactory* getInstance();

					/// <summary>
					/// 通过数据流创建EarthView::World::Spatial::Display::IColor
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Display::IColor指针</returns>
					virtual _extfree EarthView::World::Spatial::Display::IColor* createColorFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// 通过xmlElement恢复Color信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Display::IColor* createColorFromXmlElement(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 销毁颜色
					/// </summary>
					/// <param name="pColor">颜色对象</param>
					/// <returns></returns>
					virtual  ev_void destroyColor(EarthView::World::Spatial::Display::IColor* pColor);
					
				public:
					~CColorFactory();
				ev_private:
					CColorFactory( EarthView::World::Core::CNameValuePairList* pList );
				private:
					CColorFactory();
				private:
					/// <summary>
					/// Color工厂的指针
					/// </summary>
					static EarthView::World::Spatial::Display::CColorFactory* m_pInstance;					
				};
			}
		}
	}
}
#endif
