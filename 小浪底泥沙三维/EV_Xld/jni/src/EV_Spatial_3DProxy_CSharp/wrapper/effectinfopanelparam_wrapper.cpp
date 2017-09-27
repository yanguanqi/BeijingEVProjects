/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effectinfopanelparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CEffectInfoPanelParamProxy : public EarthView::World::Spatial3DProxy::CEffectInfoPanelParam
			{
			private:
				EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback;
				EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback;
			public:
				CEffectInfoPanelParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectInfoPanelParam(pList)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString(EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CEffectInfoPanelParam::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CEffectInfoPanelParam::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CEffectInfoPanelParam::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CEffectInfoPanelParam::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CEffectInfoPanelParam::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CEffectInfoPanelParamProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setEffectObject_void_CEffectObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffectObject* ref_obj )
			{
				EarthView::World::Spatial3DProxy::CEffectInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX;
				ptrNativeObject->setEffectObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall Get_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mpEffectObject( void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = ptrNativeObject->mpEffectObject;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mpEffectObject( void *pObjectXXXX, EarthView::World::Spatial3D::EffectManager::CEffectObject*  value )
			{
				((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*)pObjectXXXX)->mpEffectObject = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall Get_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mpNode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CEffectInfoPanelParam* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->mpNode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_mpNode( void *pObjectXXXX, EarthView::World::Graphic::CSceneNode*  value )
			{
				((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*)pObjectXXXX)->mpNode = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CEffectInfoPanelParamProxy* ptr = dynamic_cast<CEffectInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CEffectInfoPanelParamProxy* ptr = dynamic_cast<CEffectInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CEffectInfoPanelParamProxy* ptr = dynamic_cast<CEffectInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString_Callback* pCallback )
			{
				CEffectInfoPanelParamProxy* ptr = dynamic_cast<CEffectInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CEffectInfoPanelParamProxy* ptr = dynamic_cast<CEffectInfoPanelParamProxy*>((EarthView::World::Spatial3DProxy::CEffectInfoPanelParam*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CEffectInfoPanelParam_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
		}
	}
}
