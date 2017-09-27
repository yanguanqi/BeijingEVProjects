#ifndef GLOBEANIMATIONHANDLER_H
#define GLOBEANIMATIONHANDLER_H

#include "ga/evga_config.h"
#include "mathengine/ray.h"
#include "ga/guieventhandler.h"
#include "ga/globeanimationpath.h"
#include "mathengine/matrix4.h"
#include "ga/globeflyevent.h"
#include "core/stdheaders.h"
#include "mathengine/vector3.h"
#include "graphic/animationtrack.h"
#include "spatial3dengine/globeflypath.h"
#include "ga/globelockcamerahandler.h"
#include "ga/flycontrolpointedit.h"


class CAnimationSceneManagerListener;
class CModfiyAltitudeSceneManagerListener;
class CFlyPathRenderable;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CRay;
			}
		}
		namespace Graphic
		{
			class CEntity;
			class CManualObject;
			class CMaterial;
			class CTechnique;
			class CSceneNode;
			class CViewport;
			class CRenderWindow;
			class CSceneManager;
			class COverlay;
			class CPanelOverlayElement;
			class CSphereTransformKeyFrame;
		}
		namespace Spatial3D
		{
			class CGlobeCamera;
			class CGlobeNodeTrackAnimation;
			class CNodeTrackAnimation;
			class CGeoSceneManager;
			class CTrackAnimationTimeListener;
			class CThreeAxis;

			namespace Dataset
			{
				class CModelDataSource;
				class CEffectDataSource;
			}

			namespace ModelManager
			{
				
				class CModelEffectManager;
				class CModelBaseObject;
			}


			namespace Controls
			{
				class EV_GA_DLL CRouteFlyListener:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRouteFlyListener(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRouteFlyListener();
					/// <summary>
					/// 析析构数
					/// </summary>
					virtual ~CRouteFlyListener();
				public:
					/// <summary>
					/// 开始路径飞行。
					/// </summary>
					/// <param name="pManualModelObject">模型对象。（只有允许模型显示时，这个模型对象才能用）</param>
					/// <returns></returns>
					virtual ev_void startRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					virtual ev_void onRouteFlyStarted(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					/// <summary>
					/// 停止路径飞行。
					/// </summary>
					/// <param name="pManualModelObject">模型对象。（只有允许模型显示时，这个模型对象才能用）</param>
					/// <returns></returns>
					virtual ev_void stopRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					virtual ev_void onRouteFlyStoped(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					/// <summary>
					/// 暂停路径飞行。
					/// </summary>
					/// <param name="pManualModelObject">模型对象。（只有允许模型显示时，这个模型对象才能用）</param>
					/// <returns></returns>
					virtual ev_void pauseRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					virtual ev_void onRouteFlyPaused(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					/// <summary>
					/// 继续路径飞行。
					/// </summary>
					/// <param name="pManualModelObject">模型对象。（只有允许模型显示时，这个模型对象才能用）</param>
					/// <returns></returns>
					virtual ev_void continueRouteFly(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					virtual ev_void onRouteFlyContinued(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pManualModelObject);

					/// <summary>
					/// 飞行到终点时触发
					/// </summary>
					/// <returns></returns>
					virtual ev_void onRouteFlyFinished();

				};	
				class EV_GA_DLL CControlPoints : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CManualObject*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CControlPoints::iterator insert(_in CControlPoints::iterator pos, _in EarthView::World::Graphic::CManualObject *const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CControlPoints(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CControlPoints();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Graphic::CManualObject *const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CManualObject*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CManualObject*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CManualObject *const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CManualObject*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CManualObject *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CManualObject*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CManualObject *const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};
				class CCameraNodeTrackSceneManagerListener;
				class CGlobeAnimationHandler;
				class CAnimationListener:public EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="manager">场景管理器</param>
					/// <param name="handler">动画处理器</param>
					/// <returns></returns>
					CAnimationListener(EarthView::World::Graphic::CSceneManager* manager,EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* handler);
					/// <summary>
					/// 取回某个关键帧处的半径
					/// </summary>
					/// <param name="kf">关键帧</param>
					/// <returns></returns>
					virtual ev_real64 getRadius(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf);
					/// <summary>
					/// 返回两个位置之前的方位角
					/// </summary>
					/// <param name="latA">第一个点的纬度</param>
					/// <param name="lonA">第一个点的经度</param>
					/// <param name="latB">第二个点的纬度</param>
					/// <param name="lonB">第二个点的经度</param>
					/// <returns></returns>
					virtual ev_real64 getHeading(_in ev_real64 latA ,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB);
					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="altitudeMode">高度模式</param>
					/// <returns></returns>
					void setAltitudeMode(EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode);

				private:
					EarthView::World::Spatial3D::CGeoSceneManager* mmanamer;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler* mhandler;
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode maltitudeMode;
				};

				class EV_GA_DLL CGlobeAnimationHandler:public EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CGlobeAnimationHandler(_in EarthView::World::Spatial3D::CGlobeCamera* ref_camera,_in EarthView::World::Spatial3D::CGeoSceneManager* ref_sceneManager,_in EarthView::World::Graphic::CViewport* ref_viewport);
ev_private:
					CGlobeAnimationHandler(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeAnimationHandler();
					/// <summary>
					/// 增加监听
					/// </summary>
					/// <param name="guiEvent">监听</param>
					/// <returns></returns>
					ev_void addRouteFlyListener(_in CRouteFlyListener* routeFlyListener );
					/// <summary>
					/// 移除监听
					/// </summary>
					/// <param name="listener">监听</param>
					/// <returns></returns>
					void removeRouteFlyListener(_in CRouteFlyListener* listener);
					/// <summary>
					/// 清理数据
					/// </summary>
					/// <returns></returns>
					ev_void clearEffectWidthNode();
					/// <summary>
					/// 事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 鼠标按键松开事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 键盘按下事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 键盘松开事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 帧事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 自定义事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 鼠标按下事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 鼠标移动事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 鼠标滚动事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 创建点编辑对象
					/// </summary>
					/// <returns></returns>
					ev_void createEditPointOverlay();
					/// <summary>
					/// 销毁点编辑对象
					/// </summary>
					/// <returns></returns>
					ev_void destroyEditPointOverlay();
					/// <summary>
					/// 创建渲染的点
					/// </summary>
					/// <param name="selectIndex">被选中点的索引</param>
					/// <returns></returns>
					/// <summary>
					ev_void createPoints(_in int selectIndex);
					/// 销毁渲染的点
					/// </summary>
					/// <returns></returns>
					ev_void destroyPoints();
					/// <summary>
					/// 挂接渲染的点
					/// </summary>
					/// <returns></returns>
					ev_void attachPoints();
					/// <summary>
					/// 反挂接渲染的点
					/// </summary>
					/// <returns></returns>
					ev_void detachPoints();
					/// <summary>
					/// 从数据源加载模型数据
					/// </summary>
					/// <returns></returns>
					ev_void loadFromDataSource();
					/// <summary>
					/// 读取数据
					/// </summary>
					/// <returns></returns>
					ev_void readModel();
					/// <summary>
					/// 创建用于显示的线路
					/// </summary>
					/// <returns></returns>
					ev_void createLine();
					/// <summary>
					/// 创建由真实的控制点所连接成的线路
					/// </summary>
					/// <returns></returns>
					ev_void createRealControlLine(_in ev_bool isEdit);

					ev_void createRealControlLine()
					{
						createRealControlLine(false);
					}
					/// <summary>
					/// 销毁用于显示的线路
					/// </summary>
					/// <returns></returns>
					ev_void destroyLine();
					/// <summary>
					/// 销毁由真实的控制点所连接成的线路
					/// </summary>
					/// <returns></returns>
					ev_void destroyRealControlLine();
					/// <summary>
					/// 创建路径飞行的动画
					/// </summary>
					/// <returns></returns>
					ev_void createGlobeNodeTrack();
					/// <summary>
					/// 销毁路径飞行的动画
					/// </summary>
					/// <returns></returns>
					ev_void destroyGlobeNodeTrack();
					/// <summary>
					/// 创建动画
					/// </summary>
					/// <returns></returns>
					ev_void createNodeTack();
					/// <summary>
					/// 销毁动画
					/// </summary>
					/// <returns></returns>
					ev_void destroyNodeTack();
					/// <summary>
					/// 由屏幕上的点计算出对应的射线
					/// </summary>
					/// <param name="x">屏幕上的点Ｘ坐标</param>
					/// <param name="y">屏幕上的点Ｙ坐标</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);
					/// <summary>
					/// 绘制线
					/// </summary>
					/// <returns></returns>
					virtual ev_bool drawFlyLine();
					/// <summary>
					/// 设置渲染窗体
					/// </summary>
					/// <param name="window">渲染窗体</param>
					/// <returns></returns>
					ev_void setRenderWindow(_in EarthView::World::Graphic::CRenderWindow* ref_window)
					{
						mwindow = ref_window;
					}
					/// <summary>
					/// 创建第一人称面板
					/// </summary>
					/// <returns></returns>
					ev_void createPlaneOverlay();
					/// <summary>
					/// 销毁第一人称面板
					/// </summary>
					/// <returns></returns>
					ev_void destroyPlaneOverlay();
					/// <summary>
					/// 创建坐标轴
					/// </summary>
					/// <returns></returns>
					ev_void initializeThreeAxis();
					/// <summary>
					/// 销毁坐标轴
					/// </summary>
					/// <returns></returns>
					ev_void destroyThreeAxis();

					/// <summary>
					/// 是否已经飞行到末尾并停止
					/// </summary>
					/// <returns></returns>
					ev_bool isFlyFinished()const;

				ev_private:
					ev_void createAnimationTack();

					ev_void notifyFlyFinished();

				protected:
					/// <summary>
					/// 停止飞行
					/// </summary>
					/// <returns></returns>
					ev_void stopFly();
					/// <summary>
					/// 开始采点
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_void startSamplePoint(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 停止采点
					/// </summary>
					/// <returns></returns>
					ev_void stopSamplePoint();
					/// <summary>
					/// 开始飞行
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_bool startFly(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 设置飞行线路
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_bool setFlyPath(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 显示坐标轴
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_bool showAxis(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 调整模型
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					ev_bool adjustModel(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 销毁点编辑对象
					/// </summary>
					/// <returns></returns>
					ev_void destroyPointEdit();
					/// <summary>
					/// 创建点编辑对象
					/// </summary>
					/// <returns></returns>
					ev_void createPointEdit();
				protected:
					ev_bool mStartRecord;
					ev_bool mPlayAnimation;
					ev_bool mIsRun;
					ev_bool mGetControlPoint;
					ev_bool mfirstGetPoint;
					EarthView::World::Spatial3D::CGlobeFlyPathPtr mFlyPath;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath mAnimationPath;

					CFlyPathRenderable* mline;
					ev_real32* mLineVertexBuffer;
					ev_uint32* mLineColourBuffer;
					EarthView::World::Graphic::CSceneNode* mLinenode;
					EarthView::World::Spatial::Math::CVector3 mlocalCenter;

					EarthView::World::Graphic::CManualObject* mrealControlPointline;
					EarthView::World::Graphic::CSceneNode* mrealControlPointLinenode;
					EarthView::World::Graphic::CSceneNode* mtempModelParentNode;
					EarthView::World::Spatial::Math::CVector3 mrealControlPointLinelocalCenter;
					EarthView::World::Spatial::Math::CMatrix4 mtempModelMatrix;

					EarthView::World::Graphic::CEntity* mmodel;
					EarthView::World::Graphic::CSceneNode* mmodelNode;

					EarthView::World::Spatial3D::Controls::CControlPoints mcontrolPpints;
					EarthView::World::Graphic::CSceneNode* mpointNode;
					EarthView::World::Graphic::CRenderWindow* mwindow;
					EarthView::World::Graphic::COverlay* mplaneLayer;
					EarthView::World::Graphic::CPanelOverlayElement* mplaneOverlayElemt;


					friend class CAnimationListener;
					EarthView::World::Spatial3D::CGlobeNodeTrackAnimation* mglobeNodeTack;
					EarthView::World::Graphic::CSceneNode* mglobeNodeTackAssociatedNode;
					EarthView::World::Spatial3D::Controls::CAnimationListener* manimationListener;
					CAnimationSceneManagerListener* msceneManagerListener;
				    CModfiyAltitudeSceneManagerListener* mModfiyAltitudeSceneManagerListener;
					ev_real64 mstartVelocity;
					ev_real64 mstartAimAltitude;
					EarthView::World::Spatial::Math::CVector3 mstartObserver;
					EarthView::World::Spatial::Math::CVector3 mstartTarget;
					EarthView::World::Spatial::Math::CVector3 mstartUp;

					EarthView::World::Spatial3D::CNodeTrackAnimation* mnodeTrackAnimation; 
					EarthView::World::Graphic::CSceneNode* mnodeTrackAnimationAssociatedNode;
					EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener* mcameraNodeTrackSceneManagerListener;
					EarthView::World::Graphic::CSceneNode* mtempNode;

					EarthView::World::Spatial3D::Dataset::CModelDataSource* mspatialDataSource;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource* meffectDataSource;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* mmodelEffectManaager;
					EarthView::World::Graphic::CNode* mmodelWithEffectNode;
					EarthView::World::Graphic::CNode* mmodelWithEffectNodeParentNode;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* mpManualModelObject;

					EarthView::World::Spatial3D::CTrackAnimationTimeListener* mtimeListener;

					EarthView::World::Graphic::COverlay* meditPointOverlay;
					EVString mEditPointMaterialName;
					//EarthView::World::Graphic::CPanelOverlayElement* meditPointPanel;
					EVString mLineMaterialName ;
					EVString mEditLineMaterialName ;
					EVString mstrGroupName;
					EVString mPointMaterialName;
					EVString msstrArchiveName ;
					EVString mstrArchiveGroupName;

					EarthView::World::Spatial3D::CThreeAxis* mthreeAxis;
					EarthView::World::Graphic::CSceneNode* mthreeAxisNode;
					EarthView::World::Graphic::CSceneNode* mthreeAxisNodeTempParent;
					//EarthView::World::Graphic::CSceneNode* mNodeX;
					//EarthView::World::Graphic::CSceneNode* mNodeY;
					//EarthView::World::Graphic::CSceneNode* mNodeZ;

					EarthView::World::Spatial3D::Controls::CPointEdit* mcopyPointEdit;
				    EarthView::World::Spatial3D::Controls::CPointEditList mPointEditList;
					int mselectPointEditIndex;
					ev_bool mhasSelected;
					ev_bool mpreHasSelected;

					typedef ev_vector<CRouteFlyListener*> CRouteFlyListenerVector;
					CRouteFlyListenerVector mRouteFlyListenerVector;
				};
			}
		}
	}
}
#endif
