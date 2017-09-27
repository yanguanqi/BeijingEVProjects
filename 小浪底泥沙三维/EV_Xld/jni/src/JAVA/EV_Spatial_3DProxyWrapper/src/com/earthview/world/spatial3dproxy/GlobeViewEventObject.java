package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeViewEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CGlobeViewEventObject", new GlobeViewEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCGlobeViewEventObjectProxy", new GlobeViewEventObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeViewEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGlobeViewEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.GlobeViewEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void dragDrop_ev_uint32_ILayer_CGlobeControl_ev_uint32_ev_uint32(long pNativeObject, long id, long layer, long globecontrol, long dropx, long dropy);
	/**
	 * 拖拽事件
	 * @param id 对象id
	 * @param layer 图层指针
	 * @param globecontrol 球控件
	 * @param dropx 屏幕坐标x
	 * @param dropy 屏幕坐标y
	 */
	public void dragDrop(long id, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial3d.controls.GlobeControl globecontrol, long dropx, long dropy)
	{
		long idParamValue = id;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long globecontrolParamValue = (globecontrol == null ? 0L : globecontrol.nativeObject.pointer);
		long dropxParamValue = dropx;
		long dropyParamValue = dropy;
		dragDrop_ev_uint32_ILayer_CGlobeControl_ev_uint32_ev_uint32(this.nativeObject.pointer, idParamValue, layerParamValue, globecontrolParamValue, dropxParamValue, dropyParamValue);
	}
	public GlobeViewEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeViewEventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		return super.onEvent_NoVirtual(e);
	}
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static GlobeViewEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeViewEventObject obj = null;
 		if(baseObj instanceof GlobeViewEventObject)
		{
			obj = (GlobeViewEventObject)baseObj;
		} else {
			obj = new GlobeViewEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeViewEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
