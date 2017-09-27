package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqinitdata extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQInitData", new ObqinitdataClassFactory());
	}

	public Obqinitdata() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQInitData", null);
	}

	native private long get_mMetaInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.Obqmetainfo get_mMetaInfo()
	{
		long jniValue = get_mMetaInfo_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.modelmanager.Obqmetainfo __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "OBQMetaInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqmetainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "OBQMetaInfo");
		}
		return __returnValue;
	}
	
	native private void set_mMetaInfo_OBQMetaInfo (long pNativeObject, long value);
	public void set_mMetaInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo mMetaInfo)
	{
		long mMetaInfoParamValue = mMetaInfo.nativeObject.pointer;
		
		set_mMetaInfo_OBQMetaInfo(this.nativeObject.pointer, mMetaInfoParamValue);
	}
	
	native private long get_mDemMetaInfo_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo get_mDemMetaInfo()
	{
		long jniValue = get_mDemMetaInfo_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "OBQDemMetaInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "OBQDemMetaInfo");
		}
		return __returnValue;
	}
	
	native private void set_mDemMetaInfo_OBQDemMetaInfo (long pNativeObject, long value);
	public void set_mDemMetaInfo(com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo mDemMetaInfo)
	{
		long mDemMetaInfoParamValue = mDemMetaInfo.nativeObject.pointer;
		
		set_mDemMetaInfo_OBQDemMetaInfo(this.nativeObject.pointer, mDemMetaInfoParamValue);
	}
	
	native private long get_mTopTileNames_void(long pNativeObject);
	public com.earthview.world.core.StringArray get_mTopTileNames()
	{
		long jniValue = get_mTopTileNames_void(this.nativeObject.pointer);
		
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
		return __returnValue;
	}
	
	native private void set_mTopTileNames_CStringArray (long pNativeObject, long value);
	public void set_mTopTileNames(com.earthview.world.core.StringArray mTopTileNames)
	{
		long mTopTileNamesParamValue = mTopTileNames.nativeObject.pointer;
		
		set_mTopTileNames_CStringArray(this.nativeObject.pointer, mTopTileNamesParamValue);
	}
	
	native private long get_mTopIndexVec_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.LodIndexVector get_mTopIndexVec()
	{
		long jniValue = get_mTopIndexVec_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.modelmanager.LodIndexVector __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		}
		return __returnValue;
	}
	
	native private void set_mTopIndexVec_LodIndexVector (long pNativeObject, long value);
	public void set_mTopIndexVec(com.earthview.world.spatial3d.modelmanager.LodIndexVector mTopIndexVec)
	{
		long mTopIndexVecParamValue = mTopIndexVec.nativeObject.pointer;
		
		set_mTopIndexVec_LodIndexVector(this.nativeObject.pointer, mTopIndexVecParamValue);
	}
	
	native private long get_mMapLevel_void(long pNativeObject);
	public com.earthview.world.core.IntPairVector get_mMapLevel()
	{
		long jniValue = get_mMapLevel_void(this.nativeObject.pointer);
		
		com.earthview.world.core.IntPairVector __returnValue = new com.earthview.world.core.IntPairVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "IntPairVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntPairVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntPairVector");
		}
		return __returnValue;
	}
	
	native private void set_mMapLevel_IntPairVector (long pNativeObject, long value);
	public void set_mMapLevel(com.earthview.world.core.IntPairVector mMapLevel)
	{
		long mMapLevelParamValue = mMapLevel.nativeObject.pointer;
		
		set_mMapLevel_IntPairVector(this.nativeObject.pointer, mMapLevelParamValue);
	}
	
	native private long get_mSharedMaterialStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mSharedMaterialStream()
	{
		long jniValue = get_mSharedMaterialStream_void(this.nativeObject.pointer);
		
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
	
	native private void set_mSharedMaterialStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mSharedMaterialStream(com.earthview.world.core.MemoryDataStreamPtr mSharedMaterialStream)
	{
		long mSharedMaterialStreamParamValue = mSharedMaterialStream.nativeObject.pointer;
		
		set_mSharedMaterialStream_MemoryDataStreamPtr(this.nativeObject.pointer, mSharedMaterialStreamParamValue);
	}
	
	native private long get_mSharedTextureStreamVec_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamVector get_mSharedTextureStreamVec()
	{
		long jniValue = get_mSharedTextureStreamVec_void(this.nativeObject.pointer);
		
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
	
	native private void set_mSharedTextureStreamVec_MemoryDataStreamVector (long pNativeObject, long value);
	public void set_mSharedTextureStreamVec(com.earthview.world.core.MemoryDataStreamVector mSharedTextureStreamVec)
	{
		long mSharedTextureStreamVecParamValue = mSharedTextureStreamVec.nativeObject.pointer;
		
		set_mSharedTextureStreamVec_MemoryDataStreamVector(this.nativeObject.pointer, mSharedTextureStreamVecParamValue);
	}
	
	public Obqinitdata(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqinitdata(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqinitdata fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqinitdata obj = null;
 		if(baseObj instanceof Obqinitdata)
		{
			obj = (Obqinitdata)baseObj;
		} else {
			obj = new Obqinitdata(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQInitData");
			obj.increaseCast();
		}

		return obj;
	}
}
