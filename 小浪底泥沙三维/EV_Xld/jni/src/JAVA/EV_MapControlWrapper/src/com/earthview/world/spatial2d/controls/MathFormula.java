package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 部分数据公式
 */
public class MathFormula extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CMathFormula", new MathFormulaClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public MathFormula() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMathFormula", null);
	}

	native private static double cosinTheorem_CPoint_CPoint_CPoint(long p0, long p1, long p2);
	/**
	 * 余弦定理求取夹角
	 * @param p0 顶角位置
	 * @param p1 起始点位置
	 * @param p2 终止点位置
	 */
	public static double cosinTheorem(com.earthview.world.spatial.geometry.Point p0, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2)
	{
		long p0ParamValue = (p0 == null ? 0L : p0.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		double returnValue = cosinTheorem_CPoint_CPoint_CPoint(p0ParamValue, p1ParamValue, p2ParamValue);
		return returnValue;
	}
	native private static double cosinTheorem_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double x0, double y0, double x1, double y1, double x2, double y2);
	/**
	 * 余弦定理求取夹角
	 * @param x0 顶角位置X坐标
	 * @param y0 顶角位置Y坐标
	 * @param x1 起始点位置X坐标
	 * @param y1 起始点位置Y坐标
	 * @param x2 终止点位置X坐标
	 * @param y2 终止点位置Y坐标
	 */
	public static double cosinTheorem(double x0, double y0, double x1, double y1, double x2, double y2)
	{
		double x0ParamValue = x0;
		double y0ParamValue = y0;
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		double returnValue = cosinTheorem_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(x0ParamValue, y0ParamValue, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
		return returnValue;
	}
	native private static double pointToLine_CPoint_CPoint_CPoint(long pnt, long pnt0, long pnt1);
	/**
	 * 点到线段的距离
	 * @param pnt 点的位置
	 * @param p0 线段的起始位置
	 * @param p1 线段的终止位置
	 */
	public static double pointToLine(com.earthview.world.spatial.geometry.Point pnt, com.earthview.world.spatial.geometry.Point pnt0, com.earthview.world.spatial.geometry.Point pnt1)
	{
		long pntParamValue = (pnt == null ? 0L : pnt.nativeObject.pointer);
		long pnt0ParamValue = (pnt0 == null ? 0L : pnt0.nativeObject.pointer);
		long pnt1ParamValue = (pnt1 == null ? 0L : pnt1.nativeObject.pointer);
		double returnValue = pointToLine_CPoint_CPoint_CPoint(pntParamValue, pnt0ParamValue, pnt1ParamValue);
		return returnValue;
	}
	native private static double pointToLine_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double dx, double dy, double x0, double y0, double x1, double y1);
	/**
	 * 点到线段的距离
	 * @param dx 点的X坐标
	 * @param dy 点的Y坐标
	 * @param x0 线段的起始位置X坐标
	 * @param y0 线段的起始位置Y坐标
	 * @param x1 线段的终止位置X坐标
	 * @param y1 线段的终止位置Y坐标
	 */
	public static double pointToLine(double dx, double dy, double x0, double y0, double x1, double y1)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		double x0ParamValue = x0;
		double y0ParamValue = y0;
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double returnValue = pointToLine_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(dxParamValue, dyParamValue, x0ParamValue, y0ParamValue, x1ParamValue, y1ParamValue);
		return returnValue;
	}
	native private static double pointToPoint_CPoint_CPoint(long pnt1, long pnt2);
	/**
	 * 点到点的距离
	 * @param pnt1 第一个点的位置
	 * @param pnt2 第二个点的位置
	 */
	public static double pointToPoint(com.earthview.world.spatial.geometry.Point pnt1, com.earthview.world.spatial.geometry.Point pnt2)
	{
		long pnt1ParamValue = (pnt1 == null ? 0L : pnt1.nativeObject.pointer);
		long pnt2ParamValue = (pnt2 == null ? 0L : pnt2.nativeObject.pointer);
		double returnValue = pointToPoint_CPoint_CPoint(pnt1ParamValue, pnt2ParamValue);
		return returnValue;
	}
	native private static double testTurn_CPoint_CPoint_CPoint(long p0, long p1, long p2);
	/**
	 * 判断p2拐向,p0->p1->p2
	 * @param p0 第一个点位置
	 * @param p1 第二个点位置
	 * @param p2 第三个点位置
	 * @return 如果大于0，右拐，小于0，向左拐，等于0则三点共线
	 */
	public static double testTurn(com.earthview.world.spatial.geometry.Point p0, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2)
	{
		long p0ParamValue = (p0 == null ? 0L : p0.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		double returnValue = testTurn_CPoint_CPoint_CPoint(p0ParamValue, p1ParamValue, p2ParamValue);
		return returnValue;
	}
	native private static double angle_aob_CPoint_CPoint_CPoint(long po, long pa, long pb);
	/**
	 * 求取角aob的值
	 * @param p0 项角位置
	 * @param pa 起始点位置
	 * @param pb 终止点位置
	 * @return pb在po_pa的左侧，值在0~180之间,pb在po_pa的右侧，值在180~360之间
	 */
	public static double angle_aob(com.earthview.world.spatial.geometry.Point po, com.earthview.world.spatial.geometry.Point pa, com.earthview.world.spatial.geometry.Point pb)
	{
		long poParamValue = (po == null ? 0L : po.nativeObject.pointer);
		long paParamValue = (pa == null ? 0L : pa.nativeObject.pointer);
		long pbParamValue = (pb == null ? 0L : pb.nativeObject.pointer);
		double returnValue = angle_aob_CPoint_CPoint_CPoint(poParamValue, paParamValue, pbParamValue);
		return returnValue;
	}
	native private static boolean shareLine_CPoint_CPoint_CPoint(long p1, long p2, long q);
	/**
	 * 判断三点是否共线（包含延长线）
	 * @param p1 第一个点
	 * @param p2 第二个点
	 * @param q 第三个点
	 * @return 如果共线则返回true,反之则否
	 */
	public static boolean shareLine(com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2, com.earthview.world.spatial.geometry.Point q)
	{
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		boolean returnValue = shareLine_CPoint_CPoint_CPoint(p1ParamValue, p2ParamValue, qParamValue);
		return returnValue;
	}
	native private static boolean shareLine_CPoint_CPoint_CPoint_ev_real64(long p1, long p2, long q, double precision);
	/**
	 * 判断三点是否共线（包含延长线）
	 * @param p1 第一个点
	 * @param p2 第二个点
	 * @param q 第三个点
	 * @param precision 精度
	 * @return 如果共线则返回true,反之则否
	 */
	public static boolean shareLine(com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2, com.earthview.world.spatial.geometry.Point q, double precision)
	{
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		double precisionParamValue = precision;
		boolean returnValue = shareLine_CPoint_CPoint_CPoint_ev_real64(p1ParamValue, p2ParamValue, qParamValue, precisionParamValue);
		return returnValue;
	}
	native private static boolean isPointOnLine_CPoint_CPoint_CPoint(long q, long p1, long p2);
	/**
	 * 判断点是否在线段上（不包含延长线）
	 * @param q 测试点
	 * @param p1 线段的起始点
	 * @param p2 线段的终止点
	 * @return 如果在线上，则返回true,反之则否
	 */
	public static boolean isPointOnLine(com.earthview.world.spatial.geometry.Point q, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2)
	{
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		boolean returnValue = isPointOnLine_CPoint_CPoint_CPoint(qParamValue, p1ParamValue, p2ParamValue);
		return returnValue;
	}
	native private static boolean isPointOnLine_CPoint_CPoint_CPoint_ev_real64(long q, long p1, long p2, double precision);
	/**
	 * 判断点是否在线段上（不包含延长线）
	 * @param q 测试点
	 * @param p1 线段的起始点
	 * @param p2 线段的终止点
	 * @param precision 精度
	 * @return 如果在线上，则返回true,反之则否
	 */
	public static boolean isPointOnLine(com.earthview.world.spatial.geometry.Point q, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2, double precision)
	{
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		double precisionParamValue = precision;
		boolean returnValue = isPointOnLine_CPoint_CPoint_CPoint_ev_real64(qParamValue, p1ParamValue, p2ParamValue, precisionParamValue);
		return returnValue;
	}
	native private static boolean isFootPoint_CPoint_CPoint_CPoint(long fp, long p1, long p2);
	/**
	 * 判断点是否为垂足，即线段p1_fp和线段p2_fp是否垂直
	 * @param fp 测试点
	 * @param p1 线段的起始点
	 * @param p2 线段的终止点
	 * @return 如果为真，则表明是垂足点
	 */
	public static boolean isFootPoint(com.earthview.world.spatial.geometry.Point fp, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2)
	{
		long fpParamValue = (fp == null ? 0L : fp.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		boolean returnValue = isFootPoint_CPoint_CPoint_CPoint(fpParamValue, p1ParamValue, p2ParamValue);
		return returnValue;
	}
	native private static int getFootPoint_CPoint_CPoint_ev_real64_ev_real64(long pPoint1, long pPoint2, long x, long y);
	/**
	 * 获取垂足点
	 * @param pPoint1 线段的起始点
	 * @param pPoint2 线段的终止点
	 * @param x 获取垂足经过的某个点的X坐标，返回垂足的X坐标值
	 * @param y 获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值
	 * @return 垂足与线段的空间关系
	 */
	public static int getFootPoint(com.earthview.world.spatial.geometry.Point pPoint1, com.earthview.world.spatial.geometry.Point pPoint2, DoublePointer x, DoublePointer y)
	{
		long pPoint1ParamValue = (pPoint1 == null ? 0L : pPoint1.nativeObject.pointer);
		long pPoint2ParamValue = (pPoint2 == null ? 0L : pPoint2.nativeObject.pointer);
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		int returnValue = getFootPoint_CPoint_CPoint_ev_real64_ev_real64(pPoint1ParamValue, pPoint2ParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private static boolean isParallel_CPoint_CPoint_CPoint_CPoint(long pStartPL1, long pEndPL1, long pStartPL2, long pEndPL2);
	/**
	 * 判断两条线段是否平行
	 * @param pStartPL1 线段的起始点
	 * @param pEndPL1 线段的终止点
	 * @param pStartPL2 获取垂足经过的某个点的X坐标，返回垂足的X坐标值
	 * @param pEndPL2 获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值
	 * @return 如果两条线段平行，则返回true,否则返回false
	 */
	public static boolean isParallel(com.earthview.world.spatial.geometry.Point pStartPL1, com.earthview.world.spatial.geometry.Point pEndPL1, com.earthview.world.spatial.geometry.Point pStartPL2, com.earthview.world.spatial.geometry.Point pEndPL2)
	{
		long pStartPL1ParamValue = (pStartPL1 == null ? 0L : pStartPL1.nativeObject.pointer);
		long pEndPL1ParamValue = (pEndPL1 == null ? 0L : pEndPL1.nativeObject.pointer);
		long pStartPL2ParamValue = (pStartPL2 == null ? 0L : pStartPL2.nativeObject.pointer);
		long pEndPL2ParamValue = (pEndPL2 == null ? 0L : pEndPL2.nativeObject.pointer);
		boolean returnValue = isParallel_CPoint_CPoint_CPoint_CPoint(pStartPL1ParamValue, pEndPL1ParamValue, pStartPL2ParamValue, pEndPL2ParamValue);
		return returnValue;
	}
	native private static boolean isApproximate_ev_real64_ev_real64_ev_real64(double dValue1, double dValue2, double dTolerance);
	/**
	 * 判断两个值是否大约相等
	 * @param dValue1 用来判断的第一个值
	 * @param dValue2 用来判断的第二个值
	 * @param dTolerance 精确度
	 * @return 如果两个值相等，则返回true,否则返回false
	 */
	public static boolean isApproximate(double dValue1, double dValue2, double dTolerance)
	{
		double dValue1ParamValue = dValue1;
		double dValue2ParamValue = dValue2;
		double dToleranceParamValue = dTolerance;
		boolean returnValue = isApproximate_ev_real64_ev_real64_ev_real64(dValue1ParamValue, dValue2ParamValue, dToleranceParamValue);
		return returnValue;
	}
	public MathFormula(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MathFormula(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MathFormula fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MathFormula obj = null;
 		if(baseObj instanceof MathFormula)
		{
			obj = (MathFormula)baseObj;
		} else {
			obj = new MathFormula(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMathFormula");
			obj.increaseCast();
		}

		return obj;
	}
}
