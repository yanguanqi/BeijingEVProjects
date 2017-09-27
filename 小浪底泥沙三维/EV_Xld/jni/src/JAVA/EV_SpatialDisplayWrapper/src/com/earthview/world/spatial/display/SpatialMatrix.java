package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialMatrix extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialMatrix", new SpatialMatrixClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param   
	 * @return 
	 */
	public SpatialMatrix() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSpatialMatrix", null);
	}

	/**
	 * 构造函数
	 * @param   
	 * @return 
	 */
	public SpatialMatrix(double m11, double m12, double m21, double m22, double dx, double dy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer m11Ptr = new BasePointer(m11);
		list.add("m11", m11Ptr.get());
		BasePointer m12Ptr = new BasePointer(m12);
		list.add("m12", m12Ptr.get());
		BasePointer m21Ptr = new BasePointer(m21);
		list.add("m21", m21Ptr.get());
		BasePointer m22Ptr = new BasePointer(m22);
		list.add("m22", m22Ptr.get());
		BasePointer dxPtr = new BasePointer(dx);
		list.add("dx", dxPtr.get());
		BasePointer dyPtr = new BasePointer(dy);
		list.add("dy", dyPtr.get());
		Create("CSpatialMatrix", list);
	}

	/**
	 * 构造函数
	 * @param   
	 * @return 
	 */
	public SpatialMatrix(com.earthview.world.spatial.display.SpatialMatrix matrix) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer matrixPtr = new BasePointer(matrix);
		list.add("matrix", matrixPtr.get());
		Create("CSpatialMatrix", list);
	}

	native private void setMatrix_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double m11, double m12, double m21, double m22, double dx, double dy);
	/**
	 * 设置矩阵
	 * @param m11  矩阵1行1列的值
	 * @param m12  矩阵1行2列的值
	 * @param m21  矩阵2行1列的值
	 * @param m22  矩阵2行2列的值
	 * @param dx  矩阵的x坐标值
	 * @param dy  矩阵的y坐标值
	 * @return 
	 */
	public void setMatrix(double m11, double m12, double m21, double m22, double dx, double dy)
	{
		double m11ParamValue = m11;
		double m12ParamValue = m12;
		double m21ParamValue = m21;
		double m22ParamValue = m22;
		double dxParamValue = dx;
		double dyParamValue = dy;
		setMatrix_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, m11ParamValue, m12ParamValue, m21ParamValue, m22ParamValue, dxParamValue, dyParamValue);
	}
	native private double m11_void(long pNativeObject);
	/**
	 * 矩阵1行1列的值
	 * @param   
	 * @return 矩阵1行1列的值
	 */
	public double m11()
	{
		double returnValue = m11_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double m12_void(long pNativeObject);
	/**
	 * 矩阵1行2列的值
	 * @param   
	 * @return 矩阵1行2列的值
	 */
	public double m12()
	{
		double returnValue = m12_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double m21_void(long pNativeObject);
	/**
	 * 矩阵2行1列的值
	 * @param   
	 * @return 矩阵2行1列的值
	 */
	public double m21()
	{
		double returnValue = m21_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double m22_void(long pNativeObject);
	/**
	 * 矩阵2行2列的值
	 * @param   
	 * @return 矩阵2行2列的值
	 */
	public double m22()
	{
		double returnValue = m22_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double dx_void(long pNativeObject);
	/**
	 * 矩阵的x坐标值
	 * @param   
	 * @return 矩阵的x坐标值
	 */
	public double dx()
	{
		double returnValue = dx_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double dy_void(long pNativeObject);
	/**
	 * 矩阵的y坐标值
	 * @param   
	 * @return 矩阵的y坐标值
	 */
	public double dy()
	{
		double returnValue = dy_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void transform_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, long tx, long ty);
	/**
	 * 矩阵转换
	 * @param  x  矩阵的x坐标
	 * @param  y  矩阵的y坐标
	 * @param  tx  矩阵转换后的x坐标
	 * @param  ty  矩阵转换后的y坐标
	 * @return 
	 */
	public void transform(double x, double y, DoublePointer tx, DoublePointer ty)
	{
		double xParamValue = x;
		double yParamValue = y;
		long txParamValue = (tx == null ? 0L : tx.nativeObject.pointer);
		long tyParamValue = (ty == null ? 0L : ty.nativeObject.pointer);
		transform_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, txParamValue, tyParamValue);
	}
	native private void transform_ev_real64_ev_real64_ev_int32(long pNativeObject, long x, long y, int count);
	/**
	 * 矩阵转换
	 * @param  x  矩阵的x坐标
	 * @param  y  矩阵的y坐标
	 * @param  count 要转换矩阵的数目
	 * @return 
	 */
	public void transform(DoublePointer x, DoublePointer y, int count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		int countParamValue = count;
		transform_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	native private long mapRect_CSpatialRect(long pNativeObject, long rect);
	/**
	 * 地图上的矩形
	 * @param rect  地图上的矩形
	 * @return 
	 */
	public com.earthview.world.spatial.display.SpatialRect mapRect(com.earthview.world.spatial.display.SpatialRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		long returnValue = mapRect_CSpatialRect(this.nativeObject.pointer, rectParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重新设置
	 * @param   
	 * @return 
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private boolean isIdentity_void(long pNativeObject);
	/**
	 * 是否标识
	 * @param   
	 * @return 
	 */
	public boolean isIdentity()
	{
		boolean returnValue = isIdentity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long translate_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 转化
	 * @param dx  转化的x坐标
	 * @param dy  转化的y坐标
	 * @return 
	 */
	public com.earthview.world.spatial.display.SpatialMatrix translate(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		long returnValue = translate_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private long scale_ev_real64_ev_real64(long pNativeObject, double sx, double sy);
	/**
	 * 比例
	 * @param sx x坐标的比例
	 * @param sy y坐标的比例
	 * @return 
	 */
	public com.earthview.world.spatial.display.SpatialMatrix scale(double sx, double sy)
	{
		double sxParamValue = sx;
		double syParamValue = sy;
		long returnValue = scale_ev_real64_ev_real64(this.nativeObject.pointer, sxParamValue, syParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private long shear_ev_real64_ev_real64(long pNativeObject, double sh, double sv);
	/**
	 * 切断
	 * @param  sh  切断的x坐标
	 * @param  sv  切断的y坐标
	 * @return 
	 */
	public com.earthview.world.spatial.display.SpatialMatrix shear(double sh, double sv)
	{
		double shParamValue = sh;
		double svParamValue = sv;
		long returnValue = shear_ev_real64_ev_real64(this.nativeObject.pointer, shParamValue, svParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private long rotate_ev_real64(long pNativeObject, double a);
	/**
	 * 旋转
	 * @param  a  旋转的角度
	 * @return 旋后的空间矩阵
	 */
	public com.earthview.world.spatial.display.SpatialMatrix rotate(double a)
	{
		double aParamValue = a;
		long returnValue = rotate_ev_real64(this.nativeObject.pointer, aParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private long rotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double x, double y);
	/**
	 * 旋转位置
	 * @param  angle  旋转的角度
	 * @param  a  旋转点的X坐标
	 * @param  a  旋转点的Y坐标
	 * @return 旋后的空间矩阵
	 */
	public com.earthview.world.spatial.display.SpatialMatrix rotateAt(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = rotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private boolean isInvertible_void(long pNativeObject);
	/**
	 * 是否可以反转
	 * @param   
	 * @return 可以反转返回true,不能反转返回false
	 */
	public boolean isInvertible()
	{
		boolean returnValue = isInvertible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double determinant_void(long pNativeObject);
	/**
	 * 行列式
	 * @param   
	 * @return 行列式计算的值
	 */
	public double determinant()
	{
		double returnValue = determinant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double det_void(long pNativeObject);
	/**
	 * 分离
	 * @param   
	 * @return 分离后的值
	 */
	public double det()
	{
		double returnValue = det_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long inverted_void(long pNativeObject);
	/**
	 * 反转
	 * @param   
	 * @return 反转后的矩阵
	 */
	public com.earthview.world.spatial.display.SpatialMatrix inverted()
	{
		long returnValue = inverted_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CSpatialMatrix(long pNativeObject, long o);
	public boolean OperatorEquals(com.earthview.world.spatial.display.SpatialMatrix o)
	{
		long oParamValue = o.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CSpatialMatrix(this.nativeObject.pointer, oParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CSpatialMatrix(long pNativeObject, long o);
	public boolean OperatorNotEquals(com.earthview.world.spatial.display.SpatialMatrix o)
	{
		long oParamValue = o.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CSpatialMatrix(this.nativeObject.pointer, oParamValue);
		return returnValue;
	}
	native private long OperatorMultiply_CSpatialMatrix(long pNativeObject, long o);
	public com.earthview.world.spatial.display.SpatialMatrix OperatorMultiply(com.earthview.world.spatial.display.SpatialMatrix o)
	{
		long oParamValue = o.nativeObject.pointer;
		long returnValue = OperatorMultiply_CSpatialMatrix(this.nativeObject.pointer, oParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSpatialMatrix(long pNativeObject, long o);
	public com.earthview.world.spatial.display.SpatialMatrix OperatorAssign(com.earthview.world.spatial.display.SpatialMatrix o)
	{
		long oParamValue = o.nativeObject.pointer;
		long returnValue = OperatorAssign_CSpatialMatrix(this.nativeObject.pointer, oParamValue);
		com.earthview.world.spatial.display.SpatialMatrix __returnValue = new com.earthview.world.spatial.display.SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialMatrix");
		}
		return __returnValue;
	}
	public SpatialMatrix(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialMatrix(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SpatialMatrix fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialMatrix obj = null;
 		if(baseObj instanceof SpatialMatrix)
		{
			obj = (SpatialMatrix)baseObj;
		} else {
			obj = new SpatialMatrix(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialMatrix");
			obj.increaseCast();
		}

		return obj;
	}
}
