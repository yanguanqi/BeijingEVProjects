/**
* Copyright (C) 2004-2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
*
* 文件名称：geometryrenderer.h
* 摘    要：几何图形渲染类
*
* 版    本：1.0
* 创建日期：2012年11月22日
* 作    者：李翔
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]     [修改内容]
*    1         2012-11-22     李翔      1.0.0版本的内容声明
**/

#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_GEOMETRYRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_GEOMETRYRENDERER_H

#include "spatialdisplay/spatialdisplayconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialobject/geometry/envelope.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
				class CSymbolRenderer;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class IGeometry;
				class IEnvelope;
				class CPolygon;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class EV_SPATIALDISPLAY_DLL CGeometryRenderer:
					public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryRenderer();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					~CGeometryRenderer();
				public:

					/// <summary>
					/// 开始渲染
					/// </summary>
					/// <param name="display">设备</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					
					ev_void startDraw(EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol);

					/// <summary>
					/// 停止渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void endDraw();
					
					/// <summary>
					/// 渲染几何图形
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <returns></returns>
					ev_void drawGeometry(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry);
					/// <summary>
					/// 渲染几何图形
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <param name="rotation">旋转角度，对点符号有效</param>
					/// <returns></returns>
					ev_void drawGeometry(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry, ev_real64 rotation);

					/// <summary>
					/// 渲染可编辑的几何图形
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <param name="pVertexSymbol">渲染符号</param>
					/// <returns></returns>
					 
					ev_void drawEditingGeometry( const EarthView::World::Spatial::Geometry::IGeometry* pGeometry,
						const EarthView::World::Spatial::Display::ISymbol *pVertexSymbol);
					ev_void drawEditingGeometry( const EarthView::World::Spatial::Geometry::IGeometry* pGeometry,
						const EarthView::World::Spatial::Display::ISymbol *pVertexSymbol,ev_real64 rotation);
					/// <summary>
					/// 渲染几何中心点
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <returns></returns>
					 
					ev_void drawGeometryCenter(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry);

					/// <summary>
					/// 渲染包围盒
					/// </summary>
					/// <param name="pEnvelope">包围盒</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					 
					ev_void drawEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope, EarthView::World::Spatial::Display::ISymbol* pSymbol);
				ev_private:

					CGeometryRenderer( EarthView::World::Core::CNameValuePairList *pList );
					C_DISABLE_COPY( CGeometryRenderer );

				ev_private:

					ev_void draw( const EarthView::World::Spatial::Geometry::IGeometry* pGeometry, const EarthView::World::Spatial::Display::ISymbol *pVertexSymbol);
					ev_void draw( const EarthView::World::Spatial::Geometry::IGeometry* pGeometry, const EarthView::World::Spatial::Display::ISymbol *pVertexSymbol,ev_real64 rotation);
					ev_void drawVertex( _in const EarthView::World::Spatial::Geometry::IGeometry* curve, _in const EarthView::World::Spatial::Display::ISymbol* pVerSym );
					ev_bool checkPolygon(const EarthView::World::Spatial::Geometry::CPolygon *pPolygon,_out ev_uint32& pointNum);
					
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pDisplay;
					CSymbolRenderer* m_pSymbolRender;
					const EarthView::World::Spatial::Display::ISymbol* mpSymbol;
					ev_bool mbFirst, mbSrDiffer,mbNeedProject;
				private:
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
					EarthView::World::Spatial::Geometry::IGeometry *intersect( const EarthView::World::Spatial::Geometry::IEnvelope *enve,const EarthView::World::Spatial::Geometry::IGeometry *src );
				};
			}
		}
	}
}

#endif
