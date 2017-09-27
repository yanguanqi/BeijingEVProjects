package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWFS服务信息类
 */
public class Wfsserverinfo extends com.earthview.world.spatial.ServerInfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSServerInfo", new WfsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSServerInfoProxy", new WfsserverinfoClassFactory());
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
	native private String getDescribeLayerFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取DescribeLayerFormat格式
	 * @param index 索引
	 * @return DescribeLayerFormat格式
	 */
	public String getDescribeLayerFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getDescribeLayerFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getDescribeLayerFormatCount_void(long pNativeObject);
	/**
	 * 获取DescribeLayerFormat格式数目
	 * @return DescribeLayerFormat数目
	 */
	public long getDescribeLayerFormatCount()
	{
		long returnValue = getDescribeLayerFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCapabilitiesFormat_void(long pNativeObject);
	/**
	 * 获取属性数据格式
	 * @return DescribeLayerFormat
	 */
	public StringPointer getCapabilitiesFormat()
	{
		long returnValue = getCapabilitiesFormat_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFormatCount_void(long pNativeObject);
	/**
	 * 获取图片格式数目
	 * @return 图片格式数目
	 */
	public long getFormatCount()
	{
		long returnValue = getFormatCount_void(this.nativeObject.pointer);
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
	native private String getFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片格式
	 * @param index 索引
	 * @return 指定图片格式
	 */
	public String getFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getLayerInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图层信息
	 * @param index 索引
	 * @return 指定图层信息引用
	 */
	public com.earthview.world.spatial.Wfslayerinfo getLayerInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wfslayerinfo __returnValue = new com.earthview.world.spatial.Wfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWFSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wfslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWFSLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_EVString(long pNativeObject, String layername);
	/**
	 * 获取指定图层信息
	 * @param layername 图层名称
	 * @return 指定图层信息引用
	 */
	public com.earthview.world.spatial.Wfslayerinfo getLayerInfoRef(String layername)
	{
		String layernameParamValue = layername;
		long returnValue = getLayerInfoRef_EVString(this.nativeObject.pointer, layernameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wfslayerinfo __returnValue = new com.earthview.world.spatial.Wfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWFSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wfslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWFSLayerInfo");
		}
		return __returnValue;
	}
	public Wfsserverinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wfsserverinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Wfsserverinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wfsserverinfo obj = null;
 		if(baseObj instanceof Wfsserverinfo)
		{
			obj = (Wfsserverinfo)baseObj;
		} else {
			obj = new Wfsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWFSServerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
