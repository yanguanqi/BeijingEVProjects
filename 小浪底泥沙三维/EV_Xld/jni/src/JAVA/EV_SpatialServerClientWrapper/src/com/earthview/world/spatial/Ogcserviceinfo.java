package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC服务描述信息类
 */
public class Ogcserviceinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceInfo", new OgcserviceinfoClassFactory());
	}

	//////////////////////////////////////////////////////////////////////////////////
	public static class Ogchttpinfo extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceInfo::COGCHttpInfo", new OgchttpinfoClassFactory());
		}

		native private String getHttpMethod_void(long pNativeObject);
		/**
		 * 获取通信方法
		 * @return 通信方法
		 */
		public String getHttpMethod()
		{
			String returnValue = getHttpMethod_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getHttpHref_void(long pNativeObject);
		/**
		 * 获取服务地址
		 * @return 服务地址
		 */
		public String getHttpHref()
		{
			String returnValue = getHttpHref_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getAllowedValueCount_void(long pNativeObject);
		/**
		 * 获取通信编码方法种类
		 * @return 通信编码方法种类
		 */
		public long getAllowedValueCount()
		{
			long returnValue = getAllowedValueCount_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getAllowedValue_ev_uint32(long pNativeObject, long index);
		/**
		 * 获取指定通信编码方法
		 * @param index 索引
		 * @return 指定通信编码方法
		 */
		public String getAllowedValue(long index)
		{
			long indexParamValue = index;
			String returnValue = getAllowedValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
			return returnValue;
		}
		/**
		 * 构造函数
		 */
		public Ogchttpinfo() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("COGCHttpInfo", null);
		}

		native private long ev_clone_void(long pNativeObject);
		/**
		 * 克隆
		 * @return 克隆结果对象指针
		 */
		public com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo ev_clone()
		{
			long returnValue = ev_clone_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo __returnValue = new com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCHttpInfo");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "COGCHttpInfo");
			}
			return __returnValue;
		}
		public Ogchttpinfo(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Ogchttpinfo(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Ogchttpinfo fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Ogchttpinfo obj = null;
 			if(baseObj instanceof Ogchttpinfo)
			{
				obj = (Ogchttpinfo)baseObj;
			} else {
				obj = new Ogchttpinfo(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "COGCHttpInfo");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OgchttpinfoClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Ogchttpinfo emptyInstance = new Ogchttpinfo(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private String getServiceName_void(long pNativeObject);
	/**
	 * 获取服务名称
	 * @return 服务名称
	 */
	public String getServiceName()
	{
		String returnValue = getServiceName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHttpInfoCount_void(long pNativeObject);
	/**
	 * 获取通信方法数目
	 * @return 通信方法数目
	 */
	public long getHttpInfoCount()
	{
		long returnValue = getHttpInfoCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHttpInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定通行方法描述
	 * @param index 索引
	 * @return 指定通行方法描述
	 */
	public com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo getHttpInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getHttpInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo __returnValue = new com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCHttpInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcserviceinfo.Ogchttpinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCHttpInfo");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcserviceinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCServiceInfo", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogcserviceinfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcserviceinfo __returnValue = new com.earthview.world.spatial.Ogcserviceinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCServiceInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcserviceinfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCServiceInfo");
		}
		return __returnValue;
	}
	public Ogcserviceinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcserviceinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcserviceinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcserviceinfo obj = null;
 		if(baseObj instanceof Ogcserviceinfo)
		{
			obj = (Ogcserviceinfo)baseObj;
		} else {
			obj = new Ogcserviceinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCServiceInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
