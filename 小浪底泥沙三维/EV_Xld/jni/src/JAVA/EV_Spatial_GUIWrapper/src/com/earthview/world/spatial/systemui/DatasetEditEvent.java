package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetEditEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CDatasetEditEvent", new DatasetEditEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param dataset 关联的数据集
	 * @param type 事件类型
	 */
	public DatasetEditEvent(com.earthview.world.spatial.geodataset.Idataset ref_dataset, int eventtype) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_datasetPtr = new BasePointer(ref_dataset);
		list.add("ref_dataset", ref_datasetPtr.get());
		BasePointer eventtypePtr = new BasePointer(eventtype);
		list.add("eventtype", eventtypePtr.get());
		Create("CDatasetEditEvent", list);
	}

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取与事件所关联的数据集
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	public DatasetEditEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetEditEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetEditEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetEditEvent obj = null;
 		if(baseObj instanceof DatasetEditEvent)
		{
			obj = (DatasetEditEvent)baseObj;
		} else {
			obj = new DatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasetEditEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
