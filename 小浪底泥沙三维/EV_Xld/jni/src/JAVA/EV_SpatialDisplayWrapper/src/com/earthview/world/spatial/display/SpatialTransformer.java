package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialTransformer extends com.earthview.world.spatial.display.Ispatialtransformer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialTransformer", new SpatialTransformerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSpatialTransformerProxy", new SpatialTransformerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param   
	 * @return 
	 */
	public SpatialTransformer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSpatialTransformerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SpatialTransformer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间参考系
	 * @param   
	 * @return 空间参考系对象
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
	 * 设置空间参考系
	 * @param sr 参考系对象
	 * @return 
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

	native private long getDataExtent_void(long pNativeObject);
	/**
	 * 获取地图范围
	 * @param   
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

	native private double getRotation_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param   
	 * @return 旋转的角度
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

	native private void rotate_ev_real64(long pNativeObject, double angle);
	/**
	 * 旋转
	 * @param  angle  旋转的角度
	 * @return 
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

	native private double getCurrentScale_void(long pNativeObject);
	/**
	 * 获取当前比例
	 * @param   
	 * @return 当前比例的值
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

	native private void setCurrentScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置当前比例
	 * @param scale 设置比例的值
	 * @return 
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

	native private void getCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点
	 * @param cx 中心点x坐标
	 * @param cy 中心点y坐标
	 * @return 
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

	native private void getGeographicCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点
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

	native private void setCenter_ev_real64_ev_real64(long pNativeObject, double cx, double cy);
	/**
	 * 设置中心点
	 * @param cx 中心点x坐标
	 * @param cy 中心点y坐标
	 * @return 
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

	native private void translate_ev_real64_ev_real64(long pNativeObject, double offsetX, double offsetY);
	/**
	 * 坐标转化
	 * @param offsetX X坐标的偏移量
	 * @param offsetY Y坐标的偏移量
	 * @return 
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

	native private long matrix_void(long pNativeObject);
	/**
	 * 获得矩阵
	 * @param   
	 * @return 空间矩阵对象
	 */
	public com.earthview.world.spatial.display.SpatialMatrix matrix()
	{
		long returnValue = matrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private void setMatrix_CSpatialMatrix(long pNativeObject, long matrix);
	/**
	 * 设置矩阵
	 * @param matrix 空间矩阵对象
	 * @return 
	 */
	public void setMatrix(com.earthview.world.spatial.display.SpatialMatrix matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		setMatrix_CSpatialMatrix(this.nativeObject.pointer, matrixParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重新设置
	 * @param   
	 * @return 
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

	native private void resetMapping_IEnvelope_IEnvelope_double(long pNativeObject, long dev, long data, double angle);
	public void resetMapping(com.earthview.world.spatial.geometry.Ienvelope dev, com.earthview.world.spatial.geometry.Ienvelope data, double angle)
	{
		long devParamValue = (dev == null ? 0L : dev.nativeObject.pointer);
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		double angleParamValue = angle;
		resetMapping_IEnvelope_IEnvelope_double(this.nativeObject.pointer, devParamValue, dataParamValue, angleParamValue);
	}
	native private void toDevicePoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 转换为设备的点
	 * @param x 设备点的x坐标
	 * @param y 设备点的y坐标
	 * @param count  转换为设备点的数目
	 * @return 
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

	native private void toMapPoints_ev_real64_ev_real64_ev_uint32(long pNativeObject, long x, long y, long count);
	/**
	 * 转换为地图的点
	 * @param x 地图点的x坐标
	 * @param y 地图点的y坐标
	 * @param count  转换为地图点的数目
	 * @return 
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

	native private long toMapRect_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 转换为地图矩形
	 * @param   空间矩形
	 * @return 地图空间矩形
	 */
	public com.earthview.world.spatial.display.SpatialRect toMapRect(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		long returnValue = toMapRect_CSpatialRect(this.nativeObject.pointer, rectParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long toDeviceRect_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 空间矩形转换为设备矩形
	 * @param   空间矩形
	 * @return 设备空间矩形
	 */
	public com.earthview.world.spatial.display.SpatialRect toDeviceRect(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		long returnValue = toDeviceRect_CSpatialRect(this.nativeObject.pointer, rectParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
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

	native private void setDPI_ev_real64(long pNativeObject, double dDPI);
	/**
	 * 设置DPI
	 * @param src  DPI值
	 * @return 
	 */
	public void setDPI(double dDPI)
	{
		double dDPIParamValue = dDPI;
		setDPI_ev_real64(this.nativeObject.pointer, dDPIParamValue);
	}
	native private double getDPI_void(long pNativeObject);
	public double getDPI()
	{
		double returnValue = getDPI_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRatioToDevice_void(long pNativeObject);
	/**
	 * 获取设备比率
	 * @param   
	 * @return 设备比率
	 */
	public double getRatioToDevice()
	{
		double returnValue = getRatioToDevice_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SpatialTransformer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialTransformer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static SpatialTransformer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialTransformer obj = null;
 		if(baseObj instanceof SpatialTransformer)
		{
			obj = (SpatialTransformer)baseObj;
		} else {
			obj = new SpatialTransformer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialTransformer");
			obj.increaseCast();
		}

		return obj;
	}
}
