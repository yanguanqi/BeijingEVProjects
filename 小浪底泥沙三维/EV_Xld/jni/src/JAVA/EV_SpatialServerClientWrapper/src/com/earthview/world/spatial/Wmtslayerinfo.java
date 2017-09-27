package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS数据集元数据类
 */
public class Wmtslayerinfo extends com.earthview.world.spatial.ServerLayerInfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSLayerInfo", new WmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSLayerInfoProxy", new WmtslayerinfoClassFactory());
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

	native private String getDataFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片格式
	 * @param index 索引
	 * @return 指定图片格式
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
	 * 获取图片数目
	 * @return 图片数目
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

	native private String getMetaData_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定元数据名称
	 * @param index 索引
	 * @return 指定元数据名称
	 */
	public String getMetaData(long index)
	{
		long indexParamValue = index;
		String returnValue = getMetaData_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getMetaDataCount_void(long pNativeObject);
	/**
	 * 获取元数据数目
	 * @return 元数据数目
	 */
	public long getMetaDataCount()
	{
		long returnValue = getMetaDataCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getResourceURL_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定资源地址
	 * @param index 索引
	 * @return 指定资源地址
	 */
	public com.earthview.world.spatial.Ogcresourceurl getResourceURL(long index)
	{
		long indexParamValue = index;
		long returnValue = getResourceURL_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcresourceurl __returnValue = new com.earthview.world.spatial.Ogcresourceurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCResourceURL");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcresourceurl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCResourceURL");
		}
		return __returnValue;
	}
	native private long getResourceURLCount_void(long pNativeObject);
	/**
	 * 获取资源地址数目
	 * @return 资源地址数目
	 */
	public long getResourceURLCount()
	{
		long returnValue = getResourceURLCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDimensionInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定其他维度信息
	 * @param index 索引
	 * @return 指定其他维度信息
	 */
	public com.earthview.world.spatial.Ogcwmtsdimensioninfo getDimensionInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getDimensionInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtsdimensioninfo __returnValue = new com.earthview.world.spatial.Ogcwmtsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSDimensionInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtsdimensioninfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSDimensionInfo");
		}
		return __returnValue;
	}
	native private long getDimensionInfo_void(long pNativeObject);
	/**
	 * 获取其他获取维度信息数目
	 * @return 其他获取维度信息数目
	 */
	public long getDimensionInfo()
	{
		long returnValue = getDimensionInfo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileMatrixSetLinkCount_void(long pNativeObject);
	/**
	 * 获取该图层TileMatrixSet数目
	 * @return 该图层TileMatrixSet数目
	 */
	public long getTileMatrixSetLinkCount()
	{
		long returnValue = getTileMatrixSetLinkCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileMatrixSetLinkRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定CTileMatrixSetLink
	 * @param index 索引
	 * @return 指定CTileMatrixSetLink
	 */
	public com.earthview.world.spatial.Ogctilematrixsetlink getTileMatrixSetLinkRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getTileMatrixSetLinkRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogctilematrixsetlink __returnValue = new com.earthview.world.spatial.Ogctilematrixsetlink(CreatedWhenConstruct.CWC_NotToCreate, "COGCTileMatrixSetLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogctilematrixsetlink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCTileMatrixSetLink");
		}
		return __returnValue;
	}
	native private long getTileMatrixSetLinkRef_EVString(long pNativeObject, String tilematrixset);
	/**
	 * 获取指定CTileMatrixSetLink
	 * @param tilematrixset tilematrixset名称
	 * @return 指定CTileMatrixSetLink
	 */
	public com.earthview.world.spatial.Ogctilematrixsetlink getTileMatrixSetLinkRef(String tilematrixset)
	{
		String tilematrixsetParamValue = tilematrixset;
		long returnValue = getTileMatrixSetLinkRef_EVString(this.nativeObject.pointer, tilematrixsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogctilematrixsetlink __returnValue = new com.earthview.world.spatial.Ogctilematrixsetlink(CreatedWhenConstruct.CWC_NotToCreate, "COGCTileMatrixSetLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogctilematrixsetlink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCTileMatrixSetLink");
		}
		return __returnValue;
	}
	native private long getTileMatrixSetRef_EVString(long pNativeObject, String tilematrixset);
	/**
	 * 获取指定EarthView::World::Spatial::CTileMatrixSet
	 * @param tilematrixset tilematrixset名称
	 * @return 指定EarthView::World::Spatial::CTileMatrixSet
	 */
	public com.earthview.world.spatial.TileMatrixSet getTileMatrixSetRef(String tilematrixset)
	{
		String tilematrixsetParamValue = tilematrixset;
		long returnValue = getTileMatrixSetRef_EVString(this.nativeObject.pointer, tilematrixsetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileMatrixSet __returnValue = new com.earthview.world.spatial.TileMatrixSet(CreatedWhenConstruct.CWC_NotToCreate, "CTileMatrixSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileMatrixSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileMatrixSet");
		}
		return __returnValue;
	}
	public Wmtslayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmtslayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取其他数据范围描述数目
	 * @return 其他数据范围描述数目
	 */
	public long getBoundingBoxCount()
	{
		return super.getBoundingBoxCount_NoVirtual();
	}
	/**
	 * 获取指定其他投影数据范围描述
	 * @param index 索引
	 * @return 指定其他投影数据范围描述
	 */
	public com.earthview.world.spatial.Ogcwebserviceboundingbox getBoundingBoxRef(long index)
	{
		return super.getBoundingBoxRef_NoVirtual(index);
	}
	/**
	 * 获取风格数目
	 * @return 风格数目
	 */
	public long getStyleCount()
	{
		return super.getStyleCount_NoVirtual();
	}
	/**
	 * 获取指定风格名称
	 * @param index 索引
	 * @return 指定风格名称
	 */
	public String getStyle(long index)
	{
		return super.getStyle_NoVirtual(index);
	}
	/**
	 * 获取指定风格详细描述
	 * @param index 索引
	 * @return 指定风格详细描述
	 */
	public com.earthview.world.spatial.Ogcwebservicestyle getStyleDetailsRef(long index)
	{
		return super.getStyleDetailsRef_NoVirtual(index);
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
	
	public static Wmtslayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmtslayerinfo obj = null;
 		if(baseObj instanceof Wmtslayerinfo)
		{
			obj = (Wmtslayerinfo)baseObj;
		} else {
			obj = new Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMTSLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
