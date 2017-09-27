package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatitudeLonitudeTextBoxVisibleEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent", new LatitudeLonitudeTextBoxVisibleEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LatitudeLonitudeTextBoxVisibleEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLatitudeLonitudeTextBoxVisibleEvent", null);
	}

	native private void setVisableMode_VisibleMode(long pNativeObject, int visableMode);
	/**
	 * 设置可见模式
	 * @param visableMode 可见模式
	 */
	public void setVisableMode(com.earthview.world.spatial3d.controls.VisibleMode visableMode)
	{
		int visableModeParamValue = visableMode.getValue();
		setVisableMode_VisibleMode(this.nativeObject.pointer, visableModeParamValue);
	}
	native private int getVisableMode_void(long pNativeObject);
	/**
	 * 返回可见模式
	 */
	public com.earthview.world.spatial3d.controls.VisibleMode getVisableMode()
	{
		int returnValue = getVisableMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.controls.VisibleMode.toEnum(returnValue);
	}
	public LatitudeLonitudeTextBoxVisibleEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatitudeLonitudeTextBoxVisibleEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LatitudeLonitudeTextBoxVisibleEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatitudeLonitudeTextBoxVisibleEvent obj = null;
 		if(baseObj instanceof LatitudeLonitudeTextBoxVisibleEvent)
		{
			obj = (LatitudeLonitudeTextBoxVisibleEvent)baseObj;
		} else {
			obj = new LatitudeLonitudeTextBoxVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatitudeLonitudeTextBoxVisibleEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
