package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

/**
 * 编辑描绘器.该对象包含了对一个geometry的所有操作(包括添加和删除"部分"等).用户可以通过该类修改几何图形
 */
public class EditingSketch extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditingSketch", new EditingSketchClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditingSketchProxy", new EditingSketchClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取编辑描绘器的类型(有且仅有三种GT_MULTIPOINT,GT_POLYLINE,GT_POLYGON)
	 * @return 类型
	 */
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
	 * 返回正在描绘的几何图形(内存由内部维护)
	 * @return 几何图形
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

	protected  void finishPart_void_callback()
	{
		finishPart();
	}

	native private void finishPart_void(long pNativeObject);
	/**
	 * 结束当前正在绘制的部分,开启新的一部分
	 */
	public void finishPart()
	{
		finishPart_void(this.nativeObject.pointer);
	}
	native private void finishPart_void_NoVirtual(long pNativeObject);
	protected void finishPart_NoVirtual()
	{
		finishPart_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean translate_ev_real64_ev_real64_callback(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		boolean returnValue = translate(dxParamValue, dyParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean translate_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 平移对象
	 * @param dx 平移在X轴上的偏移量
	 * @param cy 平移在Y轴上的偏移量
	 */
	public boolean translate(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		boolean returnValue = translate_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
		return returnValue;
	}
	native private boolean translate_ev_real64_ev_real64_NoVirtual(long pNativeObject, double dx, double dy);
	protected boolean translate_NoVirtual(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		boolean returnValue = translate_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, dxParamValue, dyParamValue);
		return returnValue;
	}

	protected  boolean rotate_ev_real64_ev_real64_ev_real64_callback(double x, double y, double angle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double angleParamValue = angle;
		boolean returnValue = rotate(xParamValue, yParamValue, angleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean rotate_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double angle);
	/**
	 * 旋转对象
	 * @param ref_x 旋转参考点的X坐标
	 * @param ref_y 旋转参考点的Y坐标
	 * @param angle 旋转角度
	 */
	public boolean rotate(double x, double y, double angle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double angleParamValue = angle;
		boolean returnValue = rotate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, angleParamValue);
		return returnValue;
	}
	native private boolean rotate_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double angle);
	protected boolean rotate_NoVirtual(double x, double y, double angle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double angleParamValue = angle;
		boolean returnValue = rotate_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, angleParamValue);
		return returnValue;
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
	native private int getPartCount_void(long pNativeObject);
	/**
	 * 对象中包含部分个数
	 */
	public int getPartCount()
	{
		int returnValue = getPartCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int indexForPart_CEditingObject(long pNativeObject, long part);
	/**
	 * 获取指定部分的索引
	 * @param part 部分
	 * @return 部分的索引
	 */
	public int indexForPart(com.earthview.world.spatial2d.controls.EditingObject part)
	{
		long partParamValue = (part == null ? 0L : part.nativeObject.pointer);
		int returnValue = indexForPart_CEditingObject(this.nativeObject.pointer, partParamValue);
		return returnValue;
	}
	native private long getPart_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定索引处的部分
	 * @param index 索引
	 * @return 部分
	 */
	public com.earthview.world.spatial2d.controls.EditingObject getPart(int index)
	{
		int indexParamValue = index;
		long returnValue = getPart_ev_int32(this.nativeObject.pointer, indexParamValue);
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
	native private long getLastPart_void(long pNativeObject);
	/**
	 * 获取最后一个部分
	 * @return 部分
	 */
	public com.earthview.world.spatial2d.controls.EditingObject getLastPart()
	{
		long returnValue = getLastPart_void(this.nativeObject.pointer);
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
	native private boolean insertPart_CEditingObject_ev_int32(long pNativeObject, long part, int index);
	/**
	 * 将新的一个部分插入到指定索引处
	 * @param part 待插入的部分
	 * @param index 索引
	 * @return 返回是否插入成功
	 */
	public boolean insertPart(com.earthview.world.spatial2d.controls.EditingObject part, int index)
	{
		long partParamValue = (part == null ? 0L : part.nativeObject.pointer);
		int indexParamValue = index;
		boolean returnValue = insertPart_CEditingObject_ev_int32(this.nativeObject.pointer, partParamValue, indexParamValue);
		return returnValue;
	}
	native private boolean removePart_CEditingObject(long pNativeObject, long part);
	/**
	 * 移除指定的部分
	 * @param part 待移除的部分
	 * @return 返回是否移除成功
	 */
	public boolean removePart(com.earthview.world.spatial2d.controls.EditingObject part)
	{
		long partParamValue = (part == null ? 0L : part.nativeObject.pointer);
		boolean returnValue = removePart_CEditingObject(this.nativeObject.pointer, partParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空
	 * @return 返回是否插入成功
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	protected  void addPoint_CPoint_callback(long pnt)
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
		addPoint(pntParamValue);
	}

	native private void addPoint_CPoint(long pNativeObject, long pnt);
	/**
	 * 添加点.该方法在执行插入时,会检查当前是否有可用的部分,如果没有,则新建一个新的部分.
	 * @param part 待添加的点
	 */
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

	public EditingSketch(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingSketch(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static EditingSketch fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingSketch obj = null;
 		if(baseObj instanceof EditingSketch)
		{
			obj = (EditingSketch)baseObj;
		} else {
			obj = new EditingSketch(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditingSketch");
			obj.increaseCast();
		}

		return obj;
	}
}
