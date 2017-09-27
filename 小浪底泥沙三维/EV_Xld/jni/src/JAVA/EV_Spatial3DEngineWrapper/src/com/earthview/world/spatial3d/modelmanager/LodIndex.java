package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodIndex extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::LodIndex", new LodIndexClassFactory());
	}

	public LodIndex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LodIndex", null);
	}

	native private double get_mMinRange_void(long pNativeObject);
	public double get_mMinRange()
	{
		double jniValue = get_mMinRange_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinRange_ev_real64 (long pNativeObject, double value);
	public void set_mMinRange(double mMinRange)
	{
		double mMinRangeParamValue = mMinRange;
		
		set_mMinRange_ev_real64(this.nativeObject.pointer, mMinRangeParamValue);
	}
	
	native private double get_mRadius_void(long pNativeObject);
	public double get_mRadius()
	{
		double jniValue = get_mRadius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRadius_ev_real64 (long pNativeObject, double value);
	public void set_mRadius(double mRadius)
	{
		double mRadiusParamValue = mRadius;
		
		set_mRadius_ev_real64(this.nativeObject.pointer, mRadiusParamValue);
	}
	
	native private long get_mCenter_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mCenter()
	{
		long jniValue = get_mCenter_void(this.nativeObject.pointer);
		
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
	
	native private void set_mCenter_CVector3 (long pNativeObject, long value);
	public void set_mCenter(com.earthview.world.spatial.math.Vector3 mCenter)
	{
		long mCenterParamValue = mCenter.nativeObject.pointer;
		
		set_mCenter_CVector3(this.nativeObject.pointer, mCenterParamValue);
	}
	
	native private String get_mModelPath_void(long pNativeObject);
	public String get_mModelPath()
	{
		String jniValue = get_mModelPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mModelPath_EVString (long pNativeObject, String value);
	public void set_mModelPath(String mModelPath)
	{
		String mModelPathParamValue = mModelPath;
		
		set_mModelPath_EVString(this.nativeObject.pointer, mModelPathParamValue);
	}
	
	native private long get_mID_void(long pNativeObject);
	public long get_mID()
	{
		long jniValue = get_mID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mID_ev_uint32 (long pNativeObject, long value);
	public void set_mID(long mID)
	{
		long mIDParamValue = mID;
		
		set_mID_ev_uint32(this.nativeObject.pointer, mIDParamValue);
	}
	
	native private long get_mRecordID_void(long pNativeObject);
	public long get_mRecordID()
	{
		long jniValue = get_mRecordID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRecordID_ev_uint32 (long pNativeObject, long value);
	public void set_mRecordID(long mRecordID)
	{
		long mRecordIDParamValue = mRecordID;
		
		set_mRecordID_ev_uint32(this.nativeObject.pointer, mRecordIDParamValue);
	}
	
	native private long get_mLevel_void(long pNativeObject);
	public long get_mLevel()
	{
		long jniValue = get_mLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLevel_ev_uint32 (long pNativeObject, long value);
	public void set_mLevel(long mLevel)
	{
		long mLevelParamValue = mLevel;
		
		set_mLevel_ev_uint32(this.nativeObject.pointer, mLevelParamValue);
	}
	
	native private float get_mXmin_void(long pNativeObject);
	public float get_mXmin()
	{
		float jniValue = get_mXmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mXmin_ev_real32 (long pNativeObject, float value);
	public void set_mXmin(float mXmin)
	{
		float mXminParamValue = mXmin;
		
		set_mXmin_ev_real32(this.nativeObject.pointer, mXminParamValue);
	}
	
	native private float get_mXmax_void(long pNativeObject);
	public float get_mXmax()
	{
		float jniValue = get_mXmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mXmax_ev_real32 (long pNativeObject, float value);
	public void set_mXmax(float mXmax)
	{
		float mXmaxParamValue = mXmax;
		
		set_mXmax_ev_real32(this.nativeObject.pointer, mXmaxParamValue);
	}
	
	native private float get_mYmin_void(long pNativeObject);
	public float get_mYmin()
	{
		float jniValue = get_mYmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mYmin_ev_real32 (long pNativeObject, float value);
	public void set_mYmin(float mYmin)
	{
		float mYminParamValue = mYmin;
		
		set_mYmin_ev_real32(this.nativeObject.pointer, mYminParamValue);
	}
	
	native private float get_mYmax_void(long pNativeObject);
	public float get_mYmax()
	{
		float jniValue = get_mYmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mYmax_ev_real32 (long pNativeObject, float value);
	public void set_mYmax(float mYmax)
	{
		float mYmaxParamValue = mYmax;
		
		set_mYmax_ev_real32(this.nativeObject.pointer, mYmaxParamValue);
	}
	
	native private float get_mZmin_void(long pNativeObject);
	public float get_mZmin()
	{
		float jniValue = get_mZmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZmin_ev_real32 (long pNativeObject, float value);
	public void set_mZmin(float mZmin)
	{
		float mZminParamValue = mZmin;
		
		set_mZmin_ev_real32(this.nativeObject.pointer, mZminParamValue);
	}
	
	native private float get_mZmax_void(long pNativeObject);
	public float get_mZmax()
	{
		float jniValue = get_mZmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZmax_ev_real32 (long pNativeObject, float value);
	public void set_mZmax(float mZmax)
	{
		float mZmaxParamValue = mZmax;
		
		set_mZmax_ev_real32(this.nativeObject.pointer, mZmaxParamValue);
	}
	
	native private long get_mpOffMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_mpOffMatrix()
	{
		long jniValue = get_mpOffMatrix_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_mpOffMatrix_CMatrix4 (long pNativeObject, long value);
	public void set_mpOffMatrix(com.earthview.world.spatial.math.Matrix4 mpOffMatrix)
	{
		long mpOffMatrixParamValue = (mpOffMatrix == null ? 0L : mpOffMatrix.nativeObject.pointer);
		
		set_mpOffMatrix_CMatrix4(this.nativeObject.pointer, mpOffMatrixParamValue);
	}
	
	native private void setParent_LodIndex(long pNativeObject, long parent);
	public void setParent(com.earthview.world.spatial3d.modelmanager.LodIndex parent)
	{
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		setParent_LodIndex(this.nativeObject.pointer, parentParamValue);
	}
	native private long getParent_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.LodIndex getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodIndex __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndex(CreatedWhenConstruct.CWC_NotToCreate, "LodIndex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LodIndex");
		}
		return __returnValue;
	}
	native private long getNumChild_void(long pNativeObject);
	public long getNumChild()
	{
		long returnValue = getNumChild_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getChild_ev_uint32(long pNativeObject, long i);
	public com.earthview.world.spatial3d.modelmanager.LodIndex getChild(long i)
	{
		long iParamValue = i;
		long returnValue = getChild_ev_uint32(this.nativeObject.pointer, iParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodIndex __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndex(CreatedWhenConstruct.CWC_NotToCreate, "LodIndex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LodIndex");
		}
		return __returnValue;
	}
	native private void addChild_LodIndex(long pNativeObject, long child);
	public void addChild(com.earthview.world.spatial3d.modelmanager.LodIndex child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		addChild_LodIndex(this.nativeObject.pointer, childParamValue);
	}
	public LodIndex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodIndex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodIndex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodIndex obj = null;
 		if(baseObj instanceof LodIndex)
		{
			obj = (LodIndex)baseObj;
		} else {
			obj = new LodIndex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LodIndex");
			obj.increaseCast();
		}

		return obj;
	}
}
