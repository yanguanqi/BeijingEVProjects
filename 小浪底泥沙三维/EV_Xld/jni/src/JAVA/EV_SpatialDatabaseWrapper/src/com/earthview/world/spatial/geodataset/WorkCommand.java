package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 工作命令类
 */
public class WorkCommand extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CWorkCommand", new WorkCommandClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public WorkCommand() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWorkCommand", null);
	}

	native private long getData_void(long pNativeObject);
	/**
	 * 获取"工作命令"中的数据
	 * @param  
	 * @return 数据
	 */
	public com.earthview.world.core.BaseObject getData()
	{
		long returnValue = getData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseObject __returnValue = new com.earthview.world.core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseObject");
		}
		return __returnValue;
	}
	native private void setData_CBaseObject(long pNativeObject, long ref_data);
	/**
	 * 设置"工作命令"数据
	 * @param data 数据
	 */
	public void setData(com.earthview.world.core.BaseObject ref_data)
	{
		long ref_dataParamValue = (ref_data == null ? 0L : ref_data.nativeObject.pointer);
		setData_CBaseObject(this.nativeObject.pointer, ref_dataParamValue);
	}
	public WorkCommand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WorkCommand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WorkCommand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WorkCommand obj = null;
 		if(baseObj instanceof WorkCommand)
		{
			obj = (WorkCommand)baseObj;
		} else {
			obj = new WorkCommand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWorkCommand");
			obj.increaseCast();
		}

		return obj;
	}
}
