package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InternalObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::InternalObject", new InternalObjectClassFactory());
	}

	native private long get_mpModel_void(long pNativeObject);
	public com.earthview.world.geometry3d.VisibleObjectPtr get_mpModel()
	{
		long jniValue = get_mpModel_void(this.nativeObject.pointer);
		
		com.earthview.world.geometry3d.VisibleObjectPtr __returnValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectPtr");
		}
		return __returnValue;
	}
	
	native private void set_mpModel_CVisibleObjectPtr (long pNativeObject, long value);
	public void set_mpModel(com.earthview.world.geometry3d.VisibleObjectPtr mpModel)
	{
		long mpModelParamValue = mpModel.nativeObject.pointer;
		
		set_mpModel_CVisibleObjectPtr(this.nativeObject.pointer, mpModelParamValue);
	}
	
	native private long get_mpExtInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.ExtOctNodeInfo get_mpExtInfo()
	{
		long jniValue = get_mpExtInfo_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.ExtOctNodeInfo __returnValue = new com.earthview.world.spatial3d.ExtOctNodeInfo(CreatedWhenConstruct.CWC_NotToCreate, "ExtOctNodeInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ExtOctNodeInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ExtOctNodeInfo");
		}
		return __returnValue;
	}
	
	native private void set_mpExtInfo_ExtOctNodeInfo (long pNativeObject, long value);
	public void set_mpExtInfo(com.earthview.world.spatial3d.ExtOctNodeInfo mpExtInfo)
	{
		long mpExtInfoParamValue = (mpExtInfo == null ? 0L : mpExtInfo.nativeObject.pointer);
		
		set_mpExtInfo_ExtOctNodeInfo(this.nativeObject.pointer, mpExtInfoParamValue);
	}
	
	public InternalObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("InternalObject", null);
	}

	public InternalObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InternalObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InternalObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InternalObject obj = null;
 		if(baseObj instanceof InternalObject)
		{
			obj = (InternalObject)baseObj;
		} else {
			obj = new InternalObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "InternalObject");
			obj.increaseCast();
		}

		return obj;
	}
}
