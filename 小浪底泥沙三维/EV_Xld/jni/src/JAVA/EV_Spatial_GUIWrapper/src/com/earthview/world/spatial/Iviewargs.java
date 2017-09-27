package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 视图参数类纯虚类
 */
public class Iviewargs extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::IViewArgs", new IviewargsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JIViewArgsProxy", new IviewargsClassFactory());
	}

	public enum ViewArgsType implements INativeEnum<ViewArgsType> {
		VAT_Unknown(ViewArgsTypeHelper.ENUM_VALUES[0]),
		VAT_Map(ViewArgsTypeHelper.ENUM_VALUES[1]),
		VAT_Scene(ViewArgsTypeHelper.ENUM_VALUES[2]);
		private int value;
		ViewArgsType(int i) {
			this.value = i;
		}
		public ViewArgsType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ViewArgsType toEnum(int retval) {
			if(retval == VAT_Unknown.value){
				return VAT_Unknown;
			}
			else if(retval == VAT_Map.value){
				return VAT_Map;
			}
			else if(retval == VAT_Scene.value){
				return VAT_Scene;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ViewArgsTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public Iviewargs() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIViewArgsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Iviewargs".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.Iviewargs.ViewArgsType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial.Iviewargs.ViewArgsType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Iviewargs.ViewArgsType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}

	native private long get_control_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ispatialcontrol get_control()
	{
		long jniValue = get_control_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	
	native private void set_control_ISpatialControl (long pNativeObject, long value);
	public void set_control(com.earthview.world.spatial.atlas.Ispatialcontrol control)
	{
		long controlParamValue = (control == null ? 0L : control.nativeObject.pointer);
		
		set_control_ISpatialControl(this.nativeObject.pointer, controlParamValue);
	}
	
	public Iviewargs(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iviewargs(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static Iviewargs fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iviewargs obj = null;
 		if(baseObj instanceof Iviewargs)
		{
			obj = (Iviewargs)baseObj;
		} else {
			obj = new Iviewargs(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IViewArgs");
			obj.increaseCast();
		}

		return obj;
	}
}
