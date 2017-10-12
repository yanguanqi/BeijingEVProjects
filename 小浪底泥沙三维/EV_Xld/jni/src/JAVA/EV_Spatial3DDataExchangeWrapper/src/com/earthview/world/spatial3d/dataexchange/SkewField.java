package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkewField extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CSkewField", new SkewFieldClassFactory());
	}

	native private String get__skewAxisX_void(long pNativeObject);
	public String get__skewAxisX()
	{
		String jniValue = get__skewAxisX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__skewAxisX_EVString (long pNativeObject, String value);
	public void set__skewAxisX(String _skewAxisX)
	{
		String _skewAxisXParamValue = _skewAxisX;
		
		set__skewAxisX_EVString(this.nativeObject.pointer, _skewAxisXParamValue);
	}
	
	native private String get__skewAxisY_void(long pNativeObject);
	public String get__skewAxisY()
	{
		String jniValue = get__skewAxisY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__skewAxisY_EVString (long pNativeObject, String value);
	public void set__skewAxisY(String _skewAxisY)
	{
		String _skewAxisYParamValue = _skewAxisY;
		
		set__skewAxisY_EVString(this.nativeObject.pointer, _skewAxisYParamValue);
	}
	
	native private String get__skewAxisZ_void(long pNativeObject);
	public String get__skewAxisZ()
	{
		String jniValue = get__skewAxisZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__skewAxisZ_EVString (long pNativeObject, String value);
	public void set__skewAxisZ(String _skewAxisZ)
	{
		String _skewAxisZParamValue = _skewAxisZ;
		
		set__skewAxisZ_EVString(this.nativeObject.pointer, _skewAxisZParamValue);
	}
	
	native private String get__skewAngle_void(long pNativeObject);
	public String get__skewAngle()
	{
		String jniValue = get__skewAngle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set__skewAngle_EVString (long pNativeObject, String value);
	public void set__skewAngle(String _skewAngle)
	{
		String _skewAngleParamValue = _skewAngle;
		
		set__skewAngle_EVString(this.nativeObject.pointer, _skewAngleParamValue);
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
	
	///单位是弧度还是角度
	public SkewField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSkewField", null);
	}

	public SkewField(com.earthview.world.spatial3d.dataexchange.SkewField rObj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rObjPtr = new BasePointer(rObj);
		list.add("rObj", rObjPtr.get());
		Create("CSkewField", list);
	}

	native private long OperatorAssign_CSkewField(long pNativeObject, long rObj);
	public com.earthview.world.spatial3d.dataexchange.SkewField OperatorAssign(com.earthview.world.spatial3d.dataexchange.SkewField rObj)
	{
		long rObjParamValue = rObj.nativeObject.pointer;
		long returnValue = OperatorAssign_CSkewField(this.nativeObject.pointer, rObjParamValue);
		com.earthview.world.spatial3d.dataexchange.SkewField __returnValue = new com.earthview.world.spatial3d.dataexchange.SkewField(CreatedWhenConstruct.CWC_NotToCreate, "CSkewField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.SkewField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkewField");
		}
		return __returnValue;
	}
	public SkewField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SkewField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SkewField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SkewField obj = null;
 		if(baseObj instanceof SkewField)
		{
			obj = (SkewField)baseObj;
		} else {
			obj = new SkewField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkewField");
			obj.increaseCast();
		}

		return obj;
	}
}
