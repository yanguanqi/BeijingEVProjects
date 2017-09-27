package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerEditingEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayerEditingEvent", new LayerEditingEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param ctrl 关联的图层
	 * @param type 事件类型
	 */
	public LayerEditingEvent(com.earthview.world.spatial.atlas.Ilayer ref_layer, int eventtype) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer eventtypePtr = new BasePointer(eventtype);
		list.add("eventtype", eventtypePtr.get());
		Create("CLayerEditingEvent", list);
	}

	native private long getEditingLayer_void(long pNativeObject);
	/**
	 * 获取与该事件所关联的图层
	 * @param  
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getEditingLayer()
	{
		long returnValue = getEditingLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	public LayerEditingEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerEditingEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerEditingEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerEditingEvent obj = null;
 		if(baseObj instanceof LayerEditingEvent)
		{
			obj = (LayerEditingEvent)baseObj;
		} else {
			obj = new LayerEditingEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerEditingEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
