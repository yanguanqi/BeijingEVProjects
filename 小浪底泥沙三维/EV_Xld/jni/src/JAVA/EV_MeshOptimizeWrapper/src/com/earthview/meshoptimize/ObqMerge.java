package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class ObqMerge extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMerge", new ObqMergeClassFactory());
	}

	public ObqMerge() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CObqMerge", null);
	}

	native private void merge_EVString_OBQRecordInfoList_ev_bool(long pNativeObject, String srcFolder, long obqRecordInfoList, boolean isAsyn);
	///开始合并,isAsyn == true则内部开启线程采用异步处理
	public void merge(String srcFolder, com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist obqRecordInfoList, boolean isAsyn)
	{
		String srcFolderParamValue = srcFolder;
		long obqRecordInfoListParamValue = obqRecordInfoList.nativeObject.pointer;
		boolean isAsynParamValue = isAsyn;
		merge_EVString_OBQRecordInfoList_ev_bool(this.nativeObject.pointer, srcFolderParamValue, obqRecordInfoListParamValue, isAsynParamValue);
	}
	native private void merge_EVString_CObqMergeInstanceDataList_ev_bool(long pNativeObject, String dstFolder, long dataList, boolean isAsyn);
	///开始合并,isAsyn == true则内部开启线程采用异步处理
	public void merge(String dstFolder, com.earthview.meshoptimize.ObqMergeInstanceDataList dataList, boolean isAsyn)
	{
		String dstFolderParamValue = dstFolder;
		long dataListParamValue = dataList.nativeObject.pointer;
		boolean isAsynParamValue = isAsyn;
		merge_EVString_CObqMergeInstanceDataList_ev_bool(this.nativeObject.pointer, dstFolderParamValue, dataListParamValue, isAsynParamValue);
	}
	native private void merge_CStringArray_EVString_EVString_ev_bool(long pNativeObject, long folders, String desFolder, String mergeName, boolean isAsyn);
	///根据RecordInfoList记录，合并多个Meshxg中的meshx文件, isAsyn == true则内部开启线程采用异步处理
	public void merge(com.earthview.world.core.StringArray folders, String desFolder, String mergeName, boolean isAsyn)
	{
		long foldersParamValue = folders.nativeObject.pointer;
		String desFolderParamValue = desFolder;
		String mergeNameParamValue = mergeName;
		boolean isAsynParamValue = isAsyn;
		merge_CStringArray_EVString_EVString_ev_bool(this.nativeObject.pointer, foldersParamValue, desFolderParamValue, mergeNameParamValue, isAsynParamValue);
	}
	native private void setParam_CObqQuadTreeParam(long pNativeObject, long param);
	///设置参数
	public void setParam(com.earthview.meshoptimize.ObqQuadTreeParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		setParam_CObqQuadTreeParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getParam_void(long pNativeObject);
	///获取参数
	public com.earthview.meshoptimize.ObqQuadTreeParam getParam()
	{
		long returnValue = getParam_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.ObqQuadTreeParam __returnValue = new com.earthview.meshoptimize.ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate, "CObqQuadTreeParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.ObqQuadTreeParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CObqQuadTreeParam");
		}
		return __returnValue;
	}
	native private long getCopyParam_void(long pNativeObject);
	///获取拷贝参数
	public com.earthview.meshoptimize.ObqQuadTreeParam getCopyParam()
	{
		long returnValue = getCopyParam_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.ObqQuadTreeParam __returnValue = new com.earthview.meshoptimize.ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CObqQuadTreeParam");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.ObqQuadTreeParam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CObqQuadTreeParam");
		}
		return __returnValue;
	}
	native private void addListener_CObqMergeListener(long pNativeObject, long observer);
	///添加监听
	public void addListener(com.earthview.meshoptimize.ObqMergeListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		addListener_CObqMergeListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void removeListener_CObqMergeListener(long pNativeObject, long observer);
	///移除监听
	public void removeListener(com.earthview.meshoptimize.ObqMergeListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		removeListener_CObqMergeListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void addMeshxInstance_CObqMergeInstanceData(long pNativeObject, long instanceData);
	///添加meshx复用
	public void addMeshxInstance(com.earthview.meshoptimize.ObqMergeInstanceData instanceData)
	{
		long instanceDataParamValue = instanceData.nativeObject.pointer;
		addMeshxInstance_CObqMergeInstanceData(this.nativeObject.pointer, instanceDataParamValue);
	}
	public ObqMerge(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObqMerge(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ObqMerge fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObqMerge obj = null;
 		if(baseObj instanceof ObqMerge)
		{
			obj = (ObqMerge)baseObj;
		} else {
			obj = new ObqMerge(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObqMerge");
			obj.increaseCast();
		}

		return obj;
	}
}
