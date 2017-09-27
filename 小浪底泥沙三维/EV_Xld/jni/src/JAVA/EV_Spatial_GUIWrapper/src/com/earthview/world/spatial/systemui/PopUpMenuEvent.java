package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PopUpMenuEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CPopUpMenuEvent", new PopUpMenuEventClassFactory());
	}

	public PopUpMenuEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPopUpMenuEvent", null);
	}

	native private void setDisplayPos_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 设置弹出菜单的显示位置
	 * @param x 显示位置的x坐标
	 * @param y 显示位置的y坐标
	 */
	public void setDisplayPos(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		setDisplayPos_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void addCommand_ICommand(long pNativeObject, long ref_cmd);
	/**
	 * 添加命令项
	 * @param cmd 命令项
	 */
	public void addCommand(com.earthview.world.spatial.systemui.Icommand ref_cmd)
	{
		long ref_cmdParamValue = (ref_cmd == null ? 0L : ref_cmd.nativeObject.pointer);
		addCommand_ICommand(this.nativeObject.pointer, ref_cmdParamValue);
	}
	native private void getDisplayPos_ev_real64_ev_real64(long pNativeObject, long x, long y);
	/**
	 * 获取弹出菜单的显示位置
	 * @param x 显示位置的x坐标
	 * @param y 显示位置的y坐标
	 */
	public void getDisplayPos(DoublePointer x, DoublePointer y)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		getDisplayPos_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private long getCommandCount_void(long pNativeObject);
	/**
	 * 获取命令项的数量
	 * @param  
	 * @return 数量
	 */
	public long getCommandCount()
	{
		long returnValue = getCommandCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCommand_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取命令项
	 * @param index 索引
	 * @return 命令项
	 */
	public com.earthview.world.spatial.systemui.Icommand getCommand(long index)
	{
		long indexParamValue = index;
		long returnValue = getCommand_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Icommand __returnValue = new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate, "ICommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Icommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICommand");
		}
		return __returnValue;
	}
	public PopUpMenuEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PopUpMenuEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PopUpMenuEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PopUpMenuEvent obj = null;
 		if(baseObj instanceof PopUpMenuEvent)
		{
			obj = (PopUpMenuEvent)baseObj;
		} else {
			obj = new PopUpMenuEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPopUpMenuEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
