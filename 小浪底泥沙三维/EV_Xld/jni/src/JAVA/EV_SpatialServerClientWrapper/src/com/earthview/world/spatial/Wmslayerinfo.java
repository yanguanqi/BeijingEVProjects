package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS数据集元数据类注意：IDataMetaInfo获取的DataMetaInfo可能为目录层或数据层;						通过isCategoryLayer()函数判断该对象是否目录层，目录层对象的				getName()返回的值为空，不能被openDataset()打开,即返回NULL;					目录图层应包含数据层，数据层可打开为数据集。						
 */
public class Wmslayerinfo extends com.earthview.world.spatial.ServerLayerInfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSLayerInfo", new WmslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSLayerInfoProxy", new WmslayerinfoClassFactory());
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取范围
	 * @return 经纬度范围(wgs84或相似坐标系)
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
	 * 参考坐标系
	 * @return NULL（所支持的坐标系不定）
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

	protected  String getSRS_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getSRS(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSRS_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定投影名称
	 * @param index 索引
	 * @return 指定投影名称
	 */
	public String getSRS(long index)
	{
		long indexParamValue = index;
		String returnValue = getSRS_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getSRS_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getSRS_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getSRS_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getSRSCount_void_callback()
	{
		long returnValue = getSRSCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSRSCount_void(long pNativeObject);
	/**
	 * 获取图层支持投影数目
	 * @return 投影数目
	 */
	public long getSRSCount()
	{
		long returnValue = getSRSCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSRSCount_void_NoVirtual(long pNativeObject);
	protected long getSRSCount_NoVirtual()
	{
		long returnValue = getSRSCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getStyleCount_void(long pNativeObject);
	/**
	 * 获取风格数目
	 * @return 风格数目
	 */
	public long getStyleCount()
	{
		long returnValue = getStyleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStyleCount_void_NoVirtual(long pNativeObject);
	protected long getStyleCount_NoVirtual()
	{
		long returnValue = getStyleCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getStyle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定风格名称
	 * @param index 索引
	 * @return 指定风格名称
	 */
	public String getStyle(long index)
	{
		long indexParamValue = index;
		String returnValue = getStyle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getStyle_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getStyle_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getStyle_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getStyleDetailsRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定风格详细描述
	 * @param index 索引
	 * @return 指定风格详细描述
	 */
	public com.earthview.world.spatial.Ogcwebservicestyle getStyleDetailsRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getStyleDetailsRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebservicestyle __returnValue = new com.earthview.world.spatial.Ogcwebservicestyle(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebservicestyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceStyle");
		}
		return __returnValue;
	}
	native private long getStyleDetailsRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.Ogcwebservicestyle getStyleDetailsRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getStyleDetailsRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebservicestyle __returnValue = new com.earthview.world.spatial.Ogcwebservicestyle(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebservicestyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceStyle");
		}
		return __returnValue;
	}

	native private long getBoundingBoxCount_void(long pNativeObject);
	/**
	 * 获取其他数据范围描述数目
	 * @return 其他数据范围描述数目
	 */
	public long getBoundingBoxCount()
	{
		long returnValue = getBoundingBoxCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBoundingBoxCount_void_NoVirtual(long pNativeObject);
	protected long getBoundingBoxCount_NoVirtual()
	{
		long returnValue = getBoundingBoxCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getBoundingBoxRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定其他投影数据范围描述
	 * @param index 索引
	 * @return 指定其他投影数据范围描述
	 */
	public com.earthview.world.spatial.Ogcwebserviceboundingbox getBoundingBoxRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getBoundingBoxRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebserviceboundingbox __returnValue = new com.earthview.world.spatial.Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebserviceboundingbox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceBoundingBox");
		}
		return __returnValue;
	}
	native private long getBoundingBoxRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.Ogcwebserviceboundingbox getBoundingBoxRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getBoundingBoxRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebserviceboundingbox __returnValue = new com.earthview.world.spatial.Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebserviceboundingbox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceBoundingBox");
		}
		return __returnValue;
	}

	native private String getDataFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片格式
	 * @param index 索引
	 * @return 图片格式
	 */
	public String getDataFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getDataFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getDataFormat_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getDataFormat_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getDataFormat_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getDataFormatCount_void(long pNativeObject);
	/**
	 * 获取图片格式数目
	 * @return 图片格式数目
	 */
	public long getDataFormatCount()
	{
		long returnValue = getDataFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDataFormatCount_void_NoVirtual(long pNativeObject);
	protected long getDataFormatCount_NoVirtual()
	{
		long returnValue = getDataFormatCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getInfoFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定要素格式
	 * @param index 索引
	 * @return 指定要素格式
	 */
	public String getInfoFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getInfoFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getInfoFormat_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getInfoFormat_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getInfoFormat_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getInfoFormatCount_void(long pNativeObject);
	/**
	 * 获取要素格式数目
	 * @return 要素格式数目
	 */
	public long getInfoFormatCount()
	{
		long returnValue = getInfoFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getInfoFormatCount_void_NoVirtual(long pNativeObject);
	protected long getInfoFormatCount_NoVirtual()
	{
		long returnValue = getInfoFormatCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取含有子图层数目
	 * @return 子图层数目
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定子图层信息
	 * @param index 索引
	 * @return 指定子图层信息
	 */
	public com.earthview.world.spatial.Wmslayerinfo getLayerInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmslayerinfo __returnValue = new com.earthview.world.spatial.Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_EVString(long pNativeObject, String layername);
	/**
	 * 获取指定子图层信息
	 * @param layername 子图层名称
	 * @return 指定子图层信息
	 */
	public com.earthview.world.spatial.Wmslayerinfo getLayerInfoRef(String layername)
	{
		String layernameParamValue = layername;
		long returnValue = getLayerInfoRef_EVString(this.nativeObject.pointer, layernameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmslayerinfo __returnValue = new com.earthview.world.spatial.Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSLayerInfo");
		}
		return __returnValue;
	}
	native private long getMetaDataURLCount_void(long pNativeObject);
	/**
	 * 获取元数据地址数目
	 * @return 元数据地址数目
	 */
	public long getMetaDataURLCount()
	{
		long returnValue = getMetaDataURLCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMetaDataURL_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定元数据地址
	 * @param index 索引
	 * @return 指定元数据地址
	 */
	public com.earthview.world.spatial.Ogcmetadataurlinfo getMetaDataURL(long index)
	{
		long indexParamValue = index;
		long returnValue = getMetaDataURL_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcmetadataurlinfo __returnValue = new com.earthview.world.spatial.Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCMetaDataURLInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcmetadataurlinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCMetaDataURLInfo");
		}
		return __returnValue;
	}
	native private long getFeatureListURLCount_void(long pNativeObject);
	/**
	 * 获取要素列表地址数目
	 * @return 要素列表地址数目
	 */
	public long getFeatureListURLCount()
	{
		long returnValue = getFeatureListURLCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFeatureListURL_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定要素列表地址
	 * @param index 索引
	 * @return 指定要素列表地址
	 */
	public com.earthview.world.spatial.Ogcmetadataurlinfo getFeatureListURL(long index)
	{
		long indexParamValue = index;
		long returnValue = getFeatureListURL_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcmetadataurlinfo __returnValue = new com.earthview.world.spatial.Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCMetaDataURLInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcmetadataurlinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCMetaDataURLInfo");
		}
		return __returnValue;
	}
	native private long getAuthorityURL_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定地址
	 * @param index 索引
	 * @return 指定地址
	 */
	public com.earthview.world.spatial.Ogcwmsauthorityurl getAuthorityURL(long index)
	{
		long indexParamValue = index;
		long returnValue = getAuthorityURL_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsauthorityurl __returnValue = new com.earthview.world.spatial.Ogcwmsauthorityurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSAuthorityURL");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsauthorityurl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSAuthorityURL");
		}
		return __returnValue;
	}
	native private long getAuthorityCount_void(long pNativeObject);
	/**
	 * 获取地址数目
	 * @return 地址数目
	 */
	public long getAuthorityCount()
	{
		long returnValue = getAuthorityCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDimensionInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定维度信息
	 * @param index 索引
	 * @return 指定维度信息
	 */
	public com.earthview.world.spatial.Ogcwmsdimensioninfo getDimensionInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getDimensionInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsdimensioninfo __returnValue = new com.earthview.world.spatial.Ogcwmsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSDimensionInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsdimensioninfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSDimensionInfo");
		}
		return __returnValue;
	}
	native private long getDimensionCount_void(long pNativeObject);
	/**
	 * 获取维度信息数目
	 * @return 维度信息数目
	 */
	public long getDimensionCount()
	{
		long returnValue = getDimensionCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLatLongBoundingBoxRef_void(long pNativeObject);
	/**
	 * 获取84坐标系的数据范围
	 * @return 维度信息数目
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getLatLongBoundingBoxRef()
	{
		long returnValue = getLatLongBoundingBoxRef_void(this.nativeObject.pointer);
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
	native private long getDataURLRef_void(long pNativeObject);
	/**
	 * 获取数据地址
	 * @return 数据地址
	 */
	public com.earthview.world.spatial.Ogcmetadataurlinfo getDataURLRef()
	{
		long returnValue = getDataURLRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcmetadataurlinfo __returnValue = new com.earthview.world.spatial.Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCMetaDataURLInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcmetadataurlinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCMetaDataURLInfo");
		}
		return __returnValue;
	}
	native private long getWMSScaleHintRef_void(long pNativeObject);
	/**
	 * 获取比例尺限制
	 * @return 比例尺限制
	 */
	public com.earthview.world.spatial.Ogcwmsscalehint getWMSScaleHintRef()
	{
		long returnValue = getWMSScaleHintRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsscalehint __returnValue = new com.earthview.world.spatial.Ogcwmsscalehint(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAttributionRef_void(long pNativeObject);
	/**
	 * 获取属性
	 * @return 属性
	 */
	public com.earthview.world.spatial.Ogcwmsattribution getAttributionRef()
	{
		long returnValue = getAttributionRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsattribution __returnValue = new com.earthview.world.spatial.Ogcwmsattribution(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSAttribution");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsattribution)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSAttribution");
		}
		return __returnValue;
	}
	native private long getParentLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取父图层信息
	 * @return 父图层信息
	 */
	public com.earthview.world.spatial.Wmslayerinfo getParentLayerInfoRef()
	{
		long returnValue = getParentLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmslayerinfo __returnValue = new com.earthview.world.spatial.Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSLayerInfo");
		}
		return __returnValue;
	}
	native private long isQueryable_void(long pNativeObject);
	/**
	 * 获取是否可查询
	 * @return NULL表示无此值，否则取值
	 */
	public BooleanPointer isQueryable()
	{
		long returnValue = isQueryable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getCascaded_void(long pNativeObject);
	/**
	 * 获取所分级别
	 * @return NULL表示无此值，否则取值
	 */
	public UIntegerPointer getCascaded()
	{
		long returnValue = getCascaded_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long isOpaque_void(long pNativeObject);
	/**
	 * 是否不透明
	 * @return NULL表示无此值，否则取值
	 */
	public BooleanPointer isOpaque()
	{
		long returnValue = isOpaque_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long isNoSubsets_void(long pNativeObject);
	/**
	 * 是否不含子数据集
	 * @return NULL表示无此值，否则取值
	 */
	public BooleanPointer isNoSubsets()
	{
		long returnValue = isNoSubsets_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFixedWidth_void(long pNativeObject);
	/**
	 * 获取固定宽度
	 * @return NULL表示无此值，否则取值
	 */
	public UIntegerPointer getFixedWidth()
	{
		long returnValue = getFixedWidth_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFixedHeight_void(long pNativeObject);
	/**
	 * 获取固定高度
	 * @return NULL表示无此值，否则取值
	 */
	public UIntegerPointer getFixedHeight()
	{
		long returnValue = getFixedHeight_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean isCategoryLayer_void(long pNativeObject);
	/**
	 * 是否是目录图层，目录图层没有name，不可被openDataset()打开，可通过其获取子LayerInfo;数据图层也可含有子数据图层
	 * @return true表示是目录层
	 */
	public boolean isCategoryLayer()
	{
		boolean returnValue = isCategoryLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Wmslayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmslayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_getSRS_ev_uint32(long pNativeObject, String method);
	native protected void register_getSRSCount_void(long pNativeObject, String method);
	native protected void register_getDataFormat_ev_uint32(long pNativeObject, String method);
	native protected void register_getDataFormatCount_void(long pNativeObject, String method);
	native protected void register_getInfoFormat_ev_uint32(long pNativeObject, String method);
	native protected void register_getInfoFormatCount_void(long pNativeObject, String method);
	native protected void register_getBoundingBoxCount_void(long pNativeObject, String method);
	native protected void register_getBoundingBoxRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getStyleCount_void(long pNativeObject, String method);
	native protected void register_getStyle_ev_uint32(long pNativeObject, String method);
	native protected void register_getStyleDetailsRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSRS_ev_uint32(this.nativeObject.pointer, "getSRS_ev_uint32_callback");
			this.register_getSRSCount_void(this.nativeObject.pointer, "getSRSCount_void_callback");
			this.register_getDataFormat_ev_uint32(this.nativeObject.pointer, "getDataFormat_ev_uint32_callback");
			this.register_getDataFormatCount_void(this.nativeObject.pointer, "getDataFormatCount_void_callback");
			this.register_getInfoFormat_ev_uint32(this.nativeObject.pointer, "getInfoFormat_ev_uint32_callback");
			this.register_getInfoFormatCount_void(this.nativeObject.pointer, "getInfoFormatCount_void_callback");
			this.register_getBoundingBoxCount_void(this.nativeObject.pointer, "getBoundingBoxCount_void_callback");
			this.register_getBoundingBoxRef_ev_uint32(this.nativeObject.pointer, "getBoundingBoxRef_ev_uint32_callback");
			this.register_getStyleCount_void(this.nativeObject.pointer, "getStyleCount_void_callback");
			this.register_getStyle_ev_uint32(this.nativeObject.pointer, "getStyle_ev_uint32_callback");
			this.register_getStyleDetailsRef_ev_uint32(this.nativeObject.pointer, "getStyleDetailsRef_ev_uint32_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Wmslayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmslayerinfo obj = null;
 		if(baseObj instanceof Wmslayerinfo)
		{
			obj = (Wmslayerinfo)baseObj;
		} else {
			obj = new Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMSLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
