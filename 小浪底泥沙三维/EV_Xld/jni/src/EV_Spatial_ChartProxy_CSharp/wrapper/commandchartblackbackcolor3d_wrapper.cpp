/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialchartproxy/commandchartblackbackcolor3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback)();
				class CCommandChartBlackBackColor3DProxy : public EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D
				{
				private:
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback* m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback;
				public:
					CCommandChartBlackBackColor3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandChartBlackBackColor3D(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandChartBlackBackColor3DProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void(EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartBlackBackColor3D::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback();
						}
						else
							return this->CCommandChartBlackBackColor3D::onClicked();
					}
				};
				REGISTER_FACTORY_CLASS(CCommandChartBlackBackColor3DProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					if (dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_Callback* pCallback )
				{
					CCommandChartBlackBackColor3DProxy* ptr = dynamic_cast<CCommandChartBlackBackColor3DProxy*>((EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCommandChartBlackBackColor3D_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCommandChartBlackBackColor3D::onClicked();
				}
			}
		}
	}
}
