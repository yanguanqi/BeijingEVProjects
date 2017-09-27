package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasLODGenerateListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener", new LasLODGenerateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::JCLasLODGenerateListenerProxy", new LasLODGenerateListenerClassFactory());
	}

	public LasLODGenerateListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLasLODGenerateListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatiallasconvertproxy.LasLODGenerateListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void processMsg_EVString_callback(String msg)
	{
		String msgParamValue = msg;
		processMsg(msgParamValue);
	}

	native private void processMsg_EVString(long pNativeObject, String msg);
	public void processMsg(String msg)
	{
		String msgParamValue = msg;
		processMsg_EVString(this.nativeObject.pointer, msgParamValue);
	}
	native private void processMsg_EVString_NoVirtual(long pNativeObject, String msg);
	protected void processMsg_NoVirtual(String msg)
	{
		String msgParamValue = msg;
		processMsg_EVString_NoVirtual(this.nativeObject.pointer, msgParamValue);
	}

	protected  void paused_void_callback()
	{
		paused();
	}

	native private void paused_void(long pNativeObject);
	public void paused()
	{
		paused_void(this.nativeObject.pointer);
	}
	native private void paused_void_NoVirtual(long pNativeObject);
	protected void paused_NoVirtual()
	{
		paused_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void finished_void_callback()
	{
		finished();
	}

	native private void finished_void(long pNativeObject);
	public void finished()
	{
		finished_void(this.nativeObject.pointer);
	}
	native private void finished_void_NoVirtual(long pNativeObject);
	protected void finished_NoVirtual()
	{
		finished_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void processProgress_ev_uint32_ev_uint32_callback(long total, long current)
	{
		long totalParamValue = total;
		long currentParamValue = current;
		processProgress(totalParamValue, currentParamValue);
	}

	native private void processProgress_ev_uint32_ev_uint32(long pNativeObject, long total, long current);
	public void processProgress(long total, long current)
	{
		long totalParamValue = total;
		long currentParamValue = current;
		processProgress_ev_uint32_ev_uint32(this.nativeObject.pointer, totalParamValue, currentParamValue);
	}
	native private void processProgress_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long total, long current);
	protected void processProgress_NoVirtual(long total, long current)
	{
		long totalParamValue = total;
		long currentParamValue = current;
		processProgress_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, totalParamValue, currentParamValue);
	}

	public LasLODGenerateListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasLODGenerateListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_processMsg_EVString(long pNativeObject, String method);
	native protected void register_paused_void(long pNativeObject, String method);
	native protected void register_finished_void(long pNativeObject, String method);
	native protected void register_processProgress_ev_uint32_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_processMsg_EVString(this.nativeObject.pointer, "processMsg_EVString_callback");
			this.register_paused_void(this.nativeObject.pointer, "paused_void_callback");
			this.register_finished_void(this.nativeObject.pointer, "finished_void_callback");
			this.register_processProgress_ev_uint32_ev_uint32(this.nativeObject.pointer, "processProgress_ev_uint32_ev_uint32_callback");
		}
	}
	
	public static LasLODGenerateListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasLODGenerateListener obj = null;
 		if(baseObj instanceof LasLODGenerateListener)
		{
			obj = (LasLODGenerateListener)baseObj;
		} else {
			obj = new LasLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasLODGenerateListener");
			obj.increaseCast();
		}

		return obj;
	}
}
