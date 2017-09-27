/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_logger.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_setInternalDebugging_void_ev_bool(_in ev_bool bOpen )
			{
				EarthView::World::Core::CLogger::setInternalDebugging(bOpen);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CLogger*  _stdcall EarthView_World_Core_CLogger_getInstance_CLogger_ev_string(_in const char* strLoggerName )
			{
				EarthView::World::Core::ev_string strLoggerName1 = strLoggerName;
				EarthView::World::Core::CLogger* objXXXX = EarthView::World::Core::CLogger::getInstance(strLoggerName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CLogger*  _stdcall EarthView_World_Core_CLogger_getInstance_CLogger_ev_string_ev_string(_in const char* strLoggerName, _in const char* strPattern )
			{
				EarthView::World::Core::ev_string strLoggerName1 = strLoggerName;
				EarthView::World::Core::ev_string strPattern1 = strPattern;
				EarthView::World::Core::CLogger* objXXXX = EarthView::World::Core::CLogger::getInstance(strLoggerName1, strPattern1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_getLoggerName_void_ev_string(void *pObjectXXXX, _out char*& strLoggerName )
			{
				EarthView::World::Core::ev_string strLoggerName1 = strLoggerName;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->getLoggerName(strLoggerName1);
				strLoggerName=strLoggerName1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_setLogLevel_void_LOGLEVEL(void *pObjectXXXX, _in const int& level )
			{
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->setLogLevel((EarthView::World::Core::LOGLEVEL&)level);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_CLogger_getLogLevel_LOGLEVEL(void *pObjectXXXX )
			{
				const EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				EarthView::World::Core::LOGLEVEL objXXXX = ptrNativeObject->getLogLevel();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openConsoleAppender_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openConsoleAppender();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openFileAppender_void_ev_string(void *pObjectXXXX, _in const char* strFilename )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openFileAppender(strFilename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openFileAppender_void_ev_string_ev_bool(void *pObjectXXXX, _in const char* strFilename, _in ev_bool bTrunc )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openFileAppender(strFilename1, bTrunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openRollingFileAppender_void_ev_string(void *pObjectXXXX, _in const char* strFilename )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openRollingFileAppender(strFilename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openRollingFileAppender_void_ev_string_ev_uint32(void *pObjectXXXX, _in const char* strFilename, _in ev_uint32 lMaxFileSize )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openRollingFileAppender(strFilename1, lMaxFileSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openRollingFileAppender_void_ev_string_ev_uint32_ev_uint32(void *pObjectXXXX, _in const char* strFilename, _in ev_uint32 lMaxFileSize, _in ev_uint32 nMaxBackupIndex )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openRollingFileAppender(strFilename1, lMaxFileSize, nMaxBackupIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openDailyRollingFileAppender_void_ev_string(void *pObjectXXXX, _in const char* strFilename )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openDailyRollingFileAppender(strFilename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openDailyRollingFileAppender_void_ev_string_LOGSCHEDULE(void *pObjectXXXX, _in const char* strFilename, _in const int& schedule )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openDailyRollingFileAppender(strFilename1, (EarthView::World::Core::LOGSCHEDULE&)schedule);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openDailyRollingFileAppender_void_ev_string_LOGSCHEDULE_ev_uint32(void *pObjectXXXX, _in const char* strFilename, _in const int& schedule, _in ev_uint32 maxBackupIndex )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openDailyRollingFileAppender(strFilename1, (EarthView::World::Core::LOGSCHEDULE&)schedule, maxBackupIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_openSocketAppender_void_ev_string_ev_uint32_ev_string(void *pObjectXXXX, _in const char* strHost, _in ev_uint32 nPort, _in const char* strServerName )
			{
				EarthView::World::Core::ev_string strHost1 = strHost;
				EarthView::World::Core::ev_string strServerName1 = strServerName;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->openSocketAppender(strHost1, nPort, strServerName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_closeAppender_void_APPENDERTYPE_ev_string(void *pObjectXXXX, _in const int& type, _in const char* strFileName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->closeAppender((EarthView::World::Core::APPENDERTYPE&)type, strFileName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CLogger_writeLog_void_LOGLEVEL_ev_string_ev_string_ev_uint32(void *pObjectXXXX, _in const int& level, _in const char* strMsg, _in const char* strFile, _in ev_uint32 nLine )
			{
				EarthView::World::Core::ev_string strMsg1 = strMsg;
				EarthView::World::Core::ev_string strFile1 = strFile;
				EarthView::World::Core::CLogger* ptrNativeObject = (EarthView::World::Core::CLogger*) pObjectXXXX;
				ptrNativeObject->writeLog((EarthView::World::Core::LOGLEVEL&)level, strMsg1, strFile1, nLine);
			}
		}
	}
}
