package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集元数据集合类
 */
public class Evwebdatametainfos extends com.earthview.world.spatial.geodataset.Idatametainfos {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWebDataMetaInfos", new EvwebdatametainfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWebDataMetaInfosProxy", new EvwebdatametainfosClassFactory());
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取元数据数目
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
	 * 获取指定索引的元数据
	 * @param index 索引
	 * @return 元数据对象指针
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

	native private long add_IDataMetaInfo(long pNativeObject, long info);
	/**
	 * 添加元数据
	 * @param info 元数据
	 * @return 剩余元数据数目
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
	 * 移除指定索引的元数据
	 * @param index 索引
	 * @return 剩余元数据数目
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
	 * 清空所含元数据
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.Evwebdatametainfos ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwebdatametainfos __returnValue = new com.earthview.world.spatial.Evwebdatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "CEVWebDataMetaInfos");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwebdatametainfos)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWebDataMetaInfos");
		}
		return __returnValue;
	}
	public Evwebdatametainfos(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwebdatametainfos(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Evwebdatametainfos fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwebdatametainfos obj = null;
 		if(baseObj instanceof Evwebdatametainfos)
		{
			obj = (Evwebdatametainfos)baseObj;
		} else {
			obj = new Evwebdatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWebDataMetaInfos");
			obj.increaseCast();
		}

		return obj;
	}
}
