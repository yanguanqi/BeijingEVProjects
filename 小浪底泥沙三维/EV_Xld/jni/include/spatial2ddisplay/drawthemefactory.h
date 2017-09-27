#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEMEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEMEFACTORY_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"
#include "spatial2ddisplay/drawtheme.h"

using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				class EV_SPATIAL2DDISPLAY_DLL CDrawThemeFactory:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					CDrawThemeFactory();
					virtual ~CDrawThemeFactory();
				ev_private:
					CDrawThemeFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDrawThemeFactory );
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

					virtual CDrawTheme* create(const EVString& key) ;

					void destroy(CDrawTheme* obj) ;
					void initialize();
				protected:
					/* 用于重载，初始化支持关键字 */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					class Impl;
					Impl* mpImpl;
				};

				class EV_SPATIAL2DDISPLAY_DLL CDrawThemeFactoryRegistry
				{
				public:
					CDrawThemeFactoryRegistry();
					virtual ~CDrawThemeFactoryRegistry();
ev_private:
					CDrawThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CDrawThemeFactory* factory);
					CDrawThemeFactory* getFactory(const EVString& key) const;
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