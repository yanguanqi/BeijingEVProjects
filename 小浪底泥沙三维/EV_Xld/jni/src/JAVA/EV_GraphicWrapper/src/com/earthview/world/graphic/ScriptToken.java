package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// \n
public class ScriptToken extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ScriptToken", new ScriptTokenClassFactory());
	}

	public ScriptToken() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ScriptToken", null);
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
	
	native private String get_lexeme_void(long pNativeObject);
	public String get_lexeme()
	{
		String jniValue = get_lexeme_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lexeme_EVString (long pNativeObject, String value);
	public void set_lexeme(String lexeme)
	{
		String lexemeParamValue = lexeme;
		
		set_lexeme_EVString(this.nativeObject.pointer, lexemeParamValue);
	}
	
	native private long get_type_void(long pNativeObject);
	public long get_type()
	{
		long jniValue = get_type_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_type_ev_uint32 (long pNativeObject, long value);
	public void set_type(long type)
	{
		long typeParamValue = type;
		
		set_type_ev_uint32(this.nativeObject.pointer, typeParamValue);
	}
	
	native private long get_line_void(long pNativeObject);
	public long get_line()
	{
		long jniValue = get_line_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_line_ev_uint32 (long pNativeObject, long value);
	public void set_line(long line)
	{
		long lineParamValue = line;
		
		set_line_ev_uint32(this.nativeObject.pointer, lineParamValue);
	}
	
	public ScriptToken(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptToken(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptToken fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptToken obj = null;
 		if(baseObj instanceof ScriptToken)
		{
			obj = (ScriptToken)baseObj;
		} else {
			obj = new ScriptToken(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ScriptToken");
			obj.increaseCast();
		}

		return obj;
	}
}
