package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析算法基类此类无实际意义，由于各种三维分析都需要用到以下几个函数，特提出一个共有基类
 */
public class Math3DBaseObject extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DBaseObject", new Math3DBaseObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DBaseObjectProxy", new Math3DBaseObjectClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Math3DBaseObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMath3DBaseObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DBaseObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getAltitude3DListener_void_callback()
	{
		com.earthview.world.spatial3d.analysis.Altitude3DListener returnValue = getAltitude3DListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAltitude3DListener_void(long pNativeObject);
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitude3DListener()
	{
		long returnValue = getAltitude3DListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Altitude3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitude3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitude3DListener");
		}
		return __returnValue;
	}
	native private long getAltitude3DListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitude3DListener_NoVirtual()
	{
		long returnValue = getAltitude3DListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Altitude3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitude3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitude3DListener");
		}
		return __returnValue;
	}

	protected  void setAltitude3DListener_CAltitude3DListener_callback(long ref_pListener)
	{
		com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListenerParamValue = (ref_pListener == 0L ? null : new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pListenerParamValue != null)
		{
		ref_pListenerParamValue.setDelegate(true);
		ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		IClassFactory ref_pListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_pListenerParamValue.getCppInstanceTypeName());
		if (ref_pListenerParamValueClassFactory != null)
		{
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)ref_pListenerParamValueClassFactory.create();
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		}
		}
		setAltitude3DListener(ref_pListenerParamValue);
	}

	native private void setAltitude3DListener_CAltitude3DListener(long pNativeObject, long ref_pListener);
	/**
	 * 设置高程控件指针
	 * @param pListener 高程控件
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setAltitude3DListener_CAltitude3DListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private void setAltitude3DListener_CAltitude3DListener_NoVirtual(long pNativeObject, long ref_pListener);
	protected void setAltitude3DListener_NoVirtual(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setAltitude3DListener_CAltitude3DListener_NoVirtual(this.nativeObject.pointer, ref_pListenerParamValue);
	}

	native private long getMathUtility3D_void(long pNativeObject);
	/**
	 * 获取三维分析算法指针
	 * @param  
	 * @return 指针
	 */
	public com.earthview.world.spatial3d.analysis.MathUtility3D getMathUtility3D()
	{
		long returnValue = getMathUtility3D_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.MathUtility3D __returnValue = new com.earthview.world.spatial3d.analysis.MathUtility3D(CreatedWhenConstruct.CWC_NotToCreate, "CMathUtility3D");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.MathUtility3D)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMathUtility3D");
		}
		return __returnValue;
	}
	native private boolean getDefaultCalcuMode_void(long pNativeObject);
	/**
	 * 获取是否使用默认计算模式（相关参数采用推荐值）
	 */
	public boolean getDefaultCalcuMode()
	{
		boolean returnValue = getDefaultCalcuMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultCalcuMode_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否使用默认计算模式（相关参数采用推荐值）
	 * @param value 
	 */
	public void setDefaultCalcuMode(boolean value)
	{
		boolean valueParamValue = value;
		setDefaultCalcuMode_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	public Math3DBaseObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DBaseObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitude3DListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitude3DListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitude3DListener_callback");
		}
	}
	
	public static Math3DBaseObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DBaseObject obj = null;
 		if(baseObj instanceof Math3DBaseObject)
		{
			obj = (Math3DBaseObject)baseObj;
		} else {
			obj = new Math3DBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DBaseObject");
			obj.increaseCast();
		}

		return obj;
	}
}
