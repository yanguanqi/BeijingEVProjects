#ifndef EARTHVIEW_WORLD_SPATIAL3D_RESOURCEGEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL3D_RESOURCEGEOMETRY_H

#include "spatialinterface/igeometry.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
			}}}}




namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CMeshDataInfo;
				class CResourceFeature;
				class CResourceGeometryFactory;

				class EV_Spatial3DDataset_DLL CResourceGeometry  :  public EarthView::World::Spatial::Geometry::IGeometry
				{
					friend class CResourceFeature;
					friend class CResourceGeometryFactory;
				private:
					EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CResourceGeometry(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CResourceGeometry();
				public:
					
					virtual ~CResourceGeometry();


					/// <summary> 
					/// 设置模型数据
					/// </summary>
					/// <param name="buf">二进制块</param>
					/// <param name="size">块大小</param>
					/// <returns>ev_void</returns>
					ev_void setData(ev_byte* buf,  ev_uint32 size);

					/// <summary> 
					/// 获取模型数据，外部需要释放buf资源
					/// </summary>
					/// <param name="buf">二进制块</param>
					/// <param name="size">块大小</param>
					/// <returns>ev_bool，TRUE成功，FALSE失败 </returns>
					ev_bool getData(_out ev_byte** buf, _out ev_uint32& size);

					
				};
			}//namespace
		}
	}
}

#endif
