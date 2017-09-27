#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAPSELECTION_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAPSELECTION_H

#include "spatialinterface/config.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayerSelection;
				class EV_INTERFACE_DLL IMapSelection : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~IMapSelection();

				public:
					/// <summary>
					/// 获取地图中选中要素的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>
					virtual ev_uint32 getSelectionCount() const;
					/// <summary>
					/// 获取指定索引的图层选择集
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层选择集</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection( _in ev_uint32 index ) const;
					/// <summary>
					/// 清空地图选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

				ev_private:
					IMapSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IMapSelection();
					C_DISABLE_COPY( IMapSelection )
				};
			}
		}
	}
}
#endif

