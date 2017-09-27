/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/nodeparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CModelPropertyProxy : public EarthView::World::Spatial3DProxy::CModelProperty
			{
			private:
				EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback;
			public:
				CModelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelProperty(pList)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CModelProperty::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CModelProperty::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CModelProperty::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CModelProperty::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CModelProperty::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CModelPropertyProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelProperty_setFieldValue_void_IField_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IField* ref_field, _in char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Spatial3DProxy::CModelProperty* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX;
				ptrNativeObject->setFieldValue(ref_field, val1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CModelProperty_getFieldValue_EVString_IField(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IField* field )
			{
				EarthView::World::Spatial3DProxy::CModelProperty* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFieldValue(field);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CModelPropertyProxy* ptr = dynamic_cast<CModelPropertyProxy*>((EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CModelPropertyProxy* ptr = dynamic_cast<CModelPropertyProxy*>((EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CModelPropertyProxy* ptr = dynamic_cast<CModelPropertyProxy*>((EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString_Callback* pCallback )
			{
				CModelPropertyProxy* ptr = dynamic_cast<CModelPropertyProxy*>((EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CModelPropertyProxy* ptr = dynamic_cast<CModelPropertyProxy*>((EarthView::World::Spatial3DProxy::CModelProperty*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CModelProperty_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CNodeParamProxy : public EarthView::World::Spatial3DProxy::CNodeParam
			{
			private:
				EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback;
			public:
				CNodeParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeParam(pList)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CNodeParam::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CNodeParam::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CNodeParam::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNodeParam::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CNodeParam::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeParamProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setPos_void_CVector3(void *pObjectXXXX, _in void* v3 )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				ptrNativeObject->setPos(*(EarthView::World::Spatial::Math::CVector3*)v3);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_getPos_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPos();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setRot_void_CVector3(void *pObjectXXXX, _in void* v3 )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				ptrNativeObject->setRot(*(EarthView::World::Spatial::Math::CVector3*)v3);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_getRot_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRot();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_setScale_void_CVector3(void *pObjectXXXX, _in void* v3 )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)v3);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CNodeParam_getScale_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CNodeParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CNodeParamProxy* ptr = dynamic_cast<CNodeParamProxy*>((EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CNodeParamProxy* ptr = dynamic_cast<CNodeParamProxy*>((EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CNodeParamProxy* ptr = dynamic_cast<CNodeParamProxy*>((EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString_Callback* pCallback )
			{
				CNodeParamProxy* ptr = dynamic_cast<CNodeParamProxy*>((EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CNodeParamProxy* ptr = dynamic_cast<CNodeParamProxy*>((EarthView::World::Spatial3DProxy::CNodeParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CNodeParam_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CTrailParamProxy : public EarthView::World::Spatial3DProxy::CTrailParam
			{
			private:
				EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback;
			public:
				CTrailParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrailParam(pList)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CTrailParam::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CTrailParam::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CTrailParam::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTrailParam::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CTrailParam::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CTrailParamProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRibbonTrail*  _stdcall EarthView_World_Spatial3DProxy_CTrailParam_getRibbonTrail_CRibbonTrail(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CTrailParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX;
				EarthView::World::Graphic::CRibbonTrail* objXXXX = ptrNativeObject->getRibbonTrail();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CTrailParamProxy* ptr = dynamic_cast<CTrailParamProxy*>((EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CTrailParamProxy* ptr = dynamic_cast<CTrailParamProxy*>((EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CTrailParamProxy* ptr = dynamic_cast<CTrailParamProxy*>((EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString_Callback* pCallback )
			{
				CTrailParamProxy* ptr = dynamic_cast<CTrailParamProxy*>((EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CTrailParamProxy* ptr = dynamic_cast<CTrailParamProxy*>((EarthView::World::Spatial3DProxy::CTrailParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CTrailParam_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CLightParamProxy : public EarthView::World::Spatial3DProxy::CLightParam
			{
			private:
				EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback;
			public:
				CLightParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CLightParam(pList)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CLightParam::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CLightParam::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CLightParam::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CLightParam::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CLightParam::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CLightParamProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Spatial3DProxy_CLightParam_getLight_CLight(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CLightParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX;
				EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->getLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CLightParamProxy* ptr = dynamic_cast<CLightParamProxy*>((EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CLightParamProxy* ptr = dynamic_cast<CLightParamProxy*>((EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CLightParamProxy* ptr = dynamic_cast<CLightParamProxy*>((EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CLightParam_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString_Callback* pCallback )
			{
				CLightParamProxy* ptr = dynamic_cast<CLightParamProxy*>((EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CLightParam_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CLightParamProxy* ptr = dynamic_cast<CLightParamProxy*>((EarthView::World::Spatial3DProxy::CLightParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CLightParam_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
		}
	}
}
