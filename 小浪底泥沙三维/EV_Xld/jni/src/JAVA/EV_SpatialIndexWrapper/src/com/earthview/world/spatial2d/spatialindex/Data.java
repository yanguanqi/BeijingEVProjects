package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////////////////////
//class  IData
//////////////////////////////////////////////////////////////////////////
public class Data extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::Data", new DataClassFactory());
	}

	native private void getMBR_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long dfUpleftX, long dfUpleftY, long dfDownrightX, long dfDownRightY);
	/**
	 * 获取最小外接矩形
	 * @param dfUpleftX 左上角X
	 * @param dfUpleftY 左上角Y
	 * @param dfDownrightX 右下角X
	 * @param dfDownRightY 右下角Y
	 */
	public void getMBR(FloatPointer dfUpleftX, FloatPointer dfUpleftY, FloatPointer dfDownrightX, FloatPointer dfDownRightY)
	{
		long dfUpleftXParamValue = dfUpleftX.nativeObject.pointer;
		long dfUpleftYParamValue = dfUpleftY.nativeObject.pointer;
		long dfDownrightXParamValue = dfDownrightX.nativeObject.pointer;
		long dfDownRightYParamValue = dfDownRightY.nativeObject.pointer;
		getMBR_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, dfUpleftXParamValue, dfUpleftYParamValue, dfDownrightXParamValue, dfDownRightYParamValue);
	}
	native private long getFeatureIndex_void(long pNativeObject);
	/**
	 * 获取与该最小外接矩形绑定的矩形
	 * @return featureID
	 */
	public long getFeatureIndex()
	{
		long returnValue = getFeatureIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	/**
	 * 构造函数
	 * @param dfUpleftX 左上角X
	 * @param dfUpleftY 左上角Y
	 * @param dfDownrightX 右下角X
	 * @param dfDownRightY 右下角Y
	 * @param dfDownRightY 右下角Y
	 * @param ID featureID
	 */
	public Data(float dfUpleftX, float dfUpleftY, float dfDownrightX, float dfDownRightY, long ID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfUpleftXPtr = new BasePointer(dfUpleftX);
		list.add("dfUpleftX", dfUpleftXPtr.get());
		BasePointer dfUpleftYPtr = new BasePointer(dfUpleftY);
		list.add("dfUpleftY", dfUpleftYPtr.get());
		BasePointer dfDownrightXPtr = new BasePointer(dfDownrightX);
		list.add("dfDownrightX", dfDownrightXPtr.get());
		BasePointer dfDownRightYPtr = new BasePointer(dfDownRightY);
		list.add("dfDownRightY", dfDownRightYPtr.get());
		BasePointer IDPtr = new BasePointer(ID);
		list.add("ID", IDPtr.get());
		Create("Data", list);
	}

	/**
	 * 默认构造函数
	 */
	public Data() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Data", null);
	}

	public Data(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Data(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Data fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Data obj = null;
 		if(baseObj instanceof Data)
		{
			obj = (Data)baseObj;
		} else {
			obj = new Data(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Data");
			obj.increaseCast();
		}

		return obj;
	}
}
