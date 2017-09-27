package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WorkQueueChannelListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueueChannelListener", new WorkQueueChannelListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCWorkQueueChannelListenerProxy", new WorkQueueChannelListenerClassFactory());
	}

	public WorkQueueChannelListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCWorkQueueChannelListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.WorkQueueChannelListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean preRequestSorted_ev_uint16_callback(int channelID)
	{
		int channelIDParamValue = channelID;
		boolean returnValue = preRequestSorted(channelIDParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean preRequestSorted_ev_uint16(long pNativeObject, int channelID);
	///
	public boolean preRequestSorted(int channelID)
	{
		int channelIDParamValue = channelID;
		boolean returnValue = preRequestSorted_ev_uint16(this.nativeObject.pointer, channelIDParamValue);
		return returnValue;
	}
	native private boolean preRequestSorted_ev_uint16_NoVirtual(long pNativeObject, int channelID);
	protected boolean preRequestSorted_NoVirtual(int channelID)
	{
		int channelIDParamValue = channelID;
		boolean returnValue = preRequestSorted_ev_uint16_NoVirtual(this.nativeObject.pointer, channelIDParamValue);
		return returnValue;
	}

	protected  void postRequestSorted_ev_uint16_callback(int channelID)
	{
		int channelIDParamValue = channelID;
		postRequestSorted(channelIDParamValue);
	}

	native private void postRequestSorted_ev_uint16(long pNativeObject, int channelID);
	public void postRequestSorted(int channelID)
	{
		int channelIDParamValue = channelID;
		postRequestSorted_ev_uint16(this.nativeObject.pointer, channelIDParamValue);
	}
	native private void postRequestSorted_ev_uint16_NoVirtual(long pNativeObject, int channelID);
	protected void postRequestSorted_NoVirtual(int channelID)
	{
		int channelIDParamValue = channelID;
		postRequestSorted_ev_uint16_NoVirtual(this.nativeObject.pointer, channelIDParamValue);
	}

	public WorkQueueChannelListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WorkQueueChannelListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_preRequestSorted_ev_uint16(long pNativeObject, String method);
	native protected void register_postRequestSorted_ev_uint16(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preRequestSorted_ev_uint16(this.nativeObject.pointer, "preRequestSorted_ev_uint16_callback");
			this.register_postRequestSorted_ev_uint16(this.nativeObject.pointer, "postRequestSorted_ev_uint16_callback");
		}
	}
	
	public static WorkQueueChannelListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WorkQueueChannelListener obj = null;
 		if(baseObj instanceof WorkQueueChannelListener)
		{
			obj = (WorkQueueChannelListener)baseObj;
		} else {
			obj = new WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWorkQueueChannelListener");
			obj.increaseCast();
		}

		return obj;
	}
}
