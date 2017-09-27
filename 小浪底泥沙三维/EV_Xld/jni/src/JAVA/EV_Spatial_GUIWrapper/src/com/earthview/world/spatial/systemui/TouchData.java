package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TouchData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CTouchData", new TouchDataClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TouchData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTouchData", null);
	}

	public TouchData(com.earthview.world.spatial.systemui.TouchData rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CTouchData", list);
	}

	native private void addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(long pNativeObject, long id, int phase, float x, float y, long tap_count);
	/**
	 * 增加触摸点
	 * @param id 触摸点的ＩＤ
	 * @param phase 触摸点的类型
	 * @param x 触摸点的X坐标
	 * @param y 触摸点的Ｙ坐标
	 * @param tap_count 总点数
	 */
	public void addTouchPoint(long id, com.earthview.world.spatial.systemui.GUITouchPhase phase, float x, float y, long tap_count)
	{
		long idParamValue = id;
		int phaseParamValue = phase.getValue();
		float xParamValue = x;
		float yParamValue = y;
		long tap_countParamValue = tap_count;
		addTouchPoint_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(this.nativeObject.pointer, idParamValue, phaseParamValue, xParamValue, yParamValue, tap_countParamValue);
	}
	native private long get_mtouchSet_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.TouchSet get_mtouchSet()
	{
		long jniValue = get_mtouchSet_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.systemui.TouchSet __returnValue = new com.earthview.world.spatial.systemui.TouchSet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTouchSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.TouchSet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTouchSet");
		}
		return __returnValue;
	}
	
	native private void set_mtouchSet_CTouchSet (long pNativeObject, long value);
	public void set_mtouchSet(com.earthview.world.spatial.systemui.TouchSet mtouchSet)
	{
		long mtouchSetParamValue = mtouchSet.nativeObject.pointer;
		
		set_mtouchSet_CTouchSet(this.nativeObject.pointer, mtouchSetParamValue);
	}
	
	public TouchData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TouchData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TouchData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TouchData obj = null;
 		if(baseObj instanceof TouchData)
		{
			obj = (TouchData)baseObj;
		} else {
			obj = new TouchData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTouchData");
			obj.increaseCast();
		}

		return obj;
	}
}
