package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间数据元数据信息类
 */
public class ServerLayerInfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerLayerInfo", new ServerLayerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCServerLayerInfoProxy", new ServerLayerInfoClassFactory());
	}

	native private String getName_void(long pNativeObject);
	///继承EarthView::World::Spatial::GeoDataset::IDataMetaInfo
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
	 * @return 获取数据集类型
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层信息类型
	 * @return 图层信息类型
	 */
	public com.earthview.world.spatial.EVServerLayerInfoType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVServerLayerInfoType.toEnum(returnValue);
	}
	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取图层名称
	 * @return 图层名称
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private String getLayerTitle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图层标题
	 * @param index 索引
	 * @return 指定图层标题
	 */
	public String getLayerTitle(long index)
	{
		long indexParamValue = index;
		String returnValue = getLayerTitle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getLayerTitleCount_void(long pNativeObject);
	/**
	 * 获取图层标题数目
	 * @return 标题数目
	 */
	public long getLayerTitleCount()
	{
		long returnValue = getLayerTitleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerAbstractCount_void(long pNativeObject);
	/**
	 * 获取图层描述数目
	 * @return 图层描述数目
	 */
	public long getLayerAbstractCount()
	{
		long returnValue = getLayerAbstractCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLayerAbstract_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图层描述
	 * @param index 索引
	 * @return 指定图层描述
	 */
	public String getLayerAbstract(long index)
	{
		long indexParamValue = index;
		String returnValue = getLayerAbstract_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	protected  String getDataFormat_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getDataFormat(indexParamValue);
		String __returnValue = returnValue;
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

	protected  long getDataFormatCount_void_callback()
	{
		long returnValue = getDataFormatCount();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  String getInfoFormat_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getInfoFormat(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  long getInfoFormatCount_void_callback()
	{
		long returnValue = getInfoFormatCount();
		long __returnValue = returnValue;
		return __returnValue;
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

	native private String getKeywords_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图层描述关键字
	 * @param index 索引
	 * @return 指定图层描述关键字
	 */
	public String getKeywords(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeywords_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getKeywordsCount_void(long pNativeObject);
	/**
	 * 获取图层描述关键字数目
	 * @return 图层描述关键字数目
	 */
	public long getKeywordsCount()
	{
		long returnValue = getKeywordsCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long getBoundingBoxCount_void_callback()
	{
		long returnValue = getBoundingBoxCount();
		long __returnValue = returnValue;
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

	protected  long getBoundingBoxRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.Ogcwebserviceboundingbox returnValue = getBoundingBoxRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long getStyleCount_void_callback()
	{
		long returnValue = getStyleCount();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  String getStyle_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getStyle(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  long getStyleDetailsRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.Ogcwebservicestyle returnValue = getStyleDetailsRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	public ServerLayerInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerLayerInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ServerLayerInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerLayerInfo obj = null;
 		if(baseObj instanceof ServerLayerInfo)
		{
			obj = (ServerLayerInfo)baseObj;
		} else {
			obj = new ServerLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
