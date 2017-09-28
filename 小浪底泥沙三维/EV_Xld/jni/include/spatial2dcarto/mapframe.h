#ifndef EARTHVIEW_WORLD_CARTO_MAPFRAME_H
#define EARTHVIEW_WORLD_CARTO_MAPFRAME_H

#include "spatial2dcarto/cartoconfig.h"
#include "spatial2dcarto/trackinglayeragent.h"
#include "spatialinterface/imapframe.h"
#include "spatialinterface/ipage.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ispatialdisplay.h"
#include "symbol/simplelinesymbol.h"
#include "symbol/textsymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_SPATIAL2DCARTO_DLL CMapFrame : public IMapFrame
				{
					
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMapFrame();
					/// <summary>
					///虚构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMapFrame();

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const;

					/// <summary>
					/// 获取地图框架名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图框架名称</returns>
					virtual EVString getName() const;

					/// <summary>
					///设置地图框架名称
					/// </summary>
					/// <param name="name">地图框架名称</param>
					/// <returns></returns>
					virtual ev_void setName(EVString name);

					/// <summary>
					/// 获取关于地图框架的描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图框架的描述</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// 设置关于地图框架的描述
					/// </summary>
					/// <param name="desc">地图框架的描述</param>
					/// <returns></returns>
					virtual ev_void setDescription( _in const EVString &desc );

					/// <summary>
					///获取地图边框风格
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>地图边框风格</returns>
					virtual  EarthView::World::Spatial::Display::ISymbol* getSymbol() const;

					/// <summary>
					///设置地图边框风格
					/// </summary>
					/// <param name="symbol">地图标题的风格</param>
					/// <returns></returns>
					virtual ev_void setSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);
					/// <summary>
					///获取阴影颜色
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>阴影颜色</returns>
					virtual  EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					///设置阴影颜色
					/// </summary>
					/// <param name="pColor">阴影颜色</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(EarthView::World::Spatial::Display::IColor* pColor);


					/// <summary>
					///获取背景颜色
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>背景颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackColor() const;

					/// <summary>
					///设置背景颜色
					/// </summary>
					/// <param name="pColor">背景颜色</param>
					/// <returns></returns>
					virtual ev_void setBackColor(EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					///获取地图边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>地图边框范围</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置地图边框范围
					/// </summary>
					/// <param name="symbol">地图标题的风格</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
					
					/// <summary>
					///设置数据框中地图的显示范围（即通大地坐标或地理坐标设置地图的显示范围）
					/// </summary>
					/// <param name="pEnvelope">数据框中地图的显示范围</param>
					/// <returns></returns>
					virtual ev_void setMapExtent(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					///获取数据框中地图的数据范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>数据框中地图的显示范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getMapExtent() const;

					/// <summary>
					///获取地图的显示设备
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>地图的显示设备</returns>
					virtual EarthView::World::Spatial::Display::ISpatialDisplay* getMapDisplay() const;

					/// <summary>
					///获取地图对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图对象</returns>
					virtual EarthView::World::Spatial::Atlas::IMap* getMap() const;

					/// <summary>
					/// 设置地图中加载的地图
					/// </summary>
					/// <param name="map">地图对象</param>
					/// <returns></returns>
					virtual ev_void setMap(EarthView::World::Spatial::Atlas::IMap* pMap);

					/// <summary>
					///获取地图画布
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图画布</returns>
					virtual _extfree EarthView::World::Display::IBitmap* getMapCanvas() const;

					/// <summary>
					/// 获取元素是否被选中
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否被选中</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置元素是否被选中
					/// </summary>
					/// <param name="bSelected">是否被选中</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool bSelected);

					/// <summary>
					/// 获取是否绘制阴影
					/// </summary>
					/// <param name=""></param>
					/// <returns>否绘制阴影</returns>
					virtual ev_bool isDrawShadow();

					/// <summary>
					/// 设置否绘制阴影
					/// </summary>
					/// <param name="bDrawed">否绘制阴影</param>
					/// <returns></returns>
					virtual ev_void setDrawShadow(ev_bool bDrawed);

					/// <summary>
					/// 获取是否绘制框架
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制框架</returns>
					virtual ev_bool isDrawFrame();

					/// <summary>
					/// 设置是否绘制框架
					/// </summary>
					/// <param name="bDrawed">是否绘制框架</param>
					/// <returns></returns>
					virtual ev_void setDrawFrame(ev_bool bDrawed);

					/// <summary>
					/// 获取是否绘制背景
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘架背景</returns>
					virtual ev_bool isDrawBackground();

					/// <summary>
					/// 设置是否绘制背景
					/// </summary>
					/// <param name="bDrawed">是否绘制架背景</param>
					/// <returns></returns>
					virtual ev_void setDrawBackground(ev_bool bDrawed);

					/// <summary>
					/// 判断框架大小与位置是否按纸张尺寸设置
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果按纸张尺寸设置,返回true,否则返回false</returns>
					virtual ev_bool isAccordingPageSize();

					/// <summary>
					/// 设置框架大小与位置是否按纸张尺寸设置
					/// </summary>
					/// <param name="bAccording">框架大小是否按纸张尺寸设置</param>
					/// <returns></returns>
					virtual ev_void setAccordingPageSize(ev_bool bAccording);

					/// <summary>
					/// 绘制元素准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// 绘制结束后续处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();

					/// <summary>
					///绘制边框
					/// </summary>
					/// <param name="display">纸张绘制显示设备</param>
					/// <returns></returns>
					virtual ev_void drawBorder(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);

					/// <summary>
					/// 获取正在绘制的图层缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Display::IBitmap * getRenderingLayerCache();
					/// <summary>
					/// 克隆元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图元素</returns>
					virtual EarthView::World::Spatial::Carto::IElement *clone() const;
					/// <summary>
					/// 将地图的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将地图的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
					
					/// <summary>
					/// 从xml元素中恢复指北针的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					
					/// <summary>
					/// 把比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					void setLayeringExport(bool b);
				ev_internal:
					virtual ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );	
				ev_private:
					ev_void setTrackingProxy(CTrackingLayerAgent* ref_pTrackingProxy);
					CMapFrame(EarthView::World::Core::CNameValuePairList *pList );
				private:
					CMapFrame(CMapFrame& obj);
				private:
					ev_void init();
					ev_void makeMapping();
					ev_void toMapPixelPoint(_out ev_real64&x,_out ev_real64& y);
					ev_void drawMap(EarthView::World::Spatial::Display::ISpatialDisplay* pMapDisplay, EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);
					ev_void drawMapLayerFeature(EarthView::World::Spatial::Display::ISpatialDisplay* pMapDisplay, EarthView::World::Spatial::Atlas::ILayer* pLayer);	
					ev_void drawTrackingLayer(EarthView::World::Spatial::Display::ISpatialDisplay* pMapDisplay);
				private:
					//需要初始化的对象
					ev_real64 m_dFrmDevWidth;
					ev_real64 m_dFrmDevHeight;
					ev_real64 m_dStartPX;
					ev_real64 m_dStartPY;
					ev_real64 m_dPageScale;
					ev_bool m_bSelected;
					ev_bool m_bDrawShadow;
					ev_bool m_bDrawFrame;
					ev_bool m_bDrawBackground;
					EarthView::World::Spatial::Geometry::IEnvelope* m_pEnvelope;
					EarthView::World::Spatial::Geometry::IEnvelope* m_pMapExtent;
					EarthView::World::Spatial::Display::IColor* m_pShadowColor;
					EarthView::World::Spatial::Display::IColor* m_pBackColor;
					//不需要初始化的对象
					EarthView::World::Spatial::Geometry::IGeometry *m_pShowEnvelope;
					EarthView::World::Spatial::Display::CSimpleLineSymbol *m_pFrameSymbol;
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pPageDisplay;
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pMapDisplay;
					EarthView::World::Spatial::Atlas::IRenderInformation *m_pRenderInfo;
					//布局视图中的地图
					EarthView::World::Spatial::Atlas::IMap* m_pLayoutMap;
					mutable EarthView::World::Core::CRecursiveMutex mMapCanvasLock;
					EarthView::World::Display::IBitmap* m_pMapCanvas;
					EarthView::World::Display::IPaintDevice* m_pScrCanvas;
					EVString m_strName;
					EVString m_strDescription;
					ev_bool m_bAccordingPage;

					ev_bool m_bLayeringExport;

					CTrackingLayerAgent* mpTrackingProxy;
				};
			}
		}
	}
}
#endif