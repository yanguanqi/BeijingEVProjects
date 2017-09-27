package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TempVertex extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CTempVertex", new TempVertexClassFactory());
	}

	public TempVertex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTempVertex", null);
	}

	native private long get_pos_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_pos()
	{
		long jniValue = get_pos_void(this.nativeObject.pointer);
		
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
	
	native private void set_pos_CVector3 (long pNativeObject, long value);
	public void set_pos(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		
		set_pos_CVector3(this.nativeObject.pointer, posParamValue);
	}
	
	native private long get_tex_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_tex()
	{
		long jniValue = get_tex_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_tex_CVector4 (long pNativeObject, long value);
	public void set_tex(com.earthview.world.spatial.math.Vector4 tex)
	{
		long texParamValue = tex.nativeObject.pointer;
		
		set_tex_CVector4(this.nativeObject.pointer, texParamValue);
	}
	
	native private long get_color_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_color()
	{
		long jniValue = get_color_void(this.nativeObject.pointer);
		
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
	
	native private void set_color_CColourValue (long pNativeObject, long value);
	public void set_color(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		
		set_color_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	
	public TempVertex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TempVertex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TempVertex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TempVertex obj = null;
 		if(baseObj instanceof TempVertex)
		{
			obj = (TempVertex)baseObj;
		} else {
			obj = new TempVertex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTempVertex");
			obj.increaseCast();
		}

		return obj;
	}
}
