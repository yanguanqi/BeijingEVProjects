/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/factoryobj.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback)();
			typedef EarthView::World::Graphic::CParticleSystemRenderer*  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback)(_in EarthView::World::Graphic::CParticleSystemRenderer* renderer);
			class CParticleSystemRendererFactoryObjProxy : public EarthView::World::Graphic::CParticleSystemRendererFactoryObj
			{
			private:
				EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback;
			public:
				CParticleSystemRendererFactoryObjProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemRendererFactoryObj(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemRendererFactoryObj::getType();
				}
				virtual EarthView::World::Graphic::CParticleSystemRenderer* createInstance(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystemRenderer* returnValue = m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CParticleSystemRendererFactoryObj::createInstance(name);
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CParticleSystemRenderer* renderer)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback(renderer);
					}
					else
						return this->CParticleSystemRendererFactoryObj::destroyInstance(renderer);
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemRendererFactoryObjProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Callback* pCallback )
			{
				CParticleSystemRendererFactoryObjProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRenderer*  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::createInstance(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->createInstance(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback )
			{
				CParticleSystemRendererFactoryObjProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRenderer*  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::createInstance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRenderer* renderer )
			{
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::destroyInstance(renderer);
				else
					ptrNativeObject->destroyInstance(renderer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback )
			{
				CParticleSystemRendererFactoryObjProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryObjProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRenderer* renderer )
			{
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::destroyInstance(renderer);
			}
		}
	}
}
