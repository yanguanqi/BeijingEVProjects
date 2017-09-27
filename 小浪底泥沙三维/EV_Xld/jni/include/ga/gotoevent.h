#ifndef GOTOEVENT_H_
#define GOTOEVENT_H_

#include "ga/evga_config.h"

#include "spatialgui/guievent.h"
#include "mathengine/ev_math.h"
#include "mathengine/vector3.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneNode;
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CGotoEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGotoEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					CGotoEvent(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 timeSpan);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					CGotoEvent(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 altitude,_in ev_real64 timeSpan);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="altitude">海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					CGotoEvent(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in ev_real64 altitude,_in ev_real64 timeSpan);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">海拔</param>
					/// <param name="tilt">倾解</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					CGotoEvent(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in ev_real64 altitude,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 timeSpan);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">倾角</param>
					/// <param name="altitude">海拔</param>
					/// <param name="moditifyAltitude">观察点处的海拔</param>
					/// <param name="timeSpan">时间</param>
					/// <returns></returns>
					CGotoEvent(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude,_in ev_real64 modifyAltitude,_in ev_real64 timeSpan);

					void operator=(_in const EarthView::World::Spatial3D::Controls::CGotoEvent& rhs);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGotoEvent();
ev_private:
					CGotoEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				private:
					ev_void calculateTargetAndDistance();

				public:
					EarthView::World::Spatial::Math::CDegree mlatitude;
					EarthView::World::Spatial::Math::CDegree mlongitude;
					EarthView::World::Spatial::Math::CDegree mheading;
					ev_bool mincludeHeading;
					EarthView::World::Spatial::Math::CDegree mtilt;
					ev_bool mincludeTilt;
					ev_real64 maltitude;
					ev_bool mincludeAltitude;
					ev_real64 mmodifyAltitude;
					ev_real64 mtimeSpan;

					EarthView::World::Spatial::Math::CVector3 mTarget;
					double mDistance;
					ev_bool mStopGoto;
				};

				class EV_GA_DLL CGotoEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGotoEvent>
				{
ev_private:
					CGotoEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGotoEventPtr(_in EarthView::World::Spatial3D::Controls::CGotoEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGotoEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGotoEventPtr();
					explicit CGotoEventPtr(_in EarthView::World::Spatial3D::Controls::CGotoEvent *rep);
					CGotoEventPtr(_in const CGotoEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGotoEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGotoEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGotoEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGotoEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGotoEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGotoEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CLocationEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CLocationEvent();

					void operator=(_in const EarthView::World::Spatial3D::Controls::CLocationEvent& rhs);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CLocationEvent();
ev_private:
					CLocationEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					EarthView::World::Spatial::Math::CVector3 mTarget;
					EarthView::World::Spatial::Math::CDegree mTilt;
					EarthView::World::Spatial::Math::CDegree mHeading;
					double mDistance;
					ev_real64 mtimeSpan;
				};

				class EV_GA_DLL CLocationEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CLocationEvent>
				{
ev_private:
					CLocationEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CLocationEventPtr(_in EarthView::World::Spatial3D::Controls::CLocationEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CLocationEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CLocationEventPtr();
					explicit CLocationEventPtr(_in EarthView::World::Spatial3D::Controls::CLocationEvent *rep);
					CLocationEventPtr(_in const CLocationEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CLocationEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CLocationEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CLocationEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CLocationEventPtr &r);

					EarthView::World::Spatial3D::Controls::CLocationEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CLocationEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CSetCameraControlDepthEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraControlDepthEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="cameraControlDepth">相机固定的深度</param>
					/// <returns></returns>
					CSetCameraControlDepthEvent(_in ev_real64 cameraControlDepth);

					void operator = (_in const EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent& rhs);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CSetCameraControlDepthEvent();
ev_private:
					CSetCameraControlDepthEvent(_in EarthView::World::Core::CNameValuePairList* pList);

					ev_real64 mcmaeraControlDepth;
				};

				class EV_GA_DLL CSetCameraControlDepthEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent>
				{
ev_private:
					CSetCameraControlDepthEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CSetCameraControlDepthEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraControlDepthEventPtr();
					explicit CSetCameraControlDepthEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent *rep);
					CSetCameraControlDepthEventPtr(_in const CSetCameraControlDepthEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr &r);

					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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
							ptr.pRep = static_cast<EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent *>(getPointer());
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

				class EV_GA_DLL CRotationAndZoomCameraEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRotationAndZoomCameraEvent();

					CRotationAndZoomCameraEvent(ev_real64 x,ev_real64 y,ev_real64 rotationDegree,ev_real64 zoomRatio);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CRotationAndZoomCameraEvent();

					ev_real64 mPointx;
					ev_real64 mPointy;
					ev_real64 mrotationDegree;
					ev_real64 mzoomRatio;
ev_private:
					CRotationAndZoomCameraEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				};

				class EV_GA_DLL CRotationAndZoomCameraEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent>
				{
ev_private:
					CRotationAndZoomCameraEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CRotationAndZoomCameraEventPtr(_in EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRotationAndZoomCameraEventPtr();
					explicit CRotationAndZoomCameraEventPtr(_in EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *rep);
					CRotationAndZoomCameraEventPtr(_in const CRotationAndZoomCameraEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr &r);

					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CTiltCameraEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTiltCameraEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">鼠标的Ｘ坐标</param>
					/// <param name="y">鼠标的Y坐标</param>
					/// <param name="tiltDegree">倾斜的角度</param>
					/// <returns></returns>
					CTiltCameraEvent(ev_real64 x,ev_real64 y,ev_real64 tiltDegree);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTiltCameraEvent();

					ev_real64 mPointx;
					ev_real64 mPointy;
					ev_real64 mtiltDegree;
ev_private:
					CTiltCameraEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CTiltCameraEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTiltCameraEvent>
				{
ev_private:
					CTiltCameraEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CTiltCameraEventPtr(_in EarthView::World::Spatial3D::Controls::CTiltCameraEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTiltCameraEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTiltCameraEventPtr();
					explicit CTiltCameraEventPtr(_in EarthView::World::Spatial3D::Controls::CTiltCameraEvent *rep);
					CTiltCameraEventPtr(_in const CTiltCameraEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTiltCameraEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr &r);

					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CTiltCameraEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CSetCameraRotationratioEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraRotationratioEvent();
					/// <summary>
					///计逄相机的旋转速度
					/// </summary>
					/// <param name="rotationratio">旋转速度</param>
					/// <returns></returns>
					CSetCameraRotationratioEvent(ev_real64 rotationratio);
					/// <summary>
					///析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CSetCameraRotationratioEvent();

					ev_real64 mrotationratio;

ev_private:
					CSetCameraRotationratioEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CSetCameraRotationratioEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent>
				{
ev_private:
					CSetCameraRotationratioEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CSetCameraRotationratioEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraRotationratioEventPtr();
					explicit CSetCameraRotationratioEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *rep);
					CSetCameraRotationratioEventPtr(_in const CSetCameraRotationratioEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr &r);

					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CSetCameraLockTargetEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraLockTargetEvent();
					// 					/// <summary>
					// 					/// 构造函数
					// 					/// </summary>
					// 					/// <param name="lockTarget">锁定的目标</param>
					// 					/// <param name="heading">偏航角</param>
					// 					/// <param name="tilt">倾角</param>
					// 					/// <param name="distance">相机距离目标点之间的距离</param>
					// 					/// <returns></returns>
					// 					CSetCameraLockTargetEvent(EarthView::World::Graphic::CSceneNode* lockTarget,EarthView::World::Spatial::Math::CDegree& heading,EarthView::World::Spatial::Math::CDegree& tilt,ev_real64 distance);
					/// <summary>
					/// 设置相机要锁定的目标结点
					/// </summary>
					/// <param name="lockTarget">锁定的目标</param>
					/// <returns></returns>
					void setCameraLockTarget(_in EarthView::World::Graphic::CSceneNode* lockTarget);
					/// <summary>
					/// 获取相机要锁定的目标结点
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CSceneNode* getCameraLockTarget() const;
					/// <summary>
					/// 是否设置了锁定的目标结点
					/// </summary>
					/// <returns></returns>
					ev_bool hasSetLockTarget() const;
					/// <summary>
					/// 设置相机锁定的偏航角
					/// </summary>
					/// <param name="headingt">锁定的偏航角</param>
					/// <returns></returns>
					void setCameraLockHeading(_in const EarthView::World::Spatial::Math::CDegree& headingt);
					/// <summary>
					/// 获取相机要锁定的偏航角
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CDegree getCameraLockHeading() const;
					/// <summary>
					/// 是否设置了锁定的偏航角
					/// </summary>
					/// <returns></returns>
					ev_bool hasSetLockHeading() const;
					/// <summary>
					/// 设置相机锁定的倾角
					/// </summary>
					/// <param name="tilt">锁定的倾角</param>
					/// <returns></returns>
					void setCameraLockTilt(_in const EarthView::World::Spatial::Math::CDegree& tilt);
					/// <summary>
					/// 获取相机要锁定的倾角
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CDegree getCameraLockTilt() const;
					/// <summary>
					/// 是否设置了锁定的倾角
					/// </summary>
					/// <returns></returns>
					ev_bool hasSetLockTilt() const;
					/// <summary>
					/// 设置相机锁定的距离
					/// </summary>
					/// <param name="distance">锁定的距离</param>
					/// <returns></returns>
					void setCameraLockDistance(_in ev_real64 distance);
					/// <summary>
					/// 获取相机要锁定的距离
					/// </summary>
					/// <returns></returns>
					ev_real64 getCameraLockDistance() const;
					/// <summary>
					/// 是否设置了锁定的距离
					/// </summary>
					/// <returns></returns>
					ev_bool hasSetLockDistance() const;

					/// <summary>
					/// 设置相机的锁定模式
					/// </summary>
					/// <param name="isThirdPersonMode">是否为第三人称</param>
					/// <returns></returns>
					ev_void setCameraLockMode(ev_bool isThirdPersonMode);
					/// <summary>
					/// 是否设置了锁定的模式
					/// </summary>
					/// <returns></returns>
					ev_bool hasSetLockMode() const;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CSetCameraLockTargetEvent();

				protected:

					EarthView::World::Graphic::CSceneNode* mlockTarget;

					ev_bool msetLockTarget;

					EarthView::World::Spatial::Math::CDegree mheading;

					ev_bool msetHeading;

					EarthView::World::Spatial::Math::CDegree mtilt;

					ev_bool msetTilt;

					ev_real64 mdistance;

					ev_bool msetDistance;

					ev_bool msetLockMode;

				public:
					ev_bool mbCanChangeTilt;

					ev_bool mbCanChangeHeading;

					ev_bool mbCanChangeDistance;

					ev_bool mIsThirdPersonMode;
ev_private:
					CSetCameraLockTargetEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};


				class EV_GA_DLL CSetCameraLockTargetEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent>
				{
ev_private:
					CSetCameraLockTargetEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CSetCameraLockTargetEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSetCameraLockTargetEventPtr();
					explicit CSetCameraLockTargetEventPtr(_in EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *rep);
					CSetCameraLockTargetEventPtr(_in const CSetCameraLockTargetEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr &r);

					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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

				class EV_GA_DLL CFadeInOutEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFadeInOutEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="time">镜头合成器开启后的持续时间（秒）</param>
					/// <returns></returns>
					CFadeInOutEvent(ev_real64 time);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CFadeInOutEvent();

					ev_real64 mCompositorTime;
ev_private:
					CFadeInOutEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CFadeInOutEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CFadeInOutEvent>
				{
ev_private:
					CFadeInOutEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CFadeInOutEventPtr(_in EarthView::World::Spatial3D::Controls::CFadeInOutEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CFadeInOutEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFadeInOutEventPtr();
					explicit CFadeInOutEventPtr(_in EarthView::World::Spatial3D::Controls::CFadeInOutEvent *rep);
					CFadeInOutEventPtr(_in const CFadeInOutEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CFadeInOutEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CFadeInOutEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr &r);

					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CFadeInOutEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
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
			}
		}
	}
}

#endif

