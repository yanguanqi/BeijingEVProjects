package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS数据集元数据类注意：IDataMetaInfo获取的DataMetaInfo可能为目录层或数据层;						通过isCategoryLayer()函数判断该对象是否目录层，目录层对象的				getName()返回的值为空，不能被openDataset()打开,即返回NULL;					目录图层应包含数据层，数据层可打开为数据集。						
 */
public class Wfslayerinfo extends com.earthview.world.spatial.ServerLayerInfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSLayerInfo", new WfslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSLayerInfoProxy", new WfslayerinfoClassFactory());
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

	protected  String getSRS_void_callback()
	{
		String returnValue = getSRS();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSRS_void(long pNativeObject);
	/**
	 * 获取投影GML
	 * @return GML投影
	 */
	public String getSRS()
	{
		String returnValue = getSRS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSRS_void_NoVirtual(long pNativeObject);
	protected String getSRS_NoVirtual()
	{
		String returnValue = getSRS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getOutputFormmat_void_callback()
	{
		String returnValue = getOutputFormmat();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getOutputFormmat_void(long pNativeObject);
	/**
	 * 获取投影名称
	 * @param index 索引
	 * @return 指定投影名称
	 */
	public String getOutputFormmat()
	{
		String returnValue = getOutputFormmat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOutputFormmat_void_NoVirtual(long pNativeObject);
	protected String getOutputFormmat_NoVirtual()
	{
		String returnValue = getOutputFormmat_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	public Wfslayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wfslayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取指定图片格式
	 * @param index 索引
	 * @return 指定图片格式
	 */
	public String getDataFormat(long index)
	{
		return super.getDataFormat_NoVirtual(index);
	}
	/**
	 * 获取图片格式数目
	 * @return 图片格式数目
	 */
	public long getDataFormatCount()
	{
		return super.getDataFormatCount_NoVirtual();
	}
	/**
	 * 获取指定要素格式
	 * @param index 索引
	 * @return 指定要素格式
	 */
	public String getInfoFormat(long index)
	{
		return super.getInfoFormat_NoVirtual(index);
	}
	/**
	 * 获取要素格式数目
	 * @return 要素格式数目
	 */
	public long getInfoFormatCount()
	{
		return super.getInfoFormatCount_NoVirtual();
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
	
	native protected void register_getSRS_void(long pNativeObject, String method);
	native protected void register_getOutputFormmat_void(long pNativeObject, String method);
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
			this.register_getSRS_void(this.nativeObject.pointer, "getSRS_void_callback");
			this.register_getOutputFormmat_void(this.nativeObject.pointer, "getOutputFormmat_void_callback");
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
	
	public static Wfslayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wfslayerinfo obj = null;
 		if(baseObj instanceof Wfslayerinfo)
		{
			obj = (Wfslayerinfo)baseObj;
		} else {
			obj = new Wfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWFSLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
