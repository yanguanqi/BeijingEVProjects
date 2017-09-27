package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ispatialscale extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ISpatialScale", new IspatialscaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISpatialScaleProxy", new IspatialscaleClassFactory());
	}

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 检测空间比例尺是否处于激活状态
	 * @param  
	 * @return 如果处于激活状态则返回true,反之则否
	 */
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

	protected  void setActive_ev_bool_callback(boolean active)
	{
		boolean activeParamValue = active;
		setActive(activeParamValue);
	}

	native private void setActive_ev_bool(long pNativeObject, boolean active);
	/**
	 * 设置是否激活
	 * @param active 如果为true,则激活空间比例尺,反之则否
	 */
	public void setActive(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool(this.nativeObject.pointer, activeParamValue);
	}
	native private void setActive_ev_bool_NoVirtual(long pNativeObject, boolean active);
	protected void setActive_NoVirtual(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool_NoVirtual(this.nativeObject.pointer, activeParamValue);
	}

	protected  void addSR_ISpatialReference_ev_real64_callback(long sr, double bottomScale)
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
		double bottomScaleParamValue = bottomScale;
		addSR(srParamValue, bottomScaleParamValue);
	}

	native private void addSR_ISpatialReference_ev_real64(long pNativeObject, long sr, double bottomScale);
	/**
	 * 在一个指定的范围中添加一个坐标系统
	 * @param sr 待添加的坐标系统
	 * @param bottomScale 底部的比例尺(大比例尺)
	 */
	public void addSR(com.earthview.world.spatial.geometry.Ispatialreference sr, double bottomScale)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		double bottomScaleParamValue = bottomScale;
		addSR_ISpatialReference_ev_real64(this.nativeObject.pointer, srParamValue, bottomScaleParamValue);
	}
	native private void addSR_ISpatialReference_ev_real64_NoVirtual(long pNativeObject, long sr, double bottomScale);
	protected void addSR_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr, double bottomScale)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		double bottomScaleParamValue = bottomScale;
		addSR_ISpatialReference_ev_real64_NoVirtual(this.nativeObject.pointer, srParamValue, bottomScaleParamValue);
	}

	protected  void removeSR_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeSR(indexParamValue);
	}

	native private void removeSR_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的坐标系统
	 * @param index 待移除的坐标系统索引
	 */
	public void removeSR(long index)
	{
		long indexParamValue = index;
		removeSR_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeSR_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeSR_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeSR_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void changeSR_ev_uint32_ISpatialReference_callback(long index, long dest)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.geometry.Ispatialreference destParamValue = (dest == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(destParamValue != null)
		{
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		}
		changeSR(indexParamValue, destParamValue);
	}

	native private void changeSR_ev_uint32_ISpatialReference(long pNativeObject, long index, long dest);
	/**
	 * 修改指定索引处的坐标系统
	 * @param index 待修改的坐标系统的索引
	 * @param dest 目标坐标系统
	 */
	public void changeSR(long index, com.earthview.world.spatial.geometry.Ispatialreference dest)
	{
		long indexParamValue = index;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		changeSR_ev_uint32_ISpatialReference(this.nativeObject.pointer, indexParamValue, destParamValue);
	}
	native private void changeSR_ev_uint32_ISpatialReference_NoVirtual(long pNativeObject, long index, long dest);
	protected void changeSR_NoVirtual(long index, com.earthview.world.spatial.geometry.Ispatialreference dest)
	{
		long indexParamValue = index;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		changeSR_ev_uint32_ISpatialReference_NoVirtual(this.nativeObject.pointer, indexParamValue, destParamValue);
	}

	protected  void changeScale_ev_uint32_ev_real64_callback(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		changeScale(indexParamValue, scaleParamValue);
	}

	native private void changeScale_ev_uint32_ev_real64(long pNativeObject, long index, double scale);
	/**
	 * 修改指定索引处的比例尺
	 * @param index 待修改的比例尺的索引
	 * @param scale 目标比例尺
	 */
	public void changeScale(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		changeScale_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}
	native private void changeScale_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long index, double scale);
	protected void changeScale_NoVirtual(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		changeScale_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}

	protected  long getSR_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSR(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSR_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的坐标系统
	 * @param index 索引
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSR(long index)
	{
		long indexParamValue = index;
		long returnValue = getSR_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getSR_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSR_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSR_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getSR_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSR(scaleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSR_ev_real64(long pNativeObject, double scale);
	/**
	 * 通过比例尺值来获取坐标系统
	 * @param scale 比例尺值
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSR(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getSR_ev_real64(this.nativeObject.pointer, scaleParamValue);
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
	native private long getSR_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSR_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getSR_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
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

	protected  double getScale_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		double returnValue = getScale(indexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getScale_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的比例尺
	 * @param index 索引
	 * @return 比例尺
	 */
	public double getScale(long index)
	{
		long indexParamValue = index;
		double returnValue = getScale_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getScale_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected double getScale_NoVirtual(long index)
	{
		long indexParamValue = index;
		double returnValue = getScale_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getSRCount_void_callback()
	{
		long returnValue = getSRCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSRCount_void(long pNativeObject);
	/**
	 * 获取坐标系统的个数
	 * @param  
	 * @return 数量
	 */
	public long getSRCount()
	{
		long returnValue = getSRCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSRCount_void_NoVirtual(long pNativeObject);
	protected long getSRCount_NoVirtual()
	{
		long returnValue = getSRCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 把空间比例尺的配置保存到xml中
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
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
	/**
	 * 从xml无素中恢复空间比例尺的配置
	 * @param element xml元素
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把空间比例尺的配置保存到xml元素中
	 * @param  
	 * @return xml元素
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

	public Ispatialscale(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialscale(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_addSR_ISpatialReference_ev_real64(long pNativeObject, String method);
	native protected void register_removeSR_ev_uint32(long pNativeObject, String method);
	native protected void register_changeSR_ev_uint32_ISpatialReference(long pNativeObject, String method);
	native protected void register_changeScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_getSR_ev_uint32(long pNativeObject, String method);
	native protected void register_getSR_ev_real64(long pNativeObject, String method);
	native protected void register_getScale_ev_uint32(long pNativeObject, String method);
	native protected void register_getSRCount_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_addSR_ISpatialReference_ev_real64(this.nativeObject.pointer, "addSR_ISpatialReference_ev_real64_callback");
			this.register_removeSR_ev_uint32(this.nativeObject.pointer, "removeSR_ev_uint32_callback");
			this.register_changeSR_ev_uint32_ISpatialReference(this.nativeObject.pointer, "changeSR_ev_uint32_ISpatialReference_callback");
			this.register_changeScale_ev_uint32_ev_real64(this.nativeObject.pointer, "changeScale_ev_uint32_ev_real64_callback");
			this.register_getSR_ev_uint32(this.nativeObject.pointer, "getSR_ev_uint32_callback");
			this.register_getSR_ev_real64(this.nativeObject.pointer, "getSR_ev_real64_callback");
			this.register_getScale_ev_uint32(this.nativeObject.pointer, "getScale_ev_uint32_callback");
			this.register_getSRCount_void(this.nativeObject.pointer, "getSRCount_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static Ispatialscale fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialscale obj = null;
 		if(baseObj instanceof Ispatialscale)
		{
			obj = (Ispatialscale)baseObj;
		} else {
			obj = new Ispatialscale(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialScale");
			obj.increaseCast();
		}

		return obj;
	}
}
