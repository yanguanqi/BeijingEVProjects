/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dataexchangelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback)(_in ev_uint32 totalNum);
				class CDataExchangeListenerProxy : public EarthView::World::Spatial::Convertor::CDataExchangeListener
				{
				private:
					EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback* m_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback;
				public:
					CDataExchangeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataExchangeListener(pList)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32(EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback = pCallback;
					}
					virtual void init(_in ev_uint32 totalNum)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback(totalNum);
						}
						else
							return this->CDataExchangeListener::init(totalNum);
					}
				};
				REGISTER_FACTORY_CLASS(CDataExchangeListenerProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_getTotalNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTotalNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_getFinishedNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getFinishedNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_finishedNumAdded_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->finishedNumAdded();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_setTotalNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 totalNum )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->setTotalNum(totalNum);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 totalNum )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeListenerProxy*>((EarthView::World::Spatial::Convertor::CDataExchangeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchangeListener::init(totalNum);
					else
						ptrNativeObject->init(totalNum);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_Callback* pCallback )
				{
					CDataExchangeListenerProxy* ptr = dynamic_cast<CDataExchangeListenerProxy*>((EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_init_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 totalNum )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchangeListener::init(totalNum);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_isFinished_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFinished();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_stopProcess_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->stopProcess();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_setPause_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setPause(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_isStopped_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isStopped();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_isRunning_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRunning();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_isError_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isError();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeListener_isSuspended_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSuspended();
					return objXXXX;
				}
			}
		}
	}
}
