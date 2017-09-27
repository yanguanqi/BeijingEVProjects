package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集元信息集合，用于记录数据集的相关信息
 */
public class ChartDataMetaInfos extends com.earthview.world.spatial.geodataset.Idatametainfos {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos", new ChartDataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataMetaInfosProxy", new ChartDataMetaInfosClassFactory());
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取元信息数目
	 * @return 数据集元信息的数目
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCount_void_NoVirtual(long pNativeObject);
	protected long getCount_NoVirtual()
	{
		long returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的数据集元信息
	 * @param index 指定索引
	 * @return 按照指定索引范围对象，如果索引超出范围，则抛出异常
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getInfo_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getInfo_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getInfo_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	native private long add_IDataMetaInfo(long pNativeObject, long info);
	/**
	 * 添加指定数据集元信息
	 * @param info 数据集元信息对象
	 * @return 添加后的索引
	 */
	public long add(com.earthview.world.spatial.geodataset.Idatametainfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		long returnValue = add_IDataMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private long add_IDataMetaInfo_NoVirtual(long pNativeObject, long info);
	protected long add_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		long returnValue = add_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}

	native private long remove_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的对象
	 * @param index 指定索引
	 */
	public long remove(long index)
	{
		long indexParamValue = index;
		long returnValue = remove_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long remove_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected long remove_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = remove_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long clear_void(long pNativeObject);
	/**
	 * 清楚所有对象
	 * @return 清除对象的个数
	 */
	public long clear()
	{
		long returnValue = clear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long clear_void_NoVirtual(long pNativeObject);
	protected long clear_NoVirtual()
	{
		long returnValue = clear_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public ChartDataMetaInfos(com.earthview.world.spatial.geodataset.ChartDataSource source) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		Create("JCChartDataMetaInfosProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.ChartDataMetaInfos".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void getDatasetNames_StringVector(long pNativeObject, long namelist);
	public void getDatasetNames(com.earthview.world.core.StringVector namelist)
	{
		long namelistParamValue = namelist.nativeObject.pointer;
		getDatasetNames_StringVector(this.nativeObject.pointer, namelistParamValue);
	}
	public ChartDataMetaInfos(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartDataMetaInfos(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getInfo_ev_uint32(long pNativeObject, String method);
	native protected void register_add_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_remove_ev_uint32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getInfo_ev_uint32(this.nativeObject.pointer, "getInfo_ev_uint32_callback");
			this.register_add_IDataMetaInfo(this.nativeObject.pointer, "add_IDataMetaInfo_callback");
			this.register_remove_ev_uint32(this.nativeObject.pointer, "remove_ev_uint32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
		}
	}
	
	public static ChartDataMetaInfos fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartDataMetaInfos obj = null;
 		if(baseObj instanceof ChartDataMetaInfos)
		{
			obj = (ChartDataMetaInfos)baseObj;
		} else {
			obj = new ChartDataMetaInfos(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartDataMetaInfos");
			obj.increaseCast();
		}

		return obj;
	}
}
