/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasconvert.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace SpatialLASConvertProxy
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverter_setLASPaths_void_StringVector(void *pObjectXXXX, _in const void* lasPaths )
			{
				EarthView::World::SpatialLASConvertProxy::CLASConverter* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjectXXXX;
				ptrNativeObject->setLASPaths(*(EarthView::World::Core::StringVector*)lasPaths);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverter_setConvertListener_void_CLASConverterListener(void *pObjectXXXX, _in EarthView::World::SpatialLASConvertProxy::CLASConverterListener* listener )
			{
				EarthView::World::SpatialLASConvertProxy::CLASConverter* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjectXXXX;
				ptrNativeObject->setConvertListener(listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverter_getSpatialReference_CSpatialReference_EVString(_in const char* lasPath )
			{
				EarthView::World::Core::ev_string lasPath1 = lasPath;
				EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::SpatialLASConvertProxy::CLASConverter::getSpatialReference(lasPath1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverter_stopConvert_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLASConverter* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjectXXXX;
				ptrNativeObject->stopConvert();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverter_convertLas_ev_bool_CSpatialReference_EVString_ev_bool_EVString_ev_bool_CLasLODParam(void *pObjectXXXX, _in EarthView::World::Spatial::Utility::CSpatialReference* srcSr, _in const char* outPath, _in ev_bool isMerge, _in const char* name, _in ev_bool isLod, _inout void* param )
			{
				EarthView::World::Core::ev_string outPath1 = outPath;
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::SpatialLASConvertProxy::CLASConverter* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->convertLas(srcSr, outPath1, isMerge, name1, isLod, *(EarthView::World::SpatialLASConvertProxy::CLasLODParam*)param);
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback)(_in char*& totalInfo, _in ev_int32 totalPercent, _in char*& lasInfo, _in ev_int32 lasPercent);
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback)(_inout char*& totalInfo, _inout ev_int32& totalPercent, _inout char*& lasInfo, _inout ev_int32& lasPercent);
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback)(_in char*& msg);
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback)();
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback)();
			typedef void  ( _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 total, _in ev_uint32 current);
			class CLASConverterListenerProxy : public EarthView::World::SpatialLASConvertProxy::CLASConverterListener
			{
			private:
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback;
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback;
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback;
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback;
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback;
				EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback;
			public:
				CLASConverterListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLASConverterListener(pList)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback = NULL;
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32(EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback = pCallback;
				}
				virtual void setInformation(_in const EVString& totalInfo, _in ev_int32 totalPercent, _in const EVString& lasInfo, _in ev_int32 lasPercent)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* totalInfo_Char = totalInfo.makeBuffer();
						char* lasInfo_Char = lasInfo.makeBuffer();
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback(totalInfo_Char, totalPercent, lasInfo_Char, lasPercent);
					}
					else
						return this->CLASConverterListener::setInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
				virtual void getInformation(_inout EVString& totalInfo, _inout ev_int32& totalPercent, _inout EVString& lasInfo, _inout ev_int32& lasPercent)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* totalInfo_Char = totalInfo.makeBuffer();
						char* lasInfo_Char = lasInfo.makeBuffer();
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback(totalInfo_Char, totalPercent, lasInfo_Char, lasPercent);
						totalInfo = totalInfo_Char;
						if(totalInfo_Char != NULL){ delete[] totalInfo_Char;totalInfo_Char = NULL;}
						lasInfo = lasInfo_Char;
						if(lasInfo_Char != NULL){ delete[] lasInfo_Char;lasInfo_Char = NULL;}
					}
					else
						return this->CLASConverterListener::getInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
				virtual void processMsg(_in EVString msg)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* msg_Char = msg.makeBuffer();
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback(msg_Char);
					}
					else
						return this->CLASConverterListener::processMsg(msg);
				}
				virtual void paused()
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback();
					}
					else
						return this->CLASConverterListener::paused();
				}
				virtual void finished()
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback();
					}
					else
						return this->CLASConverterListener::finished();
				}
				virtual void processProgress(_in ev_uint32 total, _in ev_uint32 current)
				{
					if(m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback(total, current);
					}
					else
						return this->CLASConverterListener::processProgress(total, current);
				}
			};
			REGISTER_FACTORY_CLASS(CLASConverterListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(void *pObjectXXXX, _in const char* totalInfo, _in ev_int32 totalPercent, _in const char* lasInfo, _in ev_int32 lasPercent )
			{
				EarthView::World::Core::ev_string totalInfo1 = totalInfo;
				EarthView::World::Core::ev_string lasInfo1 = lasInfo;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX;
				if (dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::setInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
				else
					ptrNativeObject->setInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_setInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* totalInfo, _in ev_int32 totalPercent, _in const char* lasInfo, _in ev_int32 lasPercent )
			{
				EarthView::World::Core::ev_string totalInfo1 = totalInfo;
				EarthView::World::Core::ev_string lasInfo1 = lasInfo;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::setInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(void *pObjectXXXX, _inout char*& totalInfo, _inout ev_int32& totalPercent, _inout char*& lasInfo, _inout ev_int32& lasPercent )
			{
				EarthView::World::Core::ev_string totalInfo1 = totalInfo;
				EarthView::World::Core::ev_string lasInfo1 = lasInfo;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX;
				if (dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::getInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
				else
					ptrNativeObject->getInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
				totalInfo=totalInfo1.makeBuffer();lasInfo=lasInfo1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLASConverterListener_getInformation_void_EVString_ev_int32_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _inout char*& totalInfo, _inout ev_int32& totalPercent, _inout char*& lasInfo, _inout ev_int32& lasPercent )
			{
				EarthView::World::Core::ev_string totalInfo1 = totalInfo;
				EarthView::World::Core::ev_string lasInfo1 = lasInfo;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::getInformation(totalInfo1, totalPercent, lasInfo1, lasPercent);
				totalInfo=totalInfo1.makeBuffer();lasInfo=lasInfo1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processMsg_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_paused_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_finished_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CLASConverterListenerProxy* ptr = dynamic_cast<CLASConverterListenerProxy*>((EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_SpatialLASConvertProxy_CLASConverterListener_processProgress_void_ev_uint32_ev_uint32(pCallback);
				}
			}
		}
	}
}
