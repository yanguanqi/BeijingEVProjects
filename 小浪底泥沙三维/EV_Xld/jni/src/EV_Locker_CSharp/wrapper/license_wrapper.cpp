/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "locker/license.h"
namespace EarthView
{
	namespace World
	{
		namespace License
		{
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_License_CLicense_initialize_EVLicenseResult_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				EarthView::World::License::EVLicenseResult objXXXX = ptrNativeObject->initialize((EarthView::World::License::EVLicenseModule)module, value1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_License_CLicense_uninitialize_EVLicenseResult_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				EarthView::World::License::EVLicenseResult objXXXX = ptrNativeObject->uninitialize((EarthView::World::License::EVLicenseModule)module, value1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_License_CLicense_getModuleStatus_EVLicenseStatusType_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				EarthView::World::License::EVLicenseStatusType objXXXX = ptrNativeObject->getModuleStatus((EarthView::World::License::EVLicenseModule)module, value1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_License_CLicense_getExpiredDate_EVString_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getExpiredDate((EarthView::World::License::EVLicenseModule)module, value1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_License_CLicense_isOffical_ev_bool_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isOffical((EarthView::World::License::EVLicenseModule)module, value1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_License_CLicense_getModuleError_EVString_EVLicenseModule_EVString(void *pObjectXXXX, _in int module, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::License::CLicense* ptrNativeObject = (EarthView::World::License::CLicense*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getModuleError((EarthView::World::License::EVLicenseModule)module, value1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_License_CWebLicense_getModuleStatus_EVLicenseStatusType_EVString_EVString_EVString(void *pObjectXXXX, _in const char* ip, _in const char* port, _in const char* module )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Core::ev_string port1 = port;
				EarthView::World::Core::ev_string module1 = module;
				EarthView::World::License::CWebLicense* ptrNativeObject = (EarthView::World::License::CWebLicense*) pObjectXXXX;
				EarthView::World::License::EVLicenseStatusType objXXXX = ptrNativeObject->getModuleStatus(ip1, port1, module1);
				return (int)objXXXX;
			}
		}
	}
}
