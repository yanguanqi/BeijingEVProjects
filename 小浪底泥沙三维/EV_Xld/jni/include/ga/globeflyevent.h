#ifndef  CGLOBEFLYPATH_H
#define  CGLOBEFLYPATH_H
#include "ga/evga_config.h"
#include "spatialgui/guievent.h"
#include "core/sharedptr.h"
#include "spatial3dengine/globeflypath.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CGlobeFlyEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyEvent();
ev_private:
					CGlobeFlyEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyEvent>
				{
ev_private:
					CGlobeFlyEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyEventPtr();
					explicit CGlobeFlyEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent *rep);
					CGlobeFlyEventPtr(_in const CGlobeFlyEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* rep);
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

				class EV_GA_DLL CGlobeFlyDataEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyDataEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyDataEvent();
					/// <summary>
					/// 设置飞行线路
					/// </summary>
					/// <param name="flyPath">飞行线路</param>
					/// <returns></returns>
					void setFlyPath(_in const EarthView::World::Spatial3D::CGlobeFlyPathPtr& flyPath);
ev_private:
					EarthView::World::Spatial3D::CGlobeFlyPathPtr mglobeFlyPath;
					CGlobeFlyDataEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyDataEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent>
				{
ev_private:
					CGlobeFlyDataEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyDataEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyDataEventPtr();
					explicit CGlobeFlyDataEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *rep);
					CGlobeFlyDataEventPtr(_in const CGlobeFlyDataEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr &r);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* rep);

					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* rep);
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

				class EV_GA_DLL CGlobeFlyPlayEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyPlayEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyPlayEvent();

ev_private:
					CGlobeFlyPlayEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyPlayEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent>
				{
ev_private:
					CGlobeFlyPlayEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyPlayEventPtr(_in CGlobeFlyPlayEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyPlayEventPtr();
					explicit CGlobeFlyPlayEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent *rep);
					CGlobeFlyPlayEventPtr(_in const CGlobeFlyPlayEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent>::get();
					}

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent* rep);

					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr &operator = (_in CGlobeFlyPlayEvent* rep);
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

				class EV_GA_DLL CGlobeFlyPauseEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyPauseEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyPauseEvent();

ev_private:
					CGlobeFlyPauseEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyPauseEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent>
				{
ev_private:
					CGlobeFlyPauseEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyPauseEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyPauseEventPtr();
					explicit CGlobeFlyPauseEventPtr(_in CGlobeFlyPauseEvent *rep);
					CGlobeFlyPauseEventPtr(_in const CGlobeFlyPauseEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* rep);
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

				class EV_GA_DLL CGlobeFlyStopEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStopEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyStopEvent();

ev_private:
					CGlobeFlyStopEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyStopEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent>
				{
ev_private:
					CGlobeFlyStopEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyStopEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStopEventPtr();
					explicit CGlobeFlyStopEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent *rep);
					CGlobeFlyStopEventPtr(_in const CGlobeFlyStopEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* rep);
					/// <summary>
					///转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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

				class EV_GA_DLL CGlobeFlyStartSamplePointEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStartSamplePointEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyStartSamplePointEvent();

ev_private:
					CGlobeFlyStartSamplePointEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyStartSamplePointEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent>
				{
ev_private:
					CGlobeFlyStartSamplePointEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyStartSamplePointEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStartSamplePointEventPtr();
					explicit CGlobeFlyStartSamplePointEventPtr(_in CGlobeFlyStartSamplePointEvent *rep);
					CGlobeFlyStartSamplePointEventPtr(_in const CGlobeFlyStartSamplePointEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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

				class EV_GA_DLL CGlobeFlyStopSamplePointEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStopSamplePointEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyStopSamplePointEvent();

ev_private:
					CGlobeFlyStopSamplePointEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyStopSamplePointEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent>
				{
ev_private:
					CGlobeFlyStopSamplePointEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyStopSamplePointEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyStopSamplePointEventPtr();
					explicit CGlobeFlyStopSamplePointEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent *rep);
					CGlobeFlyStopSamplePointEventPtr(_in const CGlobeFlyStopSamplePointEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* rep);
					/// <summary>
					///  转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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

				class EV_GA_DLL CGlobeFlyShowAxisEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyShowAxisEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyShowAxisEvent();

					ev_bool mcloseWindow;

ev_private:
					CGlobeFlyShowAxisEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyShowAxisEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent>
				{
ev_private:
					CGlobeFlyShowAxisEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyShowAxisEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyShowAxisEventPtr();
					explicit CGlobeFlyShowAxisEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *rep);
					CGlobeFlyShowAxisEventPtr(_in const CGlobeFlyShowAxisEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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

				class EV_GA_DLL CGlobeFlyAdjustModeEvent:public EarthView::World::Spatial3D::Controls::CGlobeFlyEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyAdjustModeEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeFlyAdjustModeEvent();

					ev_bool mcloseWindow;

ev_private:
					CGlobeFlyAdjustModeEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CGlobeFlyAdjustModeEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent>
				{
ev_private:
					CGlobeFlyAdjustModeEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CGlobeFlyAdjustModeEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeFlyAdjustModeEventPtr();
					explicit CGlobeFlyAdjustModeEventPtr(_in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *rep);
					CGlobeFlyAdjustModeEventPtr(_in const CGlobeFlyAdjustModeEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr &r);

					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* rep);

					void bind(_in EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* rep);
					/// <summary>
					/// 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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
