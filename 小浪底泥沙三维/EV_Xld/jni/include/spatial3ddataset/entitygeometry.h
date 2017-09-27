#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYGEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYGEOMETRY_H

#include "spatialinterface/igeometry.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;

                class CPropertySet;
			}}}}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CMeshDataInfo;
				class CEntityFeature;
				class CEntityGeometryFactory;

				class EV_Spatial3DDataset_DLL CEntityGeometry  :  public EarthView::World::Spatial::Geometry::IGeometry
				{
					friend class CEntityFeature;
					friend class CEntityGeometryFactory;
				private:
					EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
				protected:
					CEntityGeometry();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntityGeometry(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CEntityGeometry();

					/// <summary>
					/// 获取几何体对象的最大外包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大外包围盒，const对象，原则上该对象是不能直接修改</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

					/// <summary> 
					/// 获取几何体对象的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回几何体类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary> 
					/// 设置模型数据
					/// </summary>
					/// <param name="buf">二进制块</param>
					/// <param name="size">块大小</param>
					/// <returns>ev_void</returns>
					ev_void setData(_in ev_byte* buf,  _in ev_uint32 size);
					
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
