/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/commandsmooth.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandSmoothProxy : public EarthView::World::Spatial2D::Controls::CCommandSmooth
				{
				private:
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback;
				public:
					CCommandSmoothProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandSmooth(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandSmoothProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString(EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString(EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void(EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::isCheckable();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandSmooth::update(e);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback();
						}
						else
							return this->CCommandSmooth::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandSmooth::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandSmooth::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandSmooth::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommandSmooth::create(ref_ctrl);
					}
				};
				REGISTER_FACTORY_CLASS(CCommandSmoothProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_smoothFeature_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 dDeviation )
				{
					EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->smoothFeature(dDeviation);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					if (dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandSmooth_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CCommandSmooth* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandSmooth::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandSmoothProxy* ptr = dynamic_cast<CCommandSmoothProxy*>((EarthView::World::Spatial2D::Controls::CCommandSmooth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandSmooth_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
