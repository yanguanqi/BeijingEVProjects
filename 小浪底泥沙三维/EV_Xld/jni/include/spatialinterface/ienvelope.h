#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_IENVELOPE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_IENVELOPE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				/// <summary>
				/// 维度类型
				/// </summary>
				enum EVDimensionType
				{
					/// <summary>
					/// 未知维度
					/// </summary>
					DT_DIMENSION_UNKNOWN,
					/// <summary>
					/// 0维度
					/// </summary>
					DT_DIMENSION_0,
					/// <summary>
					/// 1维度
					/// </summary>
					DT_DIMENSION_1,
					/// <summary>
					/// 2维度
					/// </summary>
					DT_DIMENSION_2,
					/// <summary>
					/// 2.5维度
					/// </summary>
					DT_DIMENSION_2_5,
					/// <summary>
					/// 3维度
					/// </summary>
					DT_DIMENSION_3,
				};

				/// <summary>
				/// 包围盒类接口，定义了如何获取和设置包围盒，以及
				/// 包围盒相关计算。
				/// </summary>
				class EV_INTERFACE_DLL IEnvelope:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IEnvelope();
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IEnvelope( EarthView::World::Core::CNameValuePairList *pList );
				public:
					/// <summary>
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;
					/// <summary>
					/// 获取包围盒在Z轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Z轴上最小值</returns>
					virtual ev_real64 getMinZ() const;
					/// <summary>
					/// 获取包围盒在Z轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Z轴上最大值</returns>
					virtual ev_real64 getMaxZ() const;
					/// <summary>
					/// 获取包围盒宽度，该宽度是X轴上间距
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒宽度</returns>
					virtual ev_real64 getWidth() const;
					/// <summary>
					/// 获取包围盒高度，该宽度是Y轴上间距
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒高度</returns>
					virtual ev_real64 getHeight() const;
					/// <summary>
					/// 获取包围盒深度，该宽度是Z轴上间距
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒深度</returns>
					virtual ev_real64 getDepth() const;
					/// <summary>
					/// 判断是否是3维Box
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true，否则，返回false</returns>
					virtual ev_bool   isBox() const;
					/// <summary>
					/// 判断包围盒对象是否有效。
					/// 有效条件是 1.最大值不小于最小值
					///           2.宽度和高度必须为正
					/// </summary>
					/// <param name=""></param>
					/// <returns>有效，返回true，否则，返回false</returns>
					virtual ev_bool   isValid() const;
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒对象</returns>
					virtual IEnvelope* clone() const;
					/// <summary>
					/// 设置包围盒在X轴上最小值
					/// </summary>
					/// <param name="value">包围盒在X轴上最小值</param>
					/// <returns></returns>
					virtual ev_void setMinX(_in ev_real64 value);
					/// <summary>
					/// 设置包围盒在X轴上最大值
					/// </summary>
					/// <param name="value">包围盒在X轴上最大值</param>
					/// <returns></returns>
					virtual ev_void setMaxX(_in ev_real64 value);
					/// <summary>
					/// 设置包围盒在Y轴上最小值
					/// </summary>
					/// <param name="value">包围盒在Y轴上最小值</param>
					/// <returns></returns>
					virtual ev_void setMinY(_in ev_real64 value);
					/// <summary>
					/// 设置包围盒在Y轴上最大值
					/// </summary>
					/// <param name="value">包围盒在Y轴上最大值</param>
					/// <returns></returns>
					virtual ev_void setMaxY(_in ev_real64 value);
					/// <summary>
					/// 设置包围盒在Z轴上最小值
					/// </summary>
					/// <param name="value">包围盒在Z轴上最小值</param>
					/// <returns></returns>
					virtual ev_void setMinZ(_in ev_real64 value);
					/// <summary>
					/// 设置包围盒在Z轴上最大值
					/// </summary>
					/// <param name="value">包围盒在Z轴上最大值</param>
					/// <returns></returns>
					virtual ev_void setMaxZ(_in ev_real64 value);
					/// <summary>
					/// 判断是否包含指定坐标点
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					virtual ev_bool containsCoordinate(ev_real64 x,ev_real64 y,ev_real64 z,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 判断是否包含指定包围盒
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns>包含，返回true;否则，返回false</returns>
					virtual ev_bool containsEnvelope(const IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 判断指定包围盒是否相交
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns>相交，返回true;否则，返回false</returns>
					virtual ev_bool isIntersects(const IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
					/// <summary>
					/// 缩放包围盒
					/// </summary>
					/// <param name="isRadio">是否按比例处理</param>
					/// <param name="scaleX">如果isRadio = true,范围[0,~];否则，scaleX按照实际距离缩放，[-~，~]</param>
					/// <param name="scaleY">如果isRadio = true,范围[0,~];否则，scaleY按照实际距离缩放，[-~，~]</param>
					/// <param name="scaleZ">如果isRadio = true,范围[0,~];否则，scaleZ按照实际距离缩放，[-~，~]</param>
					/// <returns></returns>
					virtual ev_void expands(ev_bool isRadio,ev_real64 scaleX,ev_real64 scaleY,ev_real64 scaleZ);
					/// <summary>
					/// 包围盒合并
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns></returns>
					virtual ev_void unions(const IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type);
					/// <summary>
					/// 包围盒求交
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="type">指定维度</param>
					/// <returns></returns>
					virtual ev_void intersects(const IEnvelope & envelope,EarthView::World::Spatial::Geometry::EVDimensionType type);
					/// <summary>
					/// 判断指定包围盒是否相等
					/// </summary>
					/// <param name="envelope">指定包围盒</param>
					/// <param name="tolerance">容差范围</param>
					/// <param name="type">指定维度</param>
					/// <returns>true，相等；false，不相等</returns>
					virtual ev_bool equals(const IEnvelope& envelope,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType type) const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IEnvelope();

					C_DISABLE_COPY(IEnvelope);
				};
			}
		}
	}
}

#endif
