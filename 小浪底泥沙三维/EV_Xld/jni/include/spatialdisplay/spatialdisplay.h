/**
* Copyright (C) 2004-2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
*
* 文件名称：spatialdisplay.h
* 摘    要：
*
* 版    本：1.0
* 创建日期：2012年10月24日
* 作    者：李翔
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]     [修改内容]
*    1         2012-10-24     李翔      1.0.0版本的内容声明
**/

#ifndef EARTHVIEW_SPATIAL_DISPLAY_SPATIALDISPLAY_H
#define EARTHVIEW_SPATIAL_DISPLAY_SPATIALDISPLAY_H
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/idisplayoptions.h"
#include "spatialdisplay/spatialdisplayconfig.h"
#include "spatialinterface/ispatialtransformer.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/ilabelengine.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class EV_SPATIALDISPLAY_DLL CLabelEnvironment
					:public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CLabelEnvironment();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CLabelEnvironment();

				public:

					/// <summary>
					/// 判断是否有效
					/// </summary>
					/// <param name=" "></param>
					/// <returns>若有效，返回ture,无效，返回false</returns>
					ev_bool isActive() const;

					/// <summary>
					/// 设置是否有效
					/// </summary>
					/// <param name="active">设置是否有效的值</param>
					/// <returns> </returns>
					ev_void setActive( _in ev_bool active );

					/// <summary>
					/// 获取像素的格子
					/// </summary>
					/// <param name=""></param>
					/// <returns> </returns>
					ev_void * getPixelGrid() const;

				ev_private:
					CLabelEnvironment( EarthView::World::Core::CNameValuePairList *pList );
				private:
					C_DISABLE_COPY( CLabelEnvironment )

					ev_void reset();

					ev_uint32 m_nWidth;
					ev_uint32 m_nHeight;
					ev_uint32 m_nPrivateWidth;
					ev_uint32 m_nPrivateHeight;
					mutable ev_bool **m_ppPixelGrid;
					ev_bool m_bActive;
					const EarthView::World::Display::IPaintDevice *m_pDevice;

					friend class CSpatialDisplay;
				};

				class EV_SPATIALDISPLAY_DLL CSpatialDisplay : public EarthView::World::Spatial::Display::ISpatialDisplay
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialDisplay();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CSpatialDisplay();

				public:

					/// <summary>
					///  固定设备
					/// </summary>
					/// <param name="device"> 绘图设备</param>
					/// <returns> </returns>
					virtual ev_void fixDevice( _in EarthView::World::Display::IPaintDevice *ref_device );

					/// <summary>
					/// 获取设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					virtual EarthView::World::Display::IPaintDevice * getDevice() const;

					/// <summary>
					/// 卸下设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns> 
					virtual ev_void unfixDevice();
					/// <summary>
					/// 获取显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					virtual ev_int32 getDisplayResolution() const;
					/// <summary>
					/// 设置显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					virtual ev_void setDisplayResolution(ev_int32 resolution);
					/// <summary>
					///  获取空间引用
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 空间引用对象</returns> 
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference * getSpatialReference() const;

					/// <summary>
					///  设置空间坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns> </returns> 
					virtual ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );

					/// <summary>
					///  获取空间转换器
					/// </summary>
					/// <param name="sr"></param>
					/// <returns>空间转换器对象 </returns> 
					virtual EarthView::World::Spatial::Display::ISpatialTransformer * getSpatialTransformer() const;

					/// <summary>
					///  设置空间转换器
					/// </summary>
					/// <param name="trans">空间转换器对象</param>
					/// <returns> </returns> 
					virtual ev_void setSpatialTransformer( _in EarthView::World::Spatial::Display::ISpatialTransformer* ref_trans );

					/// <summary>
					/// 是否取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_bool isCancelled() const;

					/// <summary>
					///  开始
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_void start();

					/// <summary>
					///  取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_void cancel();

					/// <summary>
					///  获取选择设备
					/// </summary>
					/// <param name="trans"></param>
					/// <returns>选择的设备 </returns> 
					virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const;
					/// <summary>
					///  获取标注环境
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual EarthView::World::Spatial::Display::CLabelEnvironment * getLabelEnvironment() const;
					/// <summary>
					///  获取标注引擎
					/// </summary>
					virtual EarthView::World::Spatial::Display::ILabelEngine * getLabelEngine() const;
					/// <summary>
					///  获取标注引擎
					/// </summary>
					virtual ev_void setLabelEngine(EarthView::World::Spatial::Display::ILabelEngine * ref_engine);

				protected:
					EarthView::World::Display::IPaintDevice *m_pDevice;
					const EarthView::World::Spatial::Geometry::ISpatialReference *m_pSpatialReference;
					ev_bool mbCancelled;
					EarthView::World::Spatial::Display::ILabelEngine *m_pLabelEngine;
					EarthView::World::Spatial::Display::CLabelEnvironment *m_pLabelEnvironment;
					EarthView::World::Spatial::Display::ISpatialTransformer *m_pTransformer;
					EarthView::World::Display::IDisplayOptions* mpOptions;
					ev_int32 mdDisplayResolution;
				ev_private:
					CSpatialDisplay( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CSpatialDisplay )
				};
			}
		}
	}
}
#endif


