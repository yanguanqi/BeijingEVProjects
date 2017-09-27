package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///<summary> Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CCompositorPtr
///@note Has to be a subclass since we need operator=.
/// We could templatise this instead of repeating per CResource subclass,
/// except to do so requires a form VC6 does not support i.e.
/// ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
///</summary>
public class CompositorPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorPtr", new CompositorPtrClassFactory());
	}

	public CompositorPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCompositorPtr", null);
	}

	public CompositorPtr(com.earthview.world.graphic.Compositor ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CCompositorPtr", list);
	}

	public CompositorPtr(com.earthview.world.graphic.Compositor ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("CCompositorPtr", list);
	}

	public CompositorPtr(com.earthview.world.graphic.CompositorPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CCompositorPtr", list);
	}

	public CompositorPtr(com.earthview.world.graphic.ResourcePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CCompositorPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.Compositor get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Compositor __returnValue = new com.earthview.world.graphic.Compositor(CreatedWhenConstruct.CWC_NotToCreate, "CCompositor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Compositor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositor");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CCompositorPtr
	public com.earthview.world.graphic.CompositorPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.CompositorPtr __returnValue = new com.earthview.world.graphic.CompositorPtr(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorPtr");
		}
		return __returnValue;
	}
	public CompositorPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompositorPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorPtr obj = null;
 		if(baseObj instanceof CompositorPtr)
		{
			obj = (CompositorPtr)baseObj;
		} else {
			obj = new CompositorPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositorPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
