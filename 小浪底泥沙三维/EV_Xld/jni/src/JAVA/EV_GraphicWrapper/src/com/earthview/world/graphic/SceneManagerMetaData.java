package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///室内场景
public class SceneManagerMetaData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneManagerMetaData", new SceneManagerMetaDataClassFactory());
	}

	public SceneManagerMetaData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneManagerMetaData", null);
	}

	native private String get_typeName_void(long pNativeObject);
	public String get_typeName()
	{
		String jniValue = get_typeName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_typeName_EVString (long pNativeObject, String value);
	public void set_typeName(String typeName)
	{
		String typeNameParamValue = typeName;
		
		set_typeName_EVString(this.nativeObject.pointer, typeNameParamValue);
	}
	
	native private String get_description_void(long pNativeObject);
	public String get_description()
	{
		String jniValue = get_description_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_description_EVString (long pNativeObject, String value);
	public void set_description(String description)
	{
		String descriptionParamValue = description;
		
		set_description_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	
	native private int get_sceneTypeMask_void(long pNativeObject);
	public int get_sceneTypeMask()
	{
		int jniValue = get_sceneTypeMask_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sceneTypeMask_ev_uint16 (long pNativeObject, int value);
	public void set_sceneTypeMask(int sceneTypeMask)
	{
		int sceneTypeMaskParamValue = sceneTypeMask;
		
		set_sceneTypeMask_ev_uint16(this.nativeObject.pointer, sceneTypeMaskParamValue);
	}
	
	native private boolean get_worldGeometrySupported_void(long pNativeObject);
	public boolean get_worldGeometrySupported()
	{
		boolean jniValue = get_worldGeometrySupported_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_worldGeometrySupported_ev_bool (long pNativeObject, boolean value);
	public void set_worldGeometrySupported(boolean worldGeometrySupported)
	{
		boolean worldGeometrySupportedParamValue = worldGeometrySupported;
		
		set_worldGeometrySupported_ev_bool(this.nativeObject.pointer, worldGeometrySupportedParamValue);
	}
	
	public SceneManagerMetaData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneManagerMetaData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneManagerMetaData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneManagerMetaData obj = null;
 		if(baseObj instanceof SceneManagerMetaData)
		{
			obj = (SceneManagerMetaData)baseObj;
		} else {
			obj = new SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneManagerMetaData");
			obj.increaseCast();
		}

		return obj;
	}
}
