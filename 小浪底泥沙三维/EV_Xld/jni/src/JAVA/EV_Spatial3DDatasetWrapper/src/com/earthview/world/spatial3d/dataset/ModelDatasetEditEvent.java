package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDatasetEditEvent extends com.earthview.world.spatial.systemui.DatasetEditEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent", new ModelDatasetEditEventClassFactory());
	}

	public ModelDatasetEditEvent(com.earthview.world.spatial.geodataset.Idataset dataset, int eventtype) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer datasetPtr = new BasePointer(dataset);
		list.add("dataset", datasetPtr.get());
		BasePointer eventtypePtr = new BasePointer(eventtype);
		list.add("eventtype", eventtypePtr.get());
		Create("CModelDatasetEditEvent", list);
	}

	native private void setEventType_EntityDatasetEvent(long pNativeObject, int evtype);
	/**
	 * 设置事件类型
	 * @param evtype 事件类型
	 */
	public void setEventType(com.earthview.world.spatial3d.dataset.EntityDatasetEvent evtype)
	{
		int evtypeParamValue = evtype.getValue();
		setEventType_EntityDatasetEvent(this.nativeObject.pointer, evtypeParamValue);
	}
	native private int getEventType_void(long pNativeObject);
	/**
	 * 获取事件类型
	 * @param  
	 * @return 事件类型
	 */
	public com.earthview.world.spatial3d.dataset.EntityDatasetEvent getEventType()
	{
		int returnValue = getEventType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.EntityDatasetEvent.toEnum(returnValue);
	}
	native private void setOperationType_EntityDatasetOperType(long pNativeObject, int evtype);
	/**
	 * 设置数据集操作类型
	 * @param evtype 事件类型
	 */
	public void setOperationType(com.earthview.world.spatial3d.dataset.EntityDatasetOperType evtype)
	{
		int evtypeParamValue = evtype.getValue();
		setOperationType_EntityDatasetOperType(this.nativeObject.pointer, evtypeParamValue);
	}
	native private int getOperationType_void(long pNativeObject);
	/**
	 * 获取数据集操作类型
	 * @param  
	 * @return 事件类型
	 */
	public com.earthview.world.spatial3d.dataset.EntityDatasetOperType getOperationType()
	{
		int returnValue = getOperationType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.EntityDatasetOperType.toEnum(returnValue);
	}
	native private void setFeature_IFeature(long pNativeObject, long f);
	/**
	 * 设置要素
	 * @param f 要素对象
	 */
	public void setFeature(com.earthview.world.spatial.geodataset.Ifeature f)
	{
		long fParamValue = (f == null ? 0L : f.nativeObject.pointer);
		setFeature_IFeature(this.nativeObject.pointer, fParamValue);
	}
	native private long getFeature_void(long pNativeObject);
	/**
	 * 获取要素
	 * @param  
	 * @return 要素对象
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature()
	{
		long returnValue = getFeature_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private void setNotifyOthersFlag_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否需要通知其它对象标记
	 * @param flag true通知，false不通知
	 */
	public void setNotifyOthersFlag(boolean flag)
	{
		boolean flagParamValue = flag;
		setNotifyOthersFlag_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getNotifyOthersFlag_void(long pNativeObject);
	/**
	 * 获取是否需要通知其它对象标记
	 * @param  
	 * @return true通知，false不通知
	 */
	public boolean getNotifyOthersFlag()
	{
		boolean returnValue = getNotifyOthersFlag_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getCommitID_ev_uint32_ev_uint32(long pNativeObject, long cacheID, long dbID);
	/**
	 * 获取提交某条记录后缓存ID和数据库中的ID对照
	 * @param  
	 */
	public void getCommitID(UIntegerPointer cacheID, UIntegerPointer dbID)
	{
		long cacheIDParamValue = cacheID.nativeObject.pointer;
		long dbIDParamValue = dbID.nativeObject.pointer;
		getCommitID_ev_uint32_ev_uint32(this.nativeObject.pointer, cacheIDParamValue, dbIDParamValue);
	}
	native private void setCommitID_ev_uint32_ev_uint32(long pNativeObject, long cacheID, long dbID);
	/**
	 * 设置提交某条记录后缓存ID和数据库中的ID对照
	 * @param  
	 */
	public void setCommitID(long cacheID, long dbID)
	{
		long cacheIDParamValue = cacheID;
		long dbIDParamValue = dbID;
		setCommitID_ev_uint32_ev_uint32(this.nativeObject.pointer, cacheIDParamValue, dbIDParamValue);
	}
	public ModelDatasetEditEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDatasetEditEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDatasetEditEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDatasetEditEvent obj = null;
 		if(baseObj instanceof ModelDatasetEditEvent)
		{
			obj = (ModelDatasetEditEvent)baseObj;
		} else {
			obj = new ModelDatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDatasetEditEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
