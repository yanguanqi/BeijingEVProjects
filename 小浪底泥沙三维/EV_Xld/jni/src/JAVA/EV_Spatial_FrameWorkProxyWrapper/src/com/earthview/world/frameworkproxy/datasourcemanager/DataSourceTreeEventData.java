package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceTreeEventData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData", new DataSourceTreeEventDataClassFactory());
	}

	native private void setType_ActionType(long pNativeObject, int t);
	/**
	 * 设置动作类型。
	 * @param t 动作类型。
	 */
	public void setType(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType t)
	{
		int tParamValue = t.getValue();
		setType_ActionType(this.nativeObject.pointer, tParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取动作类型。
	 * @return 动作类型。
	 */
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType.toEnum(returnValue);
	}
	native private int get_typ_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType get_typ()
	{
		int jniValue = get_typ_void(this.nativeObject.pointer);
		
		return com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType.toEnum(jniValue);
	}
	
	native private void set_typ_ActionType (long pNativeObject, int value);
	public void set_typ(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ActionType typ)
	{
		int typParamValue = typ.getValue();
		
		set_typ_ActionType(this.nativeObject.pointer, typParamValue);
	}
	
	native private long get_effectManageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData get_effectManageData()
	{
		long jniValue = get_effectManageData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_effectManageData_EffectManageData (long pNativeObject, long value);
	public void set_effectManageData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageData effectManageData)
	{
		long effectManageDataParamValue = effectManageData.nativeObject.pointer;
		
		set_effectManageData_EffectManageData(this.nativeObject.pointer, effectManageDataParamValue);
	}
	
	native private long get_modelManageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData get_modelManageData()
	{
		long jniValue = get_modelManageData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_modelManageData_ModelManageData (long pNativeObject, long value);
	public void set_modelManageData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageData modelManageData)
	{
		long modelManageDataParamValue = modelManageData.nativeObject.pointer;
		
		set_modelManageData_ModelManageData(this.nativeObject.pointer, modelManageDataParamValue);
	}
	
	native private long get_propertyData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData get_propertyData()
	{
		long jniValue = get_propertyData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_propertyData_DataSourcePropertyData (long pNativeObject, long value);
	public void set_propertyData(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyData propertyData)
	{
		long propertyDataParamValue = propertyData.nativeObject.pointer;
		
		set_propertyData_DataSourcePropertyData(this.nativeObject.pointer, propertyDataParamValue);
	}
	
	public DataSourceTreeEventData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DataSourceTreeEventData", null);
	}

	public DataSourceTreeEventData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceTreeEventData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceTreeEventData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceTreeEventData obj = null;
 		if(baseObj instanceof DataSourceTreeEventData)
		{
			obj = (DataSourceTreeEventData)baseObj;
		} else {
			obj = new DataSourceTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceTreeEventData");
			obj.increaseCast();
		}

		return obj;
	}
}
