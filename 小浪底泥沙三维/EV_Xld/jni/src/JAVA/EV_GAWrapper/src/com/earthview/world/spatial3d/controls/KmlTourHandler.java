package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourHandler extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlTourHandler", new KmlTourHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCKmlTourHandlerProxy", new KmlTourHandlerClassFactory());
	}

	/**
	 * 构造函数
	 * @param globeCamera 相机
	 */
	public KmlTourHandler(com.earthview.world.spatial3d.GlobeCamera globeCamera) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer globeCameraPtr = new BasePointer(globeCamera);
		list.add("globeCamera", globeCameraPtr.get());
		Create("JCKmlTourHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.KmlTourHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean handleUseEvent_CGUIEvent_callback(long userEvent)
	{
		com.earthview.world.spatial.systemui.Guievent userEventParamValue = (userEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(userEventParamValue != null)
		{
		userEventParamValue.setDelegate(true);
		userEventParamValue.setInstancePointer(new InstancePointer(userEvent));
		IClassFactory userEventParamValueClassFactory = GlobalClassFactoryMap.get(userEventParamValue.getCppInstanceTypeName());
		if (userEventParamValueClassFactory != null)
		{
			userEventParamValue.setDelegate(true);
			userEventParamValue = (com.earthview.world.spatial.systemui.Guievent)userEventParamValueClassFactory.create();
			userEventParamValue.setDelegate(true);
			userEventParamValue.setInstancePointer(new InstancePointer(userEvent));
		}
		}
		boolean returnValue = handleUseEvent(userEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleUseEvent_CGUIEvent(long pNativeObject, long userEvent);
	/**
	 * 处理自定义事件
	 * @param userEvent 事件对象
	 */
	public boolean handleUseEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUseEvent_CGUIEvent(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}
	native private boolean handleUseEvent_CGUIEvent_NoVirtual(long pNativeObject, long userEvent);
	protected boolean handleUseEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUseEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理事件
	 * @param userEvent 事件对象
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

	protected  boolean handleFrame_CGUIEvent_callback(long guiEvent)
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
		boolean returnValue = handleFrame(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleFrame_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理帧事件
	 * @param userEvent 事件对象
	 */
	public boolean handleFrame(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrame_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleFrame_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleFrame_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrame_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private void sendActiveEvent_CEvent(long pNativeObject, long event);
	/**
	 * 向界面发送事件
	 * @param event 事件对象
	 */
	public void sendActiveEvent(com.earthview.world.core.Event event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		sendActiveEvent_CEvent(this.nativeObject.pointer, eventParamValue);
	}
	public KmlTourHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTourHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleUseEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrame_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleUseEvent_CGUIEvent(this.nativeObject.pointer, "handleUseEvent_CGUIEvent_callback");
			this.register_handleFrame_CGUIEvent(this.nativeObject.pointer, "handleFrame_CGUIEvent_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static KmlTourHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTourHandler obj = null;
 		if(baseObj instanceof KmlTourHandler)
		{
			obj = (KmlTourHandler)baseObj;
		} else {
			obj = new KmlTourHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTourHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
