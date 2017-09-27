package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集元数据类
 */
public class WebDataMetaInfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebDataMetaInfo", new WebDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebDataMetaInfoProxy", new WebDataMetaInfoClassFactory());
	}

	public WebDataMetaInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebDataMetaInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据集类型
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		return super.getDatasetType_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
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
	
	public static WebDataMetaInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebDataMetaInfo obj = null;
 		if(baseObj instanceof WebDataMetaInfo)
		{
			obj = (WebDataMetaInfo)baseObj;
		} else {
			obj = new WebDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebDataMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
