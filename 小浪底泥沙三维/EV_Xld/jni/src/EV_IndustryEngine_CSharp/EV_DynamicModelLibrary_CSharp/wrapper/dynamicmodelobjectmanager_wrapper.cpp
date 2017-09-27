/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicmodelobjectmanager.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback)(_in char*& name, _in int altitudeMode);
			typedef int  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback)(_in char*& name, _in const void* point);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback)(_in const ev_bool& needUpdate);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback)();
			class CDynamicModelObjectManagerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback;
			public:
				CDynamicModelObjectManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObjectManager(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback = pCallback;
				}
				virtual void setGlobeNodeTrackAltitudeMode(_in const EVString& name, _in EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback(name_Char, (int)altitudeMode);
					}
					else
						return this->CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name, altitudeMode);
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode returnValue = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name);
				}
				virtual void removeAllTrackTrailPoint(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicModelObjectManager::removeAllTrackTrailPoint(name);
				}
				virtual void addTrackTrailPoint(_in const EVString& name, _in const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback(name_Char, &point);
					}
					else
						return this->CDynamicModelObjectManager::addTrackTrailPoint(name, point);
				}
				virtual void refreshTrackTrail()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback();
					}
					else
						return this->CDynamicModelObjectManager::refreshTrackTrail();
				}
				virtual void setNeedUpdate(_in const ev_bool& needUpdate)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback(needUpdate);
					}
					else
						return this->CDynamicModelObjectManager::setNeedUpdate(needUpdate);
				}
				virtual ev_bool getNeedUpdate() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObjectManager::getNeedUpdate();
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicModelObjectManagerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_push_ev_bool_EVString_CDynamicModelObject(void *pObjectXXXX, _in const char* key, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_OperatorIndex_CDynamicModelObject_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap& objYYYY = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_get_CDynamicModelObject_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_clear_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIteratorPair_second( void *pObjectXXXX, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValue_CDynamicModelObject(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject**  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_nextValuePtr_CDynamicModelObject(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_next_CDynamicModelObject(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getBegin_CDynamicModelObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getEnd_CDynamicModelObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_CDynamicModelObjectIterator_getCurrent_CDynamicModelObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const char* meshName, _in int modelType, _in ev_bool immediateRefresh )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshName1, (EarthView::World::Spatial3D::ModelType)modelType, immediateRefresh);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const char* meshName, _in int modelType, _in ev_bool immediateRefresh, _in ev_bool onLineModeEnable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshName1, (EarthView::World::Spatial3D::ModelType)modelType, immediateRefresh, onLineModeEnable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_EVString_ModelType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const char* meshName, _in int modelType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshName1, (EarthView::World::Spatial3D::ModelType)modelType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const ev_uint32& meshIndex, _in int modelType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshIndex, (EarthView::World::Spatial3D::ModelType)modelType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const ev_uint32& meshIndex, _in int modelType, _in ev_bool immediateRefresh, _in ev_bool onLineModeEnable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshIndex, (EarthView::World::Spatial3D::ModelType)modelType, immediateRefresh, onLineModeEnable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelObject_ev_bool_IDataSource_EVString_ev_uint32_ModelType_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource, _in const char* name, _in const ev_uint32& meshIndex, _in int modelType, _in ev_bool immediateRefresh )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addDynamicModelObject(ref_modelDataSource, name1, meshIndex, (EarthView::World::Spatial3D::ModelType)modelType, immediateRefresh);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject, _in const char* name, _in void* subEntityIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addSubEntityDynamicModelObject(ref_modelObject, name1, *(EarthView::World::Core::IntVector*)subEntityIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject, _in const char* name, _in void* subEntityIndex, _in ev_bool immediateRefresh )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addSubEntityDynamicModelObject(ref_modelObject, name1, *(EarthView::World::Core::IntVector*)subEntityIndex, immediateRefresh);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addSubEntityDynamicModelObject_ev_bool_CDynamicModelObject_EVString_IntVector_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject, _in const char* name, _in void* subEntityIndex, _in ev_bool immediateRefresh, _in ev_bool onLineModeEnable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addSubEntityDynamicModelObject(ref_modelObject, name1, *(EarthView::World::Core::IntVector*)subEntityIndex, immediateRefresh, onLineModeEnable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelObject_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeDynamicModelObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObject_CDynamicModelObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->getDynamicModelObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_existDynamicModelObject_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existDynamicModelObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectEnabledToGetHeading_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& isEnable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setDynamicModelObjectEnabledToGetHeading(name1, isEnable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectEnabledToGetHeading_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDynamicModelObjectEnabledToGetHeading(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelManagerListener_void_CDynamicModelManagerListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* ref_listener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setDynamicModelManagerListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeDynamicModelManagerListener_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->removeDynamicModelManagerListener();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoints_void_EVString_CGlobeControlPointSet(void *pObjectXXXX, _in const char* name, _inout void* controlPoints )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addDynamicModelGlobeTrackPoints(name1, *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*)controlPoints);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeNodeTrackPoints_void_EVString_CGlobeControlPointMap(void *pObjectXXXX, _in const char* name, _inout void* controlPoints )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addDynamicModelGlobeNodeTrackPoints(name1, *(EarthView::World::Spatial3D::CGlobeControlPointMap*)controlPoints);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelGlobeNodeTrackPoints_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->clearAllDynamicModelGlobeNodeTrackPoints(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParamSet(void *pObjectXXXX, _in const char* name, _inout void* cameraanimations )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addDynamicModelCameraTrackPoints(name1, *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*)cameraanimations);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelGlobeTrackPoint_void_EVString_CGlobeControlPoint(void *pObjectXXXX, _in const char* name, _in void* controlPoint )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addDynamicModelGlobeTrackPoint(name1, *(EarthView::World::Spatial3D::CGlobeControlPoint*)controlPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addDynamicModelCameraTrackPoints_void_EVString_CCameraAnimationParam(void *pObjectXXXX, _in const char* name, _in void* cameraanimation )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addDynamicModelCameraTrackPoints(name1, *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)cameraanimation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_clearAllDynamicModelCameraNodeTrackPoints_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->clearAllDynamicModelCameraNodeTrackPoints(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setTrackTrailVisible(name1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTrackTrailVisible(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayPointNum_void_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in const ev_int32& number )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setTrackTrailDisplayPointNum(name1, number);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayPointNum_ev_int32_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTrackTrailDisplayPointNum(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSymbol_void_EVString_ISymbol(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::Display::ISymbol* trackTrailSymbol )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setTrackTrailSymbol(name1, trackTrailSymbol);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsTrackTrailHighLine_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& isHighLine )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setIsTrackTrailHighLine(name1, isHighLine);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsTrackTrailHighLine_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsTrackTrailHighLine(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineColorInfo_void_EVString_CRgbColor_CRgbColor(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setHighLineColorInfo(name1, staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setHighLineDistance_void_EVString_ev_real64(void *pObjectXXXX, _in const char* name, _in const ev_real64& highLineDistance )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setHighLineDistance(name1, highLineDistance);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getHighLineDistance_Real_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getHighLineDistance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSymbol_ISymbol_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTrackTrailSymbol(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailSpatialReference_void_EVString_ISpatialReference(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setTrackTrailSpatialReference(name1, ref_sr);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailSpatialReference_ISpatialReference_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getTrackTrailSpatialReference(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setTrackTrailDisplayMode_void_EVString_EVDisplayMode(void *pObjectXXXX, _in const char* name, _in int displayMode )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setTrackTrailDisplayMode(name1, (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode)displayMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getTrackTrailDisplayMode_EVDisplayMode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->getTrackTrailDisplayMode(name1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonVisible(name1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getScutcheonVisible(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextColor_void_EVString_CColourValue(void *pObjectXXXX, _in const char* modelName, _in const void* textColor )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonTextColor(modelName1, *(EarthView::World::Graphic::CColourValue*)textColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonTextColor_CColourValue_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getScutcheonTextColor(modelName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonCaption_void_EVString_EVString(void *pObjectXXXX, _in const char* modelName, _in const char* caption )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::World::Core::ev_string caption1 = caption;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonCaption(modelName1, caption1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonCaption_EVString_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getScutcheonCaption(modelName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontSize_void_EVString_ev_byte(void *pObjectXXXX, _in const char* modelName, _in ev_byte size )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonFontSize(modelName1, size);
			}
			extern "C" EV_DLL_EXPORT  ev_byte  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontSize_ev_byte_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_byte objXXXX = ptrNativeObject->getScutcheonFontSize(modelName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFontName_void_EVString_EVString(void *pObjectXXXX, _in const char* modelName, _in char* fontName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::World::Core::ev_string fontName1 = fontName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonFontName(modelName1, fontName1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFontName_EVString_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getScutcheonFontName(modelName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineColor_CColourValue_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getScutcheonLineColor(modelName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineColor_void_EVString_CColourValue(void *pObjectXXXX, _in const char* modelName, _in const void* lineColor )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonLineColor(modelName1, *(EarthView::World::Graphic::CColourValue*)lineColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonFrameColor_CColourValue_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getScutcheonFrameColor(modelName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonFrameColor_void_EVString_CColourValue(void *pObjectXXXX, _in const char* modelName, _in const void* frameColor )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonFrameColor(modelName1, *(EarthView::World::Graphic::CColourValue*)frameColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getScutcheonLineLength_CVector3_EVString(void *pObjectXXXX, _in const char* modelName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScutcheonLineLength(modelName1);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonLineLength_void_EVString_CVector3(void *pObjectXXXX, _in const char* modelName, _in const void* lineLength )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonLineLength(modelName1, *(EarthView::World::Spatial::Math::CVector3*)lineLength);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setScutcheonTextureMatName_void_EVString_EVString(void *pObjectXXXX, _in const char* modelName, _in const char* matName )
			{
				EarthView::World::Core::ev_string modelName1 = modelName;
				EarthView::World::Core::ev_string matName1 = matName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setScutcheonTextureMatName(modelName1, matName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setParticleVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setParticleVisible(name1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getParticleVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getParticleVisible(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRibbonTrailVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setRibbonTrailVisible(name1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRibbonTrailVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRibbonTrailVisible(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSceneNode_CSceneNode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_lockGlobeNodeTrackModelObject_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->lockGlobeNodeTrackModelObject(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_unlockGlobeNodeTrackModelObject_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->unlockGlobeNodeTrackModelObject();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockDistance_void_EVString_ev_real64(void *pObjectXXXX, _in const char* name, _in const ev_real64& distance )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setLockDistance(name1, distance);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockDistance_ev_real64_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLockDistance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLockTilt_void_EVString_CDegree(void *pObjectXXXX, _in const char* name, _in const void* tilt )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setLockTilt(name1, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockTilt_CDegree_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getLockTilt(name1);
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockDistance_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& locked )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setIsLockDistance(name1, locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockDistance_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockDistance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockTilt_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& locked )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setIsLockTilt(name1, locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockTilt_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockTilt(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setIsLockHeading_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& locked )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setIsLockHeading(name1, locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getIsLockHeading_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockHeading(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLockedGlobeNodeTrackModelObject_CDynamicModelObject(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->getLockedGlobeNodeTrackModelObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackModelObject_CDynamicModelObject(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* objXXXX = ptrNativeObject->getCameraNodeTrackModelObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackLocalCenter_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* localCenter )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackLocalCenter(name1, *(EarthView::World::Spatial::Math::CVector3*)localCenter);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackLocalCenter_CVector3_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCameraNodeTrackLocalCenter(name1);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategy_void_CDynamicLodStrategy(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ref_lodStrategy )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setLodStrategy(ref_lodStrategy);
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategy_CDynamicLodStrategy(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* objXXXX = ptrNativeObject->getLodStrategy();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setLodStrategyEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setLodStrategyEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getLodStrategyEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLodStrategyEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicModelObjectVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setDynamicModelObjectVisible(name1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDynamicModelObjectVisible(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityVisible_void_EVString_IntVector_ev_bool(void *pObjectXXXX, _in const char* name, _in const void* subEntityVector, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityVisible(name1, *(EarthView::World::Core::IntVector*)subEntityVector, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityVisible_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSubEntityVisible(name1, subEntityIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllParticleVisible_void_EVString_IntVector_ev_bool(void *pObjectXXXX, _in const char* name, _in const void* subEnetityVector, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllParticleVisible(name1, *(EarthView::World::Core::IntVector*)subEnetityVector, visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_IntVector_ev_bool(void *pObjectXXXX, _in const char* name, _in const void* subEnetityVector, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllRibbonTrailVisible(name1, *(EarthView::World::Core::IntVector*)subEnetityVector, visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityParticleVisible_void_EVString_ev_int32_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex, _in const char* particleAliasName, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityParticleVisible(name1, subEntityIndex, particleAliasName1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityParticleVisible_ev_bool_EVString_ev_int32_EVString(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex, _in const char* particleAliasName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSubEntityParticleVisible(name1, subEntityIndex, particleAliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex, _in const char* ribbonTrailName, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string ribbonTrailName1 = ribbonTrailName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllRibbonTrailVisible(name1, subEntityIndex, ribbonTrailName1, visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setSubEntityRibbonTrailVisible_void_EVString_ev_int32_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex, _in const char* ribbonTrailName, _in const ev_bool& visible )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string ribbonTrailName1 = ribbonTrailName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setSubEntityRibbonTrailVisible(name1, subEntityIndex, ribbonTrailName1, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityRibbonTrailVisible_ev_bool_EVString_ev_int32_EVString(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex, _in const char* ribbonTrailName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string ribbonTrailName1 = ribbonTrailName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSubEntityRibbonTrailVisible(name1, subEntityIndex, ribbonTrailName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedRibbonTrailObjectMap_RibbonTrailObjectMap_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getSubEntityBindedRibbonTrailObjectMap(name1, subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityBindedParticleObjectMap_EffectObjectMap_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in const ev_int32& subEntityIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getSubEntityBindedParticleObjectMap(name1, subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getSubEntityCount_ev_int32_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSubEntityCount(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getBindedParticleSubEntityIndexVector_IntVector_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getBindedParticleSubEntityIndexVector(name1);
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackCurrentFrameTime_void_EVString_ev_real64(void *pObjectXXXX, _in const char* name, _in const ev_real64& curKeyFrameTime )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackCurrentFrameTime(name1, curKeyFrameTime);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackCurrentFrameTime_ev_real64_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getGlobeNodeTrackCurrentFrameTime(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackCurrentFrameTime_void_EVString_ev_real64(void *pObjectXXXX, _in const char* name, _in const ev_real64& curKeyFrameTime )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackCurrentFrameTime(name1, curKeyFrameTime);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackCurrentFrameTime_ev_real64_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getCameraNodeTrackCurrentFrameTime(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAllGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->startAllGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAllGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->stopAllGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startGlobeNodeTrack_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->startGlobeNodeTrack(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopGlobeNodeTrack_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->stopGlobeNodeTrack(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseGlobeNodeTrack_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->pauseGlobeNodeTrack(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueGlobeNodeTrack_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->continueGlobeNodeTrack(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startCameraNodeTrack_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->startCameraNodeTrack(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->stopCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->pauseCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->continueCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackIsLoop_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& loop )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackIsLoop(name1, loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackIsLoop_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGlobeNodeTrackIsLoop(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(void *pObjectXXXX, _in const char* name, _in int altitudeMode )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name1, (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
				else
					ptrNativeObject->setGlobeNodeTrackAltitudeMode(name1, (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_void_EVString_AltitudeMode_NoVirtual(void *pObjectXXXX, _in const char* name, _in int altitudeMode )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name1, (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name1);
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->getGlobeNodeTrackAltitudeMode(name1);
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_AltitudeMode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setCameraNodeTrackIsLoop_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& loop )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackIsLoop(name1, loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getCameraNodeTrackIsLoop_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCameraNodeTrackIsLoop(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelScale_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* scale )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setModelScale(name1, *(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelScale_CVector3_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelScale(name1);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelRotateDegree_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* rotateDegree )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setModelRotateDegree(name1, *(EarthView::World::Spatial::Math::CVector3*)rotateDegree);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelRotateDegree_CVector3_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelRotateDegree(name1);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setModelLocalOffsetVector_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* offsetVector )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setModelLocalOffsetVector(name1, *(EarthView::World::Spatial::Math::CVector3*)offsetVector);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getModelLocalOffsetVector_CVector3_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelLocalOffsetVector(name1);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setFlySpeed_void_EVString_ev_real64(void *pObjectXXXX, _in const char* name, _in const ev_real64& speed )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setFlySpeed(name1, speed);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getFlySpeed_ev_real64_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getFlySpeed(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setInterpolate_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& interpolate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setInterpolate(name1, interpolate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getInterpolate_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getInterpolate(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setReflectable_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& enable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setReflectable(name1, enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getReflectable_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getReflectable(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setRefractable_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool& enable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setRefractable(name1, enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getRefractable_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRefractable(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectIterator_CDynamicModelObjectIterator(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator objXXXX = ptrNativeObject->getDynamicModelObjectIterator();
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pXXXX = new EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setDynamicGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setDynamicGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* objXXXX = ptrNativeObject->getDynamicGlobeNodeTrackAnimationListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetLength_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getAnimationsetLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetLength_void_Real(void *pObjectXXXX, _in const Real& length )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setAnimationsetLength(length);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_startAnimationset_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->startAnimationset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_stopAnimationset_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->stopAnimationset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_pauseAnimationset_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->pauseAnimationset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_continueAnimationset_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->continueAnimationset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& curKeyFrameTime )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setAnimationsetTime(curKeyFrameTime);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTime_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getAnimationsetTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setAnimationsetTimeRatio_void_Real(void *pObjectXXXX, _in const Real& timeRatio )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->setAnimationsetTimeRatio(timeRatio);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getAnimationsetTimeRatio_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getAnimationsetTimeRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addEvent(ref_dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->removeEvent(dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addShadeScutcheon_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->addShadeScutcheon(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeShadeScutcheon_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->removeShadeScutcheon(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::removeAllTrackTrailPoint(name1);
				else
					ptrNativeObject->removeAllTrackTrailPoint(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_removeAllTrackTrailPoint_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::removeAllTrackTrailPoint(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(void *pObjectXXXX, _in const char* name, _in const void* point )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::addTrackTrailPoint(name1, *(EarthView::World::Spatial::Geometry::CCoordinate*)point);
				else
					ptrNativeObject->addTrackTrailPoint(name1, *(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_addTrackTrailPoint_void_EVString_CCoordinate_NoVirtual(void *pObjectXXXX, _in const char* name, _in const void* point )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::addTrackTrailPoint(name1, *(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::refreshTrackTrail();
				else
					ptrNativeObject->refreshTrackTrail();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_refreshTrackTrail_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::refreshTrackTrail();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setNeedUpdate(needUpdate);
				else
					ptrNativeObject->setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_setNeedUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getNeedUpdate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getNeedUpdate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectManagerProxy* ptr = dynamic_cast<CDynamicModelObjectManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getNeedUpdate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getNeedUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CReadWriteLock*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectManager_getDynamicModelObjectsLocker_CReadWriteLock(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjectXXXX;
				EarthView::World::Core::CReadWriteLock* objXXXX = ptrNativeObject->getDynamicModelObjectsLocker();
				return objXXXX;
			}
		}
	}
}
