package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 坡度分析计算类计算给定范围内所有点的坡度值，并进行统计
 */
public class Math3DSlope extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DSlope", new Math3DSlopeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DSlopeProxy", new Math3DSlopeClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitude3DListener 高度控件
	 */
	public Math3DSlope(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DSlopeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DSlope".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setNeedStop_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置是否停止计算
	 * @param val 
	 */
	public void setNeedStop(boolean val)
	{
		boolean valParamValue = val;
		setNeedStop_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean getNeedStop_void(long pNativeObject);
	/**
	 * 获取是否停止计算
	 */
	public boolean getNeedStop()
	{
		boolean returnValue = getNeedStop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterval_ev_real64(long pNativeObject, double value);
	/**
	 * 设置采样间隔距离
	 * @param value 采样间隔距离
	 */
	public void setInterval(double value)
	{
		double valueParamValue = value;
		setInterval_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getInterval_void(long pNativeObject);
	/**
	 * 获取采样间隔距离
	 * @return 采样间隔距离
	 */
	public double getInterval()
	{
		double returnValue = getInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSlopeDistributing_void(long pNativeObject);
	/**
	 * 获取坡度分布
	 * @return 坡度分布数组
	 */
	public com.earthview.world.core.RealVector getSlopeDistributing()
	{
		long returnValue = getSlopeDistributing_void(this.nativeObject.pointer);
		com.earthview.world.core.RealVector __returnValue = new com.earthview.world.core.RealVector(CreatedWhenConstruct.CWC_NotToCreate, "RealVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.RealVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RealVector");
		}
		return __returnValue;
	}
	native private long getSlopeValues_void(long pNativeObject);
	/**
	 * 获取坡度值列表
	 * @return 坡度值列表
	 */
	public com.earthview.world.core.RealVector getSlopeValues()
	{
		long returnValue = getSlopeValues_void(this.nativeObject.pointer);
		com.earthview.world.core.RealVector __returnValue = new com.earthview.world.core.RealVector(CreatedWhenConstruct.CWC_NotToCreate, "RealVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.RealVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RealVector");
		}
		return __returnValue;
	}
	native private long getAspectValues_void(long pNativeObject);
	/**
	 * 获取坡向值列表
	 * @return 坡向值列表
	 */
	public com.earthview.world.core.RealVector getAspectValues()
	{
		long returnValue = getAspectValues_void(this.nativeObject.pointer);
		com.earthview.world.core.RealVector __returnValue = new com.earthview.world.core.RealVector(CreatedWhenConstruct.CWC_NotToCreate, "RealVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.RealVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RealVector");
		}
		return __returnValue;
	}
	native private long getSlopePositionList_void(long pNativeObject);
	/**
	 * 获取采样点列表
	 * @return 采样点列表
	 */
	public com.earthview.world.spatial.math.VertexList getSlopePositionList()
	{
		long returnValue = getSlopePositionList_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate, "VertexList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private int getInterpolationCountX_void(long pNativeObject);
	/**
	 * 获取X方向插值个数
	 * @return X方向插值个数
	 */
	public int getInterpolationCountX()
	{
		int returnValue = getInterpolationCountX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getInterpolationCountY_void(long pNativeObject);
	/**
	 * 获取Y方向插值个数
	 * @return Y方向插值个数
	 */
	public int getInterpolationCountY()
	{
		int returnValue = getInterpolationCountY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getProgressV_void(long pNativeObject);
	/**
	 * 获取计算进度值
	 * @return 计算进度值
	 */
	public int getProgressV()
	{
		int returnValue = getProgressV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void calcuSlopeDistributing_VertexList_RealVector(long pNativeObject, long boundaryPts, long divisions);
	/**
	 * 统计坡度
	 * @param boundaryPts 边界点列表
	 * @param divisions 坡度级别
	 */
	public void calcuSlopeDistributing(com.earthview.world.spatial.math.VertexList boundaryPts, com.earthview.world.core.RealVector divisions)
	{
		long boundaryPtsParamValue = boundaryPts.nativeObject.pointer;
		long divisionsParamValue = divisions.nativeObject.pointer;
		calcuSlopeDistributing_VertexList_RealVector(this.nativeObject.pointer, boundaryPtsParamValue, divisionsParamValue);
	}
	public Math3DSlope(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DSlope(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitude3DListener()
	{
		return super.getAltitude3DListener_NoVirtual();
	}
	/**
	 * 设置高程控件指针
	 * @param pListener 高程控件
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		super.setAltitude3DListener_NoVirtual(ref_pListener);
	}
	
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitude3DListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitude3DListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitude3DListener_callback");
		}
	}
	
	public static Math3DSlope fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DSlope obj = null;
 		if(baseObj instanceof Math3DSlope)
		{
			obj = (Math3DSlope)baseObj;
		} else {
			obj = new Math3DSlope(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DSlope");
			obj.increaseCast();
		}

		return obj;
	}
}
