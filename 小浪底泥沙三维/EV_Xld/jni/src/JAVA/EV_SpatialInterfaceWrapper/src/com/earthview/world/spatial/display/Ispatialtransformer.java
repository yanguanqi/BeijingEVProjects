package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间坐标转换基类
 */
public class Ispatialtransformer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ISpatialTransformer", new IspatialtransformerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JISpatialTransformerProxy", new IspatialtransformerClassFactory());
	}

	protected  boolean isValid_void_callback()
	{
		boolean returnValue = isValid();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 检测转换器是否可用
	 * @param   
	 * @return 如果可用,返回true,反之则否
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	 * 获取空间参考信息
	 * @return 返回空间参考信息
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
	 * 设置空间参考信息
	 * @param sr 空间参考信息
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

	protected  long getDataExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getDataExtent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataExtent_void(long pNativeObject);
	/**
	 * 获取地图范围
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getDataExtent()
	{
		long returnValue = getDataExtent_void(this.nativeObject.pointer);
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
	native private long getDataExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getDataExtent_NoVirtual()
	{
		long returnValue = getDataExtent_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getGeographicDataExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getGeographicDataExtent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeographicDataExtent_void(long pNativeObject);
	/**
	 * 获取地图范围(经纬度范围)
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getGeographicDataExtent()
	{
		long returnValue = getGeographicDataExtent_void(this.nativeObject.pointer);
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
	native private long getGeographicDataExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getGeographicDataExtent_NoVirtual()
	{
		long returnValue = getGeographicDataExtent_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setDataExtent_IEnvelope_callback(long extent)
	{
		com.earthview.world.spatial.geometry.Ienvelope extentParamValue = (extent == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(extentParamValue != null)
		{
		extentParamValue.setDelegate(true);
		extentParamValue.setInstancePointer(new InstancePointer(extent));
		IClassFactory extentParamValueClassFactory = GlobalClassFactoryMap.get(extentParamValue.getCppInstanceTypeName());
		if (extentParamValueClassFactory != null)
		{
			extentParamValue.setDelegate(true);
			extentParamValue = (com.earthview.world.spatial.geometry.Ienvelope)extentParamValueClassFactory.create();
			extentParamValue.setDelegate(true);
			extentParamValue.setInstancePointer(new InstancePointer(extent));
		}
		}
		setDataExtent(extentParamValue);
	}

	native private void setDataExtent_IEnvelope(long pNativeObject, long extent);
	/**
	 * 设置地图范围
	 * @param  extent 包围盒对象
	 * @return 
	 */
	public void setDataExtent(com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		setDataExtent_IEnvelope(this.nativeObject.pointer, extentParamValue);
	}
	native private void setDataExtent_IEnvelope_NoVirtual(long pNativeObject, long extent);
	protected void setDataExtent_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		setDataExtent_IEnvelope_NoVirtual(this.nativeObject.pointer, extentParamValue);
	}

	protected  long getDeviceExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getDeviceExtent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDeviceExtent_void(long pNativeObject);
	/**
	 * 获取设备范围
	 * @param   
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getDeviceExtent()
	{
		long returnValue = getDeviceExtent_void(this.nativeObject.pointer);
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
	native private long getDeviceExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getDeviceExtent_NoVirtual()
	{
		long returnValue = getDeviceExtent_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setDeviceExtent_IEnvelope_callback(long extent)
	{
		com.earthview.world.spatial.geometry.Ienvelope extentParamValue = (extent == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(extentParamValue != null)
		{
		extentParamValue.setDelegate(true);
		extentParamValue.setInstancePointer(new InstancePointer(extent));
		IClassFactory extentParamValueClassFactory = GlobalClassFactoryMap.get(extentParamValue.getCppInstanceTypeName());
		if (extentParamValueClassFactory != null)
		{
			extentParamValue.setDelegate(true);
			extentParamValue = (com.earthview.world.spatial.geometry.Ienvelope)extentParamValueClassFactory.create();
			extentParamValue.setDelegate(true);
			extentParamValue.setInstancePointer(new InstancePointer(extent));
		}
		}
		setDeviceExtent(extentParamValue);
	}

	native private void setDeviceExtent_IEnvelope(long pNativeObject, long extent);
	/**
	 * 设置设备范围
	 * @param  extent 包围盒对象
	 * @return 
	 */
	public void setDeviceExtent(com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		setDeviceExtent_IEnvelope(this.nativeObject.pointer, extentParamValue);
	}
	native private void setDeviceExtent_IEnvelope_NoVirtual(long pNativeObject, long extent);
	protected void setDeviceExtent_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		setDeviceExtent_IEnvelope_NoVirtual(this.nativeObject.pointer, extentParamValue);
	}

	protected  double getRotation_void_callback()
	{
		double returnValue = getRotation();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRotation_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @return 返回旋转角度
	 */
	public double getRotation()
	{
		double returnValue = getRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotation_void_NoVirtual(long pNativeObject);
	protected double getRotation_NoVirtual()
	{
		double returnValue = getRotation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void rotate_ev_real64_callback(double angle)
	{
		double angleParamValue = angle;
		rotate(angleParamValue);
	}

	native private void rotate_ev_real64(long pNativeObject, double angle);
	/**
	 * 将坐标进行旋转
	 * @param angle 旋转角度
	 */
	public void rotate(double angle)
	{
		double angleParamValue = angle;
		rotate_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void rotate_ev_real64_NoVirtual(long pNativeObject, double angle);
	protected void rotate_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		rotate_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  void rotateAt_ev_real64_ev_real64_ev_real64_callback(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		rotateAt(angleParamValue, xParamValue, yParamValue);
	}

	native private void rotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double x, double y);
	/**
	 * 旋转位置
	 * @param  angle  旋转的角度
	 * @param  x 旋转的x坐标
	 * @param  y  旋转的y坐标
	 * @return 
	 */
	public void rotateAt(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		rotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
	}
	native private void rotateAt_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double angle, double x, double y);
	protected void rotateAt_NoVirtual(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		rotateAt_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
	}

	protected  double getCurrentScale_void_callback()
	{
		double returnValue = getCurrentScale();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCurrentScale_void(long pNativeObject);
	/**
	 * 获取当前比例尺
	 * @return 返回当前比例尺
	 */
	public double getCurrentScale()
	{
		double returnValue = getCurrentScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCurrentScale_void_NoVirtual(long pNativeObject);
	protected double getCurrentScale_NoVirtual()
	{
		double returnValue = getCurrentScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCurrentScale_ev_real64_callback(double scale)
	{
		double scaleParamValue = scale;
		setCurrentScale(scaleParamValue);
	}

	native private void setCurrentScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置当前比例尺
	 * @param scale 当前比例尺
	 */
	public void setCurrentScale(double scale)
	{
		double scaleParamValue = scale;
		setCurrentScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setCurrentScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setCurrentScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setCurrentScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  void setCurrentScale_ev_real64_ev_real64_ev_real64_callback(double scale, double x, double y)
	{
		double scaleParamValue = scale;
		double xParamValue = x;
		double yParamValue = y;
		setCurrentScale(scaleParamValue, xParamValue, yParamValue);
	}

	native private void setCurrentScale_ev_real64_ev_real64_ev_real64(long pNativeObject, double scale, double x, double y);
	/**
	 * 设置当前比例及位置
	 * @param scale 设置比例的值
	 * @param  x 设置x坐标
	 * @param  y  设置y坐标
	 * @return 
	 */
	public void setCurrentScale(double scale, double x, double y)
	{
		double scaleParamValue = scale;
		double xParamValue = x;
		double yParamValue = y;
		setCurrentScale_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, scaleParamValue, xParamValue, yParamValue);
	}
	native private void setCurrentScale_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double scale, double x, double y);
	protected void setCurrentScale_NoVirtual(double scale, double x, double y)
	{
		double scaleParamValue = scale;
		double xParamValue = x;
		double yParamValue = y;
		setCurrentScale_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue, xParamValue, yParamValue);
	}

	protected  void getCenter_ev_real64_ev_real64_callback(long cx, long cy)
	{
		DoublePointer cxParamValue = (cx == 0L ? null : new DoublePointer(new InstancePointer(cx)));
		DoublePointer cyParamValue = (cy == 0L ? null : new DoublePointer(new InstancePointer(cy)));
		getCenter(cxParamValue, cyParamValue);
	}

	native private void getCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点
	 * @param cx 输出：中心点x坐标
	 * @param cy 输出：中心点y坐标
	 * @return 返回当前比例尺
	 */
	public void getCenter(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void getCenter_ev_real64_ev_real64_NoVirtual(long pNativeObject, long cx, long cy);
	protected void getCenter_NoVirtual(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getCenter_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}

	protected  void getGeographicCenter_ev_real64_ev_real64_callback(long cx, long cy)
	{
		DoublePointer cxParamValue = (cx == 0L ? null : new DoublePointer(new InstancePointer(cx)));
		DoublePointer cyParamValue = (cy == 0L ? null : new DoublePointer(new InstancePointer(cy)));
		getGeographicCenter(cxParamValue, cyParamValue);
	}

	native private void getGeographicCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点(地理坐标系下)
	 * @param cx 输出：中心点x坐标
	 * @param cy 输出：中心点y坐标
	 * @return 返回当前比例尺
	 */
	public void getGeographicCenter(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getGeographicCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void getGeographicCenter_ev_real64_ev_real64_NoVirtual(long pNativeObject, long cx, long cy);
	protected void getGeographicCenter_NoVirtual(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getGeographicCenter_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}

	protected  void setCenter_ev_real64_ev_real64_callback(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setCenter(cxParamValue, cyParamValue);
	}

	native private void setCenter_ev_real64_ev_real64(long pNativeObject, double cx, double cy);
	/**
	 * 设置中心点
	 * @param x 中心点x坐标
	 * @param y 中心点y坐标
	 */
	public void setCenter(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void setCenter_ev_real64_ev_real64_NoVirtual(long pNativeObject, double cx, double cy);
	protected void setCenter_NoVirtual(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setCenter_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}

	protected  void translate_ev_real64_ev_real64_callback(double offsetX, double offsetY)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		translate(offsetXParamValue, offsetYParamValue);
	}

	native private void translate_ev_real64_ev_real64(long pNativeObject, double offsetX, double offsetY);
	/**
	 * 平移
	 * @param offsetX x方向偏移量
	 * @param offsetY y方向偏移量
	 */
	public void translate(double offsetX, double offsetY)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue);
	}
	native private void translate_ev_real64_ev_real64_NoVirtual(long pNativeObject, double offsetX, double offsetY);
	protected void translate_NoVirtual(double offsetX, double offsetY)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		translate_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue);
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 重置
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void toDevicePoints_ev_real64_ev_real64_ev_uint32_callback(long x, long y, long count)
	{
		DoublePointer xParamValue = (x == 0L ? null : new DoublePointer(new InstancePointer(x)));
		DoublePointer yParamValue = (y == 0L ? null : new DoublePointer(new InstancePointer(y)));
		long countParamValue = count;
		toDevicePoints(xParamValue, yParamValue, countParamValue);
	}

	native private void toDevicePoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 将地图坐标转换为设备坐标
	 * @param offsetX 输入输出：x坐标
	 * @param offsetY 输入输出：y坐标
	 * @param count 转换为设备点的数目
	 */
	public void toDevicePoints(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		toDevicePoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	native private void toDevicePoints_ev_real64_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long x, long y, long count);
	protected void toDevicePoints_NoVirtual(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		toDevicePoints_ev_real64_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}

	protected  void toMapPoints_ev_real64_ev_real64_ev_uint32_callback(long x, long y, long count)
	{
		DoublePointer xParamValue = (x == 0L ? null : new DoublePointer(new InstancePointer(x)));
		DoublePointer yParamValue = (y == 0L ? null : new DoublePointer(new InstancePointer(y)));
		long countParamValue = count;
		toMapPoints(xParamValue, yParamValue, countParamValue);
	}

	native private void toMapPoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 将设备坐标转换为地图坐标
	 * @param offsetX 输入输出：x坐标
	 * @param offsetY 输入输出：y坐标
	 * @param count 转换为地图点的数目
	 */
	public void toMapPoints(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		toMapPoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	native private void toMapPoints_ev_real64_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long x, long y, long count);
	protected void toMapPoints_NoVirtual(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		toMapPoints_ev_real64_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}

	protected  void geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback(long x, long y, long count)
	{
		DoublePointer xParamValue = (x == 0L ? null : new DoublePointer(new InstancePointer(x)));
		DoublePointer yParamValue = (y == 0L ? null : new DoublePointer(new InstancePointer(y)));
		long countParamValue = count;
		geographicToDevicePoints(xParamValue, yParamValue, countParamValue);
	}

	native private void geographicToDevicePoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 将地图坐标（地理坐标：经纬度）转换为设备坐标
	 * @param offsetX 输入输出：x坐标
	 * @param offsetY 输入输出：y坐标
	 * @param count 转换为设备点的数目
	 */
	public void geographicToDevicePoints(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		geographicToDevicePoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	native private void geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long x, long y, long count);
	protected void geographicToDevicePoints_NoVirtual(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}

	protected  void deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback(long x, long y, long count)
	{
		DoublePointer xParamValue = (x == 0L ? null : new DoublePointer(new InstancePointer(x)));
		DoublePointer yParamValue = (y == 0L ? null : new DoublePointer(new InstancePointer(y)));
		long countParamValue = count;
		deviceToGeographicPoints(xParamValue, yParamValue, countParamValue);
	}

	native private void deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 将设备坐标转换为地图坐标(地理坐标：经纬度)
	 * @param offsetX 输入输出：x坐标
	 * @param offsetY 输入输出：y坐标
	 * @param count 转换为地图点的数目
	 */
	public void deviceToGeographicPoints(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	native private void deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long x, long y, long count);
	protected void deviceToGeographicPoints_NoVirtual(DoublePointer x, DoublePointer y, long count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long countParamValue = count;
		deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}

	protected  void toDeviceLength_ev_real64_int_callback(long len, int count)
	{
		DoublePointer lenParamValue = (len == 0L ? null : new DoublePointer(new InstancePointer(len)));
		int countParamValue = count;
		toDeviceLength(lenParamValue, countParamValue);
	}

	native private void toDeviceLength_ev_real64_int(long pNativeObject, long len, int count);
	/**
	 * 转换为设备的长度
	 * @param len 设备的长度
	 * @param count  转换为设备长度的数目
	 * @return 
	 */
	public void toDeviceLength(DoublePointer len, int count)
	{
		long lenParamValue = (len == null ? 0L : len.nativeObject.pointer);
		int countParamValue = count;
		toDeviceLength_ev_real64_int(this.nativeObject.pointer, lenParamValue, countParamValue);
	}
	native private void toDeviceLength_ev_real64_int_NoVirtual(long pNativeObject, long len, int count);
	protected void toDeviceLength_NoVirtual(DoublePointer len, int count)
	{
		long lenParamValue = (len == null ? 0L : len.nativeObject.pointer);
		int countParamValue = count;
		toDeviceLength_ev_real64_int_NoVirtual(this.nativeObject.pointer, lenParamValue, countParamValue);
	}

	protected  void toMapLength_ev_real64_int_callback(long len, int count)
	{
		DoublePointer lenParamValue = (len == 0L ? null : new DoublePointer(new InstancePointer(len)));
		int countParamValue = count;
		toMapLength(lenParamValue, countParamValue);
	}

	native private void toMapLength_ev_real64_int(long pNativeObject, long len, int count);
	/**
	 * 转换为地图的长度
	 * @param len 地图的长度
	 * @param count  转换为地图长度的数目
	 * @return 
	 */
	public void toMapLength(DoublePointer len, int count)
	{
		long lenParamValue = (len == null ? 0L : len.nativeObject.pointer);
		int countParamValue = count;
		toMapLength_ev_real64_int(this.nativeObject.pointer, lenParamValue, countParamValue);
	}
	native private void toMapLength_ev_real64_int_NoVirtual(long pNativeObject, long len, int count);
	protected void toMapLength_NoVirtual(DoublePointer len, int count)
	{
		long lenParamValue = (len == null ? 0L : len.nativeObject.pointer);
		int countParamValue = count;
		toMapLength_ev_real64_int_NoVirtual(this.nativeObject.pointer, lenParamValue, countParamValue);
	}

	protected  void toMapRect_IEnvelope_IEnvelope_callback(long devRect, long mapRect)
	{
		com.earthview.world.spatial.geometry.Ienvelope devRectParamValue = (devRect == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(devRectParamValue != null)
		{
		devRectParamValue.setDelegate(true);
		devRectParamValue.setInstancePointer(new InstancePointer(devRect));
		IClassFactory devRectParamValueClassFactory = GlobalClassFactoryMap.get(devRectParamValue.getCppInstanceTypeName());
		if (devRectParamValueClassFactory != null)
		{
			devRectParamValue.setDelegate(true);
			devRectParamValue = (com.earthview.world.spatial.geometry.Ienvelope)devRectParamValueClassFactory.create();
			devRectParamValue.setDelegate(true);
			devRectParamValue.setInstancePointer(new InstancePointer(devRect));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope mapRectParamValue = (mapRect == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(mapRectParamValue != null)
		{
		mapRectParamValue.setDelegate(true);
		mapRectParamValue.setInstancePointer(new InstancePointer(mapRect));
		IClassFactory mapRectParamValueClassFactory = GlobalClassFactoryMap.get(mapRectParamValue.getCppInstanceTypeName());
		if (mapRectParamValueClassFactory != null)
		{
			mapRectParamValue.setDelegate(true);
			mapRectParamValue = (com.earthview.world.spatial.geometry.Ienvelope)mapRectParamValueClassFactory.create();
			mapRectParamValue.setDelegate(true);
			mapRectParamValue.setInstancePointer(new InstancePointer(mapRect));
		}
		}
		toMapRect(devRectParamValue, mapRectParamValue);
	}

	native private void toMapRect_IEnvelope_IEnvelope(long pNativeObject, long devRect, long mapRect);
	/**
	 * 转换为地图矩形
	 * @param devRect  输入的设备矩形
	 * @param mapRect  输出的地图矩形
	 * @return 
	 */
	public void toMapRect(com.earthview.world.spatial.geometry.Ienvelope devRect, com.earthview.world.spatial.geometry.Ienvelope mapRect)
	{
		long devRectParamValue = (devRect == null ? 0L : devRect.nativeObject.pointer);
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		toMapRect_IEnvelope_IEnvelope(this.nativeObject.pointer, devRectParamValue, mapRectParamValue);
	}
	native private void toMapRect_IEnvelope_IEnvelope_NoVirtual(long pNativeObject, long devRect, long mapRect);
	protected void toMapRect_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope devRect, com.earthview.world.spatial.geometry.Ienvelope mapRect)
	{
		long devRectParamValue = (devRect == null ? 0L : devRect.nativeObject.pointer);
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		toMapRect_IEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, devRectParamValue, mapRectParamValue);
	}

	protected  void toDeviceRect_IEnvelope_IEnvelope_callback(long mapRect, long devRect)
	{
		com.earthview.world.spatial.geometry.Ienvelope mapRectParamValue = (mapRect == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(mapRectParamValue != null)
		{
		mapRectParamValue.setDelegate(true);
		mapRectParamValue.setInstancePointer(new InstancePointer(mapRect));
		IClassFactory mapRectParamValueClassFactory = GlobalClassFactoryMap.get(mapRectParamValue.getCppInstanceTypeName());
		if (mapRectParamValueClassFactory != null)
		{
			mapRectParamValue.setDelegate(true);
			mapRectParamValue = (com.earthview.world.spatial.geometry.Ienvelope)mapRectParamValueClassFactory.create();
			mapRectParamValue.setDelegate(true);
			mapRectParamValue.setInstancePointer(new InstancePointer(mapRect));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope devRectParamValue = (devRect == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(devRectParamValue != null)
		{
		devRectParamValue.setDelegate(true);
		devRectParamValue.setInstancePointer(new InstancePointer(devRect));
		IClassFactory devRectParamValueClassFactory = GlobalClassFactoryMap.get(devRectParamValue.getCppInstanceTypeName());
		if (devRectParamValueClassFactory != null)
		{
			devRectParamValue.setDelegate(true);
			devRectParamValue = (com.earthview.world.spatial.geometry.Ienvelope)devRectParamValueClassFactory.create();
			devRectParamValue.setDelegate(true);
			devRectParamValue.setInstancePointer(new InstancePointer(devRect));
		}
		}
		toDeviceRect(mapRectParamValue, devRectParamValue);
	}

	native private void toDeviceRect_IEnvelope_IEnvelope(long pNativeObject, long mapRect, long devRect);
	/**
	 * 转换为设备矩形
	 * @param devRect  输入的地图矩形
	 * @param mapRect  输出的设备矩形
	 * @return 
	 */
	public void toDeviceRect(com.earthview.world.spatial.geometry.Ienvelope mapRect, com.earthview.world.spatial.geometry.Ienvelope devRect)
	{
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		long devRectParamValue = (devRect == null ? 0L : devRect.nativeObject.pointer);
		toDeviceRect_IEnvelope_IEnvelope(this.nativeObject.pointer, mapRectParamValue, devRectParamValue);
	}
	native private void toDeviceRect_IEnvelope_IEnvelope_NoVirtual(long pNativeObject, long mapRect, long devRect);
	protected void toDeviceRect_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope mapRect, com.earthview.world.spatial.geometry.Ienvelope devRect)
	{
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		long devRectParamValue = (devRect == null ? 0L : devRect.nativeObject.pointer);
		toDeviceRect_IEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, mapRectParamValue, devRectParamValue);
	}

	protected  void transform_ISpatialReference_ISpatialReference_IEnvelope_callback(long src, long dest, long enve)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srcParamValue = (src == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcParamValue != null)
		{
		srcParamValue.setDelegate(true);
		srcParamValue.setInstancePointer(new InstancePointer(src));
		IClassFactory srcParamValueClassFactory = GlobalClassFactoryMap.get(srcParamValue.getCppInstanceTypeName());
		if (srcParamValueClassFactory != null)
		{
			srcParamValue.setDelegate(true);
			srcParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srcParamValueClassFactory.create();
			srcParamValue.setDelegate(true);
			srcParamValue.setInstancePointer(new InstancePointer(src));
		}
		}
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
		transform(srcParamValue, destParamValue, enveParamValue);
	}

	native private void transform_ISpatialReference_ISpatialReference_IEnvelope(long pNativeObject, long src, long dest, long enve);
	/**
	 * 转化
	 * @param src  空间源参考系
	 * @param dest  空间目标参考系
	 * @param enve  包围盒对象
	 * @return 
	 */
	public void transform(com.earthview.world.spatial.geometry.Ispatialreference src, com.earthview.world.spatial.geometry.Ispatialreference dest, com.earthview.world.spatial.geometry.Ienvelope enve)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long enveParamValue = (enve == null ? 0L : enve.nativeObject.pointer);
		transform_ISpatialReference_ISpatialReference_IEnvelope(this.nativeObject.pointer, srcParamValue, destParamValue, enveParamValue);
	}
	native private void transform_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(long pNativeObject, long src, long dest, long enve);
	protected void transform_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference src, com.earthview.world.spatial.geometry.Ispatialreference dest, com.earthview.world.spatial.geometry.Ienvelope enve)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long enveParamValue = (enve == null ? 0L : enve.nativeObject.pointer);
		transform_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(this.nativeObject.pointer, srcParamValue, destParamValue, enveParamValue);
	}

	protected  void transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback(long src, long dest, long x, long y, int count)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srcParamValue = (src == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcParamValue != null)
		{
		srcParamValue.setDelegate(true);
		srcParamValue.setInstancePointer(new InstancePointer(src));
		IClassFactory srcParamValueClassFactory = GlobalClassFactoryMap.get(srcParamValue.getCppInstanceTypeName());
		if (srcParamValueClassFactory != null)
		{
			srcParamValue.setDelegate(true);
			srcParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srcParamValueClassFactory.create();
			srcParamValue.setDelegate(true);
			srcParamValue.setInstancePointer(new InstancePointer(src));
		}
		}
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
		DoublePointer xParamValue = (x == 0L ? null : new DoublePointer(new InstancePointer(x)));
		DoublePointer yParamValue = (y == 0L ? null : new DoublePointer(new InstancePointer(y)));
		int countParamValue = count;
		transform(srcParamValue, destParamValue, xParamValue, yParamValue, countParamValue);
	}

	native private void transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(long pNativeObject, long src, long dest, long x, long y, int count);
	/**
	 * 转化
	 * @param src 空间源参考系
	 * @param dest 空间目标参考系
	 * @param x 空间x坐标值
	 * @param y 空间y坐标值
	 * @param count 转化的数目
	 * @return 
	 */
	public void transform(com.earthview.world.spatial.geometry.Ispatialreference src, com.earthview.world.spatial.geometry.Ispatialreference dest, DoublePointer x, DoublePointer y, int count)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		int countParamValue = count;
		transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, srcParamValue, destParamValue, xParamValue, yParamValue, countParamValue);
	}
	native private void transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(long pNativeObject, long src, long dest, long x, long y, int count);
	protected void transform_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference src, com.earthview.world.spatial.geometry.Ispatialreference dest, DoublePointer x, DoublePointer y, int count)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		int countParamValue = count;
		transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(this.nativeObject.pointer, srcParamValue, destParamValue, xParamValue, yParamValue, countParamValue);
	}

	protected  void transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback(long src, int nCount, long pdfX, long pdfY, boolean pForwardFlag)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srcParamValue = (src == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcParamValue != null)
		{
		srcParamValue.setDelegate(true);
		srcParamValue.setInstancePointer(new InstancePointer(src));
		IClassFactory srcParamValueClassFactory = GlobalClassFactoryMap.get(srcParamValue.getCppInstanceTypeName());
		if (srcParamValueClassFactory != null)
		{
			srcParamValue.setDelegate(true);
			srcParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srcParamValueClassFactory.create();
			srcParamValue.setDelegate(true);
			srcParamValue.setInstancePointer(new InstancePointer(src));
		}
		}
		int nCountParamValue = nCount;
		DoublePointer pdfXParamValue = (pdfX == 0L ? null : new DoublePointer(new InstancePointer(pdfX)));
		DoublePointer pdfYParamValue = (pdfY == 0L ? null : new DoublePointer(new InstancePointer(pdfY)));
		boolean pForwardFlagParamValue = pForwardFlag;
		transform(srcParamValue, nCountParamValue, pdfXParamValue, pdfYParamValue, pForwardFlagParamValue);
	}

	native private void transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(long pNativeObject, long src, int nCount, long pdfX, long pdfY, boolean pForwardFlag);
	/**
	 * 坐标转换
	 * @param objSrcCrdSys 源坐标空间参考指针
	 * @param nCount 坐标个数
	 * @param pdfX X坐标指针,东坐标(m)或经度(°)
	 * @param pdfY Y坐标指针,北坐标(m)或纬度(°)
	 * @param pdfZ Z坐标指针,椭球高度（m）
	 * @param pForwardFlag 正算标记,true表示从地理坐标到投影坐标
	 * @return 0表示成功正常
	 */
	public void transform(com.earthview.world.spatial.geometry.Ispatialreference src, int nCount, DoublePointer pdfX, DoublePointer pdfY, boolean pForwardFlag)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		boolean pForwardFlagParamValue = pForwardFlag;
		transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, srcParamValue, nCountParamValue, pdfXParamValue, pdfYParamValue, pForwardFlagParamValue);
	}
	native private void transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(long pNativeObject, long src, int nCount, long pdfX, long pdfY, boolean pForwardFlag);
	protected void transform_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference src, int nCount, DoublePointer pdfX, DoublePointer pdfY, boolean pForwardFlag)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		boolean pForwardFlagParamValue = pForwardFlag;
		transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, srcParamValue, nCountParamValue, pdfXParamValue, pdfYParamValue, pForwardFlagParamValue);
	}

	public Ispatialtransformer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialtransformer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_getDataExtent_void(long pNativeObject, String method);
	native protected void register_getGeographicDataExtent_void(long pNativeObject, String method);
	native protected void register_setDataExtent_IEnvelope(long pNativeObject, String method);
	native protected void register_getDeviceExtent_void(long pNativeObject, String method);
	native protected void register_setDeviceExtent_IEnvelope(long pNativeObject, String method);
	native protected void register_getRotation_void(long pNativeObject, String method);
	native protected void register_rotate_ev_real64(long pNativeObject, String method);
	native protected void register_rotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getCurrentScale_void(long pNativeObject, String method);
	native protected void register_setCurrentScale_ev_real64(long pNativeObject, String method);
	native protected void register_setCurrentScale_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getCenter_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getGeographicCenter_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_setCenter_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_translate_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_toDevicePoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_toMapPoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_toDeviceLength_ev_real64_int(long pNativeObject, String method);
	native protected void register_toMapLength_ev_real64_int(long pNativeObject, String method);
	native protected void register_toMapRect_IEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_toDeviceRect_IEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_transform_ISpatialReference_ISpatialReference_IEnvelope(long pNativeObject, String method);
	native protected void register_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(long pNativeObject, String method);
	native protected void register_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_getDataExtent_void(this.nativeObject.pointer, "getDataExtent_void_callback");
			this.register_getGeographicDataExtent_void(this.nativeObject.pointer, "getGeographicDataExtent_void_callback");
			this.register_setDataExtent_IEnvelope(this.nativeObject.pointer, "setDataExtent_IEnvelope_callback");
			this.register_getDeviceExtent_void(this.nativeObject.pointer, "getDeviceExtent_void_callback");
			this.register_setDeviceExtent_IEnvelope(this.nativeObject.pointer, "setDeviceExtent_IEnvelope_callback");
			this.register_getRotation_void(this.nativeObject.pointer, "getRotation_void_callback");
			this.register_rotate_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_callback");
			this.register_rotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotateAt_ev_real64_ev_real64_ev_real64_callback");
			this.register_getCurrentScale_void(this.nativeObject.pointer, "getCurrentScale_void_callback");
			this.register_setCurrentScale_ev_real64(this.nativeObject.pointer, "setCurrentScale_ev_real64_callback");
			this.register_setCurrentScale_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "setCurrentScale_ev_real64_ev_real64_ev_real64_callback");
			this.register_getCenter_ev_real64_ev_real64(this.nativeObject.pointer, "getCenter_ev_real64_ev_real64_callback");
			this.register_getGeographicCenter_ev_real64_ev_real64(this.nativeObject.pointer, "getGeographicCenter_ev_real64_ev_real64_callback");
			this.register_setCenter_ev_real64_ev_real64(this.nativeObject.pointer, "setCenter_ev_real64_ev_real64_callback");
			this.register_translate_ev_real64_ev_real64(this.nativeObject.pointer, "translate_ev_real64_ev_real64_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_toDevicePoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, "toDevicePoints_ev_real64_ev_real64_ev_uint32_callback");
			this.register_toMapPoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, "toMapPoints_ev_real64_ev_real64_ev_uint32_callback");
			this.register_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, "geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback");
			this.register_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32(this.nativeObject.pointer, "deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback");
			this.register_toDeviceLength_ev_real64_int(this.nativeObject.pointer, "toDeviceLength_ev_real64_int_callback");
			this.register_toMapLength_ev_real64_int(this.nativeObject.pointer, "toMapLength_ev_real64_int_callback");
			this.register_toMapRect_IEnvelope_IEnvelope(this.nativeObject.pointer, "toMapRect_IEnvelope_IEnvelope_callback");
			this.register_toDeviceRect_IEnvelope_IEnvelope(this.nativeObject.pointer, "toDeviceRect_IEnvelope_IEnvelope_callback");
			this.register_transform_ISpatialReference_ISpatialReference_IEnvelope(this.nativeObject.pointer, "transform_ISpatialReference_ISpatialReference_IEnvelope_callback");
			this.register_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, "transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback");
			this.register_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, "transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback");
		}
	}
	
	public static Ispatialtransformer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialtransformer obj = null;
 		if(baseObj instanceof Ispatialtransformer)
		{
			obj = (Ispatialtransformer)baseObj;
		} else {
			obj = new Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialTransformer");
			obj.increaseCast();
		}

		return obj;
	}
}
