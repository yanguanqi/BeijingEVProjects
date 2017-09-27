package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染用的淹没区块数据
 */
public class FloodRenderBlock extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CFloodRenderBlock", new FloodRenderBlockClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FloodRenderBlock() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFloodRenderBlock", null);
	}

	native private long get_mVertices_void(long pNativeObject);
	public com.earthview.world.spatial3d.analysis.FloodPointVector get_mVertices()
	{
		long jniValue = get_mVertices_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.analysis.FloodPointVector __returnValue = new com.earthview.world.spatial3d.analysis.FloodPointVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "FloodPointVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.FloodPointVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FloodPointVector");
		}
		return __returnValue;
	}
	
	native private void set_mVertices_FloodPointVector (long pNativeObject, long value);
	public void set_mVertices(com.earthview.world.spatial3d.analysis.FloodPointVector mVertices)
	{
		long mVerticesParamValue = mVertices.nativeObject.pointer;
		
		set_mVertices_FloodPointVector(this.nativeObject.pointer, mVerticesParamValue);
	}
	
	native private long get_mIndices_void(long pNativeObject);
	public com.earthview.world.core.IntVector get_mIndices()
	{
		long jniValue = get_mIndices_void(this.nativeObject.pointer);
		
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	
	native private void set_mIndices_IntVector (long pNativeObject, long value);
	public void set_mIndices(com.earthview.world.core.IntVector mIndices)
	{
		long mIndicesParamValue = mIndices.nativeObject.pointer;
		
		set_mIndices_IntVector(this.nativeObject.pointer, mIndicesParamValue);
	}
	
	native private long get_mBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial3d.analysis.GeoBoundingBox get_mBoundingBox()
	{
		long jniValue = get_mBoundingBox_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.analysis.GeoBoundingBox __returnValue = new com.earthview.world.spatial3d.analysis.GeoBoundingBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGeoBoundingBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.GeoBoundingBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoBoundingBox");
		}
		return __returnValue;
	}
	
	native private void set_mBoundingBox_CGeoBoundingBox (long pNativeObject, long value);
	public void set_mBoundingBox(com.earthview.world.spatial3d.analysis.GeoBoundingBox mBoundingBox)
	{
		long mBoundingBoxParamValue = mBoundingBox.nativeObject.pointer;
		
		set_mBoundingBox_CGeoBoundingBox(this.nativeObject.pointer, mBoundingBoxParamValue);
	}
	
	native private double get_mRowCount_void(long pNativeObject);
	public double get_mRowCount()
	{
		double jniValue = get_mRowCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRowCount_ev_real64 (long pNativeObject, double value);
	public void set_mRowCount(double mRowCount)
	{
		double mRowCountParamValue = mRowCount;
		
		set_mRowCount_ev_real64(this.nativeObject.pointer, mRowCountParamValue);
	}
	
	native private double get_mColumnCount_void(long pNativeObject);
	public double get_mColumnCount()
	{
		double jniValue = get_mColumnCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mColumnCount_ev_real64 (long pNativeObject, double value);
	public void set_mColumnCount(double mColumnCount)
	{
		double mColumnCountParamValue = mColumnCount;
		
		set_mColumnCount_ev_real64(this.nativeObject.pointer, mColumnCountParamValue);
	}
	
	native private long get_mCenterGeoPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mCenterGeoPosition()
	{
		long jniValue = get_mCenterGeoPosition_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mCenterGeoPosition_CVector3 (long pNativeObject, long value);
	public void set_mCenterGeoPosition(com.earthview.world.spatial.math.Vector3 mCenterGeoPosition)
	{
		long mCenterGeoPositionParamValue = mCenterGeoPosition.nativeObject.pointer;
		
		set_mCenterGeoPosition_CVector3(this.nativeObject.pointer, mCenterGeoPositionParamValue);
	}
	
	native private long get_mCenterWorldPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mCenterWorldPosition()
	{
		long jniValue = get_mCenterWorldPosition_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mCenterWorldPosition_CVector3 (long pNativeObject, long value);
	public void set_mCenterWorldPosition(com.earthview.world.spatial.math.Vector3 mCenterWorldPosition)
	{
		long mCenterWorldPositionParamValue = mCenterWorldPosition.nativeObject.pointer;
		
		set_mCenterWorldPosition_CVector3(this.nativeObject.pointer, mCenterWorldPositionParamValue);
	}
	
	public FloodRenderBlock(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FloodRenderBlock(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FloodRenderBlock fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FloodRenderBlock obj = null;
 		if(baseObj instanceof FloodRenderBlock)
		{
			obj = (FloodRenderBlock)baseObj;
		} else {
			obj = new FloodRenderBlock(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFloodRenderBlock");
			obj.increaseCast();
		}

		return obj;
	}
}
