/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/laslodgenerator.h"
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback)(_in char*& msg);
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback)();
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback)();
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 total, _in ev_uint32 current);
			class CLasLODGenerateListenerProxy : public EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener
			{
			private:
				EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback* m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback;
				EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback* m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback;
				EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback* m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback;
				EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback;
			public:
				CLasLODGenerateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLasLODGenerateListener(pList)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback = pCallback;
				}
				virtual void processMsg(_in EVString msg)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* msg_Char = msg.makeBuffer();
						m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback(msg_Char);
					}
					else
						return this->CLasLODGenerateListener::processMsg(msg);
				}
				virtual void paused()
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback();
					}
					else
						return this->CLasLODGenerateListener::paused();
				}
				virtual void finished()
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback();
					}
					else
						return this->CLasLODGenerateListener::finished();
				}
				virtual void processProgress(_in ev_uint32 total, _in ev_uint32 current)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback(total, current);
					}
					else
						return this->CLasLODGenerateListener::processProgress(total, current);
				}
			};
			REGISTER_FACTORY_CLASS(CLasLODGenerateListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(void *pObjectXXXX, _in char* msg )
			{
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				if (dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processMsg(msg1);
				else
					ptrNativeObject->processMsg(msg1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Callback* pCallback )
			{
				CLasLODGenerateListenerProxy* ptr = dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_NoVirtual(void *pObjectXXXX, _in char* msg )
			{
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processMsg(msg1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				if (dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::paused();
				else
					ptrNativeObject->paused();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Callback* pCallback )
			{
				CLasLODGenerateListenerProxy* ptr = dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::paused();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				if (dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::finished();
				else
					ptrNativeObject->finished();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Callback* pCallback )
			{
				CLasLODGenerateListenerProxy* ptr = dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::finished();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 total, _in ev_uint32 current )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				if (dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processProgress(total, current);
				else
					ptrNativeObject->processProgress(total, current);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CLasLODGenerateListenerProxy* ptr = dynamic_cast<CLasLODGenerateListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 total, _in ev_uint32 current )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processProgress(total, current);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setBuildQuadtree_void_ev_bool(void *pObjectXXXX, _in ev_bool buildQuadTree )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setBuildQuadtree(buildQuadTree);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getBuildQuadtree_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getBuildQuadtree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool useDoubleSideLight )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setUseDoubleSideLight(useDoubleSideLight);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseDoubleSideLight_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseDoubleSideLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setCombineSubmesh_void_ev_bool(void *pObjectXXXX, _in ev_bool combineSubMesh )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setCombineSubmesh(combineSubMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getCombineSubmesh_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCombineSubmesh();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setToDDS_void_ev_bool(void *pObjectXXXX, _in ev_bool toDDS )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setToDDS(toDDS);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getToDDS_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getToDDS();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setEncode7z_void_ev_bool(void *pObjectXXXX, _in ev_bool encode7z )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setEncode7z(encode7z);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getEncode7z_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEncode7z();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseShareMaterial_void_ev_bool(void *pObjectXXXX, _in ev_bool useshareMaterial )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setUseShareMaterial(useshareMaterial);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseShareMaterial_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseShareMaterial();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_existLODParam_ev_bool_ev_uint8_CLasOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _inout void* param )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existLODParam(level, *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*)param);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_updateLODParam_void_ev_uint8_CLasOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _in void* param )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->updateLODParam(level, *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*)param);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_addLODParam_void_ev_uint8_CLasOptimizeParams(void *pObjectXXXX, _in ev_uint8 level, _in void* param )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->addLODParam(level, *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*)param);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_removeLODParam_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 level )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->removeLODParam(level);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParam_CLasOptimizeParams_ev_uint8(void *pObjectXXXX, _in ev_uint8 level )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams objXXXX = ptrNativeObject->getLODParam(level);
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *pXXXX = new EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParamSize_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLODParamSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_clearLODParam_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->clearLODParam();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_fromXml_void_EVString(void *pObjectXXXX, _in const char* filePath )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->fromXml(filePath1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_toXml_void_EVString(void *pObjectXXXX, _in const char* filePath )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->toXml(filePath1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setLocation(lat, lon, alt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& lat, _inout ev_real64& lon, _inout ev_real64& alt )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->getLocation(lat, lon, alt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 rotW, _in ev_real64 rotX, _in ev_real64 rotY, _in ev_real64 rotZ )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setRotation(rotW, rotX, rotY, rotZ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& rotW, _inout ev_real64& rotX, _inout ev_real64& rotY, _inout ev_real64& rotZ )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->getRotation(rotW, rotX, rotY, rotZ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in void* scale, _in void* rotate, _in void* translate )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setLocalTranform(*(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate, *(EarthView::World::Spatial::Math::CVector3*)translate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _inout void* scale, _inout void* rotate, _inout void* translate )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->getLocalTransform(*(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate, *(EarthView::World::Spatial::Math::CVector3*)translate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_setElevationMinMaxZ_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 elevationMinZ, _in ev_real64 elevationMaxZ )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->setElevationMinMaxZ(elevationMinZ, elevationMaxZ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODParam_getElevationMinMaxZ_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& elevationMinZ, _inout ev_real64& elevationMaxZ )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjectXXXX;
				ptrNativeObject->getElevationMinMaxZ(elevationMinZ, elevationMaxZ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_generate_void_StringVector_EVString_EVString_EVString_EVString_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* dataFiles, _in const char* outputPath, _in const char* name, _in const char* grpName, _in const char* matName, _in ev_bool isAsyn, _in void* box )
			{
				EarthView::World::Core::ev_string outputPath1 = outputPath;
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string grpName1 = grpName;
				EarthView::World::Core::ev_string matName1 = matName;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				ptrNativeObject->generate(*(EarthView::World::Core::StringVector*)dataFiles, outputPath1, name1, grpName1, matName1, isAsyn, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_addListener_void_CLasLODGenerateListener(void *pObjectXXXX, _in EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* observer )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				ptrNativeObject->addListener(observer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_removeListener_void_CLasLODGenerateListener(void *pObjectXXXX, _in EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener* observer )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				ptrNativeObject->removeListener(observer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_setParam_void_CLasLODParam(void *pObjectXXXX, _inout void* param )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				ptrNativeObject->setParam(*(EarthView::World::SpatialLASConvertProxy::CLasLODParam*)param);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_getParam_CLasLODParam(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam& objXXXX = ptrNativeObject->getParam();
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_stop_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjectXXXX;
				ptrNativeObject->stop();
			}
		}
	}
}
