package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS服务信息类
 */
public class Wmtsserverinfo extends com.earthview.world.spatial.ServerInfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSServerInfo", new WmtsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSServerInfoProxy", new WmtsserverinfoClassFactory());
	}

	native private long getInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的元数据
	 * @param index 索引
	 * @return 指定元数据对象指针，外部释放
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
	 * 添加元数据
	 * @param info 元数据信息
	 * @return 数据集数目
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

	native private long getUpdateSequence_void(long pNativeObject);
	/**
	 * 获取更新序列标识
	 * @return 更新序列标识
	 */
	public StringPointer getUpdateSequence()
	{
		long returnValue = getUpdateSequence_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getThemeCount_void(long pNativeObject);
	/**
	 * 获取Theme数目
	 * @return Theme数目
	 */
	public long getThemeCount()
	{
		long returnValue = getThemeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getThemeRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定Theme引用
	 * @param index 索引
	 * @return 指定Theme引用
	 */
	public com.earthview.world.spatial.Ogcwmtstheme getThemeRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getThemeRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtstheme __returnValue = new com.earthview.world.spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtstheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSTheme");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图层信息
	 * @param index 索引
	 * @return 指定图层信息引用
	 */
	public com.earthview.world.spatial.Wmtslayerinfo getLayerInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmtslayerinfo __returnValue = new com.earthview.world.spatial.Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMTSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmtslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMTSLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_EVString(long pNativeObject, String layername);
	/**
	 * 获取指定图层信息
	 * @param layername 图层名称
	 * @return 指定图层信息引用
	 */
	public com.earthview.world.spatial.Wmtslayerinfo getLayerInfoRef(String layername)
	{
		String layernameParamValue = layername;
		long returnValue = getLayerInfoRef_EVString(this.nativeObject.pointer, layernameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmtslayerinfo __returnValue = new com.earthview.world.spatial.Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMTSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmtslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMTSLayerInfo");
		}
		return __returnValue;
	}
	public Wmtsserverinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmtsserverinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取元信息数目
	 * @return 数据集元信息的数目
	 */
	public long getCount()
	{
		return super.getCount_NoVirtual();
	}
	/**
	 * 移除指定索引的对象
	 * @param index 指定索引
	 */
	public long remove(long index)
	{
		return super.remove_NoVirtual(index);
	}
	/**
	 * 清楚所有对象
	 * @return 清除对象的个数
	 */
	public long clear()
	{
		return super.clear_NoVirtual();
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
	
	public static Wmtsserverinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmtsserverinfo obj = null;
 		if(baseObj instanceof Wmtsserverinfo)
		{
			obj = (Wmtsserverinfo)baseObj;
		} else {
			obj = new Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMTSServerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
