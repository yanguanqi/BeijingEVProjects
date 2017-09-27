package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 显示器参数类，用于CIELab颜色空间的转换提供方法如下：判断是否有效值、判断加载文件是否成功、获取与设置gamma值、深度Copy对象获取与设置Red点的X、Y值，获取与设置Green点的X、Y值，获取与设置Blue点的X、Y值，	获取与设置White点的X、Y值
 */
public class MonitorParameter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CMonitorParameter", new MonitorParameterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCMonitorParameterProxy", new MonitorParameterClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public MonitorParameter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMonitorParameterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.MonitorParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param filePath 文件路径
	 */
	public MonitorParameter(String filePath) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filePathPtr = new BasePointer(filePath);
		list.add("filePath", filePathPtr.get());
		Create("JCMonitorParameterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.MonitorParameter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断是否有效值
	 * @param  
	 * @return 返回true，则有效；否则无效
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean load_EVString(long pNativeObject, String filePath);
	/**
	 * 加载文件
	 * @param filePath 文件路径
	 * @return 返回true，则加载成功；否则失败
	 */
	public boolean load(String filePath)
	{
		String filePathParamValue = filePath;
		boolean returnValue = load_EVString(this.nativeObject.pointer, filePathParamValue);
		return returnValue;
	}
	native private double getGamma_void(long pNativeObject);
	/**
	 * /获取gamma值/
	 * @param  
	 * @return gamma值
	 */
	public double getGamma()
	{
		double returnValue = getGamma_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRedPointX_void(long pNativeObject);
	/**
	 * 获取Red点的X值
	 * @param  
	 * @return Red点的X值
	 */
	public double getRedPointX()
	{
		double returnValue = getRedPointX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRedPointY_void(long pNativeObject);
	/**
	 * 获取Red点的Y值
	 * @param  
	 * @return Red点的Y值
	 */
	public double getRedPointY()
	{
		double returnValue = getRedPointY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getGreenPointX_void(long pNativeObject);
	/**
	 * 获取Green点的X值
	 * @param  
	 * @return Green点的X值
	 */
	public double getGreenPointX()
	{
		double returnValue = getGreenPointX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getGreenPointY_void(long pNativeObject);
	/**
	 * 获取Green点的Y值
	 * @param  
	 * @return Green点的Y值
	 */
	public double getGreenPointY()
	{
		double returnValue = getGreenPointY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBluePointX_void(long pNativeObject);
	/**
	 * 获取Blue点的X值
	 * @param  
	 * @return Blue点的X值
	 */
	public double getBluePointX()
	{
		double returnValue = getBluePointX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBluePointY_void(long pNativeObject);
	/**
	 * 获取Blue点的Y值
	 * @param  
	 * @return Blue点的Y值
	 */
	public double getBluePointY()
	{
		double returnValue = getBluePointY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWhitePointX_void(long pNativeObject);
	/**
	 * 获取White点的X值
	 * @param  
	 * @return White点的X值
	 */
	public double getWhitePointX()
	{
		double returnValue = getWhitePointX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWhitePointY_void(long pNativeObject);
	/**
	 * 获取White点的Y值
	 * @param  
	 * @return White点的Y值
	 */
	public double getWhitePointY()
	{
		double returnValue = getWhitePointY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGamma_ev_real64(long pNativeObject, double value);
	/**
	 * 设置gamma值
	 * @param value gamma值
	 */
	public void setGamma(double value)
	{
		double valueParamValue = value;
		setGamma_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setRedPointX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Red点的X值
	 * @param value Red点的X值
	 */
	public void setRedPointX(double value)
	{
		double valueParamValue = value;
		setRedPointX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setRedPointY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Red点的Y值
	 * @param value Red点的Y值
	 */
	public void setRedPointY(double value)
	{
		double valueParamValue = value;
		setRedPointY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGreenPointX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Green点的X值
	 * @param value Green点的X值
	 */
	public void setGreenPointX(double value)
	{
		double valueParamValue = value;
		setGreenPointX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGreenPointY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Green点的Y值
	 * @param value Green点的Y值
	 */
	public void setGreenPointY(double value)
	{
		double valueParamValue = value;
		setGreenPointY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setBluePointX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Blue点的X值
	 * @param value Blue点的X值
	 */
	public void setBluePointX(double value)
	{
		double valueParamValue = value;
		setBluePointX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setBluePointY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Blue点的Y值
	 * @param value Blue点的Y值
	 */
	public void setBluePointY(double value)
	{
		double valueParamValue = value;
		setBluePointY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWhitePointX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置White点的X值
	 * @param value White点的X值
	 */
	public void setWhitePointX(double value)
	{
		double valueParamValue = value;
		setWhitePointX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWhitePointY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置White点的Y值
	 * @param value White点的Y值
	 */
	public void setWhitePointY(double value)
	{
		double valueParamValue = value;
		setWhitePointY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.display.MonitorParameter returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度Copy对象内存中不创建对象
	 * @param  
	 * @return EarthView::World::Spatial::Display::CMonitorParameter对象
	 */
	public com.earthview.world.spatial.display.MonitorParameter ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.MonitorParameter __returnValue = new com.earthview.world.spatial.display.MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate, "CMonitorParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.MonitorParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMonitorParameter");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.MonitorParameter ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.MonitorParameter __returnValue = new com.earthview.world.spatial.display.MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate, "CMonitorParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.MonitorParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMonitorParameter");
		}
		return __returnValue;
	}

	public MonitorParameter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MonitorParameter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static MonitorParameter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MonitorParameter obj = null;
 		if(baseObj instanceof MonitorParameter)
		{
			obj = (MonitorParameter)baseObj;
		} else {
			obj = new MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMonitorParameter");
			obj.increaseCast();
		}

		return obj;
	}
}
