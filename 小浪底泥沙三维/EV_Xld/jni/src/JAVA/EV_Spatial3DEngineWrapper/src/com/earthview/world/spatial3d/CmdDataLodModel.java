package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDataLodModel extends com.earthview.world.spatial3d.CmdDataBase {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCmdDataLodModel", new CmdDataLodModelClassFactory());
	}

	/**
	 * 构造函数
	 * @param layer 图层对象
	 * @param id id
	 * @param operType 操作类型
	 */
	public CmdDataLodModel(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id, com.earthview.world.spatial3d.CommandOperType operType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		BasePointer operTypePtr = new BasePointer(operType);
		list.add("operType", operTypePtr.get());
		Create("CCmdDataLodModel", list);
	}

	native private double get_mUndoLat_void(long pNativeObject);
	public double get_mUndoLat()
	{
		double jniValue = get_mUndoLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUndoLat_ev_real64 (long pNativeObject, double value);
	public void set_mUndoLat(double mUndoLat)
	{
		double mUndoLatParamValue = mUndoLat;
		
		set_mUndoLat_ev_real64(this.nativeObject.pointer, mUndoLatParamValue);
	}
	
	native private double get_mUndoLon_void(long pNativeObject);
	public double get_mUndoLon()
	{
		double jniValue = get_mUndoLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUndoLon_ev_real64 (long pNativeObject, double value);
	public void set_mUndoLon(double mUndoLon)
	{
		double mUndoLonParamValue = mUndoLon;
		
		set_mUndoLon_ev_real64(this.nativeObject.pointer, mUndoLonParamValue);
	}
	
	native private double get_mUndoAlt_void(long pNativeObject);
	public double get_mUndoAlt()
	{
		double jniValue = get_mUndoAlt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUndoAlt_ev_real64 (long pNativeObject, double value);
	public void set_mUndoAlt(double mUndoAlt)
	{
		double mUndoAltParamValue = mUndoAlt;
		
		set_mUndoAlt_ev_real64(this.nativeObject.pointer, mUndoAltParamValue);
	}
	
	native private long get_mUndoLocalScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mUndoLocalScale()
	{
		long jniValue = get_mUndoLocalScale_void(this.nativeObject.pointer);
		
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
	
	native private void set_mUndoLocalScale_CVector3 (long pNativeObject, long value);
	public void set_mUndoLocalScale(com.earthview.world.spatial.math.Vector3 mUndoLocalScale)
	{
		long mUndoLocalScaleParamValue = mUndoLocalScale.nativeObject.pointer;
		
		set_mUndoLocalScale_CVector3(this.nativeObject.pointer, mUndoLocalScaleParamValue);
	}
	
	native private long get_mUndoLocalOrientation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_mUndoLocalOrientation()
	{
		long jniValue = get_mUndoLocalOrientation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	
	native private void set_mUndoLocalOrientation_CQuaternion (long pNativeObject, long value);
	public void set_mUndoLocalOrientation(com.earthview.world.spatial.math.Quaternion mUndoLocalOrientation)
	{
		long mUndoLocalOrientationParamValue = mUndoLocalOrientation.nativeObject.pointer;
		
		set_mUndoLocalOrientation_CQuaternion(this.nativeObject.pointer, mUndoLocalOrientationParamValue);
	}
	
	native private double get_mRedoLat_void(long pNativeObject);
	public double get_mRedoLat()
	{
		double jniValue = get_mRedoLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRedoLat_ev_real64 (long pNativeObject, double value);
	public void set_mRedoLat(double mRedoLat)
	{
		double mRedoLatParamValue = mRedoLat;
		
		set_mRedoLat_ev_real64(this.nativeObject.pointer, mRedoLatParamValue);
	}
	
	native private double get_mRedoLon_void(long pNativeObject);
	public double get_mRedoLon()
	{
		double jniValue = get_mRedoLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRedoLon_ev_real64 (long pNativeObject, double value);
	public void set_mRedoLon(double mRedoLon)
	{
		double mRedoLonParamValue = mRedoLon;
		
		set_mRedoLon_ev_real64(this.nativeObject.pointer, mRedoLonParamValue);
	}
	
	native private double get_mRedoAlt_void(long pNativeObject);
	public double get_mRedoAlt()
	{
		double jniValue = get_mRedoAlt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRedoAlt_ev_real64 (long pNativeObject, double value);
	public void set_mRedoAlt(double mRedoAlt)
	{
		double mRedoAltParamValue = mRedoAlt;
		
		set_mRedoAlt_ev_real64(this.nativeObject.pointer, mRedoAltParamValue);
	}
	
	native private long get_mRedoLocalScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mRedoLocalScale()
	{
		long jniValue = get_mRedoLocalScale_void(this.nativeObject.pointer);
		
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
	
	native private void set_mRedoLocalScale_CVector3 (long pNativeObject, long value);
	public void set_mRedoLocalScale(com.earthview.world.spatial.math.Vector3 mRedoLocalScale)
	{
		long mRedoLocalScaleParamValue = mRedoLocalScale.nativeObject.pointer;
		
		set_mRedoLocalScale_CVector3(this.nativeObject.pointer, mRedoLocalScaleParamValue);
	}
	
	native private long get_mRedoLocalOrientation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_mRedoLocalOrientation()
	{
		long jniValue = get_mRedoLocalOrientation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	
	native private void set_mRedoLocalOrientation_CQuaternion (long pNativeObject, long value);
	public void set_mRedoLocalOrientation(com.earthview.world.spatial.math.Quaternion mRedoLocalOrientation)
	{
		long mRedoLocalOrientationParamValue = mRedoLocalOrientation.nativeObject.pointer;
		
		set_mRedoLocalOrientation_CQuaternion(this.nativeObject.pointer, mRedoLocalOrientationParamValue);
	}
	
	native private String get_mMeshxFile_void(long pNativeObject);
	public String get_mMeshxFile()
	{
		String jniValue = get_mMeshxFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMeshxFile_EVString (long pNativeObject, String value);
	public void set_mMeshxFile(String mMeshxFile)
	{
		String mMeshxFileParamValue = mMeshxFile;
		
		set_mMeshxFile_EVString(this.nativeObject.pointer, mMeshxFileParamValue);
	}
	
	native private boolean get_mIsInstance_void(long pNativeObject);
	public boolean get_mIsInstance()
	{
		boolean jniValue = get_mIsInstance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsInstance_ev_bool (long pNativeObject, boolean value);
	public void set_mIsInstance(boolean mIsInstance)
	{
		boolean mIsInstanceParamValue = mIsInstance;
		
		set_mIsInstance_ev_bool(this.nativeObject.pointer, mIsInstanceParamValue);
	}
	
	public CmdDataLodModel(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdDataLodModel(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CmdDataLodModel fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdDataLodModel obj = null;
 		if(baseObj instanceof CmdDataLodModel)
		{
			obj = (CmdDataLodModel)baseObj;
		} else {
			obj = new CmdDataLodModel(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdDataLodModel");
			obj.increaseCast();
		}

		return obj;
	}
}
