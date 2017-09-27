package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换进程监听类
 */
public class ModelDataExchangeListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener", new ModelDataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCModelDataExchangeListenerProxy", new ModelDataExchangeListenerClassFactory());
	}

	public ModelDataExchangeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelDataExchangeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataexchange.ModelDataExchangeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void processLog_EVString_callback(String info)
	{
		String infoParamValue = info;
		processLog(infoParamValue);
	}

	native private void processLog_EVString(long pNativeObject, String info);
	/**
	 * 数据导入时日志信息（回调）
	 */
	public void processLog(String info)
	{
		String infoParamValue = info;
		processLog_EVString(this.nativeObject.pointer, infoParamValue);
	}
	native private void processLog_EVString_NoVirtual(long pNativeObject, String info);
	protected void processLog_NoVirtual(String info)
	{
		String infoParamValue = info;
		processLog_EVString_NoVirtual(this.nativeObject.pointer, infoParamValue);
	}

	protected  void getCurrentCount_ev_int32_ev_int32_callback(int num, int count)
	{
		int numParamValue = num;
		int countParamValue = count;
		getCurrentCount(numParamValue, countParamValue);
	}

	native private void getCurrentCount_ev_int32_ev_int32(long pNativeObject, int num, int count);
	/**
	 * 数据导入时当前进度（回调）
	 */
	public void getCurrentCount(int num, int count)
	{
		int numParamValue = num;
		int countParamValue = count;
		getCurrentCount_ev_int32_ev_int32(this.nativeObject.pointer, numParamValue, countParamValue);
	}
	native private void getCurrentCount_ev_int32_ev_int32_NoVirtual(long pNativeObject, int num, int count);
	protected void getCurrentCount_NoVirtual(int num, int count)
	{
		int numParamValue = num;
		int countParamValue = count;
		getCurrentCount_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, numParamValue, countParamValue);
	}

	protected  void pauseOrStop_EVString_callback(String info)
	{
		String infoParamValue = info;
		pauseOrStop(infoParamValue);
	}

	native private void pauseOrStop_EVString(long pNativeObject, String info);
	/**
	 * 结束、暂停信息（回调）
	 */
	public void pauseOrStop(String info)
	{
		String infoParamValue = info;
		pauseOrStop_EVString(this.nativeObject.pointer, infoParamValue);
	}
	native private void pauseOrStop_EVString_NoVirtual(long pNativeObject, String info);
	protected void pauseOrStop_NoVirtual(String info)
	{
		String infoParamValue = info;
		pauseOrStop_EVString_NoVirtual(this.nativeObject.pointer, infoParamValue);
	}

	public ModelDataExchangeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataExchangeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_processLog_EVString(long pNativeObject, String method);
	native protected void register_getCurrentCount_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_pauseOrStop_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_processLog_EVString(this.nativeObject.pointer, "processLog_EVString_callback");
			this.register_getCurrentCount_ev_int32_ev_int32(this.nativeObject.pointer, "getCurrentCount_ev_int32_ev_int32_callback");
			this.register_pauseOrStop_EVString(this.nativeObject.pointer, "pauseOrStop_EVString_callback");
		}
	}
	
	public static ModelDataExchangeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataExchangeListener obj = null;
 		if(baseObj instanceof ModelDataExchangeListener)
		{
			obj = (ModelDataExchangeListener)baseObj;
		} else {
			obj = new ModelDataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataExchangeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
