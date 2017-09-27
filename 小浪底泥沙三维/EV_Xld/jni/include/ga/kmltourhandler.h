#ifndef KMLTOURHANDLER_H
#define KMLTOURHANDLER_H

#include "ga/evga_config.h"
#include "ga/guieventhandler.h"
#include "spatial3dengine/kmltourpath.h"
#include "spatialgui/guievent.h"
#include "core/event.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CGlobeCamera;
			namespace Controls
			{
				class EV_GA_DLL CTourEndEvent:public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTourEndEvent();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					CTourEndEvent(ev_uint16 type);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <param name="sender">发送者</param>
					/// <returns></returns>
					CTourEndEvent(ev_uint16 type, EarthView::World::Core::CEventObject *sender);
ev_private:
					CTourEndEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTourEndEvent() ;
					/// <summary>
					/// 返回ＫＭＬ游览的线路
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr getTourPath();
					/// <summary>
					/// 设置ＫＭＬ游览的线路
					/// </summary>
					/// <param name="kmlTourPath">游览对象</param>
					/// <returns></returns>
					void setTourPath(_in const EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr kmlTourPath);

				protected:
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr mkmlTourPath;
				};

				class EV_GA_DLL CKmlTourEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					enum KmlEventType
					{
						DATA =0,
						START,
						STOP,
						STARTRECORD,
						STOPRECORD
					};
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlTourEvent();
					/// <summary>
					/// 返回事件的类型
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CKmlTourEvent::KmlEventType getKmlEventType()
					{
						return mkmlEventType;
					}
ev_private:
					CKmlTourEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					EarthView::World::Spatial3D::Controls::CKmlTourEvent::KmlEventType mkmlEventType;
				};

				class EV_GA_DLL CKmlTourEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourEvent>
				{
ev_private:
					CKmlTourEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlTourEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourEventPtr();
					explicit CKmlTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlTourEvent *rep);
					CKmlTourEventPtr(_in const CKmlTourEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlTourEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlTourEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlTourEvent* rep);
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

				class EV_GA_DLL CKmlTourPathEvent:public EarthView::World::Spatial3D::Controls::CKmlTourEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourPathEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlTourPathEvent();
ev_private:
					CKmlTourPathEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr mkmlTourPath;
				};

				class EV_GA_DLL CKmlTourPathEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourPathEvent>
				{
ev_private:
					CKmlTourPathEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlTourPathEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourPathEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourPathEventPtr();
					explicit CKmlTourPathEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *rep);				
					CKmlTourPathEventPtr(_in const CKmlTourPathEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlTourPathEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlTourPathEvent* rep);
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

				class EV_GA_DLL CKmlStartTourEvent:public EarthView::World::Spatial3D::Controls::CKmlTourEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStartTourEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlStartTourEvent();
ev_private:
					CKmlStartTourEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CKmlStartTourEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartTourEvent>
				{
ev_private:
					CKmlStartTourEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlStartTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStartTourEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartTourEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStartTourEventPtr();
					explicit CKmlStartTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStartTourEvent *rep);
					CKmlStartTourEventPtr(_in const CKmlStartTourEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlStartTourEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartTourEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlStartTourEvent* rep);
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

				class EV_GA_DLL CKmlStopTourEvent:public EarthView::World::Spatial3D::Controls::CKmlTourEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStopTourEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlStopTourEvent();
ev_private:
					CKmlStopTourEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CKmlStopTourEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopTourEvent>
				{
ev_private:
					CKmlStopTourEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlStopTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStopTourEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopTourEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStopTourEventPtr();
					explicit CKmlStopTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStopTourEvent *rep);
					CKmlStopTourEventPtr(_in const CKmlStopTourEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlStopTourEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopTourEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlStopTourEvent* rep);
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

				class EV_GA_DLL CKmlStartRecordTourEvent:public EarthView::World::Spatial3D::Controls::CKmlTourEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStartRecordTourEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlStartRecordTourEvent();
ev_private:
					CKmlStartRecordTourEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CKmlStartRecordTourEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent>
				{
ev_private:
					CKmlStartRecordTourEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlStartRecordTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStartRecordTourEventPtr();
					explicit CKmlStartRecordTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent *rep);
					CKmlStartRecordTourEventPtr(_in const CKmlStartRecordTourEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent* rep);
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

				class EV_GA_DLL CKmlStopRecordTourEvent:public EarthView::World::Spatial3D::Controls::CKmlTourEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStopRecordTourEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlStopRecordTourEvent();
ev_private:
					CKmlStopRecordTourEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CKmlStopRecordTourEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent>
				{
ev_private:
					CKmlStopRecordTourEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CKmlStopRecordTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlStopRecordTourEventPtr();
					explicit CKmlStopRecordTourEventPtr(_in EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent *rep);
					CKmlStopRecordTourEventPtr(_in const CKmlStopRecordTourEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr &r);

					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr &operator = (_in EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent* rep);
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

				class EV_GA_DLL CKmlTourHandler:public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					CKmlTourHandler(EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				    /// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlTourHandler();
					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleFrame(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 向界面发送事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <returns></returns>
					ev_void sendActiveEvent(EarthView::World::Core::CEvent* event);

				private:
					/// <summary>
					/// 播放游览
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					void playTour(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

ev_private:
					CKmlTourHandler(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					EarthView::World::Spatial3D::CGlobeCamera* mglobeCamera;
					ev_bool mstartPlay;
					ev_bool mstartRecordTour;
					ev_real64 mrecordTimeSpan;
					ev_real64 mbeginRecordTime;//开始录制的时间
					ev_real64 mstartTime;//开始播放的时间
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr mkmlTourPath;
				};
			}
		}
	}
}
#endif
