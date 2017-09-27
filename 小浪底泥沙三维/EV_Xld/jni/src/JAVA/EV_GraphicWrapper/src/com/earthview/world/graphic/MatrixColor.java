package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MatrixColor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMatrixColor", new MatrixColorClassFactory());
	}

	public MatrixColor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMatrixColor", null);
	}

	native private long get_mmartix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_mmartix()
	{
		long jniValue = get_mmartix_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_mmartix_CMatrix4 (long pNativeObject, long value);
	public void set_mmartix(com.earthview.world.spatial.math.Matrix4 mmartix)
	{
		long mmartixParamValue = mmartix.nativeObject.pointer;
		
		set_mmartix_CMatrix4(this.nativeObject.pointer, mmartixParamValue);
	}
	
	native private long get_mcolor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mcolor()
	{
		long jniValue = get_mcolor_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mcolor_CColourValue (long pNativeObject, long value);
	public void set_mcolor(com.earthview.world.graphic.ColourValue mcolor)
	{
		long mcolorParamValue = mcolor.nativeObject.pointer;
		
		set_mcolor_CColourValue(this.nativeObject.pointer, mcolorParamValue);
	}
	
	native private long get_mInstanceIndex_void(long pNativeObject);
	public long get_mInstanceIndex()
	{
		long jniValue = get_mInstanceIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mInstanceIndex_ev_uint32 (long pNativeObject, long value);
	public void set_mInstanceIndex(long mInstanceIndex)
	{
		long mInstanceIndexParamValue = mInstanceIndex;
		
		set_mInstanceIndex_ev_uint32(this.nativeObject.pointer, mInstanceIndexParamValue);
	}
	
	public MatrixColor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MatrixColor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MatrixColor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MatrixColor obj = null;
 		if(baseObj instanceof MatrixColor)
		{
			obj = (MatrixColor)baseObj;
		} else {
			obj = new MatrixColor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMatrixColor");
			obj.increaseCast();
		}

		return obj;
	}
}
