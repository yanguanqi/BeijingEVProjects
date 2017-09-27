package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Guieventhandler extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGUIEventHandler", new GuieventhandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGUIEventHandlerProxy", new GuieventhandlerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Guieventhandler() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGUIEventHandlerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.Guieventhandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean handleEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	public Guieventhandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Guieventhandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static Guieventhandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Guieventhandler obj = null;
 		if(baseObj instanceof Guieventhandler)
		{
			obj = (Guieventhandler)baseObj;
		} else {
			obj = new Guieventhandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGUIEventHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
