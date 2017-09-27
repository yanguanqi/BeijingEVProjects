package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 椭圆弧类
 */
public class EllipticArc extends com.earthview.world.spatial.geometry.Curve {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CEllipticArc", new EllipticArcClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCEllipticArcProxy", new EllipticArcClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public EllipticArc() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEllipticArcProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.EllipticArc".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public EllipticArc(com.earthview.world.spatial.geometry.Point centerPoint, double semiMajorAxe, double semiMinorAx, double rotatedAngle, double fromAngle, double sweepAngle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer centerPointPtr = new BasePointer(centerPoint);
		list.add("centerPoint", centerPointPtr.get());
		BasePointer semiMajorAxePtr = new BasePointer(semiMajorAxe);
		list.add("semiMajorAxe", semiMajorAxePtr.get());
		BasePointer semiMinorAxPtr = new BasePointer(semiMinorAx);
		list.add("semiMinorAx", semiMinorAxPtr.get());
		BasePointer rotatedAnglePtr = new BasePointer(rotatedAngle);
		list.add("rotatedAngle", rotatedAnglePtr.get());
		BasePointer fromAnglePtr = new BasePointer(fromAngle);
		list.add("fromAngle", fromAnglePtr.get());
		BasePointer sweepAnglePtr = new BasePointer(sweepAngle);
		list.add("sweepAngle", sweepAnglePtr.get());
		Create("JCEllipticArcProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.EllipticArc".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getFromPoint_void(long pNativeObject);
	/**
	 * 获取椭圆弧起点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getFromPoint()
	{
		long returnValue = getFromPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
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
	native private long getFromPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getFromPoint2()
	{
		long returnValue = getFromPoint2_void(this.nativeObject.pointer);
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
	native private long getToPoint_void(long pNativeObject);
	/**
	 * 获取椭圆弧终点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getToPoint()
	{
		long returnValue = getToPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
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
	native private long getToPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getToPoint2()
	{
		long returnValue = getToPoint2_void(this.nativeObject.pointer);
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
	native private long getCenterPoint_void(long pNativeObject);
	/**
	 * 获取椭圆弧所在椭圆的中心点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCenterPoint()
	{
		long returnValue = getCenterPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
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
	native private long getCenterPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getCenterPoint2()
	{
		long returnValue = getCenterPoint2_void(this.nativeObject.pointer);
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
	native private double getFromAngle_void(long pNativeObject);
	/**
	 * 获取起始角度
	 * @param  
	 */
	public double getFromAngle()
	{
		double returnValue = getFromAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getToAngle_void(long pNativeObject);
	/**
	 * 获取终止角度
	 * @param  
	 */
	public double getToAngle()
	{
		double returnValue = getToAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCenterAngle_void(long pNativeObject);
	/**
	 * 获取椭圆弧两端点对椭圆中心的张角
	 * @param  
	 */
	public double getCenterAngle()
	{
		double returnValue = getCenterAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSemiMajorAxe_void(long pNativeObject);
	/**
	 * 获取椭圆长半轴
	 * @param  
	 */
	public double getSemiMajorAxe()
	{
		double returnValue = getSemiMajorAxe_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSemiMinorAxe_void(long pNativeObject);
	/**
	 * 获取椭圆短半轴
	 * @param  
	 */
	public double getSemiMinorAxe()
	{
		double returnValue = getSemiMinorAxe_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSweepAngle_void(long pNativeObject);
	/**
	 * 获取椭圆弧两端点对椭圆中心的张角
	 * @param  
	 */
	public double getSweepAngle()
	{
		double returnValue = getSweepAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotatedAngle_void(long pNativeObject);
	/**
	 * 获取椭圆长轴与x正轴的夹角
	 * @param  
	 */
	public double getRotatedAngle()
	{
		double returnValue = getRotatedAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEllipticArc_CPoint_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long centerPoint, double semiMajorAxe, double semiMinorAx, double rotatedAngle, double fromAngle, double sweepAngle);
	/**
	 * 设置椭圆弧
	 * @param centerPoint 椭圆中心点
	 * @param semiMajorAxe 椭圆长半轴
	 * @param semiMinorAx 椭圆短半轴
	 * @param rotatedAngle 椭圆长轴与x轴夹角
	 * @param fromAngle 椭圆弧起始角度
	 * @param sweepAngle 椭圆弧对椭圆中心的张角
	 */
	public void setEllipticArc(com.earthview.world.spatial.geometry.Point centerPoint, double semiMajorAxe, double semiMinorAx, double rotatedAngle, double fromAngle, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		double semiMajorAxeParamValue = semiMajorAxe;
		double semiMinorAxParamValue = semiMinorAx;
		double rotatedAngleParamValue = rotatedAngle;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setEllipticArc_CPoint_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, centerPointParamValue, semiMajorAxeParamValue, semiMinorAxParamValue, rotatedAngleParamValue, fromAngleParamValue, sweepAngleParamValue);
	}
	native private void setEllipticArc_CPoint_CPoint_CPoint_ev_real64_ev_real64(long pNativeObject, long centerPoint, long assistantPoint, long assistantPoint2, double fromAngle, double sweepAngle);
	/**
	 * 设置椭圆弧
	 * @param centerPoint 椭圆中心点
	 * @param assistantPoint 第一个辅助点，是位于椭圆长轴上的任意一点（但不能与中心点重合）
	 * @param assistantPoint2 第二个辅助点，椭圆外接矩形的顶点
	 * @param fromAngle 椭圆弧起始角度
	 * @param sweepAngle 椭圆弧对中心点的张角
	 */
	public void setEllipticArc(com.earthview.world.spatial.geometry.Point centerPoint, com.earthview.world.spatial.geometry.Point assistantPoint, com.earthview.world.spatial.geometry.Point assistantPoint2, double fromAngle, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		long assistantPointParamValue = assistantPoint.nativeObject.pointer;
		long assistantPoint2ParamValue = assistantPoint2.nativeObject.pointer;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setEllipticArc_CPoint_CPoint_CPoint_ev_real64_ev_real64(this.nativeObject.pointer, centerPointParamValue, assistantPointParamValue, assistantPoint2ParamValue, fromAngleParamValue, sweepAngleParamValue);
	}
	native private void setEllipticArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double cx, double cy, double semiMajorAxe, double semiMinorAxe, double rotatedAngle, double fromAngle, double sweepAngle);
	/**
	 * 设置椭圆弧
	 * @param cx 椭圆中心x坐标
	 * @param cy 椭圆中心y坐标
	 * @param semiMajorAxe 椭圆长半轴
	 * @param semiMinorAxe 椭圆短半轴
	 * @param rotatedAngle 椭圆长轴与x正轴夹角
	 * @param fromAngle 椭圆弧起始角度
	 * @param sweepAngle 椭圆弧终止角度
	 */
	public void setEllipticArc(double cx, double cy, double semiMajorAxe, double semiMinorAxe, double rotatedAngle, double fromAngle, double sweepAngle)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		double semiMajorAxeParamValue = semiMajorAxe;
		double semiMinorAxeParamValue = semiMinorAxe;
		double rotatedAngleParamValue = rotatedAngle;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setEllipticArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue, semiMajorAxeParamValue, semiMinorAxeParamValue, rotatedAngleParamValue, fromAngleParamValue, sweepAngleParamValue);
	}
	protected  long toLineString2_ev_uint32_callback(long smooth)
	{
		long smoothParamValue = smooth;
		com.earthview.world.spatial.geometry.LineString returnValue = toLineString2(smoothParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toLineString2_ev_uint32(long pNativeObject, long smooth);
	/**
	 * 将椭圆弧转换为折线
	 * @param smooth 平滑度
	 */
	public com.earthview.world.spatial.geometry.LineString toLineString2(long smooth)
	{
		long smoothParamValue = smooth;
		long returnValue = toLineString2_ev_uint32(this.nativeObject.pointer, smoothParamValue);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLineString");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long toLineString2_ev_uint32_NoVirtual(long pNativeObject, long smooth);
	protected com.earthview.world.spatial.geometry.LineString toLineString2_NoVirtual(long smooth)
	{
		long smoothParamValue = smooth;
		long returnValue = toLineString2_ev_uint32_NoVirtual(this.nativeObject.pointer, smoothParamValue);
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLineString");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}

	native private void setCenterPoint_CPoint(long pNativeObject, long centerPoint);
	/**
	 * 设置椭圆中心点
	 * @param centerPoint 椭圆中心点
	 */
	public void setCenterPoint(com.earthview.world.spatial.geometry.Point centerPoint)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		setCenterPoint_CPoint(this.nativeObject.pointer, centerPointParamValue);
	}
	native private void setSemiMajorAxe_ev_real64(long pNativeObject, double value);
	/**
	 * 设置椭圆长半轴
	 * @param value 长半轴
	 */
	public void setSemiMajorAxe(double value)
	{
		double valueParamValue = value;
		setSemiMajorAxe_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSemiMinorAxe_ev_real64(long pNativeObject, double value);
	/**
	 * 设置椭圆短半轴
	 * @param value 短半轴
	 */
	public void setSemiMinorAxe(double value)
	{
		double valueParamValue = value;
		setSemiMinorAxe_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setRotatedAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置椭圆旋转角度
	 * @param value 旋转角度
	 */
	public void setRotatedAngle(double value)
	{
		double valueParamValue = value;
		setRotatedAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setFromAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置椭圆弧起始角度
	 * @param value 起始角度
	 */
	public void setFromAngle(double value)
	{
		double valueParamValue = value;
		setFromAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSweepAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置椭圆弧对椭圆中心的张角
	 * @param  
	 */
	public void setSweepAngle(double value)
	{
		double valueParamValue = value;
		setSweepAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private long getStartPoint2_void(long pNativeObject);
	/**
	 * 获取起始点
	 * @param  
	 * @return 起始点
	 */
	public com.earthview.world.spatial.geometry.Point getStartPoint2()
	{
		long returnValue = getStartPoint2_void(this.nativeObject.pointer);
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
	native private long getStartPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getStartPoint2_NoVirtual()
	{
		long returnValue = getStartPoint2_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getEndPoint2_void(long pNativeObject);
	/**
	 * 获取结尾点
	 * @param  
	 * @return 结尾点
	 */
	public com.earthview.world.spatial.geometry.Point getEndPoint2()
	{
		long returnValue = getEndPoint2_void(this.nativeObject.pointer);
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
	native private long getEndPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getEndPoint2_NoVirtual()
	{
		long returnValue = getEndPoint2_void_NoVirtual(this.nativeObject.pointer);
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

	native private double getLength_void(long pNativeObject);
	/**
	 * 获取曲线长度
	 * @param  
	 * @return 曲线长度
	 */
	public double getLength()
	{
		double returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLength_void_NoVirtual(long pNativeObject);
	protected double getLength_NoVirtual()
	{
		double returnValue = getLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isClosed_void(long pNativeObject);
	/**
	 * 判断是否闭合。判断标准是首尾点相等
	 * @param  
	 * @return 如果闭合，返回true;否则，返回false
	 */
	public boolean isClosed()
	{
		boolean returnValue = isClosed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isClosed_void_NoVirtual(long pNativeObject);
	protected boolean isClosed_NoVirtual()
	{
		boolean returnValue = isClosed_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean reverse_void(long pNativeObject);
	/**
	 * 反转曲线环
	 * @param  
	 * @param  
	 * @return 成功，返回true;否则，返回false
	 */
	public boolean reverse()
	{
		boolean returnValue = reverse_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean reverse_void_NoVirtual(long pNativeObject);
	protected boolean reverse_NoVirtual()
	{
		boolean returnValue = reverse_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断几何体是否有效
	 * @return 如果有效，返回true；否则，返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEmpty_void(long pNativeObject);
	/**
	 * 判断几何体是否为空
	 * @param  
	 * @return 如果为空，返回true；否则，返回false
	 */
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEmpty_void_NoVirtual(long pNativeObject);
	protected boolean isEmpty_NoVirtual()
	{
		boolean returnValue = isEmpty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void makeZ_ev_real64(long pNativeObject, double z);
	/**
	 * 统一设置Z值
	 * @param  
	 * @param z 坐标轴Z值
	 */
	public void makeZ(double z)
	{
		double zParamValue = z;
		makeZ_ev_real64(this.nativeObject.pointer, zParamValue);
	}
	native private void makeZ_ev_real64_NoVirtual(long pNativeObject, double z);
	protected void makeZ_NoVirtual(double z)
	{
		double zParamValue = z;
		makeZ_ev_real64_NoVirtual(this.nativeObject.pointer, zParamValue);
	}

	native private void makeM_ev_real64(long pNativeObject, double m);
	/**
	 * 统一设置M值
	 * @param m 坐标轴M值
	 */
	public void makeM(double m)
	{
		double mParamValue = m;
		makeM_ev_real64(this.nativeObject.pointer, mParamValue);
	}
	native private void makeM_ev_real64_NoVirtual(long pNativeObject, double m);
	protected void makeM_NoVirtual(double m)
	{
		double mParamValue = m;
		makeM_ev_real64_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * /深度拷贝几何体对象/
	 * @param  
	 * @return 拷贝后的几何体对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean isEquals_IGeometry_ev_real64_EVDimensionType(long pNativeObject, long geom, double tolerance, int dimension);
	/**
	 * /判断该几何体对象是否与指定几何体对象形状相同。/目前，只支持2维几何体对象的空间关系。/
	 * @param geom 指定几何体对象
	 * @param tolerance 指定误差范围
	 * @param dimension 指定几何体维数
	 * @return 如果相等，则返回true；否则，返回false
	 */
	public boolean isEquals(com.earthview.world.spatial.geometry.Igeometry geom, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isEquals_IGeometry_ev_real64_EVDimensionType(this.nativeObject.pointer, geomParamValue, toleranceParamValue, dimensionParamValue);
		return returnValue;
	}
	native private boolean isEquals_IGeometry_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, long geom, double tolerance, int dimension);
	protected boolean isEquals_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		int dimensionParamValue = dimension.getValue();
		boolean returnValue = isEquals_IGeometry_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, geomParamValue, toleranceParamValue, dimensionParamValue);
		return returnValue;
	}

	native private void translate_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	/**
	 * 平移几何体，默认提供中心点平移
	 * @param x X轴方向平移值
	 * @param y Y轴方向平移值
	 * @param z Z轴方向平移值
	 */
	public void translate(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void translate_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void translate_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		translate_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	native private void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle);
	/**
	 * 旋转几何体，默认提供包围盒中心点旋转
	 * @param xRef 旋转参考点X值
	 * @param yRef 旋转参考点Y值
	 * @param zRef 旋转参考点Z值
	 * @param x X轴方向旋转角度
	 * @param y Y轴方向旋转角度
	 * @param z Z轴方向旋转角度
	 */
	public void rotate(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xAngleParamValue = xAngle;
		double yAngleParamValue = yAngle;
		double zAngleParamValue = zAngle;
		rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xAngleParamValue, yAngleParamValue, zAngleParamValue);
	}
	native private void rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle);
	protected void rotate_NoVirtual(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xAngleParamValue = xAngle;
		double yAngleParamValue = yAngle;
		double zAngleParamValue = zAngle;
		rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xAngleParamValue, yAngleParamValue, zAngleParamValue);
	}

	native private void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double xRef, double yRef, double zRef, double x, double y, double z);
	/**
	 * 旋转几何体，默认提供包围盒中心点缩放
	 * @param x X轴方向缩放比例，[-1,1]
	 * @param y Y轴方向缩放比例，[-1,1]
	 * @param z Z轴方向缩放比例，[-1,1]
	 */
	public void scale(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double xRef, double yRef, double zRef, double x, double y, double z);
	protected void scale_NoVirtual(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		double xRefParamValue = xRef;
		double yRefParamValue = yRef;
		double zRefParamValue = zRef;
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xRefParamValue, yRefParamValue, zRefParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, long sr, long sevenParam, long count);
	/**
	 * 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
	 * @param sr 新坐标系统
	 * @param seven 七参数，顺序为：offsetX,offsetY,offsetZ,scaleX,scaleY,scaleZ,radio
	 * @param count 七参数数目
	 */
	public void projects(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer sevenParam, long count)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long sevenParamParamValue = (sevenParam == null ? 0L : sevenParam.nativeObject.pointer);
		long countParamValue = count;
		projects_ISpatialReference_ev_real64_ev_uint32(this.nativeObject.pointer, srParamValue, sevenParamParamValue, countParamValue);
	}
	native private void projects_ISpatialReference_ev_real64_ev_uint32_NoVirtual(long pNativeObject, long sr, long sevenParam, long count);
	protected void projects_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer sevenParam, long count)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long sevenParamParamValue = (sevenParam == null ? 0L : sevenParam.nativeObject.pointer);
		long countParamValue = count;
		projects_ISpatialReference_ev_real64_ev_uint32_NoVirtual(this.nativeObject.pointer, srParamValue, sevenParamParamValue, countParamValue);
	}

	native private void update_void(long pNativeObject);
	/**
	 * 参数发生变化时更新椭圆弧
	 * @param  
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long mirror_IGeometry(long pNativeObject, long line);
	/**
	 * 对称变换
	 * @param line 对称变换的参照线
	 * @return 变换后的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry mirror(com.earthview.world.spatial.geometry.Igeometry line)
	{
		long lineParamValue = (line == null ? 0L : line.nativeObject.pointer);
		long returnValue = mirror_IGeometry(this.nativeObject.pointer, lineParamValue);
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
	native private long mirror_IGeometry_NoVirtual(long pNativeObject, long line);
	protected com.earthview.world.spatial.geometry.Igeometry mirror_NoVirtual(com.earthview.world.spatial.geometry.Igeometry line)
	{
		long lineParamValue = (line == null ? 0L : line.nativeObject.pointer);
		long returnValue = mirror_IGeometry_NoVirtual(this.nativeObject.pointer, lineParamValue);
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

	native private long split_IGeometry(long pNativeObject, long splitLine);
	/**
	 * 分割
	 * @param splitLine 分割线
	 * @return 分割后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry split(com.earthview.world.spatial.geometry.Igeometry splitLine)
	{
		long splitLineParamValue = (splitLine == null ? 0L : splitLine.nativeObject.pointer);
		long returnValue = split_IGeometry(this.nativeObject.pointer, splitLineParamValue);
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
	native private long split_IGeometry_NoVirtual(long pNativeObject, long splitLine);
	protected com.earthview.world.spatial.geometry.Igeometry split_NoVirtual(com.earthview.world.spatial.geometry.Igeometry splitLine)
	{
		long splitLineParamValue = (splitLine == null ? 0L : splitLine.nativeObject.pointer);
		long returnValue = split_IGeometry_NoVirtual(this.nativeObject.pointer, splitLineParamValue);
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

	native private long clip_IGeometry(long pNativeObject, long clipRegion);
	/**
	 * 裁剪
	 * @param clipRegion 裁剪区域多边形
	 * @return 裁剪后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry clip(com.earthview.world.spatial.geometry.Igeometry clipRegion)
	{
		long clipRegionParamValue = (clipRegion == null ? 0L : clipRegion.nativeObject.pointer);
		long returnValue = clip_IGeometry(this.nativeObject.pointer, clipRegionParamValue);
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
	native private long clip_IGeometry_NoVirtual(long pNativeObject, long clipRegion);
	protected com.earthview.world.spatial.geometry.Igeometry clip_NoVirtual(com.earthview.world.spatial.geometry.Igeometry clipRegion)
	{
		long clipRegionParamValue = (clipRegion == null ? 0L : clipRegion.nativeObject.pointer);
		long returnValue = clip_IGeometry_NoVirtual(this.nativeObject.pointer, clipRegionParamValue);
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

	native private long snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(long pNativeObject, long point, double tolerance, long snap);
	/**
	 * 捕捉点
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @param snap 捕捉类型参数
	 * @return 捕捉到的点
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToPoint(com.earthview.world.spatial.geometry.Igeometry point, double tolerance, EnumPointer snap)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long snapParamValue = snap.nativeObject.pointer;
		long returnValue = snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(this.nativeObject.pointer, pointParamValue, toleranceParamValue, snapParamValue);
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
	native private long snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(long pNativeObject, long point, double tolerance, long snap);
	protected com.earthview.world.spatial.geometry.Igeometry snapToPoint_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point, double tolerance, EnumPointer snap)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long snapParamValue = snap.nativeObject.pointer;
		long returnValue = snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(this.nativeObject.pointer, pointParamValue, toleranceParamValue, snapParamValue);
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

	native private long snapToSegment_IGeometry_ev_real64(long pNativeObject, long point, double tolerance);
	/**
	 * 捕捉线段
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @return 捕捉到的线段
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToSegment(com.earthview.world.spatial.geometry.Igeometry point, double tolerance)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long returnValue = snapToSegment_IGeometry_ev_real64(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
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
	native private long snapToSegment_IGeometry_ev_real64_NoVirtual(long pNativeObject, long point, double tolerance);
	protected com.earthview.world.spatial.geometry.Igeometry snapToSegment_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point, double tolerance)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		double toleranceParamValue = tolerance;
		long returnValue = snapToSegment_IGeometry_ev_real64_NoVirtual(this.nativeObject.pointer, pointParamValue, toleranceParamValue);
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

	native private boolean movePointTo_IGeometry_IGeometry(long pNativeObject, long frmPoint, long cpy_toPoint);
	/**
	 * 移动一个点
	 * @param frmPoint 待移动的点
	 * @param toPoint 目标点
	 */
	public boolean movePointTo(com.earthview.world.spatial.geometry.Igeometry frmPoint, com.earthview.world.spatial.geometry.Igeometry cpy_toPoint)
	{
		long frmPointParamValue = (frmPoint == null ? 0L : frmPoint.nativeObject.pointer);
		long cpy_toPointParamValue = (cpy_toPoint == null ? 0L : cpy_toPoint.nativeObject.pointer);
		boolean returnValue = movePointTo_IGeometry_IGeometry(this.nativeObject.pointer, frmPointParamValue, cpy_toPointParamValue);
		return returnValue;
	}
	native private boolean movePointTo_IGeometry_IGeometry_NoVirtual(long pNativeObject, long frmPoint, long cpy_toPoint);
	protected boolean movePointTo_NoVirtual(com.earthview.world.spatial.geometry.Igeometry frmPoint, com.earthview.world.spatial.geometry.Igeometry cpy_toPoint)
	{
		long frmPointParamValue = (frmPoint == null ? 0L : frmPoint.nativeObject.pointer);
		long cpy_toPointParamValue = (cpy_toPoint == null ? 0L : cpy_toPoint.nativeObject.pointer);
		boolean returnValue = movePointTo_IGeometry_IGeometry_NoVirtual(this.nativeObject.pointer, frmPointParamValue, cpy_toPointParamValue);
		return returnValue;
	}

	native private boolean addPointTo_IGeometry(long pNativeObject, long cpy_point);
	/**
	 * 增加一个点
	 * @param point 待增加的点
	 */
	public boolean addPointTo(com.earthview.world.spatial.geometry.Igeometry cpy_point)
	{
		long cpy_pointParamValue = (cpy_point == null ? 0L : cpy_point.nativeObject.pointer);
		boolean returnValue = addPointTo_IGeometry(this.nativeObject.pointer, cpy_pointParamValue);
		return returnValue;
	}
	native private boolean addPointTo_IGeometry_NoVirtual(long pNativeObject, long cpy_point);
	protected boolean addPointTo_NoVirtual(com.earthview.world.spatial.geometry.Igeometry cpy_point)
	{
		long cpy_pointParamValue = (cpy_point == null ? 0L : cpy_point.nativeObject.pointer);
		boolean returnValue = addPointTo_IGeometry_NoVirtual(this.nativeObject.pointer, cpy_pointParamValue);
		return returnValue;
	}

	native private boolean deletePoint_IGeometry(long pNativeObject, long point);
	/**
	 * 删除一个点
	 * @param point 待删除的点
	 */
	public boolean deletePoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = deletePoint_IGeometry(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}
	native private boolean deletePoint_IGeometry_NoVirtual(long pNativeObject, long point);
	protected boolean deletePoint_NoVirtual(com.earthview.world.spatial.geometry.Igeometry point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		boolean returnValue = deletePoint_IGeometry_NoVirtual(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}

	native private long clone2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.EllipticArc clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.EllipticArc __returnValue = new com.earthview.world.spatial.geometry.EllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEllipticArc");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.EllipticArc)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEllipticArc");
		}
		return __returnValue;
	}
	public EllipticArc(com.earthview.world.spatial.geometry.EllipticArc obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCEllipticArcProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.EllipticArc".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CEllipticArc(long pNativeObject, long obj);
	public com.earthview.world.spatial.geometry.EllipticArc OperatorAssign(com.earthview.world.spatial.geometry.EllipticArc obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		long returnValue = OperatorAssign_CEllipticArc(this.nativeObject.pointer, objParamValue);
		com.earthview.world.spatial.geometry.EllipticArc __returnValue = new com.earthview.world.spatial.geometry.EllipticArc(CreatedWhenConstruct.CWC_NotToCreate, "CEllipticArc");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.EllipticArc)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEllipticArc");
		}
		return __returnValue;
	}
	public EllipticArc(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EllipticArc(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取起始点
	 * @param  
	 * @return 起始点
	 */
	public com.earthview.world.spatial.geometry.Point getStartPoint()
	{
		return super.getStartPoint_NoVirtual();
	}
	/**
	 * 获取结尾点
	 * @param  
	 * @return 结尾点
	 */
	public com.earthview.world.spatial.geometry.Point getEndPoint()
	{
		return super.getEndPoint_NoVirtual();
	}
	/**
	 * 判断是否环。判断标准是必须简单曲线，然后首尾点相等。
	 * @param  
	 */
	public boolean isRing()
	{
		return super.isRing_NoVirtual();
	}
	/**
	 * 转换成折线
	 * @param smooth 平滑度
	 */
	public com.earthview.world.spatial.geometry.LineString toLineString(long smooth)
	{
		return super.toLineString_NoVirtual(smooth);
	}
	/**
	 * 判断对象的参数是否发生变化
	 * @param  
	 * @return true，表示发生变化，false，表示没有变化
	 */
	public boolean isDirty()
	{
		return super.isDirty_NoVirtual();
	}
	/**
	 * 设置对象的更新标识
	 * @param dirty 新的更新标识
	 */
	public void setDirty(boolean dirty)
	{
		super.setDirty_NoVirtual(dirty);
	}
	/**
	 * 用道格拉斯算法对几何对象进行化简
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 化简后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry resample(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.resample_NoVirtual(tolerance, dimension);
	}
	/**
	 * 平滑
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 平滑处理后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry smooth(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.smooth_NoVirtual(tolerance, dimension);
	}
	/**
	 * 获取几何体对象的最大外包围盒
	 * @param  
	 * @return 最大外包围盒，const对象，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的空间参考系
	 * @param  
	 * @return 空间参考系，const对象指针，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		return super.getSpatialReferenceRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的类型
	 * @param  
	 * @return 返回几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取几何体对象的WKB类型
	 * @param  
	 * @return 返回几何体WKB类型
	 */
	public com.earthview.world.spatial.geometry.EVWKBGeometryType getWKBGeometryType()
	{
		return super.getWKBGeometryType_NoVirtual();
	}
	/**
	 * 判断几何体是否为简单几何体。所谓简单几何体，就是几何体对象没有自相交情况。
	 * @param  
	 * @return 如果为真，返回true；否则，返回false
	 */
	public boolean isSimple()
	{
		return super.isSimple_NoVirtual();
	}
	/**
	 * 把复杂几何体重新切分，组成简单几何体对象。内部会调用isSimple()方法，判断是否为简单几何体。
	 * @param  
	 */
	public void simplify()
	{
		super.simplify_NoVirtual();
	}
	/**
	 * 获取几何体对象的外边框对象。点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
	 * @param  
	 * @return 返回Geometry对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry getBoundary()
	{
		return super.getBoundary_NoVirtual();
	}
	/**
	 * 设置空间坐标系
	 * @param sr 空间坐标系
	 */
	public void setSpatialReferenceRef(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReferenceRef_NoVirtual(ref_sr);
	}
	/**
	 * /判断该几何体对象是否包含指定几何体对象。/目前，只支持2维几何体对象的空间关系。/
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果包含，则返回true；否则，返回false
	 */
	public boolean isContains(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isContains_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否相离指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相离，则返回true；否则，返回false
	 */
	public boolean isDisjoin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isDisjoin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否相交指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相交，则返回true；否则，返回false
	 */
	public boolean isIntersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isIntersects_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否被包含在指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果被包含，则返回true；否则，返回false
	 */
	public boolean isWithin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isWithin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象相接。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相接，则返回true；否则，返回false
	 */
	public boolean isTouches(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isTouches_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否跨越指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果跨越，则返回true；否则，返回false
	 */
	public boolean isCrosses(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isCrosses_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象有空间关系。空间关系，利用九交模型进行描述。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param relateMatrix 空间关系九交矩阵
	 * @param dimension 指定几何体维数
	 * @return 如果有关系，则返回true；否则，返回false
	 */
	public boolean isRelates(com.earthview.world.spatial.geometry.Igeometry geom, String relateMatrix, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isRelates_NoVirtual(geom, relateMatrix, dimension);
	}
	/**
	 * 创建一个Buffer几何体。
	 * @param tolerance 指定容差范围
	 * @param dimension 指定几何体维数
	 * @return 新Buffer对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry buffer(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.buffer_NoVirtual(tolerance, dimension);
	}
	/**
	 * 获取凸多边形。目前，只支持2维几何体对象的空间关系。
	 * @param dimension 指定几何体维数
	 * @return 如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。
	 */
	public com.earthview.world.spatial.geometry.Igeometry convexHull(com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.convexHull_NoVirtual(dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry difference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.difference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间最小距离。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 几何体之间的最小距离
	 */
	public double distance(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.distance_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相交部分。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry intersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.intersects_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相叠加。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry overlaps(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.overlaps_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry symDifference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.symDifference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象合并后的新几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry unions(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.unions_NoVirtual(geom, dimension);
	}
	/**
	 * 序列化成WKB格式流
	 * @param stream 数据流
	 */
	public void toWKB(com.earthview.world.core.DataStream stream)
	{
		super.toWKB_NoVirtual(stream);
	}
	/**
	 * 序列化成WKT格式字符串
	 * @param wkt 字符串
	 */
	public void toWKT(StringPointer wkt)
	{
		super.toWKT_NoVirtual(wkt);
	}
	/**
	 * 序列化成数据流
	 * @param stream 数据流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 获取内部中心点
	 * @param coor 内部中心点
	 * @return 获取成功返回true,否则返回false
	 */
	public boolean getInteriorPoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		return super.getInteriorPoint_NoVirtual(point);
	}
	
	native protected void register_toLineString2_ev_uint32(long pNativeObject, String method);
	native protected void register_getStartPoint_void(long pNativeObject, String method);
	native protected void register_getStartPoint2_void(long pNativeObject, String method);
	native protected void register_getEndPoint_void(long pNativeObject, String method);
	native protected void register_getEndPoint2_void(long pNativeObject, String method);
	native protected void register_getLength_void(long pNativeObject, String method);
	native protected void register_isClosed_void(long pNativeObject, String method);
	native protected void register_isRing_void(long pNativeObject, String method);
	native protected void register_reverse_void(long pNativeObject, String method);
	native protected void register_toLineString_ev_uint32(long pNativeObject, String method);
	native protected void register_isDirty_void(long pNativeObject, String method);
	native protected void register_setDirty_ev_bool(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_resample_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_mirror_IGeometry(long pNativeObject, String method);
	native protected void register_split_IGeometry(long pNativeObject, String method);
	native protected void register_clip_IGeometry(long pNativeObject, String method);
	native protected void register_smooth_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(long pNativeObject, String method);
	native protected void register_snapToSegment_IGeometry_ev_real64(long pNativeObject, String method);
	native protected void register_movePointTo_IGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_addPointTo_IGeometry(long pNativeObject, String method);
	native protected void register_deletePoint_IGeometry(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getWKBGeometryType_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isEmpty_void(long pNativeObject, String method);
	native protected void register_isSimple_void(long pNativeObject, String method);
	native protected void register_simplify_void(long pNativeObject, String method);
	native protected void register_getBoundary_void(long pNativeObject, String method);
	native protected void register_makeZ_ev_real64(long pNativeObject, String method);
	native protected void register_makeM_ev_real64(long pNativeObject, String method);
	native protected void register_setSpatialReferenceRef_ISpatialReference(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_isContains_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isEquals_IGeometry_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_isDisjoin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isIntersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isWithin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isTouches_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isCrosses_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isRelates_IGeometry_EVString_EVDimensionType(long pNativeObject, String method);
	native protected void register_buffer_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_convexHull_EVDimensionType(long pNativeObject, String method);
	native protected void register_difference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_distance_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_intersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_overlaps_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_symDifference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_unions_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_toWKB_CDataStream(long pNativeObject, String method);
	native protected void register_toWKT_EVString(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_translate_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_getInteriorPoint_IGeometry(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_toLineString2_ev_uint32(this.nativeObject.pointer, "toLineString2_ev_uint32_callback");
			this.register_getStartPoint_void(this.nativeObject.pointer, "getStartPoint_void_callback");
			this.register_getStartPoint2_void(this.nativeObject.pointer, "getStartPoint2_void_callback");
			this.register_getEndPoint_void(this.nativeObject.pointer, "getEndPoint_void_callback");
			this.register_getEndPoint2_void(this.nativeObject.pointer, "getEndPoint2_void_callback");
			this.register_getLength_void(this.nativeObject.pointer, "getLength_void_callback");
			this.register_isClosed_void(this.nativeObject.pointer, "isClosed_void_callback");
			this.register_isRing_void(this.nativeObject.pointer, "isRing_void_callback");
			this.register_reverse_void(this.nativeObject.pointer, "reverse_void_callback");
			this.register_toLineString_ev_uint32(this.nativeObject.pointer, "toLineString_ev_uint32_callback");
			this.register_isDirty_void(this.nativeObject.pointer, "isDirty_void_callback");
			this.register_setDirty_ev_bool(this.nativeObject.pointer, "setDirty_ev_bool_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_resample_ev_real64_EVDimensionType(this.nativeObject.pointer, "resample_ev_real64_EVDimensionType_callback");
			this.register_mirror_IGeometry(this.nativeObject.pointer, "mirror_IGeometry_callback");
			this.register_split_IGeometry(this.nativeObject.pointer, "split_IGeometry_callback");
			this.register_clip_IGeometry(this.nativeObject.pointer, "clip_IGeometry_callback");
			this.register_smooth_ev_real64_EVDimensionType(this.nativeObject.pointer, "smooth_ev_real64_EVDimensionType_callback");
			this.register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(this.nativeObject.pointer, "snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback");
			this.register_snapToSegment_IGeometry_ev_real64(this.nativeObject.pointer, "snapToSegment_IGeometry_ev_real64_callback");
			this.register_movePointTo_IGeometry_IGeometry(this.nativeObject.pointer, "movePointTo_IGeometry_IGeometry_callback");
			this.register_addPointTo_IGeometry(this.nativeObject.pointer, "addPointTo_IGeometry_callback");
			this.register_deletePoint_IGeometry(this.nativeObject.pointer, "deletePoint_IGeometry_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getWKBGeometryType_void(this.nativeObject.pointer, "getWKBGeometryType_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isEmpty_void(this.nativeObject.pointer, "isEmpty_void_callback");
			this.register_isSimple_void(this.nativeObject.pointer, "isSimple_void_callback");
			this.register_simplify_void(this.nativeObject.pointer, "simplify_void_callback");
			this.register_getBoundary_void(this.nativeObject.pointer, "getBoundary_void_callback");
			this.register_makeZ_ev_real64(this.nativeObject.pointer, "makeZ_ev_real64_callback");
			this.register_makeM_ev_real64(this.nativeObject.pointer, "makeM_ev_real64_callback");
			this.register_setSpatialReferenceRef_ISpatialReference(this.nativeObject.pointer, "setSpatialReferenceRef_ISpatialReference_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_isContains_IGeometry_EVDimensionType(this.nativeObject.pointer, "isContains_IGeometry_EVDimensionType_callback");
			this.register_isEquals_IGeometry_ev_real64_EVDimensionType(this.nativeObject.pointer, "isEquals_IGeometry_ev_real64_EVDimensionType_callback");
			this.register_isDisjoin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isDisjoin_IGeometry_EVDimensionType_callback");
			this.register_isIntersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "isIntersects_IGeometry_EVDimensionType_callback");
			this.register_isWithin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isWithin_IGeometry_EVDimensionType_callback");
			this.register_isTouches_IGeometry_EVDimensionType(this.nativeObject.pointer, "isTouches_IGeometry_EVDimensionType_callback");
			this.register_isCrosses_IGeometry_EVDimensionType(this.nativeObject.pointer, "isCrosses_IGeometry_EVDimensionType_callback");
			this.register_isRelates_IGeometry_EVString_EVDimensionType(this.nativeObject.pointer, "isRelates_IGeometry_EVString_EVDimensionType_callback");
			this.register_buffer_ev_real64_EVDimensionType(this.nativeObject.pointer, "buffer_ev_real64_EVDimensionType_callback");
			this.register_convexHull_EVDimensionType(this.nativeObject.pointer, "convexHull_EVDimensionType_callback");
			this.register_difference_IGeometry_EVDimensionType(this.nativeObject.pointer, "difference_IGeometry_EVDimensionType_callback");
			this.register_distance_IGeometry_EVDimensionType(this.nativeObject.pointer, "distance_IGeometry_EVDimensionType_callback");
			this.register_intersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "intersects_IGeometry_EVDimensionType_callback");
			this.register_overlaps_IGeometry_EVDimensionType(this.nativeObject.pointer, "overlaps_IGeometry_EVDimensionType_callback");
			this.register_symDifference_IGeometry_EVDimensionType(this.nativeObject.pointer, "symDifference_IGeometry_EVDimensionType_callback");
			this.register_unions_IGeometry_EVDimensionType(this.nativeObject.pointer, "unions_IGeometry_EVDimensionType_callback");
			this.register_toWKB_CDataStream(this.nativeObject.pointer, "toWKB_CDataStream_callback");
			this.register_toWKT_EVString(this.nativeObject.pointer, "toWKT_EVString_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_translate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "translate_ev_real64_ev_real64_ev_real64_callback");
			this.register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_projects_ISpatialReference_ev_real64_ev_uint32(this.nativeObject.pointer, "projects_ISpatialReference_ev_real64_ev_uint32_callback");
			this.register_getInteriorPoint_IGeometry(this.nativeObject.pointer, "getInteriorPoint_IGeometry_callback");
		}
	}
	
	public static EllipticArc fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EllipticArc obj = null;
 		if(baseObj instanceof EllipticArc)
		{
			obj = (EllipticArc)baseObj;
		} else {
			obj = new EllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEllipticArc");
			obj.increaseCast();
		}

		return obj;
	}
}
