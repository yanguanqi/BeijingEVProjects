/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlaymanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall Get_EarthView_World_Graphic_CViewportInformation_mviewPort( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformation* ptrNativeObject = (EarthView::World::Graphic::CViewportInformation*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->mviewPort;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CViewportInformation_mviewPort( void *pObjectXXXX, EarthView::World::Graphic::CViewport*  value )
			{
				((EarthView::World::Graphic::CViewportInformation*)pObjectXXXX)->mviewPort = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CViewportInformation_mlastViewPortWidth( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformation* ptrNativeObject = (EarthView::World::Graphic::CViewportInformation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mlastViewPortWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CViewportInformation_mlastViewPortWidth( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CViewportInformation*)pObjectXXXX)->mlastViewPortWidth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CViewportInformation_mlastViewPortHeight( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformation* ptrNativeObject = (EarthView::World::Graphic::CViewportInformation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mlastViewPortHeight;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CViewportInformation_mlastViewPortHeight( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CViewportInformation*)pObjectXXXX)->mlastViewPortHeight = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CViewportInformation_mlastOrientationMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformation* ptrNativeObject = (EarthView::World::Graphic::CViewportInformation*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mlastOrientationMode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CViewportInformation_mlastOrientationMode( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CViewportInformation*)pObjectXXXX)->mlastOrientationMode = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_push_back_void_CViewportInformation(void *pObjectXXXX, _in EarthView::World::Graphic::CViewportInformation*& ref_t )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewportInformation*  _stdcall EarthView_World_Graphic_CViewportInformationVector_front_CViewportInformation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				EarthView::World::Graphic::CViewportInformation* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewportInformation*  _stdcall EarthView_World_Graphic_CViewportInformationVector_back_CViewportInformation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				EarthView::World::Graphic::CViewportInformation* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_insert_void_ev_uint32_CViewportInformation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CViewportInformation*& ref_t )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CViewportInformationVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewportInformation*  _stdcall EarthView_World_Graphic_CViewportInformationVector_OperatorIndex_CViewportInformation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CViewportInformationVector& objYYYY = *(EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				EarthView::World::Graphic::CViewportInformation* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewportInformation*  _stdcall EarthView_World_Graphic_CViewportInformationVector_at_CViewportInformation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				EarthView::World::Graphic::CViewportInformation* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CViewportInformationVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CViewportInformationVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CViewportInformationVector* ptrNativeObject = (EarthView::World::Graphic::CViewportInformationVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback)();
			class COverlayManagerProxy : public EarthView::World::Graphic::COverlayManager
			{
			private:
				EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback;
			public:
				COverlayManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayManager(pList)
				{
					m_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector(EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real(EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->COverlayManager::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->COverlayManager::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->COverlayManager::getLoadingOrder();
				}
			};
			REGISTER_FACTORY_CLASS(COverlayManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_COverlayManager_getSingleton_COverlayManager( )
			{
				EarthView::World::Graphic::COverlayManager& objXXXX = EarthView::World::Graphic::COverlayManager::getSingleton();
				EarthView::World::Graphic::COverlayManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayManager*  _stdcall EarthView_World_Graphic_COverlayManager_getSingletonPtr_COverlayManager( )
			{
				EarthView::World::Graphic::COverlayManager* objXXXX = EarthView::World::Graphic::COverlayManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_push_ev_bool_EVString_COverlay(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Graphic::COverlay*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_OperatorIndex_COverlay_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMap& objYYYY = *(EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_get_COverlay_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_COverlayManager_OverlayPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COverlayManager_OverlayPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall Get_EarthView_World_Graphic_COverlayManager_OverlayPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayPair*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COverlayManager_OverlayPair_second( void *pObjectXXXX, EarthView::World::Graphic::COverlay*  value )
			{
				((EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_nextValue_COverlay(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay**  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_nextValuePtr_COverlay(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlay** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_next_COverlay(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_getBegin_OverlayPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::COverlayManager::OverlayPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_getEnd_OverlayPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::COverlayManager::OverlayPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayMapIterator_getCurrent_OverlayPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::COverlayManager::OverlayPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_push_ev_bool_EVString_COverlayElement(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Graphic::COverlayElement*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_OperatorIndex_COverlayElement_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::COverlayManager::ElementMap& objYYYY = *(EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_get_COverlayElement_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_ElementMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::ElementMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_COverlayManager_OverlaymanagerElementPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COverlayManager_OverlaymanagerElementPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall Get_EarthView_World_Graphic_COverlayManager_OverlaymanagerElementPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COverlayManager_OverlaymanagerElementPair_second( void *pObjectXXXX, EarthView::World::Graphic::COverlayElement*  value )
			{
				((EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_nextValue_COverlayElement(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement**  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_nextValuePtr_COverlayElement(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_next_COverlayElement(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_getBegin_OverlaymanagerElementPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_getEnd_OverlaymanagerElementPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_TemplateIterator_getCurrent_OverlaymanagerElementPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_push_ev_bool_EVString_COverlayElementFactory(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Graphic::COverlayElementFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElementFactory*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_OperatorIndex_COverlayElementFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap& objYYYY = *(EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::COverlayElementFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElementFactory*  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_get_COverlayElementFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElementFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_OverlayFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap* ptrNativeObject = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_removeViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* vp )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->removeViewport(vp);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				if (dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayManager::getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_Callback* pCallback )
			{
				COverlayManagerProxy* ptr = dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_getScriptPatterns_StringVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayManager::getScriptPatterns();
				const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				if (dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COverlayManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
				else
					ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				COverlayManagerProxy* ptr = dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COverlayManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				if (dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayManager::getLoadingOrder();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLoadingOrder();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_Callback* pCallback )
			{
				COverlayManagerProxy* ptr = dynamic_cast<COverlayManagerProxy*>((EarthView::World::Graphic::COverlayManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlayManager_getLoadingOrder_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlayManager::getLoadingOrder();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_create_COverlay_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->create(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_create_COverlay_EVString_CSceneManager(void *pObjectXXXX, _in const char* name, _in EarthView::World::Graphic::CSceneManager* ref_owner )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->create(name1, ref_owner);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall EarthView_World_Graphic_COverlayManager_getByName_COverlay_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->getByName(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroy_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroy(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroy_void_COverlay(void *pObjectXXXX, _in EarthView::World::Graphic::COverlay* overlay )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroy(overlay);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyAll_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyAll();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_COverlayManager_getOverlayIterator_OverlayMapIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator objXXXX = ptrNativeObject->getOverlayIterator();
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pXXXX = new EarthView::World::Graphic::COverlayManager::OverlayMapIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager__queueOverlaysForRendering_void_CCamera_CRenderQueue_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* pQueue, _in EarthView::World::Graphic::CViewport* vp )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->_queueOverlaysForRendering(cam, pQueue, vp);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_hasViewportChanged_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasViewportChanged();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_COverlayManager_getViewportHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getViewportHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_COverlayManager_getViewportWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getViewportWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlayManager_getViewportAspectRatio_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getViewportAspectRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_COverlayManager_getViewportOrientationMode_OrientationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::OrientationMode objXXXX = ptrNativeObject->getViewportOrientationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_createOverlayElement_COverlayElement_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* typeName, _in const char* instanceName, _in ev_bool isTemplate )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(typeName1, instanceName1, isTemplate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_createOverlayElement_COverlayElement_EVString_EVString(void *pObjectXXXX, _in const char* typeName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElement(typeName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_getOverlayElement_COverlayElement_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool isTemplate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->getOverlayElement(name1, isTemplate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_getOverlayElement_COverlayElement_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->getOverlayElement(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_hasOverlayElement_ev_bool_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool isTemplate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasOverlayElement(name1, isTemplate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_hasOverlayElement_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasOverlayElement(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyOverlayElement_void_EVString_ev_bool(void *pObjectXXXX, _in const char* instanceName, _in ev_bool isTemplate )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyOverlayElement(instanceName1, isTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyOverlayElement_void_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyOverlayElement(instanceName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyOverlayElement_void_COverlayElement_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElement* pInstance, _in ev_bool isTemplate )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyOverlayElement(pInstance, isTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyOverlayElement_void_COverlayElement(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElement* pInstance )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyOverlayElement(pInstance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyAllOverlayElements_void_ev_bool(void *pObjectXXXX, _in ev_bool isTemplate )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyAllOverlayElements(isTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_destroyAllOverlayElements_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->destroyAllOverlayElements();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlayManager_addOverlayElementFactory_void_COverlayElementFactory(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElementFactory* ref_elemFactory )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ptrNativeObject->addOverlayElementFactory(ref_elemFactory);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlayManager_getOverlayElementFactoryMap_OverlayFactoryMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap& objXXXX = ptrNativeObject->getOverlayElementFactoryMap();
				const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_createOverlayElementFromTemplate_COverlayElement_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* templateName, _in const char* typeName, _in const char* instanceName, _in ev_bool isTemplate )
			{
				EarthView::World::Core::ev_string templateName1 = templateName;
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElementFromTemplate(templateName1, typeName1, instanceName1, isTemplate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_createOverlayElementFromTemplate_COverlayElement_EVString_EVString_EVString(void *pObjectXXXX, _in const char* templateName, _in const char* typeName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string templateName1 = templateName;
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElementFromTemplate(templateName1, typeName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_cloneOverlayElementFromTemplate_COverlayElement_EVString_EVString(void *pObjectXXXX, _in const char* templateName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string templateName1 = templateName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->cloneOverlayElementFromTemplate(templateName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlayManager_createOverlayElementFromFactory_COverlayElement_EVString_EVString(void *pObjectXXXX, _in const char* typeName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->createOverlayElementFromFactory(typeName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_COverlayManager_getTemplateIterator_TemplateIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				EarthView::World::Graphic::COverlayManager::TemplateIterator objXXXX = ptrNativeObject->getTemplateIterator();
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pXXXX = new EarthView::World::Graphic::COverlayManager::TemplateIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlayManager_isTemplate_ev_bool_EVString(void *pObjectXXXX, _in char* strName )
			{
				EarthView::World::Core::ev_string strName1 = strName;
				const EarthView::World::Graphic::COverlayManager* ptrNativeObject = (EarthView::World::Graphic::COverlayManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTemplate(strName1);
				return objXXXX;
			}
		}
	}
}
