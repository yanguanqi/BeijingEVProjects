package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleField extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CScaleField", new ScaleFieldClassFactory());
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
	
	native private String get__fieldX_void(long pNativeObject);
	public String get__fieldX()
	{
		String jniValue = get__fieldX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldX_EVString (long pNativeObject, String value);
	public void set__fieldX(String _fieldX)
	{
		String _fieldXParamValue = _fieldX;
		
		set__fieldX_EVString(this.nativeObject.pointer, _fieldXParamValue);
	}
	
	native private String get__fieldY_void(long pNativeObject);
	public String get__fieldY()
	{
		String jniValue = get__fieldY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldY_EVString (long pNativeObject, String value);
	public void set__fieldY(String _fieldY)
	{
		String _fieldYParamValue = _fieldY;
		
		set__fieldY_EVString(this.nativeObject.pointer, _fieldYParamValue);
	}
	
	native private String get__fieldZ_void(long pNativeObject);
	public String get__fieldZ()
	{
		String jniValue = get__fieldZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__fieldZ_EVString (long pNativeObject, String value);
	public void set__fieldZ(String _fieldZ)
	{
		String _fieldZParamValue = _fieldZ;
		
		set__fieldZ_EVString(this.nativeObject.pointer, _fieldZParamValue);
	}
	
	public ScaleField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScaleField", null);
	}

	public ScaleField(com.earthview.world.spatial3d.dataexchange.ScaleField rObj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rObjPtr = new BasePointer(rObj);
		list.add("rObj", rObjPtr.get());
		Create("CScaleField", list);
	}

	native private long OperatorAssign_CScaleField(long pNativeObject, long rObj);
	public com.earthview.world.spatial3d.dataexchange.ScaleField OperatorAssign(com.earthview.world.spatial3d.dataexchange.ScaleField rObj)
	{
		long rObjParamValue = rObj.nativeObject.pointer;
		long returnValue = OperatorAssign_CScaleField(this.nativeObject.pointer, rObjParamValue);
		com.earthview.world.spatial3d.dataexchange.ScaleField __returnValue = new com.earthview.world.spatial3d.dataexchange.ScaleField(CreatedWhenConstruct.CWC_NotToCreate, "CScaleField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.ScaleField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScaleField");
		}
		return __returnValue;
	}
	public ScaleField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScaleField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScaleField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScaleField obj = null;
 		if(baseObj instanceof ScaleField)
		{
			obj = (ScaleField)baseObj;
		} else {
			obj = new ScaleField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScaleField");
			obj.increaseCast();
		}

		return obj;
	}
}
