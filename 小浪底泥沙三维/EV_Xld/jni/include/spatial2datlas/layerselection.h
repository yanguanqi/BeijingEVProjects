#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_LAYERSELECTION_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_LAYERSELECTION_H
#include "spatial2datlas/spatial2datlasconfig.h"
#include "spatialinterface/ilayerselection.h"
#include "spatialinterface/ifeatureselection.h"
#include "spatialinterface/itheme.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 图层选择类
				/// </summary>
			
				class EV_SPATIAL2DATLAS_DLL CLayerSelection : public EarthView::World::Spatial::Atlas::ILayerSelection
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayerSelection();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayerSelection();

				public:
					/// <summary>
					/// 获取选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素集合</returns>
					
					EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					/// <summary>
					/// 获取选择集的绘制风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>风格</returns>
					
					EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const;
					/// <summary>
					/// 设置选择集的绘制风格
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <returns></returns>
					
					ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

				ev_private:
					CLayerSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CLayerSelection )

					EarthView::World::Spatial::GeoDataset::IFeatureSelection *m_pSelection;
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;

					friend class CDataLayer;
				};
			}
		}
	}
}
#endif


