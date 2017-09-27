/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldataexchangelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback)(_in char*& info);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback)(_in ev_int32 num, _in ev_int32 count);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback)(_in char*& info);
				class CModelDataExchangeListenerProxy : public EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener
				{
				private:
					EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback;
				public:
					CModelDataExchangeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataExchangeListener(pList)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback = pCallback;
					}
					virtual void processLog(_in EVString info)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback(info_Char);
						}
						else
							return this->CModelDataExchangeListener::processLog(info);
					}
					virtual void getCurrentCount(_in ev_int32 num, _in ev_int32 count)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback(num, count);
						}
						else
							return this->CModelDataExchangeListener::getCurrentCount(num, count);
					}
					virtual void pauseOrStop(_in EVString info)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback(info_Char);
						}
						else
							return this->CModelDataExchangeListener::pauseOrStop(info);
					}
				};
				REGISTER_FACTORY_CLASS(CModelDataExchangeListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(void *pObjectXXXX, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::processLog(info1);
					else
						ptrNativeObject->processLog(info1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_Callback* pCallback )
				{
					CModelDataExchangeListenerProxy* ptr = dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_processLog_void_EVString_NoVirtual(void *pObjectXXXX, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::processLog(info1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 num, _in ev_int32 count )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::getCurrentCount(num, count);
					else
						ptrNativeObject->getCurrentCount(num, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelDataExchangeListenerProxy* ptr = dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_getCurrentCount_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 num, _in ev_int32 count )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::getCurrentCount(num, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(void *pObjectXXXX, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::pauseOrStop(info1);
					else
						ptrNativeObject->pauseOrStop(info1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_Callback* pCallback )
				{
					CModelDataExchangeListenerProxy* ptr = dynamic_cast<CModelDataExchangeListenerProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchangeListener_pauseOrStop_void_EVString_NoVirtual(void *pObjectXXXX, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener::pauseOrStop(info1);
				}
			}
		}
	}
}
