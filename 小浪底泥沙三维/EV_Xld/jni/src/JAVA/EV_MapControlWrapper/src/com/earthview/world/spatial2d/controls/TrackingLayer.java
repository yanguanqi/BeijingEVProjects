package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪图层
 */
public class TrackingLayer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingLayer", new TrackingLayerClassFactory());
	}

	/**
	 * 构造函数
	 * @param ctrl 地图控制器指针
	 */
	public TrackingLayer(com.earthview.world.spatial2d.controls.MapControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("CTrackingLayer", list);
	}

	native private void addItem_CTrackingItem(long pNativeObject, long ref_item);
	/**
	 * 添加跟踪项到图层
	 * @param item 跟踪项指针
	 */
	public void addItem(com.earthview.world.spatial2d.controls.TrackingItem ref_item)
	{
		long ref_itemParamValue = (ref_item == null ? 0L : ref_item.nativeObject.pointer);
		addItem_CTrackingItem(this.nativeObject.pointer, ref_itemParamValue);
	}
	native private void removeItem_CTrackingItem(long pNativeObject, long item);
	/**
	 * 移除跟踪项
	 * @param item 待移除跟踪项之指针
	 */
	public void removeItem(com.earthview.world.spatial2d.controls.TrackingItem item)
	{
		long itemParamValue = (item == null ? 0L : item.nativeObject.pointer);
		removeItem_CTrackingItem(this.nativeObject.pointer, itemParamValue);
	}
	native private long itemAt_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 获取指定位置的跟踪项(未实现...)
	 * @param x x坐标
	 * @param y y坐标
	 * @return 跟踪项指针
	 */
	public com.earthview.world.spatial2d.controls.TrackingItem itemAt(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = itemAt_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.TrackingItem __returnValue = new com.earthview.world.spatial2d.controls.TrackingItem(CreatedWhenConstruct.CWC_NotToCreate, "CTrackingItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItem");
		}
		return __returnValue;
	}
	native private long items_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 获取一定范围之内的跟踪项集合
	 * @param rect 矩形范围
	 * @return 跟踪项集合
	 */
	public com.earthview.world.spatial2d.controls.TrackingItemSet items(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		long returnValue = items_CSpatialRect(this.nativeObject.pointer, rectParamValue);
		com.earthview.world.spatial2d.controls.TrackingItemSet __returnValue = new com.earthview.world.spatial2d.controls.TrackingItemSet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItemSet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		}
		return __returnValue;
	}
	native private long items_void(long pNativeObject);
	/**
	 * 获取所有跟踪项集合
	 * @param  
	 * @return 跟踪项集合
	 */
	public com.earthview.world.spatial2d.controls.TrackingItemSet items()
	{
		long returnValue = items_void(this.nativeObject.pointer);
		com.earthview.world.spatial2d.controls.TrackingItemSet __returnValue = new com.earthview.world.spatial2d.controls.TrackingItemSet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItemSet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		}
		return __returnValue;
	}
	native private long selectedItems_void(long pNativeObject);
	/**
	 * 获取已经选择的所有跟踪项集合
	 * @param  
	 * @return 跟踪项集合
	 */
	public com.earthview.world.spatial2d.controls.TrackingItemSet selectedItems()
	{
		long returnValue = selectedItems_void(this.nativeObject.pointer);
		com.earthview.world.spatial2d.controls.TrackingItemSet __returnValue = new com.earthview.world.spatial2d.controls.TrackingItemSet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItemSet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItemSet");
		}
		return __returnValue;
	}
	native private boolean select_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 选择矩形范围类的跟踪项
	 * @param rect 矩形范围
	 * @return true,选择成功，false选择失败
	 */
	public boolean select(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		boolean returnValue = select_CSpatialRect(this.nativeObject.pointer, rectParamValue);
		return returnValue;
	}
	native private long foucsItem_void(long pNativeObject);
	/**
	 * 获取焦点跟踪项
	 * @param  
	 * @return 焦点
	 */
	public com.earthview.world.spatial2d.controls.TrackingItem foucsItem()
	{
		long returnValue = foucsItem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.TrackingItem __returnValue = new com.earthview.world.spatial2d.controls.TrackingItem(CreatedWhenConstruct.CWC_NotToCreate, "CTrackingItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItem");
		}
		return __returnValue;
	}
	native private long itemsBoundingRect_void(long pNativeObject);
	/**
	 * 获取所有跟踪项的外包矩形
	 * @param  
	 * @return 矩形包围盒
	 */
	public com.earthview.world.spatial.display.SpatialRect itemsBoundingRect()
	{
		long returnValue = itemsBoundingRect_void(this.nativeObject.pointer);
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
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有项
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清空选择项
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void update_void(long pNativeObject);
	/**
	 * 刷新跟踪层
	 * @param  
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 刷新指定范围内的跟踪层
	 * @param rect 矩形范围
	 */
	public void update(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		update_CSpatialRect(this.nativeObject.pointer, rectParamValue);
	}
	native private void paintInterestItems_void(long pNativeObject);
	/**
	 * 绘制跟踪层中被标记为intetest的项
	 * @param  
	 */
	public void paintInterestItems()
	{
		paintInterestItems_void(this.nativeObject.pointer);
	}
	native private void repaint_void(long pNativeObject);
	/**
	 * 重新绘制跟踪层
	 * @param  
	 */
	public void repaint()
	{
		repaint_void(this.nativeObject.pointer);
	}
	native private void repaint_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 重新绘制指定范围内的跟踪层
	 * @param rect 矩形范围
	 */
	public void repaint(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		repaint_CSpatialRect(this.nativeObject.pointer, rectParamValue);
	}
	public TrackingLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TrackingLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingLayer obj = null;
 		if(baseObj instanceof TrackingLayer)
		{
			obj = (TrackingLayer)baseObj;
		} else {
			obj = new TrackingLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
