package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelResource extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelResource", new ModelResourceClassFactory());
	}

	public ModelResource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelResource", null);
	}

	native private long get_mMeshObj_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr get_mMeshObj()
	{
		long jniValue = get_mMeshObj_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	
	native private void set_mMeshObj_CMeshPtr (long pNativeObject, long value);
	public void set_mMeshObj(com.earthview.world.graphic.MeshPtr mMeshObj)
	{
		long mMeshObjParamValue = mMeshObj.nativeObject.pointer;
		
		set_mMeshObj_CMeshPtr(this.nativeObject.pointer, mMeshObjParamValue);
	}
	
	native private long get_mMeshAnimationObj_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr get_mMeshAnimationObj()
	{
		long jniValue = get_mMeshAnimationObj_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	
	native private void set_mMeshAnimationObj_CMeshPtr (long pNativeObject, long value);
	public void set_mMeshAnimationObj(com.earthview.world.graphic.MeshPtr mMeshAnimationObj)
	{
		long mMeshAnimationObjParamValue = mMeshAnimationObj.nativeObject.pointer;
		
		set_mMeshAnimationObj_CMeshPtr(this.nativeObject.pointer, mMeshAnimationObjParamValue);
	}
	
	native private long get_mTextureObjs_void(long pNativeObject);
	public com.earthview.world.spatial3d.TexturePtrVector get_mTextureObjs()
	{
		long jniValue = get_mTextureObjs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.TexturePtrVector __returnValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TexturePtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		}
		return __returnValue;
	}
	
	native private void set_mTextureObjs_TexturePtrVector (long pNativeObject, long value);
	public void set_mTextureObjs(com.earthview.world.spatial3d.TexturePtrVector mTextureObjs)
	{
		long mTextureObjsParamValue = mTextureObjs.nativeObject.pointer;
		
		set_mTextureObjs_TexturePtrVector(this.nativeObject.pointer, mTextureObjsParamValue);
	}
	
	native private long get_mThumbTextureObjs_void(long pNativeObject);
	public com.earthview.world.spatial3d.TexturePtrVector get_mThumbTextureObjs()
	{
		long jniValue = get_mThumbTextureObjs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.TexturePtrVector __returnValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TexturePtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		}
		return __returnValue;
	}
	
	native private void set_mThumbTextureObjs_TexturePtrVector (long pNativeObject, long value);
	public void set_mThumbTextureObjs(com.earthview.world.spatial3d.TexturePtrVector mThumbTextureObjs)
	{
		long mThumbTextureObjsParamValue = mThumbTextureObjs.nativeObject.pointer;
		
		set_mThumbTextureObjs_TexturePtrVector(this.nativeObject.pointer, mThumbTextureObjsParamValue);
	}
	
	native private long get_mCubeTextureObjs_void(long pNativeObject);
	public com.earthview.world.spatial3d.TexturePtrVector get_mCubeTextureObjs()
	{
		long jniValue = get_mCubeTextureObjs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.TexturePtrVector __returnValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TexturePtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		}
		return __returnValue;
	}
	
	native private void set_mCubeTextureObjs_TexturePtrVector (long pNativeObject, long value);
	public void set_mCubeTextureObjs(com.earthview.world.spatial3d.TexturePtrVector mCubeTextureObjs)
	{
		long mCubeTextureObjsParamValue = mCubeTextureObjs.nativeObject.pointer;
		
		set_mCubeTextureObjs_TexturePtrVector(this.nativeObject.pointer, mCubeTextureObjsParamValue);
	}
	
	native private long get_mMaterialObjs_void(long pNativeObject);
	public com.earthview.world.spatial3d.MaterialPtrVector get_mMaterialObjs()
	{
		long jniValue = get_mMaterialObjs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.MaterialPtrVector __returnValue = new com.earthview.world.spatial3d.MaterialPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.MaterialPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		}
		return __returnValue;
	}
	
	native private void set_mMaterialObjs_MaterialPtrVector (long pNativeObject, long value);
	public void set_mMaterialObjs(com.earthview.world.spatial3d.MaterialPtrVector mMaterialObjs)
	{
		long mMaterialObjsParamValue = mMaterialObjs.nativeObject.pointer;
		
		set_mMaterialObjs_MaterialPtrVector(this.nativeObject.pointer, mMaterialObjsParamValue);
	}
	
	native private long get_mGpuObjs_void(long pNativeObject);
	public com.earthview.world.spatial3d.GpuPtrVector get_mGpuObjs()
	{
		long jniValue = get_mGpuObjs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.GpuPtrVector __returnValue = new com.earthview.world.spatial3d.GpuPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GpuPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		}
		return __returnValue;
	}
	
	native private void set_mGpuObjs_GpuPtrVector (long pNativeObject, long value);
	public void set_mGpuObjs(com.earthview.world.spatial3d.GpuPtrVector mGpuObjs)
	{
		long mGpuObjsParamValue = mGpuObjs.nativeObject.pointer;
		
		set_mGpuObjs_GpuPtrVector(this.nativeObject.pointer, mGpuObjsParamValue);
	}
	
	native private long get_mSkeletonObj_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonPtr get_mSkeletonObj()
	{
		long jniValue = get_mSkeletonObj_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SkeletonPtr __returnValue = new com.earthview.world.graphic.SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		}
		return __returnValue;
	}
	
	native private void set_mSkeletonObj_CSkeletonPtr (long pNativeObject, long value);
	public void set_mSkeletonObj(com.earthview.world.graphic.SkeletonPtr mSkeletonObj)
	{
		long mSkeletonObjParamValue = mSkeletonObj.nativeObject.pointer;
		
		set_mSkeletonObj_CSkeletonPtr(this.nativeObject.pointer, mSkeletonObjParamValue);
	}
	
	public ModelResource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelResource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelResource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelResource obj = null;
 		if(baseObj instanceof ModelResource)
		{
			obj = (ModelResource)baseObj;
		} else {
			obj = new ModelResource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelResource");
			obj.increaseCast();
		}

		return obj;
	}
}
