#ifndef _CCAMERAEVENT_H_
#define _CCAMERAEVENT_H_

#include "ga/evga_config.h"
#include "spatialgui/guievent.h"
#include "mathengine/ev_math.h"
#include "mathengine/vector3.h"
#include "core/sharedptr.h"


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
				class EV_GA_DLL CRoamCameraEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRoamCameraEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="originX">动画的XML节点</param>
					/// <param name="originY">动画的XML节点</param>
					/// <param name="lastX">动画的XML节点</param>
					/// <param name="lastY">动画的XML节点</param>
					/// <returns></returns>
					CRoamCameraEvent(ev_int32 originX,ev_int32 originY,ev_int32 lastX,ev_int32 lastY);

					virtual ~CRoamCameraEvent();
ev_private:
					CRoamCameraEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					ev_int32 moriginX;
					ev_int32 moriginY;
					ev_int32 mlastX;
					ev_int32 mlastY;
				};

				class EV_GA_DLL CRoamCameraEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRoamCameraEvent>
				{
ev_private:
					CRoamCameraEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CRoamCameraEventPtr(_in CRoamCameraEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CRoamCameraEvent>(rep, inFreeMethod) {}
				public:
					CRoamCameraEventPtr();
					explicit CRoamCameraEventPtr(_in CRoamCameraEvent *rep);
					CRoamCameraEventPtr(_in const CRoamCameraEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRoamCameraEvent>::get();
					}

					//EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr &r){};

					//EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr &operator = (_in CRoamCameraEvent* rep){};

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

				class EV_GA_DLL CZoomCameraEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CZoomCameraEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="zoomRatio">缩放比例</param>
					/// <returns></returns>
					CZoomCameraEvent(ev_int32 x,ev_int32 y,ev_real64 zoomRatio);

					virtual ~CZoomCameraEvent();
ev_private:
					CZoomCameraEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					ev_int32 mx;
					ev_int32 my;
					ev_real64 mzoomRatio;
				};

				class EV_GA_DLL CZoomCameraEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CZoomCameraEvent>
				{
ev_private:
					CZoomCameraEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CZoomCameraEventPtr(_in CZoomCameraEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CZoomCameraEvent>(rep, inFreeMethod) {}
				public:
					CZoomCameraEventPtr();
					explicit CZoomCameraEventPtr(_in CZoomCameraEvent *rep);
					CZoomCameraEventPtr(_in const CZoomCameraEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CZoomCameraEvent>::get();
					}

					//EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr &r){};

					//EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr &operator = (_in CZoomCameraEvent* rep){};

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

				class EV_GA_DLL CRotationCameraEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRotationCameraEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="rotationDegree">旋转的角度</param>
					/// <returns></returns>
					CRotationCameraEvent(ev_int32 x,ev_int32 y,ev_real64 rotationDegree);

					virtual ~CRotationCameraEvent();
ev_private:
					CRotationCameraEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					ev_int32 mx;
					ev_int32 my;
					ev_real64 mrotationDegree;
				};

				class EV_GA_DLL CRotationCameraEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRotationCameraEvent>
				{
ev_private:
					CRotationCameraEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CRotationCameraEventPtr(_in CRotationCameraEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CRotationCameraEvent>(rep, inFreeMethod) {}
				public:
					CRotationCameraEventPtr();
					explicit CRotationCameraEventPtr(_in CRotationCameraEvent *rep);
					CRotationCameraEventPtr(_in const CRotationCameraEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CRotationCameraEvent>::get();
					}

					//EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr &r){};

					//EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr &operator = (_in CRotationCameraEvent* rep){};

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

				class EV_GA_DLL CTiltCameraEventEX:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTiltCameraEventEX();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="x">缩放点的Ｘ坐标</param>
					/// <param name="y">缩放点的Y坐标</param>
					/// <param name="tiltDegree">倾斜的角度</param>
					/// <returns></returns>
					CTiltCameraEventEX(ev_int32 x,ev_int32 y,ev_real64 tiltDegree);

					virtual ~CTiltCameraEventEX();
ev_private:
					CTiltCameraEventEX(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					ev_int32 mx;
					ev_int32 my;
					ev_real64 mtiltDegree;
				};

				class EV_GA_DLL CTiltCameraEventEXPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTiltCameraEventEX>
				{
ev_private:
					CTiltCameraEventEXPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CTiltCameraEventEXPtr(_in CTiltCameraEventEX *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CTiltCameraEventEX>(rep, inFreeMethod) {}
				public:
					CTiltCameraEventEXPtr();
					explicit CTiltCameraEventEXPtr(_in CTiltCameraEventEX *rep);
					CTiltCameraEventEXPtr(_in const CTiltCameraEventEXPtr &tp);

					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTiltCameraEventEX>::get();
					}

					//EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr &r){};

					//EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr &operator = (_in CTiltCameraEventEX* rep){};

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

				class EV_GA_DLL CSetCameraRotationratioEventEX:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					CSetCameraRotationratioEventEX();

					CSetCameraRotationratioEventEX(ev_real64 rotationratio);

					virtual ~CSetCameraRotationratioEventEX();
ev_private:
					CSetCameraRotationratioEventEX(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					ev_real64 mrotationratio;
				};

				class EV_GA_DLL CSetCameraRotationratioEventEXPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX>
				{
ev_private:
					CSetCameraRotationratioEventEXPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CSetCameraRotationratioEventEXPtr(_in CSetCameraRotationratioEventEX *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CSetCameraRotationratioEventEX>(rep, inFreeMethod) {}
				public:
					CSetCameraRotationratioEventEXPtr();
					explicit CSetCameraRotationratioEventEXPtr(_in CSetCameraRotationratioEventEX *rep);
					CSetCameraRotationratioEventEXPtr(_in const CSetCameraRotationratioEventEXPtr &tp);

					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX>::get();
					}

					//EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr &r){};

					//EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr &operator = (_in CSetCameraRotationratioEventEX* rep){};

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

