package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySelectedListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CRaySelectedListener", new RaySelectedListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCRaySelectedListenerProxy", new RaySelectedListenerClassFactory());
	}

	public RaySelectedListener(com.earthview.industryengine.industrygraphic.SimplelineManager ref_pOperator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pOperatorPtr = new BasePointer(ref_pOperator);
		list.add("ref_pOperator", ref_pOperatorPtr.get());
		Create("JCRaySelectedListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.RaySelectedListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onSelectedChanged_CSimpleline_callback(long pSelectedSimpleLine)
	{
		com.earthview.industryengine.industrygraphic.Simpleline pSelectedSimpleLineParamValue = (pSelectedSimpleLine == 0L ? null : new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSelectedSimpleLineParamValue != null)
		{
		pSelectedSimpleLineParamValue.setDelegate(true);
		pSelectedSimpleLineParamValue.setInstancePointer(new InstancePointer(pSelectedSimpleLine));
		IClassFactory pSelectedSimpleLineParamValueClassFactory = GlobalClassFactoryMap.get(pSelectedSimpleLineParamValue.getCppInstanceTypeName());
		if (pSelectedSimpleLineParamValueClassFactory != null)
		{
			pSelectedSimpleLineParamValue.setDelegate(true);
			pSelectedSimpleLineParamValue = (com.earthview.industryengine.industrygraphic.Simpleline)pSelectedSimpleLineParamValueClassFactory.create();
			pSelectedSimpleLineParamValue.setDelegate(true);
			pSelectedSimpleLineParamValue.setInstancePointer(new InstancePointer(pSelectedSimpleLine));
		}
		}
		onSelectedChanged(pSelectedSimpleLineParamValue);
	}

	native private void onSelectedChanged_CSimpleline(long pNativeObject, long pSelectedSimpleLine);
	public void onSelectedChanged(com.earthview.industryengine.industrygraphic.Simpleline pSelectedSimpleLine)
	{
		long pSelectedSimpleLineParamValue = (pSelectedSimpleLine == null ? 0L : pSelectedSimpleLine.nativeObject.pointer);
		onSelectedChanged_CSimpleline(this.nativeObject.pointer, pSelectedSimpleLineParamValue);
	}
	native private void onSelectedChanged_CSimpleline_NoVirtual(long pNativeObject, long pSelectedSimpleLine);
	protected void onSelectedChanged_NoVirtual(com.earthview.industryengine.industrygraphic.Simpleline pSelectedSimpleLine)
	{
		long pSelectedSimpleLineParamValue = (pSelectedSimpleLine == null ? 0L : pSelectedSimpleLine.nativeObject.pointer);
		onSelectedChanged_CSimpleline_NoVirtual(this.nativeObject.pointer, pSelectedSimpleLineParamValue);
	}

	native private long get_ref_mpOperator_void(long pNativeObject);
	public com.earthview.industryengine.industrygraphic.SimplelineManager get_ref_mpOperator()
	{
		long jniValue = get_ref_mpOperator_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.SimplelineManager __returnValue = new com.earthview.industryengine.industrygraphic.SimplelineManager(CreatedWhenConstruct.CWC_NotToCreate, "CSimplelineManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.SimplelineManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimplelineManager");
		}
		return __returnValue;
	}
	
	native private void set_ref_mpOperator_CSimplelineManager (long pNativeObject, long value);
	public void set_ref_mpOperator(com.earthview.industryengine.industrygraphic.SimplelineManager ref_mpOperator)
	{
		long ref_mpOperatorParamValue = (ref_mpOperator == null ? 0L : ref_mpOperator.nativeObject.pointer);
		
		set_ref_mpOperator_CSimplelineManager(this.nativeObject.pointer, ref_mpOperatorParamValue);
	}
	
	public RaySelectedListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySelectedListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onSelectedChanged_CSimpleline(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onSelectedChanged_CSimpleline(this.nativeObject.pointer, "onSelectedChanged_CSimpleline_callback");
		}
	}
	
	public static RaySelectedListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySelectedListener obj = null;
 		if(baseObj instanceof RaySelectedListener)
		{
			obj = (RaySelectedListener)baseObj;
		} else {
			obj = new RaySelectedListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRaySelectedListener");
			obj.increaseCast();
		}

		return obj;
	}
}
