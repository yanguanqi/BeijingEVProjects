package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqmodelnode extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelNode", new ObqmodelnodeClassFactory());
	}

	public Obqmodelnode() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQModelNode", null);
	}

	/**
	 * 
	 * @param  
	 */
	public Obqmodelnode(double minRange, double radius, double centerX, double centerY, double centerZ, String modelPath, String tileFileFolder) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer minRangePtr = new BasePointer(minRange);
		list.add("minRange", minRangePtr.get());
		BasePointer radiusPtr = new BasePointer(radius);
		list.add("radius", radiusPtr.get());
		BasePointer centerXPtr = new BasePointer(centerX);
		list.add("centerX", centerXPtr.get());
		BasePointer centerYPtr = new BasePointer(centerY);
		list.add("centerY", centerYPtr.get());
		BasePointer centerZPtr = new BasePointer(centerZ);
		list.add("centerZ", centerZPtr.get());
		BasePointer modelPathPtr = new BasePointer(modelPath);
		list.add("modelPath", modelPathPtr.get());
		BasePointer tileFileFolderPtr = new BasePointer(tileFileFolder);
		list.add("tileFileFolder", tileFileFolderPtr.get());
		Create("OBQModelNode", list);
	}

	native private double getMinRange_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getMinRange()
	{
		double returnValue = getMinRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRadius_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getRadius()
	{
		double returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCenterX_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getCenterX()
	{
		double returnValue = getCenterX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCenterY_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getCenterY()
	{
		double returnValue = getCenterY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCenterZ_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getCenterZ()
	{
		double returnValue = getCenterZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getModelPath_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer getModelPath()
	{
		long returnValue = getModelPath_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getTileFileFolder_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer getTileFileFolder()
	{
		long returnValue = getTileFileFolder_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public Obqmodelnode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmodelnode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqmodelnode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmodelnode obj = null;
 		if(baseObj instanceof Obqmodelnode)
		{
			obj = (Obqmodelnode)baseObj;
		} else {
			obj = new Obqmodelnode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQModelNode");
			obj.increaseCast();
		}

		return obj;
	}
}
