package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PositionColor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CPositionColor", new PositionColorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public PositionColor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPositionColor", null);
	}

	native private long get_Position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_Position()
	{
		long jniValue = get_Position_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_Position_CVector3 (long pNativeObject, long value);
	public void set_Position(com.earthview.world.spatial.math.Vector3 Position)
	{
		long PositionParamValue = Position.nativeObject.pointer;
		
		set_Position_CVector3(this.nativeObject.pointer, PositionParamValue);
	}
	
	native private long get_Color_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_Color()
	{
		long jniValue = get_Color_void(this.nativeObject.pointer);
		
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
	
	native private void set_Color_CColourValue (long pNativeObject, long value);
	public void set_Color(com.earthview.world.graphic.ColourValue Color)
	{
		long ColorParamValue = Color.nativeObject.pointer;
		
		set_Color_CColourValue(this.nativeObject.pointer, ColorParamValue);
	}
	
	public PositionColor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PositionColor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PositionColor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PositionColor obj = null;
 		if(baseObj instanceof PositionColor)
		{
			obj = (PositionColor)baseObj;
		} else {
			obj = new PositionColor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPositionColor");
			obj.increaseCast();
		}

		return obj;
	}
}
