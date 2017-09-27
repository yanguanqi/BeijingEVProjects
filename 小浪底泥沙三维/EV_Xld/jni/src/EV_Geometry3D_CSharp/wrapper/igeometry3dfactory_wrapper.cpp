/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/igeometry3dfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_uint16  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				class IGeometry3DFactoryProxy : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
				public:
					IGeometry3DFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IGeometry3DFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
					}
					virtual ev_uint16 getFactoryType()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback();
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::getFactoryType();
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::createRenderable(geoObj, scenemanager);
					}
					virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
						}
						else
							return this->IGeometry3DFactory::destoryRenderable(visitObj);
					}
					virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
					}
					virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
					}
					virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
						}
						else
							return this->IGeometry3DFactory::removeAllGeoObjects(visibleObj);
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::getGeoObject(visibleObj, index);
					}
					virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
							return returnValue;
						}
						else
							return this->IGeometry3DFactory::getGeoObjectCount(visibleObj);
					}
				};
				REGISTER_FACTORY_CLASS(IGeometry3DFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getFactoryType();
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getFactoryType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->createRenderable(geoObj, scenemanager);
						EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::destoryRenderable(visitObj);
					else
						ptrNativeObject->destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->appendGeoObject(visibleObj, ref_geoObject);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeGeoObject(visibleObj, geoObject);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeAllGeoObjects(visibleObj);
					else
						ptrNativeObject->removeAllGeoObjects(visibleObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::removeAllGeoObjects(visibleObj);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObject(visibleObj, index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(visibleObj, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObject(visibleObj, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
				{
					const EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					if (dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObjectCount(visibleObj);
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount(visibleObj);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
				{
					IGeometry3DFactoryProxy* ptr = dynamic_cast<IGeometry3DFactoryProxy*>((EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
				{
					const EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IGeometry3DFactory::getGeoObjectCount(visibleObj);
					return objXXXX;
				}
			}
		}
	}
}
