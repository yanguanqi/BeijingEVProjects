package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTextBoxEventPtr", new TextBoxEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TextBoxEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextBoxEventPtr", null);
	}

	public TextBoxEventPtr(com.earthview.world.spatial3d.controls.TextBoxEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CTextBoxEventPtr", list);
	}

	public TextBoxEventPtr(com.earthview.world.spatial3d.controls.TextBoxEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CTextBoxEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.TextBoxEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.TextBoxEvent __returnValue = new com.earthview.world.spatial3d.controls.TextBoxEvent(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTextBoxEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.TextBoxEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CTextBoxEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.TextBoxEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TextBoxEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTextBoxEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.TextBoxEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CTextBoxEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.TextBoxEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TextBoxEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTextBoxEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TextBoxEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextBoxEventPtr");
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
	public TextBoxEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextBoxEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextBoxEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextBoxEventPtr obj = null;
 		if(baseObj instanceof TextBoxEventPtr)
		{
			obj = (TextBoxEventPtr)baseObj;
		} else {
			obj = new TextBoxEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextBoxEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
