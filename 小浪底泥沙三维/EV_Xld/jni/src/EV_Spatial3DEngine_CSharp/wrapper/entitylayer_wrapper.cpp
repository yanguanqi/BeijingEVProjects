/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/entitylayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Octree
			{
			}
			namespace GeoDataset
			{
			}
		}
		namespace Geometry3D
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
			}
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				class CModelStateListenerProxy : public EarthView::World::Spatial3D::Atlas::CModelStateListener
				{
				private:
					EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback;
				public:
					CModelStateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelStateListener(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback = pCallback;
					}
					virtual void modelUnLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CModelStateListener::modelUnLoaded(object);
					}
					virtual void modelLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CModelStateListener::modelLoaded(object);
					}
					virtual void modelPreAttach(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CModelStateListener::modelPreAttach(object);
					}
					virtual void modelAttached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CModelStateListener::modelAttached(object);
					}
					virtual void modelDetached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CModelStateListener::modelDetached(object);
					}
				};
				REGISTER_FACTORY_CLASS(CModelStateListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					if (dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelUnLoaded(object);
					else
						ptrNativeObject->modelUnLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_Callback* pCallback )
				{
					CModelStateListenerProxy* ptr = dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelUnLoaded_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelUnLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					if (dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelLoaded(object);
					else
						ptrNativeObject->modelLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_Callback* pCallback )
				{
					CModelStateListenerProxy* ptr = dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelLoaded_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					if (dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelPreAttach(object);
					else
						ptrNativeObject->modelPreAttach(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_Callback* pCallback )
				{
					CModelStateListenerProxy* ptr = dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelPreAttach_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelPreAttach(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					if (dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelAttached(object);
					else
						ptrNativeObject->modelAttached(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_Callback* pCallback )
				{
					CModelStateListenerProxy* ptr = dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelAttached_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelAttached(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					if (dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelDetached(object);
					else
						ptrNativeObject->modelDetached(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_Callback* pCallback )
				{
					CModelStateListenerProxy* ptr = dynamic_cast<CModelStateListenerProxy*>((EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CModelStateListener_modelDetached_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CModelStateListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CModelStateListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CModelStateListener::modelDetached(object);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback)(_in ev_bool revShadow);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback)(_in ev_bool castShadow);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback)(_in ev_real64 modelMipMap);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback)(_in ev_real64 distance);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback)(_in ev_real64 distance);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback)(_in ev_real64 distance);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback)(_in int altitudeMode, _in ev_real64 altitudeValue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback)(_inout int& altitudeMode, _inout ev_real64& altitudeValue);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latitude, _in ev_real64 longitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
				typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
				typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback)(_in ev_bool visible, _in const void* ids);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback)(_in ev_bool visible, _in ev_uint32 id);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback)(_in ev_bool visible, _in const void* ids);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback)(_in ev_bool visible, _in ev_uint32 id, _in const ev_uint32& subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback)(_in ev_bool visible, _in ev_uint32 id, _in const void* subEntityIndexVector);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback)(_inout ev_bool& visible, _out void* ids);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback)(_in ev_uint32 id, _in const ev_uint32& subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback)(_in ev_uint32 id, _in ev_bool visible, _out void* subEntityIndexVector);
				typedef EarthView::World::Geometry3D::CVisibleObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback)(_in ev_uint32 id, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback)(_in ev_uint32 count);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback)(_in ev_bool bClearObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* pMovableObj);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeature* f);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeature* ref_f);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CEntityLayerProxy : public EarthView::World::Spatial3D::Atlas::CEntityLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback;
				public:
					CEntityLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEntityLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox(EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector(EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature(EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature(EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::clone();
					}
					virtual ev_bool hasVisibleObject()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::hasVisibleObject();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CEntityLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CEntityLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CEntityLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isValid();
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getAABBox()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getAABBox();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CEntityLayer::setSelectable(selectable);
					}
					virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CEntityLayer::setSelectionColour(colour);
					}
					virtual EarthView::World::Graphic::CColourValue getSelectionColour()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CColourValue returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getSelectionColour();
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getTransparentValue();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CEntityLayer::setTransparentValue(transparent);
					}
					virtual ev_bool isRevShadow()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isRevShadow();
					}
					virtual void setRevShadow(_in ev_bool revShadow)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback(revShadow);
						}
						else
							return this->CEntityLayer::setRevShadow(revShadow);
					}
					virtual ev_bool isCastShadow()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isCastShadow();
					}
					virtual void setCastShadow(_in ev_bool castShadow)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback(castShadow);
						}
						else
							return this->CEntityLayer::setCastShadow(castShadow);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CEntityLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CEntityLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual void setMipMap(_in ev_real64 modelMipMap)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback(modelMipMap);
						}
						else
							return this->CEntityLayer::setMipMap(modelMipMap);
					}
					virtual ev_real64 getMipMap()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMipMap();
					}
					virtual ev_bool checkSafeVisibleDistance(_in ev_real64 distance)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback(distance);
							return returnValue;
						}
						else
							return this->CEntityLayer::checkSafeVisibleDistance(distance);
					}
					virtual void setVisibleDistance(_in ev_real64 distance)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback(distance);
						}
						else
							return this->CEntityLayer::setVisibleDistance(distance);
					}
					virtual ev_real64 getVisibleDistance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getVisibleDistance();
					}
					virtual void setUnloadBufferDistance(_in ev_real64 distance)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback(distance);
						}
						else
							return this->CEntityLayer::setUnloadBufferDistance(distance);
					}
					virtual ev_real64 getUnloadBufferDistance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getUnloadBufferDistance();
					}
					virtual void setAltitudeMode(_in EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, _in ev_real64 altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback((int)altitudeMode, altitudeValue);
						}
						else
							return this->CEntityLayer::setAltitudeMode(altitudeMode, altitudeValue);
					}
					virtual void getAltitudeMode(_inout EarthView::World::Spatial::Utility::EVAltitudeMode& altitudeMode, _inout ev_real64& altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback((int&)altitudeMode, altitudeValue);
						}
						else
							return this->CEntityLayer::getAltitudeMode(altitudeMode, altitudeValue);
					}
					virtual ev_bool isAffectByDem()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isAffectByDem();
					}
					virtual ev_bool canEditAltitude()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::canEditAltitude();
					}
					virtual ev_real64 getAltitude(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback(pModel);
							return returnValue;
						}
						else
							return this->CEntityLayer::getAltitude(pModel);
					}
					virtual ev_real64 getDem(_in ev_real64 latitude, _in ev_real64 longitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude);
							return returnValue;
						}
						else
							return this->CEntityLayer::getDem(latitude, longitude);
					}
					virtual ev_real64 getDem(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback(pModel);
							return returnValue;
						}
						else
							return this->CEntityLayer::getDem(pModel);
					}
					virtual ev_bool refresh()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::refresh();
					}
					virtual ev_bool refresh(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEntityLayer::refresh(id);
					}
					virtual void refreshPosition(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback(pModel);
						}
						else
							return this->CEntityLayer::refreshPosition(pModel);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CEntityLayer::select(filter, type);
					}
					virtual EarthView::World::Graphic::CMovableObject* select(_in EarthView::World::Spatial::Math::CRay ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
							return returnValue;
						}
						else
							return this->CEntityLayer::select(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
					}
					virtual EarthView::World::Graphic::CMovableObject* selectComponentBy(_in EarthView::World::Spatial::Math::CRay ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
							return returnValue;
						}
						else
							return this->CEntityLayer::selectComponentBy(ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
					}
					virtual void loadVisibleObjectNodeAndMergeBoundingBox()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback();
						}
						else
							return this->CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback();
						}
						else
							return this->CEntityLayer::clearSelection();
					}
					virtual void clearSubEntityVisibility(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback(id);
						}
						else
							return this->CEntityLayer::clearSubEntityVisibility(id);
					}
					virtual void clearSubEntityVisibility()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback();
						}
						else
							return this->CEntityLayer::clearSubEntityVisibility();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CEntityLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getLayerSelection();
					}
					virtual ev_bool setVisibilityFilter(_in ev_bool visible, _in const EarthView::World::Core::IntVector& ids)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
							return returnValue;
						}
						else
							return this->CEntityLayer::setVisibilityFilter(visible, ids);
					}
					virtual ev_bool setVisibilityFilter(_in ev_bool visible, _in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback(visible, id);
							return returnValue;
						}
						else
							return this->CEntityLayer::setVisibilityFilter(visible, id);
					}
					virtual ev_bool setVisibilityFilter2(_in ev_bool visible, _in const EarthView::World::Core::IntVector& ids)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
							return returnValue;
						}
						else
							return this->CEntityLayer::setVisibilityFilter2(visible, ids);
					}
					virtual ev_bool setSubEntityVisibility(_in ev_bool visible, _in ev_uint32 id, _in const ev_uint32& subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback(visible, id, subEntityIndex);
							return returnValue;
						}
						else
							return this->CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
					}
					virtual ev_bool setSubEntityVisibility(_in ev_bool visible, _in ev_uint32 id, _in const EarthView::World::Core::IntVector& subEntityIndexVector)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback(visible, id, &subEntityIndexVector);
							return returnValue;
						}
						else
							return this->CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndexVector);
					}
					virtual ev_bool getVisibilityFilter(_inout ev_bool& visible, _out EarthView::World::Core::IntVector& ids)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
							return returnValue;
						}
						else
							return this->CEntityLayer::getVisibilityFilter(visible, ids);
					}
					virtual ev_bool getVisibilityFilter(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEntityLayer::getVisibilityFilter(id);
					}
					virtual ev_bool getSubEntityVisibility(_in ev_uint32 id, _in const ev_uint32& subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback(id, subEntityIndex);
							return returnValue;
						}
						else
							return this->CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
					}
					virtual ev_bool getSubEntityVisibility(_in ev_uint32 id, _in ev_bool visible, _out EarthView::World::Core::IntVector& subEntityIndexVector)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback(id, visible, &subEntityIndexVector);
							return returnValue;
						}
						else
							return this->CEntityLayer::getSubEntityVisibility(id, visible, subEntityIndexVector);
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEntityLayer::getVisibleObjectPtr(id);
					}
					virtual EarthView::World::Geometry3D::CVisibleObject* getVisibleObject(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObject* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEntityLayer::getVisibleObject(id);
					}
					virtual EarthView::World::Core::IntVector getAllObjectIDs()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getAllObjectIDs();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CEntityLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEntityLayer::toStream(stream);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEntityLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEntityLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CEntityLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback(camera);
						}
						else
							return this->CEntityLayer::_notifyRefreshed(camera);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CEntityLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CEntityLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_bool getGotoParam(_in ev_uint32 id, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback(id, latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
					}
					virtual void applyModelEnvMapTexture(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback(id);
						}
						else
							return this->CEntityLayer::applyModelEnvMapTexture(id);
					}
					virtual void cancelModelEnvMapTexture(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback(id);
						}
						else
							return this->CEntityLayer::cancelModelEnvMapTexture(id);
					}
					virtual void setMaxEnvMapObjectCount(_in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback(count);
						}
						else
							return this->CEntityLayer::setMaxEnvMapObjectCount(count);
					}
					virtual ev_uint32 getMaxEnvMapObjectCount()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMaxEnvMapObjectCount();
					}
					virtual ev_bool allowApplyEnvMap()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::allowApplyEnvMap();
					}
					virtual void applyEnvMapTexture()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback();
						}
						else
							return this->CEntityLayer::applyEnvMapTexture();
					}
					virtual void cancelEnvMapTexture()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback();
						}
						else
							return this->CEntityLayer::cancelEnvMapTexture();
					}
					virtual void stopRender(_in ev_bool bClearObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback(bClearObject);
						}
						else
							return this->CEntityLayer::stopRender(bClearObject);
					}
					virtual void startRender()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback();
						}
						else
							return this->CEntityLayer::startRender();
					}
					virtual ev_bool isLoadModelNode()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::isLoadModelNode();
					}
					virtual void setLoadModelNode(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback(flag);
						}
						else
							return this->CEntityLayer::setLoadModelNode(flag);
					}
					virtual void _notifyModelLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CEntityLayer::_notifyModelLoaded(object);
					}
					virtual void _notifyModelUnLoaded(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CEntityLayer::_notifyModelUnLoaded(object);
					}
					virtual void _notifyModelPreAttach(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CEntityLayer::_notifyModelPreAttach(object);
					}
					virtual void _notifyModelAttached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CEntityLayer::_notifyModelAttached(object);
					}
					virtual void _notifyModelDetached(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback(object);
						}
						else
							return this->CEntityLayer::_notifyModelDetached(object);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEntityLayer::fromStream(stream);
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr createVisibleObjectPtr(_in EarthView::World::Spatial::GeoDataset::IFeature* ref_f)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback(ref_f);
							return returnValue;
						}
						else
							return this->CEntityLayer::createVisibleObjectPtr(ref_f);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CEntityLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CEntityLayer::setDescription(value);
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CEntityLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getSceneManager();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDataSource();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CEntityLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEntityLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEntityLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEntityLayer::setSpatialReference(ref_sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEntityLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CEntityLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CEntityLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::hasVisibleObject();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasVisibleObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_hasVisibleObject_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::hasVisibleObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCanEdit(can);
					else
						ptrNativeObject->setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAABBox();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getAABBox();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAABBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAABBox();
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
					else
						ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSelectionColour();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSelectionColour();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSelectionColour_CColourValue_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSelectionColour();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isRevShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRevShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isRevShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isRevShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool(void *pObjectXXXX, _in ev_bool revShadow )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setRevShadow(revShadow);
					else
						ptrNativeObject->setRevShadow(revShadow);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setRevShadow_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool revShadow )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setRevShadow(revShadow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isCastShadow();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCastShadow();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isCastShadow_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isCastShadow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool(void *pObjectXXXX, _in ev_bool castShadow )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCastShadow(castShadow);
					else
						ptrNativeObject->setCastShadow(castShadow);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setCastShadow_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool castShadow )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setCastShadow(castShadow);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _inout void* ambient, _inout void* diffuse, _inout void* specular )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64(void *pObjectXXXX, _in ev_real64 modelMipMap )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMipMap(modelMipMap);
					else
						ptrNativeObject->setMipMap(modelMipMap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMipMap_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 modelMipMap )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMipMap(modelMipMap);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMipMap();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMipMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMipMap_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMipMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::checkSafeVisibleDistance(distance);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->checkSafeVisibleDistance(distance);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_checkSafeVisibleDistance_ev_bool_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::checkSafeVisibleDistance(distance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibleDistance(distance);
					else
						ptrNativeObject->setVisibleDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibleDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibleDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getVisibleDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setUnloadBufferDistance(distance);
					else
						ptrNativeObject->setUnloadBufferDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setUnloadBufferDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setUnloadBufferDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getUnloadBufferDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getUnloadBufferDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getUnloadBufferDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getUnloadBufferDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64(void *pObjectXXXX, _in int altitudeMode, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
					else
						ptrNativeObject->setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setAltitudeMode_void_EVAltitudeMode_ev_real64_NoVirtual(void *pObjectXXXX, _in int altitudeMode, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64(void *pObjectXXXX, _inout int& altitudeMode, _inout ev_real64& altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode&)altitudeMode, altitudeValue);
					else
						ptrNativeObject->getAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode&)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitudeMode_void_EVAltitudeMode_ev_real64_NoVirtual(void *pObjectXXXX, _inout int& altitudeMode, _inout ev_real64& altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode&)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isAffectByDem();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAffectByDem();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isAffectByDem_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isAffectByDem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEditAltitude();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEditAltitude();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_canEditAltitude_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::canEditAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitude(pModel);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getAltitude(pModel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAltitude_ev_real64_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAltitude(pModel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(latitude, longitude);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDem(latitude, longitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(pModel);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDem(pModel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getDem_ev_real64_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getDem(pModel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->refresh();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->refresh(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refresh_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refresh(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refreshPosition(pModel);
					else
						ptrNativeObject->refreshPosition(pModel);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_refreshPosition_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::refreshPosition(pModel);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(void *pObjectXXXX, _in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_select_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::select(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(void *pObjectXXXX, _in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_selectComponentBy_CMovableObject_CRay_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in void* ray, _out Real& hitDistance, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, hitDistance, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
					else
						ptrNativeObject->loadVisibleObjectNodeAndMergeBoundingBox();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_loadVisibleObjectNodeAndMergeBoundingBox_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::loadVisibleObjectNodeAndMergeBoundingBox();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility(id);
					else
						ptrNativeObject->clearSubEntityVisibility(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility();
					else
						ptrNativeObject->clearSubEntityVisibility();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_clearSubEntityVisibility_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::clearSubEntityVisibility();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setVisibilityFilter(visible, id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter_ev_bool_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter(visible, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter2(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setVisibilityFilter2(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setVisibilityFilter2_ev_bool_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setVisibilityFilter2(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id, _in const ev_uint32& subEntityIndex )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setSubEntityVisibility(visible, id, subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id, _in const ev_uint32& subEntityIndex )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id, _in const void* subEntityIndexVector )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setSubEntityVisibility(visible, id, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setSubEntityVisibility_ev_bool_ev_bool_ev_uint32_IntVector_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in ev_uint32 id, _in const void* subEntityIndexVector )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setSubEntityVisibility(visible, id, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _inout ev_bool& visible, _out void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _inout ev_bool& visible, _out void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getVisibilityFilter(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibilityFilter_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibilityFilter(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id, _in const ev_uint32& subEntityIndex )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntityVisibility(id, subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in const ev_uint32& subEntityIndex )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector(void *pObjectXXXX, _in ev_uint32 id, _in ev_bool visible, _out void* subEntityIndexVector )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, visible, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntityVisibility(id, visible, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getSubEntityVisibility_ev_bool_ev_uint32_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_bool visible, _out void* subEntityIndexVector )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getSubEntityVisibility(id, visible, *(EarthView::World::Core::IntVector*)subEntityIndexVector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObjectPtr(id);
					EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObject(id);
						return objXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->getVisibleObject(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getVisibleObject(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAllObjectIDs();
						EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getAllObjectIDs();
						EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getAllObjectIDs_IntVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getAllObjectIDs();
					EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera);
					else
						ptrNativeObject->_notifyRefreshed(camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyRefreshed_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyRefreshed(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyWorkDone_void_ev_uint32_ev_uint64_ModelRequestType_ev_bool(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint64 reqID, _in int reqType, _in ev_bool bAbort )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->_notifyWorkDone(id, reqID, (EarthView::World::Spatial3D::ModelRequestType)reqType, bAbort);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
					else
						ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(latitude, longitude, altitude);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getGotoParam(latitude, longitude, altitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(latitude, longitude, altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_uint32 id, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getGotoParam(id, latitude, longitude, altitude);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getGotoParam_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getGotoParam(id, latitude, longitude, altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyModelEnvMapTexture(id);
					else
						ptrNativeObject->applyModelEnvMapTexture(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyModelEnvMapTexture_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyModelEnvMapTexture(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelModelEnvMapTexture(id);
					else
						ptrNativeObject->cancelModelEnvMapTexture(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelModelEnvMapTexture_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelModelEnvMapTexture(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMaxEnvMapObjectCount(count);
					else
						ptrNativeObject->setMaxEnvMapObjectCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setMaxEnvMapObjectCount_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setMaxEnvMapObjectCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMaxEnvMapObjectCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getMaxEnvMapObjectCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxEnvMapObjectCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::getMaxEnvMapObjectCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::allowApplyEnvMap();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->allowApplyEnvMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_allowApplyEnvMap_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::allowApplyEnvMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyEnvMapTexture();
					else
						ptrNativeObject->applyEnvMapTexture();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_applyEnvMapTexture_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::applyEnvMapTexture();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelEnvMapTexture();
					else
						ptrNativeObject->cancelEnvMapTexture();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_cancelEnvMapTexture_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::cancelEnvMapTexture();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool(void *pObjectXXXX, _in ev_bool bClearObject )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::stopRender(bClearObject);
					else
						ptrNativeObject->stopRender(bClearObject);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_stopRender_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bClearObject )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::stopRender(bClearObject);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::startRender();
					else
						ptrNativeObject->startRender();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_startRender_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::startRender();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isLoadModelNode();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoadModelNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_isLoadModelNode_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::isLoadModelNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLoadModelNode(flag);
					else
						ptrNativeObject->setLoadModelNode(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_setLoadModelNode_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::setLoadModelNode(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_addModelStateListener_void_CModelStateListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CModelStateListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->addModelStateListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_removeModelStateListener_void_CModelStateListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CModelStateListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->removeModelStateListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelLoaded(object);
					else
						ptrNativeObject->_notifyModelLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelLoaded_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelUnLoaded(object);
					else
						ptrNativeObject->_notifyModelUnLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelUnLoaded_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelUnLoaded(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelPreAttach(object);
					else
						ptrNativeObject->_notifyModelPreAttach(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelPreAttach_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelPreAttach(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelAttached(object);
					else
						ptrNativeObject->_notifyModelAttached(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelAttached_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelAttached(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelDetached(object);
					else
						ptrNativeObject->_notifyModelDetached(object);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer__notifyModelDetached_void_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* object )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::_notifyModelDetached(object);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					if (dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CEntityLayerProxy* ptr = dynamic_cast<CEntityLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEntityLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_ModelCommand_modelID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ModelCommand* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->modelID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_ModelCommand_commandType_ModelCommandType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ModelCommand* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelCommandType objXXXX = ptrNativeObject->commandType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ModelCommand_setSubIndexs_void_Int3Vector(void *pObjectXXXX, _in const void* subIndexs )
				{
					EarthView::World::Spatial3D::Atlas::ModelCommand* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjectXXXX;
					ptrNativeObject->setSubIndexs(*(EarthView::World::Core::Int3Vector*)subIndexs);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Atlas_ModelCommand_getSubIndexs_Int3Vector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ModelCommand* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ModelCommand*) pObjectXXXX;
					const EarthView::World::Core::Int3Vector& objXXXX = ptrNativeObject->getSubIndexs();
					const EarthView::World::Core::Int3Vector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
