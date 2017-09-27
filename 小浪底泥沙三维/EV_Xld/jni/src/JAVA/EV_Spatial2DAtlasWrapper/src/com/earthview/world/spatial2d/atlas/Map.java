package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图类
 */
public class Map extends com.earthview.world.spatial.atlas.Imap {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMap", new MapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCMapProxy", new MapClassFactory());
	}

	/**
	 * 地图类
	 */
	public Map() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMapProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.Map".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isActive_void(long pNativeObject);
	///废弃的方法
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

	native private void setActive_ev_bool(long pNativeObject, boolean isActive);
	/// added by wangwei in 2013-04-22
	///废弃的方法
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

	native private String getName_void(long pNativeObject);
	/**
	 * /获取地图的名称/
	 * @param  
	 * @return 名称
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

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置地图的名称
	 * @param name 名称
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

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取地图的描述信息
	 * @param  
	 * @return 描述信息
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

	native private void setDescription_EVString(long pNativeObject, String desc);
	/**
	 * 设置地图的描述信息
	 * @param desc 描述信息
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

	native private long getBackground_void(long pNativeObject);
	/**
	 * 获取背景色
	 * @param  
	 * @return 背景色
	 */
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

	native private void setBackground_IColor(long pNativeObject, long background);
	/**
	 * 设置背景色
	 * @param background 背景色
	 */
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

	native private void updateExtent_void(long pNativeObject);
	/**
	 * 更新地图的范围
	 * @param  
	 */
	public void updateExtent()
	{
		updateExtent_void(this.nativeObject.pointer);
	}
	native private void updateExtent_void_NoVirtual(long pNativeObject);
	protected void updateExtent_NoVirtual()
	{
		updateExtent_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getInterestEnvelope_void(long pNativeObject);
	/**
	 * 获取感兴趣的范围
	 * @param  
	 * @return 兴趣范围
	 */
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

	native private void setInterestEnvelope_IEnvelope(long pNativeObject, long enve);
	/**
	 * 设置感兴趣的范围
	 * @param enve 范围
	 */
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

	native private double getInterestRotation_void(long pNativeObject);
	/**
	 * 获取感兴趣的旋转角度
	 * @param  
	 * @return 旋转角度
	 */
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

	native private void setInterestRotation_ev_real64(long pNativeObject, double rotation);
	/**
	 * 设置感兴趣的旋转角度
	 * @param rotation 旋转角度
	 */
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

	native private double getMinScale_void(long pNativeObject);
	/**
	 * 获取最小比例尺
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

	native private void setMinScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置最小比例尺
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

	native private double getMaxScale_void(long pNativeObject);
	/**
	 * 获取最大比例尺
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

	native private void setMaxScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置最大比例尺
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

	native private boolean ignoreScale_void(long pNativeObject);
	/**
	 * 在绘制时是否忽略比例尺范围
	 * @param  
	 * @return 如果忽略则返回true,反之则否
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

	native private void setIgnoreScale_ev_bool(long pNativeObject, boolean ignore);
	/**
	 * 设置是否忽略比例尺范围
	 * @param ignore 是否忽略比例尺范围
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

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取坐标系统
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

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 设置坐标系统
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

	native private long getSpatialScale_void(long pNativeObject);
	/**
	 * 获取空间比例尺
	 * @param  
	 * @return 空间比例尺
	 */
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

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取图层个数
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

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的图层
	 * @param index 索引
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

	native private long getRelatedLayer_IDataset(long pNativeObject, long dataset);
	/**
	 * 获取与指定数据集相关联的图层
	 * @param dataset 数据集
	 * @return 图层
	 */
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

	native private long getDataset_IDataSource_EVString(long pNativeObject, long ds, String name);
	/**
	 * 通过名字在指定数据源中去找数据集
	 * @param ds 数据源
	 * @param name 数据集的名称
	 */
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

	native private long indexOfLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 求取指定图层在地图中的索引
	 * @param layer 图层
	 * @return 索引
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

	native private boolean isExist_ILayer(long pNativeObject, long layer);
	/**
	 * 判断指定图层是否存在于地图中
	 * @param  
	 * @return 如果存在则返回true,反之则返回false
	 */
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

	native private void addLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 添加图层
	 * @param layer 待添加的图层
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

	native private void insertLayer_ev_uint32_ILayer(long pNativeObject, long index, long layer);
	/**
	 * /在指定索引处插入图层/
	 * @param index 索引
	 * @param layer 待插入的图层
	 */
	public void insertLayer(long index, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long indexParamValue = index;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, indexParamValue, layerParamValue);
	}
	native private void insertLayer_ev_uint32_ILayer_NoVirtual(long pNativeObject, long index, long layer);
	protected void insertLayer_NoVirtual(long index, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long indexParamValue = index;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer_NoVirtual(this.nativeObject.pointer, indexParamValue, layerParamValue);
	}

	native private void removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的图层
	 * @param index 图层索引
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

	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除所有图层
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

	native private void moveLayer_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动图层
	 * @param oldIndex 图层原先的索引
	 * @param newIndex 图层新的索引
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

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 根据指定条件进行选择要素
	 * @param filter 查询过滤器
	 * @param type 选择类型
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

	native private long getMapSelection_void(long pNativeObject);
	/**
	 * 获取地图选择集
	 * @param  
	 * @return 地图选择集
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

	native private long getDisplayCache_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 获取显示的缓存
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

	native private void draw_ISpatialDisplay_IRenderInformation(long pNativeObject, long display, long info);
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param info 渲染信息
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

	native private void addMapListener_IMapListener(long pNativeObject, long ref_listener);
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制地图,内存需要外部释放
	 * @param  
	 * @return 地图
	 */
	public com.earthview.world.spatial.atlas.Imap ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 把地图的配置导出成流
	 * @param stream 导出流
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml中恢复地图的配置
	 * @param element xml要素
	 */
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把地图的配置保存到xml要素中
	 * @param  
	 */
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

	native private void updateLayerChanged_ILayer_ev_bool(long pNativeObject, long pLayer, boolean isAdd);
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

	public Map(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Map(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 将地图的配置以XML的方式导出
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		return super.toXML_NoVirtual();
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
	
	public static Map fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Map obj = null;
 		if(baseObj instanceof Map)
		{
			obj = (Map)baseObj;
		} else {
			obj = new Map(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMap");
			obj.increaseCast();
		}

		return obj;
	}
}
