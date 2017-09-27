/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/obqmerge.h"
namespace EarthView
{
	namespace MeshOptimize
	{
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_setObqCountLowerLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 obqCountLowerLimit )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ptrNativeObject->setObqCountLowerLimit(obqCountLowerLimit);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_getObqCountLowerLimit_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->getObqCountLowerLimit();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_setMinDivideBoundsSize_void_ev_real32(void *pObjectXXXX, _in ev_real32 minDivideSize )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ptrNativeObject->setMinDivideBoundsSize(minDivideSize);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_getMinDivideBoundsSize_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getMinDivideBoundsSize();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_setMergeName_void_EVString(void *pObjectXXXX, _in char* mergeName )
		{
			EarthView::World::Core::ev_string mergeName1 = mergeName;
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ptrNativeObject->setMergeName(mergeName1);
		}
		extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_getMergeName_EVString(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			EVString objXXXX = ptrNativeObject->getMergeName();
			return objXXXX.makeBuffer();
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_getEncode7z_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getEncode7z();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_setTileVisibleMultiplier_void_ev_real32(void *pObjectXXXX, _in ev_real32 multiplier )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ptrNativeObject->setTileVisibleMultiplier(multiplier);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CObqQuadTreeParam_getTileVisibleMultiplier_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqQuadTreeParam* ptrNativeObject = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getTileVisibleMultiplier();
			return objXXXX;
		}
		typedef void  ( _stdcall EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback)(_in char*& msg);
		typedef void  ( _stdcall EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback)();
		typedef void  ( _stdcall EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback)();
		class CObqMergeListenerProxy : public EarthView::MeshOptimize::CObqMergeListener
		{
		private:
			EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback* m_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback;
			EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback* m_EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback;
			EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback* m_EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback;
		public:
			CObqMergeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CObqMergeListener(pList)
			{
				m_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback = NULL;
				m_EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback = NULL;
				m_EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback = NULL;
			}
		public:
			ev_void registerCallback_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback = pCallback;
			}
			ev_void registerCallback_EarthView_MeshOptimize_CObqMergeListener_paused_void(EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback = pCallback;
			}
			ev_void registerCallback_EarthView_MeshOptimize_CObqMergeListener_finished_void(EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback = pCallback;
			}
			virtual void processMsg(_in EVString msg)
			{
				if(m_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback != NULL && this->isCustomExtend())
				{
					char* msg_Char = msg.makeBuffer();
					m_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback(msg_Char);
				}
				else
					return this->CObqMergeListener::processMsg(msg);
			}
			virtual void paused()
			{
				if(m_EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback != NULL && this->isCustomExtend())
				{
					m_EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback();
				}
				else
					return this->CObqMergeListener::paused();
			}
			virtual void finished()
			{
				if(m_EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback != NULL && this->isCustomExtend())
				{
					m_EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback();
				}
				else
					return this->CObqMergeListener::finished();
			}
		};
		REGISTER_FACTORY_CLASS(CObqMergeListenerProxy);
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(void *pObjectXXXX, _in char* msg )
		{
			EarthView::World::Core::ev_string msg1 = msg;
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			if (dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::processMsg(msg1);
			else
				ptrNativeObject->processMsg(msg1);
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString( void *pObjectXXXX, EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_Callback* pCallback )
		{
			CObqMergeListenerProxy* ptr = dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_processMsg_void_EVString_NoVirtual(void *pObjectXXXX, _in char* msg )
		{
			EarthView::World::Core::ev_string msg1 = msg;
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::processMsg(msg1);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_paused_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			if (dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::paused();
			else
				ptrNativeObject->paused();
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_paused_void( void *pObjectXXXX, EarthView_MeshOptimize_CObqMergeListener_paused_void_Callback* pCallback )
		{
			CObqMergeListenerProxy* ptr = dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CObqMergeListener_paused_void(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_paused_void_NoVirtual(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::paused();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_finished_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			if (dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::finished();
			else
				ptrNativeObject->finished();
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CObqMergeListener_finished_void( void *pObjectXXXX, EarthView_MeshOptimize_CObqMergeListener_finished_void_Callback* pCallback )
		{
			CObqMergeListenerProxy* ptr = dynamic_cast<CObqMergeListenerProxy*>((EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CObqMergeListener_finished_void(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeListener_finished_void_NoVirtual(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeListener* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CObqMergeListener::finished();
		}
		extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lat( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			ev_real64 objXXXX = ptrNativeObject->Lat;
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lat( void *pObjectXXXX, ev_real64  value )
		{
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->Lat = value;
		}
		extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_Lon( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			ev_real64 objXXXX = ptrNativeObject->Lon;
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_Lon( void *pObjectXXXX, ev_real64  value )
		{
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->Lon = value;
		}
		extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_Alt( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			ev_real64 objXXXX = ptrNativeObject->Alt;
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_Alt( void *pObjectXXXX, ev_real64  value )
		{
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->Alt = value;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->LocalTrans;
			EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_LocalTrans( void *pObjectXXXX, void*  value )
		{
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->LocalTrans = *(EarthView::World::Spatial::Math::CMatrix4*)value;
		}
		extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			EVString objXXXX = ptrNativeObject->MeshxFilePath;
			return objXXXX.makeBuffer();
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_MeshxFilePath( void *pObjectXXXX, char*  value )
		{
			EarthView::World::Core::ev_string value1 = value;
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->MeshxFilePath = value1;
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_MeshOptimize_CObqMergeInstanceData_EVID( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceData* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceData*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->EVID;
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CObqMergeInstanceData_EVID( void *pObjectXXXX, ev_uint32  value )
		{
			((EarthView::MeshOptimize::CObqMergeInstanceData*)pObjectXXXX)->EVID = value;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_push_back_void_CObqMergeInstanceData(void *pObjectXXXX, _in void* t )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->push_back(*(EarthView::MeshOptimize::CObqMergeInstanceData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_push_front_void_CObqMergeInstanceData(void *pObjectXXXX, _in void* t )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->push_front(*(EarthView::MeshOptimize::CObqMergeInstanceData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_back_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->pop_back();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_pop_front_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->pop_front();
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_front_CObqMergeInstanceData(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& objXXXX = ptrNativeObject->front();
			EarthView::MeshOptimize::CObqMergeInstanceData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_back_CObqMergeInstanceData(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& objXXXX = ptrNativeObject->back();
			EarthView::MeshOptimize::CObqMergeInstanceData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_at_CObqMergeInstanceData_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& objXXXX = ptrNativeObject->at(pos);
			EarthView::MeshOptimize::CObqMergeInstanceData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_insert_void_ev_uint32_CObqMergeInstanceData(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->insert(pos, *(EarthView::MeshOptimize::CObqMergeInstanceData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->remove(pos);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_empty_ev_bool(void *pObjectXXXX )
		{
			const EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->empty();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_size_ev_size_t(void *pObjectXXXX )
		{
			const EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ev_size_t objXXXX = ptrNativeObject->size();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->resize(newSize);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMergeInstanceDataList_clear_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList* ptrNativeObject = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjectXXXX;
			ptrNativeObject->clear();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_merge_void_EVString_OBQRecordInfoList_ev_bool(void *pObjectXXXX, _in const char* srcFolder, _in void* obqRecordInfoList, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string srcFolder1 = srcFolder;
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->merge(srcFolder1, *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*)obqRecordInfoList, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_merge_void_EVString_CObqMergeInstanceDataList_ev_bool(void *pObjectXXXX, _in const char* dstFolder, _in void* dataList, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string dstFolder1 = dstFolder;
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->merge(dstFolder1, *(EarthView::MeshOptimize::CObqMergeInstanceDataList*)dataList, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_merge_void_CStringArray_EVString_EVString_ev_bool(void *pObjectXXXX, _inout void* folders, _in const char* desFolder, _in const char* mergeName, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string desFolder1 = desFolder;
			EarthView::World::Core::ev_string mergeName1 = mergeName;
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->merge(*(EarthView::World::Core::CStringArray*)folders, desFolder1, mergeName1, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_setParam_void_CObqQuadTreeParam(void *pObjectXXXX, _inout void* param )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->setParam(*(EarthView::MeshOptimize::CObqQuadTreeParam*)param);
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CObqMerge_getParam_CObqQuadTreeParam(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			EarthView::MeshOptimize::CObqQuadTreeParam& objXXXX = ptrNativeObject->getParam();
			EarthView::MeshOptimize::CObqQuadTreeParam *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CObqMerge_getCopyParam_CObqQuadTreeParam(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			EarthView::MeshOptimize::CObqQuadTreeParam objXXXX = ptrNativeObject->getCopyParam();
			EarthView::MeshOptimize::CObqQuadTreeParam *pXXXX = new EarthView::MeshOptimize::CObqQuadTreeParam(objXXXX);
			((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_addListener_void_CObqMergeListener(void *pObjectXXXX, _in EarthView::MeshOptimize::CObqMergeListener* observer )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->addListener(observer);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_removeListener_void_CObqMergeListener(void *pObjectXXXX, _in EarthView::MeshOptimize::CObqMergeListener* observer )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->removeListener(observer);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CObqMerge_addMeshxInstance_void_CObqMergeInstanceData(void *pObjectXXXX, _in void* instanceData )
		{
			EarthView::MeshOptimize::CObqMerge* ptrNativeObject = (EarthView::MeshOptimize::CObqMerge*) pObjectXXXX;
			ptrNativeObject->addMeshxInstance(*(EarthView::MeshOptimize::CObqMergeInstanceData*)instanceData);
		}
	}
}
