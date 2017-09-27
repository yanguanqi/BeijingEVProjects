/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/modellodgenerator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace Dataset
			{
			}
		}
	}
	namespace MeshOptimize
	{
		extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_MeshOptimize_CMeshOptimizeData_MeshData( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeData* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeData*) pObjectXXXX;
			EarthView::World::Graphic::CMeshPtr &objXXXX = ptrNativeObject->MeshData;
			EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CMeshOptimizeData_MeshData( void *pObjectXXXX, void*  value )
		{
			((EarthView::MeshOptimize::CMeshOptimizeData*)pObjectXXXX)->MeshData = *(EarthView::World::Graphic::CMeshPtr*)value;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_MeshOptimize_CMeshOptimizeData_AniData( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeData* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeData*) pObjectXXXX;
			EarthView::World::Core::DataStreamPtr &objXXXX = ptrNativeObject->AniData;
			EarthView::World::Core::DataStreamPtr *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CMeshOptimizeData_AniData( void *pObjectXXXX, void*  value )
		{
			((EarthView::MeshOptimize::CMeshOptimizeData*)pObjectXXXX)->AniData = *(EarthView::World::Core::DataStreamPtr*)value;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeData* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeData*) pObjectXXXX;
			EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->LocalMat;
			EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat( void *pObjectXXXX, void*  value )
		{
			((EarthView::MeshOptimize::CMeshOptimizeData*)pObjectXXXX)->LocalMat = *(EarthView::World::Spatial::Math::CMatrix4*)value;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_push_back_void_CMeshOptimizeData(void *pObjectXXXX, _in void* t )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->push_back(*(EarthView::MeshOptimize::CMeshOptimizeData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_push_front_void_CMeshOptimizeData(void *pObjectXXXX, _in void* t )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->push_front(*(EarthView::MeshOptimize::CMeshOptimizeData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_pop_back_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->pop_back();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_pop_front_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->pop_front();
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_front_CMeshOptimizeData(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& objXXXX = ptrNativeObject->front();
			EarthView::MeshOptimize::CMeshOptimizeData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_back_CMeshOptimizeData(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& objXXXX = ptrNativeObject->back();
			EarthView::MeshOptimize::CMeshOptimizeData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_at_CMeshOptimizeData_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& objXXXX = ptrNativeObject->at(pos);
			EarthView::MeshOptimize::CMeshOptimizeData *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_insert_void_ev_uint32_CMeshOptimizeData(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->insert(pos, *(EarthView::MeshOptimize::CMeshOptimizeData*)t);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->remove(pos);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_empty_ev_bool(void *pObjectXXXX )
		{
			const EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->empty();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_size_ev_size_t(void *pObjectXXXX )
		{
			const EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ev_size_t objXXXX = ptrNativeObject->size();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->resize(newSize);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_MeshOptimizeDataList_clear_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::MeshOptimizeDataList* ptrNativeObject = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjectXXXX;
			ptrNativeObject->clear();
		}
		extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeDataSource*) pObjectXXXX;
			EVString objXXXX = ptrNativeObject->ExportName;
			return objXXXX.makeBuffer();
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName( void *pObjectXXXX, char*  value )
		{
			EarthView::World::Core::ev_string value1 = value;
			((EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjectXXXX)->ExportName = value1;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList( void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeDataSource*) pObjectXXXX;
			EarthView::MeshOptimize::MeshOptimizeDataList &objXXXX = ptrNativeObject->MeshDataList;
			EarthView::MeshOptimize::MeshOptimizeDataList *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList( void *pObjectXXXX, void*  value )
		{
			((EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjectXXXX)->MeshDataList = *(EarthView::MeshOptimize::MeshOptimizeDataList*)value;
		}
		typedef void  ( _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback)(_in char*& msg);
		typedef void  ( _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback)();
		typedef void  ( _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback)();
		typedef void  ( _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 total, _in ev_uint32 current);
		class CModelLODGenerateListenerProxy : public EarthView::MeshOptimize::CModelLODGenerateListener
		{
		private:
			EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback* m_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback;
			EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback* m_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback;
			EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback* m_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback;
			EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* m_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback;
		public:
			CModelLODGenerateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelLODGenerateListener(pList)
			{
				m_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback = NULL;
				m_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback = NULL;
				m_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback = NULL;
				m_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback = NULL;
			}
		public:
			ev_void registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback = pCallback;
			}
			ev_void registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback = pCallback;
			}
			ev_void registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback = pCallback;
			}
			ev_void registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback)
			{
				m_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback = pCallback;
			}
			virtual void processMsg(_in EVString msg)
			{
				if(m_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback != NULL && this->isCustomExtend())
				{
					char* msg_Char = msg.makeBuffer();
					m_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback(msg_Char);
				}
				else
					return this->CModelLODGenerateListener::processMsg(msg);
			}
			virtual void paused()
			{
				if(m_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback != NULL && this->isCustomExtend())
				{
					m_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback();
				}
				else
					return this->CModelLODGenerateListener::paused();
			}
			virtual void finished()
			{
				if(m_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback != NULL && this->isCustomExtend())
				{
					m_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback();
				}
				else
					return this->CModelLODGenerateListener::finished();
			}
			virtual void processProgress(_in ev_uint32 total, _in ev_uint32 current)
			{
				if(m_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
				{
					m_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback(total, current);
				}
				else
					return this->CModelLODGenerateListener::processProgress(total, current);
			}
		};
		REGISTER_FACTORY_CLASS(CModelLODGenerateListenerProxy);
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(void *pObjectXXXX, _in char* msg )
		{
			EarthView::World::Core::ev_string msg1 = msg;
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			if (dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::processMsg(msg1);
			else
				ptrNativeObject->processMsg(msg1);
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString( void *pObjectXXXX, EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Callback* pCallback )
		{
			CModelLODGenerateListenerProxy* ptr = dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_NoVirtual(void *pObjectXXXX, _in char* msg )
		{
			EarthView::World::Core::ev_string msg1 = msg;
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::processMsg(msg1);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			if (dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::paused();
			else
				ptrNativeObject->paused();
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void( void *pObjectXXXX, EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Callback* pCallback )
		{
			CModelLODGenerateListenerProxy* ptr = dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_NoVirtual(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::paused();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			if (dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::finished();
			else
				ptrNativeObject->finished();
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void( void *pObjectXXXX, EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Callback* pCallback )
		{
			CModelLODGenerateListenerProxy* ptr = dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_NoVirtual(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::finished();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 total, _in ev_uint32 current )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			if (dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*)ptrNativeObject) != NULL)
				ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::processProgress(total, current);
			else
				ptrNativeObject->processProgress(total, current);
		}
		extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback )
		{
			CModelLODGenerateListenerProxy* ptr = dynamic_cast<CModelLODGenerateListenerProxy*>((EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX);
			if(ptr != NULL)
			{
				ptr->registerCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(pCallback);
			}
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 total, _in ev_uint32 current )
		{
			EarthView::MeshOptimize::CModelLODGenerateListener* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjectXXXX;
			ptrNativeObject->EarthView::MeshOptimize::CModelLODGenerateListener::processProgress(total, current);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setBuildQuadtree_void_ev_bool(void *pObjectXXXX, _in ev_bool buildQuadTree )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setBuildQuadtree(buildQuadTree);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getBuildQuadtree_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getBuildQuadtree();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setUseDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool useDoubleSideLight )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setUseDoubleSideLight(useDoubleSideLight);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getUseDoubleSideLight_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getUseDoubleSideLight();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setUseInstance_void_ev_bool(void *pObjectXXXX, _in ev_bool useInstance )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setUseInstance(useInstance);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getUseInstance_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getUseInstance();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setCombineSubmesh_void_ev_bool(void *pObjectXXXX, _in ev_bool combineSubMesh )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setCombineSubmesh(combineSubMesh);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getCombineSubmesh_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getCombineSubmesh();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setToDDS_void_ev_bool(void *pObjectXXXX, _in ev_bool toDDS )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setToDDS(toDDS);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getToDDS_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getToDDS();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setEncode7z_void_ev_bool(void *pObjectXXXX, _in ev_bool encode7z )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setEncode7z(encode7z);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getEncode7z_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getEncode7z();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setUseShareMaterial_void_ev_bool(void *pObjectXXXX, _in ev_bool useshareMaterial )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setUseShareMaterial(useshareMaterial);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getUseShareMaterial_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getUseShareMaterial();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_existLODParam_ev_bool_ev_uint8_CMeshOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _inout void* param )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->existLODParam(level, *(EarthView::MeshOptimize::CMeshOptimizeParams*)param);
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_updateLODParam_void_ev_uint8_CMeshOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _in void* param )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->updateLODParam(level, *(EarthView::MeshOptimize::CMeshOptimizeParams*)param);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_addLODParam_void_ev_uint8_CMeshOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _in void* param )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->addLODParam(level, *(EarthView::MeshOptimize::CMeshOptimizeParams*)param);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_removeLODParam_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 level )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->removeLODParam(level);
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CModelLODParam_getLODParam_CMeshOptimizeParams_ev_uint8(void *pObjectXXXX, _in ev_uint8 level )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams objXXXX = ptrNativeObject->getLODParam(level);
			EarthView::MeshOptimize::CMeshOptimizeParams *pXXXX = new EarthView::MeshOptimize::CMeshOptimizeParams(objXXXX);
			((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_MeshOptimize_CModelLODParam_getLODParamSize_ev_int32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_int32 objXXXX = ptrNativeObject->getLODParamSize();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_clearLODParam_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->clearLODParam();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_fromXml_void_EVString(void *pObjectXXXX, _in const char* filePath )
		{
			EarthView::World::Core::ev_string filePath1 = filePath;
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->fromXml(filePath1);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_toXml_void_EVString(void *pObjectXXXX, _in const char* filePath )
		{
			EarthView::World::Core::ev_string filePath1 = filePath;
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->toXml(filePath1);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setLocation(lat, lon, alt);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& lat, _inout ev_real64& lon, _inout ev_real64& alt )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->getLocation(lat, lon, alt);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in void* scale, _in void* rotate, _in void* translate )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setLocalTranform(*(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate, *(EarthView::World::Spatial::Math::CVector3*)translate);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _inout void* scale, _inout void* rotate, _inout void* translate )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->getLocalTransform(*(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate, *(EarthView::World::Spatial::Math::CVector3*)translate);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODParam_setTextureQuality_void_ev_bool(void *pObjectXXXX, _in ev_bool quality )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ptrNativeObject->setTextureQuality(quality);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CModelLODParam_getTextureQuality_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODParam* ptrNativeObject = (EarthView::MeshOptimize::CModelLODParam*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getTextureQuality();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_generate_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* localFolderSource, _in const char* dstFolder, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string localFolderSource1 = localFolderSource;
			EarthView::World::Core::ev_string dstFolder1 = dstFolder;
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->generate(localFolderSource1, dstFolder1, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEntityDataset* datasetSource, _in const char* dstFolder, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string dstFolder1 = dstFolder;
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->generate(datasetSource, dstFolder1, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_IntVector_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEntityDataset* datasetSource, _in const char* dstFolder, _in const void* vec, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string dstFolder1 = dstFolder;
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->generate(datasetSource, dstFolder1, *(EarthView::World::Core::IntVector*)vec, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_generate_void_CMeshOptimizeDataSource_EVString_ev_bool(void *pObjectXXXX, _in void* memDataSource, _in const char* dstFolder, _in ev_bool isAsyn )
		{
			EarthView::World::Core::ev_string dstFolder1 = dstFolder;
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->generate(*(EarthView::MeshOptimize::CMeshOptimizeDataSource*)memDataSource, dstFolder1, isAsyn);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_setCollectInfo_void_ev_bool(void *pObjectXXXX, _in ev_bool collect )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->setCollectInfo(collect);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_addListener_void_CModelLODGenerateListener(void *pObjectXXXX, _in EarthView::MeshOptimize::CModelLODGenerateListener* observer )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->addListener(observer);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_removeListener_void_CModelLODGenerateListener(void *pObjectXXXX, _in EarthView::MeshOptimize::CModelLODGenerateListener* observer )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->removeListener(observer);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_setParam_void_CModelLODParam(void *pObjectXXXX, _in void* param )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->setParam(*(EarthView::MeshOptimize::CModelLODParam*)param);
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CModelLODGenerator_getParam_CModelLODParam(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			EarthView::MeshOptimize::CModelLODParam& objXXXX = ptrNativeObject->getParam();
			EarthView::MeshOptimize::CModelLODParam *pXXXX = &objXXXX;
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_MeshOptimize_CModelLODGenerator_getCopyParam_CModelLODParam(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			EarthView::MeshOptimize::CModelLODParam objXXXX = ptrNativeObject->getCopyParam();
			EarthView::MeshOptimize::CModelLODParam *pXXXX = new EarthView::MeshOptimize::CModelLODParam(objXXXX);
			((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
			return (void*)pXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CModelLODGenerator_stop_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CModelLODGenerator* ptrNativeObject = (EarthView::MeshOptimize::CModelLODGenerator*) pObjectXXXX;
			ptrNativeObject->stop();
		}
	}
}
