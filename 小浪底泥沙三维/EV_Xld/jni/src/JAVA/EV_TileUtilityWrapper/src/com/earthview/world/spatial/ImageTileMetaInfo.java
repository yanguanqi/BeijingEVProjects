package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageTileMetaInfo extends com.earthview.world.spatial.Itilemetainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CImageTileMetaInfo", new ImageTileMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCImageTileMetaInfoProxy", new ImageTileMetaInfoClassFactory());
	}

	public ImageTileMetaInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImageTileMetaInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.ImageTileMetaInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public ImageTileMetaInfo(int epsg, com.earthview.world.spatial.geometry.Ienvelope pGeoEnv, int minLevel, int maxLevel) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer epsgPtr = new BasePointer(epsg);
		list.add("epsg", epsgPtr.get());
		BasePointer pGeoEnvPtr = new BasePointer(pGeoEnv);
		list.add("pGeoEnv", pGeoEnvPtr.get());
		BasePointer minLevelPtr = new BasePointer(minLevel);
		list.add("minLevel", minLevelPtr.get());
		BasePointer maxLevelPtr = new BasePointer(maxLevel);
		list.add("maxLevel", maxLevelPtr.get());
		Create("JCImageTileMetaInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.ImageTileMetaInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.EVTileDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVTileDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileDatasetType.toEnum(returnValue);
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
	 * 获取数据集的地理范围
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

	native private int getSRID_void(long pNativeObject);
	/**
	 * 获取数据集的坐标系EPSG编号
	 */
	public int getSRID()
	{
		int returnValue = getSRID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSRID_void_NoVirtual(long pNativeObject);
	protected int getSRID_NoVirtual()
	{
		int returnValue = getSRID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getMinLevel_void(long pNativeObject);
	/**
	 * 获取数据集中所含瓦片的最小级别
	 */
	public int getMinLevel()
	{
		int returnValue = getMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinLevel_void_NoVirtual(long pNativeObject);
	protected int getMinLevel_NoVirtual()
	{
		int returnValue = getMinLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取数据集所含瓦片的最高级别
	 */
	public int getMaxLevel()
	{
		int returnValue = getMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxLevel_NoVirtual()
	{
		int returnValue = getMaxLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getDataType_void(long pNativeObject);
	/**
	 * 获取瓦片数据类型
	 */
	public com.earthview.world.spatial.EVTileRasterDataType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileRasterDataType.toEnum(returnValue);
	}
	native private int getDataType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVTileRasterDataType getDataType_NoVirtual()
	{
		int returnValue = getDataType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileRasterDataType.toEnum(returnValue);
	}

	public ImageTileMetaInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageTileMetaInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSRID_void(long pNativeObject, String method);
	native protected void register_getMinLevel_void(long pNativeObject, String method);
	native protected void register_getMaxLevel_void(long pNativeObject, String method);
	native protected void register_getDataType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSRID_void(this.nativeObject.pointer, "getSRID_void_callback");
			this.register_getMinLevel_void(this.nativeObject.pointer, "getMinLevel_void_callback");
			this.register_getMaxLevel_void(this.nativeObject.pointer, "getMaxLevel_void_callback");
			this.register_getDataType_void(this.nativeObject.pointer, "getDataType_void_callback");
		}
	}
	
	public static ImageTileMetaInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageTileMetaInfo obj = null;
 		if(baseObj instanceof ImageTileMetaInfo)
		{
			obj = (ImageTileMetaInfo)baseObj;
		} else {
			obj = new ImageTileMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageTileMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
