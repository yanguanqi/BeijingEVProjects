package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 服务描述信息类
 */
public class ServerInfo extends com.earthview.world.spatial.geodataset.Idatametainfos {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerInfo", new ServerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCServerInfoProxy", new ServerInfoClassFactory());
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取含有的元数据个数
	 * @return 元数据个数
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

	native private long remove_ev_uint32(long pNativeObject, long index);
	/**
	 * /移除某个元数据信息/
	 * @param index 索引
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
	 * 清除所含元数据信息
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

	native private long getName_void(long pNativeObject);
	/**
	 * 获取服务器名称
	 * @return 服务器名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取服务类型
	 * @return 服务类型
	 */
	public com.earthview.world.spatial.EVServerInfoType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVServerInfoType.toEnum(returnValue);
	}
	native private long getURL_void(long pNativeObject);
	/**
	 * 获取服务器地址
	 * @return 服务器地址
	 */
	public StringPointer getURL()
	{
		long returnValue = getURL_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getVersion_void(long pNativeObject);
	/**
	 * 获取服务版本
	 * @return 服务版本
	 */
	public StringPointer getVersion()
	{
		long returnValue = getVersion_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAbstract_void(long pNativeObject);
	/**
	 * 获取服务描述
	 * @return 服务描述
	 */
	public StringPointer getAbstract()
	{
		long returnValue = getAbstract_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getTitle_void(long pNativeObject);
	/**
	 * 获取服务标题
	 * @return 服务标题
	 */
	public StringPointer getTitle()
	{
		long returnValue = getTitle_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFees_void(long pNativeObject);
	/**
	 * 获取服务资费
	 * @return 服务资费
	 */
	public StringPointer getFees()
	{
		long returnValue = getFees_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAccessConstraints_void(long pNativeObject);
	/**
	 * 获取服务限制
	 * @return 服务限制
	 */
	public StringPointer getAccessConstraints()
	{
		long returnValue = getAccessConstraints_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getKeywordCount_void(long pNativeObject);
	/**
	 * 获取服务关键词数目
	 * @return 服务关键词数目
	 */
	public long getKeywordCount()
	{
		long returnValue = getKeywordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKeyword_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定关键词
	 * @param index 索引
	 * @return 指定关键词
	 */
	public String getKeyword(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeyword_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getExceptionFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定异常格式
	 * @param index 索引
	 * @return 指定异常格式
	 */
	public String getExceptionFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getExceptionFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getExceptionFormatCount_void(long pNativeObject);
	/**
	 * 获取异常格式数目
	 * @return 异常格式数目
	 */
	public long getExceptionFormatCount()
	{
		long returnValue = getExceptionFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOGCServiceInfoCount_void(long pNativeObject);
	/**
	 * 获取所支持服务数目
	 * @return 支持的服务数目
	 */
	public long getOGCServiceInfoCount()
	{
		long returnValue = getOGCServiceInfoCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCOGCServiceInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的服务描述
	 * @param index 索引
	 * @return 指定的服务描述，不需释放
	 */
	public com.earthview.world.spatial.Ogcserviceinfo getCOGCServiceInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getCOGCServiceInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcserviceinfo __returnValue = new com.earthview.world.spatial.Ogcserviceinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCServiceInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcserviceinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCServiceInfo");
		}
		return __returnValue;
	}
	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取该服务所含图层数目
	 * @return 所含图层数目
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOGCServiceProviderInfo_void(long pNativeObject);
	/**
	 * 获取服务提供者信息
	 * @return 服务提供者对象指针，不需释放
	 */
	public com.earthview.world.spatial.Ogcserviceproviderinfo getOGCServiceProviderInfo()
	{
		long returnValue = getOGCServiceProviderInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcserviceproviderinfo __returnValue = new com.earthview.world.spatial.Ogcserviceproviderinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCServiceProviderInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcserviceproviderinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCServiceProviderInfo");
		}
		return __returnValue;
	}
	public ServerInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取指定索引的数据集元信息
	 * @param index 指定索引
	 * @return 按照指定索引范围对象，如果索引超出范围，则抛出异常
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getInfo(long index)
	{
		return super.getInfo_NoVirtual(index);
	}
	/**
	 * 添加指定数据集元信息
	 * @param info 数据集元信息对象
	 * @return 添加后的索引
	 */
	public long add(com.earthview.world.spatial.geodataset.Idatametainfo ref_info)
	{
		return super.add_NoVirtual(ref_info);
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
	
	public static ServerInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerInfo obj = null;
 		if(baseObj instanceof ServerInfo)
		{
			obj = (ServerInfo)baseObj;
		} else {
			obj = new ServerInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
