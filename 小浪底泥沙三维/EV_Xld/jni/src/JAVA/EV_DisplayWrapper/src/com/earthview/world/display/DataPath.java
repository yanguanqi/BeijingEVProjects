package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * path类
 */
public class DataPath extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CDataPath", new DataPathClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCDataPathProxy", new DataPathClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DataPath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataPathProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.display.DataPath".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		addPathLine(x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}

	native private void addPathLine_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x1, double y1, double x2, double y2);
	/**
	 * 增加贝塞尔样条
	 * @param x1 起点x1坐标
	 * @param y1 起点y1坐标
	 * @param x2 终点x2坐标
	 * @param y2 终点y2坐标
	 */
	public void addPathLine(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		addPathLine_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private void addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x1, double y1, double x2, double y2);
	protected void addPathLine_NoVirtual(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}

	protected  void addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathArc(xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}

	native private void addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);
	/**
	 * 增加弧线
	 * @param x 弧中心x
	 * @param y 弧中心y
	 * @param width 长半轴
	 * @param height 短半轴
	 * @param startAngle 开始角度
	 * @param sweepAngle 扫描角度
	 */
	public void addPathArc(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}
	native private void addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);
	protected void addPathArc_NoVirtual(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}

	protected  void addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathPie(xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}

	native private void addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);
	/**
	 * 增加饼图
	 * @param x 圆心x坐标
	 * @param y 圆心y坐标
	 * @param majorAxe 长半轴
	 * @param minorAxe 短半轴
	 * @param startAngle 开始角度
	 * @param sweepAngle 扫描角度
	 */
	public void addPathPie(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}
	native private void addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);
	protected void addPathPie_NoVirtual(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		double startAngleParamValue = startAngle;
		double sweepAngleParamValue = sweepAngle;
		addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue, startAngleParamValue, sweepAngleParamValue);
	}

	protected  void addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback(double x, double y, double majorAxe, double minorAxe)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		addPathEllipse(xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue);
	}

	native private void addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double majorAxe, double minorAxe);
	/**
	 * 增加椭圆
	 * @param x 圆心x坐标
	 * @param y 圆心y坐标
	 * @param majorAxe 长半轴
	 * @param minorAxe 短半轴
	 */
	public void addPathEllipse(double x, double y, double majorAxe, double minorAxe)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue);
	}
	native private void addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double majorAxe, double minorAxe);
	protected void addPathEllipse_NoVirtual(double x, double y, double majorAxe, double minorAxe)
	{
		double xParamValue = x;
		double yParamValue = y;
		double majorAxeParamValue = majorAxe;
		double minorAxeParamValue = minorAxe;
		addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, majorAxeParamValue, minorAxeParamValue);
	}

	protected  void addPathCircle_ev_real64_ev_real64_ev_real64_callback(double x, double y, double radius)
	{
		double xParamValue = x;
		double yParamValue = y;
		double radiusParamValue = radius;
		addPathCircle(xParamValue, yParamValue, radiusParamValue);
	}

	native private void addPathCircle_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double radius);
	/**
	 * 增加圆
	 * @param x 圆心x坐标
	 * @param y 圆心y坐标
	 * @param radius 圆半径
	 */
	public void addPathCircle(double x, double y, double radius)
	{
		double xParamValue = x;
		double yParamValue = y;
		double radiusParamValue = radius;
		addPathCircle_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, radiusParamValue);
	}
	native private void addPathCircle_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double radius);
	protected void addPathCircle_NoVirtual(double x, double y, double radius)
	{
		double xParamValue = x;
		double yParamValue = y;
		double radiusParamValue = radius;
		addPathCircle_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, radiusParamValue);
	}

	protected  void addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		double x3ParamValue = x3;
		double y3ParamValue = y3;
		double x4ParamValue = x4;
		double y4ParamValue = y4;
		addPathBezier(x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue, x3ParamValue, y3ParamValue, x4ParamValue, y4ParamValue);
	}

	native private void addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	/**
	 * 增加贝塞尔样条
	 * @param x1 起点x1坐标
	 * @param y1 起点y1坐标
	 * @param x2 控制点x2坐标
	 * @param y2 控制点y2坐标
	 * @param x3 控制点x3坐标
	 * @param y3 控制点y3坐标
	 * @param x4 终点x4坐标
	 * @param y4 终点y4坐标
	 */
	public void addPathBezier(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		double x3ParamValue = x3;
		double y3ParamValue = y3;
		double x4ParamValue = x4;
		double y4ParamValue = y4;
		addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue, x3ParamValue, y3ParamValue, x4ParamValue, y4ParamValue);
	}
	native private void addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	protected void addPathBezier_NoVirtual(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		double x3ParamValue = x3;
		double y3ParamValue = y3;
		double x4ParamValue = x4;
		double y4ParamValue = y4;
		addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue, x3ParamValue, y3ParamValue, x4ParamValue, y4ParamValue);
	}

	native private void addRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double w, double h);
	/**
	 * 增加矩形
	 * @param x 起点x坐标
	 * @param y 起点y坐标
	 * @param w 矩形宽度
	 * @param h 矩形高度
	 */
	public void addRect(double x, double y, double w, double h)
	{
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		addRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	protected  void getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback(long x, long y, long width, long height)
	{
		DoublePointer xParamValue = new DoublePointer(new InstancePointer(x));
		DoublePointer yParamValue = new DoublePointer(new InstancePointer(y));
		DoublePointer widthParamValue = new DoublePointer(new InstancePointer(width));
		DoublePointer heightParamValue = new DoublePointer(new InstancePointer(height));
		getBound(xParamValue, yParamValue, widthParamValue, heightParamValue);
	}

	native private void getBound_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long x, long y, long width, long height);
	/**
	 * 获取外包矩形大小
	 * @param width 宽度
	 * @param height 高度
	 */
	public void getBound(DoublePointer x, DoublePointer y, DoublePointer width, DoublePointer height)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		getBound_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue);
	}
	native private void getBound_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long x, long y, long width, long height);
	protected void getBound_NoVirtual(DoublePointer x, DoublePointer y, DoublePointer width, DoublePointer height)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		getBound_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue);
	}

	protected  boolean closePath_void_callback()
	{
		boolean returnValue = closePath();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closePath_void(long pNativeObject);
	/**
	 * 闭合Path
	 * @param  
	 */
	public boolean closePath()
	{
		boolean returnValue = closePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean closePath_void_NoVirtual(long pNativeObject);
	protected boolean closePath_NoVirtual()
	{
		boolean returnValue = closePath_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean clearPath_void_callback()
	{
		boolean returnValue = clearPath();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean clearPath_void(long pNativeObject);
	/**
	 * 清空所有Path
	 * @param  
	 */
	public boolean clearPath()
	{
		boolean returnValue = clearPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean clearPath_void_NoVirtual(long pNativeObject);
	protected boolean clearPath_NoVirtual()
	{
		boolean returnValue = clearPath_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRotateAngle_ev_real64_callback(double rotateAngle)
	{
		double rotateAngleParamValue = rotateAngle;
		setRotateAngle(rotateAngleParamValue);
	}

	native private void setRotateAngle_ev_real64(long pNativeObject, double rotateAngle);
	/**
	 * 设置旋转角度
	 * @param rotateAngle 旋转角度
	 */
	public void setRotateAngle(double rotateAngle)
	{
		double rotateAngleParamValue = rotateAngle;
		setRotateAngle_ev_real64(this.nativeObject.pointer, rotateAngleParamValue);
	}
	native private void setRotateAngle_ev_real64_NoVirtual(long pNativeObject, double rotateAngle);
	protected void setRotateAngle_NoVirtual(double rotateAngle)
	{
		double rotateAngleParamValue = rotateAngle;
		setRotateAngle_ev_real64_NoVirtual(this.nativeObject.pointer, rotateAngleParamValue);
	}

	protected  double getRotateAngle_void_callback()
	{
		double returnValue = getRotateAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRotateAngle_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param  
	 * @return 返回旋转角度
	 */
	public double getRotateAngle()
	{
		double returnValue = getRotateAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateAngle_void_NoVirtual(long pNativeObject);
	protected double getRotateAngle_NoVirtual()
	{
		double returnValue = getRotateAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getNativePath_void(long pNativeObject);
	/**
	 * 获取path
	 * @param  
	 * @return 返回path指针
	 */
	public VoidPointer getNativePath()
	{
		long returnValue = getNativePath_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public DataPath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataPath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPathCircle_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getBound_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_closePath_void(long pNativeObject, String method);
	native protected void register_clearPath_void(long pNativeObject, String method);
	native protected void register_setRotateAngle_ev_real64(long pNativeObject, String method);
	native protected void register_getRotateAngle_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPathCircle_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathCircle_ev_real64_ev_real64_ev_real64_callback");
			this.register_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getBound_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_closePath_void(this.nativeObject.pointer, "closePath_void_callback");
			this.register_clearPath_void(this.nativeObject.pointer, "clearPath_void_callback");
			this.register_setRotateAngle_ev_real64(this.nativeObject.pointer, "setRotateAngle_ev_real64_callback");
			this.register_getRotateAngle_void(this.nativeObject.pointer, "getRotateAngle_void_callback");
		}
	}
	
	public static DataPath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataPath obj = null;
 		if(baseObj instanceof DataPath)
		{
			obj = (DataPath)baseObj;
		} else {
			obj = new DataPath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataPath");
			obj.increaseCast();
		}

		return obj;
	}
}
