package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingImageItem extends com.earthview.world.spatial2d.controls.TrackingItem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingImageItem", new TrackingImageItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingImageItemProxy", new TrackingImageItemClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TrackingImageItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTrackingImageItemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingImageItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数TIU_PixelUnit位置以地图渲染设备像素为参照，不随地图范围及其变化而变化TIU_MapUnit位置以地图坐标为参照；图片大小为原始大小，不会改变
	 * @param unitType 单位类型
	 */
	public TrackingImageItem(com.earthview.world.spatial2d.controls.EVTrackingItemUnit unitType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer unitTypePtr = new BasePointer(unitType);
		list.add("unitType", unitTypePtr.get());
		Create("JCTrackingImageItemProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingImageItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long boundingRect_void(long pNativeObject);
	/**
	 * 获取包围盒
	 * @param  
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.display.SpatialRect boundingRect()
	{
		long returnValue = boundingRect_void(this.nativeObject.pointer);
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
	native private long boundingRect_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.SpatialRect boundingRect_NoVirtual()
	{
		long returnValue = boundingRect_void_NoVirtual(this.nativeObject.pointer);
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

	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, long display, int state, long rect);
	/**
	 * 绘制操作
	 * @param display 显示设备对象
	 * @param state 跟踪目标状态
	 * @param rect 绘制范围
	 */
	public void paint(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}
	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(long pNativeObject, long display, int state, long rect);
	protected void paint_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}

	native private int type_void(long pNativeObject);
	/**
	 * 获取追踪项类型
	 * @param  
	 * @return 对象类型
	 */
	public int type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int type_void_NoVirtual(long pNativeObject);
	protected int type_NoVirtual()
	{
		int returnValue = type_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isContains_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 判断包含操作
	 * @param x x坐标
	 * @param y y坐标
	 * @return true，包含，false不包含
	 */
	public boolean isContains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean isContains_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y);
	protected boolean isContains_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}

	native private void setImage_IBitmap(long pNativeObject, long bitmap);
	/**
	 * 设置图像,内部保存了一个副本
	 * @param geo 几何体指针
	 */
	public void setImage(com.earthview.world.display.Ibitmap bitmap)
	{
		long bitmapParamValue = (bitmap == null ? 0L : bitmap.nativeObject.pointer);
		setImage_IBitmap(this.nativeObject.pointer, bitmapParamValue);
	}
	native private long getImageRef_void(long pNativeObject);
	/**
	 * 获取图像
	 * @param  
	 * @return 图像
	 */
	public com.earthview.world.display.Ibitmap getImageRef()
	{
		long returnValue = getImageRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private void setRotation_ev_real64(long pNativeObject, double rotation);
	/**
	 * 设置旋转角度
	 * @param rotation 旋转角度
	 */
	public void setRotation(double rotation)
	{
		double rotationParamValue = rotation;
		setRotation_ev_real64(this.nativeObject.pointer, rotationParamValue);
	}
	native private double getRotation_void(long pNativeObject);
	/**
	 * 获取图像
	 * @param  
	 * @return 图像
	 */
	public double getRotation()
	{
		double returnValue = getRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TrackingImageItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingImageItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_boundingRect_void(long pNativeObject, String method);
	native protected void register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, String method);
	native protected void register_isContains_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_type_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_boundingRect_void(this.nativeObject.pointer, "boundingRect_void_callback");
			this.register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, "paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback");
			this.register_isContains_ev_real64_ev_real64(this.nativeObject.pointer, "isContains_ev_real64_ev_real64_callback");
			this.register_type_void(this.nativeObject.pointer, "type_void_callback");
		}
	}
	
	public static TrackingImageItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingImageItem obj = null;
 		if(baseObj instanceof TrackingImageItem)
		{
			obj = (TrackingImageItem)baseObj;
		} else {
			obj = new TrackingImageItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingImageItem");
			obj.increaseCast();
		}

		return obj;
	}
}
