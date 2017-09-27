#ifndef EARTHVIEW_WORLD_SPATIAL2D_THEME_THEMEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_THEME_THEMEFACTORY_H
#include "core/memoryallocatedobject.h"
#include "spatialthemeconfig.h"
#include "core/datastream.h"
#include "spatialinterface/itheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EarthView::World::Core::CReadWriteLock;
		}
	}
}
// using namespace EarthView::World::Core;
namespace EarthView{
	namespace World{
		namespace Spatial{
            namespace Theme{
				/// <summary>
				/// CTheme类的创建工厂
				/// 提供方法如下：
				/// 获取专题图工厂指针、销毁专题图、销毁所有专题图
				/// 通过数据流恢复专题图信息、通过xmlElement恢复专题图信息
				/// </summary>
				class EV_SPATIALTHEME_DLL CThemeFactory:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取专题图工厂指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题图工厂指针</returns>
					static EarthView::World::Spatial::Theme::CThemeFactory* getInstance();

					/// <summary>
					/// 通过数据流恢复专题图信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Theme::ITheme* createThemeFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// 通过xmlElement恢复专题图信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					EarthView::World::Spatial::Theme::ITheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 销毁专题图
					/// </summary>
					/// <param name="pSymbol">专题图对象</param>
					/// <returns></returns>
					ev_void destroyTheme(EarthView::World::Spatial::Theme::ITheme* pTheme);
					
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CThemeFactory();
				ev_private:
					CThemeFactory( EarthView::World::Core::CNameValuePairList* pList );
				private:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CThemeFactory();
				private:
					C_DISABLE_COPY(CThemeFactory);
				private:
					static EarthView::World::Spatial::Theme::CThemeFactory* m_pInstance;					
				};
			}
		}
	}
}
#endif
