package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TourEndEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTourEndEvent", new TourEndEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TourEndEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTourEndEvent", null);
	}

	/**
	 * 构造函数
	 * @param type 事件类型
	 */
	public TourEndEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CTourEndEvent", list);
	}

	/**
	 * 构造函数
	 * @param type 事件类型
	 * @param sender 发送者
	 */
	public TourEndEvent(int type, com.earthview.world.core.EventObject sender) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer senderPtr = new BasePointer(sender);
		list.add("sender", senderPtr.get());
		Create("CTourEndEvent", list);
	}

	native private long getTourPath_void(long pNativeObject);
	/**
	 * 返回ＫＭＬ游览的线路
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr getTourPath()
	{
		long returnValue = getTourPath_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlTourPathPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlTourPathPtr");
		}
		return __returnValue;
	}
	native private void setTourPath_CKmlTourPathPtr(long pNativeObject, long kmlTourPath);
	/**
	 * 设置ＫＭＬ游览的线路
	 * @param kmlTourPath 游览对象
	 */
	public void setTourPath(com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr kmlTourPath)
	{
		long kmlTourPathParamValue = kmlTourPath.nativeObject.pointer;
		setTourPath_CKmlTourPathPtr(this.nativeObject.pointer, kmlTourPathParamValue);
	}
	public TourEndEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TourEndEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TourEndEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TourEndEvent obj = null;
 		if(baseObj instanceof TourEndEvent)
		{
			obj = (TourEndEvent)baseObj;
		} else {
			obj = new TourEndEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTourEndEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
