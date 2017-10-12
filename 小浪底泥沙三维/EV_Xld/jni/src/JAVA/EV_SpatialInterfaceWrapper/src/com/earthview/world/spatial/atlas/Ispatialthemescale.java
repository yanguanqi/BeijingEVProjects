package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 专题图基于比例尺的管理对象，不同比例尺下可以设置获取不同专题图
 */
public class Ispatialthemescale extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ISpatialThemeScale", new IspatialthemescaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISpatialThemeScaleProxy", new IspatialthemescaleClassFactory());
	}

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 检测是否处于激活状态
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
	 * @param active 如果为true,则激活,反之则否
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

	protected  void addTheme_ITheme_ev_real64_callback(long pTheme, double bottomScale)
	{
		com.earthview.world.spatial.theme.Itheme pThemeParamValue = (pTheme == 0L ? null : new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate));
		if(pThemeParamValue != null)
		{
		pThemeParamValue.setDelegate(true);
		pThemeParamValue.setInstancePointer(new InstancePointer(pTheme));
		IClassFactory pThemeParamValueClassFactory = GlobalClassFactoryMap.get(pThemeParamValue.getCppInstanceTypeName());
		if (pThemeParamValueClassFactory != null)
		{
			pThemeParamValue.setDelegate(true);
			pThemeParamValue = (com.earthview.world.spatial.theme.Itheme)pThemeParamValueClassFactory.create();
			pThemeParamValue.setDelegate(true);
			pThemeParamValue.setInstancePointer(new InstancePointer(pTheme));
		}
		}
		double bottomScaleParamValue = bottomScale;
		addTheme(pThemeParamValue, bottomScaleParamValue);
	}

	native private void addTheme_ITheme_ev_real64(long pNativeObject, long pTheme, double bottomScale);
	/**
	 * 在一个指定的范围中添加一个专题图
	 * @param pTheme 待添加的专题图
	 * @param bottomScale 底部的比例尺(大比例尺)
	 */
	public void addTheme(com.earthview.world.spatial.theme.Itheme pTheme, double bottomScale)
	{
		long pThemeParamValue = (pTheme == null ? 0L : pTheme.nativeObject.pointer);
		double bottomScaleParamValue = bottomScale;
		addTheme_ITheme_ev_real64(this.nativeObject.pointer, pThemeParamValue, bottomScaleParamValue);
	}
	native private void addTheme_ITheme_ev_real64_NoVirtual(long pNativeObject, long pTheme, double bottomScale);
	protected void addTheme_NoVirtual(com.earthview.world.spatial.theme.Itheme pTheme, double bottomScale)
	{
		long pThemeParamValue = (pTheme == null ? 0L : pTheme.nativeObject.pointer);
		double bottomScaleParamValue = bottomScale;
		addTheme_ITheme_ev_real64_NoVirtual(this.nativeObject.pointer, pThemeParamValue, bottomScaleParamValue);
	}

	protected  void removeTheme_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeTheme(indexParamValue);
	}

	native private void removeTheme_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的专题图
	 * @param index 待移除的专题图索引
	 */
	public void removeTheme(long index)
	{
		long indexParamValue = index;
		removeTheme_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeTheme_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeTheme_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeTheme_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void changeTheme_ev_uint32_ITheme_callback(long index, long dest)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.theme.Itheme destParamValue = (dest == 0L ? null : new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate));
		if(destParamValue != null)
		{
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.spatial.theme.Itheme)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		}
		changeTheme(indexParamValue, destParamValue);
	}

	native private void changeTheme_ev_uint32_ITheme(long pNativeObject, long index, long dest);
	/**
	 * 修改指定索引处的专题图
	 * @param index 待修改的专题图的索引
	 * @param dest 目标专题图
	 */
	public void changeTheme(long index, com.earthview.world.spatial.theme.Itheme dest)
	{
		long indexParamValue = index;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		changeTheme_ev_uint32_ITheme(this.nativeObject.pointer, indexParamValue, destParamValue);
	}
	native private void changeTheme_ev_uint32_ITheme_NoVirtual(long pNativeObject, long index, long dest);
	protected void changeTheme_NoVirtual(long index, com.earthview.world.spatial.theme.Itheme dest)
	{
		long indexParamValue = index;
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		changeTheme_ev_uint32_ITheme_NoVirtual(this.nativeObject.pointer, indexParamValue, destParamValue);
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

	protected  long getTheme_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.theme.Itheme returnValue = getTheme(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTheme_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的专题图
	 * @param index 索引
	 * @return 专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme(long index)
	{
		long indexParamValue = index;
		long returnValue = getTheme_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getTheme_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.theme.Itheme getTheme_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTheme_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	protected  long getTheme_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		com.earthview.world.spatial.theme.Itheme returnValue = getTheme(scaleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTheme_ev_real64(long pNativeObject, double scale);
	/**
	 * 通过比例尺值来获取专题图
	 * @param scale 比例尺值
	 * @return 专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getTheme_ev_real64(this.nativeObject.pointer, scaleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getTheme_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected com.earthview.world.spatial.theme.Itheme getTheme_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getTheme_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
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

	protected  long getThemeCount_void_callback()
	{
		long returnValue = getThemeCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getThemeCount_void(long pNativeObject);
	/**
	 * 获取专题图的个数
	 * @param  
	 * @return 数量
	 */
	public long getThemeCount()
	{
		long returnValue = getThemeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getThemeCount_void_NoVirtual(long pNativeObject);
	protected long getThemeCount_NoVirtual()
	{
		long returnValue = getThemeCount_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getThemeIndex_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getThemeIndex(scaleParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getThemeIndex_ev_real64(long pNativeObject, double scale);
	/**
	 * 获取专题图的索引
	 * @param  
	 * @return index
	 */
	public long getThemeIndex(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getThemeIndex_ev_real64(this.nativeObject.pointer, scaleParamValue);
		return returnValue;
	}
	native private long getThemeIndex_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected long getThemeIndex_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		long returnValue = getThemeIndex_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
		return returnValue;
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

	public Ispatialthemescale(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialthemescale(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_addTheme_ITheme_ev_real64(long pNativeObject, String method);
	native protected void register_removeTheme_ev_uint32(long pNativeObject, String method);
	native protected void register_changeTheme_ev_uint32_ITheme(long pNativeObject, String method);
	native protected void register_changeScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_getTheme_ev_uint32(long pNativeObject, String method);
	native protected void register_getTheme_ev_real64(long pNativeObject, String method);
	native protected void register_getScale_ev_uint32(long pNativeObject, String method);
	native protected void register_getThemeCount_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_getThemeIndex_ev_real64(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_addTheme_ITheme_ev_real64(this.nativeObject.pointer, "addTheme_ITheme_ev_real64_callback");
			this.register_removeTheme_ev_uint32(this.nativeObject.pointer, "removeTheme_ev_uint32_callback");
			this.register_changeTheme_ev_uint32_ITheme(this.nativeObject.pointer, "changeTheme_ev_uint32_ITheme_callback");
			this.register_changeScale_ev_uint32_ev_real64(this.nativeObject.pointer, "changeScale_ev_uint32_ev_real64_callback");
			this.register_getTheme_ev_uint32(this.nativeObject.pointer, "getTheme_ev_uint32_callback");
			this.register_getTheme_ev_real64(this.nativeObject.pointer, "getTheme_ev_real64_callback");
			this.register_getScale_ev_uint32(this.nativeObject.pointer, "getScale_ev_uint32_callback");
			this.register_getThemeCount_void(this.nativeObject.pointer, "getThemeCount_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_getThemeIndex_ev_real64(this.nativeObject.pointer, "getThemeIndex_ev_real64_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static Ispatialthemescale fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialthemescale obj = null;
 		if(baseObj instanceof Ispatialthemescale)
		{
			obj = (Ispatialthemescale)baseObj;
		} else {
			obj = new Ispatialthemescale(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialThemeScale");
			obj.increaseCast();
		}

		return obj;
	}
}
