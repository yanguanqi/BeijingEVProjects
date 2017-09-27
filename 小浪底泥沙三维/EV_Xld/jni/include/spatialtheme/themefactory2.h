#ifndef EARTHVIEW_WORLD_SPATIAL_THEME_THEMEFACTORY_2_H
#define EARTHVIEW_WORLD_SPATIAL_THEME_THEMEFACTORY_2_H

#include "core/memoryallocatedobject.h"
#include "spatialthemeconfig.h"
#include "core/datastream.h"
#include "core/string_array.h"
#include "spatialinterface/itheme.h"

using namespace EarthView::World::Core;

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
				class EV_SPATIALTHEME_DLL CThemeFactory2:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取支持的专题图关键字
					/// </summary>
					/// <returns>关键字列表</returns>
					CStringArray getKeys() const;
					/// <summary>
					/// 判断是否支持该关键字的专题图创建
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>支持返回true，不支持返回false</returns>
					ev_bool isSupported(const EVString& key) const;
					/// <summary>
					/// 通过关键字创建专题图
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>专题图对象指针</returns>
					virtual EarthView::World::Spatial::Theme::ITheme* create( const EVString& key);
					/// <summary>
					/// 通过数据流恢复专题图信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// 通过xmlElement恢复专题图信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element);
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
					virtual ~CThemeFactory2();
				ev_private:
					CThemeFactory2( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CThemeFactory2();
				public:
					void initialize();
				protected:
					/* 用于重载，初始化支持关键字 */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					C_DISABLE_COPY(CThemeFactory2);
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};

				class EV_SPATIALTHEME_DLL CThemeFactoryRegistry
				{
				public:
					CThemeFactoryRegistry();
					virtual ~CThemeFactoryRegistry();
ev_private:
					CThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CThemeFactory2* factory);
					CThemeFactory2* getFactory(const EVString& key) const;
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};
			}
		}
	}
}
#endif
