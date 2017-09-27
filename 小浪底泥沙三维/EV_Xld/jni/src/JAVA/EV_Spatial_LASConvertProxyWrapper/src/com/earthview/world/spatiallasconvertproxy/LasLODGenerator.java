package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasLODGenerator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerator", new LasLODGeneratorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LasLODGenerator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLasLODGenerator", null);
	}

	native private void generate_StringVector_EVString_EVString_EVString_EVString_ev_bool_CAxisAlignedBox(long pNativeObject, long dataFiles, String outputPath, String name, String grpName, String matName, boolean isAsyn, long box);
	///isAsyn == true则内部开启线程采用异步处理
	public void generate(com.earthview.world.core.StringVector dataFiles, String outputPath, String name, String grpName, String matName, boolean isAsyn, com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long dataFilesParamValue = dataFiles.nativeObject.pointer;
		String outputPathParamValue = outputPath;
		String nameParamValue = name;
		String grpNameParamValue = grpName;
		String matNameParamValue = matName;
		boolean isAsynParamValue = isAsyn;
		long boxParamValue = box.nativeObject.pointer;
		generate_StringVector_EVString_EVString_EVString_EVString_ev_bool_CAxisAlignedBox(this.nativeObject.pointer, dataFilesParamValue, outputPathParamValue, nameParamValue, grpNameParamValue, matNameParamValue, isAsynParamValue, boxParamValue);
	}
	native private void addListener_CLasLODGenerateListener(long pNativeObject, long observer);
	///添加监听
	public void addListener(com.earthview.world.spatiallasconvertproxy.LasLODGenerateListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		addListener_CLasLODGenerateListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void removeListener_CLasLODGenerateListener(long pNativeObject, long observer);
	///移除监听
	public void removeListener(com.earthview.world.spatiallasconvertproxy.LasLODGenerateListener observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		removeListener_CLasLODGenerateListener(this.nativeObject.pointer, observerParamValue);
	}
	native private void setParam_CLasLODParam(long pNativeObject, long param);
	///设置参数
	public void setParam(com.earthview.world.spatiallasconvertproxy.LasLODParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		setParam_CLasLODParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getParam_void(long pNativeObject);
	///获取参数
	public com.earthview.world.spatiallasconvertproxy.LasLODParam getParam()
	{
		long returnValue = getParam_void(this.nativeObject.pointer);
		com.earthview.world.spatiallasconvertproxy.LasLODParam __returnValue = new com.earthview.world.spatiallasconvertproxy.LasLODParam(CreatedWhenConstruct.CWC_NotToCreate, "CLasLODParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatiallasconvertproxy.LasLODParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLasLODParam");
		}
		return __returnValue;
	}
	native private void stop_void(long pNativeObject);
	///停止线程
	public void stop()
	{
		stop_void(this.nativeObject.pointer);
	}
	public LasLODGenerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasLODGenerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LasLODGenerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasLODGenerator obj = null;
 		if(baseObj instanceof LasLODGenerator)
		{
			obj = (LasLODGenerator)baseObj;
		} else {
			obj = new LasLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasLODGenerator");
			obj.increaseCast();
		}

		return obj;
	}
}
