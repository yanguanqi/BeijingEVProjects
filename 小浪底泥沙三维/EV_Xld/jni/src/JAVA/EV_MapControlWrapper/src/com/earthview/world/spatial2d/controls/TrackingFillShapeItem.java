package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单填充项
 */
public class TrackingFillShapeItem extends com.earthview.world.spatial2d.controls.TrackingShapeItem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem", new TrackingFillShapeItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingFillShapeItemProxy", new TrackingFillShapeItemClassFactory());
	}

	native private void setFillColor_IColor(long pNativeObject, long clr);
	/**
	 * 设置填充颜色
	 * @param clr 颜色
	 */
	public void setFillColor(com.earthview.world.spatial.display.Icolor clr)
	{
		long clrParamValue = (clr == null ? 0L : clr.nativeObject.pointer);
		setFillColor_IColor(this.nativeObject.pointer, clrParamValue);
	}
	native private long getFillColor_void(long pNativeObject);
	/**
	 * 获取填充颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.spatial.display.Icolor getFillColor()
	{
		long returnValue = getFillColor_void(this.nativeObject.pointer);
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
	native private void setFill_ev_bool(long pNativeObject, boolean bFill);
	/**
	 * 设置是否填充
	 * @param bFill 是否填充
	 */
	public void setFill(boolean bFill)
	{
		boolean bFillParamValue = bFill;
		setFill_ev_bool(this.nativeObject.pointer, bFillParamValue);
	}
	native private boolean isFill_void(long pNativeObject);
	/**
	 * 获取是否进行了填充
	 * @param  
	 * @return 如果为真,那进行了填充,反之则否
	 */
	public boolean isFill()
	{
		boolean returnValue = isFill_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TrackingFillShapeItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingFillShapeItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取包围盒,派生类必须重新实现
	 * @param  
	 * @return 追踪项的范围
	 */
	public com.earthview.world.spatial.display.SpatialRect boundingRect()
	{
		return super.boundingRect_NoVirtual();
	}
	/**
	 * 绘制追踪项,派生类必须重新实现
	 * @param display 显示设备对象
	 * @param state 跟踪目标状态
	 * @param rect 绘制范围
	 */
	public void paint(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		super.paint_NoVirtual(display, state, rect);
	}
	/**
	 * 判断追踪项是否包含指定坐标
	 * @param x X坐标
	 * @param y Y坐标
	 * @return true，包含点，false不包含
	 */
	public boolean isContains(double x, double y)
	{
		return super.isContains_NoVirtual(x, y);
	}
	/**
	 * 获取追踪项类型
	 * @param  
	 * @return 对象类型
	 */
	public int type()
	{
		return super.type_NoVirtual();
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
	
	public static TrackingFillShapeItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingFillShapeItem obj = null;
 		if(baseObj instanceof TrackingFillShapeItem)
		{
			obj = (TrackingFillShapeItem)baseObj;
		} else {
			obj = new TrackingFillShapeItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingFillShapeItem");
			obj.increaseCast();
		}

		return obj;
	}
}
