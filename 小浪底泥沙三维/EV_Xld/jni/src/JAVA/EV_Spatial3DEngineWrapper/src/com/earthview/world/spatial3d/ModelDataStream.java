package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataStream extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelDataStream", new ModelDataStreamClassFactory());
	}

	public ModelDataStream() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelDataStream", null);
	}

	native private void releaseAllFeature_void(long pNativeObject);
	public void releaseAllFeature()
	{
		releaseAllFeature_void(this.nativeObject.pointer);
	}
	native private void setAllFeatureDataStreamNull_void(long pNativeObject);
	public void setAllFeatureDataStreamNull()
	{
		setAllFeatureDataStreamNull_void(this.nativeObject.pointer);
	}
	native private long get_mpMeshFeature_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifeature get_mpMeshFeature()
	{
		long jniValue = get_mpMeshFeature_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	
	native private void set_mpMeshFeature_IFeature (long pNativeObject, long value);
	public void set_mpMeshFeature(com.earthview.world.spatial.geodataset.Ifeature mpMeshFeature)
	{
		long mpMeshFeatureParamValue = (mpMeshFeature == null ? 0L : mpMeshFeature.nativeObject.pointer);
		
		set_mpMeshFeature_IFeature(this.nativeObject.pointer, mpMeshFeatureParamValue);
	}
	
	native private long get_mThumbTextures_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mThumbTextures()
	{
		long jniValue = get_mThumbTextures_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mThumbTextures_FeatureVector (long pNativeObject, long value);
	public void set_mThumbTextures(com.earthview.world.spatial3d.dataset.FeatureVector mThumbTextures)
	{
		long mThumbTexturesParamValue = mThumbTextures.nativeObject.pointer;
		
		set_mThumbTextures_FeatureVector(this.nativeObject.pointer, mThumbTexturesParamValue);
	}
	
	native private long get_mOrigTextures_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mOrigTextures()
	{
		long jniValue = get_mOrigTextures_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mOrigTextures_FeatureVector (long pNativeObject, long value);
	public void set_mOrigTextures(com.earthview.world.spatial3d.dataset.FeatureVector mOrigTextures)
	{
		long mOrigTexturesParamValue = mOrigTextures.nativeObject.pointer;
		
		set_mOrigTextures_FeatureVector(this.nativeObject.pointer, mOrigTexturesParamValue);
	}
	
	native private long get_mCubeTextures_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mCubeTextures()
	{
		long jniValue = get_mCubeTextures_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mCubeTextures_FeatureVector (long pNativeObject, long value);
	public void set_mCubeTextures(com.earthview.world.spatial3d.dataset.FeatureVector mCubeTextures)
	{
		long mCubeTexturesParamValue = mCubeTextures.nativeObject.pointer;
		
		set_mCubeTextures_FeatureVector(this.nativeObject.pointer, mCubeTexturesParamValue);
	}
	
	native private long get_mMaterials_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mMaterials()
	{
		long jniValue = get_mMaterials_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mMaterials_FeatureVector (long pNativeObject, long value);
	public void set_mMaterials(com.earthview.world.spatial3d.dataset.FeatureVector mMaterials)
	{
		long mMaterialsParamValue = mMaterials.nativeObject.pointer;
		
		set_mMaterials_FeatureVector(this.nativeObject.pointer, mMaterialsParamValue);
	}
	
	native private long get_mProgs_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mProgs()
	{
		long jniValue = get_mProgs_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mProgs_FeatureVector (long pNativeObject, long value);
	public void set_mProgs(com.earthview.world.spatial3d.dataset.FeatureVector mProgs)
	{
		long mProgsParamValue = mProgs.nativeObject.pointer;
		
		set_mProgs_FeatureVector(this.nativeObject.pointer, mProgsParamValue);
	}
	
	native private long get_mGpus_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mGpus()
	{
		long jniValue = get_mGpus_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mGpus_FeatureVector (long pNativeObject, long value);
	public void set_mGpus(com.earthview.world.spatial3d.dataset.FeatureVector mGpus)
	{
		long mGpusParamValue = mGpus.nativeObject.pointer;
		
		set_mGpus_FeatureVector(this.nativeObject.pointer, mGpusParamValue);
	}
	
	native private long get_mSkeletons_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mSkeletons()
	{
		long jniValue = get_mSkeletons_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mSkeletons_FeatureVector (long pNativeObject, long value);
	public void set_mSkeletons(com.earthview.world.spatial3d.dataset.FeatureVector mSkeletons)
	{
		long mSkeletonsParamValue = mSkeletons.nativeObject.pointer;
		
		set_mSkeletons_FeatureVector(this.nativeObject.pointer, mSkeletonsParamValue);
	}
	
	native private long get_mAnimations_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.FeatureVector get_mAnimations()
	{
		long jniValue = get_mAnimations_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	
	native private void set_mAnimations_FeatureVector (long pNativeObject, long value);
	public void set_mAnimations(com.earthview.world.spatial3d.dataset.FeatureVector mAnimations)
	{
		long mAnimationsParamValue = mAnimations.nativeObject.pointer;
		
		set_mAnimations_FeatureVector(this.nativeObject.pointer, mAnimationsParamValue);
	}
	
	public ModelDataStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataStream(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDataStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataStream obj = null;
 		if(baseObj instanceof ModelDataStream)
		{
			obj = (ModelDataStream)baseObj;
		} else {
			obj = new ModelDataStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelDataStream");
			obj.increaseCast();
		}

		return obj;
	}
}
