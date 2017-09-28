#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPCONTROL_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPCONTROL_H

#include "mapcontrol/mapcontrolconfig.h"
#include "spatialinterface/imap.h"
#include "spatialgui/itool.h"
#include "spatialgui/ispatialcontrol.h"

namespace EarthView{
	namespace World{

		namespace Display{
			class IPaintDevice;
		}

		namespace Spatial{

			class IViewArgs;

				namespace SystemUI{
					class ICommand;
					class ITool;
				}
				namespace GeoDataset{
					class CWorkCommandManager;
				}
				namespace Display
				{
					class ISpatialDisplay;
				}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				enum EVMapCursor
				{
					MC_ArrowCursor			= 0,	//箭头
					MC_CrossCursor			= 1,	//十字丝
					MC_OpenHandCursor		= 2,	//"展开手"样式
					MC_CloseHandCursor		= 3,	//"握紧手"样式
					MC_PointingHandCursor	= 4,	//"食指点击"样式
					MC_MoveVertexCursor		= 5,	//"移动顶点"样式
					MC_MoveFeatureCursor	= 6,	//"移动要素"样式
					MC_RotateFeatureCursor  = 7,	//"旋转要素"样式
					MC_SketchFeatureCursor  = 8,	//"描绘要素"样式
					MC_MeasureCursor		= 9,	//"测量"样式
					MC_ZoomInCursor			= 10,	//"放大"样式
					MC_ZoomOutCursor		= 11,	//"缩小"样式
					MC_EditSelection		= 12,	//编辑选择
					MC_ModifySelection      = 13,	//修改选择 	
					MC_PasteCursor			= 14	//粘贴 	
				};
				enum EVMapcontrolViewControlMode
				{
					MVR_Auto						= 0,
					MVR_BetweenMapDisplayScales		= 1,
				};
				enum EVMapcontrolCoordinateUnit
				{
					MCU_FollowMap					= 0,
					MCU_Geographic		            = 1    //经纬度坐标
				};
				/// <summary>
				/// 地图控件信息栏设置类
				/// </summary>
				class EV_MAPCONTROL_DLL CInformationBarSettings : public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CInformationBarSettings();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CInformationBarSettings(){}
				public:
					/// <summary>
					/// 信息栏是否可见
					/// </summary>
					ev_bool m_Visible;
					/// <summary>
					/// 信息栏背景色R值
					/// </summary>
					ev_uint32 m_R;
					/// <summary>
					/// 信息栏背景色G值
					/// </summary>
					ev_uint32 m_G;
					/// <summary>
					/// 信息栏背景色B值
					/// </summary>
					ev_uint32 m_B;
					/// <summary>
					/// 信息栏背景色透明度值（0为完全透明,0~255）
					/// </summary>
					ev_uint32 m_A;
					/// <summary>
					/// 信息栏字体
					/// </summary>
					EVString m_Font;
					/// <summary>
					/// 信息栏字体加粗
					/// </summary>
					ev_bool m_IsBold;
					/// <summary>
					/// 信息栏字体颜色R值
					/// </summary>
					ev_uint32 m_FontColor_R;
					/// <summary>
					/// 信息栏字体颜色G值
					/// </summary>
					ev_uint32 m_FontColor_G;
					/// <summary>
					/// 信息栏字体颜色B值
					/// </summary>
					ev_uint32 m_FontColor_B;
					/// <summary>
					/// 信息栏字体颜色透明度值（0为完全透明,0~255）
					/// </summary>
					ev_uint32 m_FontColor_A;
				};
				/// <summary>
				/// 地图控件代理对象
				/// </summary>
				class EV_MAPCONTROL_DLL CMapControlAgent : public EarthView::World::Core::CBaseObject
				{
				public:
					CMapControlAgent() {}

					/// <summary>
					/// 获取地图画面
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图画面指针</returns>
					virtual EarthView::World::Display::IPaintDevice*	onGetMapCanvas() const {
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}
					/// <summary>
					/// 刷新画布
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void			onRepaint() {
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}
					/// <summary>
					/// 设置光标样式
					/// </summary>
					/// <param name="value">光标样式</param>
					/// <returns></returns>
					virtual ev_void			onSetCursor( _in ev_int32 value ) {
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}

ev_private:
					CMapControlAgent( EarthView::World::Core::CNameValuePairList *pList ) {}
				};
				/// <summary>
				/// 地图控件的事件监听
				/// </summary>
				class EV_MAPCONTROL_DLL IMapControlListener : public  EarthView::World::Spatial::Atlas::IMapListener
				{
					/// <summary>
					/// 自动化封闭构造函数
					/// </summary>
ev_private:
					IMapControlListener( EarthView::World::Core::CNameValuePairList *pList ) {}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IMapControlListener(){}
					/// <summary>
					/// 在添加图层之前的事件
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					virtual ev_void onBeforeAddLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}
					/// <summary>
					/// 在添加图层之后的事件
					/// </summary>
					/// <param name="layer">己添加的图层</param>
					/// <returns></returns>
					virtual ev_void onAfterAddLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}

					/// <summary>
					/// 在移除图层之前的事件
					/// </summary>
					/// <param name="layer">待移除的图层</param>
					/// <returns></returns>
					virtual ev_void onBeforeRemoveLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}
					/// <summary>
					/// 在移除图层之后的事件
					/// </summary>
					/// <param name="layer">己移除的图层</param>
					/// <returns></returns>
					virtual ev_void onAfterRemoveLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}

					/// <summary>
					/// 在移动图层之前的事件
					/// </summary>
					/// <param name="oldIndex">原来的索引</param>
					/// <param name="newIndex">新的索引</param>
					/// <returns></returns>
					virtual ev_void onBeforeMoveLayer( _in ev_int32 oldIndex, _in ev_int32 newIndex ){}
					/// <summary>
					/// 在移动图层之后的事件
					/// </summary>
					/// <param name="oldIndex">原来的索引</param>
					/// <param name="newIndex">新的索引</param>
					/// <returns></returns>
					virtual ev_void onAfterMoveLayer( _in ev_int32 oldIndex, _in ev_int32 newIndex ){}

					/// <summary>
					/// 地图的选中集合发生变化的事件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onMapSelectionChanged(){}
					/// <summary>
					/// 地图绘制事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="layer">正在绘制的图层</param>
					/// <param name="type">正在绘制的类型</param>
					/// <returns></returns>
					virtual ev_void onMapDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type ){}
					/// <summary>
					/// 鼠标按下事件触发											
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="geoX">地理位置x</param>
					/// <param name="geoY">地理位置y</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onMouseDown( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="geoX">地理位置x</param>
					/// <param name="geoY">地理位置y</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onMouseUp( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="geoX">地理位置x</param>
					/// <param name="geoY">地理位置y</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onMouseMove( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
					/// <summary>
					/// 鼠标双击事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="geoX">地理位置x</param>
					/// <param name="geoY">地理位置y</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onDoubleClick( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
					/// <summary>
					/// 鼠标滚轮事件触发
					/// </summary>
					/// <param name="delta">滚轮转过的角度</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="geoX">地理位置x</param>
					/// <param name="geoY">地理位置y</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onMouseWheel( _in ev_int32 delta,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY,_in ev_int32 flag ){return false;}
					/// <summary>
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onKeyDown( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
					/// <summary>
					/// 键盘弹起事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
					virtual ev_bool onKeyUp( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
					/// <summary>
					/// 窗口大小发生变化
					/// </summary>
					/// <param name="width">窗口宽度</param>
					/// <param name="height">窗口高度</param>
					/// <returns></returns>
					virtual ev_bool onResize( _in ev_int32 width,_in ev_int32 height ){ return false;}
					/// <summary>
					/// 地图刷新之前的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="viewportEnvelope">新的视口范围</param>
					/// <returns></returns>
					virtual ev_void onBeforeRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}
					/// <summary>
					/// 地图刷新之后的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="viewportEnvelope">新的视口范围</param>
					/// <returns></returns>
					virtual ev_void onAfterRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}

					/// <summary>
					/// 绘制跟踪层之前的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <returns></returns>
					virtual ev_void onBeforeDrawTrackingLayer( _in EarthView::World::Spatial::Display::ISpatialDisplay* display ){}
					/// <summary>
					/// 绘制跟踪层之后的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <returns></returns>
					virtual ev_void onAfterDrawTrackingLayer( _in EarthView::World::Spatial::Display::ISpatialDisplay* display ){}
					/// <summary>
					/// 绘制interest跟踪项之前的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <returns></returns>
					virtual ev_void onBeforeDrawInterestTrackingItems( _in EarthView::World::Spatial::Display::ISpatialDisplay* display ){}
					/// <summary>
					/// 绘制interest跟踪项之后的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <returns></returns>
					virtual ev_void onAfterDrawInterestTrackingItems( _in EarthView::World::Spatial::Display::ISpatialDisplay* display ){}
					/// <summary>
					/// 二维分析完成后的事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <returns></returns>
					virtual ev_void onAnalysisEnd( _in EarthView::World::Spatial::SystemUI::ICommand* command ){}
				};

				class CTrackingLayer;
				class CMapControlCache;
				class CMapSnapper;
				class CDataEditor;
				class CViewportChangeEntry;
				class CZoomController;
				class CMapEagleEye;
				class CDrawDelayHandler;
				class CPanHandler;
				class CWheelHandler;
				class CMapControlPri;
				class CDrawBaseMapThread;	
				/// <summary>
				/// 地图控件
				/// </summary>
				class EV_MAPCONTROL_DLL CMapControl : public EarthView::World::Spatial::Atlas::ISpatialControl
				{
					friend class CDataEditor;
					friend class CTrackingLayerPrivate;
					friend class CMapEventReceiver;
					friend class CZoomController;
					friend class CResizeController;				 
					friend class CKeyEventController;
					friend class CToolPan;
					friend class CPanHandler;
					friend class CDrawThread;
					friend class CDrawBaseMapThread;
					friend class CDrawTimer;
					friend class CDrawDelayHandler;
					friend class CWheelHandler;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CMapControl( );
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CMapControl( );

				public:
					/// <summary>
					/// 获取控件的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>控件类型</returns>
					EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const;
					/// <summary>
					/// 获取地图名字
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图名字</returns>
					EVString getName() const;
					/// <summary>
					/// 获取控件类型的字符串形式
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					EVString getTypeString() const;
					/// <summary>
					/// 接收外部通知，刷新控件的视口区域
					/// </summary>
					/// <param name="args">视口信息</param>
					/// <returns></returns>
					ev_void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args);

					/// <summary>
					/// 设置控件代理
					/// </summary>
					/// <param name="pxy">控件代理</param>
					/// <returns></returns>
					ev_void setProxy(CMapControlAgent* ref_pxy);
					/// <summary>
					/// 获取背景色
					/// </summary>
					/// <param name=""></param>
					/// <returns>背景色(内部指针)</returns>
					EarthView::World::Spatial::Display::IColor *getBackGround() const;
					/// <summary>
					/// 设置地图背景色
					/// </summary>
					/// <param name="background">地图背景色</param>
					/// <returns></returns>
					ev_void setBackground( _in const EarthView::World::Spatial::Display::IColor *background );

					/// <summary>
					/// 获取空间显示参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间显示指针(内部指针)</returns>
					EarthView::World::Spatial::Display::ISpatialDisplay * getDisplay() const;
					EarthView::World::Spatial::Display::ISpatialDisplay * getFloatingDisplay() const;

					/// <summary>
					/// 获取地图控件所关联的map
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图map指针(内部指针)</returns>
					EarthView::World::Spatial::Atlas::IMap * getMap() const;
					/// <summary>
					/// 设置地图刷新间隔时间
					/// </summary>
					/// <param name="nTime">地图刷新间隔时间</param>
					/// <returns></returns>
					ev_void setRefreshIntervalTime(ev_int32 nTime);

					/// <summary>
					/// 获取地图刷新间隔时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图刷新间隔时间</returns>
					ev_int32 getRefreshIntervalTime() const;

					/// <summary>
					/// 设置map与控件关联
					/// </summary>
					/// <param name="map">地图map</param>
					/// <returns></returns>
					ev_void setMap( _in EarthView::World::Spatial::Atlas::IMap *ref_map );

					/// <summary>
					/// 获取当前的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统指针(内部指针)</returns>
					EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					/// <summary>
					/// 设置当前的坐标系统
					/// </summary>
					/// <param name="">坐标系统指针</param>
					/// <returns></returns>
					ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference* sr );

					/// <summary>
					/// 获取空白距离(暂未实现)
					/// </summary>
					/// <param name=""></param>
					/// <returns>空白距离值(单位:像素)</returns>
					ev_uint32 getMargin() const;
					/// <summary>
					/// 设置空白距离(暂未实现)
					/// </summary>
					/// <param name="margin">空白距离</param>
					/// <returns></returns>
					ev_void setMargin( _in ev_uint32 margin );

					/// <summary>
					/// 获取中心点坐标
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void getCenter( _in ev_real64* cx, _in ev_real64* cy );
					/// <summary>
					/// 设置中心点坐标
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void setCenter( _in ev_real64 cx, _in ev_real64 cy );
					/// <summary>
					/// 获取中心点坐标（地理经纬度坐标）
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void getGeographicCenter( _in ev_real64* cx, _in ev_real64* cy );
					/// <summary>
					/// 设置中心点坐标（地理经纬度坐标）
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void setGeographicCenter( _in ev_real64 cx, _in ev_real64 cy );
					/// <summary>
					/// 获取当前的比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					ev_real64 getCurrentScale();
					/// <summary>
					/// 在指定位置进行缩放
					/// </summary>
					/// <param name="x">指定位置的X坐标</param>
					/// <param name="y">指定位置的Y坐标</param>
					/// <param name="scale"></param>
					/// <returns></returns>
					ev_void setScaleAt( _in ev_real64 x, _in ev_real64 y, _in ev_real64 scale );

					/// <summary>
					/// 获取地图的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getRotation() const;
					/// <summary>
					/// 在指定位置进行地图旋转
					/// </summary>
					/// <param name="angle">旋转角度</param>
					/// <param name="x">指定位置的X坐标</param>
					/// <param name="y">指定位置的Y坐标</param>
					/// <returns></returns>
					ev_void setRotateAt( ev_real64 angle, _in ev_real64 x, _in ev_real64 y );

					/// <summary>
					/// 将地图定位到指定的中心点和比例尺
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					ev_void gotoMap( _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale );
					/// <summary>
					/// 将地图定位到指定的参数
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <param name="scale">比例尺</param>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					ev_void changeViewport( _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale, _in ev_real64 rotation );
					/// <summary>
					/// 将地图定位到指定的参数（地理经纬度坐标下）
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <param name="scale">比例尺</param>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					ev_void changeGeographicViewport( _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 scale, _in ev_real64 rotation );
					/// <summary>
					/// 获取鼠标位置的地图坐标
					/// </summary>
					/// <param name="cx">鼠标位置的X坐标</param>
					/// <param name="cy">鼠标位置的Y坐标</param>
					/// <returns></returns>
					ev_void getCurrentCoordinate( _out ev_real64 *x, _out ev_real64 *y ) const;

					/// <summary>
					/// 获取地图的单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图单位</returns>
					EarthView::World::Spatial::Atlas::EVMapUnits getMapUnits() const;
					/// <summary>
					/// 设置地图的单位(暂未实现)
					/// </summary>
					/// <param name="units">地图单位</param>
					/// <returns></returns>
					ev_void setMapUnits( _in EarthView::World::Spatial::Atlas::EVMapUnits units );

					/// <summary>
					/// 设置地图的当前工具
					/// </summary>
					/// <param name="tool">工具</param>
					/// <returns></returns>
					ev_void setCurrentTool( _in EarthView::World::Spatial::SystemUI::ITool *ref_tool );
					/// <summary>
					/// 获取地图的当前工具
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具</returns>
					EarthView::World::Spatial::SystemUI::ITool* getCurrentTool() const;
					/// <summary>
					/// 获取上一个工具
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具</returns>
					EarthView::World::Spatial::SystemUI::ITool* getPreviousTool() const;
					/// <summary>
					/// 获取地图控件的信息(暂未实现)
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getMessage() const;

					/// <summary>
					/// 获取视口控制器
					/// </summary>
					/// <param name=""></param>
					/// <returns>视口控制器</returns>
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager * getViewportManager() const;
					/// <summary>
					/// 获取跟踪层
					/// </summary>
					/// <param name=""></param>
					/// <returns>跟踪层</returns>
					CTrackingLayer* getTrackingLayer() const;
					/// <summary>
					/// 获取数据编辑器,用于编辑功能
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据编辑器</returns>
					CDataEditor * getDataEditor() const;
					/// <summary>
					/// 几何选择
					/// </summary>
					/// <param name="geometry">相交几何</param>
					/// <returns></returns>
					ev_void select( const EarthView::World::Spatial::Geometry::IGeometry* geometry );
					/// <summary>
					/// 刷新地图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void refresh();
					/// <summary>
					/// 检测地图是否正在绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果正在绘制返回true,反之则否</returns>
					ev_bool isDrawing() const;
					/// <summary>
					/// 停止绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void freezeDraw();
					/// <summary>
					/// 停止绘制
					/// 当参数传true等同于freezeDraw()
					/// 传false 不等待线程结束
					/// </summary>
					/// <param name="bWait">是否进行等待</param>
					/// <returns></returns>
					ev_void freezeDraw(ev_bool bWait);
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void beginDrawing()
					{

					}

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void endDrawing()
					{
						freezeDraw();
					}
					/// <summary>
					/// 更新指定的图层
					/// </summary>
					/// <param name="layer">待更新的图层</param>
					/// <returns></returns>
					ev_void updateLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer );
					/// <summary>
					/// 判断地图控件是否包含指定的图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					ev_bool isExist( _in const EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					/// <summary>
					/// 地图全幅显示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void fullExtent();
					/// <summary>
					/// 缩放至指定图层的范围
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					ev_void zoomToLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer );
					/// <summary>
					/// 缩放至指定的范围
					/// </summary>
					/// <param name="pEnvelope">指定的范围(注意坐标系与地图控件一致)</param>
					/// <returns></returns>
					ev_void zoomToExtent( _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
					/// <summary>
					/// 恢复到前一个视口范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void previousView();
					/// <summary>
					/// 回到下一个视口范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void nextView();

					/// <summary>
					/// 右键菜单事件触发
					/// </summary>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					ev_bool onContextMenu( _in ev_int32 x, _in ev_int32 y );

					/// <summary>
					/// 鼠标双击事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
					ev_void onDoubleClick( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

					/// <summary>
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns></returns>
					ev_void onKeyDown( _in ev_int32 keyCode, _in ev_int32 shift );

					/// <summary>
					/// 键盘弹起事件触发
					/// </summary>
					/// <param name="key">弹起的键</param>
					/// <param name="shift">shift键是否同时被释放</param>                    
					/// <returns></returns>
					ev_void onKeyUp( _in ev_int32 keyCode, _in ev_int32 shift );

					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
					ev_void onMouseDown( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
					ev_void onMouseMove( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
					ev_void onMouseUp( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

					/// <summary>
					/// 鼠标滚轮滚动事件触发
					/// </summary>
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns></returns>
					ev_void onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );

					/// <summary>
					/// 窗体大小发生变化
					/// </summary>
					/// <param name="width">窗体宽度</param>
					/// <param name="height">窗体高度</param>
					/// <returns></returns>
					ev_void onResize( _in ev_int32 width, _in ev_int32 height );

					/// <summary>
					/// 通知地图的选择集已经发生变化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void notifySelectionChanged();
					/// <summary>
					/// 通知其他视口,范围已经发生变化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void notifyOtherView();
					/// <summary>
					/// 二维分析完成后触发的事件
					/// </summary>
					/// <returns></returns>
					ev_void onAnalysisEnd( _in EarthView::World::Spatial::SystemUI::ICommand* command);
					ev_void addMapControlListener( _in IMapControlListener* ref_listener );
					ev_void removeMapControlListener( _in IMapControlListener* ref_listener );
					/// <summary>
					/// 获取鹰眼对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回鹰眼对象指针</returns>
					CMapEagleEye* getEagleEye() const;
					/// <summary>
					/// 设置鹰眼对象关联
					/// </summary>
					/// <param name="eagleEye">鹰眼对象</param>
					/// <returns></returns>
					ev_void connectEagleEye( _in CMapEagleEye* ref_eagleEye );
					/// <summary>
					/// 取消鹰眼关联
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void disconnectEagleEye();
					/// <summary>
					/// 获取地图画布
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回地图画布</returns>
					EarthView::World::Display::IPaintDevice* getMapCanvas() const;
					/// <summary>
					/// 重绘
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void repaint();
					/// <summary>
					/// 设置光标
					/// </summary>
					/// <param name="value">光标枚举值</param>
					/// <returns></returns>
					ev_void setCursor( _in ev_int32 value );
					/// <summary>
					/// 设置滚轮停止滚动后,到执行绘制请求的延迟时间.默认是500ms
					/// </summary>
					/// <param name="time">延迟的时间</param>
					/// <returns></returns>
					ev_void setWheelDelay( ev_int32 time );
					/// <summary>
					/// 获取延迟时间
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getWheelDelay() const;
					/// <summary>
					/// 设置滚轮控制模式
					/// 可选择滚轮只在地图可见比例尺范围内有效
					/// </summary>
					/// <param name="mode">延迟的时间</param>
					/// <returns></returns>
					ev_void setViewControlMode( EVMapcontrolViewControlMode mode );
					/// <summary>
					/// 获滚轮控制模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVMapcontrolViewControlMode getViewControlMode();
					/// <summary>
					/// 设置是否开启漫游单击定位
					/// </summary>
					ev_void setPanClickEnable(ev_bool b);
					/// <summary>
					/// 获取是否开启漫游单击定位
					/// </summary>
					ev_bool getPanClickEnable();
					/// <summary>
					/// 设置是否开启鼠标中键漫游
					/// </summary>
					ev_void setMiddleMouseButtonPanEnable(ev_bool b);
					/// <summary>
					/// 获取是否开启鼠标中键漫游
					/// </summary>
					ev_bool getMiddleMouseButtonPanEnable();
					/// <summary>
					/// 设置控件坐标单位
					///作用于：
					///getCurrentCoordinate
					///监听（包括MapWidegt）鼠标事件中地理坐标单位
					///监听：beforeRefresh、afterRefresh
					/// </summary>
					ev_void setCoordinateUnit(EVMapcontrolCoordinateUnit unit);
					/// <summary>
					/// 获取控件坐标单位
					/// </summary>
					EVMapcontrolCoordinateUnit getCoordinateUnit();
					/// <summary>
					/// 安卓缩放接口
					/// </summary>
					ev_void onZoomBegin(ev_int32 x1, ev_int32 y1, ev_int32 x2, ev_int32 y2);
					ev_void onZoom(ev_int32 x1, ev_int32 y1, ev_int32 x2, ev_int32 y2);
					ev_void onZoomEnd(ev_int32 x1, ev_int32 y1, ev_int32 x2, ev_int32 y2);

					/// <summary>
					/// 漫游接口
					/// </summary>
					ev_void onPanBegin(ev_int32 x, ev_int32 y);
					ev_void onPan(ev_int32 x, ev_int32 y);
					ev_void onPanEnd(ev_int32 x, ev_int32 y);
				private:
					CMapControlPri* m_pD;
				//	ev_list<IMapControlListener*>mListeners;
				//	CMapEagleEye* mpEagleEye;
				//	ev_int32 mdCursor;
					ev_void init();
					ev_void clearViewportStack();

					ev_void storeViewport( ev_bool bOver );
					ev_void onCheckSpatialReference();

					ev_bool drawPrepare();
					ev_void draw();
					ev_void drawOver();
					//basemap
					ev_void drawBaseMapPrepare();
					ev_void startDrawBaseMapAsync();
					ev_void drawBaseMap();
					ev_void endDrawBaseMap();
					ev_void makeBaseMapping();
					ev_void freezeDrawBase(ev_bool bWait);
					ev_void updateLayer2( _in EarthView::World::Spatial::Atlas::ILayer* layer );
					ev_void notifyViewChanged2(EarthView::World::Spatial::CMapViewArgs* mva,ev_bool bDelay);
					EarthView::World::Spatial::Atlas::ILayer* getFirstDrawLayer() const;
					EarthView::World::Spatial::Atlas::ILayer* getFirstDrawLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ) const;
ev_private:
					CMapControl( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMapControl )
				};
			}
		}
	}
}
#endif