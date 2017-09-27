package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutOperationEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayoutOperationEvent", new LayoutOperationEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 事件类型
	 */
	public LayoutOperationEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CLayoutOperationEvent", list);
	}

	native private void setElement_IElement(long pNativeObject, long pElement);
	/**
	 * 设置地图操作的map对象
	 * @param map 地图指针
	 */
	public void setElement(com.earthview.world.spatial.carto.Ielement pElement)
	{
		long pElementParamValue = (pElement == null ? 0L : pElement.nativeObject.pointer);
		setElement_IElement(this.nativeObject.pointer, pElementParamValue);
	}
	native private long getElement_void(long pNativeObject);
	/**
	 * 获取与事件相关联的地图
	 * @param  
	 * @return 地图
	 */
	public com.earthview.world.spatial.carto.Ielement getElement()
	{
		long returnValue = getElement_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ielement __returnValue = new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}
	public LayoutOperationEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutOperationEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayoutOperationEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutOperationEvent obj = null;
 		if(baseObj instanceof LayoutOperationEvent)
		{
			obj = (LayoutOperationEvent)baseObj;
		} else {
			obj = new LayoutOperationEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutOperationEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
