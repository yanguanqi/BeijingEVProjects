#ifndef EARTHVIEW_SPATIAL_DISPLAY_RENDERINFORMATION_H
#define EARTHVIEW_SPATIAL_DISPLAY_RENDERINFORMATION_H

#include "spatialdisplayconfig.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ilayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 渲染信息类
				/// </summary>
				class EV_SPATIALDISPLAY_DLL CRenderInformation : public EarthView::World::Spatial::Atlas::IRenderInformation
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRenderInformation();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CRenderInformation();

				public:
					/// <summary>
					/// 检测是否正在渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果正在渲染返回true,反之则否</returns>
					ev_bool isRendering() const;
					/// <summary>
					/// 获取正在渲染的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					const EarthView::World::Spatial::Atlas::ILayer * getRenderingLayer() const;
					/// <summary>
					/// 获取正在渲染的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染类型</returns>
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType getRenderingType() const;

				protected:
					ev_bool m_bRendering;
					const EarthView::World::Spatial::Atlas::ILayer *m_pRenderingLayer;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType m_eRenderingType;

				ev_private:
					CRenderInformation( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CRenderInformation )
					friend class CMap;
				};
			}
		}
	}
}
#endif