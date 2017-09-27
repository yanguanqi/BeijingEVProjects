/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/basebandingobject.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback)(_in const ev_bool& needUpdate);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback)();
			class CBaseBandingObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback;
			public:
				CBaseBandingObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CBaseBandingObject(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback = pCallback;
				}
				virtual ev_bool getCanSwapBuffer() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBaseBandingObject::getCanSwapBuffer();
				}
				virtual void setName(_in const EarthView::World::Core::ev_string& name)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback(name_Char);
					}
					else
						return this->CBaseBandingObject::setName(name);
				}
				virtual EarthView::World::Core::ev_string getName() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::ev_string returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback();
						return returnValue;
					}
					else
						return this->CBaseBandingObject::getName();
				}
				virtual void setNeedUpdate(_in const ev_bool& needUpdate)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback(needUpdate);
					}
					else
						return this->CBaseBandingObject::setNeedUpdate(needUpdate);
				}
				virtual ev_bool getNeedUpdate() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBaseBandingObject::getNeedUpdate();
				}
				virtual EarthView::World::Graphic::CNode* getNode() const
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CBaseBandingObject::getNode();
				}
				virtual void update()
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback();
					}
					else
						return this->CBaseBandingObject::update();
				}
			};
			REGISTER_FACTORY_CLASS(CBaseBandingObjectProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getCanSwapBuffer();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCanSwapBuffer();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getCanSwapBuffer_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getCanSwapBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setName_void_EarthView_World_Core_ev_string_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getName_EarthView_World_Core_ev_string_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setNeedUpdate(needUpdate);
				else
					ptrNativeObject->setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_setNeedUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNeedUpdate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getNeedUpdate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNeedUpdate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNeedUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_getNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				if (dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::update();
				else
					ptrNativeObject->update();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_Callback* pCallback )
			{
				CBaseBandingObjectProxy* ptr = dynamic_cast<CBaseBandingObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CBaseBandingObject_update_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::update();
			}
		}
	}
}
