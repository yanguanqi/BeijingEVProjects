package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字段类基类
 */
public class Itableproxy extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::ITableProxy", new ItableproxyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JITableProxyProxy", new ItableproxyClassFactory());
	}

	protected  long max_EVString_callback(String expression)
	{
		String expressionParamValue = expression;
		com.earthview.world.core.Variant returnValue = max(expressionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long max_EVString(long pNativeObject, String expression);
	/**
	 * 获取指定表达式下最大值
	 * @param expression 表达式
	 * @return 返回最爱值
	 */
	public com.earthview.world.core.Variant max(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = max_EVString(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long max_EVString_NoVirtual(long pNativeObject, String expression);
	protected com.earthview.world.core.Variant max_NoVirtual(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = max_EVString_NoVirtual(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  long min_EVString_callback(String expression)
	{
		String expressionParamValue = expression;
		com.earthview.world.core.Variant returnValue = min(expressionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long min_EVString(long pNativeObject, String expression);
	/**
	 * 获取指定表达式下最小值
	 * @param expression 表达式
	 * @return 返回最小值
	 */
	public com.earthview.world.core.Variant min(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = min_EVString(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long min_EVString_NoVirtual(long pNativeObject, String expression);
	protected com.earthview.world.core.Variant min_NoVirtual(String expression)
	{
		String expressionParamValue = expression;
		long returnValue = min_EVString_NoVirtual(this.nativeObject.pointer, expressionParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  long column_EVString_ev_bool_callback(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		com.earthview.world.core.VariantArray returnValue = column(fieldNameParamValue, isUniqueParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long column_EVString_ev_bool(long pNativeObject, String fieldName, boolean isUnique);
	/**
	 * 获取字段值数组
	 * @param fieldName 字段名
	 * @param isUnique 是否唯一
	 * @return 返回字段值数组
	 */
	public com.earthview.world.core.VariantArray column(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		long returnValue = column_EVString_ev_bool(this.nativeObject.pointer, fieldNameParamValue, isUniqueParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}
	native private long column_EVString_ev_bool_NoVirtual(long pNativeObject, String fieldName, boolean isUnique);
	protected com.earthview.world.core.VariantArray column_NoVirtual(String fieldName, boolean isUnique)
	{
		String fieldNameParamValue = fieldName;
		boolean isUniqueParamValue = isUnique;
		long returnValue = column_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, fieldNameParamValue, isUniqueParamValue);
		com.earthview.world.core.VariantArray __returnValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.VariantArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariantArray");
		}
		return __returnValue;
	}

	public Itableproxy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itableproxy(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_max_EVString(long pNativeObject, String method);
	native protected void register_min_EVString(long pNativeObject, String method);
	native protected void register_column_EVString_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_max_EVString(this.nativeObject.pointer, "max_EVString_callback");
			this.register_min_EVString(this.nativeObject.pointer, "min_EVString_callback");
			this.register_column_EVString_ev_bool(this.nativeObject.pointer, "column_EVString_ev_bool_callback");
		}
	}
	
	public static Itableproxy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itableproxy obj = null;
 		if(baseObj instanceof Itableproxy)
		{
			obj = (Itableproxy)baseObj;
		} else {
			obj = new Itableproxy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITableProxy");
			obj.increaseCast();
		}

		return obj;
	}
}
