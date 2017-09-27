package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///class IScaleBar;
///class ILegendBar;
///class IMarkNorthArrow;
public class Imap extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IMap", new ImapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIMapProxy", new ImapClassFactory());
	}

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isActive_void_NoVirtual(long pNativeObject);
	protected boolean isActive_NoVirtual()
	{
		boolean returnValue = isActive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setActive_ev_bool_callback(boolean isActive)
	{
		boolean isActiveParamValue = isActive;
		setActive(isActiveParamValue);
	}

	native private void setActive_ev_bool(long pNativeObject, boolean isActive);
	/// added by wangwei in 2013-04-22
	public void setActive(boolean isActive)
	{
		boolean isActiveParamValue = isActive;
		setActive_ev_bool(this.nativeObject.pointer, isActiveParamValue);
	}
	native private void setActive_ev_bool_NoVirtual(long pNativeObject, boolean isActive);
	protected void setActive_NoVirtual(boolean isActive)
	{
		boolean isActiveParamValue = isActive;
		setActive_ev_bool_NoVirtual(this.nativeObject.pointer, isActiveParamValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * /获取地图名称/
	 * @param  
	 * @return 地图名字
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置地图名称
	 * @param name 地图名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取关于地图的描述
	 * @param  
	 * @return 地图的描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDescription_EVString_callback(String desc)
	{
		String descParamValue = desc;
		setDescription(descParamValue);
	}

	native private void setDescription_EVString(long pNativeObject, String desc);
	/**
	 * 设置关于地图的描述
	 * @param desc 地图描述
	 */
	public void setDescription(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString(this.nativeObject.pointer, descParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String desc);
	protected void setDescription_NoVirtual(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descParamValue);
	}

	protected  long getBackground_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getBackground();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBackground_void(long pNativeObject);
	public com.earthview.world.spatial.display.Icolor getBackground()
	{
		long returnValue = getBackground_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long getBackground_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getBackground_NoVirtual()
	{
		long returnValue = getBackground_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}

	protected  void setBackground_IColor_callback(long background)
	{
		com.earthview.world.spatial.display.Icolor backgroundParamValue = (background == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(backgroundParamValue != null)
		{
		backgroundParamValue.setDelegate(true);
		backgroundParamValue.setInstancePointer(new InstancePointer(background));
		IClassFactory backgroundParamValueClassFactory = GlobalClassFactoryMap.get(backgroundParamValue.getCppInstanceTypeName());
		if (backgroundParamValueClassFactory != null)
		{
			backgroundParamValue.setDelegate(true);
			backgroundParamValue = (com.earthview.world.spatial.display.Icolor)backgroundParamValueClassFactory.create();
			backgroundParamValue.setDelegate(true);
			backgroundParamValue.setInstancePointer(new InstancePointer(background));
		}
		}
		setBackground(backgroundParamValue);
	}

	native private void setBackground_IColor(long pNativeObject, long background);
	public void setBackground(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackground_IColor(this.nativeObject.pointer, backgroundParamValue);
	}
	native private void setBackground_IColor_NoVirtual(long pNativeObject, long background);
	protected void setBackground_NoVirtual(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackground_IColor_NoVirtual(this.nativeObject.pointer, backgroundParamValue);
	}

	protected  void updateExtent_void_callback()
	{
		updateExtent();
	}

	native private void updateExtent_void(long pNativeObject);
	public void updateExtent()
	{
		updateExtent_void(this.nativeObject.pointer);
	}
	native private void updateExtent_void_NoVirtual(long pNativeObject);
	protected void updateExtent_NoVirtual()
	{
		updateExtent_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getEnvelope_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelope();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取地图的范围
	 * @param  
	 * @return 地图范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelope_NoVirtual()
	{
		long returnValue = getEnvelope_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  long getInterestEnvelope_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getInterestEnvelope();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInterestEnvelope_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Ienvelope getInterestEnvelope()
	{
		long returnValue = getInterestEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getInterestEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getInterestEnvelope_NoVirtual()
	{
		long returnValue = getInterestEnvelope_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  void setInterestEnvelope_IEnvelope_callback(long enve)
	{
		com.earthview.world.spatial.geometry.Ienvelope enveParamValue = (enve == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(enveParamValue != null)
		{
		enveParamValue.setDelegate(true);
		enveParamValue.setInstancePointer(new InstancePointer(enve));
		IClassFactory enveParamValueClassFactory = GlobalClassFactoryMap.get(enveParamValue.getCppInstanceTypeName());
		if (enveParamValueClassFactory != null)
		{
			enveParamValue.setDelegate(true);
			enveParamValue = (com.earthview.world.spatial.geometry.Ienvelope)enveParamValueClassFactory.create();
			enveParamValue.setDelegate(true);
			enveParamValue.setInstancePointer(new InstancePointer(enve));
		}
		}
		setInterestEnvelope(enveParamValue);
	}

	native private void setInterestEnvelope_IEnvelope(long pNativeObject, long enve);
	public void setInterestEnvelope(com.earthview.world.spatial.geometry.Ienvelope enve)
	{
		long enveParamValue = (enve == null ? 0L : enve.nativeObject.pointer);
		setInterestEnvelope_IEnvelope(this.nativeObject.pointer, enveParamValue);
	}
	native private void setInterestEnvelope_IEnvelope_NoVirtual(long pNativeObject, long enve);
	protected void setInterestEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope enve)
	{
		long enveParamValue = (enve == null ? 0L : enve.nativeObject.pointer);
		setInterestEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, enveParamValue);
	}

	protected  double getInterestRotation_void_callback()
	{
		double returnValue = getInterestRotation();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInterestRotation_void(long pNativeObject);
	public double getInterestRotation()
	{
		double returnValue = getInterestRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInterestRotation_void_NoVirtual(long pNativeObject);
	protected double getInterestRotation_NoVirtual()
	{
		double returnValue = getInterestRotation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setInterestRotation_ev_real64_callback(double rotation)
	{
		double rotationParamValue = rotation;
		setInterestRotation(rotationParamValue);
	}

	native private void setInterestRotation_ev_real64(long pNativeObject, double rotation);
	public void setInterestRotation(double rotation)
	{
		double rotationParamValue = rotation;
		setInterestRotation_ev_real64(this.nativeObject.pointer, rotationParamValue);
	}
	native private void setInterestRotation_ev_real64_NoVirtual(long pNativeObject, double rotation);
	protected void setInterestRotation_NoVirtual(double rotation)
	{
		double rotationParamValue = rotation;
		setInterestRotation_ev_real64_NoVirtual(this.nativeObject.pointer, rotationParamValue);
	}

	protected  int getMapUnits_void_callback()
	{
		com.earthview.world.spatial.atlas.EVMapUnits returnValue = getMapUnits();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getMapUnits_void(long pNativeObject);
	/**
	 * 获取地图单位
	 * @param  
	 * @return 地图单位
	 */
	public com.earthview.world.spatial.atlas.EVMapUnits getMapUnits()
	{
		int returnValue = getMapUnits_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}
	native private int getMapUnits_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVMapUnits getMapUnits_NoVirtual()
	{
		int returnValue = getMapUnits_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}

	protected  void setMapUnits_EVMapUnits_callback(int units)
	{
		com.earthview.world.spatial.atlas.EVMapUnits unitsParamValue = com.earthview.world.spatial.atlas.EVMapUnits.toEnum(units);
		setMapUnits(unitsParamValue);
	}

	native private void setMapUnits_EVMapUnits(long pNativeObject, int units);
	/**
	 * 设置地图单位
	 * @param units 地图单位
	 */
	public void setMapUnits(com.earthview.world.spatial.atlas.EVMapUnits units)
	{
		int unitsParamValue = units.getValue();
		setMapUnits_EVMapUnits(this.nativeObject.pointer, unitsParamValue);
	}
	native private void setMapUnits_EVMapUnits_NoVirtual(long pNativeObject, int units);
	protected void setMapUnits_NoVirtual(com.earthview.world.spatial.atlas.EVMapUnits units)
	{
		int unitsParamValue = units.getValue();
		setMapUnits_EVMapUnits_NoVirtual(this.nativeObject.pointer, unitsParamValue);
	}

	protected  int getShowUnits_void_callback()
	{
		com.earthview.world.spatial.atlas.EVMapUnits returnValue = getShowUnits();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getShowUnits_void(long pNativeObject);
	/**
	 * 获取地图显示单位
	 * @param  
	 * @return 地图显示单位
	 */
	public com.earthview.world.spatial.atlas.EVMapUnits getShowUnits()
	{
		int returnValue = getShowUnits_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}
	native private int getShowUnits_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVMapUnits getShowUnits_NoVirtual()
	{
		int returnValue = getShowUnits_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}

	protected  void setShowUnits_EVMapUnits_callback(int units)
	{
		com.earthview.world.spatial.atlas.EVMapUnits unitsParamValue = com.earthview.world.spatial.atlas.EVMapUnits.toEnum(units);
		setShowUnits(unitsParamValue);
	}

	native private void setShowUnits_EVMapUnits(long pNativeObject, int units);
	/**
	 * 设置地图显示单位
	 * @param units 地图显示单位
	 */
	public void setShowUnits(com.earthview.world.spatial.atlas.EVMapUnits units)
	{
		int unitsParamValue = units.getValue();
		setShowUnits_EVMapUnits(this.nativeObject.pointer, unitsParamValue);
	}
	native private void setShowUnits_EVMapUnits_NoVirtual(long pNativeObject, int units);
	protected void setShowUnits_NoVirtual(com.earthview.world.spatial.atlas.EVMapUnits units)
	{
		int unitsParamValue = units.getValue();
		setShowUnits_EVMapUnits_NoVirtual(this.nativeObject.pointer, unitsParamValue);
	}

	protected  double getMinScale_void_callback()
	{
		double returnValue = getMinScale();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinScale_void(long pNativeObject);
	/**
	 * 获取地图显示的最小比例尺
	 * @param  
	 * @return 最小比例尺
	 */
	public double getMinScale()
	{
		double returnValue = getMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinScale_void_NoVirtual(long pNativeObject);
	protected double getMinScale_NoVirtual()
	{
		double returnValue = getMinScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMinScale_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		setMinScale(scaleParamValue);
	}

	native private void setMinScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置地图显示的最小比例尺
	 * @param scale 最小比例尺
	 */
	public void setMinScale(double scale)
	{
		double scaleParamValue = scale;
		setMinScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setMinScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setMinScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setMinScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  double getMaxScale_void_callback()
	{
		double returnValue = getMaxScale();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxScale_void(long pNativeObject);
	/**
	 * 获取地图显示的最大比例尺
	 * @param  
	 * @return 最大比例尺
	 */
	public double getMaxScale()
	{
		double returnValue = getMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxScale_void_NoVirtual(long pNativeObject);
	protected double getMaxScale_NoVirtual()
	{
		double returnValue = getMaxScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMaxScale_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		setMaxScale(scaleParamValue);
	}

	native private void setMaxScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置地图显示的最大比例尺
	 * @param scale 最大比例尺
	 */
	public void setMaxScale(double scale)
	{
		double scaleParamValue = scale;
		setMaxScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setMaxScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setMaxScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setMaxScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  boolean ignoreScale_void_callback()
	{
		boolean returnValue = ignoreScale();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean ignoreScale_void(long pNativeObject);
	/**
	 * 地图显示时是否忽略比例尺
	 * @param  
	 * @return 是否忽略
	 */
	public boolean ignoreScale()
	{
		boolean returnValue = ignoreScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean ignoreScale_void_NoVirtual(long pNativeObject);
	protected boolean ignoreScale_NoVirtual()
	{
		boolean returnValue = ignoreScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setIgnoreScale_ev_bool_callback(boolean ignore)
	{
		boolean ignoreParamValue = ignore;
		setIgnoreScale(ignoreParamValue);
	}

	native private void setIgnoreScale_ev_bool(long pNativeObject, boolean ignore);
	/**
	 * 设置地图显示的时候,是否忽略比例尺
	 * @param ignore 忽略比例尺
	 */
	public void setIgnoreScale(boolean ignore)
	{
		boolean ignoreParamValue = ignore;
		setIgnoreScale_ev_bool(this.nativeObject.pointer, ignoreParamValue);
	}
	native private void setIgnoreScale_ev_bool_NoVirtual(long pNativeObject, boolean ignore);
	protected void setIgnoreScale_NoVirtual(boolean ignore)
	{
		boolean ignoreParamValue = ignore;
		setIgnoreScale_ev_bool_NoVirtual(this.nativeObject.pointer, ignoreParamValue);
	}

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取地图当前坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  void setSpatialReference_ISpatialReference_callback(long sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		setSpatialReference(srParamValue);
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 设置地图显示时的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, srParamValue);
	}

	protected  long getSpatialScale_void_callback()
	{
		com.earthview.world.spatial.atlas.Ispatialscale returnValue = getSpatialScale();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialScale_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ispatialscale getSpatialScale()
	{
		long returnValue = getSpatialScale_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialscale __returnValue = new com.earthview.world.spatial.atlas.Ispatialscale(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialScale");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialscale)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialScale");
		}
		return __returnValue;
	}
	native private long getSpatialScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ispatialscale getSpatialScale_NoVirtual()
	{
		long returnValue = getSpatialScale_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialscale __returnValue = new com.earthview.world.spatial.atlas.Ispatialscale(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialScale");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialscale)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialScale");
		}
		return __returnValue;
	}

	protected  long getLayerCount_void_callback()
	{
		long returnValue = getLayerCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取地图集中的图层个数
	 * @param  
	 * @return 图层个数
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerCount_void_NoVirtual(long pNativeObject);
	protected long getLayerCount_NoVirtual()
	{
		long returnValue = getLayerCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.atlas.Ilayer returnValue = getLayer(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的图层
	 * @param index 索引
	 * @return 图层指针
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.atlas.Ilayer getLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long getRelatedLayer_IDataset_callback(long dataset)
	{
		com.earthview.world.spatial.geodataset.Idataset datasetParamValue = (dataset == 0L ? null : new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate));
		if(datasetParamValue != null)
		{
		datasetParamValue.setDelegate(true);
		datasetParamValue.setInstancePointer(new InstancePointer(dataset));
		IClassFactory datasetParamValueClassFactory = GlobalClassFactoryMap.get(datasetParamValue.getCppInstanceTypeName());
		if (datasetParamValueClassFactory != null)
		{
			datasetParamValue.setDelegate(true);
			datasetParamValue = (com.earthview.world.spatial.geodataset.Idataset)datasetParamValueClassFactory.create();
			datasetParamValue.setDelegate(true);
			datasetParamValue.setInstancePointer(new InstancePointer(dataset));
		}
		}
		com.earthview.world.spatial.atlas.Ilayer returnValue = getRelatedLayer(datasetParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRelatedLayer_IDataset(long pNativeObject, long dataset);
	public com.earthview.world.spatial.atlas.Ilayer getRelatedLayer(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long returnValue = getRelatedLayer_IDataset(this.nativeObject.pointer, datasetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getRelatedLayer_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected com.earthview.world.spatial.atlas.Ilayer getRelatedLayer_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long returnValue = getRelatedLayer_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long getDataset_IDataSource_EVString_callback(long ds, String name)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String nameParamValue = name;
		com.earthview.world.spatial.geodataset.Idataset returnValue = getDataset(dsParamValue, nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataset_IDataSource_EVString(long pNativeObject, long ds, String name);
	public com.earthview.world.spatial.geodataset.Idataset getDataset(com.earthview.world.spatial.geodataset.Idatasource ds, String name)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = getDataset_IDataSource_EVString(this.nativeObject.pointer, dsParamValue, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_IDataSource_EVString_NoVirtual(long pNativeObject, long ds, String name);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String name)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = getDataset_IDataSource_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	protected  long indexOfLayer_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		long returnValue = indexOfLayer(layerParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long indexOfLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 获取图层在地图中索引
	 * @param layer 图层
	 * @return 图层的索引
	 */
	public long indexOfLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = indexOfLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long indexOfLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected long indexOfLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = indexOfLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	protected  boolean isExist_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		boolean returnValue = isExist(layerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExist_ILayer(long pNativeObject, long layer);
	public boolean isExist(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isExist_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean isExist_ILayer_NoVirtual(long pNativeObject, long layer);
	protected boolean isExist_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isExist_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	protected  void addLayer_ILayer_callback(long ref_layer)
	{
		com.earthview.world.spatial.atlas.Ilayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		addLayer(ref_layerParamValue);
	}

	native private void addLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 向地图中追加一个图层
	 * @param layer 要追加的图层
	 */
	public void addLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		addLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void addLayer_ILayer_NoVirtual(long pNativeObject, long ref_layer);
	protected void addLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		addLayer_ILayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
	}

	protected  void updateLayerChanged_ILayer_ev_bool_callback(long pLayer, boolean isAdd)
	{
		com.earthview.world.spatial.atlas.Ilayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial.atlas.Ilayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		boolean isAddParamValue = isAdd;
		updateLayerChanged(pLayerParamValue, isAddParamValue);
	}

	native private void updateLayerChanged_ILayer_ev_bool(long pNativeObject, long pLayer, boolean isAdd);
	/**
	 * 更新图层改变后map的状态
	 */
	public void updateLayerChanged(com.earthview.world.spatial.atlas.Ilayer pLayer, boolean isAdd)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		boolean isAddParamValue = isAdd;
		updateLayerChanged_ILayer_ev_bool(this.nativeObject.pointer, pLayerParamValue, isAddParamValue);
	}
	native private void updateLayerChanged_ILayer_ev_bool_NoVirtual(long pNativeObject, long pLayer, boolean isAdd);
	protected void updateLayerChanged_NoVirtual(com.earthview.world.spatial.atlas.Ilayer pLayer, boolean isAdd)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		boolean isAddParamValue = isAdd;
		updateLayerChanged_ILayer_ev_bool_NoVirtual(this.nativeObject.pointer, pLayerParamValue, isAddParamValue);
	}

	protected  void insertLayer_ev_uint32_ILayer_callback(long index, long ref_layer)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.atlas.Ilayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		insertLayer(indexParamValue, ref_layerParamValue);
	}

	native private void insertLayer_ev_uint32_ILayer(long pNativeObject, long index, long ref_layer);
	/**
	 * 插入一个图层到指定索引处
	 * @param index 索引
	 * @param layer 图层
	 */
	public void insertLayer(long index, com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
	}
	native private void insertLayer_ev_uint32_ILayer_NoVirtual(long pNativeObject, long index, long ref_layer);
	protected void insertLayer_NoVirtual(long index, com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer_NoVirtual(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
	}

	protected  void removeLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeLayer(indexParamValue);
	}

	native private void removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的图层
	 * @param index 要移除图层的索引
	 */
	public void removeLayer(long index)
	{
		long indexParamValue = index;
		removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeAll_void_callback()
	{
		removeAll();
	}

	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除地图中的所有图层
	 * @param  
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void moveLayer_ev_uint32_ev_uint32_callback(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer(oldIndexParamValue, newIndexParamValue);
	}

	native private void moveLayer_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动指定索引处的图层到新的索引处
	 * @param oldIndex 之前的索引
	 * @param newIndex 目标索引
	 */
	public void moveLayer(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveLayer_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long oldIndex, long newIndex);
	protected void moveLayer_NoVirtual(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	protected  void select_IQueryFilter_EVSelectionResultType_callback(long filter, int type)
	{
		com.earthview.world.spatial.geodataset.Iqueryfilter filterParamValue = (filter == 0L ? null : new com.earthview.world.spatial.geodataset.Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate));
		if(filterParamValue != null)
		{
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.spatial.geodataset.Iqueryfilter)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		}
		com.earthview.world.spatial.atlas.EVSelectionResultType typeParamValue = com.earthview.world.spatial.atlas.EVSelectionResultType.toEnum(type);
		select(filterParamValue, typeParamValue);
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 根据设定好的配置时行选择
	 * @param filter 查询过滤条件
	 * @param type 选择的类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}
	native private void select_IQueryFilter_EVSelectionResultType_NoVirtual(long pNativeObject, long filter, int type);
	protected void select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType_NoVirtual(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}

	protected  long getMapSelection_void_callback()
	{
		com.earthview.world.spatial.atlas.Imapselection returnValue = getMapSelection();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMapSelection_void(long pNativeObject);
	/**
	 * 获取地图的选择集
	 * @param  
	 * @return 地图的选择集
	 */
	public com.earthview.world.spatial.atlas.Imapselection getMapSelection()
	{
		long returnValue = getMapSelection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imapselection __returnValue = new com.earthview.world.spatial.atlas.Imapselection(CreatedWhenConstruct.CWC_NotToCreate, "IMapSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imapselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMapSelection");
		}
		return __returnValue;
	}
	native private long getMapSelection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Imapselection getMapSelection_NoVirtual()
	{
		long returnValue = getMapSelection_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imapselection __returnValue = new com.earthview.world.spatial.atlas.Imapselection(CreatedWhenConstruct.CWC_NotToCreate, "IMapSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imapselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMapSelection");
		}
		return __returnValue;
	}

	protected  long getDisplayCache_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.atlas.Idisplaycache returnValue = getDisplayCache(displayParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDisplayCache_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 获取地图的显示缓存
	 * @param  
	 * @return 显示缓存
	 */
	public com.earthview.world.spatial.atlas.Idisplaycache getDisplayCache(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long returnValue = getDisplayCache_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Idisplaycache __returnValue = new com.earthview.world.spatial.atlas.Idisplaycache(CreatedWhenConstruct.CWC_NotToCreate, "IDisplayCache");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Idisplaycache)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDisplayCache");
		}
		return __returnValue;
	}
	native private long getDisplayCache_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected com.earthview.world.spatial.atlas.Idisplaycache getDisplayCache_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long returnValue = getDisplayCache_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Idisplaycache __returnValue = new com.earthview.world.spatial.atlas.Idisplaycache(CreatedWhenConstruct.CWC_NotToCreate, "IDisplayCache");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Idisplaycache)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDisplayCache");
		}
		return __returnValue;
	}

	protected  void draw_ISpatialDisplay_IRenderInformation_callback(long display, long info)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.atlas.Irenderinformation infoParamValue = (info == 0L ? null : new com.earthview.world.spatial.atlas.Irenderinformation(CreatedWhenConstruct.CWC_NotToCreate));
		if(infoParamValue != null)
		{
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial.atlas.Irenderinformation)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		}
		draw(displayParamValue, infoParamValue);
	}

	native private void draw_ISpatialDisplay_IRenderInformation(long pNativeObject, long display, long info);
	/**
	 * 绘制
	 * @param display 显示参数
	 * @param info 渲染进程的反馈信息
	 */
	public void draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Irenderinformation info)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		draw_ISpatialDisplay_IRenderInformation(this.nativeObject.pointer, displayParamValue, infoParamValue);
	}
	native private void draw_ISpatialDisplay_IRenderInformation_NoVirtual(long pNativeObject, long display, long info);
	protected void draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Irenderinformation info)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		draw_ISpatialDisplay_IRenderInformation_NoVirtual(this.nativeObject.pointer, displayParamValue, infoParamValue);
	}

	protected  long getPageLayout_void_callback()
	{
		com.earthview.world.spatial.carto.Ipagelayout returnValue = getPageLayout();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPageLayout_void(long pNativeObject);
	/**
	 * 获取地图对应的纸张布局
	 * @param  
	 * @return 纸张布局对象
	 */
	public com.earthview.world.spatial.carto.Ipagelayout getPageLayout()
	{
		long returnValue = getPageLayout_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private long getPageLayout_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ipagelayout getPageLayout_NoVirtual()
	{
		long returnValue = getPageLayout_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}

	protected  long createPageLayout_void_callback()
	{
		com.earthview.world.spatial.carto.Ipagelayout returnValue = createPageLayout();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createPageLayout_void(long pNativeObject);
	/**
	 * 创建纸张布局
	 * @param  
	 */
	public com.earthview.world.spatial.carto.Ipagelayout createPageLayout()
	{
		long returnValue = createPageLayout_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private long createPageLayout_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ipagelayout createPageLayout_NoVirtual()
	{
		long returnValue = createPageLayout_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}

	protected  void addMapListener_IMapListener_callback(long ref_listener)
	{
		com.earthview.world.spatial.atlas.Imaplistener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.spatial.atlas.Imaplistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.spatial.atlas.Imaplistener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		addMapListener(ref_listenerParamValue);
	}

	native private void addMapListener_IMapListener(long pNativeObject, long ref_listener);
	/**
	 * 获取图例对象
	 * @param  
	 * @param scaleBar 
	 * @param  
	 * @return 当前图例对象
	 */
	public void addMapListener(com.earthview.world.spatial.atlas.Imaplistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addMapListener_IMapListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void addMapListener_IMapListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void addMapListener_NoVirtual(com.earthview.world.spatial.atlas.Imaplistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addMapListener_IMapListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  void removeMapListner_IMapListener_callback(long listener)
	{
		com.earthview.world.spatial.atlas.Imaplistener listenerParamValue = (listener == 0L ? null : new com.earthview.world.spatial.atlas.Imaplistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.spatial.atlas.Imaplistener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		removeMapListner(listenerParamValue);
	}

	native private void removeMapListner_IMapListener(long pNativeObject, long listener);
	public void removeMapListner(com.earthview.world.spatial.atlas.Imaplistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeMapListner_IMapListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeMapListner_IMapListener_NoVirtual(long pNativeObject, long listener);
	protected void removeMapListner_NoVirtual(com.earthview.world.spatial.atlas.Imaplistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeMapListner_IMapListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  void registSpatialDisplay_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		registSpatialDisplay(displayParamValue);
	}

	native private void registSpatialDisplay_ISpatialDisplay(long pNativeObject, long display);
	public void registSpatialDisplay(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		registSpatialDisplay_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void registSpatialDisplay_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void registSpatialDisplay_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		registSpatialDisplay_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void unRegistSpatialDisplay_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		unRegistSpatialDisplay(displayParamValue);
	}

	native private void unRegistSpatialDisplay_ISpatialDisplay(long pNativeObject, long display);
	public void unRegistSpatialDisplay(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		unRegistSpatialDisplay_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void unRegistSpatialDisplay_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void unRegistSpatialDisplay_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		unRegistSpatialDisplay_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.atlas.Imap returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 创建地图的克隆体
	 * @param  
	 * @return 地图的克隆体
	 */
	public com.earthview.world.spatial.atlas.Imap ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Imap ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将地图的配置以流的方式导出
	 * @param stream 导出的流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  String toXML_void_callback()
	{
		String returnValue = toXML();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 将地图的配置以XML的方式导出
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	protected  void fromStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		fromStream(streamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Imap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_getBackground_void(long pNativeObject, String method);
	native protected void register_setBackground_IColor(long pNativeObject, String method);
	native protected void register_updateExtent_void(long pNativeObject, String method);
	native protected void register_getEnvelope_void(long pNativeObject, String method);
	native protected void register_getInterestEnvelope_void(long pNativeObject, String method);
	native protected void register_setInterestEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_getInterestRotation_void(long pNativeObject, String method);
	native protected void register_setInterestRotation_ev_real64(long pNativeObject, String method);
	native protected void register_getMapUnits_void(long pNativeObject, String method);
	native protected void register_setMapUnits_EVMapUnits(long pNativeObject, String method);
	native protected void register_getShowUnits_void(long pNativeObject, String method);
	native protected void register_setShowUnits_EVMapUnits(long pNativeObject, String method);
	native protected void register_getMinScale_void(long pNativeObject, String method);
	native protected void register_setMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getMaxScale_void(long pNativeObject, String method);
	native protected void register_setMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_getSpatialScale_void(long pNativeObject, String method);
	native protected void register_getLayerCount_void(long pNativeObject, String method);
	native protected void register_getLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_getRelatedLayer_IDataset(long pNativeObject, String method);
	native protected void register_getDataset_IDataSource_EVString(long pNativeObject, String method);
	native protected void register_indexOfLayer_ILayer(long pNativeObject, String method);
	native protected void register_isExist_ILayer(long pNativeObject, String method);
	native protected void register_addLayer_ILayer(long pNativeObject, String method);
	native protected void register_updateLayerChanged_ILayer_ev_bool(long pNativeObject, String method);
	native protected void register_insertLayer_ev_uint32_ILayer(long pNativeObject, String method);
	native protected void register_removeLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_moveLayer_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_getMapSelection_void(long pNativeObject, String method);
	native protected void register_getDisplayCache_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_IRenderInformation(long pNativeObject, String method);
	native protected void register_getPageLayout_void(long pNativeObject, String method);
	native protected void register_createPageLayout_void(long pNativeObject, String method);
	native protected void register_addMapListener_IMapListener(long pNativeObject, String method);
	native protected void register_removeMapListner_IMapListener(long pNativeObject, String method);
	native protected void register_registSpatialDisplay_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_unRegistSpatialDisplay_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_getBackground_void(this.nativeObject.pointer, "getBackground_void_callback");
			this.register_setBackground_IColor(this.nativeObject.pointer, "setBackground_IColor_callback");
			this.register_updateExtent_void(this.nativeObject.pointer, "updateExtent_void_callback");
			this.register_getEnvelope_void(this.nativeObject.pointer, "getEnvelope_void_callback");
			this.register_getInterestEnvelope_void(this.nativeObject.pointer, "getInterestEnvelope_void_callback");
			this.register_setInterestEnvelope_IEnvelope(this.nativeObject.pointer, "setInterestEnvelope_IEnvelope_callback");
			this.register_getInterestRotation_void(this.nativeObject.pointer, "getInterestRotation_void_callback");
			this.register_setInterestRotation_ev_real64(this.nativeObject.pointer, "setInterestRotation_ev_real64_callback");
			this.register_getMapUnits_void(this.nativeObject.pointer, "getMapUnits_void_callback");
			this.register_setMapUnits_EVMapUnits(this.nativeObject.pointer, "setMapUnits_EVMapUnits_callback");
			this.register_getShowUnits_void(this.nativeObject.pointer, "getShowUnits_void_callback");
			this.register_setShowUnits_EVMapUnits(this.nativeObject.pointer, "setShowUnits_EVMapUnits_callback");
			this.register_getMinScale_void(this.nativeObject.pointer, "getMinScale_void_callback");
			this.register_setMinScale_ev_real64(this.nativeObject.pointer, "setMinScale_ev_real64_callback");
			this.register_getMaxScale_void(this.nativeObject.pointer, "getMaxScale_void_callback");
			this.register_setMaxScale_ev_real64(this.nativeObject.pointer, "setMaxScale_ev_real64_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_getSpatialScale_void(this.nativeObject.pointer, "getSpatialScale_void_callback");
			this.register_getLayerCount_void(this.nativeObject.pointer, "getLayerCount_void_callback");
			this.register_getLayer_ev_uint32(this.nativeObject.pointer, "getLayer_ev_uint32_callback");
			this.register_getRelatedLayer_IDataset(this.nativeObject.pointer, "getRelatedLayer_IDataset_callback");
			this.register_getDataset_IDataSource_EVString(this.nativeObject.pointer, "getDataset_IDataSource_EVString_callback");
			this.register_indexOfLayer_ILayer(this.nativeObject.pointer, "indexOfLayer_ILayer_callback");
			this.register_isExist_ILayer(this.nativeObject.pointer, "isExist_ILayer_callback");
			this.register_addLayer_ILayer(this.nativeObject.pointer, "addLayer_ILayer_callback");
			this.register_updateLayerChanged_ILayer_ev_bool(this.nativeObject.pointer, "updateLayerChanged_ILayer_ev_bool_callback");
			this.register_insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, "insertLayer_ev_uint32_ILayer_callback");
			this.register_removeLayer_ev_uint32(this.nativeObject.pointer, "removeLayer_ev_uint32_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, "moveLayer_ev_uint32_ev_uint32_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_getMapSelection_void(this.nativeObject.pointer, "getMapSelection_void_callback");
			this.register_getDisplayCache_ISpatialDisplay(this.nativeObject.pointer, "getDisplayCache_ISpatialDisplay_callback");
			this.register_draw_ISpatialDisplay_IRenderInformation(this.nativeObject.pointer, "draw_ISpatialDisplay_IRenderInformation_callback");
			this.register_getPageLayout_void(this.nativeObject.pointer, "getPageLayout_void_callback");
			this.register_createPageLayout_void(this.nativeObject.pointer, "createPageLayout_void_callback");
			this.register_addMapListener_IMapListener(this.nativeObject.pointer, "addMapListener_IMapListener_callback");
			this.register_removeMapListner_IMapListener(this.nativeObject.pointer, "removeMapListner_IMapListener_callback");
			this.register_registSpatialDisplay_ISpatialDisplay(this.nativeObject.pointer, "registSpatialDisplay_ISpatialDisplay_callback");
			this.register_unRegistSpatialDisplay_ISpatialDisplay(this.nativeObject.pointer, "unRegistSpatialDisplay_ISpatialDisplay_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Imap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imap obj = null;
 		if(baseObj instanceof Imap)
		{
			obj = (Imap)baseObj;
		} else {
			obj = new Imap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMap");
			obj.increaseCast();
		}

		return obj;
	}
}
