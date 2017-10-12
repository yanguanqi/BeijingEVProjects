package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
///	界面上制定的shape文件中的部分字段
///<summary>
public class ShapeAssignedFields extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields", new ShapeAssignedFieldsClassFactory());
	}

	native private String get__name_void(long pNativeObject);
	public String get__name()
	{
		String jniValue = get__name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__name_EVString (long pNativeObject, String value);
	public void set__name(String _name)
	{
		String _nameParamValue = _name;
		
		set__name_EVString(this.nativeObject.pointer, _nameParamValue);
	}
	
	native private int get__srsID_void(long pNativeObject);
	public int get__srsID()
	{
		int jniValue = get__srsID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__srsID_ev_int32 (long pNativeObject, int value);
	public void set__srsID(int _srsID)
	{
		int _srsIDParamValue = _srsID;
		
		set__srsID_ev_int32(this.nativeObject.pointer, _srsIDParamValue);
	}
	
	native private boolean get__isRecursionPath_void(long pNativeObject);
	public boolean get__isRecursionPath()
	{
		boolean jniValue = get__isRecursionPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__isRecursionPath_ev_bool (long pNativeObject, boolean value);
	public void set__isRecursionPath(boolean _isRecursionPath)
	{
		boolean _isRecursionPathParamValue = _isRecursionPath;
		
		set__isRecursionPath_ev_bool(this.nativeObject.pointer, _isRecursionPathParamValue);
	}
	
	native private long get__scale_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.ScaleField get__scale()
	{
		long jniValue = get__scale_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataexchange.ScaleField __returnValue = new com.earthview.world.spatial3d.dataexchange.ScaleField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CScaleField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.ScaleField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CScaleField");
		}
		return __returnValue;
	}
	
	native private void set__scale_CScaleField (long pNativeObject, long value);
	public void set__scale(com.earthview.world.spatial3d.dataexchange.ScaleField _scale)
	{
		long _scaleParamValue = _scale.nativeObject.pointer;
		
		set__scale_CScaleField(this.nativeObject.pointer, _scaleParamValue);
	}
	
	native private long get__offset_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.ScaleField get__offset()
	{
		long jniValue = get__offset_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataexchange.ScaleField __returnValue = new com.earthview.world.spatial3d.dataexchange.ScaleField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CScaleField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.ScaleField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CScaleField");
		}
		return __returnValue;
	}
	
	native private void set__offset_CScaleField (long pNativeObject, long value);
	public void set__offset(com.earthview.world.spatial3d.dataexchange.ScaleField _offset)
	{
		long _offsetParamValue = _offset.nativeObject.pointer;
		
		set__offset_CScaleField(this.nativeObject.pointer, _offsetParamValue);
	}
	
	native private long get__quation_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.QuationField get__quation()
	{
		long jniValue = get__quation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataexchange.QuationField __returnValue = new com.earthview.world.spatial3d.dataexchange.QuationField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuationField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.QuationField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuationField");
		}
		return __returnValue;
	}
	
	native private void set__quation_CQuationField (long pNativeObject, long value);
	public void set__quation(com.earthview.world.spatial3d.dataexchange.QuationField _quation)
	{
		long _quationParamValue = _quation.nativeObject.pointer;
		
		set__quation_CQuationField(this.nativeObject.pointer, _quationParamValue);
	}
	
	native private long get__skew_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataexchange.SkewField get__skew()
	{
		long jniValue = get__skew_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.dataexchange.SkewField __returnValue = new com.earthview.world.spatial3d.dataexchange.SkewField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CSkewField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.SkewField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSkewField");
		}
		return __returnValue;
	}
	
	native private void set__skew_CSkewField (long pNativeObject, long value);
	public void set__skew(com.earthview.world.spatial3d.dataexchange.SkewField _skew)
	{
		long _skewParamValue = _skew.nativeObject.pointer;
		
		set__skew_CSkewField(this.nativeObject.pointer, _skewParamValue);
	}
	
	///界面指定的shape文件中的斜切字段
	public ShapeAssignedFields() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CShapeAssignedFields", null);
	}

	public ShapeAssignedFields(com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields robj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer robjPtr = new BasePointer(robj);
		list.add("robj", robjPtr.get());
		Create("CShapeAssignedFields", list);
	}

	native private long OperatorAssign_CShapeAssignedFields(long pNativeObject, long robj);
	public com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields OperatorAssign(com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields robj)
	{
		long robjParamValue = robj.nativeObject.pointer;
		long returnValue = OperatorAssign_CShapeAssignedFields(this.nativeObject.pointer, robjParamValue);
		com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields __returnValue = new com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields(CreatedWhenConstruct.CWC_NotToCreate, "CShapeAssignedFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShapeAssignedFields");
		}
		return __returnValue;
	}
	public ShapeAssignedFields(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShapeAssignedFields(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShapeAssignedFields fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShapeAssignedFields obj = null;
 		if(baseObj instanceof ShapeAssignedFields)
		{
			obj = (ShapeAssignedFields)baseObj;
		} else {
			obj = new ShapeAssignedFields(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShapeAssignedFields");
			obj.increaseCast();
		}

		return obj;
	}
}
