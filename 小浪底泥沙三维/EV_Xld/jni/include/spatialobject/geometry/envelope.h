#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ENVELOPE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ENVELOPE_H

#include "spatialobject/config.h"
#include "spatialinterface/ienvelope.h"
#include "geom_define.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CEnvelope);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// EarthView::World::Spatial::Geometry::CEnvelope类，描述一个平行与坐标轴的矩形
				/// </summary>
				class EV_GEOMETRY_DLL CEnvelope
					:public EarthView::World::Spatial::Geometry::IEnvelope
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEnvelope();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEnvelope();
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEnvelope(const CEnvelope& obj);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">左下角X值</param>
					/// <param name="y">左下角Y值</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
					CEnvelope(ev_real64 x,ev_real64 y,ev_real64 width,ev_real64 height);

					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">左下角X值</param>
					/// <param name="y">左下角Y值</param>
					/// <param name="z">左下角Z值</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="depth">深度</param>
					/// <returns></returns>
					CEnvelope(ev_real64 x,ev_real64 y,ev_real64 z,ev_real64 width,ev_real64 height,ev_real64 depth);

ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
					CEnvelope(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取最小X值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小X值</returns>
					ev_real64 getMinX() const;
					/// <summary>
					/// 获取最小Y值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小Y值</returns>
					ev_real64 getMinY() const;
					/// <summary>
					/// 获取最小Z值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小Z值</returns>
					ev_real64 getMinZ() const;
					/// <summary>
					/// 获取最大X值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大X值</returns>
					ev_real64 getMaxX() const;
					/// <summary>
					/// 获取最大Y值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大Y值</returns>
					ev_real64 getMaxY() const;
					/// <summary>
					/// 获取最大Z值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大Z值</returns>
					ev_real64 getMaxZ() const;
					/// <summary>
					/// 设置最小X值
					/// </summary>
					/// <param name="value">X值</param>
					/// <returns></returns>
					ev_void setMinX(ev_real64 value);
					/// <summary>
					/// 设置最小Y值
					/// </summary>
					/// <param name="value">Y值</param>
					/// <returns></returns>
					ev_void setMinY(ev_real64 value);
					/// <summary>
					/// 设置最小Z值
					/// </summary>
					/// <param name="value">Z值</param>
					/// <returns></returns>
					ev_void setMinZ(ev_real64 value);
					/// <summary>
					/// 设置宽度
					/// </summary>
					/// <param name="value">宽度值</param>
					/// <returns></returns>
					ev_void setMaxX(ev_real64 value);
					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="value">高度值</param>
					/// <returns></returns>
					ev_void setMaxY(ev_real64 value);
					/// <summary>
					/// 设置深度
					/// </summary>
					/// <param name="value">深度值</param>
					/// <returns></returns>
					ev_void setMaxZ(ev_real64 value);
					/// <summary>
					/// 获取宽度值
					/// </summary>
					/// <param name=""></param>
					/// <returns>宽度值</returns>
					ev_real64 getWidth() const;
					/// <summary>
					/// 获取高度值
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度值</returns>
					ev_real64 getHeight() const;
					/// <summary>
					/// 获取深度值
					/// </summary>
					/// <param name=""></param>
					/// <returns>深度值</returns>
					ev_real64 getDepth() const;
					/// <summary>
					/// 获取中心点位置
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					ev_void getCenter(_out ev_real64 & x,_out ev_real64 & y,_out ev_real64 & z) const;
					/// <summary>
					/// 设置中心点位置
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					ev_void setCenter(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 判断是否是三维Box。在有效Envelope的前提下，如果MaxZ - MinZ > 0,则为box
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isBox() const;
					/// <summary>
					/// 判断是否有效包围盒。
					/// 有效包围盒的条件是：
					///             1. MaxX - MinX > 0;
					///             2. MaxY - Miny > 0;
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isValid() const;
					/// <summary>
					/// 判断是否包含指定坐标点
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					ev_bool containsCoordinate(ev_real64 x,ev_real64 y,ev_real64 z,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 判断是否包含指定包围盒
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns>包含，返回true;否则，返回false</returns>
					ev_bool containsEnvelope(const EarthView::World::Spatial::Geometry::IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 判断指定包围盒是否相交
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns>相交，返回true;否则，返回false</returns>
					ev_bool isIntersects(const EarthView::World::Spatial::Geometry::IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 缩放包围盒
					/// </summary>
					/// <param name="isRadio">是否按比例处理</param>
					/// <param name="scaleX">如果isRadio = true,范围[0,~];否则，scaleX按照实际距离缩放，[-~，~]</param>
					/// <param name="scaleY">如果isRadio = true,范围[0,~];否则，scaleY按照实际距离缩放，[-~，~]</param>
					/// <param name="scaleZ">如果isRadio = true,范围[0,~];否则，scaleZ按照实际距离缩放，[-~，~]</param>
					/// <returns></returns>
					ev_void expands(ev_bool isRadio,ev_real64 scaleX,ev_real64 scaleY,ev_real64 scaleZ);
					/// <summary>
					/// 包围盒合并
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns></returns>
					ev_void unions(const EarthView::World::Spatial::Geometry::IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type);
					/// <summary>
					/// 包围盒求交
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns></returns>
					ev_void intersects(const EarthView::World::Spatial::Geometry::IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type);
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IEnvelope* clone() const;
					EarthView::World::Spatial::Geometry::CEnvelope clone2() const;
					ev_bool equals(const EarthView::World::Spatial::Geometry::IEnvelope& envelope,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType type) const;

					EarthView::World::Spatial::Geometry::CEnvelope& operator=(const EarthView::World::Spatial::Geometry::CEnvelope& envelope);
ev_private:
					CEnvelope(_in EV_GEOMETY_PRIVATE_PREFIX::CEnvelopePrivate* ref_p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CEnvelope);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
