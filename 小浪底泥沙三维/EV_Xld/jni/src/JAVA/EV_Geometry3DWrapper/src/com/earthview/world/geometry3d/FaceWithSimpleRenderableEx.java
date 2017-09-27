package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /指定方向的内部/
 */
public class FaceWithSimpleRenderableEx extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx", new FaceWithSimpleRenderableExClassFactory());
	}

	public FaceWithSimpleRenderableEx() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFaceWithSimpleRenderableEx", null);
	}

	native private int get_FaceType_void(long pNativeObject);
	public com.earthview.world.geometry3d.EVFaceWithinType get_FaceType()
	{
		int jniValue = get_FaceType_void(this.nativeObject.pointer);
		
		return com.earthview.world.geometry3d.EVFaceWithinType.toEnum(jniValue);
	}
	
	native private void set_FaceType_EVFaceWithinType (long pNativeObject, int value);
	public void set_FaceType(com.earthview.world.geometry3d.EVFaceWithinType FaceType)
	{
		int FaceTypeParamValue = FaceType.getValue();
		
		set_FaceType_EVFaceWithinType(this.nativeObject.pointer, FaceTypeParamValue);
	}
	
	native private long get_Polyhedron_void(long pNativeObject);
	public com.earthview.world.geometry3d.SimpleRenderableEx get_Polyhedron()
	{
		long jniValue = get_Polyhedron_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	
	native private void set_Polyhedron_CSimpleRenderableEx (long pNativeObject, long value);
	public void set_Polyhedron(com.earthview.world.geometry3d.SimpleRenderableEx Polyhedron)
	{
		long PolyhedronParamValue = (Polyhedron == null ? 0L : Polyhedron.nativeObject.pointer);
		
		set_Polyhedron_CSimpleRenderableEx(this.nativeObject.pointer, PolyhedronParamValue);
	}
	
	public FaceWithSimpleRenderableEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FaceWithSimpleRenderableEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FaceWithSimpleRenderableEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FaceWithSimpleRenderableEx obj = null;
 		if(baseObj instanceof FaceWithSimpleRenderableEx)
		{
			obj = (FaceWithSimpleRenderableEx)baseObj;
		} else {
			obj = new FaceWithSimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFaceWithSimpleRenderableEx");
			obj.increaseCast();
		}

		return obj;
	}
}
