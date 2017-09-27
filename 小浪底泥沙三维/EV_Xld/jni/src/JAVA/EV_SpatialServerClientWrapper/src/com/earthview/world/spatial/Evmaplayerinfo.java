package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的WMS地图图层数据集元数据信息类
 */
public class Evmaplayerinfo extends com.earthview.world.spatial.Evlayerinfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVMapLayerInfo", new EvmaplayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVMapLayerInfoProxy", new EvmaplayerinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param objectname 数据集名称
	 */
	public Evmaplayerinfo(String objectname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objectnamePtr = new BasePointer(objectname);
		list.add("objectname", objectnamePtr.get());
		Create("JCEVMapLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evmaplayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean hasCache_void(long pNativeObject);
	/**
	 * 是否有附加缓存信息
	 * @return true表示有
	 */
	public boolean hasCache()
	{
		boolean returnValue = hasCache_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getThemeRef_void(long pNativeObject);
	/**
	 * 获取专题信息
	 * @return 专题对象指针
	 */
	public com.earthview.world.spatial.ServerTheme getThemeRef()
	{
		long returnValue = getThemeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerTheme __returnValue = new com.earthview.world.spatial.ServerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CServerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerTheme");
		}
		return __returnValue;
	}
	native private long getStyleRef_void(long pNativeObject);
	/**
	 * 获取风格信息
	 * @return 风格对象指针
	 */
	public com.earthview.world.spatial.ServerStyle getStyleRef()
	{
		long returnValue = getStyleRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerStyle __returnValue = new com.earthview.world.spatial.ServerStyle(CreatedWhenConstruct.CWC_NotToCreate, "CServerStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerStyle");
		}
		return __returnValue;
	}
	native private long getCacheLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取缓存信息
	 * @return 缓存对象指针
	 */
	public com.earthview.world.spatial.ServerCacheLayerInfo getCacheLayerInfoRef()
	{
		long returnValue = getCacheLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerCacheLayerInfo __returnValue = new com.earthview.world.spatial.ServerCacheLayerInfo(CreatedWhenConstruct.CWC_NotToCreate, "CServerCacheLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerCacheLayerInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerCacheLayerInfo");
		}
		return __returnValue;
	}
	native private long getAnnotationRef_void(long pNativeObject);
	/**
	 * 获取标注信息
	 * @return 标注对象指针
	 */
	public com.earthview.world.spatial.ServerAnnotation getAnnotationRef()
	{
		long returnValue = getAnnotationRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerAnnotation __returnValue = new com.earthview.world.spatial.ServerAnnotation(CreatedWhenConstruct.CWC_NotToCreate, "CServerAnnotation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerAnnotation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerAnnotation");
		}
		return __returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * /获取数据集名称/
	 * @return 名称
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
	 * /获取数据集类型/
	 * @return 数据集类型：DT_SERVER_WMS_DATASET
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

	/**
	 * 拷贝构造函数
	 * @param info 拷贝对象
	 */
	public Evmaplayerinfo(com.earthview.world.spatial.Evmaplayerinfo info) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer infoPtr = new BasePointer(info);
		list.add("info", infoPtr.get());
		Create("JCEVMapLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evmaplayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	public Evmaplayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evmaplayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取描述信息
	 * @return 描述信息
	 */
	public String getLayerDescription()
	{
		return super.getLayerDescription_NoVirtual();
	}
	/**
	 * 获取所包含数据时间
	 * @return 数据采集时间
	 */
	public String getDataTime()
	{
		return super.getDataTime_NoVirtual();
	}
	/**
	 * 获取数据更新时间
	 * @return 更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 获取数据名称
	 * @return 数据名称
	 */
	public String getLayerName()
	{
		return super.getLayerName_NoVirtual();
	}
	/**
	 * /获取投影类型/
	 * @return 投影类型
	 */
	public com.earthview.world.spatial.EVSSCSRS getSRS()
	{
		return super.getSRS_NoVirtual();
	}
	/**
	 * 获取文件格式
	 * @return 文件格式
	 */
	public com.earthview.world.spatial.EVSSCFileFormat getFileFormat()
	{
		return super.getFileFormat_NoVirtual();
	}
	/**
	 * 获取数据格式
	 * @return 数据格式
	 */
	public com.earthview.world.spatial.EVSSCLayerDataType getLayerDataType()
	{
		return super.getLayerDataType_NoVirtual();
	}
	/**
	 * 获取要素几何类型
	 * @return 几何类型
	 */
	public com.earthview.world.spatial.EVSSCGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取最大数据级别
	 * @return 最大数据级别
	 */
	public int getMaxDataLevel()
	{
		return super.getMaxDataLevel_NoVirtual();
	}
	/**
	 * 获取最小数据级别
	 * @return 最小数据级别
	 */
	public int getMinDataLevel()
	{
		return super.getMinDataLevel_NoVirtual();
	}
	/**
	 * 获取最大字段级别
	 * @return 最大字段级别
	 */
	public int getMaxFieldLevel()
	{
		return super.getMaxFieldLevel_NoVirtual();
	}
	/**
	 * 获取最小字段级别
	 * @return 最小字段级别
	 */
	public int getMinFieldLevel()
	{
		return super.getMinFieldLevel_NoVirtual();
	}
	/**
	 * 获取最大比例尺
	 * @return 最大比例尺分母
	 */
	public double getMaxScale()
	{
		return super.getMaxScale_NoVirtual();
	}
	/**
	 * 获取最小比例尺
	 * @return 最小比例尺分母
	 */
	public double getMinScale()
	{
		return super.getMinScale_NoVirtual();
	}
	/**
	 * 获取属性字段个数
	 * @return 属性个数
	 */
	public long getAttributesCount()
	{
		return super.getAttributesCount_NoVirtual();
	}
	/**
	 * 获取指定属性名称
	 * @param index 索引
	 * @return 指定属性字段名称
	 */
	public String getAttribute(long index)
	{
		return super.getAttribute_NoVirtual(index);
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
	
	native protected void register_getLayerDescription_void(long pNativeObject, String method);
	native protected void register_getDataTime_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_getLayerName_void(long pNativeObject, String method);
	native protected void register_getSRS_void(long pNativeObject, String method);
	native protected void register_getFileFormat_void(long pNativeObject, String method);
	native protected void register_getLayerDataType_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getMaxDataLevel_void(long pNativeObject, String method);
	native protected void register_getMinDataLevel_void(long pNativeObject, String method);
	native protected void register_getMaxFieldLevel_void(long pNativeObject, String method);
	native protected void register_getMinFieldLevel_void(long pNativeObject, String method);
	native protected void register_getMaxScale_void(long pNativeObject, String method);
	native protected void register_getMinScale_void(long pNativeObject, String method);
	native protected void register_getAttributesCount_void(long pNativeObject, String method);
	native protected void register_getAttribute_ev_uint32(long pNativeObject, String method);
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getLayerDescription_void(this.nativeObject.pointer, "getLayerDescription_void_callback");
			this.register_getDataTime_void(this.nativeObject.pointer, "getDataTime_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_getLayerName_void(this.nativeObject.pointer, "getLayerName_void_callback");
			this.register_getSRS_void(this.nativeObject.pointer, "getSRS_void_callback");
			this.register_getFileFormat_void(this.nativeObject.pointer, "getFileFormat_void_callback");
			this.register_getLayerDataType_void(this.nativeObject.pointer, "getLayerDataType_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getMaxDataLevel_void(this.nativeObject.pointer, "getMaxDataLevel_void_callback");
			this.register_getMinDataLevel_void(this.nativeObject.pointer, "getMinDataLevel_void_callback");
			this.register_getMaxFieldLevel_void(this.nativeObject.pointer, "getMaxFieldLevel_void_callback");
			this.register_getMinFieldLevel_void(this.nativeObject.pointer, "getMinFieldLevel_void_callback");
			this.register_getMaxScale_void(this.nativeObject.pointer, "getMaxScale_void_callback");
			this.register_getMinScale_void(this.nativeObject.pointer, "getMinScale_void_callback");
			this.register_getAttributesCount_void(this.nativeObject.pointer, "getAttributesCount_void_callback");
			this.register_getAttribute_ev_uint32(this.nativeObject.pointer, "getAttribute_ev_uint32_callback");
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evmaplayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evmaplayerinfo obj = null;
 		if(baseObj instanceof Evmaplayerinfo)
		{
			obj = (Evmaplayerinfo)baseObj;
		} else {
			obj = new Evmaplayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVMapLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
