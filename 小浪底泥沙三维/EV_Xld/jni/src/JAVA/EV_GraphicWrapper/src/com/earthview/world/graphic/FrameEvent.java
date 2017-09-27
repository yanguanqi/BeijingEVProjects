package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 包含帧事件的信息
 */
public final class FrameEvent extends RemoteNativeObject {

	public FrameEvent(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public FrameEvent(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public FrameEvent() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_timeSinceLastEvent_void(long pNativeObject);
	public double get_timeSinceLastEvent()
	{
		double jniValue = get_timeSinceLastEvent_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_timeSinceLastEvent_Real (long pNativeObject, double value);
	public void set_timeSinceLastEvent(double timeSinceLastEvent)
	{
		double timeSinceLastEventParamValue = timeSinceLastEvent;
		
		set_timeSinceLastEvent_Real(this.nativeObject.pointer, timeSinceLastEventParamValue);
	}
	
	native private double get_timeSinceLastFrame_void(long pNativeObject);
	public double get_timeSinceLastFrame()
	{
		double jniValue = get_timeSinceLastFrame_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_timeSinceLastFrame_Real (long pNativeObject, double value);
	public void set_timeSinceLastFrame(double timeSinceLastFrame)
	{
		double timeSinceLastFrameParamValue = timeSinceLastFrame;
		
		set_timeSinceLastFrame_Real(this.nativeObject.pointer, timeSinceLastFrameParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
