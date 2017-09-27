package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshStream extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MeshStream", new MeshStreamClassFactory());
	}

	public MeshStream() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MeshStream", null);
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.MeshStream ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		com.earthview.world.spatial.MeshStream __returnValue = new com.earthview.world.spatial.MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshStream");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.MeshStream)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshStream");
		}
		return __returnValue;
	}
	native private long convertToMemoryDataStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr convertToMemoryDataStream()
	{
		long returnValue = convertToMemoryDataStream_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private void resumeFromMemoryDataStream_MemoryDataStreamPtr(long pNativeObject, long mem);
	public void resumeFromMemoryDataStream(com.earthview.world.core.MemoryDataStreamPtr mem)
	{
		long memParamValue = mem.nativeObject.pointer;
		resumeFromMemoryDataStream_MemoryDataStreamPtr(this.nativeObject.pointer, memParamValue);
	}
	native private long get_mMeshStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mMeshStream()
	{
		long jniValue = get_mMeshStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_mMeshStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mMeshStream(com.earthview.world.core.MemoryDataStreamPtr mMeshStream)
	{
		long mMeshStreamParamValue = mMeshStream.nativeObject.pointer;
		
		set_mMeshStream_MemoryDataStreamPtr(this.nativeObject.pointer, mMeshStreamParamValue);
	}
	
	native private long get_mMaterialStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mMaterialStream()
	{
		long jniValue = get_mMaterialStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_mMaterialStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mMaterialStream(com.earthview.world.core.MemoryDataStreamPtr mMaterialStream)
	{
		long mMaterialStreamParamValue = mMaterialStream.nativeObject.pointer;
		
		set_mMaterialStream_MemoryDataStreamPtr(this.nativeObject.pointer, mMaterialStreamParamValue);
	}
	
	native private long get_mTexStreamVec_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamVector get_mTexStreamVec()
	{
		long jniValue = get_mTexStreamVec_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamVector __returnValue = new com.earthview.world.core.MemoryDataStreamVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamVector");
		}
		return __returnValue;
	}
	
	native private void set_mTexStreamVec_MemoryDataStreamVector (long pNativeObject, long value);
	public void set_mTexStreamVec(com.earthview.world.core.MemoryDataStreamVector mTexStreamVec)
	{
		long mTexStreamVecParamValue = mTexStreamVec.nativeObject.pointer;
		
		set_mTexStreamVec_MemoryDataStreamVector(this.nativeObject.pointer, mTexStreamVecParamValue);
	}
	
	native private long get_mSkeletonStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mSkeletonStream()
	{
		long jniValue = get_mSkeletonStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_mSkeletonStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mSkeletonStream(com.earthview.world.core.MemoryDataStreamPtr mSkeletonStream)
	{
		long mSkeletonStreamParamValue = mSkeletonStream.nativeObject.pointer;
		
		set_mSkeletonStream_MemoryDataStreamPtr(this.nativeObject.pointer, mSkeletonStreamParamValue);
	}
	
	native private long get_mAniStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mAniStream()
	{
		long jniValue = get_mAniStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_mAniStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mAniStream(com.earthview.world.core.MemoryDataStreamPtr mAniStream)
	{
		long mAniStreamParamValue = mAniStream.nativeObject.pointer;
		
		set_mAniStream_MemoryDataStreamPtr(this.nativeObject.pointer, mAniStreamParamValue);
	}
	
	native private long get_mExtendStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mExtendStream()
	{
		long jniValue = get_mExtendStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_mExtendStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mExtendStream(com.earthview.world.core.MemoryDataStreamPtr mExtendStream)
	{
		long mExtendStreamParamValue = mExtendStream.nativeObject.pointer;
		
		set_mExtendStream_MemoryDataStreamPtr(this.nativeObject.pointer, mExtendStreamParamValue);
	}
	
	public MeshStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshStream(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshStream obj = null;
 		if(baseObj instanceof MeshStream)
		{
			obj = (MeshStream)baseObj;
		} else {
			obj = new MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MeshStream");
			obj.increaseCast();
		}

		return obj;
	}
}
