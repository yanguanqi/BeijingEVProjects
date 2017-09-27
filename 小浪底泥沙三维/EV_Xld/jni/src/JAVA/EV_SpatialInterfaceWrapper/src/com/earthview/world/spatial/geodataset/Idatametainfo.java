package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集元信息接口，用于记录数据集的相关信息
 */
public class Idatametainfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IDataMetaInfo", new IdatametainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIDataMetaInfoProxy", new IdatametainfoClassFactory());
	}

	protected  int getDatasetType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVDatasetType returnValue = getDatasetType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getEnvelopeRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelopeRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	public Idatametainfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idatametainfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Idatametainfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idatametainfo obj = null;
 		if(baseObj instanceof Idatametainfo)
		{
			obj = (Idatametainfo)baseObj;
		} else {
			obj = new Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDataMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
