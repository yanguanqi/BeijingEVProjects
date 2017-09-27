package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LongCircleAlgori extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CLongCircleAlgori", new LongCircleAlgoriClassFactory());
	}

	public LongCircleAlgori() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLongCircleAlgori", null);
	}

	native private void setLongCircle_CPoint_ev_real64_CPoint_ev_real64(long pNativeObject, long center1, double radius1, long center2, double radius2);
	public void setLongCircle(com.earthview.world.spatial.geometry.Point center1, double radius1, com.earthview.world.spatial.geometry.Point center2, double radius2)
	{
		long center1ParamValue = (center1 == null ? 0L : center1.nativeObject.pointer);
		double radius1ParamValue = radius1;
		long center2ParamValue = (center2 == null ? 0L : center2.nativeObject.pointer);
		double radius2ParamValue = radius2;
		setLongCircle_CPoint_ev_real64_CPoint_ev_real64(this.nativeObject.pointer, center1ParamValue, radius1ParamValue, center2ParamValue, radius2ParamValue);
	}
	native private void setLongCircle_CCurveRing(long pNativeObject, long ring);
	public void setLongCircle(com.earthview.world.spatial.geometry.CurveRing ring)
	{
		long ringParamValue = (ring == null ? 0L : ring.nativeObject.pointer);
		setLongCircle_CCurveRing(this.nativeObject.pointer, ringParamValue);
	}
	native private long getGeometry_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Igeometry getGeometry()
	{
		long returnValue = getGeometry_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private double getFirstRadius_void(long pNativeObject);
	public double getFirstRadius()
	{
		double returnValue = getFirstRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSecondRadius_void(long pNativeObject);
	public double getSecondRadius()
	{
		double returnValue = getSecondRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFirstPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getFirstPoint()
	{
		long returnValue = getFirstPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getSecondPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getSecondPoint()
	{
		long returnValue = getSecondPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getThirdPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getThirdPoint()
	{
		long returnValue = getThirdPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getForthPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getForthPoint()
	{
		long returnValue = getForthPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	public LongCircleAlgori(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LongCircleAlgori(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LongCircleAlgori fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LongCircleAlgori obj = null;
 		if(baseObj instanceof LongCircleAlgori)
		{
			obj = (LongCircleAlgori)baseObj;
		} else {
			obj = new LongCircleAlgori(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLongCircleAlgori");
			obj.increaseCast();
		}

		return obj;
	}
}
