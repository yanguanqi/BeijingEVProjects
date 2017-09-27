package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CControlEvent", new ControlEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param ctrl 关联的控件
	 * @param type 事件类型
	 * @return 返回专题图类型
	 */
	public ControlEvent(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl, int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CControlEvent", list);
	}

	/**
	 * 构造函数
	 * @param type 事件类型
	 * @return 返回专题图类型
	 */
	public ControlEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CControlEvent", list);
	}

	native private void setControl_ISpatialControl(long pNativeObject, long ref_ctrl);
	/**
	 * 设置该事件相关联的控件
	 * @param ctrl 控件
	 */
	public void setControl(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		setControl_ISpatialControl(this.nativeObject.pointer, ref_ctrlParamValue);
	}
	native private long getControl_void(long pNativeObject);
	/**
	 * 获取与该事件所关联的控件
	 * @param  
	 * @return 控件
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getControl()
	{
		long returnValue = getControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	public ControlEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControlEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlEvent obj = null;
 		if(baseObj instanceof ControlEvent)
		{
			obj = (ControlEvent)baseObj;
		} else {
			obj = new ControlEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
