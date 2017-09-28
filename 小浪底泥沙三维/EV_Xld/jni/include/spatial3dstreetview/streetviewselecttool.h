#ifndef _STREETVIEW_SELECT_TOOL_H
#define _STREETVIEW_SELECT_TOOL_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "core/event.h"
#include "graphic/colourvalue.h"
#include "graphic/camera.h"
#include "spatialgui/itool.h"
#include "download/streetviewserviceconnection.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/geometry3d/vector_graphics.h"
#include "spatial3dstreetview/streetviewlayer.h"
#include "spatial3dengine/globecamera.h"

//0 billboard;1 movable
#define EV_STREET_PREVIEW 0	

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CManualObject;
		}

		namespace Spatial
		{
			namespace Utility
			{
				class CSpatialReference;
			}

			namespace GeoDataset
			{
				class IQueryFilter;
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CFeatureGroupLayer;
			}

			namespace Controls
			{
				class CGlobeControl;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				//class CStreetViewSelectEventObject;

				class EV_Spatial3DStreetView_DLL CStreetViewSelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_ctrl">抽象场景控件</param>
					/// <returns></returns>
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
#if EV_STREET_PREVIEW==0
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl,ev_real64 crisisDis,ev_real32 bubbleWidth,ev_real32 bubbleHeight,ev_real32 bubbleScale,ev_real32 bubbleTrans,ev_real32 radius);
#else
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl,ev_real64 crisisDis,ev_real32 sphereRadius,ev_real32 groundOffset,ev_uint32 cameraToBubbleScale/*ev_real32 bubbleWidth,ev_real32 bubbleHeight,ev_real32 bubbleScale,ev_real32 bubbleTrans,ev_real32 radius*/);
#endif
					virtual ~CStreetViewSelectTool();
				ev_private:
					CStreetViewSelectTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					class EV_Spatial3DStreetView_DLL ToolListener  : public EarthView::World::Core::CAllocatedObject
					{
ev_private:
						ToolListener(_in EarthView::World::Core::CNameValuePairList *pList){};
					public:
						ToolListener(){};

						virtual ~ToolListener(){};
						virtual ev_void onCreateMovableHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point){};
						virtual ev_void mouseClickHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point){};
						virtual ev_void onDestroyMovableHandle(){};
					protected:
					private:
					};

					class EV_Spatial3DStreetView_DLL CStreetCameraListener:public CGlobeCamera::CGlobeCameraListener
					{
ev_private:
						CStreetCameraListener(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						CStreetCameraListener(CStreetViewSelectTool* ref_streetTool);

						virtual ~CStreetCameraListener();

						virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera);

					private:
						CStreetViewSelectTool* mpStreetTool;
					};

				public:				
					/// <summary>
					/// 工具触发消息响应
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();

					/// <summary>
					/// 查询工具是否处于激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>激活返回true，否则返回false</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 查询工具是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>可用返回true，否则返回false</returns>
					virtual ev_bool getEnabled() const;	

					/// <summary>
					/// 清空结果集
					/// </summary>
					/// <returns></returns>
					void resetResults();

					/// <summary>
					/// 查询工具类型
					/// </summary>
					/// <returns>工具类型EVToolType</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 鼠标按下事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);					
					/// <summary>
					/// 鼠标弹起事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
				public:
					/// <summary>
					/// 清除选择集，销毁气泡
					/// </summary>
					ev_void clearLayerSelection();

					/// <summary>
					/// 创建气泡
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="memPtr">图片流</param>
					ev_void createMovable(const EarthView::World::Spatial::Download::CStreetPoint& point,const ev_bool fromPreview);

					ev_bool mouseClickEventHandle(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseMoveEventHandle(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y,ev_real32 trans,ev_real32 scaleFactor);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addToolListener(EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener* pListener);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeToolListener(EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener* pListener);

					ev_void updateMovable(EarthView::World::Spatial3D::CGlobeCamera* globeCamera);

					ev_void updateMovable(const ev_real32 newSphereRadius,const EVString newNodeName);

					
					
				protected:

					ev_void init();

					ev_bool queryStreetViewLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl,ev_real64 lat,ev_real64 lon,EarthView::World::Spatial::Download::CStreetPointList& streetPointList);
					ev_bool findNearestPoint(ev_real64 lat,ev_real64 lon,EarthView::World::Spatial::Download::CStreetPointList& streetPointList,EarthView::World::Spatial::Download::CStreetPoint& point);
					ev_bool isSelected(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					//创建movable成功时触发，用于外部处理
					ev_void onCreateMovableHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point);

					//鼠标单击，用于外部处理
					ev_void mouseClickHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point);

					//创建movable失败时触发，用于外部处理
					ev_void onDestroyMovableHandle();
					
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;

					ev_int32 mDownX;
					ev_int32 mDownY;

					//最小距离的阀值
					ev_real64 mCrisisDis;

					//鼠标是否位于气泡上
					ev_bool mbMouseOnBubble;

					ev_bool mbNormalState;

					//气泡的创建时间
					EarthView::World::Core::CCoreTime mCreateTime;

					//调用小窗体的时间
					EarthView::World::Core::CCoreTime mShowPreviewTime;

					//图层的最大可视距离
					ev_real64 mLayerVisibleDis;

					ev_bool mFlyBack;

#if EV_STREET_PREVIEW==0
					ev_real32 m_radius;
					
					//气泡宽度
					ev_real32 mBubbleWidth;
					//气泡高度
					ev_real32 mBubbleHeight;
					//气泡缩放比例
					ev_real32 mBubbleScale;
					//气泡透明度0~1
					ev_real32 mBubbleTrans;

					//气泡图片路径
					EVString m_iconFilePath;

					EarthView::World::Spatial::Utility::CSpatialReference* mWgsSR;
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mBBS;

#else					

					//气泡的初始大小
					ev_real32 mSphereRadius;

					//movable离地面的偏移
					ev_real32 mGroundOffset;					

					//相机距气泡距离的缩放比例，用来控制气泡在球上显示的大小
					ev_uint32 mCameraToBubbleScale;

					EarthView::World::Geometry3D::CMovableSphere* mpMovable;
#endif
					CStreetCameraListener* mpStreetCameraListener;

					EarthView::World::Spatial::Download::CStreetPoint mCurrentNearestPoint;

					EarthView::World::Spatial3D::CStreetViewLayer* mCurrentLayer;


					//CStreetViewSelectEventObject *mpEventReceiver;

					//EV_AUTO_MUTEX;
				public:
					
					ev_void setCrisisDis(ev_real64 dis);
					ev_real64 getCrisisiDis();

					ev_void setFlyBack(const ev_bool flyBack);
#if EV_STREET_PREVIEW==0
					ev_void setRadius(ev_real32 r);
					ev_real32 getRadius();

					ev_void setBubbleWidth(ev_real32 bWidth);
					ev_real32 getBubbleWidth();

					ev_void setBubbleHeight(ev_real32 bHeight);
					ev_real32 getBubbleHeight();

					ev_void setBubbleScale(ev_real32 scale);
					ev_real32 getBubbleScale();

					ev_void setIconPath(const EVString& path);
#else
					ev_void setSphereRadius(ev_real32 radius);
					ev_real32 getSphereRadius();

					ev_void setGroundOffset(ev_real32 groundOffset);
					ev_real32 getGroundOffset();

					ev_void setCameraToBubbleScale(ev_uint32 scale);
					ev_uint32 getCameraToBubbleScale();

#endif					

					EarthView::World::Spatial3D::CStreetViewLayer* getSelectedLayer();

				private:
					C_DISABLE_COPY( CStreetViewSelectTool );

					ev_vector<EarthView::World::Spatial3D::CStreetViewLayer*> mStreetViewLayerList;
					list<EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener*> mToolListenerList;
				};


				/*class EV_Spatial3DStreetView_DLL CStreetViewSelectEvent : public EarthView::World::Core::CEvent
				{
				public:
					CStreetViewSelectEvent(ev_uint16 type);
					~CStreetViewSelectEvent();
ev_private:
					CStreetViewSelectEvent(EarthView::World::Core::CNameValuePairList *pList);

				public:
					EarthView::World::Spatial3D::CStreetViewLayer* getStreetViewLayer()const;
					ev_void setStreetViewLayer(EarthView::World::Spatial3D::CStreetViewLayer* ref_layer);

					EarthView::World::Spatial::Download::CStreetPoint getStreetPoint()const;
					ev_void setStreetPoint(EarthView::World::Spatial::Download::CStreetPoint& point);

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

				protected:
					EarthView::World::Spatial3D::CStreetViewLayer* mpStreetViewLayer;
					EarthView::World::Spatial::Download::CStreetPoint mStreetPoint;
					ev_bool mResponseState;
				};


				class EV_Spatial3DStreetView_DLL CStreetViewSelectEventObject : public EarthView::World::Core::CEventObject
				{
				public:
					CStreetViewSelectEventObject(CStreetViewSelectTool* ref_streetViewTool);
					~CStreetViewSelectEventObject();
ev_private:
					CStreetViewSelectEventObject(EarthView::World::Core::CNameValuePairList *pList);

ev_internal:
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
				private:
					CStreetViewSelectTool* mpStreetViewSelectTool;
				};*/
			}
		}
	}
}

#endif