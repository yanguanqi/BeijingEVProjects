package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringUtil extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CStringUtil", new StringUtilClassFactory());
	}

	public StringUtil() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CStringUtil", null);
	}

	native private static void trim_EVString(String str);
	public static void trim(String str)
	{
		String strParamValue = str;
		trim_EVString(strParamValue);
	}
	native private static void trim_EVString_ev_bool(String str, boolean left);
	public static void trim(String str, boolean left)
	{
		String strParamValue = str;
		boolean leftParamValue = left;
		trim_EVString_ev_bool(strParamValue, leftParamValue);
	}
	native private static void trim_EVString_ev_bool_ev_bool(String str, boolean left, boolean right);
	public static void trim(String str, boolean left, boolean right)
	{
		String strParamValue = str;
		boolean leftParamValue = left;
		boolean rightParamValue = right;
		trim_EVString_ev_bool_ev_bool(strParamValue, leftParamValue, rightParamValue);
	}
	native private static long split_EVString(String str);
	public static com.earthview.world.core.StringVector split(String str)
	{
		String strParamValue = str;
		long returnValue = split_EVString(strParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long split_EVString_EVString(String str, String delims);
	public static com.earthview.world.core.StringVector split(String str, String delims)
	{
		String strParamValue = str;
		String delimsParamValue = delims;
		long returnValue = split_EVString_EVString(strParamValue, delimsParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long split_EVString_EVString_ev_uint32(String str, String delims, long maxSplits);
	public static com.earthview.world.core.StringVector split(String str, String delims, long maxSplits)
	{
		String strParamValue = str;
		String delimsParamValue = delims;
		long maxSplitsParamValue = maxSplits;
		long returnValue = split_EVString_EVString_ev_uint32(strParamValue, delimsParamValue, maxSplitsParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long tokenise_EVString(String str);
	public static com.earthview.world.core.StringVector tokenise(String str)
	{
		String strParamValue = str;
		long returnValue = tokenise_EVString(strParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long tokenise_EVString_EVString(String str, String delims);
	public static com.earthview.world.core.StringVector tokenise(String str, String delims)
	{
		String strParamValue = str;
		String delimsParamValue = delims;
		long returnValue = tokenise_EVString_EVString(strParamValue, delimsParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long tokenise_EVString_EVString_EVString(String str, String delims, String doubleDelims);
	public static com.earthview.world.core.StringVector tokenise(String str, String delims, String doubleDelims)
	{
		String strParamValue = str;
		String delimsParamValue = delims;
		String doubleDelimsParamValue = doubleDelims;
		long returnValue = tokenise_EVString_EVString_EVString(strParamValue, delimsParamValue, doubleDelimsParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long tokenise_EVString_EVString_EVString_ev_uint32(String str, String delims, String doubleDelims, long maxSplits);
	public static com.earthview.world.core.StringVector tokenise(String str, String delims, String doubleDelims, long maxSplits)
	{
		String strParamValue = str;
		String delimsParamValue = delims;
		String doubleDelimsParamValue = doubleDelims;
		long maxSplitsParamValue = maxSplits;
		long returnValue = tokenise_EVString_EVString_EVString_ev_uint32(strParamValue, delimsParamValue, doubleDelimsParamValue, maxSplitsParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static void toLowerCase_EVString(String str);
	public static void toLowerCase(String str)
	{
		String strParamValue = str;
		toLowerCase_EVString(strParamValue);
	}
	native private static void toUpperCase_EVString(String str);
	public static void toUpperCase(String str)
	{
		String strParamValue = str;
		toUpperCase_EVString(strParamValue);
	}
	native private static boolean startsWith_EVString_EVString(String str, String pattern);
	public static boolean startsWith(String str, String pattern)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean returnValue = startsWith_EVString_EVString(strParamValue, patternParamValue);
		return returnValue;
	}
	native private static boolean startsWith_EVString_EVString_ev_bool(String str, String pattern, boolean lowerCase);
	public static boolean startsWith(String str, String pattern, boolean lowerCase)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean lowerCaseParamValue = lowerCase;
		boolean returnValue = startsWith_EVString_EVString_ev_bool(strParamValue, patternParamValue, lowerCaseParamValue);
		return returnValue;
	}
	native private static boolean endsWith_EVString_EVString(String str, String pattern);
	public static boolean endsWith(String str, String pattern)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean returnValue = endsWith_EVString_EVString(strParamValue, patternParamValue);
		return returnValue;
	}
	native private static boolean endsWith_EVString_EVString_ev_bool(String str, String pattern, boolean lowerCase);
	public static boolean endsWith(String str, String pattern, boolean lowerCase)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean lowerCaseParamValue = lowerCase;
		boolean returnValue = endsWith_EVString_EVString_ev_bool(strParamValue, patternParamValue, lowerCaseParamValue);
		return returnValue;
	}
	native private static String standardisePath_EVString(String init);
	public static String standardisePath(String init)
	{
		String initParamValue = init;
		String returnValue = standardisePath_EVString(initParamValue);
		return returnValue;
	}
	native private static void splitFilename_EVString_EVString_EVString(String qualifiedName, long outBasename, long outPath);
	public static void splitFilename(String qualifiedName, StringPointer outBasename, StringPointer outPath)
	{
		String qualifiedNameParamValue = qualifiedName;
		long outBasenameParamValue = outBasename.nativeObject.pointer;
		long outPathParamValue = outPath.nativeObject.pointer;
		splitFilename_EVString_EVString_EVString(qualifiedNameParamValue, outBasenameParamValue, outPathParamValue);
	}
	native private static void splitFullFilename_EVString_EVString_EVString_EVString(String qualifiedName, long outBasename, long outExtention, long outPath);
	public static void splitFullFilename(String qualifiedName, StringPointer outBasename, StringPointer outExtention, StringPointer outPath)
	{
		String qualifiedNameParamValue = qualifiedName;
		long outBasenameParamValue = outBasename.nativeObject.pointer;
		long outExtentionParamValue = outExtention.nativeObject.pointer;
		long outPathParamValue = outPath.nativeObject.pointer;
		splitFullFilename_EVString_EVString_EVString_EVString(qualifiedNameParamValue, outBasenameParamValue, outExtentionParamValue, outPathParamValue);
	}
	native private static void splitBaseFilename_EVString_EVString_EVString(String fullName, long outBasename, long outExtention);
	public static void splitBaseFilename(String fullName, StringPointer outBasename, StringPointer outExtention)
	{
		String fullNameParamValue = fullName;
		long outBasenameParamValue = outBasename.nativeObject.pointer;
		long outExtentionParamValue = outExtention.nativeObject.pointer;
		splitBaseFilename_EVString_EVString_EVString(fullNameParamValue, outBasenameParamValue, outExtentionParamValue);
	}
	native private static boolean match_EVString_EVString(String str, String pattern);
	public static boolean match(String str, String pattern)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean returnValue = match_EVString_EVString(strParamValue, patternParamValue);
		return returnValue;
	}
	native private static boolean match_EVString_EVString_ev_bool(String str, String pattern, boolean caseSensitive);
	public static boolean match(String str, String pattern, boolean caseSensitive)
	{
		String strParamValue = str;
		String patternParamValue = pattern;
		boolean caseSensitiveParamValue = caseSensitive;
		boolean returnValue = match_EVString_EVString_ev_bool(strParamValue, patternParamValue, caseSensitiveParamValue);
		return returnValue;
	}
	native private static String replaceAll_EVString_EVString_EVString(String source, String replaceWhat, String replaceWithWhat);
	public static String replaceAll(String source, String replaceWhat, String replaceWithWhat)
	{
		String sourceParamValue = source;
		String replaceWhatParamValue = replaceWhat;
		String replaceWithWhatParamValue = replaceWithWhat;
		String returnValue = replaceAll_EVString_EVString_EVString(sourceParamValue, replaceWhatParamValue, replaceWithWhatParamValue);
		return returnValue;
	}
	native private static String get_BLANK_void();
	public static String get_BLANK()
	{
		String jniValue = get_BLANK_void();
		
		return jniValue;
	}
	
	public StringUtil(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StringUtil(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static StringUtil fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StringUtil obj = null;
 		if(baseObj instanceof StringUtil)
		{
			obj = (StringUtil)baseObj;
		} else {
			obj = new StringUtil(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStringUtil");
			obj.increaseCast();
		}

		return obj;
	}
}
