package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Gui360EventHandler extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler", new Gui360EventHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCGui360EventHandlerProxy", new Gui360EventHandlerClassFactory());
	}

	public Gui360EventHandler(com.earthview.world.spatial3d.controls.GlobeControl globeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer globeControlPtr = new BasePointer(globeControl);
		list.add("globeControl", globeControlPtr.get());
		Create("JCGui360EventHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.kmlmanager.Gui360EventHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void create_CPanoramaTile(long pNativeObject, long tile);
	public void create(com.earthview.world.spatial3d.atlas.PanoramaTile tile)
	{
		long tileParamValue = (tile == null ? 0L : tile.nativeObject.pointer);
		create_CPanoramaTile(this.nativeObject.pointer, tileParamValue);
	}
	native private void setCameraInPanorama_ev_bool(long pNativeObject, boolean isIn);
	public void setCameraInPanorama(boolean isIn)
	{
		boolean isInParamValue = isIn;
		setCameraInPanorama_ev_bool(this.nativeObject.pointer, isInParamValue);
	}
	native private boolean isCameraInPanorama_void(long pNativeObject);
	public boolean isCameraInPanorama()
	{
		boolean returnValue = isCameraInPanorama_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Gui360EventHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Gui360EventHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static Gui360EventHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Gui360EventHandler obj = null;
 		if(baseObj instanceof Gui360EventHandler)
		{
			obj = (Gui360EventHandler)baseObj;
		} else {
			obj = new Gui360EventHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGui360EventHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
