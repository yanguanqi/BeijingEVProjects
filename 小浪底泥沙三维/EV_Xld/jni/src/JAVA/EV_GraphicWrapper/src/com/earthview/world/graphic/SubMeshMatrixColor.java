package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshMatrixColor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubMeshMatrixColor", new SubMeshMatrixColorClassFactory());
	}

	public SubMeshMatrixColor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSubMeshMatrixColor", null);
	}

	native private long get_mSubMeshId_void(long pNativeObject);
	public long get_mSubMeshId()
	{
		long jniValue = get_mSubMeshId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSubMeshId_ev_uint32 (long pNativeObject, long value);
	public void set_mSubMeshId(long mSubMeshId)
	{
		long mSubMeshIdParamValue = mSubMeshId;
		
		set_mSubMeshId_ev_uint32(this.nativeObject.pointer, mSubMeshIdParamValue);
	}
	
	native private int get_mIndexBegun_void(long pNativeObject);
	public int get_mIndexBegun()
	{
		int jniValue = get_mIndexBegun_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndexBegun_ev_int32 (long pNativeObject, int value);
	public void set_mIndexBegun(int mIndexBegun)
	{
		int mIndexBegunParamValue = mIndexBegun;
		
		set_mIndexBegun_ev_int32(this.nativeObject.pointer, mIndexBegunParamValue);
	}
	
	native private int get_mIndexEnd_void(long pNativeObject);
	public int get_mIndexEnd()
	{
		int jniValue = get_mIndexEnd_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndexEnd_ev_int32 (long pNativeObject, int value);
	public void set_mIndexEnd(int mIndexEnd)
	{
		int mIndexEndParamValue = mIndexEnd;
		
		set_mIndexEnd_ev_int32(this.nativeObject.pointer, mIndexEndParamValue);
	}
	
	native private long get_mMatrixColorSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.MatrixColorSerializerList get_mMatrixColorSerializerList()
	{
		long jniValue = get_mMatrixColorSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MatrixColorSerializerList __returnValue = new com.earthview.world.graphic.MatrixColorSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrixColorSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MatrixColorSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrixColorSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_mMatrixColorSerializerList_CMatrixColorSerializerList (long pNativeObject, long value);
	public void set_mMatrixColorSerializerList(com.earthview.world.graphic.MatrixColorSerializerList mMatrixColorSerializerList)
	{
		long mMatrixColorSerializerListParamValue = mMatrixColorSerializerList.nativeObject.pointer;
		
		set_mMatrixColorSerializerList_CMatrixColorSerializerList(this.nativeObject.pointer, mMatrixColorSerializerListParamValue);
	}
	
	public SubMeshMatrixColor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubMeshMatrixColor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubMeshMatrixColor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubMeshMatrixColor obj = null;
 		if(baseObj instanceof SubMeshMatrixColor)
		{
			obj = (SubMeshMatrixColor)baseObj;
		} else {
			obj = new SubMeshMatrixColor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubMeshMatrixColor");
			obj.increaseCast();
		}

		return obj;
	}
}
