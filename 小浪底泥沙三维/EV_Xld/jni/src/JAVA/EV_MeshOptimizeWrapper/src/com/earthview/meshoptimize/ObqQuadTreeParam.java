package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqQuadTreeParam extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqQuadTreeParam", new ObqQuadTreeParamClassFactory());
	}

	public ObqQuadTreeParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CObqQuadTreeParam", null);
	}

	native private void setObqCountLowerLimit_ev_uint32(long pNativeObject, long obqCountLowerLimit);
	///设置单个块中obq数目下限,超过下限就不再分割
	public void setObqCountLowerLimit(long obqCountLowerLimit)
	{
		long obqCountLowerLimitParamValue = obqCountLowerLimit;
		setObqCountLowerLimit_ev_uint32(this.nativeObject.pointer, obqCountLowerLimitParamValue);
	}
	native private long getObqCountLowerLimit_void(long pNativeObject);
	///获取单个块中obq数目下限
	public long getObqCountLowerLimit()
	{
		long returnValue = getObqCountLowerLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinDivideBoundsSize_ev_real32(long pNativeObject, float minDivideSize);
	///设置单个块最小包围盒大小(仅x,z平面对角线长度)
	public void setMinDivideBoundsSize(float minDivideSize)
	{
		float minDivideSizeParamValue = minDivideSize;
		setMinDivideBoundsSize_ev_real32(this.nativeObject.pointer, minDivideSizeParamValue);
	}
	native private float getMinDivideBoundsSize_void(long pNativeObject);
	///获取单个块最小包围盒大小
	public float getMinDivideBoundsSize()
	{
		float returnValue = getMinDivideBoundsSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMergeName_EVString(long pNativeObject, String mergeName);
	///设置合并后名字
	public void setMergeName(String mergeName)
	{
		String mergeNameParamValue = mergeName;
		setMergeName_EVString(this.nativeObject.pointer, mergeNameParamValue);
	}
	native private String getMergeName_void(long pNativeObject);
	///获取合并后名字
	public String getMergeName()
	{
		String returnValue = getMergeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEncode7z_void(long pNativeObject);
	///获取压缩7z
	public boolean getEncode7z()
	{
		boolean returnValue = getEncode7z_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTileVisibleMultiplier_ev_real32(long pNativeObject, float multiplier);
	///
	public void setTileVisibleMultiplier(float multiplier)
	{
		float multiplierParamValue = multiplier;
		setTileVisibleMultiplier_ev_real32(this.nativeObject.pointer, multiplierParamValue);
	}
	native private float getTileVisibleMultiplier_void(long pNativeObject);
	public float getTileVisibleMultiplier()
	{
		float returnValue = getTileVisibleMultiplier_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ObqQuadTreeParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObqQuadTreeParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ObqQuadTreeParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObqQuadTreeParam obj = null;
 		if(baseObj instanceof ObqQuadTreeParam)
		{
			obj = (ObqQuadTreeParam)baseObj;
		} else {
			obj = new ObqQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObqQuadTreeParam");
			obj.increaseCast();
		}

		return obj;
	}
}
