package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

/**
 * 曲线编辑对象,该类的派生类可以被添加到CEditingPath或者CEditingRing中
 */
public class EditingCurve extends com.earthview.world.spatial2d.controls.EditingObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditingCurve", new EditingCurveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditingCurveProxy", new EditingCurveClassFactory());
	}

	public EditingCurve(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingCurve(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 新建一个原始对象(非克隆),**该类的派生类必须重新实现该方法**默认实现为:返回一个空指针
	 * @return 新对象的指针
	 */
	public com.earthview.world.spatial2d.controls.EditingObject newObject()
	{
		return super.newObject_NoVirtual();
	}
	/**
	 * 对象的名称,**该类的派生类必须重新实现该方法**默认实现为:返回一个空字符
	 * @return 对象的名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 对象的类型,非内置类型的派生类,其类型枚举值必须大于100,以免与内置类型发生冲突,**该类的派生类必须重新实现该方法**默认实现为:返回Unknown类型
	 * @return 对象的类型
	 */
	public com.earthview.world.spatial2d.controls.EditingObjectType getType()
	{
		return super.getType_NoVirtual();
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
	 * 对象移动一个顶点,生成一个目标样本(用于鼠标操作)
	 * @param from 待移动的顶点
	 * @param to 顶点的目标位置
	 * @return 生成几何样本,外部释放内存
	 */
	public com.earthview.world.spatial.geometry.Igeometry makeSample(com.earthview.world.spatial.geometry.Point from, com.earthview.world.spatial.geometry.Point to)
	{
		return super.makeSample_NoVirtual(from, to);
	}
	/**
	 * 判断对象能否生成一个对应的几何图形.例:拿折线做为例子,如果对象只有一个点,那个该函数返回false.如果包含了至少2个点,返回true.
	 * @return 如果可以,则返回true
	 */
	public boolean isFine()
	{
		return super.isFine_NoVirtual();
	}
	/**
	 * 判断对象如果要生成对应的几何图形,是否已经包含了所有的点例:拿圆角矩形做为例子,如果对象有三个点(没有第4个点,那么圆角矩形没有磨角),那个该函数返回false.如果包含了四个点(第四个点控件磨角程度),返回true.
	 * @return 如果可以,则返回true
	 */
	public boolean isExcellent()
	{
		return super.isExcellent_NoVirtual();
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
	
	public static EditingCurve fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingCurve obj = null;
 		if(baseObj instanceof EditingCurve)
		{
			obj = (EditingCurve)baseObj;
		} else {
			obj = new EditingCurve(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditingCurve");
			obj.increaseCast();
		}

		return obj;
	}
}
