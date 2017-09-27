package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ivectorfiletableproxy extends com.earthview.world.spatial.geodataset.Itableproxy {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy", new IvectorfiletableproxyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileTableProxyProxy", new IvectorfiletableproxyClassFactory());
	}

	public Ivectorfiletableproxy(com.earthview.world.spatial.vectorfileparser.Ivectorfilefeatureclass pVectorFileFeatureClass) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pVectorFileFeatureClassPtr = new BasePointer(pVectorFileFeatureClass);
		list.add("pVectorFileFeatureClass", pVectorFileFeatureClassPtr.get());
		Create("JIVectorFileTableProxyProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.vectorfileparser.Ivectorfiletableproxy".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long max_EVString(long pNativeObject, String expression);
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

	native private long min_EVString(long pNativeObject, String expression);
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

	native private long column_EVString_ev_bool(long pNativeObject, String fieldName, boolean isUnique);
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

	public Ivectorfiletableproxy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ivectorfiletableproxy(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Ivectorfiletableproxy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ivectorfiletableproxy obj = null;
 		if(baseObj instanceof Ivectorfiletableproxy)
		{
			obj = (Ivectorfiletableproxy)baseObj;
		} else {
			obj = new Ivectorfiletableproxy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IVectorFileTableProxy");
			obj.increaseCast();
		}

		return obj;
	}
}
