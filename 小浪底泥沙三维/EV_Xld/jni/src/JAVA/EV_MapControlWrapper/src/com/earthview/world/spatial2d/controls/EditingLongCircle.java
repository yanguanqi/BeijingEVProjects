package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingLongCircle extends com.earthview.world.spatial2d.controls.EditingCurve {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditingLongCircle", new EditingLongCircleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditingLongCircleProxy", new EditingLongCircleClassFactory());
	}

	public EditingLongCircle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEditingLongCircleProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EditingLongCircle".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long newObject_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.EditingObject newObject()
	{
		long returnValue = newObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	native private long newObject_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.controls.EditingObject newObject_NoVirtual()
	{
		long returnValue = newObject_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.EditingObjectType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EditingObjectType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.controls.EditingObjectType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EditingObjectType.toEnum(returnValue);
	}

	native private long makeSample_CPoint_CPoint(long pNativeObject, long from, long to);
	public com.earthview.world.spatial.geometry.Igeometry makeSample(com.earthview.world.spatial.geometry.Point from, com.earthview.world.spatial.geometry.Point to)
	{
		long fromParamValue = from.nativeObject.pointer;
		long toParamValue = to.nativeObject.pointer;
		long returnValue = makeSample_CPoint_CPoint(this.nativeObject.pointer, fromParamValue, toParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long makeSample_CPoint_CPoint_NoVirtual(long pNativeObject, long from, long to);
	protected com.earthview.world.spatial.geometry.Igeometry makeSample_NoVirtual(com.earthview.world.spatial.geometry.Point from, com.earthview.world.spatial.geometry.Point to)
	{
		long fromParamValue = from.nativeObject.pointer;
		long toParamValue = to.nativeObject.pointer;
		long returnValue = makeSample_CPoint_CPoint_NoVirtual(this.nativeObject.pointer, fromParamValue, toParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private boolean isFine_void(long pNativeObject);
	public boolean isFine()
	{
		boolean returnValue = isFine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFine_void_NoVirtual(long pNativeObject);
	protected boolean isFine_NoVirtual()
	{
		boolean returnValue = isFine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isExcellent_void(long pNativeObject);
	public boolean isExcellent()
	{
		boolean returnValue = isExcellent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isExcellent_void_NoVirtual(long pNativeObject);
	protected boolean isExcellent_NoVirtual()
	{
		boolean returnValue = isExcellent_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public EditingLongCircle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingLongCircle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 新建一个原始对象(非克隆),**该类的派生类必须重新实现该方法**默认实现:返回空指针
	 * @return 对象生成的几何图形(内存由内部维护)
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometry()
	{
		return super.getGeometry_NoVirtual();
	}
	/**
	 * 对象中包含的顶点数量
	 * @return 顶点数量
	 */
	public int getPointCount()
	{
		return super.getPointCount_NoVirtual();
	}
	/**
	 * 获取指定索引处的顶点
	 * @param index 索引
	 * @param ok 返回是否成功获取
	 * @return 获取到的顶点
	 */
	public com.earthview.world.spatial.geometry.Point getPoint(int index, boolean ok)
	{
		return super.getPoint_NoVirtual(index, ok);
	}
	/**
	 * 获取指定索引处的顶点
	 * @param index 索引
	 * @param ok 返回是否成功获取
	 * @return 顶点的索引
	 */
	public int indexForPoint(com.earthview.world.spatial.geometry.Point pnt)
	{
		return super.indexForPoint_NoVirtual(pnt);
	}
	/**
	 * 获取第一个顶点,跟getPoint(0)的功能一样
	 * @param ok 返回是否成功获取
	 */
	public com.earthview.world.spatial.geometry.Point getFirstPoint(boolean ok)
	{
		return super.getFirstPoint_NoVirtual(ok);
	}
	/**
	 * 获取最后一个顶点,跟getPoint(getPointCount()-1)的功能是一样的
	 * @param ok 返回是否成功获取
	 */
	public com.earthview.world.spatial.geometry.Point getLastPoint(boolean ok)
	{
		return super.getLastPoint_NoVirtual(ok);
	}
	/**
	 * 获取中心点
	 * @param ok 返回是否成功获取
	 * @return 中心点
	 */
	public com.earthview.world.spatial.geometry.Point getCenterPoint(BooleanPointer ok)
	{
		return super.getCenterPoint_NoVirtual(ok);
	}
	/**
	 * 设置中心点
	 * @param point 中心点
	 */
	public void setCenterPoint(com.earthview.world.spatial.geometry.Point point)
	{
		super.setCenterPoint_NoVirtual(point);
	}
	/**
	 * 获取圆心角
	 * @param ok 返回是否成功获取
	 * @return 圆心角的值
	 */
	public double getCentralAngle(BooleanPointer ok)
	{
		return super.getCentralAngle_NoVirtual(ok);
	}
	/**
	 * 设置圆心角
	 * @param angle 圆心角的值
	 */
	public void setCentralAngle(double angle)
	{
		super.setCentralAngle_NoVirtual(angle);
	}
	/**
	 * 获取起始角
	 * @param ok 返回是否成功获取
	 * @return 起始角的值
	 */
	public double getStartAngle(BooleanPointer ok)
	{
		return super.getStartAngle_NoVirtual(ok);
	}
	/**
	 * 设置起始角
	 * @param angle 起始角的值
	 */
	public void setStartAngle(double angle)
	{
		super.setStartAngle_NoVirtual(angle);
	}
	/**
	 * 获取旋转角
	 * @param ok 返回是否成功获取
	 * @return 旋转角的值
	 */
	public double getRotateAngle(BooleanPointer ok)
	{
		return super.getRotateAngle_NoVirtual(ok);
	}
	/**
	 * 获取半径
	 * @param ok 返回是否成功获取
	 * @return 半径的值
	 */
	public double getRadius(BooleanPointer ok)
	{
		return super.getRadius_NoVirtual(ok);
	}
	/**
	 * 设置半径
	 * @param ok 设置半径的值
	 */
	public void setRadius(double radius)
	{
		super.setRadius_NoVirtual(radius);
	}
	
	native protected void register_newObject_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getGeometry_void(long pNativeObject, String method);
	native protected void register_getPointCount_void(long pNativeObject, String method);
	native protected void register_getPoint_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_indexForPoint_CPoint(long pNativeObject, String method);
	native protected void register_makeSample_CPoint_CPoint(long pNativeObject, String method);
	native protected void register_isFine_void(long pNativeObject, String method);
	native protected void register_isExcellent_void(long pNativeObject, String method);
	native protected void register_getFirstPoint_ev_bool(long pNativeObject, String method);
	native protected void register_getLastPoint_ev_bool(long pNativeObject, String method);
	native protected void register_getCenterPoint_ev_bool(long pNativeObject, String method);
	native protected void register_setCenterPoint_CPoint(long pNativeObject, String method);
	native protected void register_getCentralAngle_ev_bool(long pNativeObject, String method);
	native protected void register_setCentralAngle_ev_real64(long pNativeObject, String method);
	native protected void register_getStartAngle_ev_bool(long pNativeObject, String method);
	native protected void register_setStartAngle_ev_real64(long pNativeObject, String method);
	native protected void register_getRotateAngle_ev_bool(long pNativeObject, String method);
	native protected void register_getRadius_ev_bool(long pNativeObject, String method);
	native protected void register_setRadius_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_newObject_void(this.nativeObject.pointer, "newObject_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getGeometry_void(this.nativeObject.pointer, "getGeometry_void_callback");
			this.register_getPointCount_void(this.nativeObject.pointer, "getPointCount_void_callback");
			this.register_getPoint_ev_int32_ev_bool(this.nativeObject.pointer, "getPoint_ev_int32_ev_bool_callback");
			this.register_indexForPoint_CPoint(this.nativeObject.pointer, "indexForPoint_CPoint_callback");
			this.register_makeSample_CPoint_CPoint(this.nativeObject.pointer, "makeSample_CPoint_CPoint_callback");
			this.register_isFine_void(this.nativeObject.pointer, "isFine_void_callback");
			this.register_isExcellent_void(this.nativeObject.pointer, "isExcellent_void_callback");
			this.register_getFirstPoint_ev_bool(this.nativeObject.pointer, "getFirstPoint_ev_bool_callback");
			this.register_getLastPoint_ev_bool(this.nativeObject.pointer, "getLastPoint_ev_bool_callback");
			this.register_getCenterPoint_ev_bool(this.nativeObject.pointer, "getCenterPoint_ev_bool_callback");
			this.register_setCenterPoint_CPoint(this.nativeObject.pointer, "setCenterPoint_CPoint_callback");
			this.register_getCentralAngle_ev_bool(this.nativeObject.pointer, "getCentralAngle_ev_bool_callback");
			this.register_setCentralAngle_ev_real64(this.nativeObject.pointer, "setCentralAngle_ev_real64_callback");
			this.register_getStartAngle_ev_bool(this.nativeObject.pointer, "getStartAngle_ev_bool_callback");
			this.register_setStartAngle_ev_real64(this.nativeObject.pointer, "setStartAngle_ev_real64_callback");
			this.register_getRotateAngle_ev_bool(this.nativeObject.pointer, "getRotateAngle_ev_bool_callback");
			this.register_getRadius_ev_bool(this.nativeObject.pointer, "getRadius_ev_bool_callback");
			this.register_setRadius_ev_real64(this.nativeObject.pointer, "setRadius_ev_real64_callback");
		}
	}
	
	public static EditingLongCircle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingLongCircle obj = null;
 		if(baseObj instanceof EditingLongCircle)
		{
			obj = (EditingLongCircle)baseObj;
		} else {
			obj = new EditingLongCircle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditingLongCircle");
			obj.increaseCast();
		}

		return obj;
	}
}
