package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集元信息，用于记录数据集的相关信息
 */
public class ChartDataMetaInfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo", new ChartDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataMetaInfoProxy", new ChartDataMetaInfoClassFactory());
	}

	public ChartDataMetaInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCChartDataMetaInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.ChartDataMetaInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void init_EVString_IEnvelope_ISpatialReference_CChartDatasetHeaderInfo(long pNativeObject, String name, long env, long srs, long info);
	/**
	 * 初始化
	 * @param name 数据名称，内部释放
	 * @param env 包围盒，内部释放
	 * @param srs 坐标系，内部释放
	 * @param info 头信息，内部释放
	 */
	public void init(String name, com.earthview.world.spatial.geometry.Ienvelope env, com.earthview.world.spatial.geometry.Ispatialreference srs, com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo info)
	{
		String nameParamValue = name;
		long envParamValue = (env == null ? 0L : env.nativeObject.pointer);
		long srsParamValue = (srs == null ? 0L : srs.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		init_EVString_IEnvelope_ISpatialReference_CChartDatasetHeaderInfo(this.nativeObject.pointer, nameParamValue, envParamValue, srsParamValue, infoParamValue);
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

	protected  long getDetailDescriptionRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo returnValue = getDetailDescriptionRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDetailDescriptionRef_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo getDetailDescriptionRef()
	{
		long returnValue = getDetailDescriptionRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartDatasetHeaderInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartDatasetHeaderInfo");
		}
		return __returnValue;
	}
	native private long getDetailDescriptionRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo getDetailDescriptionRef_NoVirtual()
	{
		long returnValue = getDetailDescriptionRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartDatasetHeaderInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartDatasetHeaderInfo");
		}
		return __returnValue;
	}

	public ChartDataMetaInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartDataMetaInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDetailDescriptionRef_void(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDetailDescriptionRef_void(this.nativeObject.pointer, "getDetailDescriptionRef_void_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static ChartDataMetaInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartDataMetaInfo obj = null;
 		if(baseObj instanceof ChartDataMetaInfo)
		{
			obj = (ChartDataMetaInfo)baseObj;
		} else {
			obj = new ChartDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartDataMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
