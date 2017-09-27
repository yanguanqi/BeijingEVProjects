package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::ModelObject", new ModelObjectClassFactory());
	}

	public ModelObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelObject", null);
	}

	native private long get_mpModel_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject get_mpModel()
	{
		long jniValue = get_mpModel_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CModelBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelBaseObject");
		}
		return __returnValue;
	}
	
	native private void set_mpModel_CModelBaseObject (long pNativeObject, long value);
	public void set_mpModel(com.earthview.world.spatial3d.modelmanager.ModelBaseObject mpModel)
	{
		long mpModelParamValue = (mpModel == null ? 0L : mpModel.nativeObject.pointer);
		
		set_mpModel_CModelBaseObject(this.nativeObject.pointer, mpModelParamValue);
	}
	
	native private long get_mRefInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfo get_mRefInfo()
	{
		long jniValue = get_mRefInfo_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfo __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		}
		return __returnValue;
	}
	
	native private void set_mRefInfo_CMeshEffectRefInfo (long pNativeObject, long value);
	public void set_mRefInfo(com.earthview.world.spatial3d.dataset.MeshEffectRefInfo mRefInfo)
	{
		long mRefInfoParamValue = mRefInfo.nativeObject.pointer;
		
		set_mRefInfo_CMeshEffectRefInfo(this.nativeObject.pointer, mRefInfoParamValue);
	}
	
	public ModelObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelObject obj = null;
 		if(baseObj instanceof ModelObject)
		{
			obj = (ModelObject)baseObj;
		} else {
			obj = new ModelObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelObject");
			obj.increaseCast();
		}

		return obj;
	}
}
