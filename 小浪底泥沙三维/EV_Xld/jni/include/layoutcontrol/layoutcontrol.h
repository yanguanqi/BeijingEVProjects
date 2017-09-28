#ifndef EARTHVIEW_WORLD_LAYOUT_CONTROLS_LAYOUTCONTROL_H
#define EARTHVIEW_WORLD_LAYOUT_CONTROLS_LAYOUTCONTROL_H

#include "layoutcontrol/layoutcontrolconfig.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialgui/itool.h"
#include "spatialinterface/ipagelayout.h"
#include "spatial2dcarto/page.h"
#include "spatial2dcarto/pagelayout.h"
#include "spatialinterface/ielement.h"
#include "spatialinterface/ipagelayout.h"
#include "spatialdisplay/spatialtransformer.h"
#include "spatialdatabase/workcommandmanager.h"
#include "mapcontrol/mapcontrol.h"
#include "mapcontrol/trackinglayer.h"
#include "display/cachebitmap.h"
#include "spatialinterface/imapframe.h"
#include "spatial2dcarto/mapframe.h"
#include "layoutcontrol/layoutoperationmanager.h"
#include "display/metafile.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{

				enum EVPageCursor
				{
					PC_ArrowCursor			 = 0,	//箭头
					PC_CrossCursor			 = 1,	//十字丝
					PC_OpenHandCursor		 = 2,	//"展开手"样式
					PC_CloseHandCursor		 = 3,	//"握紧手"样式
					PC_PointingHandCursor	 = 4,	//"食指点击"样式
					PC_ZoomInCursor			 = 5,	//"放大"样式
					PC_ZoomOutCursor		 = 6,	//"缩小"样式
					PC_PageZoomInCursor		 = 7,	//纸张"放大"样式
					PC_PageZoomOutCursor	 = 8,	//纸张"缩小"样式
					PC_ElementSelectCursor   = 9,	//"元素选择"样式
					PC_MoveElementCursor	 = 10,	//移动元素样式
					PC_MoveRightDownCursor	 = 11,	//向右下方移动样式
					PC_MoveLeftDownCursor    = 12,	//向左下方移动样式
					PC_MoveHorizontal   	 = 13,	//水平移动样式
					PC_MoveVertical          = 14,	//垂直移动样式
					PC_OpenHandCursorOnPage	 = 15,	//纸上"展开手"样式
					PC_CloseHandCursorOnPage = 16,	//纸上"握紧手"样式
				};

				class EV_LAYOUTCONTROL_DLL CLayoutControlAgent : public EarthView::World::Core::CBaseObject
				{
					public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayoutControlAgent(){}

					/// <summary>
					/// 虚构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图画面指针</returns>
					~CLayoutControlAgent(){}

					/// <summary>
					/// 获取布局设备
					/// </summary>
					/// <param name=""></param>
					/// <returns>布局设备</returns>
					virtual EarthView::World::Display::IPaintDevice* onGetLayoutCanvas() const
					{
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}

					/// <summary>
					/// 重绘
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void	onRepaint() 
					{
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}

					/// <summary>
					/// 设置光标样式
					/// </summary>
					/// <param name="value">光标样式</param>
					/// <returns></returns>
					virtual ev_void	onSetCursor( _in ev_int32 value )
					{
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
					}
				ev_private:
					CLayoutControlAgent(EarthView::World::Core::CNameValuePairList *pList ){}
				};

				class CDelayHandler;
				class CLayoutControlCache;
				class CDrawThread;
				class CDrawTimer;
				class CLayoutEventReceiver;
				class CLegendEventReceiver;

				class EV_LAYOUTCONTROL_DLL CLayoutControl : public EarthView::World::Spatial::Atlas::ISpatialControl
				{
					friend class CDrawThread;
					friend class CDrawTimer;
					friend class CToolPanInPage;
					friend class CToolPagePan;
					friend class CToolPageZoomIn;
					friend class CToolPageZoomOut;
					friend class CWheelHandler;
					friend class CLayoutEventReceiver;
					friend class CDelayHandler;
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayoutControl();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayoutControl();

					/// <summary>
					/// 获取控件的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>控件类型</returns>
					EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const;

					/// <summary>
					/// 获取布局名字
					/// </summary>
					/// <param name=""></param>
					/// <returns>布局名字</returns>
					EVString getName() const;

					/// <summary>
					/// 获取控件类型的字符串形式
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					EVString getTypeString() const;

					/// <summary>
					///获取纸张对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张对象</returns>
					EarthView::World::Spatial::Carto::IPage* getPage() const;

					/// <summary>
					/// 获取控件下的主地图
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图对象</returns>
					EarthView::World::Spatial::Atlas::IMap* getMap() const;

					/// <summary>
					/// 设置中心地图
					/// </summary>
					/// <param name="dPageScale">中心地图</param>
					/// <returns></returns>
					ev_void setMap(EarthView::World::Spatial::Atlas::IMap* ref_pMap);

					/// <summary>
					/// 获取布局控件所关联的布局IPageLayout对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>布局对象</returns>
					EarthView::World::Spatial::Carto::IPageLayout* getPageLayout() const;

				/*	/// <summary>
					/// 设置布局控件的关联IPageLayout对象
					/// </summary>
					/// <param name="pageLayout">布局对象</param>
					/// <returns></returns>
					ev_void setPageLayout(EarthView::World::Spatial::Carto::IPageLayout* pageLayout);*/

					/// <summary>
					/// 获取纸张的背景颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张背景颜色</returns>
					EarthView::World::Spatial::Display::IColor* getBackground() const;

					/// <summary>
					/// 设置纸张的背景颜色
					/// </summary>
					/// <param name="color">颜色对象</param>
					/// <returns></returns>
					ev_void setBackground(EarthView::World::Spatial::Display::IColor* color);

					///<summary>
					/// 获取纸张大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张大小</returns>
					ev_real64 getPageSize() const;
					///<summary>
					/// 设置纸张大小
					/// </summary>
					/// <param name="width">纸张宽度</param>
					///.<param name="width">纸张高度</param>
					/// <returns></returns>
					ev_void setPageSize(ev_real64& width,ev_real64& height);

					/// <summary>
					/// 获取纸张单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVPageUnits纸张单位枚举</returns>
					EarthView::World::Spatial::Carto::EVPageUnits getPageUnits() const;

					/// <summary>
					/// 设置纸张的单位
					/// </summary>
					/// <param name="pageUnits">纸张单位</param>
					/// <returns></returns>
					ev_void setPageUnits(EarthView::World::Spatial::Carto::EVPageUnits pageUnits);

					/// <summary>
					/// 获取当前的地图控制类
					/// </summary>
					/// <param name="pageUnits"></param>
					/// <returns>地图控制类</returns>
					EarthView::World::Spatial2D::Controls::CMapControl* getMapControl() const;

					/// <summary>
					/// 设置当前的地图控制类
					/// </summary>
					/// <param name="pageUnits">地图控制类</param>
					/// <returns></returns>
					ev_void setMapControl(EarthView::World::Spatial2D::Controls::CMapControl* ref_pMapControl);

					/// <summary>
					/// 纸张全幅显示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void fullExtent();
					/// <summary>
					/// 更新指定的图层
					/// </summary>
					/// <param name="layer">待更新的图层</param>
					/// <returns></returns>
					ev_void updateLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer );
					/// <summary>
					/// 设置布局的当前工具
					/// </summary>
					/// <param name="tool">工具</param>
					/// <returns></returns>
					ev_void setCurrentTool(_in EarthView::World::Spatial::SystemUI::ITool *ref_pTool);

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
					/// 在指定位置设置比例
					/// </summary>
					/// <param name="x">指定位置的X坐标</param>
					/// <param name="y">指定位置的Y坐标</param>
					/// <param name="scale">比例大小</param>
					/// <returns></returns>
					ev_void setScaleAt(ev_real64 pX, ev_real64 pY, ev_real64 scale);

					///<summary>
					/// 获取当前的纸张比例
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前的纸张比例</returns>
					ev_real64 getCurrentScale();
					///<summary>
					/// 纸张缩放到指定的比例
					/// </summary>
					/// <param name="dValue">目标显示比例</param>
					/// <returns></returns>
					ev_void setCurrentScale(ev_real64 dValue);

					///<summary>
					/// 获取数据框的比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前数据框的比例尺</returns>
					ev_real64 getMapFrameScale();

					///<summary>
					/// 设置数据框的比例尺
					/// </summary>
					/// <param name="dValue">数据框的比例尺</param>
					/// <returns></returns>
					ev_void setMapFrameScale(ev_real64 dScale);

					///<summary>
					/// 以某个点为中心设置数据框的比例尺
					/// </summary>
					/// <param name="dPX">中心点的X坐标</param>
					/// <param name="dPY">中心点的Y坐标</param>
					/// <param name="dValue">数据框的比例尺</param>
					/// <returns></returns>
					ev_void setMapFrameScaleAt(ev_real64 dPX, ev_real64 dPY, ev_real64 dScale);

					/// <summary>
					/// 获取纸张中心点坐标
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void getCenter( _in ev_real64* cx, _in ev_real64* cy );
					/// <summary>
					/// 设置纸张中心点坐标
					/// </summary>
					/// <param name="cx">中心点坐标的X值</param>
					/// <param name="cy">中心点坐标的Y值</param>
					/// <returns></returns>
					ev_void setCenter( _in ev_real64 cx, _in ev_real64 cy );

					/// <summary>
					/// 接收外部通知，刷新控件的视口区域
					/// </summary>
					/// <param name="args">视口信息</param>
					/// <returns></returns>
					ev_void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args);

					///<summary>
					/// 恢复到前一视口范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void previousView();

					///<summary>
					/// 下一视口范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void nextView();

					/// <summary>
					/// 当前布局刷新
					/// </summary>
					/// <param name="value"></param>
					/// <returns></returns>
					ev_void refresh();

					/// <summary>
					/// 判定是否正在绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isDrawing();

					/// <summary>
					/// 停止绘制ete
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void freezeDraw();

					/// <summary>
					/// 获取纸张显示设备
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::ISpatialDisplay* getPageDisplay() const;

					/// <summary>
					/// 获取地图显示设备
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Carto::IMapFrame * getMapFrame() const;

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
					///设置代理对象
					/// </summary>
					/// <param name="ref_pxy">代理对象</param>
					/// <returns></returns>
					ev_void setProxy(CLayoutControlAgent* ref_pxy)
					{
						proxy = ref_pxy;
					}
					/// <summary>
					/// 获取布局画布
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回布局画布</returns>
					EarthView::World::Display::IPaintDevice* getLayoutCanvas() const;

					/// <summary>
					/// 将屏幕像素坐标转化为地图画布像素坐标 
					/// </summary>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					ev_void toMapPixelPoint(_out ev_real64&x,_out ev_real64& y);
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
					///添加元素
					/// </summary>
					/// <param name="element">元素</param>
					/// <returns></returns>
					virtual ev_void addElement(EarthView::World::Spatial::Carto::IElement* ref_element);

					/// <summary>
					///删除元素
					/// </summary>
					/// <param name="element">元素</param>
					/// <returns></returns>
					virtual ev_void removeElement(EarthView::World::Spatial::Carto::IElement* element);

					/// <summary>
					///删除选中元素
					/// </summary>
					/// <param name="element"></param>
					/// <returns></returns>
					virtual ev_void removeSelectedElement();

					/// <summary>
					///元素替换
					/// </summary>
					/// <param name="element">原来的元素对象</param>
					/// <param name="element">新的元素对象</param>
					/// <returns></returns>
					virtual ev_bool replaceElement(EarthView::World::Spatial::Carto::IElement* pOldElement, EarthView::World::Spatial::Carto::IElement* pNewElement);

					/// <summary>
					///元素交换(注：与元素替换区别在于，元素替换是将一个原有的元素替换为新的元素，而元素交换是两个已经存在于容器内的元素相互交换位置)
					/// </summary>
					/// <param name="element">被替换元素索引</param>
					/// <param name="element">替换元素索引</param>
					/// <returns>是否替换成功</returns>
					virtual ev_bool exchangeElement(ev_int32 srcIndex, ev_int32 destIndex);

					/// <summary>
					/// 获取地图缓存
					/// </summary>
					/// <param name="value"></param>
					/// <returns></returns>
					EarthView::World::Display::CCacheBitmap* getCacheBitmap();

					/// <summary>
					/// 获取操作管理对像
					/// </summary>
					/// <param name="value"></param>
					/// <returns></returns>
					CLayoutOperationManager *getOperationManager() const;

					/// <summary>
					/// 通知其他视口,范围已经发生变化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void notifyOtherView();

					/// <summary>
					/// 获取视口控制器
					/// </summary>
					/// <param name=""></param>
					/// <returns>视口控制器</returns>
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager * getViewportManager() const;

					/// <summary>
					/// 平移开始
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns></returns>
					ev_bool onMapPan( ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y );

					/// <summary>
					/// 平移
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns></returns>
					ev_bool onMapPanBegin( ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y );

					/// <summary>
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns></returns>
					ev_bool onMapPanEnd( ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y );
					/// <summary>
					/// 导出指定范围和dpi(每英寸像素，一般指定96)的矢量图
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					_extfree EarthView::World::Display::CMetaFile*  exportViewToMetafile(
						EarthView::World::Spatial::Geometry::IEnvelope * pDataEnv, ev_uint32 dpi);

					ev_void exportLayout(EarthView::World::Display::IPaintDevice* device,bool exportByLayer);
					/// <summary>
					/// 打印
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					ev_int32 print();
					EVString getErrorMsg();
				private:
					ev_real64  mdPanStartX;
					ev_real64  mdPanStartY;
					ev_real64  mdFrameStartX;
					ev_real64  mdFrameStartY;
					ev_bool m_bPanActive;
					CLayoutControlCache* m_pMapCache;
					EarthView::World::Display::IBitmap* m_pTempBitmap;
					EarthView::World::Display::IBitmap* m_pBackBitmap;
					ev_int32 m_nNewWidth;
					ev_int32 m_nNewHeight;
					EarthView::World::Spatial::Carto::IMapFrame *m_pMapFrame;
					//私有函数
				private:
					ev_void init();
					ev_void draw();
					ev_void drawOver();
					ev_void storeViewport(ev_bool bOver);
					ev_bool drawPrepare();
					ev_void drawPage(EarthView::World::Spatial::Display::ISpatialDisplay* dis);
					ev_void updateLayer2( _in EarthView::World::Spatial::Atlas::ILayer* layer );
					//私有成员变量
					private:
					CLayoutControlCache* m_pLayoutCache;
					CDelayHandler* m_pDelayHandler;
					CLayoutControlAgent* proxy;
					CDrawThread* m_pThread;
					CDrawTimer* m_pDrawTimer;
					ev_uint32 m_nWidth;
					ev_uint32 m_nHeight;
					ev_bool m_bDrawing;
					ev_real64 m_pageWidth;
					ev_real64 m_pageHeight;
					ev_real64 m_fLastScale;
					ev_int32 mdCursor;
					EarthView::World::Layout::Controls::CLayoutEventReceiver* m_pEventReceiver;
					EarthView::World::Layout::Controls::CLegendEventReceiver* m_pLegendEventReceiver;
					EarthView::World::Spatial::Carto::IPageLayout* m_pPageLayout;
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pPageDisplay;
					EarthView::World::Spatial::Display::IColor* m_BackgroundColor;
					EarthView::World::Spatial::Geometry::IEnvelope* m_background;
					EarthView::World::Spatial::Geometry::IEnvelope* m_border;
					EarthView::World::Spatial::Display::ISpatialTransformer* m_pPageTransformer;
					EarthView::World::Spatial::Display::ISpatialTransformer* m_pMapTransformer;
					EarthView::World::Spatial::SystemUI::ITool *m_previousTool;
					EarthView::World::Spatial::SystemUI::ITool *m_currentTool;
					EarthView::World::Spatial::Atlas::IMap* m_pFocusMap;
					EarthView::World::Spatial2D::Controls::CMapControl *m_pMapControl;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *m_pViewportManager;
					CLayoutOperationManager *m_pOperationManager;
					void* mpTrackingProxy;
					EVString mstrErrorMsg;
				ev_private:
					CLayoutControl(EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY(CLayoutControl)
				};

				class CLayoutEventReceiver : public EarthView::World::Core::CEventObject
				{
				public:
					CLayoutEventReceiver(CLayoutControl* ctrl);
					~CLayoutEventReceiver();
					ev_bool onEvent( _in EarthView::World::Core::CEvent* e );
					
				private:
					CLayoutControl* m_pLayoutCtrl;
				};
			}
		}
	}
}
#endif 