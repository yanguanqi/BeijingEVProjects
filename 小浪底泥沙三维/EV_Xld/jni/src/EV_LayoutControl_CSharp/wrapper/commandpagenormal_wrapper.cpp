/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/commandpagenormal.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandPageNormalProxy : public EarthView::World::Layout::Controls::CCommandPageNormal
				{
				private:
					EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback;
					EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback* m_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback;
				public:
					CCommandPageNormalProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandPageNormal(pList)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandPageNormalProxy)
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32(EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32(EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString(EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString(EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString(EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap(EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool(EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void(EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool(EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool(EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool(EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool(EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl(EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent(EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback();
						}
						else
							return this->CCommandPageNormal::onClicked();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandPageNormal::update(e);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandPageNormal::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandPageNormal::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandPageNormal::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommandPageNormal::create(ref_ctrl);
					}
				};
				REGISTER_FACTORY_CLASS(CCommandPageNormalProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					if (dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandPageNormal_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandPageNormal* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandPageNormal::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandPageNormalProxy* ptr = dynamic_cast<CCommandPageNormalProxy*>((EarthView::World::Layout::Controls::CCommandPageNormal*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandPageNormal_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
