package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画的值管理动画的值类型
 */
public class AnimableValue extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimableValue", new AnimableValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimableValueProxy", new AnimableValueClassFactory());
	}

	public enum ValueType implements INativeEnum<ValueType> {
		INT(ValueTypeHelper.ENUM_VALUES[0]),
		REAL(ValueTypeHelper.ENUM_VALUES[1]),
		VECTOR2(ValueTypeHelper.ENUM_VALUES[2]),
		VECTOR3(ValueTypeHelper.ENUM_VALUES[3]),
		VECTOR4(ValueTypeHelper.ENUM_VALUES[4]),
		QUATERNION(ValueTypeHelper.ENUM_VALUES[5]),
		COLOUR(ValueTypeHelper.ENUM_VALUES[6]),
		RADIAN(ValueTypeHelper.ENUM_VALUES[7]),
		DEGREE(ValueTypeHelper.ENUM_VALUES[8]);
		private int value;
		ValueType(int i) {
			this.value = i;
		}
		public ValueType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ValueType toEnum(int retval) {
			if(retval == INT.value){
				return INT;
			}
			else if(retval == REAL.value){
				return REAL;
			}
			else if(retval == VECTOR2.value){
				return VECTOR2;
			}
			else if(retval == VECTOR3.value){
				return VECTOR3;
			}
			else if(retval == VECTOR4.value){
				return VECTOR4;
			}
			else if(retval == QUATERNION.value){
				return QUATERNION;
			}
			else if(retval == COLOUR.value){
				return COLOUR;
			}
			else if(retval == RADIAN.value){
				return RADIAN;
			}
			else if(retval == DEGREE.value){
				return DEGREE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ValueTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  void setAsBaseValue_ev_int32_callback(int val)
	{
		int valParamValue = val;
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_ev_int32(long pNativeObject, int val);
	/**
	 * 设置动画基值
	 * @param val 动画的值int32
	 */
	public void setAsBaseValue(int val)
	{
		int valParamValue = val;
		setAsBaseValue_ev_int32(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_ev_int32_NoVirtual(long pNativeObject, int val);
	protected void setAsBaseValue_NoVirtual(int val)
	{
		int valParamValue = val;
		setAsBaseValue_ev_int32_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_Real_callback(double val)
	{
		double valParamValue = val;
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_Real(long pNativeObject, double val);
	/**
	 * 设置动画基值
	 * @param val 动画的值real
	 */
	public void setAsBaseValue(double val)
	{
		double valParamValue = val;
		setAsBaseValue_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_Real_NoVirtual(long pNativeObject, double val);
	protected void setAsBaseValue_NoVirtual(double val)
	{
		double valParamValue = val;
		setAsBaseValue_Real_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CVector2_callback(long val)
	{
		com.earthview.world.spatial.math.Vector2 valParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector2)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CVector2(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值vactor2
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector2(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CVector2_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector2_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CVector3_callback(long val)
	{
		com.earthview.world.spatial.math.Vector3 valParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector3)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CVector3(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值vector3
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CVector3_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector3_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CVector4_callback(long val)
	{
		com.earthview.world.spatial.math.Vector4 valParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector4)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CVector4(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值vector4
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector4(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CVector4_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CVector4_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CQuaternion_callback(long val)
	{
		com.earthview.world.spatial.math.Quaternion valParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Quaternion)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CQuaternion(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值quaternion
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CQuaternion(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CQuaternion_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CQuaternion_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CColourValue_callback(long val)
	{
		com.earthview.world.graphic.ColourValue valParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.graphic.ColourValue)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CColourValue(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值colovalue
	 */
	public void setAsBaseValue(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CColourValue_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CColourValue_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CRadian_callback(long val)
	{
		com.earthview.world.spatial.math.Radian valParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Radian)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CRadian(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值radian
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CRadian(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CRadian_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CRadian_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setAsBaseValue_CDegree_callback(long val)
	{
		com.earthview.world.spatial.math.Degree valParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Degree)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAsBaseValue(valParamValue);
	}

	native private void setAsBaseValue_CDegree(long pNativeObject, long val);
	/**
	 * 设置动画基值
	 * @param val 动画的值degree
	 */
	public void setAsBaseValue(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CDegree(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBaseValue_CDegree_NoVirtual(long pNativeObject, long val);
	protected void setAsBaseValue_NoVirtual(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAsBaseValue_CDegree_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	/**
	 * 构造函数
	 * @param t 动画的值类型
	 */
	public AnimableValue(com.earthview.world.graphic.AnimableValue.ValueType t) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tPtr = new BasePointer(t);
		list.add("t", tPtr.get());
		Create("JCAnimableValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimableValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获得动画的值类型
	 * @param  
	 * @return 动画的值类型
	 */
	public com.earthview.world.graphic.AnimableValue.ValueType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.AnimableValue.ValueType.toEnum(returnValue);
	}
	protected  void setCurrentStateAsBaseValue_void_callback()
	{
		setCurrentStateAsBaseValue();
	}

	native private void setCurrentStateAsBaseValue_void(long pNativeObject);
	/**
	 * 在数值动画中设置当前值类型为基值类型
	 * @param  
	 * @return 动画的值类型
	 */
	public void setCurrentStateAsBaseValue()
	{
		setCurrentStateAsBaseValue_void(this.nativeObject.pointer);
	}
	native private void setCurrentStateAsBaseValue_void_NoVirtual(long pNativeObject);
	protected void setCurrentStateAsBaseValue_NoVirtual()
	{
		setCurrentStateAsBaseValue_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setValue_ev_int32_callback(int val)
	{
		int valParamValue = val;
		setValue(valParamValue);
	}

	native private void setValue_ev_int32(long pNativeObject, int val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(int val)
	{
		int valParamValue = val;
		setValue_ev_int32(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_ev_int32_NoVirtual(long pNativeObject, int val);
	protected void setValue_NoVirtual(int val)
	{
		int valParamValue = val;
		setValue_ev_int32_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_Real_callback(double val)
	{
		double valParamValue = val;
		setValue(valParamValue);
	}

	native private void setValue_Real(long pNativeObject, double val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(double val)
	{
		double valParamValue = val;
		setValue_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_Real_NoVirtual(long pNativeObject, double val);
	protected void setValue_NoVirtual(double val)
	{
		double valParamValue = val;
		setValue_Real_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CVector2_callback(long val)
	{
		com.earthview.world.spatial.math.Vector2 valParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector2)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CVector2(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector2(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CVector2_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector2_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CVector3_callback(long val)
	{
		com.earthview.world.spatial.math.Vector3 valParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector3)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CVector3(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CVector3_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector3_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CVector4_callback(long val)
	{
		com.earthview.world.spatial.math.Vector4 valParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector4)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CVector4(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector4(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CVector4_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CVector4_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CQuaternion_callback(long val)
	{
		com.earthview.world.spatial.math.Quaternion valParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Quaternion)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CQuaternion(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CQuaternion(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CQuaternion_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CQuaternion_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CColourValue_callback(long val)
	{
		com.earthview.world.graphic.ColourValue valParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.graphic.ColourValue)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CColourValue(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CColourValue_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CColourValue_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CRadian_callback(long val)
	{
		com.earthview.world.spatial.math.Radian valParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Radian)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CRadian(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CRadian(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CRadian_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CRadian_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void setValue_CDegree_callback(long val)
	{
		com.earthview.world.spatial.math.Degree valParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Degree)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setValue(valParamValue);
	}

	native private void setValue_CDegree(long pNativeObject, long val);
	/**
	 * 设置动画值
	 * @param  
	 */
	public void setValue(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CDegree(this.nativeObject.pointer, valParamValue);
	}
	native private void setValue_CDegree_NoVirtual(long pNativeObject, long val);
	protected void setValue_NoVirtual(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		setValue_CDegree_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void resetToBaseValue_void_callback()
	{
		resetToBaseValue();
	}

	native private void resetToBaseValue_void(long pNativeObject);
	/**
	 * 重新设置动画的值为动画基值
	 * @param  
	 */
	public void resetToBaseValue()
	{
		resetToBaseValue_void(this.nativeObject.pointer);
	}
	native private void resetToBaseValue_void_NoVirtual(long pNativeObject);
	protected void resetToBaseValue_NoVirtual()
	{
		resetToBaseValue_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void applyDeltaValue_ev_int32_callback(int val)
	{
		int valParamValue = val;
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_ev_int32(long pNativeObject, int val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(int val)
	{
		int valParamValue = val;
		applyDeltaValue_ev_int32(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_ev_int32_NoVirtual(long pNativeObject, int val);
	protected void applyDeltaValue_NoVirtual(int val)
	{
		int valParamValue = val;
		applyDeltaValue_ev_int32_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_Real_callback(double val)
	{
		double valParamValue = val;
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_Real(long pNativeObject, double val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(double val)
	{
		double valParamValue = val;
		applyDeltaValue_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_Real_NoVirtual(long pNativeObject, double val);
	protected void applyDeltaValue_NoVirtual(double val)
	{
		double valParamValue = val;
		applyDeltaValue_Real_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CVector2_callback(long val)
	{
		com.earthview.world.spatial.math.Vector2 valParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector2)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CVector2(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector2(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CVector2_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector2_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CVector3_callback(long val)
	{
		com.earthview.world.spatial.math.Vector3 valParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector3)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CVector3(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CVector3_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector3_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CVector4_callback(long val)
	{
		com.earthview.world.spatial.math.Vector4 valParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Vector4)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CVector4(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector4(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CVector4_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CVector4_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CQuaternion_callback(long val)
	{
		com.earthview.world.spatial.math.Quaternion valParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Quaternion)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CQuaternion(long pNativeObject, long val);
	//// Apply delta value
	public void applyDeltaValue(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CQuaternion(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CQuaternion_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CQuaternion_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CColourValue_callback(long val)
	{
		com.earthview.world.graphic.ColourValue valParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.graphic.ColourValue)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CColourValue(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CColourValue_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CColourValue_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CDegree_callback(long val)
	{
		com.earthview.world.spatial.math.Degree valParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Degree)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CDegree(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CDegree(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CDegree_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Degree val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CDegree_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  void applyDeltaValue_CRadian_callback(long val)
	{
		com.earthview.world.spatial.math.Radian valParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.spatial.math.Radian)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		applyDeltaValue(valParamValue);
	}

	native private void applyDeltaValue_CRadian(long pNativeObject, long val);
	/**
	 * 应用增量数值
	 * @param  
	 */
	public void applyDeltaValue(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CRadian(this.nativeObject.pointer, valParamValue);
	}
	native private void applyDeltaValue_CRadian_NoVirtual(long pNativeObject, long val);
	protected void applyDeltaValue_NoVirtual(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		applyDeltaValue_CRadian_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	public AnimableValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimableValue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setAsBaseValue_ev_int32(long pNativeObject, String method);
	native protected void register_setAsBaseValue_Real(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CVector2(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CVector3(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CVector4(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CQuaternion(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CColourValue(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CRadian(long pNativeObject, String method);
	native protected void register_setAsBaseValue_CDegree(long pNativeObject, String method);
	native protected void register_setCurrentStateAsBaseValue_void(long pNativeObject, String method);
	native protected void register_setValue_ev_int32(long pNativeObject, String method);
	native protected void register_setValue_Real(long pNativeObject, String method);
	native protected void register_setValue_CVector2(long pNativeObject, String method);
	native protected void register_setValue_CVector3(long pNativeObject, String method);
	native protected void register_setValue_CVector4(long pNativeObject, String method);
	native protected void register_setValue_CQuaternion(long pNativeObject, String method);
	native protected void register_setValue_CColourValue(long pNativeObject, String method);
	native protected void register_setValue_CRadian(long pNativeObject, String method);
	native protected void register_setValue_CDegree(long pNativeObject, String method);
	native protected void register_resetToBaseValue_void(long pNativeObject, String method);
	native protected void register_applyDeltaValue_ev_int32(long pNativeObject, String method);
	native protected void register_applyDeltaValue_Real(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CVector2(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CVector3(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CVector4(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CQuaternion(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CColourValue(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CDegree(long pNativeObject, String method);
	native protected void register_applyDeltaValue_CRadian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setAsBaseValue_ev_int32(this.nativeObject.pointer, "setAsBaseValue_ev_int32_callback");
			this.register_setAsBaseValue_Real(this.nativeObject.pointer, "setAsBaseValue_Real_callback");
			this.register_setAsBaseValue_CVector2(this.nativeObject.pointer, "setAsBaseValue_CVector2_callback");
			this.register_setAsBaseValue_CVector3(this.nativeObject.pointer, "setAsBaseValue_CVector3_callback");
			this.register_setAsBaseValue_CVector4(this.nativeObject.pointer, "setAsBaseValue_CVector4_callback");
			this.register_setAsBaseValue_CQuaternion(this.nativeObject.pointer, "setAsBaseValue_CQuaternion_callback");
			this.register_setAsBaseValue_CColourValue(this.nativeObject.pointer, "setAsBaseValue_CColourValue_callback");
			this.register_setAsBaseValue_CRadian(this.nativeObject.pointer, "setAsBaseValue_CRadian_callback");
			this.register_setAsBaseValue_CDegree(this.nativeObject.pointer, "setAsBaseValue_CDegree_callback");
			this.register_setCurrentStateAsBaseValue_void(this.nativeObject.pointer, "setCurrentStateAsBaseValue_void_callback");
			this.register_setValue_ev_int32(this.nativeObject.pointer, "setValue_ev_int32_callback");
			this.register_setValue_Real(this.nativeObject.pointer, "setValue_Real_callback");
			this.register_setValue_CVector2(this.nativeObject.pointer, "setValue_CVector2_callback");
			this.register_setValue_CVector3(this.nativeObject.pointer, "setValue_CVector3_callback");
			this.register_setValue_CVector4(this.nativeObject.pointer, "setValue_CVector4_callback");
			this.register_setValue_CQuaternion(this.nativeObject.pointer, "setValue_CQuaternion_callback");
			this.register_setValue_CColourValue(this.nativeObject.pointer, "setValue_CColourValue_callback");
			this.register_setValue_CRadian(this.nativeObject.pointer, "setValue_CRadian_callback");
			this.register_setValue_CDegree(this.nativeObject.pointer, "setValue_CDegree_callback");
			this.register_resetToBaseValue_void(this.nativeObject.pointer, "resetToBaseValue_void_callback");
			this.register_applyDeltaValue_ev_int32(this.nativeObject.pointer, "applyDeltaValue_ev_int32_callback");
			this.register_applyDeltaValue_Real(this.nativeObject.pointer, "applyDeltaValue_Real_callback");
			this.register_applyDeltaValue_CVector2(this.nativeObject.pointer, "applyDeltaValue_CVector2_callback");
			this.register_applyDeltaValue_CVector3(this.nativeObject.pointer, "applyDeltaValue_CVector3_callback");
			this.register_applyDeltaValue_CVector4(this.nativeObject.pointer, "applyDeltaValue_CVector4_callback");
			this.register_applyDeltaValue_CQuaternion(this.nativeObject.pointer, "applyDeltaValue_CQuaternion_callback");
			this.register_applyDeltaValue_CColourValue(this.nativeObject.pointer, "applyDeltaValue_CColourValue_callback");
			this.register_applyDeltaValue_CDegree(this.nativeObject.pointer, "applyDeltaValue_CDegree_callback");
			this.register_applyDeltaValue_CRadian(this.nativeObject.pointer, "applyDeltaValue_CRadian_callback");
		}
	}
	
	public static AnimableValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimableValue obj = null;
 		if(baseObj instanceof AnimableValue)
		{
			obj = (AnimableValue)baseObj;
		} else {
			obj = new AnimableValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimableValue");
			obj.increaseCast();
		}

		return obj;
	}
}
