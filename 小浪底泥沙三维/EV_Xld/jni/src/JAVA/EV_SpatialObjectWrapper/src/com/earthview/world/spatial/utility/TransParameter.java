package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CTransParameter基准变换所需参数集
 */
public class TransParameter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CTransParameter", new TransParameterClassFactory());
	}

	/**
	 * 禁用默认构造函数
	 */
	public TransParameter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTransParameter", null);
	}

	/**
	 * 赋值构造函数
	 * @param dfX X轴平移量(单位为m)
	 * @param dfY Y轴平移量(单位为m)
	 * @param dfZ Z轴平移量(单位为m)
	 * @param dfRX X轴旋转量(单位为弧度)
	 * @param dfRY Y轴旋转量(单位为弧度)
	 * @param dfRZ Z轴旋转量(单位为弧度)
	 * @param dfPPM 缩放因子(单位为百万分之一米)
	 */
	public TransParameter(double dfX, double dfY, double dfZ, double dfRX, double dfRY, double dfRZ, double dfPPM) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfXPtr = new BasePointer(dfX);
		list.add("dfX", dfXPtr.get());
		BasePointer dfYPtr = new BasePointer(dfY);
		list.add("dfY", dfYPtr.get());
		BasePointer dfZPtr = new BasePointer(dfZ);
		list.add("dfZ", dfZPtr.get());
		BasePointer dfRXPtr = new BasePointer(dfRX);
		list.add("dfRX", dfRXPtr.get());
		BasePointer dfRYPtr = new BasePointer(dfRY);
		list.add("dfRY", dfRYPtr.get());
		BasePointer dfRZPtr = new BasePointer(dfRZ);
		list.add("dfRZ", dfRZPtr.get());
		BasePointer dfPPMPtr = new BasePointer(dfPPM);
		list.add("dfPPM", dfPPMPtr.get());
		Create("CTransParameter", list);
	}

	native private void setTransX_ev_real64(long pNativeObject, double dfX);
	/**
	 * 设置X方向平移量
	 * @param dfX X轴平移量
	 */
	public void setTransX(double dfX)
	{
		double dfXParamValue = dfX;
		setTransX_ev_real64(this.nativeObject.pointer, dfXParamValue);
	}
	native private void setTransY_ev_real64(long pNativeObject, double dfY);
	/**
	 * 设置Y方向平移量
	 * @param dfY Y轴平移量
	 */
	public void setTransY(double dfY)
	{
		double dfYParamValue = dfY;
		setTransY_ev_real64(this.nativeObject.pointer, dfYParamValue);
	}
	native private void setTransZ_ev_real64(long pNativeObject, double dfZ);
	/**
	 * 设置Z方向平移量
	 * @param dfZ Z轴平移量
	 */
	public void setTransZ(double dfZ)
	{
		double dfZParamValue = dfZ;
		setTransZ_ev_real64(this.nativeObject.pointer, dfZParamValue);
	}
	native private void setRotateX_ev_real64(long pNativeObject, double dfRX);
	/**
	 * 设置X方向旋转量
	 * @param dfRX X轴方向旋转量
	 */
	public void setRotateX(double dfRX)
	{
		double dfRXParamValue = dfRX;
		setRotateX_ev_real64(this.nativeObject.pointer, dfRXParamValue);
	}
	native private void setRotateY_ev_real64(long pNativeObject, double dfRY);
	/**
	 * 设置Y方向旋转量
	 * @param dfRY Y轴方向旋转量
	 */
	public void setRotateY(double dfRY)
	{
		double dfRYParamValue = dfRY;
		setRotateY_ev_real64(this.nativeObject.pointer, dfRYParamValue);
	}
	native private void setRotateZ_ev_real64(long pNativeObject, double dfRZ);
	/**
	 * 设置Z方向旋转量
	 * @param dfRZ Z轴方向旋转量
	 */
	public void setRotateZ(double dfRZ)
	{
		double dfRZParamValue = dfRZ;
		setRotateZ_ev_real64(this.nativeObject.pointer, dfRZParamValue);
	}
	native private void setSaclePPM_ev_real64(long pNativeObject, double dfPPM);
	/**
	 * 设置缩放因子
	 * @param dfPPM dfPPM缩放因子
	 */
	public void setSaclePPM(double dfPPM)
	{
		double dfPPMParamValue = dfPPM;
		setSaclePPM_ev_real64(this.nativeObject.pointer, dfPPMParamValue);
	}
	native private double getTransX_void(long pNativeObject);
	/**
	 * 获取X轴方向平移量
	 */
	public double getTransX()
	{
		double returnValue = getTransX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTransY_void(long pNativeObject);
	/**
	 * 获取Y轴方向平移量
	 */
	public double getTransY()
	{
		double returnValue = getTransY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTransZ_void(long pNativeObject);
	/**
	 * 获取Z轴方向平移量
	 */
	public double getTransZ()
	{
		double returnValue = getTransZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateX_void(long pNativeObject);
	/**
	 * 获取X轴方向旋转量
	 */
	public double getRotateX()
	{
		double returnValue = getRotateX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateY_void(long pNativeObject);
	/**
	 * 获取Y轴方向旋转量
	 */
	public double getRotateY()
	{
		double returnValue = getRotateY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateZ_void(long pNativeObject);
	/**
	 * 获取Z轴方向旋转量
	 */
	public double getRotateZ()
	{
		double returnValue = getRotateZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSaclePPM_void(long pNativeObject);
	/**
	 * 获取缩放因子PPM
	 */
	public double getSaclePPM()
	{
		double returnValue = getSaclePPM_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TransParameter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TransParameter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TransParameter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TransParameter obj = null;
 		if(baseObj instanceof TransParameter)
		{
			obj = (TransParameter)baseObj;
		} else {
			obj = new TransParameter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTransParameter");
			obj.increaseCast();
		}

		return obj;
	}
}
