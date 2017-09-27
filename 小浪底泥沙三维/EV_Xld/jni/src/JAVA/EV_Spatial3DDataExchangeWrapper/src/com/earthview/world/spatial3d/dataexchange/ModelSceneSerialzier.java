package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSceneSerialzier extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier", new ModelSceneSerialzierClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public ModelSceneSerialzier(String scenefile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scenefilePtr = new BasePointer(scenefile);
		list.add("scenefile", scenefilePtr.get());
		Create("CModelSceneSerialzier", list);
	}

	native private void setModelRootPath_EVString(long pNativeObject, String modelrootfolder);
	/**
	 * 
	 * @param  
	 */
	public void setModelRootPath(String modelrootfolder)
	{
		String modelrootfolderParamValue = modelrootfolder;
		setModelRootPath_EVString(this.nativeObject.pointer, modelrootfolderParamValue);
	}
	native private boolean parseModelSceneFile_void(long pNativeObject);
	/**
	 * 解析场景文件，在模型入库时有意义
	 * @param  
	 */
	public boolean parseModelSceneFile()
	{
		boolean returnValue = parseModelSceneFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveModelSceneFile_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean saveModelSceneFile()
	{
		boolean returnValue = saveModelSceneFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addNode_EVString_ev_real32_ev_real32_ev_real32_CVector3_ev_real32_ev_real32_ev_real32(long pNativeObject, String modelfilePath, float lat, float lon, float alt, long scale, float rotateX, float rotateY, float rotateZ);
	/**
	 * 添加一个场景节点
	 * @param  
	 */
	public boolean addNode(String modelfilePath, float lat, float lon, float alt, com.earthview.world.spatial.math.Vector3 scale, float rotateX, float rotateY, float rotateZ)
	{
		String modelfilePathParamValue = modelfilePath;
		float latParamValue = lat;
		float lonParamValue = lon;
		float altParamValue = alt;
		long scaleParamValue = scale.nativeObject.pointer;
		float rotateXParamValue = rotateX;
		float rotateYParamValue = rotateY;
		float rotateZParamValue = rotateZ;
		boolean returnValue = addNode_EVString_ev_real32_ev_real32_ev_real32_CVector3_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, modelfilePathParamValue, latParamValue, lonParamValue, altParamValue, scaleParamValue, rotateXParamValue, rotateYParamValue, rotateZParamValue);
		return returnValue;
	}
	public ModelSceneSerialzier(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelSceneSerialzier(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelSceneSerialzier fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelSceneSerialzier obj = null;
 		if(baseObj instanceof ModelSceneSerialzier)
		{
			obj = (ModelSceneSerialzier)baseObj;
		} else {
			obj = new ModelSceneSerialzier(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelSceneSerialzier");
			obj.increaseCast();
		}

		return obj;
	}
}
