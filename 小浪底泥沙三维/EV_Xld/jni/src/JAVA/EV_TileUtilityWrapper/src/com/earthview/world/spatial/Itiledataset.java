package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 整型16位DEM
 */
public class Itiledataset extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileDataset", new ItiledatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JITileDatasetProxy", new ItiledatasetClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.EVTileDatasetType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.EVTileDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVTileDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileDatasetType.toEnum(returnValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
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

	protected  String getDataVersion_void_callback()
	{
		ULongPointer returnValue = getDataVersion();
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getUpdateTime_void_callback()
	{
		String returnValue = getUpdateTime();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getMetaInfo_void_callback()
	{
		com.earthview.world.spatial.Itilemetainfo returnValue = getMetaInfo();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMetaInfo_void(long pNativeObject);
	/**
	 * 获取瓦片数据集的元数据信息
	 * @param  
	 * @return 元数据信息
	 */
	public com.earthview.world.spatial.Itilemetainfo getMetaInfo()
	{
		long returnValue = getMetaInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Itilemetainfo __returnValue = new com.earthview.world.spatial.Itilemetainfo(CreatedWhenConstruct.CWC_NotToCreate, "ITileMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Itilemetainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITileMetaInfo");
		}
		return __returnValue;
	}
	native private long getMetaInfo_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Itilemetainfo getMetaInfo_NoVirtual()
	{
		long returnValue = getMetaInfo_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Itilemetainfo __returnValue = new com.earthview.world.spatial.Itilemetainfo(CreatedWhenConstruct.CWC_NotToCreate, "ITileMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Itilemetainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITileMetaInfo");
		}
		return __returnValue;
	}

	protected  long getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback(int level, int row, int col, long format)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		EnumPointer formatParamValue = new EnumPointer(new InstancePointer(format));
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getTileStream(levelParamValue, rowParamValue, colParamValue, formatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType(long pNativeObject, int level, int row, int col, long format);
	/**
	 * 获取指定级别行列号的瓦片数据流
	 * @param  
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getTileStream(int level, int row, int col, EnumPointer format)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long formatParamValue = format.nativeObject.pointer;
		long returnValue = getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, formatParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_NoVirtual(long pNativeObject, int level, int row, int col, long format);
	protected com.earthview.world.core.MemoryDataStreamPtr getTileStream_NoVirtual(int level, int row, int col, EnumPointer format)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long formatParamValue = format.nativeObject.pointer;
		long returnValue = getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, formatParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}

	public Itiledataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itiledataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_getMetaInfo_void(long pNativeObject, String method);
	native protected void register_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_getMetaInfo_void(this.nativeObject.pointer, "getMetaInfo_void_callback");
			this.register_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType(this.nativeObject.pointer, "getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback");
		}
	}
	
	public static Itiledataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itiledataset obj = null;
 		if(baseObj instanceof Itiledataset)
		{
			obj = (Itiledataset)baseObj;
		} else {
			obj = new Itiledataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITileDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
