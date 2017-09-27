package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetTextEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr", new TextBoxSetTextEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextBoxSetTextEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextBoxSetTextEventPtr", null);
	}

	public TextBoxSetTextEventPtr(com.earthview.world.spatial3d.controls.TextBoxSetTextEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CTextBoxSetTextEventPtr", list);
	}

	public TextBoxSetTextEventPtr(com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CTextBoxSetTextEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.TextBoxSetTextEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.TextBoxSetTextEvent __returnValue = new com.earthview.world.spatial3d.controls.TextBoxSetTextEvent(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxSetTextEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxSetTextEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxSetTextEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTextBoxSetTextEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CTextBoxSetTextEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxSetTextEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxSetTextEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTextBoxSetTextEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxSetTextEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CTextBoxSetTextEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxSetTextEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxSetTextEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxSetTextEventPtr");
		}
		return __returnValue;
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
	 */
	public com.earthview.world.spatial.systemui.Guieventptr toCGUIEventPtr()
	{
		long returnValue = toCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorConvertionCGUIEventPtr_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guieventptr OperatorConvertionCGUIEventPtr()
	{
		long returnValue = OperatorConvertionCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	public TextBoxSetTextEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxSetTextEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextBoxSetTextEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxSetTextEventPtr obj = null;
 		if(baseObj instanceof TextBoxSetTextEventPtr)
		{
			obj = (TextBoxSetTextEventPtr)baseObj;
		} else {
			obj = new TextBoxSetTextEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxSetTextEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
