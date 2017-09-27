package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Urlspeedmanager extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::URLSpeedManager", new UrlspeedmanagerClassFactory());
	}

	public Urlspeedmanager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("URLSpeedManager", null);
	}

	native private void addUrl_EVString(long pNativeObject, String url);
	public void addUrl(String url)
	{
		String urlParamValue = url;
		addUrl_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private void getMaxSpeedUrl_EVString_ev_int32(long pNativeObject, long url, long speed);
	///获取速度最快的url
	public void getMaxSpeedUrl(StringPointer url, IntegerPointer speed)
	{
		long urlParamValue = url.nativeObject.pointer;
		long speedParamValue = speed.nativeObject.pointer;
		getMaxSpeedUrl_EVString_ev_int32(this.nativeObject.pointer, urlParamValue, speedParamValue);
	}
	native private void getMinSpeedUrl_EVString_ev_int32(long pNativeObject, long url, long speed);
	///获取速度最慢的url
	public void getMinSpeedUrl(StringPointer url, IntegerPointer speed)
	{
		long urlParamValue = url.nativeObject.pointer;
		long speedParamValue = speed.nativeObject.pointer;
		getMinSpeedUrl_EVString_ev_int32(this.nativeObject.pointer, urlParamValue, speedParamValue);
	}
	native private void updateUrlSpeed_EVString_ev_int32(long pNativeObject, String url, int lastReqSpeed);
	///更新url请求速度
	public void updateUrlSpeed(String url, int lastReqSpeed)
	{
		String urlParamValue = url;
		int lastReqSpeedParamValue = lastReqSpeed;
		updateUrlSpeed_EVString_ev_int32(this.nativeObject.pointer, urlParamValue, lastReqSpeedParamValue);
	}
	public Urlspeedmanager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Urlspeedmanager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Urlspeedmanager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Urlspeedmanager obj = null;
 		if(baseObj instanceof Urlspeedmanager)
		{
			obj = (Urlspeedmanager)baseObj;
		} else {
			obj = new Urlspeedmanager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "URLSpeedManager");
			obj.increaseCast();
		}

		return obj;
	}
}
