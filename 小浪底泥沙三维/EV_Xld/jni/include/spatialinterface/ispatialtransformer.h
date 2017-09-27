#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISPATIALTRANSFORMER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISPATIALTRANSFORMER_H

#include "core/memoryallocatedobject.h"

#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// 空间坐标转换基类
				/// </summary>
				class EV_INTERFACE_DLL ISpatialTransformer :
					public EarthView::World::Core::CAllocatedObject
				{
				public:			
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~ISpatialTransformer();
				public:
					/// <summary>
					/// 检测转换器是否可用
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果可用,返回true,反之则否</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// 获取空间参考信息
					/// </summary>
					/// <returns>返回空间参考信息</returns>
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					/// <summary>
					///设置空间参考信息
					/// </summary>
					/// <param name="sr">空间参考信息</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr );
					/// <summary>
					/// 获取地图范围
					/// </summary>
					/// <returns>包围盒对象</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDataExtent();
					/// <summary>
					/// 获取地图范围(经纬度范围)
					/// </summary>
					/// <returns>包围盒对象</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeographicDataExtent();
					/// <summary>
					/// 设置地图范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					virtual ev_void setDataExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope * extent );
					/// <summary>
					/// 获取设备范围
					/// </summary>
					/// <param name=" "></param>
					/// <returns>包围盒对象 </returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDeviceExtent();
					/// <summary>
					/// 设置设备范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					virtual ev_void setDeviceExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope *extent );
					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <returns>返回旋转角度</returns>
					virtual ev_real64 getRotation() const;
					/// <summary>
					///将坐标进行旋转
					/// </summary>
					/// <param name="angle">旋转角度</param>
					/// <returns></returns>
					virtual ev_void rotate( _in ev_real64 angle );
					/// <summary>
					/// 旋转位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" x">旋转的x坐标</param>
					/// <param name=" y ">旋转的y坐标</param>
					/// <returns> </returns>
					virtual ev_void rotateAt( _in ev_real64 angle, _in ev_real64 x, ev_real64 y );
					/// <summary>
					/// 获取当前比例尺
					/// </summary>
					/// <returns>返回当前比例尺</returns>
					virtual ev_real64 getCurrentScale();
					/// <summary>
					///设置当前比例尺
					/// </summary>
					/// <param name="scale">当前比例尺</param>
					/// <returns></returns>
					virtual ev_void setCurrentScale( _in ev_real64 scale );
					/// <summary>
					///  设置当前比例及位置
					/// </summary>
					/// <param name="scale">设置比例的值</param>
					/// <param name=" x">设置x坐标</param>
					/// <param name=" y ">设置y坐标</param>
					/// <returns> </returns>
					virtual ev_void setCurrentScale( _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y );
					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					virtual ev_void getCenter( _out ev_real64* cx, _out ev_real64* cy );
					/// <summary>
					/// 获取中心点(地理坐标系下)
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					virtual ev_void getGeographicCenter( _out ev_real64* cx, _out ev_real64* cy );
					/// <summary>
					///设置中心点
					/// </summary>
					/// <param name="x">中心点x坐标</param>
					/// <param name="y">中心点y坐标</param>
					/// <returns></returns>
					virtual ev_void setCenter( _in ev_real64 cx, _in ev_real64 cy );
					/// <summary>
					///平移
					/// </summary>
					/// <param name="offsetX">x方向偏移量</param>
					/// <param name="offsetY">y方向偏移量</param>
					/// <returns></returns>
					virtual ev_void translate( _in ev_real64 offsetX, _in ev_real64 offsetY );
					/// <summary>
					///重置
					/// </summary>
					/// <returns></returns>
					virtual ev_void reset();
					/// <summary>
					///将地图坐标转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					virtual ev_void toDevicePoints( _inout ev_real64 *x, _inout ev_real64 *y, _in ev_uint32 count );
					/// <summary>
					///将设备坐标转换为地图坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					virtual ev_void toMapPoints( _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count );
					/// <summary>
					///将地图坐标（地理坐标：经纬度）转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					virtual ev_void geographicToDevicePoints( _inout ev_real64 *x, _inout ev_real64 *y, _in ev_uint32 count );
					/// <summary>
					///将设备坐标转换为地图坐标(地理坐标：经纬度)
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					virtual ev_void deviceToGeographicPoints( _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count );
					/// <summary>
					///  转换为设备的长度
					/// </summary>
					/// <param name="len">设备的长度</param>
					/// <param name="count ">转换为设备长度的数目</param>
					/// <returns> </returns>
					virtual ev_void toDeviceLength( ev_real64* len,int count );
					/// <summary>
					///  转换为地图的长度
					/// </summary>
					/// <param name="len">地图的长度</param>
					/// <param name="count ">转换为地图长度的数目</param>
					/// <returns> </returns>
					virtual ev_void toMapLength( ev_real64* len, int count );
					/// <summary>
					/// 转换为地图矩形
					/// </summary>
					/// <param name="devRect ">输入的设备矩形</param>
					/// <param name="mapRect ">输出的地图矩形</param>
					/// <returns> </returns>
					virtual ev_void toMapRect( _in const EarthView::World::Spatial::Geometry::IEnvelope *devRect, _out EarthView::World::Spatial::Geometry::IEnvelope *mapRect );
					/// <summary>
					/// 转换为设备矩形
					/// </summary>
					/// <param name="devRect ">输入的地图矩形</param>
					/// <param name="mapRect ">输出的设备矩形</param>
					/// <returns> </returns>
					virtual ev_void toDeviceRect( _in const EarthView::World::Spatial::Geometry::IEnvelope *mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope *devRect );
					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src ">空间源参考系</param>
					/// <param name="dest ">空间目标参考系</param>
					/// <param name="enve ">包围盒对象</param>
					/// <returns> </returns>
					virtual ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve );
					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src">空间源参考系</param>
					/// <param name="dest">空间目标参考系</param>
					/// <param name="x">空间x坐标值</param>
					/// <param name="y">空间y坐标值</param>
					/// <param name="count">转化的数目</param>
					/// <returns> </returns>
					virtual ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest,
						_inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count );
					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					/// <param name="pForwardFlag">正算标记,true表示从地理坐标到投影坐标</param>
					///<returns>0表示成功 正常</returns>
					virtual ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src,
						_in ev_int32 nCount,_inout ev_real64*pdfX,_inout ev_real64*pdfY,_in ev_bool pForwardFlag);

				ev_private:
					ISpatialTransformer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ISpatialTransformer();
				private:
					ISpatialTransformer(ISpatialTransformer & obj);
				};
			}
		}
	}
}

#endif
