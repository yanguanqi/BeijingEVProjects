package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换进程监听类
 */
public class DataExchangeListener extends com.earthview.world.spatial.convertor.Idataexchangelistener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchangeListener", new DataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchangeListenerProxy", new DataExchangeListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DataExchangeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataExchangeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.convertor.DataExchangeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getTotalNum_void(long pNativeObject);
	/**
	 * 获取要素总数
	 * @return 要素总数
	 */
	public long getTotalNum()
	{
		long returnValue = getTotalNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFinishedNum_void(long pNativeObject);
	/**
	 * 获取已处理的要素数目
	 * @return 已处理要素数目
	 */
	public long getFinishedNum()
	{
		long returnValue = getFinishedNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void finishedNumAdded_void(long pNativeObject);
	/**
	 * 已处理的要素数+1
	 */
	public void finishedNumAdded()
	{
		finishedNumAdded_void(this.nativeObject.pointer);
	}
	native private void setTotalNum_ev_uint32(long pNativeObject, long totalNum);
	/**
	 * 设置总要素数
	 * @param totalNum 总要素数
	 */
	public void setTotalNum(long totalNum)
	{
		long totalNumParamValue = totalNum;
		setTotalNum_ev_uint32(this.nativeObject.pointer, totalNumParamValue);
	}
	native private void init_ev_uint32(long pNativeObject, long totalNum);
	/**
	 * 初始化总要素数
	 * @param totalNum 总要素数
	 */
	public void init(long totalNum)
	{
		long totalNumParamValue = totalNum;
		init_ev_uint32(this.nativeObject.pointer, totalNumParamValue);
	}
	native private void init_ev_uint32_NoVirtual(long pNativeObject, long totalNum);
	protected void init_NoVirtual(long totalNum)
	{
		long totalNumParamValue = totalNum;
		init_ev_uint32_NoVirtual(this.nativeObject.pointer, totalNumParamValue);
	}

	native private boolean isFinished_void(long pNativeObject);
	/**
	 * 获取是否完成操作
	 * @return true/false
	 */
	public boolean isFinished()
	{
		boolean returnValue = isFinished_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void stopProcess_void(long pNativeObject);
	/**
	 * 设置终止操作
	 */
	public void stopProcess()
	{
		stopProcess_void(this.nativeObject.pointer);
	}
	native private boolean setPause_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置暂停操作
	 * @param value true表示暂停，false表示继续
	 * @return true标识设置成功，否则返回false
	 */
	public boolean setPause(boolean value)
	{
		boolean valueParamValue = value;
		boolean returnValue = setPause_ev_bool(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean isStopped_void(long pNativeObject);
	/**
	 * /获取是否已停止/
	 * @return true表示已停止
	 */
	public boolean isStopped()
	{
		boolean returnValue = isStopped_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRunning_void(long pNativeObject);
	/**
	 * 获取是否正在运行
	 * @return true表示正在运行
	 */
	public boolean isRunning()
	{
		boolean returnValue = isRunning_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isError_void(long pNativeObject);
	/**
	 * 获取是否出错
	 * @return true表示出错停止
	 */
	public boolean isError()
	{
		boolean returnValue = isError_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSuspended_void(long pNativeObject);
	/**
	 * 获取是否被暂停
	 * @return true表示被暂停
	 */
	public boolean isSuspended()
	{
		boolean returnValue = isSuspended_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DataExchangeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataExchangeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_init_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_init_ev_uint32(this.nativeObject.pointer, "init_ev_uint32_callback");
		}
	}
	
	public static DataExchangeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataExchangeListener obj = null;
 		if(baseObj instanceof DataExchangeListener)
		{
			obj = (DataExchangeListener)baseObj;
		} else {
			obj = new DataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataExchangeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
