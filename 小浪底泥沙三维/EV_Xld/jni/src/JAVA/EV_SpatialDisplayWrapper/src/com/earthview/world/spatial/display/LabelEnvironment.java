package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelEnvironment extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CLabelEnvironment", new LabelEnvironmentClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param   
	 * @return 
	 */
	public LabelEnvironment() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelEnvironment", null);
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 判断是否有效
	 * @param   
	 * @return 若有效，返回ture,无效，返回false
	 */
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setActive_ev_bool(long pNativeObject, boolean active);
	/**
	 * 设置是否有效
	 * @param active 设置是否有效的值
	 * @return 
	 */
	public void setActive(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool(this.nativeObject.pointer, activeParamValue);
	}
	native private long getPixelGrid_void(long pNativeObject);
	/**
	 * 获取像素的格子
	 * @param  
	 * @return 
	 */
	public VoidPointer getPixelGrid()
	{
		long returnValue = getPixelGrid_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public LabelEnvironment(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelEnvironment(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelEnvironment fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelEnvironment obj = null;
 		if(baseObj instanceof LabelEnvironment)
		{
			obj = (LabelEnvironment)baseObj;
		} else {
			obj = new LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelEnvironment");
			obj.increaseCast();
		}

		return obj;
	}
}
