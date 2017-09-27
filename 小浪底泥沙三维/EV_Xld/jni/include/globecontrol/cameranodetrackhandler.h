#ifndef CAMERANODETRACKHANDLER_H
#define CAMERANODETRACKHANDLER_H

#include "globecontrol/evglobecontrol_config.h"
#include "spatialgui/guievent.h"
#include "ga/guieventhandler.h"
#include "spatial3dengine/controlpoint.h"


/////class CCameraSceneManagerListener;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CCamera;
			class CSceneNode;
			class CSceneManager;
		}
		namespace Spatial3D
		{
			class CNodeTrackAnimation;
			namespace Controls
			{
				class CGlobeControl;
				class CCameraNodeTrackSceneManagerListener;
				class CCameraNodeTrackEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CCameraNodeTrackEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
				    /// <param name="name">名字</param>
					/// <returns></returns>
					CCameraNodeTrackEvent(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CCameraNodeTrackEvent();

				ev_private:
					CCameraNodeTrackEvent(_in EarthView::World::Core::CNameValuePairList* pList);
			    public:
					EVString meventName;
				};

				class CCameraNodeTrackEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CCameraNodeTrackEvent>
				{
ev_private:
					CCameraNodeTrackEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CCameraNodeTrackEventPtr(_in CCameraNodeTrackEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CCameraNodeTrackEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CCameraNodeTrackEventPtr();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rep">数据对象</param>
					/// <returns></returns>
					explicit CCameraNodeTrackEventPtr(_in CCameraNodeTrackEvent *rep);
					CCameraNodeTrackEventPtr(_in const CCameraNodeTrackEventPtr &tp);

					CCameraNodeTrackEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<CCameraNodeTrackEvent>::get();
					}

					CCameraNodeTrackEventPtr &operator = (_in const CCameraNodeTrackEventPtr &r);

					CCameraNodeTrackEventPtr &operator = (_in CCameraNodeTrackEvent* rep);
					/// <summary>
					/// 转换为CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				//开始播放
				class CPlayCameraNodeTrackEvent:public CCameraNodeTrackEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPlayCameraNodeTrackEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CPlayCameraNodeTrackEvent(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CPlayCameraNodeTrackEvent();

				ev_private:
					CPlayCameraNodeTrackEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class CPlayCameraNodeTrackEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CPlayCameraNodeTrackEvent>
				{
ev_private:
					CPlayCameraNodeTrackEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CPlayCameraNodeTrackEventPtr(_in CPlayCameraNodeTrackEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CPlayCameraNodeTrackEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPlayCameraNodeTrackEventPtr();
					explicit CPlayCameraNodeTrackEventPtr(_in CPlayCameraNodeTrackEvent *rep);
					CPlayCameraNodeTrackEventPtr(_in const CPlayCameraNodeTrackEventPtr &tp);

					CPlayCameraNodeTrackEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<CPlayCameraNodeTrackEvent>::get();
					}

					CPlayCameraNodeTrackEventPtr &operator = (_in const CPlayCameraNodeTrackEventPtr &r);

					CPlayCameraNodeTrackEventPtr &operator = (_in CPlayCameraNodeTrackEvent* rep);
					/// <summary>
					/// 转换为CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				//停止播放
				class CStopCameraNodeTrackEvent:public CCameraNodeTrackEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CStopCameraNodeTrackEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CStopCameraNodeTrackEvent(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CStopCameraNodeTrackEvent();

				ev_private:
					CStopCameraNodeTrackEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class CStopCameraNodeTrackEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CStopCameraNodeTrackEvent>
				{
ev_private:
					CStopCameraNodeTrackEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CStopCameraNodeTrackEventPtr(_in CStopCameraNodeTrackEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CStopCameraNodeTrackEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CStopCameraNodeTrackEventPtr();
					explicit CStopCameraNodeTrackEventPtr(_in CStopCameraNodeTrackEvent *rep);
					CStopCameraNodeTrackEventPtr(_in const CStopCameraNodeTrackEventPtr &tp);

					CStopCameraNodeTrackEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<CStopCameraNodeTrackEvent>::get();
					}

					CStopCameraNodeTrackEventPtr &operator = (_in const CStopCameraNodeTrackEventPtr &r);

					CStopCameraNodeTrackEventPtr &operator = (_in CStopCameraNodeTrackEvent* rep);
					/// <summary>
					/// 转换为CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				//暂停播放
				class CPauseCameraNodeTrackEvent:public CCameraNodeTrackEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPauseCameraNodeTrackEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CPauseCameraNodeTrackEvent(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CPauseCameraNodeTrackEvent();

				ev_private:
					CPauseCameraNodeTrackEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class CPauseCameraNodeTrackEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CPauseCameraNodeTrackEvent>
				{
ev_private:
					CPauseCameraNodeTrackEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CPauseCameraNodeTrackEventPtr(_in CPauseCameraNodeTrackEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CPauseCameraNodeTrackEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CPauseCameraNodeTrackEventPtr();
					explicit CPauseCameraNodeTrackEventPtr(_in CPauseCameraNodeTrackEvent *rep);
					CPauseCameraNodeTrackEventPtr(_in const CPauseCameraNodeTrackEventPtr &tp);

					CPauseCameraNodeTrackEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<CPauseCameraNodeTrackEvent>::get();
					}

					CPauseCameraNodeTrackEventPtr &operator = (_in const CPauseCameraNodeTrackEventPtr &r);

					CPauseCameraNodeTrackEventPtr &operator = (_in CPauseCameraNodeTrackEvent* rep);
					/// <summary>
					/// 转换为CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				//继续播放
				class CContinueCameraNodeTrackEvent:public CCameraNodeTrackEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CContinueCameraNodeTrackEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CContinueCameraNodeTrackEvent(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CContinueCameraNodeTrackEvent();

				ev_private:
					CContinueCameraNodeTrackEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class CContinueCameraNodeTrackEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CContinueCameraNodeTrackEvent>
				{
ev_private:
					CContinueCameraNodeTrackEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CContinueCameraNodeTrackEventPtr(_in CContinueCameraNodeTrackEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CContinueCameraNodeTrackEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CContinueCameraNodeTrackEventPtr();
					explicit CContinueCameraNodeTrackEventPtr(_in CContinueCameraNodeTrackEvent *rep);
					CContinueCameraNodeTrackEventPtr(_in const CContinueCameraNodeTrackEventPtr &tp);

					CContinueCameraNodeTrackEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<CContinueCameraNodeTrackEvent>::get();
					}

					CContinueCameraNodeTrackEventPtr &operator = (_in const CContinueCameraNodeTrackEventPtr &r);

					CContinueCameraNodeTrackEventPtr &operator = (_in CContinueCameraNodeTrackEvent* rep);
					/// <summary>
					/// 转换为CGUIEventPtr对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

							EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

							EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				class EV_GLOBECONTROL_DLL CCameraAnimationHandler:public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <param name="animationName">镜头动画的名字</param>
					/// <param name="camera">镜头</param>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="parentNode">相机挂接节点的父节点</param>
					/// <param name="localCenter">parentNode的中心点</param>
					/// <param name="controlPointMap">控制点集合</param>
					//CCameraAnimationHandler(_in const EVString& animationName,_in EarthView::World::Graphic::CCamera* ref_camera,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::World::Graphic::CSceneNode* ref_parentNode,_in const EarthView::World::Spatial::Math::CVector3& localCenter,_in const EarthView::World::Spatial3D::CControlPointMap& controlPointMap);

					/// <summary>
					///构造函数
					/// </summary>
					/// <param name="animationName">镜头动画的名字</param>
					/// <param name="ref_globeControl"></param>
					CCameraAnimationHandler(_in const EVString& animationName,_in EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globeControl);
					/// <summary>
					///返回节点的名字
					/// </summary>
					EVString getAnimationName()
					{
						return manimationName;
					}

					/// <summary>
					///初始化
					/// </summary>
					/// <param name="ref_parentNode">要观察的节点</param>
					/// <param name="filePath">镜头动画的文件</param>
					ev_bool init (_in EarthView::World::Graphic::CSceneNode* ref_parentNode,_in const EVString& filePath);
					/// <summary>
					///初始化
					/// </summary>
					/// <param name="ref_parentNode">要观察的节点</param>
					/// <param name="localCenter">模型的几何中心点的坐标</param>
					/// <param name="controlPointMap">控制点列表</param>
					ev_bool init(_in EarthView::World::Graphic::CSceneNode* ref_parentNode,_in const EarthView::World::Spatial::Math::CVector3& localCenter,_in const EarthView::World::Spatial3D::CControlPointMap& controlPointMap);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					/// <summary>
					/// 开始镜头动画
					/// </summary>
					/// <returns></returns>
					void startAnimation();
					/// <summary>
					/// 停止镜头动画
					/// </summary>
					/// <returns></returns>
					void stopAnimation();
					/// <summary>
					/// 暂停镜头动画
					/// </summary>
					/// <returns></returns>
					void pauseAnimation();
					/// <summary>
					/// 继续镜头动画
					/// </summary>
					/// <returns></returns>
					void continueAnimation();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CCameraAnimationHandler();

ev_private:
					CCameraAnimationHandler(_in EarthView::World::Core::CNameValuePairList* pList);


				protected:
					EVString manimationName;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mglobeControl;
					EarthView::World::Graphic::CCamera* mcamera;
					EarthView::World::Graphic::CSceneManager* msceneManager;
					EarthView::World::Graphic::CSceneNode* mparentNode;
					//CCameraSceneManagerListener* mcameraListener;
					CCameraNodeTrackSceneManagerListener* mcameraListener;
					EarthView::World::Spatial3D::CNodeTrackAnimation* mnodeTrackAnimation;
					EarthView::World::Graphic::CSceneNode* mnodeTrackAnimationAssociatedNode;
					ev_bool mcanHandleEvent;
					ev_bool mstartPlayed;
					ev_bool mInited;
				};
			}
		}
	}
}


#endif
