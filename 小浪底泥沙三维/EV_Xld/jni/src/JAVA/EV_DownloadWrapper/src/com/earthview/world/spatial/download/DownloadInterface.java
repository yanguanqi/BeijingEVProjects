package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DownloadInterface extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CDownloadInterface", new DownloadInterfaceClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public DownloadInterface() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDownloadInterface", null);
	}

	native private static long instance_void();
	/**
	 * 
	 * @param  
	 */
	public static com.earthview.world.spatial.download.DownloadInterface instance()
	{
		long returnValue = instance_void();
		com.earthview.world.spatial.download.DownloadInterface __returnValue = new com.earthview.world.spatial.download.DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate, "CDownloadInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.DownloadInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDownloadInterface");
		}
		return __returnValue;
	}
	native private long httpGet_EVString_void(long pNativeObject, String url, long pData);
	/**
	 * 
	 * @param  
	 * @return retuendatalength,release'pData'byreleaseHttpGetDatafunction
	 */
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long returnValue = httpGet_EVString_void(this.nativeObject.pointer, urlParamValue, pDataParamValue);
		return returnValue;
	}
	native private long httpGet_EVString_void_ev_int32(long pNativeObject, String url, long pData, long retCode);
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData, IntegerPointer retCode)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long retCodeParamValue = retCode.nativeObject.pointer;
		long returnValue = httpGet_EVString_void_ev_int32(this.nativeObject.pointer, urlParamValue, pDataParamValue, retCodeParamValue);
		return returnValue;
	}
	native private long httpGet_EVString_void_ev_int32_ev_int32(long pNativeObject, String url, long pData, long retCode, long responseTime);
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData, IntegerPointer retCode, IntegerPointer responseTime)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long retCodeParamValue = retCode.nativeObject.pointer;
		long responseTimeParamValue = responseTime.nativeObject.pointer;
		long returnValue = httpGet_EVString_void_ev_int32_ev_int32(this.nativeObject.pointer, urlParamValue, pDataParamValue, retCodeParamValue, responseTimeParamValue);
		return returnValue;
	}
	native private long httpGet_EVString_void_ev_uint32(long pNativeObject, String url, long pData, long timeout_ms);
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData, long timeout_ms)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long timeout_msParamValue = timeout_ms;
		long returnValue = httpGet_EVString_void_ev_uint32(this.nativeObject.pointer, urlParamValue, pDataParamValue, timeout_msParamValue);
		return returnValue;
	}
	native private long httpGet_EVString_void_ev_uint32_ev_int32(long pNativeObject, String url, long pData, long timeout_ms, long retCode);
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData, long timeout_ms, IntegerPointer retCode)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long timeout_msParamValue = timeout_ms;
		long retCodeParamValue = retCode.nativeObject.pointer;
		long returnValue = httpGet_EVString_void_ev_uint32_ev_int32(this.nativeObject.pointer, urlParamValue, pDataParamValue, timeout_msParamValue, retCodeParamValue);
		return returnValue;
	}
	native private long httpGet_EVString_void_ev_uint32_ev_int32_ev_int32(long pNativeObject, String url, long pData, long timeout_ms, long retCode, long responseTime);
	public long httpGet(String url, NativeObjectPointer<VoidPointer> pData, long timeout_ms, IntegerPointer retCode, IntegerPointer responseTime)
	{
		String urlParamValue = url;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long timeout_msParamValue = timeout_ms;
		long retCodeParamValue = retCode.nativeObject.pointer;
		long responseTimeParamValue = responseTime.nativeObject.pointer;
		long returnValue = httpGet_EVString_void_ev_uint32_ev_int32_ev_int32(this.nativeObject.pointer, urlParamValue, pDataParamValue, timeout_msParamValue, retCodeParamValue, responseTimeParamValue);
		return returnValue;
	}
	native private void releaseHttpGetData_void(long pNativeObject, long pData);
	/**
	 * 
	 * @param  
	 */
	public void releaseHttpGetData(NativeObjectPointer<VoidPointer> pData)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		releaseHttpGetData_void(this.nativeObject.pointer, pDataParamValue);
	}
	native private void init_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void init()
	{
		init_void(this.nativeObject.pointer);
	}
	public DownloadInterface(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DownloadInterface(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DownloadInterface fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DownloadInterface obj = null;
 		if(baseObj instanceof DownloadInterface)
		{
			obj = (DownloadInterface)baseObj;
		} else {
			obj = new DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDownloadInterface");
			obj.increaseCast();
		}

		return obj;
	}
}
