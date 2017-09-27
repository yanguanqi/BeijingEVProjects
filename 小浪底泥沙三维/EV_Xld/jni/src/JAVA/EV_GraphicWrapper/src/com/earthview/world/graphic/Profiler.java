package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Profiler extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CProfiler", new ProfilerClassFactory());
	}

	public Profiler() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CProfiler", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.Profiler getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.Profiler __returnValue = new com.earthview.world.graphic.Profiler(CreatedWhenConstruct.CWC_NotToCreate, "CProfiler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Profiler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProfiler");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.Profiler getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Profiler __returnValue = new com.earthview.world.graphic.Profiler(CreatedWhenConstruct.CWC_NotToCreate, "CProfiler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Profiler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProfiler");
		}
		return __returnValue;
	}
	native private void beginProfile_EVString(long pNativeObject, String profileName);
	public void beginProfile(String profileName)
	{
		String profileNameParamValue = profileName;
		beginProfile_EVString(this.nativeObject.pointer, profileNameParamValue);
	}
	native private void beginProfile_EVString_ev_uint32(long pNativeObject, String profileName, long groupID);
	public void beginProfile(String profileName, long groupID)
	{
		String profileNameParamValue = profileName;
		long groupIDParamValue = groupID;
		beginProfile_EVString_ev_uint32(this.nativeObject.pointer, profileNameParamValue, groupIDParamValue);
	}
	native private void endProfile_EVString(long pNativeObject, String profileName);
	public void endProfile(String profileName)
	{
		String profileNameParamValue = profileName;
		endProfile_EVString(this.nativeObject.pointer, profileNameParamValue);
	}
	native private void endProfile_EVString_ev_uint32(long pNativeObject, String profileName, long groupID);
	public void endProfile(String profileName, long groupID)
	{
		String profileNameParamValue = profileName;
		long groupIDParamValue = groupID;
		endProfile_EVString_ev_uint32(this.nativeObject.pointer, profileNameParamValue, groupIDParamValue);
	}
	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getEnabled_void(long pNativeObject);
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void enableProfile_EVString(long pNativeObject, String profileName);
	public void enableProfile(String profileName)
	{
		String profileNameParamValue = profileName;
		enableProfile_EVString(this.nativeObject.pointer, profileNameParamValue);
	}
	native private void disableProfile_EVString(long pNativeObject, String profileName);
	public void disableProfile(String profileName)
	{
		String profileNameParamValue = profileName;
		disableProfile_EVString(this.nativeObject.pointer, profileNameParamValue);
	}
	native private void setProfileGroupMask_ev_uint32(long pNativeObject, long mask);
	public void setProfileGroupMask(long mask)
	{
		long maskParamValue = mask;
		setProfileGroupMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private long getProfileGroupMask_void(long pNativeObject);
	public long getProfileGroupMask()
	{
		long returnValue = getProfileGroupMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean watchForMax_EVString(long pNativeObject, String profileName);
	public boolean watchForMax(String profileName)
	{
		String profileNameParamValue = profileName;
		boolean returnValue = watchForMax_EVString(this.nativeObject.pointer, profileNameParamValue);
		return returnValue;
	}
	native private boolean watchForMin_EVString(long pNativeObject, String profileName);
	public boolean watchForMin(String profileName)
	{
		String profileNameParamValue = profileName;
		boolean returnValue = watchForMin_EVString(this.nativeObject.pointer, profileNameParamValue);
		return returnValue;
	}
	native private boolean watchForLimit_EVString_Real(long pNativeObject, String profileName, double limit);
	public boolean watchForLimit(String profileName, double limit)
	{
		String profileNameParamValue = profileName;
		double limitParamValue = limit;
		boolean returnValue = watchForLimit_EVString_Real(this.nativeObject.pointer, profileNameParamValue, limitParamValue);
		return returnValue;
	}
	native private boolean watchForLimit_EVString_Real_ev_bool(long pNativeObject, String profileName, double limit, boolean greaterThan);
	public boolean watchForLimit(String profileName, double limit, boolean greaterThan)
	{
		String profileNameParamValue = profileName;
		double limitParamValue = limit;
		boolean greaterThanParamValue = greaterThan;
		boolean returnValue = watchForLimit_EVString_Real_ev_bool(this.nativeObject.pointer, profileNameParamValue, limitParamValue, greaterThanParamValue);
		return returnValue;
	}
	native private void logResults_void(long pNativeObject);
	public void logResults()
	{
		logResults_void(this.nativeObject.pointer);
	}
	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	public enum DisplayMode implements INativeEnum<DisplayMode> {
		DISPLAY_PERCENTAGE(DisplayModeHelper.ENUM_VALUES[0]),
		DISPLAY_MILLISECONDS(DisplayModeHelper.ENUM_VALUES[1]);
		private int value;
		DisplayMode(int i) {
			this.value = i;
		}
		public DisplayMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final DisplayMode toEnum(int retval) {
			if(retval == DISPLAY_PERCENTAGE.value){
				return DISPLAY_PERCENTAGE;
			}
			else if(retval == DISPLAY_MILLISECONDS.value){
				return DISPLAY_MILLISECONDS;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class DisplayModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setDisplayMode_DisplayMode(long pNativeObject, int d);
	//// Display milliseconds on the overlay
	public void setDisplayMode(com.earthview.world.graphic.Profiler.DisplayMode d)
	{
		int dParamValue = d.getValue();
		setDisplayMode_DisplayMode(this.nativeObject.pointer, dParamValue);
	}
	native private int getDisplayMode_void(long pNativeObject);
	public com.earthview.world.graphic.Profiler.DisplayMode getDisplayMode()
	{
		int returnValue = getDisplayMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Profiler.DisplayMode.toEnum(returnValue);
	}
	native private void setUpdateDisplayFrequency_ev_uint32(long pNativeObject, long freq);
	public void setUpdateDisplayFrequency(long freq)
	{
		long freqParamValue = freq;
		setUpdateDisplayFrequency_ev_uint32(this.nativeObject.pointer, freqParamValue);
	}
	native private long getUpdateDisplayFrequency_void(long pNativeObject);
	public long getUpdateDisplayFrequency()
	{
		long returnValue = getUpdateDisplayFrequency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOverlayDimensions_Real_Real(long pNativeObject, double width, double height);
	public void setOverlayDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setOverlayDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void setOverlayPosition_Real_Real(long pNativeObject, double left, double top);
	public void setOverlayPosition(double left, double top)
	{
		double leftParamValue = left;
		double topParamValue = top;
		setOverlayPosition_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue);
	}
	native private double getOverlayWidth_void(long pNativeObject);
	public double getOverlayWidth()
	{
		double returnValue = getOverlayWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOverlayHeight_void(long pNativeObject);
	public double getOverlayHeight()
	{
		double returnValue = getOverlayHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOverlayLeft_void(long pNativeObject);
	public double getOverlayLeft()
	{
		double returnValue = getOverlayLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOverlayTop_void(long pNativeObject);
	public double getOverlayTop()
	{
		double returnValue = getOverlayTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Profiler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Profiler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Profiler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Profiler obj = null;
 		if(baseObj instanceof Profiler)
		{
			obj = (Profiler)baseObj;
		} else {
			obj = new Profiler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProfiler");
			obj.increaseCast();
		}

		return obj;
	}
}
