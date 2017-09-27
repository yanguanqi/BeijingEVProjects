/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/scenefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial3D
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::Atlas::IScene*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback)(_in char*& strSceneName, _in int type);
				typedef EarthView::World::Spatial::Atlas::IScene*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback)(_in char*& strSceneName);
				typedef EarthView::World::Spatial::Atlas::IScene*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback)(_in void* stream);
				typedef EarthView::World::Spatial::Atlas::IScene*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback)(_in char*& xml);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback)(_in EarthView::World::Spatial::Atlas::IScene* pScene);
				class CSceneFactoryProxy : public EarthView::World::Spatial3D::Atlas::CSceneFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback* m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback;
					EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback* m_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback;
				public:
					CSceneFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CSceneFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType(EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString(EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream(EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString(EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene(EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::IScene* newScene(_in const EVString& strSceneName) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strSceneName_Char = strSceneName.makeBuffer();
							EarthView::World::Spatial::Atlas::IScene* returnValue = m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback(strSceneName_Char);
							return returnValue;
						}
						else
							return this->CSceneFactory::newScene(strSceneName);
					}
					virtual EarthView::World::Spatial::Atlas::IScene* newScene(_in const EVString& strSceneName, _in EarthView::World::Spatial3D::SceneTileType type) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback != NULL && this->isCustomExtend())
						{
							char* strSceneName_Char = strSceneName.makeBuffer();
							EarthView::World::Spatial::Atlas::IScene* returnValue = m_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback(strSceneName_Char, (int)type);
							return returnValue;
						}
						else
							return this->CSceneFactory::newScene(strSceneName, type);
					}
					virtual EarthView::World::Spatial::Atlas::IScene* createScene(_in EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IScene* returnValue = m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback(&stream);
							return returnValue;
						}
						else
							return this->CSceneFactory::createScene(stream);
					}
					virtual EarthView::World::Spatial::Atlas::IScene* createScene(_in const EVString& xml) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xml_Char = xml.makeBuffer();
							EarthView::World::Spatial::Atlas::IScene* returnValue = m_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback(xml_Char);
							return returnValue;
						}
						else
							return this->CSceneFactory::createScene(xml);
					}
					virtual void destroyScene(_in EarthView::World::Spatial::Atlas::IScene* pScene) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback(pScene);
						}
						else
							return this->CSceneFactory::destroyScene(pScene);
					}
				};
				REGISTER_FACTORY_CLASS(CSceneFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					if (dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::newScene(strSceneName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->newScene(strSceneName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_Callback* pCallback )
				{
					CSceneFactoryProxy* ptr = dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_NoVirtual(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::newScene(strSceneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType(void *pObjectXXXX, _in const char* strSceneName, _in int type )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					if (dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::newScene(strSceneName1, (EarthView::World::Spatial3D::SceneTileType)type);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->newScene(strSceneName1, (EarthView::World::Spatial3D::SceneTileType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_Callback* pCallback )
				{
					CSceneFactoryProxy* ptr = dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_newScene_IScene_EVString_SceneTileType_NoVirtual(void *pObjectXXXX, _in const char* strSceneName, _in int type )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::newScene(strSceneName1, (EarthView::World::Spatial3D::SceneTileType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					if (dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::createScene(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->createScene(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_Callback* pCallback )
				{
					CSceneFactoryProxy* ptr = dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::createScene(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					if (dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::createScene(xml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->createScene(xml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_Callback* pCallback )
				{
					CSceneFactoryProxy* ptr = dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_createScene_IScene_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::createScene(xml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* pScene )
				{
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					if (dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::destroyScene(pScene);
					else
						ptrNativeObject->destroyScene(pScene);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_Callback* pCallback )
				{
					CSceneFactoryProxy* ptr = dynamic_cast<CSceneFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSceneFactory_destroyScene_void_IScene_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* pScene )
				{
					const EarthView::World::Spatial3D::Atlas::CSceneFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSceneFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSceneFactory::destroyScene(pScene);
				}
			}
		}
	}
}
