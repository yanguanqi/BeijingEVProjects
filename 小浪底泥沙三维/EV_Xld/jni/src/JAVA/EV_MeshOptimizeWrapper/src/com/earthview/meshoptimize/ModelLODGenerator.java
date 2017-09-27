package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class ModelLODGenerator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CModelLODGenerator", new ModelLODGeneratorClassFactory());
	}

	public ModelLODGenerator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelLODGenerator", null);
	}

	native private void generate_EVString_EVString_ev_bool(long pNativeObject, String localFolderSource, String dstFolder, boolean isAsyn);
	///优化本地源,isAsyn == true则内部开启线程采用异步处理
	public void generate(String localFolderSource, String dstFolder, boolean isAsyn)
	{
		String localFolderSourceParamValue = localFolderSource;
		String dstFolderParamValue = dstFolder;
		boolean isAsynParamValue = isAsyn;
		generate_EVString_EVString_ev_bool(this.nativeObject.pointer, localFolderSourceParamValue, dstFolderParamValue, isAsynParamValue);
	}
	native private void generate_CEntityDataset_EVString_ev_bool(long pNativeObject, long datasetSource, String dstFolder, boolean isAsyn);
	///优化数据集源,isAsyn == true则内部开启线程采用异步处理
	public void generate(com.earthview.world.spatial3d.dataset.EntityDataset datasetSource, String dstFolder, boolean isAsyn)
	{
		long datasetSourceParamValue = (datasetSource == null ? 0L : datasetSource.nativeObject.pointer);
		String dstFolderParamValue = dstFolder;
		boolean isAsynParamValue = isAsyn;
		generate_CEntityDataset_EVString_ev_bool(this.nativeObject.pointer, datasetSourceParamValue, dstFolderParamValue, isAsynParamValue);
	}
	native private void generate_CEntityDataset_EVString_IntVector_ev_bool(long pNativeObject, long datasetSource, String dstFolder, long vec, boolean isAsyn);
	///优化数据集源,isAsyn == true则内部开启线程采用异步处理,附加一个EntID集合
	public void generate(com.earthview.world.spatial3d.dataset.EntityDataset datasetSource, String dstFolder, com.earthview.world.core.IntVector vec, boolean isAsyn)
	{
		long datasetSourceParamValue = (datasetSource == null ? 0L : datasetSource.nativeObject.pointer);
		String dstFolderParamValue = dstFolder;
		long vecParamValue = vec.nativeObject.pointer;
		boolean isAsynParamValue = isAsyn;
		generate_CEntityDataset_EVString_IntVector_ev_bool(this.nativeObject.pointer, datasetSourceParamValue, dstFolderParamValue, vecParamValue, isAsynParamValue);
	}
	native private void generate_CMeshOptimizeDataSource_EVString_ev_bool(long pNativeObject, long memDataSource, String dstFolder, boolean isAsyn);
	///优化内存源,isAsyn == true则内部开启线程采用异步处理
	public void generate(com.earthview.meshoptimize.MeshOptimizeDataSource memDataSource, String dstFolder, boolean isAsyn)
	{
		long memDataSourceParamValue = memDataSource.nativeObject.pointer;
		String dstFolderParamValue = dstFolder;
		boolean isAsynParamValue = isAsyn;
		generate_CMeshOptimizeDataSource_EVString_ev_bool(this.nativeObject.pointer, memDataSourceParamValue, dstFolderParamValue, isAsynParamValue);
	}
	native private void setCollectInfo_ev_bool(long pNativeObject, boolean collect);
	///设置是否仅收集信息
	public void setCollectInfo(boolean collect)
	{
		boolean collectParamValue = collect;
		setCollectInfo_ev_bool(this.nativeObject.pointer, collectParamValue);
	}
	native private void addListener_CModelLODGenerateListener(long pNativeObject, long observer);
	///添加监听
	public void addListener(com.earthview.meshoptimize.ModelLODGenerateListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		addListener_CModelLODGenerateListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void removeListener_CModelLODGenerateListener(long pNativeObject, long observer);
	///移除监听
	public void removeListener(com.earthview.meshoptimize.ModelLODGenerateListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		removeListener_CModelLODGenerateListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void setParam_CModelLODParam(long pNativeObject, long param);
	///设置参数
	public void setParam(com.earthview.meshoptimize.ModelLODParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		setParam_CModelLODParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getParam_void(long pNativeObject);
	///获取参数
	public com.earthview.meshoptimize.ModelLODParam getParam()
	{
		long returnValue = getParam_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.ModelLODParam __returnValue = new com.earthview.meshoptimize.ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate, "CModelLODParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.ModelLODParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelLODParam");
		}
		return __returnValue;
	}
	native private long getCopyParam_void(long pNativeObject);
	///获取拷贝参数
	public com.earthview.meshoptimize.ModelLODParam getCopyParam()
	{
		long returnValue = getCopyParam_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.ModelLODParam __returnValue = new com.earthview.meshoptimize.ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CModelLODParam");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.ModelLODParam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CModelLODParam");
		}
		return __returnValue;
	}
	native private void stop_void(long pNativeObject);
	///停止线程
	public void stop()
	{
		stop_void(this.nativeObject.pointer);
	}
	public ModelLODGenerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelLODGenerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelLODGenerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelLODGenerator obj = null;
 		if(baseObj instanceof ModelLODGenerator)
		{
			obj = (ModelLODGenerator)baseObj;
		} else {
			obj = new ModelLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelLODGenerator");
			obj.increaseCast();
		}

		return obj;
	}
}
