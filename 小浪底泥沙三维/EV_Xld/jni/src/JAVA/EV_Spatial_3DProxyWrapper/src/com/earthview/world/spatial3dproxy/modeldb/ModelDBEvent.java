package com.earthview.world.spatial3dproxy.modeldb;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDBEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::CModelDBEvent", new ModelDBEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 事件类别
	 */
	public ModelDBEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CModelDBEvent", list);
	}

	/**
	 * 构造函数
	 * @param type 事件类别
	 * @param ref_sender 发送对象
	 */
	public ModelDBEvent(int type, com.earthview.world.core.EventObject ref_sender) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer ref_senderPtr = new BasePointer(ref_sender);
		list.add("ref_sender", ref_senderPtr.get());
		Create("CModelDBEvent", list);
	}

	public ModelDBEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDBEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDBEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDBEvent obj = null;
 		if(baseObj instanceof ModelDBEvent)
		{
			obj = (ModelDBEvent)baseObj;
		} else {
			obj = new ModelDBEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDBEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
