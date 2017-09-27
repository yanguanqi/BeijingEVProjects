package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的WMTS数据集元数据信息类
 */
public class Evwmtslayerinfo extends com.earthview.world.spatial.Evlayerinfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMTSLayerInfo", new EvwmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMTSLayerInfoProxy", new EvwmtslayerinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param objectname 数据集名称
	 */
	public Evwmtslayerinfo(String objectname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objectnamePtr = new BasePointer(objectname);
		list.add("objectname", objectnamePtr.get());
		Create("JCEVWMTSLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evwmtslayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getAnnotationField_void(long pNativeObject);
	/**
	 * 获取标注字段
	 * @return 标注字段名称
	 */
	public String getAnnotationField()
	{
		String returnValue = getAnnotationField_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCacheMode_void(long pNativeObject);
	/**
	 * 获取缓存模式
	 * @return 缓存模式：WGS84/Mercator
	 */
	public com.earthview.world.spatial.EVSSCCacheMode getCacheMode()
	{
		int returnValue = getCacheMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheMode.toEnum(returnValue);
	}
	native private String getStyleName_void(long pNativeObject);
	/**
	 * 获取风格标识
	 * @return 风格标识
	 */
	public String getStyleName()
	{
		String returnValue = getStyleName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTheme_void(long pNativeObject);
	/**
	 * 获取专题标识
	 * @return 专题标识
	 */
	public String getTheme()
	{
		String returnValue = getTheme_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getQuaryable_void(long pNativeObject);
	/**
	 * 获取是否可查询
	 * @return 0不可查询，1可以查询
	 */
	public int getQuaryable()
	{
		int returnValue = getQuaryable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileHeight_void(long pNativeObject);
	/**
	 * 获取瓦片高度
	 * @return 高度值，单位像素
	 */
	public long getTileHeight()
	{
		long returnValue = getTileHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileWidth_void(long pNativeObject);
	/**
	 * 获取瓦片宽度
	 * @return 宽度值，单位像素
	 */
	public long getTileWidth()
	{
		long returnValue = getTileWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCacheDataType_void(long pNativeObject);
	/**
	 * 获取缓存数据类型
	 * @return vector/image/dem
	 */
	public com.earthview.world.spatial.EVSSCCacheDataType getCacheDataType()
	{
		int returnValue = getCacheDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheDataType.toEnum(returnValue);
	}
	native private int getDatasetType_void(long pNativeObject);
	/**
	 * /获取数据集类型/
	 * @return 数据集类型：DT_SERVER_WMTS_DATASET
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

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	/**
	 * //
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

	public Evwmtslayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmtslayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Evwmtslayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmtslayerinfo obj = null;
 		if(baseObj instanceof Evwmtslayerinfo)
		{
			obj = (Evwmtslayerinfo)baseObj;
		} else {
			obj = new Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMTSLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
