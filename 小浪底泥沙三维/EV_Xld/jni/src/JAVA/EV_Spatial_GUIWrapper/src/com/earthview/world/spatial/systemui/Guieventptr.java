package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///EarthView::World::Graphic::CUserObjectBindings mUserObjectBindings;
public class Guieventptr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CGUIEventPtr", new GuieventptrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Guieventptr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGUIEventPtr", null);
	}

	/**
	 * 构造函数
	 * @param rep 事件对象
	 */
	public Guieventptr(com.earthview.world.spatial.systemui.Guievent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGUIEventPtr", list);
	}

	/**
	 * 挎贝构造函数
	 * @param tp 待挎贝的对象
	 */
	public Guieventptr(com.earthview.world.spatial.systemui.Guieventptr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGUIEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	/**
	 * 返回事件对象
	 */
	public com.earthview.world.spatial.systemui.Guievent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGUIEventPtr(long pNativeObject, long r);
	/**
	 * 赋值运算符
	 * @param tp 的对象
	 */
	public com.earthview.world.spatial.systemui.Guieventptr OperatorAssign(com.earthview.world.spatial.systemui.Guieventptr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGUIEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGUIEvent(long pNativeObject, long ref_rep);
	/**
	 * 赋值运算符
	 * @param rep 事件对象
	 */
	public com.earthview.world.spatial.systemui.Guieventptr OperatorAssign(com.earthview.world.spatial.systemui.Guievent ref_rep)
	{
		long ref_repParamValue = (ref_rep == null ? 0L : ref_rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CGUIEvent(this.nativeObject.pointer, ref_repParamValue);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	public Guieventptr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Guieventptr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Guieventptr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Guieventptr obj = null;
 		if(baseObj instanceof Guieventptr)
		{
			obj = (Guieventptr)baseObj;
		} else {
			obj = new Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGUIEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
