#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORRAMPFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORRAMPFACTORY_H
#include "core/memoryallocatedobject.h"
#include "color/colorexports.h"
#include "core/datastream.h"
#include "core/xml.h"
#include "color/colorramp.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// ColorRamp类工厂
				/// 提供方法如下：
				/// 获取Color工厂的指针、通过数据流创建IColor、通过xmlElement恢复Color信息
				/// 销毁颜色、销毁所有颜色
				/// </summary>
				class EV_COLOR_DLL CColorRampFactory:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取Color工厂的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>Color工厂的指针</returns>
					static EarthView::World::Spatial::Display::CColorRampFactory* getInstance();

					/// <summary>
					/// 通过数据流创建IColor
					/// </summary>
					/// <param name=""></param>
					/// <returns>IColor指针</returns>
					virtual _extfree EarthView::World::Spatial::Display::CColorRamp* createColorRampFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// 通过xmlElement恢复Color信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Display::CColorRamp* createColorRampFromXmlElement(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 销毁颜色
					/// </summary>
					/// <param name="pColor">颜色对象</param>
					/// <returns></returns>
					virtual  ev_void destroyColorRamp(EarthView::World::Spatial::Display::CColorRamp* pColorRamp);

					/// <summary>
					/// 销毁所有颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual  ev_void destroyColorRamps();
				public:
					~CColorRampFactory();
				ev_private:
					CColorRampFactory( EarthView::World::Core::CNameValuePairList* pList );
				private:
					CColorRampFactory();
				private:
					/// <summary>
					/// Color工厂的指针
					/// </summary>
					static EarthView::World::Spatial::Display::CColorRampFactory* m_pInstance;
					typedef set<EarthView::World::Spatial::Display::CColorRamp*> ColorRampSet;
					ColorRampSet m_ColorRampSet;
				};
			}
		}
	}
}
#endif
