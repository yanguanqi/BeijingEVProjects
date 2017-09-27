package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字解算类解决线性代数解算的问题
 */
public class NumericSolver extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNumericSolver", new NumericSolverClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public NumericSolver() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNumericSolver", null);
	}

	native private static boolean solveNxNLinearSysDestr_ev_int32_ev_real64_ev_real64(int n, long coeff, long col);
	/**
	 * 解算线性方程组（采用高斯消元法来结算）
	 * @param n 变量个数
	 * @param coeff 多项式系数的数组
	 * @param col 存放方程组等式右边的数的数组
	 * @return 能够成功解算返回true，否则返回false
	 */
	public static boolean solveNxNLinearSysDestr(int n, NativeObjectPointer<DoublePointer> coeff, DoublePointer col)
	{
		int nParamValue = n;
		long coeffParamValue = (coeff == null ? 0L : coeff.nativeObject.pointer);
		long colParamValue = (col == null ? 0L : col.nativeObject.pointer);
		boolean returnValue = solveNxNLinearSysDestr_ev_int32_ev_real64_ev_real64(nParamValue, coeffParamValue, colParamValue);
		return returnValue;
	}
	public NumericSolver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NumericSolver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NumericSolver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NumericSolver obj = null;
 		if(baseObj instanceof NumericSolver)
		{
			obj = (NumericSolver)baseObj;
		} else {
			obj = new NumericSolver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNumericSolver");
			obj.increaseCast();
		}

		return obj;
	}
}
