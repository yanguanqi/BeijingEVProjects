#ifndef EARTHVIEW_SPATIAL_DISPLAY_SPATIALTRANSFORMER_H
#define EARTHVIEW_SPATIAL_DISPLAY_SPATIALTRANSFORMER_H

#include "spatialinterface/ispatialtransformer.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialdisplay/spatialdisplayconfig.h"
#include "spatialdisplay/spatialmatrix.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class EV_SPATIALDISPLAY_DLL CCondensedMatrix3 : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CCondensedMatrix3();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CCondensedMatrix3();
				public:

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name=" offsetX ">X的偏移量</param>
					/// <param name=" offsetY" >Y的偏移量</param>
					/// <returns> </returns>
					ev_void translate( _in ev_real64 offsetX, _in ev_real64 offsetY );

					/// <summary>
					/// 比例
					/// </summary>
					/// <param name="scaleX">X坐标的比例</param>
					/// <param name="scaleY">Y坐标的比例</param>
					/// <returns> </returns>
					ev_void scale( _in ev_real64 scaleX, _in ev_real64 scaleY );

					/// <summary>
					/// 旋转
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <returns> </returns>
					ev_void rotate( _in ev_real64 angle );

					/// <summary>
					/// 旋转的位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" centerX ">旋转的X坐标</param>
					/// <param name=" centerX ">旋转的Y坐标</param>
					/// <returns> </returns>
					ev_void rotateAt( _in ev_real64 angle, _in ev_real64 centerX, _in ev_real64 centerY );
					
					/// <summary>
					/// 重新设置
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					ev_void reset();

					/// <summary>
					/// 使反转
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					_extfree EarthView::World::Spatial::Display::CCondensedMatrix3* invert() const;

					/// <summary>
					/// 克隆
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					_extfree EarthView::World::Spatial::Display::CCondensedMatrix3* clone() const;

					/// <summary>
					/// 变换
					/// </summary>
					/// <param name=" x ">变换的X坐标</param>
					/// <param name=" y ">变换的Y坐标</param>
					/// <param name=" count ">变换的数目</param>
					/// <returns> </returns>
					ev_void transform( _inout ev_real64* x, _inout ev_real64* y, ev_int32 count ) const;
				private:
					ev_real64 m[3][3];
ev_private:
					CCondensedMatrix3( EarthView::World::Core::CNameValuePairList *pList );
				};

				class EV_SPATIALDISPLAY_DLL CSpatialTransformer : public EarthView::World::Spatial::Display::ISpatialTransformer
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialTransformer();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CSpatialTransformer();

				public:

					/// <summary>
					/// 检测转换器是否可用
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果可用,返回true,反之则否</returns>
					ev_bool isValid() const;
					/// <summary>
					/// 获取空间参考系
					/// </summary>
					/// <param name=" "></param>
					/// <returns>空间参考系对象</returns>
					const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

					/// <summary>
					/// 设置空间参考系
					/// </summary>
					/// <param name="sr">参考系对象</param>
					/// <returns> </returns>
					ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr );

					/// <summary>
					/// 获取地图范围
					/// </summary>
					/// <param name=" "></param>
					/// <returns>包围盒对象 </returns>
					const EarthView::World::Spatial::Geometry::IEnvelope* getDataExtent();
					/// <summary>
					/// 获取地图范围(经纬度范围)
					/// </summary>
					/// <returns>包围盒对象</returns>
					const EarthView::World::Spatial::Geometry::IEnvelope* getGeographicDataExtent();
					/// <summary>
					/// 设置地图范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					ev_void setDataExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope * extent );

					/// <summary>
					/// 获取设备范围
					/// </summary>
					/// <param name=" "></param>
					/// <returns>包围盒对象 </returns>
					const EarthView::World::Spatial::Geometry::IEnvelope* getDeviceExtent();

					/// <summary>
					/// 设置设备范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					ev_void setDeviceExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope *extent );

					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=" "></param>
					/// <returns>旋转的角度 </returns>
					ev_real64 getRotation() const;

					/// <summary>
					/// 旋转
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <returns> </returns>
					ev_void rotate( _in ev_real64 angle );

					/// <summary>
					/// 旋转位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" x">旋转的x坐标</param>
					/// <param name=" y ">旋转的y坐标</param>
					/// <returns> </returns>
					ev_void rotateAt( _in ev_real64 angle, _in ev_real64 x, ev_real64 y );

					/// <summary>
					///  获取当前比例
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 当前比例的值</returns>
					ev_real64 getCurrentScale();

					/// <summary>
					///  设置当前比例
					/// </summary>
					/// <param name="scale">设置比例的值</param>
					/// <returns> </returns>
					ev_void setCurrentScale( _in ev_real64 scale );

					/// <summary>
					///  设置当前比例及位置
					/// </summary>
					/// <param name="scale">设置比例的值</param>
					/// <param name=" x">设置x坐标</param>
					/// <param name=" y ">设置y坐标</param>
					/// <returns> </returns>
					ev_void setCurrentScale( _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y );
					
					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name="cx">中心点x坐标</param>
					/// <param name="cy">中心点y坐标</param>
					/// <returns> </returns>
					ev_void getCenter( _out ev_real64* cx, _out ev_real64* cy );
					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					virtual ev_void getGeographicCenter( _out ev_real64* cx, _out ev_real64* cy );
					/// <summary>
					/// 设置中心点
					/// </summary>
					/// <param name="cx">中心点x坐标</param>
					/// <param name="cy">中心点y坐标</param>
					/// <returns> </returns>
					ev_void setCenter( _in ev_real64 cx, _in ev_real64 cy );

					/// <summary>
					/// 坐标转化
					/// </summary>
					/// <param name="offsetX">X坐标的偏移量</param>
					/// <param name="offsetY">Y坐标的偏移量</param>
					/// <returns> </returns>
					ev_void translate( _in ev_real64 offsetX, _in ev_real64 offsetY );

					/// <summary>
					/// 获得矩阵
					/// </summary>
					/// <param name=" "></param>
					/// <returns>空间矩阵对象 </returns>
					const EarthView::World::Spatial::Display::CSpatialMatrix& matrix();

					/// <summary>
					/// 设置矩阵
					/// </summary>
					/// <param name="matrix">空间矩阵对象</param>
					/// <returns> </returns>
					ev_void setMatrix( const EarthView::World::Spatial::Display::CSpatialMatrix& matrix );

					/// <summary>
					/// 重新设置
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					ev_void reset();
					ev_void resetMapping( const EarthView::World::Spatial::Geometry::IEnvelope *dev,const EarthView::World::Spatial::Geometry::IEnvelope *data,double angle );
					
					/// <summary>
					///  转换为设备的点
					/// </summary>
					/// <param name="x">设备点的x坐标</param>
					/// <param name="y">设备点的y坐标</param>
					/// <param name="count ">转换为设备点的数目</param>
					/// <returns> </returns>
					ev_void toDevicePoints( _inout ev_real64 *x, _inout ev_real64 *y, _in ev_uint32 count );
					
					/// <summary>
					///  转换为地图的点
					/// </summary>
					/// <param name="x">地图点的x坐标</param>
					/// <param name="y">地图点的y坐标</param>
					/// <param name="count ">转换为地图点的数目</param>
					/// <returns> </returns>
					ev_void toMapPoints( _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count );
					/// <summary>
					///将地图坐标（地理坐标：经纬度）转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					ev_void geographicToDevicePoints( _inout ev_real64 *x, _inout ev_real64 *y, _in ev_uint32 count );
					/// <summary>
					///将设备坐标转换为地图坐标(地理坐标：经纬度)
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					ev_void deviceToGeographicPoints( _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count );
					/// <summary>
					///  转换为设备的长度
					/// </summary>
					/// <param name="len">设备的长度</param>
					/// <param name="count ">转换为设备长度的数目</param>
					/// <returns> </returns>
					ev_void toDeviceLength(ev_real64* len,int count );

					/// <summary>
					///  转换为地图的长度
					/// </summary>
					/// <param name="len">地图的长度</param>
					/// <param name="count ">转换为地图长度的数目</param>
					/// <returns> </returns>
					ev_void toMapLength( ev_real64* len, int count );

					/// <summary>
					/// 转换为地图矩形
					/// </summary>
					/// <param name="devRect ">输入的设备矩形</param>
					/// <param name="mapRect ">输出的地图矩形</param>
					/// <returns> </returns>
					ev_void toMapRect( _in const EarthView::World::Spatial::Geometry::IEnvelope *devRect, _out EarthView::World::Spatial::Geometry::IEnvelope *mapRect );

					/// <summary>
					/// 转换为设备矩形
					/// </summary>
					/// <param name="devRect ">输入的地图矩形</param>
					/// <param name="mapRect ">输出的设备矩形</param>
					/// <returns> </returns>
					ev_void toDeviceRect( _in const EarthView::World::Spatial::Geometry::IEnvelope *mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope *devRect );
					
					/// <summary>
					/// 转换为地图矩形
					/// </summary>
					/// <param name=" ">空间矩形</param>
					/// <returns> 地图空间矩形</returns>
					EarthView::World::Spatial::Display::CSpatialRect toMapRect( const EarthView::World::Spatial::Display::CSpatialRect& rect );

					/// <summary>
					/// 空间矩形转换为设备矩形
					/// </summary>
					/// <param name=" ">空间矩形</param>
					/// <returns>设备空间矩形 </returns>
					EarthView::World::Spatial::Display::CSpatialRect toDeviceRect( const EarthView::World::Spatial::Display::CSpatialRect& rect );

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src ">空间源参考系</param>
					/// <param name="dest ">空间目标参考系</param>
					/// <param name="enve ">包围盒对象</param>
					/// <returns> </returns>
					ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve );
					
					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src">空间源参考系</param>
					/// <param name="dest">空间目标参考系</param>
					/// <param name="x">空间x坐标值</param>
					/// <param name="y">空间y坐标值</param>
					/// <param name="count">转化的数目</param>
					/// <returns> </returns>
					ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest,
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
					ev_void transform( _in const EarthView::World::Spatial::Geometry::ISpatialReference* src,
						_in ev_int32 nCount, _inout ev_real64*pdfX, _inout ev_real64*pdfY, _in ev_bool pForwardFlag);
					/// <summary>
					/// 设置DPI
					/// </summary>
					/// <param name="src ">DPI值</param>
					/// <returns> </returns>
					void setDPI(ev_real64 dDPI);
					inline ev_real64 getDPI() const{ return m_fDPI; }
					/// <summary>
					/// 获取设备比率
					/// </summary>
					/// <param name=" "></param>
					/// <returns>设备比率</returns>
					inline ev_real64 getRatioToDevice() const{ return mdRatio; }
				private:
					/// <summary>
					/// 转化包围盒
					/// </summary>
					/// <param name="src ">空间源参考系</param>
					/// <param name="dest ">源包围盒对象</param>
					/// <param name="enve ">目标包围盒对象</param>
					/// <returns> </returns>
					ev_void transformEnv(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src,
						 _in const EarthView::World::Spatial::Geometry::IEnvelope* inEnv,
						 _out EarthView::World::Spatial::Geometry::IEnvelope* outEnv);
			
			protected:

					/// <summary>
					/// 制定矩阵
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					ev_void makeMatrix();

					/// <summary>
					/// 制定比例
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					ev_void makeScale();

					/// <summary>
					/// 制定比率
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					ev_void makeRatio();
					ev_void init();
					
					const EarthView::World::Spatial::Geometry::ISpatialReference *mpSR,*mpPreviousSR;
					EarthView::World::Spatial::Geometry::IEnvelope* mpDataEnve;
					EarthView::World::Spatial::Geometry::IEnvelope* mpGeographicDataEnve;
					EarthView::World::Spatial::Geometry::IEnvelope* mpDevEnve;
					ev_real64 mdScale;
					ev_real64 mdRotation;
					ev_real64 mdCenterX, mdCenterY;
					ev_real64 mdRatio;
					ev_real64 m_fDPI;
					ev_bool mbAvailable;
					ev_bool mbCenterSet;
					EarthView::World::Spatial::Display::CSpatialMatrix mMatrix;
					EarthView::World::Spatial::Display::CSpatialMatrix mInvert;
				ev_private:
					CSpatialTransformer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CSpatialTransformer )
				};
			}
		}
	}
}
#endif


