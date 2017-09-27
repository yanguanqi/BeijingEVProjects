#ifndef EARTHVIEW_WORLD_SPATIAL3D_ATLAS_LAYERSELECTION3D_H
#define EARTHVIEW_WORLD_SPATIAL3D_ATLAS_LAYERSELECTION3D_H
#include "geometry3d/geometry3d_config.h"

#include <spatialinterface/ilayerselection.h>
#include <spatialinterface/ifeatureselection.h>
#include <spatialinterface/itheme.h>


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				class EV_GEOMETRY3D_DLL CLayerSelection3D : public EarthView::World::Spatial::Atlas::ILayerSelection
				{
				public: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayerSelection3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayerSelection3D();

				public:
					///<summary>
					///获取选择
					///</summary>
					///<returns>选择集指针</return>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					///<summary>
					///设置选择
					///</summary>
					///<param name="selection">选择集</param>
					ev_void setSelection(EarthView::World::Spatial::GeoDataset::IFeatureSelection* selection);
					
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLayerSelection3D( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CLayerSelection3D );
					EarthView::World::Spatial::GeoDataset::IFeatureSelection *m_pSelection;				

					
				};
			}
		}
	}
}
#endif


