package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 四叉树根树根数不参与级别划分，0级4棵树
 */
public class Obqmodelquadroottree extends com.earthview.world.spatial3d.modelmanager.Obqmodelquadtree {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree", new ObqmodelquadroottreeClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public Obqmodelquadroottree() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQModelQuadRootTree", null);
	}

	native private void setLocal_ev_real64_ev_real64_ev_real64_EVString(long pNativeObject, double localX, double localY, double localZ, String srs);
	/**
	 * 
	 * @param  
	 */
	public void setLocal(double localX, double localY, double localZ, String srs)
	{
		double localXParamValue = localX;
		double localYParamValue = localY;
		double localZParamValue = localZ;
		String srsParamValue = srs;
		setLocal_ev_real64_ev_real64_ev_real64_EVString(this.nativeObject.pointer, localXParamValue, localYParamValue, localZParamValue, srsParamValue);
	}
	native private double getLocalX_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getLocalX()
	{
		double returnValue = getLocalX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLocalY_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getLocalY()
	{
		double returnValue = getLocalY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLocalZ_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public double getLocalZ()
	{
		double returnValue = getLocalZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSRS_void(long pNativeObject);
	public String getSRS()
	{
		String returnValue = getSRS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean initTree_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32(long pNativeObject, double minCenterX, double minCenterY, double maxCenterX, double maxCenterY, int levelCount);
	/**
	 * 
	 * @param  
	 */
	public boolean initTree(double minCenterX, double minCenterY, double maxCenterX, double maxCenterY, int levelCount)
	{
		double minCenterXParamValue = minCenterX;
		double minCenterYParamValue = minCenterY;
		double maxCenterXParamValue = maxCenterX;
		double maxCenterYParamValue = maxCenterY;
		int levelCountParamValue = levelCount;
		boolean returnValue = initTree_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, minCenterXParamValue, minCenterYParamValue, maxCenterXParamValue, maxCenterYParamValue, levelCountParamValue);
		return returnValue;
	}
	public Obqmodelquadroottree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmodelquadroottree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqmodelquadroottree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmodelquadroottree obj = null;
 		if(baseObj instanceof Obqmodelquadroottree)
		{
			obj = (Obqmodelquadroottree)baseObj;
		} else {
			obj = new Obqmodelquadroottree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQModelQuadRootTree");
			obj.increaseCast();
		}

		return obj;
	}
}
