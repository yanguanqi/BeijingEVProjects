package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompiler extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompiler", new ScriptCompilerClassFactory());
	}

	/// Externally accessible types
	///typedef map<EVString,ev_uint32> IdMap;
	public static class IdMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompiler::IdMap", new IdMapClassFactory());
		}

		public IdMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("IdMap", null);
		}

		native private boolean push_EVString_ev_uint32(long pNativeObject, String key, long val);
		public boolean push(String key, long val)
		{
			String keyParamValue = key;
			long valParamValue = val;
			boolean returnValue = push_EVString_ev_uint32(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		public UIntegerPointer OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		public UIntegerPointer get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public IdMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public IdMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static IdMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			IdMap obj = null;
 			if(baseObj instanceof IdMap)
			{
				obj = (IdMap)baseObj;
			} else {
				obj = new IdMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "IdMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IdMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			IdMap emptyInstance = new IdMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// The container for errors
	public static class EVError extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompiler::CError", new EVErrorClassFactory());
		}

		public EVError() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CError", null);
		}

		native private String get_file_void(long pNativeObject);
		public String get_file()
		{
			String jniValue = get_file_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_file_EVString (long pNativeObject, String value);
		public void set_file(String file)
		{
			String fileParamValue = file;
			
			set_file_EVString(this.nativeObject.pointer, fileParamValue);
		}
		
		native private String get_message_void(long pNativeObject);
		public String get_message()
		{
			String jniValue = get_message_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_message_EVString (long pNativeObject, String value);
		public void set_message(String message)
		{
			String messageParamValue = message;
			
			set_message_EVString(this.nativeObject.pointer, messageParamValue);
		}
		
		native private int get_line_void(long pNativeObject);
		public int get_line()
		{
			int jniValue = get_line_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_line_ev_int32 (long pNativeObject, int value);
		public void set_line(int line)
		{
			int lineParamValue = line;
			
			set_line_ev_int32(this.nativeObject.pointer, lineParamValue);
		}
		
		native private long get_code_void(long pNativeObject);
		public long get_code()
		{
			long jniValue = get_code_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_code_ev_uint32 (long pNativeObject, long value);
		public void set_code(long code)
		{
			long codeParamValue = code;
			
			set_code_ev_uint32(this.nativeObject.pointer, codeParamValue);
		}
		
		public EVError(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EVError(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EVError fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EVError obj = null;
 			if(baseObj instanceof EVError)
			{
				obj = (EVError)baseObj;
			} else {
				obj = new EVError(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CError");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EVErrorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EVError emptyInstance = new EVError(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ErrorPtr extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompiler::ErrorPtr", new ErrorPtrClassFactory());
		}

		public ErrorPtr() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ErrorPtr", null);
		}

		public ErrorPtr(com.earthview.world.graphic.ScriptCompiler.EVError rep) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer repPtr = new BasePointer(rep);
			list.add("rep", repPtr.get());
			if(rep != null)
			{
			rep.setNoFree(true);
			}
			Create("ErrorPtr", list);
		}

		public ErrorPtr(com.earthview.world.graphic.ScriptCompiler.EVError rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer repPtr = new BasePointer(rep);
			list.add("rep", repPtr.get());
			if(rep != null)
			{
			rep.setNoFree(true);
			}
			BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
			list.add("inFreeMethod", inFreeMethodPtr.get());
			Create("ErrorPtr", list);
		}

		public ErrorPtr(com.earthview.world.graphic.ScriptCompiler.ErrorPtr r) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rPtr = new BasePointer(r);
			list.add("r", rPtr.get());
			Create("ErrorPtr", list);
		}

		native private long get_void(long pNativeObject);
		public com.earthview.world.graphic.ScriptCompiler.EVError get()
		{
			long returnValue = get_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ScriptCompiler.EVError __returnValue = new com.earthview.world.graphic.ScriptCompiler.EVError(CreatedWhenConstruct.CWC_NotToCreate, "CError");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptCompiler.EVError)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CError");
			}
			return __returnValue;
		}
		public ErrorPtr(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ErrorPtr(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ErrorPtr fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ErrorPtr obj = null;
 			if(baseObj instanceof ErrorPtr)
			{
				obj = (ErrorPtr)baseObj;
			} else {
				obj = new ErrorPtr(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ErrorPtr");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ErrorPtrClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ErrorPtr emptyInstance = new ErrorPtr(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef list<EarthView::World::Graphic::CScriptCompiler::ErrorPtr> ErrorList;
	public static class ErrorList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompiler::ErrorList", new ErrorListClassFactory());
		}

		public ErrorList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ErrorList", null);
		}

		native private void push_back_ErrorPtr(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.ScriptCompiler.ErrorPtr t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_ErrorPtr(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_ErrorPtr(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.ScriptCompiler.ErrorPtr t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_ErrorPtr(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.ScriptCompiler.ErrorPtr front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ScriptCompiler.ErrorPtr __returnValue = new com.earthview.world.graphic.ScriptCompiler.ErrorPtr(CreatedWhenConstruct.CWC_NotToCreate, "ErrorPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptCompiler.ErrorPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ErrorPtr");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.ScriptCompiler.ErrorPtr back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ScriptCompiler.ErrorPtr __returnValue = new com.earthview.world.graphic.ScriptCompiler.ErrorPtr(CreatedWhenConstruct.CWC_NotToCreate, "ErrorPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptCompiler.ErrorPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ErrorPtr");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public com.earthview.world.graphic.ScriptCompiler.ErrorPtr at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.graphic.ScriptCompiler.ErrorPtr __returnValue = new com.earthview.world.graphic.ScriptCompiler.ErrorPtr(CreatedWhenConstruct.CWC_NotToCreate, "ErrorPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptCompiler.ErrorPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ErrorPtr");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_ErrorPtr(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.ScriptCompiler.ErrorPtr t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_ErrorPtr(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public ErrorList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ErrorList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ErrorList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ErrorList obj = null;
 			if(baseObj instanceof ErrorList)
			{
				obj = (ErrorList)baseObj;
			} else {
				obj = new ErrorList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ErrorList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ErrorListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ErrorList emptyInstance = new ErrorList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// These are the built-in error codes
	public enum CompiledError implements INativeEnum<CompiledError> {
		CE_STRINGEXPECTED(CompiledErrorHelper.ENUM_VALUES[0]),
		CE_NUMBEREXPECTED(CompiledErrorHelper.ENUM_VALUES[1]),
		CE_FEWERPARAMETERSEXPECTED(CompiledErrorHelper.ENUM_VALUES[2]),
		CE_VARIABLEEXPECTED(CompiledErrorHelper.ENUM_VALUES[3]),
		CE_UNDEFINEDVARIABLE(CompiledErrorHelper.ENUM_VALUES[4]),
		CE_OBJECTNAMEEXPECTED(CompiledErrorHelper.ENUM_VALUES[5]),
		CE_OBJECTALLOCATIONERROR(CompiledErrorHelper.ENUM_VALUES[6]),
		CE_INVALIDPARAMETERS(CompiledErrorHelper.ENUM_VALUES[7]),
		CE_DUPLICATEOVERRIDE(CompiledErrorHelper.ENUM_VALUES[8]),
		CE_UNEXPECTEDTOKEN(CompiledErrorHelper.ENUM_VALUES[9]),
		CE_OBJECTBASENOTFOUND(CompiledErrorHelper.ENUM_VALUES[10]),
		CE_UNSUPPORTEDBYRENDERSYSTEM(CompiledErrorHelper.ENUM_VALUES[11]),
		CE_REFERENCETOANONEXISTINGOBJECT(CompiledErrorHelper.ENUM_VALUES[12]),
		CE_LOCALFILEEXIST(CompiledErrorHelper.ENUM_VALUES[13]);
		private int value;
		CompiledError(int i) {
			this.value = i;
		}
		public CompiledError getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CompiledError toEnum(int retval) {
			if(retval == CE_STRINGEXPECTED.value){
				return CE_STRINGEXPECTED;
			}
			else if(retval == CE_NUMBEREXPECTED.value){
				return CE_NUMBEREXPECTED;
			}
			else if(retval == CE_FEWERPARAMETERSEXPECTED.value){
				return CE_FEWERPARAMETERSEXPECTED;
			}
			else if(retval == CE_VARIABLEEXPECTED.value){
				return CE_VARIABLEEXPECTED;
			}
			else if(retval == CE_UNDEFINEDVARIABLE.value){
				return CE_UNDEFINEDVARIABLE;
			}
			else if(retval == CE_OBJECTNAMEEXPECTED.value){
				return CE_OBJECTNAMEEXPECTED;
			}
			else if(retval == CE_OBJECTALLOCATIONERROR.value){
				return CE_OBJECTALLOCATIONERROR;
			}
			else if(retval == CE_INVALIDPARAMETERS.value){
				return CE_INVALIDPARAMETERS;
			}
			else if(retval == CE_DUPLICATEOVERRIDE.value){
				return CE_DUPLICATEOVERRIDE;
			}
			else if(retval == CE_UNEXPECTEDTOKEN.value){
				return CE_UNEXPECTEDTOKEN;
			}
			else if(retval == CE_OBJECTBASENOTFOUND.value){
				return CE_OBJECTBASENOTFOUND;
			}
			else if(retval == CE_UNSUPPORTEDBYRENDERSYSTEM.value){
				return CE_UNSUPPORTEDBYRENDERSYSTEM;
			}
			else if(retval == CE_REFERENCETOANONEXISTINGOBJECT.value){
				return CE_REFERENCETOANONEXISTINGOBJECT;
			}
			else if(retval == CE_LOCALFILEEXIST.value){
				return CE_LOCALFILEEXIST;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CompiledErrorHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static String formatErrorCode_ev_uint32(long code);
	public static String formatErrorCode(long code)
	{
		long codeParamValue = code;
		String returnValue = formatErrorCode_ev_uint32(codeParamValue);
		return returnValue;
	}
	public ScriptCompiler() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScriptCompiler", null);
	}

	native private boolean compile_EVString_EVString_EVString(long pNativeObject, String str, String source, String group);
	//// Takes in a string of script code and compiles it into resources
	public boolean compile(String str, String source, String group)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		String groupParamValue = group;
		boolean returnValue = compile_EVString_EVString_EVString(this.nativeObject.pointer, strParamValue, sourceParamValue, groupParamValue);
		return returnValue;
	}
	native private boolean compile_ConcreteNodeListPtr_EVString(long pNativeObject, long nodes, String group);
	//// Compiles resources from the given concrete node list
	public boolean compile(com.earthview.world.graphic.ConcreteNodeListPtr nodes, String group)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		String groupParamValue = group;
		boolean returnValue = compile_ConcreteNodeListPtr_EVString(this.nativeObject.pointer, nodesParamValue, groupParamValue);
		return returnValue;
	}
	native private long _generateAST_EVString_EVString_ev_bool_ev_bool_ev_bool(long pNativeObject, String str, String source, boolean doImports, boolean doObjects, boolean doVariables);
	//// Generates the AST from the given string script
	public com.earthview.world.graphic.AbstractNodeListPtr _generateAST(String str, String source, boolean doImports, boolean doObjects, boolean doVariables)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		boolean doImportsParamValue = doImports;
		boolean doObjectsParamValue = doObjects;
		boolean doVariablesParamValue = doVariables;
		long returnValue = _generateAST_EVString_EVString_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, strParamValue, sourceParamValue, doImportsParamValue, doObjectsParamValue, doVariablesParamValue);
		com.earthview.world.graphic.AbstractNodeListPtr __returnValue = new com.earthview.world.graphic.AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		}
		return __returnValue;
	}
	native private long _generateAST_EVString_EVString_ev_bool_ev_bool(long pNativeObject, String str, String source, boolean doImports, boolean doObjects);
	public com.earthview.world.graphic.AbstractNodeListPtr _generateAST(String str, String source, boolean doImports, boolean doObjects)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		boolean doImportsParamValue = doImports;
		boolean doObjectsParamValue = doObjects;
		long returnValue = _generateAST_EVString_EVString_ev_bool_ev_bool(this.nativeObject.pointer, strParamValue, sourceParamValue, doImportsParamValue, doObjectsParamValue);
		com.earthview.world.graphic.AbstractNodeListPtr __returnValue = new com.earthview.world.graphic.AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		}
		return __returnValue;
	}
	native private long _generateAST_EVString_EVString_ev_bool(long pNativeObject, String str, String source, boolean doImports);
	public com.earthview.world.graphic.AbstractNodeListPtr _generateAST(String str, String source, boolean doImports)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		boolean doImportsParamValue = doImports;
		long returnValue = _generateAST_EVString_EVString_ev_bool(this.nativeObject.pointer, strParamValue, sourceParamValue, doImportsParamValue);
		com.earthview.world.graphic.AbstractNodeListPtr __returnValue = new com.earthview.world.graphic.AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		}
		return __returnValue;
	}
	native private long _generateAST_EVString_EVString(long pNativeObject, String str, String source);
	public com.earthview.world.graphic.AbstractNodeListPtr _generateAST(String str, String source)
	{
		String strParamValue = str;
		String sourceParamValue = source;
		long returnValue = _generateAST_EVString_EVString(this.nativeObject.pointer, strParamValue, sourceParamValue);
		com.earthview.world.graphic.AbstractNodeListPtr __returnValue = new com.earthview.world.graphic.AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeListPtr");
		}
		return __returnValue;
	}
	native private boolean _compile_AbstractNodeListPtr_EVString_ev_bool_ev_bool_ev_bool(long pNativeObject, long nodes, String group, boolean doImports, boolean doObjects, boolean doVariables);
	//// Compiles the given abstract syntax tree
	public boolean _compile(com.earthview.world.graphic.AbstractNodeListPtr nodes, String group, boolean doImports, boolean doObjects, boolean doVariables)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		String groupParamValue = group;
		boolean doImportsParamValue = doImports;
		boolean doObjectsParamValue = doObjects;
		boolean doVariablesParamValue = doVariables;
		boolean returnValue = _compile_AbstractNodeListPtr_EVString_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, nodesParamValue, groupParamValue, doImportsParamValue, doObjectsParamValue, doVariablesParamValue);
		return returnValue;
	}
	native private boolean _compile_AbstractNodeListPtr_EVString_ev_bool_ev_bool(long pNativeObject, long nodes, String group, boolean doImports, boolean doObjects);
	public boolean _compile(com.earthview.world.graphic.AbstractNodeListPtr nodes, String group, boolean doImports, boolean doObjects)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		String groupParamValue = group;
		boolean doImportsParamValue = doImports;
		boolean doObjectsParamValue = doObjects;
		boolean returnValue = _compile_AbstractNodeListPtr_EVString_ev_bool_ev_bool(this.nativeObject.pointer, nodesParamValue, groupParamValue, doImportsParamValue, doObjectsParamValue);
		return returnValue;
	}
	native private boolean _compile_AbstractNodeListPtr_EVString_ev_bool(long pNativeObject, long nodes, String group, boolean doImports);
	public boolean _compile(com.earthview.world.graphic.AbstractNodeListPtr nodes, String group, boolean doImports)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		String groupParamValue = group;
		boolean doImportsParamValue = doImports;
		boolean returnValue = _compile_AbstractNodeListPtr_EVString_ev_bool(this.nativeObject.pointer, nodesParamValue, groupParamValue, doImportsParamValue);
		return returnValue;
	}
	native private boolean _compile_AbstractNodeListPtr_EVString(long pNativeObject, long nodes, String group);
	public boolean _compile(com.earthview.world.graphic.AbstractNodeListPtr nodes, String group)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		String groupParamValue = group;
		boolean returnValue = _compile_AbstractNodeListPtr_EVString(this.nativeObject.pointer, nodesParamValue, groupParamValue);
		return returnValue;
	}
	native private void addError_ev_uint32_EVString_ev_int32_EVString(long pNativeObject, long code, String file, int line, String msg);
	//// Adds the given error to the compiler's list of errors
	public void addError(long code, String file, int line, String msg)
	{
		long codeParamValue = code;
		String fileParamValue = file;
		int lineParamValue = line;
		String msgParamValue = msg;
		addError_ev_uint32_EVString_ev_int32_EVString(this.nativeObject.pointer, codeParamValue, fileParamValue, lineParamValue, msgParamValue);
	}
	native private void addError_ev_uint32_EVString_ev_int32(long pNativeObject, long code, String file, int line);
	public void addError(long code, String file, int line)
	{
		long codeParamValue = code;
		String fileParamValue = file;
		int lineParamValue = line;
		addError_ev_uint32_EVString_ev_int32(this.nativeObject.pointer, codeParamValue, fileParamValue, lineParamValue);
	}
	native private void setListener_CScriptCompilerListener(long pNativeObject, long listener);
	//// Sets the listener used by the compiler
	public void setListener(com.earthview.world.graphic.ScriptCompilerListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setListener_CScriptCompilerListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private long getListener_void(long pNativeObject);
	//// Returns the currently set listener
	public com.earthview.world.graphic.ScriptCompilerListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptCompilerListener __returnValue = new com.earthview.world.graphic.ScriptCompilerListener(CreatedWhenConstruct.CWC_NotToCreate, "CScriptCompilerListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptCompilerListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptCompilerListener");
		}
		return __returnValue;
	}
	native private long getResourceGroup_void(long pNativeObject);
	//// Returns the resource group currently set for this compiler
	public StringPointer getResourceGroup()
	{
		long returnValue = getResourceGroup_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void addNameExclusion_EVString(long pNativeObject, String type);
	//// Adds a name exclusion to the map
	public void addNameExclusion(String type)
	{
		String typeParamValue = type;
		addNameExclusion_EVString(this.nativeObject.pointer, typeParamValue);
	}
	native private void removeNameExclusion_EVString(long pNativeObject, String type);
	//// Removes a name exclusion
	public void removeNameExclusion(String type)
	{
		String typeParamValue = type;
		removeNameExclusion_EVString(this.nativeObject.pointer, typeParamValue);
	}
	native private boolean _fireEvent_CScriptCompilerEvent_void(long pNativeObject, long evt, long retval);
	//// Internal method for firing the handleEvent method
	public boolean _fireEvent(com.earthview.world.graphic.ScriptCompilerEvent evt, VoidPointer retval)
	{
		long evtParamValue = (evt == null ? 0L : evt.nativeObject.pointer);
		long retvalParamValue = (retval == null ? 0L : retval.nativeObject.pointer);
		boolean returnValue = _fireEvent_CScriptCompilerEvent_void(this.nativeObject.pointer, evtParamValue, retvalParamValue);
		return returnValue;
	}
	/// Public translator definitions
	/// This enum are built-in word id values
	public enum CompliedID implements INativeEnum<CompliedID> {
		ID_ON(CompliedIDHelper.ENUM_VALUES[0]),
		ID_OFF(CompliedIDHelper.ENUM_VALUES[1]),
		ID_TRUE(CompliedIDHelper.ENUM_VALUES[2]),
		ID_FALSE(CompliedIDHelper.ENUM_VALUES[3]),
		ID_YES(CompliedIDHelper.ENUM_VALUES[4]),
		ID_NO(CompliedIDHelper.ENUM_VALUES[5]);
		private int value;
		CompliedID(int i) {
			this.value = i;
		}
		public CompliedID getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CompliedID toEnum(int retval) {
			if(retval == ID_ON.value){
				return ID_ON;
			}
			else if(retval == ID_OFF.value){
				return ID_OFF;
			}
			else if(retval == ID_TRUE.value){
				return ID_TRUE;
			}
			else if(retval == ID_FALSE.value){
				return ID_FALSE;
			}
			else if(retval == ID_YES.value){
				return ID_YES;
			}
			else if(retval == ID_NO.value){
				return ID_NO;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CompliedIDHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public ScriptCompiler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptCompiler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptCompiler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptCompiler obj = null;
 		if(baseObj instanceof ScriptCompiler)
		{
			obj = (ScriptCompiler)baseObj;
		} else {
			obj = new ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptCompiler");
			obj.increaseCast();
		}

		return obj;
	}
}
