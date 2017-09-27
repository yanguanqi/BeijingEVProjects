package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceActiveEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent", new DataSourceActiveEventClassFactory());
	}

	public enum DataSourceState implements INativeEnum<DataSourceState> {
		DSS_Open(DataSourceStateHelper.ENUM_VALUES[0]),
		DSS_Close(DataSourceStateHelper.ENUM_VALUES[1]);
		private int value;
		DataSourceState(int i) {
			this.value = i;
		}
		public DataSourceState getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final DataSourceState toEnum(int retval) {
			if(retval == DSS_Open.value){
				return DSS_Open;
			}
			else if(retval == DSS_Close.value){
				return DSS_Close;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class DataSourceStateHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 
	 * @param  
	 */
	public DataSourceActiveEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceActiveEvent", null);
	}

	/**
	 * 构造函数
	 * @param  事件类型，FrameworkEventType类型
	 */
	public DataSourceActiveEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CDataSourceActiveEvent", list);
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置数据源名称
	 * @param name 数据源名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getDatasetActiveEventArr_void(long pNativeObject);
	/**
	 * 获取包含的数据集事件列表
	 * @param  
	 * @return 事件列表
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventArr getDatasetActiveEventArr()
	{
		long returnValue = getDatasetActiveEventArr_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventArr __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate, "DatasetActiveEventArr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventArr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DatasetActiveEventArr");
		}
		return __returnValue;
	}
	native private long getDatasetActiveEvent_EVString(long pNativeObject, String name);
	/**
	 * 通过一个名称获取数据集事件对象
	 * @param name 名称
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent getDatasetActiveEvent(String name)
	{
		String nameParamValue = name;
		long returnValue = getDatasetActiveEvent_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate, "CDatasetActiveEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDatasetActiveEvent");
		}
		return __returnValue;
	}
	native private long dataSourceURL_void(long pNativeObject);
	/**
	 * 获取数据源的URL
	 * @param  
	 * @return 数据源URL
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL dataSourceURL()
	{
		long returnValue = dataSourceURL_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourceURL");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceURL");
		}
		return __returnValue;
	}
	native private void setDataSourceURL_CDataSourceURL(long pNativeObject, long url);
	/**
	 * 设置数据源URL
	 * @param url 数据源RUL
	 */
	public void setDataSourceURL(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL url)
	{
		long urlParamValue = url.nativeObject.pointer;
		setDataSourceURL_CDataSourceURL(this.nativeObject.pointer, urlParamValue);
	}
	native private void addDatasetActiveEvent_CDatasetActiveEvent(long pNativeObject, long datasetActiveEvent);
	/**
	 * 添加一个数据集事件对象
	 * @param datasetActiveEvent 数据集事件对象
	 */
	public void addDatasetActiveEvent(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent datasetActiveEvent)
	{
		long datasetActiveEventParamValue = datasetActiveEvent.nativeObject.pointer;
		addDatasetActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, datasetActiveEventParamValue);
	}
	native private void removeDatasetActiveEvent_CDatasetActiveEvent(long pNativeObject, long datasetActiveEvent);
	/**
	 * 移除一个数据集事件对象
	 * @param datasetActiveEvent 数据集事件对象
	 */
	public void removeDatasetActiveEvent(com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEvent datasetActiveEvent)
	{
		long datasetActiveEventParamValue = datasetActiveEvent.nativeObject.pointer;
		removeDatasetActiveEvent_CDatasetActiveEvent(this.nativeObject.pointer, datasetActiveEventParamValue);
	}
	native private boolean getResponseState_void(long pNativeObject);
	/**
	 * 获取事件处理结果
	 * @param  
	 * @return true成功，false失败
	 */
	public boolean getResponseState()
	{
		boolean returnValue = getResponseState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResponseState_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置事件处理结果
	 * @param  true成功，false失败
	 */
	public void setResponseState(boolean state)
	{
		boolean stateParamValue = state;
		setResponseState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private String getErrorMessage_void(long pNativeObject);
	/**
	 * 获取事件中的错误消息
	 * @param  
	 * @return 返回错误消息
	 */
	public String getErrorMessage()
	{
		String returnValue = getErrorMessage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setErrorMessage_EVString(long pNativeObject, String msg);
	/**
	 * 设置事件中的错误消息
	 * @param msg 错误消息
	 */
	public void setErrorMessage(String msg)
	{
		String msgParamValue = msg;
		setErrorMessage_EVString(this.nativeObject.pointer, msgParamValue);
	}
	native private int getState_void(long pNativeObject);
	/**
	 * 获取状态
	 * @param  
	 * @return 返回状态信息
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent.DataSourceState getState()
	{
		int returnValue = getState_void(this.nativeObject.pointer);
		return com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEvent.DataSourceState.toEnum(returnValue);
	}
	public DataSourceActiveEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceActiveEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceActiveEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceActiveEvent obj = null;
 		if(baseObj instanceof DataSourceActiveEvent)
		{
			obj = (DataSourceActiveEvent)baseObj;
		} else {
			obj = new DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceActiveEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
