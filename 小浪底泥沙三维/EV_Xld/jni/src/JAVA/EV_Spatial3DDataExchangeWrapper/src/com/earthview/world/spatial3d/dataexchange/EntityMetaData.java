package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * //Entity基础信息//相当于scene文件中的一个entity节点
 */
public class EntityMetaData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CEntityMetaData", new EntityMetaDataClassFactory());
	}

	/**
	 * 构造函数
	 */
	public EntityMetaData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEntityMetaData", null);
	}

	native private String get_mMeshPath_void(long pNativeObject);
	public String get_mMeshPath()
	{
		String jniValue = get_mMeshPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMeshPath_EVString (long pNativeObject, String value);
	public void set_mMeshPath(String mMeshPath)
	{
		String mMeshPathParamValue = mMeshPath;
		
		set_mMeshPath_EVString(this.nativeObject.pointer, mMeshPathParamValue);
	}
	
	native private String get_mMeshName_void(long pNativeObject);
	public String get_mMeshName()
	{
		String jniValue = get_mMeshName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMeshName_EVString (long pNativeObject, String value);
	public void set_mMeshName(String mMeshName)
	{
		String mMeshNameParamValue = mMeshName;
		
		set_mMeshName_EVString(this.nativeObject.pointer, mMeshNameParamValue);
	}
	
	native private long get_mPos_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mPos()
	{
		long jniValue = get_mPos_void(this.nativeObject.pointer);
		
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
	
	native private void set_mPos_CVector3 (long pNativeObject, long value);
	public void set_mPos(com.earthview.world.spatial.math.Vector3 mPos)
	{
		long mPosParamValue = mPos.nativeObject.pointer;
		
		set_mPos_CVector3(this.nativeObject.pointer, mPosParamValue);
	}
	
	native private long get_mScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mScale()
	{
		long jniValue = get_mScale_void(this.nativeObject.pointer);
		
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
	
	native private void set_mScale_CVector3 (long pNativeObject, long value);
	public void set_mScale(com.earthview.world.spatial.math.Vector3 mScale)
	{
		long mScaleParamValue = mScale.nativeObject.pointer;
		
		set_mScale_CVector3(this.nativeObject.pointer, mScaleParamValue);
	}
	
	native private long get_mQuation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_mQuation()
	{
		long jniValue = get_mQuation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	
	native private void set_mQuation_CQuaternion (long pNativeObject, long value);
	public void set_mQuation(com.earthview.world.spatial.math.Quaternion mQuation)
	{
		long mQuationParamValue = mQuation.nativeObject.pointer;
		
		set_mQuation_CQuaternion(this.nativeObject.pointer, mQuationParamValue);
	}
	
	native private long get_mAttriMap_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.MeshAttrMap get_mAttriMap()
	{
		long jniValue = get_mAttriMap_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataexchange.MeshAttrMap __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshAttrMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshAttrMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshAttrMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshAttrMap");
		}
		return __returnValue;
	}
	
	native private void set_mAttriMap_MeshAttrMap (long pNativeObject, long value);
	public void set_mAttriMap(com.earthview.world.spatial3d.dataexchange.MeshAttrMap mAttriMap)
	{
		long mAttriMapParamValue = mAttriMap.nativeObject.pointer;
		
		set_mAttriMap_MeshAttrMap(this.nativeObject.pointer, mAttriMapParamValue);
	}
	
	public EntityMetaData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityMetaData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EntityMetaData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityMetaData obj = null;
 		if(baseObj instanceof EntityMetaData)
		{
			obj = (EntityMetaData)baseObj;
		} else {
			obj = new EntityMetaData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntityMetaData");
			obj.increaseCast();
		}

		return obj;
	}
}
