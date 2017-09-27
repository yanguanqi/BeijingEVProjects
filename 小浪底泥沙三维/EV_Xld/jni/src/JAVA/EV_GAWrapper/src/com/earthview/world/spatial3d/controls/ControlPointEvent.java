package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CControlPointEvent", new ControlPointEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param second 当前时间
	 */
	public ControlPointEvent(float second) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer secondPtr = new BasePointer(second);
		list.add("second", secondPtr.get());
		Create("CControlPointEvent", list);
	}

	native private float get_msecond_void(long pNativeObject);
	public float get_msecond()
	{
		float jniValue = get_msecond_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_msecond_ev_real32 (long pNativeObject, float value);
	public void set_msecond(float msecond)
	{
		float msecondParamValue = msecond;
		
		set_msecond_ev_real32(this.nativeObject.pointer, msecondParamValue);
	}
	
	public ControlPointEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlPointEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControlPointEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlPointEvent obj = null;
 		if(baseObj instanceof ControlPointEvent)
		{
			obj = (ControlPointEvent)baseObj;
		} else {
			obj = new ControlPointEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlPointEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
