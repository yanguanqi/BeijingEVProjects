package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CProgressInfo进度条对象
 */
public class ProgressInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CProgressInfo", new ProgressInfoClassFactory());
	}

	/**
	 * 默构造函数
	 */
	public ProgressInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CProgressInfo", null);
	}

	native private double getPercent_void(long pNativeObject);
	/**
	 * 获取已完成百分比
	 * @return 已经完成百分比
	 */
	public double getPercent()
	{
		double returnValue = getPercent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMessage_void(long pNativeObject);
	/**
	 * 获取执行期间信息
	 * @return 期间信息
	 */
	public String getMessage()
	{
		String returnValue = getMessage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPercent_ev_real64(long pNativeObject, double dfPercent);
	/**
	 * 设置完成百分比
	 * @param dfPercent 百分比
	 */
	public void setPercent(double dfPercent)
	{
		double dfPercentParamValue = dfPercent;
		setPercent_ev_real64(this.nativeObject.pointer, dfPercentParamValue);
	}
	native private void setMessage_EVString(long pNativeObject, String strMessage);
	/**
	 * 设置执行期间相关信息
	 * @param dfPercent 期间信息
	 */
	public void setMessage(String strMessage)
	{
		String strMessageParamValue = strMessage;
		setMessage_EVString(this.nativeObject.pointer, strMessageParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 使进度条类回到初始状态
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	public ProgressInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProgressInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProgressInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProgressInfo obj = null;
 		if(baseObj instanceof ProgressInfo)
		{
			obj = (ProgressInfo)baseObj;
		} else {
			obj = new ProgressInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProgressInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
