#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ILAYERSELECTION_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ILAYERSELECTION_H

#include "spatialinterface/config.h"
#include "spatialinterface/ifeatureselection.h"
#include "spatialinterface/isymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class EV_INTERFACE_DLL ILayerSelection : public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~ILayerSelection();

				public:
					/// <summary>
					/// 获取选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素集合</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					/// <summary>
					/// 获取选择集的绘制风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const;
					/// <summary>
					/// 设置选择集的绘制风格
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <returns></returns>
					virtual ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

				ev_private:
					ILayerSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ILayerSelection();
					C_DISABLE_COPY( ILayerSelection )
				};
			}
		}
	}
}
#endif


