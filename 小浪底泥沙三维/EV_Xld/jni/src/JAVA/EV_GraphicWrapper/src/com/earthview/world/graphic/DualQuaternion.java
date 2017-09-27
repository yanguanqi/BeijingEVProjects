package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DualQuaternion extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDualQuaternion", new DualQuaternionClassFactory());
	}

	//// Default constructor, initializes to identity rotation (aka 0?, and zero translation (0,0,0)
	public DualQuaternion() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDualQuaternion", null);
	}

	//// Construct from an explicit list of values
	public DualQuaternion(double fW, double fX, double fY, double fZ, double fdW, double fdX, double fdY, double fdZ) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		BasePointer fZPtr = new BasePointer(fZ);
		list.add("fZ", fZPtr.get());
		BasePointer fdWPtr = new BasePointer(fdW);
		list.add("fdW", fdWPtr.get());
		BasePointer fdXPtr = new BasePointer(fdX);
		list.add("fdX", fdXPtr.get());
		BasePointer fdYPtr = new BasePointer(fdY);
		list.add("fdY", fdYPtr.get());
		BasePointer fdZPtr = new BasePointer(fdZ);
		list.add("fdZ", fdZPtr.get());
		Create("CDualQuaternion", list);
	}

	//// Construct a dual quaternion from a transformation matrix
	public DualQuaternion(com.earthview.world.spatial.math.Matrix4 rot) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rotPtr = new BasePointer(rot);
		list.add("rot", rotPtr.get());
		Create("CDualQuaternion", list);
	}

	//// Construct a dual quaternion from a unit quaternion and a translation vector
	public DualQuaternion(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.spatial.math.Vector3 trans) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer qPtr = new BasePointer(q);
		list.add("q", qPtr.get());
		BasePointer transPtr = new BasePointer(trans);
		list.add("trans", transPtr.get());
		Create("CDualQuaternion", list);
	}

	//// Construct a dual quaternion from 8 manual w/x/y/z/dw/dx/dy/dz values
	public DualQuaternion(DoublePointer valptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer valptrPtr = new BasePointer(valptr);
		list.add("valptr", valptrPtr.get());
		Create("CDualQuaternion", list);
	}

	native private double OperatorIndex_ev_size_t(long pNativeObject, long i);
	//// Array accessor operator
	public double OperatorIndex(long i)
	{
		long iParamValue = i;
		double returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private long OperatorAssign_CDualQuaternion(long pNativeObject, long rkQ);
	public com.earthview.world.graphic.DualQuaternion OperatorAssign(com.earthview.world.graphic.DualQuaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = OperatorAssign_CDualQuaternion(this.nativeObject.pointer, rkQParamValue);
		com.earthview.world.graphic.DualQuaternion __returnValue = new com.earthview.world.graphic.DualQuaternion(CreatedWhenConstruct.CWC_NotToCreate, "CDualQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DualQuaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDualQuaternion");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CDualQuaternion(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.graphic.DualQuaternion rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CDualQuaternion(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CDualQuaternion(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.graphic.DualQuaternion rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CDualQuaternion(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private long ptr_void(long pNativeObject);
	//// Pointer accessor for direct copying
	public DoublePointer ptr()
	{
		long returnValue = ptr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void swap_CDualQuaternion(long pNativeObject, long other);
	//// Exchange the contents of this dual quaternion with another.
	public void swap(com.earthview.world.graphic.DualQuaternion other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CDualQuaternion(this.nativeObject.pointer, otherParamValue);
	}
	native private boolean isNaN_void(long pNativeObject);
	//// Check whether this dual quaternion contains valid values
	public boolean isNaN()
	{
		boolean returnValue = isNaN_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void fromRotationTranslation_CQuaternion_CVector3(long pNativeObject, long q, long trans);
	//// Construct a dual quaternion from a rotation described by a EarthView::World::Spatial::Math::CQuaternion and a translation described by a EarthView::World::Spatial::Math::CVector3
	public void fromRotationTranslation(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.spatial.math.Vector3 trans)
	{
		long qParamValue = q.nativeObject.pointer;
		long transParamValue = trans.nativeObject.pointer;
		fromRotationTranslation_CQuaternion_CVector3(this.nativeObject.pointer, qParamValue, transParamValue);
	}
	native private void toRotationTranslation_CQuaternion_CVector3(long pNativeObject, long q, long translation);
	//// Convert a dual quaternion into its two components, a EarthView::World::Spatial::Math::CQuaternion representing the rotation and a EarthView::World::Spatial::Math::CVector3 representing the translation
	public void toRotationTranslation(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.spatial.math.Vector3 translation)
	{
		long qParamValue = q.nativeObject.pointer;
		long translationParamValue = translation.nativeObject.pointer;
		toRotationTranslation_CQuaternion_CVector3(this.nativeObject.pointer, qParamValue, translationParamValue);
	}
	native private void fromTransformationMatrix_CMatrix4(long pNativeObject, long kTrans);
	//// Construct a dual quaternion from a 4x4 transformation matrix
	public void fromTransformationMatrix(com.earthview.world.spatial.math.Matrix4 kTrans)
	{
		long kTransParamValue = kTrans.nativeObject.pointer;
		fromTransformationMatrix_CMatrix4(this.nativeObject.pointer, kTransParamValue);
	}
	native private void toTransformationMatrix_CMatrix4(long pNativeObject, long kTrans);
	//// Convert a dual quaternion to a 4x4 transformation matrix
	public void toTransformationMatrix(com.earthview.world.spatial.math.Matrix4 kTrans)
	{
		long kTransParamValue = kTrans.nativeObject.pointer;
		toTransformationMatrix_CMatrix4(this.nativeObject.pointer, kTransParamValue);
	}
	native private double get_x_void(long pNativeObject);
	public double get_x()
	{
		double jniValue = get_x_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x_Real (long pNativeObject, double value);
	public void set_x(double x)
	{
		double xParamValue = x;
		
		set_x_Real(this.nativeObject.pointer, xParamValue);
	}
	
	native private double get_y_void(long pNativeObject);
	public double get_y()
	{
		double jniValue = get_y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y_Real (long pNativeObject, double value);
	public void set_y(double y)
	{
		double yParamValue = y;
		
		set_y_Real(this.nativeObject.pointer, yParamValue);
	}
	
	native private double get_z_void(long pNativeObject);
	public double get_z()
	{
		double jniValue = get_z_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z_Real (long pNativeObject, double value);
	public void set_z(double z)
	{
		double zParamValue = z;
		
		set_z_Real(this.nativeObject.pointer, zParamValue);
	}
	
	native private double get_dw_void(long pNativeObject);
	public double get_dw()
	{
		double jniValue = get_dw_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dw_Real (long pNativeObject, double value);
	public void set_dw(double dw)
	{
		double dwParamValue = dw;
		
		set_dw_Real(this.nativeObject.pointer, dwParamValue);
	}
	
	native private double get_dx_void(long pNativeObject);
	public double get_dx()
	{
		double jniValue = get_dx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dx_Real (long pNativeObject, double value);
	public void set_dx(double dx)
	{
		double dxParamValue = dx;
		
		set_dx_Real(this.nativeObject.pointer, dxParamValue);
	}
	
	native private double get_dy_void(long pNativeObject);
	public double get_dy()
	{
		double jniValue = get_dy_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dy_Real (long pNativeObject, double value);
	public void set_dy(double dy)
	{
		double dyParamValue = dy;
		
		set_dy_Real(this.nativeObject.pointer, dyParamValue);
	}
	
	native private double get_dz_void(long pNativeObject);
	public double get_dz()
	{
		double jniValue = get_dz_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dz_Real (long pNativeObject, double value);
	public void set_dz(double dz)
	{
		double dzParamValue = dz;
		
		set_dz_Real(this.nativeObject.pointer, dzParamValue);
	}
	
	native private double get_w_void(long pNativeObject);
	public double get_w()
	{
		double jniValue = get_w_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_w_Real (long pNativeObject, double value);
	public void set_w(double w)
	{
		double wParamValue = w;
		
		set_w_Real(this.nativeObject.pointer, wParamValue);
	}
	
	public DualQuaternion(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DualQuaternion(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DualQuaternion fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DualQuaternion obj = null;
 		if(baseObj instanceof DualQuaternion)
		{
			obj = (DualQuaternion)baseObj;
		} else {
			obj = new DualQuaternion(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDualQuaternion");
			obj.increaseCast();
		}

		return obj;
	}
}
