package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingPolygon extends com.earthview.world.spatial2d.controls.EditingSketch {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditingPolygon", new EditingPolygonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditingPolygonProxy", new EditingPolygonClassFactory());
	}

	public EditingPolygon(com.earthview.world.spatial2d.controls.GeometryEditor ref_editor) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_editorPtr = new BasePointer(ref_editor);
		list.add("ref_editor", ref_editorPtr.get());
		Create("JCEditingPolygonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EditingPolygon".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.EVGeometryType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
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
	native private long getGeometry_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getGeometry_NoVirtual()
	{
		long returnValue = getGeometry_void_NoVirtual(this.nativeObject.pointer);
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

	native private void finishPart_void(long pNativeObject);
	public void finishPart()
	{
		finishPart_void(this.nativeObject.pointer);
	}
	native private void finishPart_void_NoVirtual(long pNativeObject);
	protected void finishPart_NoVirtual()
	{
		finishPart_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void addPoint_CPoint(long pNativeObject, long pnt);
	public void addPoint(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		addPoint_CPoint(this.nativeObject.pointer, pntParamValue);
	}
	native private void addPoint_CPoint_NoVirtual(long pNativeObject, long pnt);
	protected void addPoint_NoVirtual(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		addPoint_CPoint_NoVirtual(this.nativeObject.pointer, pntParamValue);
	}

	public EditingPolygon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingPolygon(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 平移对象
	 * @param dx 平移在X轴上的偏移量
	 * @param cy 平移在Y轴上的偏移量
	 */
	public boolean translate(double dx, double dy)
	{
		return super.translate_NoVirtual(dx, dy);
	}
	/**
	 * 旋转对象
	 * @param ref_x 旋转参考点的X坐标
	 * @param ref_y 旋转参考点的Y坐标
	 * @param angle 旋转角度
	 */
	public boolean rotate(double x, double y, double angle)
	{
		return super.rotate_NoVirtual(x, y, angle);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getGeometry_void(long pNativeObject, String method);
	native protected void register_finishPart_void(long pNativeObject, String method);
	native protected void register_translate_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_rotate_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPoint_CPoint(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getGeometry_void(this.nativeObject.pointer, "getGeometry_void_callback");
			this.register_finishPart_void(this.nativeObject.pointer, "finishPart_void_callback");
			this.register_translate_ev_real64_ev_real64(this.nativeObject.pointer, "translate_ev_real64_ev_real64_callback");
			this.register_rotate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPoint_CPoint(this.nativeObject.pointer, "addPoint_CPoint_callback");
		}
	}
	
	public static EditingPolygon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingPolygon obj = null;
 		if(baseObj instanceof EditingPolygon)
		{
			obj = (EditingPolygon)baseObj;
		} else {
			obj = new EditingPolygon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditingPolygon");
			obj.increaseCast();
		}

		return obj;
	}
}
