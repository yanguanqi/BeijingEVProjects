package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceTreeEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent", new DataSourceTreeEventClassFactory());
	}

	public enum ActionType implements INativeEnum<ActionType> {
		ModelManage(ActionTypeHelper.ENUM_VALUES[0]),
		EffectManage(ActionTypeHelper.ENUM_VALUES[1]),
		DataSourceProperty(ActionTypeHelper.ENUM_VALUES[2]),
		DateSetProperty(ActionTypeHelper.ENUM_VALUES[3]);
		private int value;
		ActionType(int i) {
			this.value = i;
		}
		public ActionType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ActionType toEnum(int retval) {
			if(retval == ModelManage.value){
				return ModelManage;
			}
			else if(retval == EffectManage.value){
				return EffectManage;
			}
			else if(retval == DataSourceProperty.value){
				return DataSourceProperty;
			}
			else if(retval == DateSetProperty.value){
				return DateSetProperty;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ActionTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class DataSourcePropertyData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData", new DataSourcePropertyDataClassFactory());
		}

		native private long get_groupStringInterface_void(long pNativeObject);
		public com.earthview.world.frameworkproxy.GroupStringinterfaceMap get_groupStringInterface()
		{
			long jniValue = get_groupStringInterface_void(this.nativeObject.pointer);
			
			com.earthview.world.frameworkproxy.GroupStringinterfaceMap __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			}
			return __returnValue;
		}
		
		native private void set_groupStringInterface_CGroupStringinterfaceMap (long pNativeObject, long value);
		public void set_groupStringInterface(com.earthview.world.frameworkproxy.GroupStringinterfaceMap groupStringInterface)
		{
			long groupStringInterfaceParamValue = groupStringInterface.nativeObject.pointer;
			
			set_groupStringInterface_CGroupStringinterfaceMap(this.nativeObject.pointer, groupStringInterfaceParamValue);
		}
		
		/**
		 * 构造函数
		 * @param  
		 */
		public DataSourcePropertyData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("DataSourcePropertyData", null);
		}

		public DataSourcePropertyData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DataSourcePropertyData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DataSourcePropertyData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DataSourcePropertyData obj = null;
 			if(baseObj instanceof DataSourcePropertyData)
			{
				obj = (DataSourcePropertyData)baseObj;
			} else {
				obj = new DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "DataSourcePropertyData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DataSourcePropertyDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DataSourcePropertyData emptyInstance = new DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ModelManageData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData", new ModelManageDataClassFactory());
		}

		native private String get_datasourceName_void(long pNativeObject);
		public String get_datasourceName()
		{
			String jniValue = get_datasourceName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_datasourceName_EVString (long pNativeObject, String value);
		public void set_datasourceName(String datasourceName)
		{
			String datasourceNameParamValue = datasourceName;
			
			set_datasourceName_EVString(this.nativeObject.pointer, datasourceNameParamValue);
		}
		
		/**
		 * 构造函数
		 * @param  
		 */
		public ModelManageData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ModelManageData", null);
		}

		public ModelManageData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ModelManageData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ModelManageData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ModelManageData obj = null;
 			if(baseObj instanceof ModelManageData)
			{
				obj = (ModelManageData)baseObj;
			} else {
				obj = new ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ModelManageData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ModelManageDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ModelManageData emptyInstance = new ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class EffectManageData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData", new EffectManageDataClassFactory());
		}

		native private String get_datasourceName_void(long pNativeObject);
		public String get_datasourceName()
		{
			String jniValue = get_datasourceName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_datasourceName_EVString (long pNativeObject, String value);
		public void set_datasourceName(String datasourceName)
		{
			String datasourceNameParamValue = datasourceName;
			
			set_datasourceName_EVString(this.nativeObject.pointer, datasourceNameParamValue);
		}
		
		native private String get_datasourcePath_void(long pNativeObject);
		public String get_datasourcePath()
		{
			String jniValue = get_datasourcePath_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_datasourcePath_EVString (long pNativeObject, String value);
		public void set_datasourcePath(String datasourcePath)
		{
			String datasourcePathParamValue = datasourcePath;
			
			set_datasourcePath_EVString(this.nativeObject.pointer, datasourcePathParamValue);
		}
		
		public EffectManageData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EffectManageData", null);
		}

		public EffectManageData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EffectManageData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EffectManageData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EffectManageData obj = null;
 			if(baseObj instanceof EffectManageData)
			{
				obj = (EffectManageData)baseObj;
			} else {
				obj = new EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EffectManageData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EffectManageDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EffectManageData emptyInstance = new EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public DataSourceTreeEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DataSourceTreeEvent", null);
	}

	native private int getActionType_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType getActionType()
	{
		int returnValue = getActionType_void(this.nativeObject.pointer);
		return com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType.toEnum(returnValue);
	}
	native private long getModelManageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData getModelManageData()
	{
		long returnValue = getModelManageData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelManageData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelManageData");
		}
		return __returnValue;
	}
	native private long getEffectManageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData getEffectManageData()
	{
		long returnValue = getEffectManageData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectManageData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectManageData");
		}
		return __returnValue;
	}
	native private long getPropertyData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData getPropertyData()
	{
		long returnValue = getPropertyData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSourcePropertyData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSourcePropertyData");
		}
		return __returnValue;
	}
	native private long data_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventData data()
	{
		long returnValue = data_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventData(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceTreeEventData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceTreeEventData");
		}
		return __returnValue;
	}
	public DataSourceTreeEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceTreeEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceTreeEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceTreeEvent obj = null;
 		if(baseObj instanceof DataSourceTreeEvent)
		{
			obj = (DataSourceTreeEvent)baseObj;
		} else {
			obj = new DataSourceTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceTreeEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
