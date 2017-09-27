package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EnableTextBoxEvent extends com.earthview.world.spatial3d.controls.TextBoxEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent", new EnableTextBoxEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public EnableTextBoxEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEnableTextBoxEvent", null);
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置可见性
	 * @param enabled 可见性
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 获取可见性
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	public EnableTextBoxEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EnableTextBoxEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EnableTextBoxEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EnableTextBoxEvent obj = null;
 		if(baseObj instanceof EnableTextBoxEvent)
		{
			obj = (EnableTextBoxEvent)baseObj;
		} else {
			obj = new EnableTextBoxEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEnableTextBoxEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
