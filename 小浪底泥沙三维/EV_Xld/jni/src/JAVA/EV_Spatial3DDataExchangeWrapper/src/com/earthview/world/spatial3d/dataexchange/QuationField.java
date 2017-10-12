package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///四元数 字段和值
public class QuationField extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CQuationField", new QuationFieldClassFactory());
	}

	native private String get__XValue_void(long pNativeObject);
	public String get__XValue()
	{
		String jniValue = get__XValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__XValue_EVString (long pNativeObject, String value);
	public void set__XValue(String _XValue)
	{
		String _XValueParamValue = _XValue;
		
		set__XValue_EVString(this.nativeObject.pointer, _XValueParamValue);
	}
	
	native private String get__YValue_void(long pNativeObject);
	public String get__YValue()
	{
		String jniValue = get__YValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__YValue_EVString (long pNativeObject, String value);
	public void set__YValue(String _YValue)
	{
		String _YValueParamValue = _YValue;
		
		set__YValue_EVString(this.nativeObject.pointer, _YValueParamValue);
	}
	
	native private String get__ZValue_void(long pNativeObject);
	public String get__ZValue()
	{
		String jniValue = get__ZValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__ZValue_EVString (long pNativeObject, String value);
	public void set__ZValue(String _ZValue)
	{
		String _ZValueParamValue = _ZValue;
		
		set__ZValue_EVString(this.nativeObject.pointer, _ZValueParamValue);
	}
	
	native private String get__fieldQuaternionX_void(long pNativeObject);
	public String get__fieldQuaternionX()
	{
		String jniValue = get__fieldQuaternionX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldQuaternionX_EVString (long pNativeObject, String value);
	public void set__fieldQuaternionX(String _fieldQuaternionX)
	{
		String _fieldQuaternionXParamValue = _fieldQuaternionX;
		
		set__fieldQuaternionX_EVString(this.nativeObject.pointer, _fieldQuaternionXParamValue);
	}
	
	native private String get__fieldQuaternionY_void(long pNativeObject);
	public String get__fieldQuaternionY()
	{
		String jniValue = get__fieldQuaternionY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldQuaternionY_EVString (long pNativeObject, String value);
	public void set__fieldQuaternionY(String _fieldQuaternionY)
	{
		String _fieldQuaternionYParamValue = _fieldQuaternionY;
		
		set__fieldQuaternionY_EVString(this.nativeObject.pointer, _fieldQuaternionYParamValue);
	}
	
	native private String get__fieldQuaternionZ_void(long pNativeObject);
	public String get__fieldQuaternionZ()
	{
		String jniValue = get__fieldQuaternionZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldQuaternionZ_EVString (long pNativeObject, String value);
	public void set__fieldQuaternionZ(String _fieldQuaternionZ)
	{
		String _fieldQuaternionZParamValue = _fieldQuaternionZ;
		
		set__fieldQuaternionZ_EVString(this.nativeObject.pointer, _fieldQuaternionZParamValue);
	}
	
	native private String get__fieldQuaternionW_void(long pNativeObject);
	public String get__fieldQuaternionW()
	{
		String jniValue = get__fieldQuaternionW_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldQuaternionW_EVString (long pNativeObject, String value);
	public void set__fieldQuaternionW(String _fieldQuaternionW)
	{
		String _fieldQuaternionWParamValue = _fieldQuaternionW;
		
		set__fieldQuaternionW_EVString(this.nativeObject.pointer, _fieldQuaternionWParamValue);
	}
	
	native private String get__fieldRotationAxisX_void(long pNativeObject);
	public String get__fieldRotationAxisX()
	{
		String jniValue = get__fieldRotationAxisX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationAxisX_EVString (long pNativeObject, String value);
	public void set__fieldRotationAxisX(String _fieldRotationAxisX)
	{
		String _fieldRotationAxisXParamValue = _fieldRotationAxisX;
		
		set__fieldRotationAxisX_EVString(this.nativeObject.pointer, _fieldRotationAxisXParamValue);
	}
	
	native private String get__fieldRotationAxisY_void(long pNativeObject);
	public String get__fieldRotationAxisY()
	{
		String jniValue = get__fieldRotationAxisY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationAxisY_EVString (long pNativeObject, String value);
	public void set__fieldRotationAxisY(String _fieldRotationAxisY)
	{
		String _fieldRotationAxisYParamValue = _fieldRotationAxisY;
		
		set__fieldRotationAxisY_EVString(this.nativeObject.pointer, _fieldRotationAxisYParamValue);
	}
	
	native private String get__fieldRotationAxisZ_void(long pNativeObject);
	public String get__fieldRotationAxisZ()
	{
		String jniValue = get__fieldRotationAxisZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationAxisZ_EVString (long pNativeObject, String value);
	public void set__fieldRotationAxisZ(String _fieldRotationAxisZ)
	{
		String _fieldRotationAxisZParamValue = _fieldRotationAxisZ;
		
		set__fieldRotationAxisZ_EVString(this.nativeObject.pointer, _fieldRotationAxisZParamValue);
	}
	
	native private String get__fieldRotationVectorX_void(long pNativeObject);
	public String get__fieldRotationVectorX()
	{
		String jniValue = get__fieldRotationVectorX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationVectorX_EVString (long pNativeObject, String value);
	public void set__fieldRotationVectorX(String _fieldRotationVectorX)
	{
		String _fieldRotationVectorXParamValue = _fieldRotationVectorX;
		
		set__fieldRotationVectorX_EVString(this.nativeObject.pointer, _fieldRotationVectorXParamValue);
	}
	
	native private String get__fieldRotationVectorY_void(long pNativeObject);
	public String get__fieldRotationVectorY()
	{
		String jniValue = get__fieldRotationVectorY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationVectorY_EVString (long pNativeObject, String value);
	public void set__fieldRotationVectorY(String _fieldRotationVectorY)
	{
		String _fieldRotationVectorYParamValue = _fieldRotationVectorY;
		
		set__fieldRotationVectorY_EVString(this.nativeObject.pointer, _fieldRotationVectorYParamValue);
	}
	
	native private String get__fieldRotationVectorZ_void(long pNativeObject);
	public String get__fieldRotationVectorZ()
	{
		String jniValue = get__fieldRotationVectorZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationVectorZ_EVString (long pNativeObject, String value);
	public void set__fieldRotationVectorZ(String _fieldRotationVectorZ)
	{
		String _fieldRotationVectorZParamValue = _fieldRotationVectorZ;
		
		set__fieldRotationVectorZ_EVString(this.nativeObject.pointer, _fieldRotationVectorZParamValue);
	}
	
	native private String get__fieldRotationAngle_void(long pNativeObject);
	public String get__fieldRotationAngle()
	{
		String jniValue = get__fieldRotationAngle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldRotationAngle_EVString (long pNativeObject, String value);
	public void set__fieldRotationAngle(String _fieldRotationAngle)
	{
		String _fieldRotationAngleParamValue = _fieldRotationAngle;
		
		set__fieldRotationAngle_EVString(this.nativeObject.pointer, _fieldRotationAngleParamValue);
	}
	
	native private String get__RadianOrDegree_void(long pNativeObject);
	public String get__RadianOrDegree()
	{
		String jniValue = get__RadianOrDegree_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__RadianOrDegree_EVString (long pNativeObject, String value);
	public void set__RadianOrDegree(String _RadianOrDegree)
	{
		String _RadianOrDegreeParamValue = _RadianOrDegree;
		
		set__RadianOrDegree_EVString(this.nativeObject.pointer, _RadianOrDegreeParamValue);
	}
	
	public QuationField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CQuationField", null);
	}

	public QuationField(com.earthview.world.spatial3d.dataexchange.QuationField rObj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rObjPtr = new BasePointer(rObj);
		list.add("rObj", rObjPtr.get());
		Create("CQuationField", list);
	}

	native private long OperatorAssign_CQuationField(long pNativeObject, long rObj);
	public com.earthview.world.spatial3d.dataexchange.QuationField OperatorAssign(com.earthview.world.spatial3d.dataexchange.QuationField rObj)
	{
		long rObjParamValue = rObj.nativeObject.pointer;
		long returnValue = OperatorAssign_CQuationField(this.nativeObject.pointer, rObjParamValue);
		com.earthview.world.spatial3d.dataexchange.QuationField __returnValue = new com.earthview.world.spatial3d.dataexchange.QuationField(CreatedWhenConstruct.CWC_NotToCreate, "CQuationField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.QuationField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuationField");
		}
		return __returnValue;
	}
	public QuationField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public QuationField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static QuationField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		QuationField obj = null;
 		if(baseObj instanceof QuationField)
		{
			obj = (QuationField)baseObj;
		} else {
			obj = new QuationField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CQuationField");
			obj.increaseCast();
		}

		return obj;
	}
}
