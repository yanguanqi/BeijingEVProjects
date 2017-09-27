package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Logger extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CLogger", new LoggerClassFactory());
	}

	public Logger(String name, String pattern) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer patternPtr = new BasePointer(pattern);
		list.add("pattern", patternPtr.get());
		Create("CLogger", list);
	}

	native private static void setInternalDebugging_ev_bool(boolean bOpen);
	public static void setInternalDebugging(boolean bOpen)
	{
		boolean bOpenParamValue = bOpen;
		setInternalDebugging_ev_bool(bOpenParamValue);
	}
	native private static long getInstance_ev_string(String strLoggerName);
	public static com.earthview.world.core.Logger getInstance(String strLoggerName)
	{
		String strLoggerNameParamValue = strLoggerName;
		long returnValue = getInstance_ev_string(strLoggerNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Logger __returnValue = new com.earthview.world.core.Logger(CreatedWhenConstruct.CWC_NotToCreate, "CLogger");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Logger)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLogger");
		}
		return __returnValue;
	}
	native private static long getInstance_ev_string_ev_string(String strLoggerName, String strPattern);
	public static com.earthview.world.core.Logger getInstance(String strLoggerName, String strPattern)
	{
		String strLoggerNameParamValue = strLoggerName;
		String strPatternParamValue = strPattern;
		long returnValue = getInstance_ev_string_ev_string(strLoggerNameParamValue, strPatternParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Logger __returnValue = new com.earthview.world.core.Logger(CreatedWhenConstruct.CWC_NotToCreate, "CLogger");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Logger)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLogger");
		}
		return __returnValue;
	}
	native private void getLoggerName_ev_string(long pNativeObject, long strLoggerName);
	public void getLoggerName(StringPointer strLoggerName)
	{
		long strLoggerNameParamValue = strLoggerName.nativeObject.pointer;
		getLoggerName_ev_string(this.nativeObject.pointer, strLoggerNameParamValue);
	}
	native private void setLogLevel_LOGLEVEL(long pNativeObject, int level);
	public void setLogLevel(com.earthview.world.core.LOGLEVEL level)
	{
		int levelParamValue = level.getValue();
		setLogLevel_LOGLEVEL(this.nativeObject.pointer, levelParamValue);
	}
	native private int getLogLevel_void(long pNativeObject);
	public com.earthview.world.core.LOGLEVEL getLogLevel()
	{
		int returnValue = getLogLevel_void(this.nativeObject.pointer);
		return com.earthview.world.core.LOGLEVEL.toEnum(returnValue);
	}
	native private void openConsoleAppender_void(long pNativeObject);
	public void openConsoleAppender()
	{
		openConsoleAppender_void(this.nativeObject.pointer);
	}
	native private void openFileAppender_ev_string(long pNativeObject, String strFilename);
	public void openFileAppender(String strFilename)
	{
		String strFilenameParamValue = strFilename;
		openFileAppender_ev_string(this.nativeObject.pointer, strFilenameParamValue);
	}
	native private void openFileAppender_ev_string_ev_bool(long pNativeObject, String strFilename, boolean bTrunc);
	public void openFileAppender(String strFilename, boolean bTrunc)
	{
		String strFilenameParamValue = strFilename;
		boolean bTruncParamValue = bTrunc;
		openFileAppender_ev_string_ev_bool(this.nativeObject.pointer, strFilenameParamValue, bTruncParamValue);
	}
	native private void openRollingFileAppender_ev_string(long pNativeObject, String strFilename);
	public void openRollingFileAppender(String strFilename)
	{
		String strFilenameParamValue = strFilename;
		openRollingFileAppender_ev_string(this.nativeObject.pointer, strFilenameParamValue);
	}
	native private void openRollingFileAppender_ev_string_ev_uint32(long pNativeObject, String strFilename, long lMaxFileSize);
	public void openRollingFileAppender(String strFilename, long lMaxFileSize)
	{
		String strFilenameParamValue = strFilename;
		long lMaxFileSizeParamValue = lMaxFileSize;
		openRollingFileAppender_ev_string_ev_uint32(this.nativeObject.pointer, strFilenameParamValue, lMaxFileSizeParamValue);
	}
	native private void openRollingFileAppender_ev_string_ev_uint32_ev_uint32(long pNativeObject, String strFilename, long lMaxFileSize, long nMaxBackupIndex);
	public void openRollingFileAppender(String strFilename, long lMaxFileSize, long nMaxBackupIndex)
	{
		String strFilenameParamValue = strFilename;
		long lMaxFileSizeParamValue = lMaxFileSize;
		long nMaxBackupIndexParamValue = nMaxBackupIndex;
		openRollingFileAppender_ev_string_ev_uint32_ev_uint32(this.nativeObject.pointer, strFilenameParamValue, lMaxFileSizeParamValue, nMaxBackupIndexParamValue);
	}
	native private void openDailyRollingFileAppender_ev_string(long pNativeObject, String strFilename);
	public void openDailyRollingFileAppender(String strFilename)
	{
		String strFilenameParamValue = strFilename;
		openDailyRollingFileAppender_ev_string(this.nativeObject.pointer, strFilenameParamValue);
	}
	native private void openDailyRollingFileAppender_ev_string_LOGSCHEDULE(long pNativeObject, String strFilename, int schedule);
	public void openDailyRollingFileAppender(String strFilename, com.earthview.world.core.LOGSCHEDULE schedule)
	{
		String strFilenameParamValue = strFilename;
		int scheduleParamValue = schedule.getValue();
		openDailyRollingFileAppender_ev_string_LOGSCHEDULE(this.nativeObject.pointer, strFilenameParamValue, scheduleParamValue);
	}
	native private void openDailyRollingFileAppender_ev_string_LOGSCHEDULE_ev_uint32(long pNativeObject, String strFilename, int schedule, long maxBackupIndex);
	public void openDailyRollingFileAppender(String strFilename, com.earthview.world.core.LOGSCHEDULE schedule, long maxBackupIndex)
	{
		String strFilenameParamValue = strFilename;
		int scheduleParamValue = schedule.getValue();
		long maxBackupIndexParamValue = maxBackupIndex;
		openDailyRollingFileAppender_ev_string_LOGSCHEDULE_ev_uint32(this.nativeObject.pointer, strFilenameParamValue, scheduleParamValue, maxBackupIndexParamValue);
	}
	native private void openSocketAppender_ev_string_ev_uint32_ev_string(long pNativeObject, String strHost, long nPort, String strServerName);
	public void openSocketAppender(String strHost, long nPort, String strServerName)
	{
		String strHostParamValue = strHost;
		long nPortParamValue = nPort;
		String strServerNameParamValue = strServerName;
		openSocketAppender_ev_string_ev_uint32_ev_string(this.nativeObject.pointer, strHostParamValue, nPortParamValue, strServerNameParamValue);
	}
	native private void closeAppender_APPENDERTYPE_ev_string(long pNativeObject, int type, String strFileName);
	public void closeAppender(com.earthview.world.core.APPENDERTYPE type, String strFileName)
	{
		int typeParamValue = type.getValue();
		String strFileNameParamValue = strFileName;
		closeAppender_APPENDERTYPE_ev_string(this.nativeObject.pointer, typeParamValue, strFileNameParamValue);
	}
	native private void writeLog_LOGLEVEL_ev_string_ev_string_ev_uint32(long pNativeObject, int level, String strMsg, String strFile, long nLine);
	public void writeLog(com.earthview.world.core.LOGLEVEL level, String strMsg, String strFile, long nLine)
	{
		int levelParamValue = level.getValue();
		String strMsgParamValue = strMsg;
		String strFileParamValue = strFile;
		long nLineParamValue = nLine;
		writeLog_LOGLEVEL_ev_string_ev_string_ev_uint32(this.nativeObject.pointer, levelParamValue, strMsgParamValue, strFileParamValue, nLineParamValue);
	}
	public Logger(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Logger(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Logger fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Logger obj = null;
 		if(baseObj instanceof Logger)
		{
			obj = (Logger)baseObj;
		} else {
			obj = new Logger(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLogger");
			obj.increaseCast();
		}

		return obj;
	}
}
