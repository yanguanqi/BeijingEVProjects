package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class ObqMergeListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMergeListener", new ObqMergeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::JCObqMergeListenerProxy", new ObqMergeListenerClassFactory());
	}

	public ObqMergeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCObqMergeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.meshoptimize.ObqMergeListener".equals(this.getClass().getName()))
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

	public ObqMergeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObqMergeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_processMsg_EVString(long pNativeObject, String method);
	native protected void register_paused_void(long pNativeObject, String method);
	native protected void register_finished_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_processMsg_EVString(this.nativeObject.pointer, "processMsg_EVString_callback");
			this.register_paused_void(this.nativeObject.pointer, "paused_void_callback");
			this.register_finished_void(this.nativeObject.pointer, "finished_void_callback");
		}
	}
	
	public static ObqMergeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObqMergeListener obj = null;
 		if(baseObj instanceof ObqMergeListener)
		{
			obj = (ObqMergeListener)baseObj;
		} else {
			obj = new ObqMergeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObqMergeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
