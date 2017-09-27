package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 洪水网格点结构
 */
public class FloodMeshPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CFloodMeshPoint", new FloodMeshPointClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FloodMeshPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFloodMeshPoint", null);
	}

	/**
	 * 构造函数
	 * @param rowIndex 行索引
	 * @param columnIndex 列索引
	 * @param altitude 海拔高度
	 */
	public FloodMeshPoint(int rowIndex, int columnIndex, double altitude) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rowIndexPtr = new BasePointer(rowIndex);
		list.add("rowIndex", rowIndexPtr.get());
		BasePointer columnIndexPtr = new BasePointer(columnIndex);
		list.add("columnIndex", columnIndexPtr.get());
		BasePointer altitudePtr = new BasePointer(altitude);
		list.add("altitude", altitudePtr.get());
		Create("CFloodMeshPoint", list);
	}

	native private int get_mRowIndex_void(long pNativeObject);
	public int get_mRowIndex()
	{
		int jniValue = get_mRowIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRowIndex_ev_int32 (long pNativeObject, int value);
	public void set_mRowIndex(int mRowIndex)
	{
		int mRowIndexParamValue = mRowIndex;
		
		set_mRowIndex_ev_int32(this.nativeObject.pointer, mRowIndexParamValue);
	}
	
	native private int get_mColumnIndex_void(long pNativeObject);
	public int get_mColumnIndex()
	{
		int jniValue = get_mColumnIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mColumnIndex_ev_int32 (long pNativeObject, int value);
	public void set_mColumnIndex(int mColumnIndex)
	{
		int mColumnIndexParamValue = mColumnIndex;
		
		set_mColumnIndex_ev_int32(this.nativeObject.pointer, mColumnIndexParamValue);
	}
	
	native private double get_mAltitude_void(long pNativeObject);
	public double get_mAltitude()
	{
		double jniValue = get_mAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mAltitude(double mAltitude)
	{
		double mAltitudeParamValue = mAltitude;
		
		set_mAltitude_ev_real64(this.nativeObject.pointer, mAltitudeParamValue);
	}
	
	public FloodMeshPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FloodMeshPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FloodMeshPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FloodMeshPoint obj = null;
 		if(baseObj instanceof FloodMeshPoint)
		{
			obj = (FloodMeshPoint)baseObj;
		} else {
			obj = new FloodMeshPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFloodMeshPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
