package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

/**
 * 编辑对象的基类,在二维的编辑功能中,编辑过程中所操作的对象为CEdtingObject.该对象不同于geometry,它是支持用户进行操作的几何对象的基类,并且支持回退操作.另外二维的编辑功能支持外部扩展,用户只需要继承该类,实现必要的虚方法,即可跟内部的编辑对象进行同样的操作来完成对象的创建与修改.
 */
public class EditingObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditingObject", new EditingObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditingObjectProxy", new EditingObjectClassFactory());
	}

	native private void insertPoint_CPoint_ev_int32(long pNativeObject, long pnt, int index);
	/**
	 * 插入顶点
	 * @param pnt 待插入的顶点
	 * @param pnt 顶点插入的位置索引
	 */
	public void insertPoint(com.earthview.world.spatial.geometry.Point pnt, int index)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		int indexParamValue = index;
		insertPoint_CPoint_ev_int32(this.nativeObject.pointer, pntParamValue, indexParamValue);
	}
	native private void removePoint_CPoint(long pNativeObject, long pnt);
	/**
	 * 移除顶点
	 * @param pnt 待移除的顶点
	 */
	public void removePoint(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		removePoint_CPoint(this.nativeObject.pointer, pntParamValue);
	}
	native private void movePoint_CPoint_CPoint(long pNativeObject, long src, long dest);
	/**
	 * 移动顶点
	 * @param src 待移动的顶点
	 * @param dest 移动顶点的目标位置
	 */
	public void movePoint(com.earthview.world.spatial.geometry.Point src, com.earthview.world.spatial.geometry.Point dest)
	{
		long srcParamValue = src.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		movePoint_CPoint_CPoint(this.nativeObject.pointer, srcParamValue, destParamValue);
	}
	native private void translate_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 平移对象
	 * @param dx 平移在X轴上的偏移量
	 * @param cy 平移在Y轴上的偏移量
	 */
	public void translate(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
	}
	native private void rotate_ev_real64_ev_real64_ev_real64(long pNativeObject, double ref_x, double ref_y, double angle);
	/**
	 * 旋转对象
	 * @param ref_x 旋转参考点的X坐标
	 * @param ref_y 旋转参考点的Y坐标
	 * @param angle 旋转角度
	 */
	public void rotate(double ref_x, double ref_y, double angle)
	{
		double ref_xParamValue = ref_x;
		double ref_yParamValue = ref_y;
		double angleParamValue = angle;
		rotate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, ref_xParamValue, ref_yParamValue, angleParamValue);
	}
	protected  long newObject_void_callback()
	{
		com.earthview.world.spatial2d.controls.EditingObject returnValue = newObject();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long newObject_void(long pNativeObject);
	/**
	 * 新建一个原始对象(非克隆),**该类的派生类必须重新实现该方法**默认实现为:返回一个空指针
	 * @return 新对象的指针
	 */
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

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 对象的名称,**该类的派生类必须重新实现该方法**默认实现为:返回一个空字符
	 * @return 对象的名称
	 */
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

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial2d.controls.EditingObjectType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 对象的类型,非内置类型的派生类,其类型枚举值必须大于100,以免与内置类型发生冲突,**该类的派生类必须重新实现该方法**默认实现为:返回Unknown类型
	 * @return 对象的类型
	 */
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

	protected  long getGeometry_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = getGeometry();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeometry_void(long pNativeObject);
	/**
	 * 新建一个原始对象(非克隆),**该类的派生类必须重新实现该方法**默认实现:返回空指针
	 * @return 对象生成的几何图形(内存由内部维护)
	 */
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

	protected  int getPointCount_void_callback()
	{
		int returnValue = getPointCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPointCount_void(long pNativeObject);
	/**
	 * 对象中包含的顶点数量
	 * @return 顶点数量
	 */
	public int getPointCount()
	{
		int returnValue = getPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPointCount_void_NoVirtual(long pNativeObject);
	protected int getPointCount_NoVirtual()
	{
		int returnValue = getPointCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getPoint_ev_int32_ev_bool_callback(int index, boolean ok)
	{
		int indexParamValue = index;
		boolean okParamValue = ok;
		com.earthview.world.spatial.geometry.Point returnValue = getPoint(indexParamValue, okParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPoint_ev_int32_ev_bool(long pNativeObject, int index, boolean ok);
	/**
	 * 获取指定索引处的顶点
	 * @param index 索引
	 * @param ok 返回是否成功获取
	 * @return 获取到的顶点
	 */
	public com.earthview.world.spatial.geometry.Point getPoint(int index, boolean ok)
	{
		int indexParamValue = index;
		boolean okParamValue = ok;
		long returnValue = getPoint_ev_int32_ev_bool(this.nativeObject.pointer, indexParamValue, okParamValue);
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
	native private long getPoint_ev_int32_ev_bool_NoVirtual(long pNativeObject, int index, boolean ok);
	protected com.earthview.world.spatial.geometry.Point getPoint_NoVirtual(int index, boolean ok)
	{
		int indexParamValue = index;
		boolean okParamValue = ok;
		long returnValue = getPoint_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, okParamValue);
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

	protected  int indexForPoint_CPoint_callback(long pnt)
	{
		com.earthview.world.spatial.geometry.Point pntParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pntParamValue.setDelegate(true);
		pntParamValue.setInstancePointer(new InstancePointer(pnt));
		IClassFactory pntParamValueClassFactory = GlobalClassFactoryMap.get(pntParamValue.getCppInstanceTypeName());
		if (pntParamValueClassFactory != null)
		{
			pntParamValue.setDelegate(true);
			pntParamValue = (com.earthview.world.spatial.geometry.Point)pntParamValueClassFactory.create();
			pntParamValue.setDelegate(true);
			pntParamValue.setInstancePointer(new InstancePointer(pnt));
		}
		int returnValue = indexForPoint(pntParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int indexForPoint_CPoint(long pNativeObject, long pnt);
	/**
	 * 获取指定索引处的顶点
	 * @param index 索引
	 * @param ok 返回是否成功获取
	 * @return 顶点的索引
	 */
	public int indexForPoint(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		int returnValue = indexForPoint_CPoint(this.nativeObject.pointer, pntParamValue);
		return returnValue;
	}
	native private int indexForPoint_CPoint_NoVirtual(long pNativeObject, long pnt);
	protected int indexForPoint_NoVirtual(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = pnt.nativeObject.pointer;
		int returnValue = indexForPoint_CPoint_NoVirtual(this.nativeObject.pointer, pntParamValue);
		return returnValue;
	}

	protected  long makeSample_CPoint_CPoint_callback(long from, long to)
	{
		com.earthview.world.spatial.geometry.Point fromParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		fromParamValue.setDelegate(true);
		fromParamValue.setInstancePointer(new InstancePointer(from));
		IClassFactory fromParamValueClassFactory = GlobalClassFactoryMap.get(fromParamValue.getCppInstanceTypeName());
		if (fromParamValueClassFactory != null)
		{
			fromParamValue.setDelegate(true);
			fromParamValue = (com.earthview.world.spatial.geometry.Point)fromParamValueClassFactory.create();
			fromParamValue.setDelegate(true);
			fromParamValue.setInstancePointer(new InstancePointer(from));
		}
		com.earthview.world.spatial.geometry.Point toParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		toParamValue.setDelegate(true);
		toParamValue.setInstancePointer(new InstancePointer(to));
		IClassFactory toParamValueClassFactory = GlobalClassFactoryMap.get(toParamValue.getCppInstanceTypeName());
		if (toParamValueClassFactory != null)
		{
			toParamValue.setDelegate(true);
			toParamValue = (com.earthview.world.spatial.geometry.Point)toParamValueClassFactory.create();
			toParamValue.setDelegate(true);
			toParamValue.setInstancePointer(new InstancePointer(to));
		}
		com.earthview.world.spatial.geometry.Igeometry returnValue = makeSample(fromParamValue, toParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long makeSample_CPoint_CPoint(long pNativeObject, long from, long to);
	/**
	 * 对象移动一个顶点,生成一个目标样本(用于鼠标操作)
	 * @param from 待移动的顶点
	 * @param to 顶点的目标位置
	 * @return 生成几何样本,外部释放内存
	 */
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

	protected  boolean isFine_void_callback()
	{
		boolean returnValue = isFine();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isFine_void(long pNativeObject);
	/**
	 * 判断对象能否生成一个对应的几何图形.例:拿折线做为例子,如果对象只有一个点,那个该函数返回false.如果包含了至少2个点,返回true.
	 * @return 如果可以,则返回true
	 */
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

	protected  boolean isExcellent_void_callback()
	{
		boolean returnValue = isExcellent();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExcellent_void(long pNativeObject);
	/**
	 * 判断对象如果要生成对应的几何图形,是否已经包含了所有的点例:拿圆角矩形做为例子,如果对象有三个点(没有第4个点,那么圆角矩形没有磨角),那个该函数返回false.如果包含了四个点(第四个点控件磨角程度),返回true.
	 * @return 如果可以,则返回true
	 */
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

	protected  long getFirstPoint_ev_bool_callback(boolean ok)
	{
		boolean okParamValue = ok;
		com.earthview.world.spatial.geometry.Point returnValue = getFirstPoint(okParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFirstPoint_ev_bool(long pNativeObject, boolean ok);
	/**
	 * 获取第一个顶点,跟getPoint(0)的功能一样
	 * @param ok 返回是否成功获取
	 */
	public com.earthview.world.spatial.geometry.Point getFirstPoint(boolean ok)
	{
		boolean okParamValue = ok;
		long returnValue = getFirstPoint_ev_bool(this.nativeObject.pointer, okParamValue);
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
	native private long getFirstPoint_ev_bool_NoVirtual(long pNativeObject, boolean ok);
	protected com.earthview.world.spatial.geometry.Point getFirstPoint_NoVirtual(boolean ok)
	{
		boolean okParamValue = ok;
		long returnValue = getFirstPoint_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
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

	protected  long getLastPoint_ev_bool_callback(boolean ok)
	{
		boolean okParamValue = ok;
		com.earthview.world.spatial.geometry.Point returnValue = getLastPoint(okParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLastPoint_ev_bool(long pNativeObject, boolean ok);
	/**
	 * 获取最后一个顶点,跟getPoint(getPointCount()-1)的功能是一样的
	 * @param ok 返回是否成功获取
	 */
	public com.earthview.world.spatial.geometry.Point getLastPoint(boolean ok)
	{
		boolean okParamValue = ok;
		long returnValue = getLastPoint_ev_bool(this.nativeObject.pointer, okParamValue);
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
	native private long getLastPoint_ev_bool_NoVirtual(long pNativeObject, boolean ok);
	protected com.earthview.world.spatial.geometry.Point getLastPoint_NoVirtual(boolean ok)
	{
		boolean okParamValue = ok;
		long returnValue = getLastPoint_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
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

	protected  long getCenterPoint_ev_bool_callback(long ok)
	{
		BooleanPointer okParamValue = new BooleanPointer(new InstancePointer(ok));
		com.earthview.world.spatial.geometry.Point returnValue = getCenterPoint(okParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCenterPoint_ev_bool(long pNativeObject, long ok);
	/**
	 * 获取中心点
	 * @param ok 返回是否成功获取
	 * @return 中心点
	 */
	public com.earthview.world.spatial.geometry.Point getCenterPoint(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		long returnValue = getCenterPoint_ev_bool(this.nativeObject.pointer, okParamValue);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCenterPoint_ev_bool_NoVirtual(long pNativeObject, long ok);
	protected com.earthview.world.spatial.geometry.Point getCenterPoint_NoVirtual(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		long returnValue = getCenterPoint_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  void setCenterPoint_CPoint_callback(long point)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		setCenterPoint(pointParamValue);
	}

	native private void setCenterPoint_CPoint(long pNativeObject, long point);
	/**
	 * 设置中心点
	 * @param point 中心点
	 */
	public void setCenterPoint(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		setCenterPoint_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void setCenterPoint_CPoint_NoVirtual(long pNativeObject, long point);
	protected void setCenterPoint_NoVirtual(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		setCenterPoint_CPoint_NoVirtual(this.nativeObject.pointer, pointParamValue);
	}

	protected  double getCentralAngle_ev_bool_callback(long ok)
	{
		BooleanPointer okParamValue = new BooleanPointer(new InstancePointer(ok));
		double returnValue = getCentralAngle(okParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCentralAngle_ev_bool(long pNativeObject, long ok);
	/**
	 * 获取圆心角
	 * @param ok 返回是否成功获取
	 * @return 圆心角的值
	 */
	public double getCentralAngle(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getCentralAngle_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private double getCentralAngle_ev_bool_NoVirtual(long pNativeObject, long ok);
	protected double getCentralAngle_NoVirtual(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getCentralAngle_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}

	protected  void setCentralAngle_ev_real64_callback(double angle)
	{
		double angleParamValue = angle;
		setCentralAngle(angleParamValue);
	}

	native private void setCentralAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置圆心角
	 * @param angle 圆心角的值
	 */
	public void setCentralAngle(double angle)
	{
		double angleParamValue = angle;
		setCentralAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setCentralAngle_ev_real64_NoVirtual(long pNativeObject, double angle);
	protected void setCentralAngle_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		setCentralAngle_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  double getStartAngle_ev_bool_callback(long ok)
	{
		BooleanPointer okParamValue = new BooleanPointer(new InstancePointer(ok));
		double returnValue = getStartAngle(okParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getStartAngle_ev_bool(long pNativeObject, long ok);
	/**
	 * 获取起始角
	 * @param ok 返回是否成功获取
	 * @return 起始角的值
	 */
	public double getStartAngle(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getStartAngle_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private double getStartAngle_ev_bool_NoVirtual(long pNativeObject, long ok);
	protected double getStartAngle_NoVirtual(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getStartAngle_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}

	protected  void setStartAngle_ev_real64_callback(double angle)
	{
		double angleParamValue = angle;
		setStartAngle(angleParamValue);
	}

	native private void setStartAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置起始角
	 * @param angle 起始角的值
	 */
	public void setStartAngle(double angle)
	{
		double angleParamValue = angle;
		setStartAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setStartAngle_ev_real64_NoVirtual(long pNativeObject, double angle);
	protected void setStartAngle_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		setStartAngle_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  double getRotateAngle_ev_bool_callback(long ok)
	{
		BooleanPointer okParamValue = new BooleanPointer(new InstancePointer(ok));
		double returnValue = getRotateAngle(okParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRotateAngle_ev_bool(long pNativeObject, long ok);
	/**
	 * 获取旋转角
	 * @param ok 返回是否成功获取
	 * @return 旋转角的值
	 */
	public double getRotateAngle(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getRotateAngle_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private double getRotateAngle_ev_bool_NoVirtual(long pNativeObject, long ok);
	protected double getRotateAngle_NoVirtual(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getRotateAngle_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}

	protected  double getRadius_ev_bool_callback(long ok)
	{
		BooleanPointer okParamValue = new BooleanPointer(new InstancePointer(ok));
		double returnValue = getRadius(okParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRadius_ev_bool(long pNativeObject, long ok);
	/**
	 * 获取半径
	 * @param ok 返回是否成功获取
	 * @return 半径的值
	 */
	public double getRadius(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getRadius_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private double getRadius_ev_bool_NoVirtual(long pNativeObject, long ok);
	protected double getRadius_NoVirtual(BooleanPointer ok)
	{
		long okParamValue = ok.nativeObject.pointer;
		double returnValue = getRadius_ev_bool_NoVirtual(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}

	protected  void setRadius_ev_real64_callback(double radius)
	{
		double radiusParamValue = radius;
		setRadius(radiusParamValue);
	}

	native private void setRadius_ev_real64(long pNativeObject, double radius);
	/**
	 * 设置半径
	 * @param ok 设置半径的值
	 */
	public void setRadius(double radius)
	{
		double radiusParamValue = radius;
		setRadius_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private void setRadius_ev_real64_NoVirtual(long pNativeObject, double radius);
	protected void setRadius_NoVirtual(double radius)
	{
		double radiusParamValue = radius;
		setRadius_ev_real64_NoVirtual(this.nativeObject.pointer, radiusParamValue);
	}

	native private static long makeObjectFromGeometry_IGeometry(long geometry);
	/**
	 * 根据geometry创建一个对应编辑对象,且加载geometry里面的顶点信息.该方法主要用于内部,其实现过程在editingpath.cpp中.
	 * @param geometry 几何图形
	 */
	public static com.earthview.world.spatial2d.controls.EditingObject makeObjectFromGeometry(com.earthview.world.spatial.geometry.Igeometry geometry)
	{
		long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
		long returnValue = makeObjectFromGeometry_IGeometry(geometryParamValue);
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
	public EditingObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static EditingObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingObject obj = null;
 		if(baseObj instanceof EditingObject)
		{
			obj = (EditingObject)baseObj;
		} else {
			obj = new EditingObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditingObject");
			obj.increaseCast();
		}

		return obj;
	}
}
