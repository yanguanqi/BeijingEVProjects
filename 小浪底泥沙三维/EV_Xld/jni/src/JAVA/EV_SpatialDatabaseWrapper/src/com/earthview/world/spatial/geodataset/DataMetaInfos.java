package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集元信息集合
 */
public class DataMetaInfos extends com.earthview.world.spatial.geodataset.Idatametainfos {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDataMetaInfos", new DataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDataMetaInfosProxy", new DataMetaInfosClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DataMetaInfos() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataMetaInfosProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.DataMetaInfos".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取数据集元信息的个数
	 * @param  
	 * @return 数据集元信息的个数
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
	 * 获取索引为index处的数据集元信息
	 * @param index 索引号
	 * @return 数据集元信息
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	native private long add_IDataMetaInfo(long pNativeObject, long ref_info);
	/**
	 * 添加数据集元信息
	 * @param info 索引信息对象
	 * @return 数据集元信息的个数
	 */
	public long add(com.earthview.world.spatial.geodataset.Idatametainfo ref_info)
	{
		long ref_infoParamValue = (ref_info == null ? 0L : ref_info.nativeObject.pointer);
		long returnValue = add_IDataMetaInfo(this.nativeObject.pointer, ref_infoParamValue);
		return returnValue;
	}
	native private long add_IDataMetaInfo_NoVirtual(long pNativeObject, long ref_info);
	protected long add_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo ref_info)
	{
		long ref_infoParamValue = (ref_info == null ? 0L : ref_info.nativeObject.pointer);
		long returnValue = add_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, ref_infoParamValue);
		return returnValue;
	}

	protected  long remove_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		long returnValue = remove(indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long remove_ev_int32(long pNativeObject, int index);
	/**
	 * 移除索引为index处的数据
	 * @param  
	 * @return 数据集元信息的个数
	 */
	public long remove(int index)
	{
		int indexParamValue = index;
		long returnValue = remove_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long remove_ev_int32_NoVirtual(long pNativeObject, int index);
	protected long remove_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = remove_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long clear_void(long pNativeObject);
	/**
	 * 删除所有的数据集元信息
	 * @param  
	 * @return 0
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

	public DataMetaInfos(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataMetaInfos(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 移除指定索引的对象
	 * @param index 指定索引
	 */
	public long remove(long index)
	{
		return super.remove_NoVirtual(index);
	}
	
	native protected void register_remove_ev_int32(long pNativeObject, String method);
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getInfo_ev_uint32(long pNativeObject, String method);
	native protected void register_add_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_remove_ev_uint32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_remove_ev_int32(this.nativeObject.pointer, "remove_ev_int32_callback");
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getInfo_ev_uint32(this.nativeObject.pointer, "getInfo_ev_uint32_callback");
			this.register_add_IDataMetaInfo(this.nativeObject.pointer, "add_IDataMetaInfo_callback");
			this.register_remove_ev_uint32(this.nativeObject.pointer, "remove_ev_uint32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
		}
	}
	
	public static DataMetaInfos fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataMetaInfos obj = null;
 		if(baseObj instanceof DataMetaInfos)
		{
			obj = (DataMetaInfos)baseObj;
		} else {
			obj = new DataMetaInfos(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataMetaInfos");
			obj.increaseCast();
		}

		return obj;
	}
}
