package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的DEM数据集元数据信息类
 */
public class Evdemlayerinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVDEMLayerInfo", new EvdemlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVDEMLayerInfoProxy", new EvdemlayerinfoClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Evdemlayerinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVDEMLayerInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evdemlayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param objectname 数据集名称
	 */
	public Evdemlayerinfo(String objectname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objectnamePtr = new BasePointer(objectname);
		list.add("objectname", objectnamePtr.get());
		Create("JCEVDEMLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evdemlayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getCacheDataType_void(long pNativeObject);
	/**
	 * 获取缓存类型
	 * @return 缓存类型：SSC_CacheDataType_DEM
	 */
	public com.earthview.world.spatial.EVSSCCacheDataType getCacheDataType()
	{
		int returnValue = getCacheDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheDataType.toEnum(returnValue);
	}
	native private int getDataType_void(long pNativeObject);
	/**
	 * 获取数据类型
	 * @return 数据类型
	 */
	public com.earthview.world.spatial.EVSSCLayerDataType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCLayerDataType.toEnum(returnValue);
	}
	native private int getFileFormat_void(long pNativeObject);
	/**
	 * 获取数据格式
	 * @return 数据格式
	 */
	public com.earthview.world.spatial.EVSSCFileFormat getFileFormat()
	{
		int returnValue = getFileFormat_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCFileFormat.toEnum(returnValue);
	}
	native private double getSpanForZeroLevel_void(long pNativeObject);
	/**
	 * 获取0级跨度
	 * @return 0级瓦片对应的的跨度
	 */
	public double getSpanForZeroLevel()
	{
		double returnValue = getSpanForZeroLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLevelNum_void(long pNativeObject);
	/**
	 * 获取瓦片级别数
	 * @return 级别数
	 */
	public long getLevelNum()
	{
		long returnValue = getLevelNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSamplesPerTile_void(long pNativeObject);
	/**
	 * 获取瓦片每行的像素数
	 * @return 瓦片每行像素数
	 */
	public long getSamplesPerTile()
	{
		long returnValue = getSamplesPerTile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxDataLavel_void(long pNativeObject);
	/**
	 * 获取最大数据级别
	 * @return 最大数据级别
	 */
	public long getMaxDataLavel()
	{
		long returnValue = getMaxDataLavel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMinDataLevel_void(long pNativeObject);
	/**
	 * 获取最小数据级别
	 * @return 最小数据级别
	 */
	public long getMinDataLevel()
	{
		long returnValue = getMinDataLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCacheMode_void(long pNativeObject);
	/**
	 * 获取缓存模式,起点位置
	 * @return 缓存模式：WGS84
	 */
	public com.earthview.world.spatial.EVSSCCacheMode getCacheMode()
	{
		int returnValue = getCacheMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheMode.toEnum(returnValue);
	}
	native private int getSRS_void(long pNativeObject);
	/// 获取数据投影类型
	/// </summary>
	/// <returns>投影类型</returns>
	public com.earthview.world.spatial.EVSSCSRS getSRS()
	{
		int returnValue = getSRS_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCSRS.toEnum(returnValue);
	}
	native private long getDataTime_void(long pNativeObject);
	/**
	 * 获取数据时间
	 * @return 数据采集时间
	 */
	public StringPointer getDataTime()
	{
		long returnValue = getDataTime_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据更新时间
	 * @return 数据更新时间
	 */
	public StringPointer getUpdateTime()
	{
		long returnValue = getUpdateTime_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTemplateEnvelope_IEnvelope(long pNativeObject, long env);
	/**
	 * 设置模板范围（0级跨度范围）
	 * @param env 0级跨度范围
	 */
	public void setTemplateEnvelope(com.earthview.world.spatial.geometry.Ienvelope env)
	{
		long envParamValue = (env == null ? 0L : env.nativeObject.pointer);
		setTemplateEnvelope_IEnvelope(this.nativeObject.pointer, envParamValue);
	}
	native private long getTemplateEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取模板范围（0级跨度范围）
	 * @return 0级跨度范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getTemplateEnvelopeRef()
	{
		long returnValue = getTemplateEnvelopeRef_void(this.nativeObject.pointer);
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
	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 包围盒对象指针
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
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

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型：DT_SERVER_DEM_DATASET
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

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间参考信息
	 * @return 空间参考对象指针，不需外部释放
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

	protected  void getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64_callback(long north, long south, long east, long west)
	{
		DoublePointer northParamValue = new DoublePointer(new InstancePointer(north));
		DoublePointer southParamValue = new DoublePointer(new InstancePointer(south));
		DoublePointer eastParamValue = new DoublePointer(new InstancePointer(east));
		DoublePointer westParamValue = new DoublePointer(new InstancePointer(west));
		getExtentForZeroLevel(northParamValue, southParamValue, eastParamValue, westParamValue);
	}

	native private void getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long north, long south, long east, long west);
	/**
	 * 获取0级瓦片的范围
	 */
	public void getExtentForZeroLevel(DoublePointer north, DoublePointer south, DoublePointer east, DoublePointer west)
	{
		long northParamValue = north.nativeObject.pointer;
		long southParamValue = south.nativeObject.pointer;
		long eastParamValue = east.nativeObject.pointer;
		long westParamValue = west.nativeObject.pointer;
		getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, northParamValue, southParamValue, eastParamValue, westParamValue);
	}
	native private void getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long north, long south, long east, long west);
	protected void getExtentForZeroLevel_NoVirtual(DoublePointer north, DoublePointer south, DoublePointer east, DoublePointer west)
	{
		long northParamValue = north.nativeObject.pointer;
		long southParamValue = south.nativeObject.pointer;
		long eastParamValue = east.nativeObject.pointer;
		long westParamValue = west.nativeObject.pointer;
		getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, northParamValue, southParamValue, eastParamValue, westParamValue);
	}

	protected  int getOriginType_void_callback()
	{
		com.earthview.world.spatial.EVSSCCacheMode returnValue = getOriginType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getOriginType_void(long pNativeObject);
	/**
	 * 获取瓦片起点位置
	 */
	public com.earthview.world.spatial.EVSSCCacheMode getOriginType()
	{
		int returnValue = getOriginType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheMode.toEnum(returnValue);
	}
	native private int getOriginType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCCacheMode getOriginType_NoVirtual()
	{
		int returnValue = getOriginType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheMode.toEnum(returnValue);
	}

	protected  void ev_clone_IDataMetaInfo_callback(long pOther)
	{
		com.earthview.world.spatial.geodataset.Idatametainfo pOtherParamValue = (pOther == 0L ? null : new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOtherParamValue != null)
		{
		pOtherParamValue.setDelegate(true);
		pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		IClassFactory pOtherParamValueClassFactory = GlobalClassFactoryMap.get(pOtherParamValue.getCppInstanceTypeName());
		if (pOtherParamValueClassFactory != null)
		{
			pOtherParamValue.setDelegate(true);
			pOtherParamValue = (com.earthview.world.spatial.geodataset.Idatametainfo)pOtherParamValueClassFactory.create();
			pOtherParamValue.setDelegate(true);
			pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		}
		}
		ev_clone(pOtherParamValue);
	}

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	/**
	 * 
	 * @param  
	 */
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo(this.nativeObject.pointer, pOtherParamValue);
	}
	native private void ev_clone_IDataMetaInfo_NoVirtual(long pNativeObject, long pOther);
	protected void ev_clone_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, pOtherParamValue);
	}

	public Evdemlayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evdemlayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getOriginType_void(long pNativeObject, String method);
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getExtentForZeroLevel_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getOriginType_void(this.nativeObject.pointer, "getOriginType_void_callback");
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evdemlayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evdemlayerinfo obj = null;
 		if(baseObj instanceof Evdemlayerinfo)
		{
			obj = (Evdemlayerinfo)baseObj;
		} else {
			obj = new Evdemlayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVDEMLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
