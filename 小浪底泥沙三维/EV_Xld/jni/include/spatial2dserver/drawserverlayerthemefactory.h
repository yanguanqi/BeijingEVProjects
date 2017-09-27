#ifndef EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEMEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEMEFACTORY_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "core/string_array.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// WMS图层专题图基类
				/// </summary>
				class EV_2DWMS_DLL CDrawServerLayerThemeFactory : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取支持的专题图关键字
					/// </summary>
					/// <returns>关键字列表</returns>
					EarthView::World::Core::CStringArray getKeys() const;
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
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* create( const EVString& key);
					/// <summary>
					/// 通过数据流恢复专题图信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createRenderFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// 通过xmlElement恢复专题图信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 销毁专题图
					/// </summary>
					/// <param name="pSymbol">专题图对象</param>
					/// <returns></returns>
					ev_void destroyRender(EarthView::World::Spatial::Display::CDrawServerLayerTheme* pRender);
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CDrawServerLayerThemeFactory();
				ev_private:
					CDrawServerLayerThemeFactory( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawServerLayerThemeFactory();
				public:
					void initialize();
				protected:
					/* 用于重载，初始化支持关键字 */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					C_DISABLE_COPY(CDrawServerLayerThemeFactory);
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};

				class EV_2DWMS_DLL CDrawServerLayerThemeFactoryRegistry
				{
				public:
					CDrawServerLayerThemeFactoryRegistry();
					virtual ~CDrawServerLayerThemeFactoryRegistry();
ev_private:
					CDrawServerLayerThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CDrawServerLayerThemeFactory* factory);
					CDrawServerLayerThemeFactory* getFactory(const EVString& key) const;
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};
}}}}

#endif