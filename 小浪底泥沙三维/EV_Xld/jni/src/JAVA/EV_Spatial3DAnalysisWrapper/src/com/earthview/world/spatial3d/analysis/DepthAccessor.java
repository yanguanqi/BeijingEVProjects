package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * »ñÈ¡Éî¶ÈÖµ
 */
public class DepthAccessor extends com.earthview.world.graphic.RenderTargetListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CDepthAccessor", new DepthAccessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCDepthAccessorProxy", new DepthAccessorClassFactory());
	}

	/**
	 * ¹¹Ôìº¯Êı
	 * @param sceneMgr ³¡¾°¹ÜÀíÆ÷
	 * @param globeControl globeControl
	 */
	public DepthAccessor(com.earthview.world.graphic.SceneManager sceneMgr, com.earthview.world.spatial3d.controls.GlobeControl globeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sceneMgrPtr = new BasePointer(sceneMgr);
		list.add("sceneMgr", sceneMgrPtr.get());
		BasePointer globeControlPtr = new BasePointer(globeControl);
		list.add("globeControl", globeControlPtr.get());
		Create("JCDepthAccessorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.DepthAccessor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getDepthMap_CCamera(long pNativeObject, long camera);
	/**
	 * »ñÈ¡×Ô¶¨ÒåÏà»úäÖÈ¾µ½ÎÆÀíºóµÄÉî¶ÈÍ¼
	 * @param camera Ïà»ú
	 * @return Éî¶ÈÍ¼
	 */
	public com.earthview.world.spatial3d.analysis.DepthMap getDepthMap(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long returnValue = getDepthMap_CCamera(this.nativeObject.pointer, cameraParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.DepthMap __returnValue = new com.earthview.world.spatial3d.analysis.DepthMap(CreatedWhenConstruct.CWC_NotToCreate, "CDepthMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.DepthMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDepthMap");
		}
		return __returnValue;
	}
	native private long getDepthMap_void(long pNativeObject);
	/**
	 * »ñÈ¡Ö÷Ïà»úµ±Ç°äÖÈ¾µ½ÆÁÄ»µÄÉî¶ÈÍ¼
	 * @param camera Ïà»ú
	 * @return Éî¶ÈÍ¼
	 */
	public com.earthview.world.spatial3d.analysis.DepthMap getDepthMap()
	{
		long returnValue = getDepthMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.DepthMap __returnValue = new com.earthview.world.spatial3d.analysis.DepthMap(CreatedWhenConstruct.CWC_NotToCreate, "CDepthMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.DepthMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDepthMap");
		}
		return __returnValue;
	}
	native private long calculateWorldPos_ev_real64_ev_real64(long pNativeObject, double screenX, double screenY);
	/// <summary>
	/// ¼ÆËãÆÁÄ»ÉÏµã(x,y)¶ÔÓ¦µÄÊÀ½ç×ø±ê
	/// </summary>
	/// <param name="screenX">ºá×ø±êÖµ</param>
	///<parem name="screenY">×İ×ø±êÖµ</param>
	///<return>Éî¶ÈÍ¼</return>
	public com.earthview.world.spatial.math.Vector3 calculateWorldPos(double screenX, double screenY)
	{
		double screenXParamValue = screenX;
		double screenYParamValue = screenY;
		long returnValue = calculateWorldPos_ev_real64_ev_real64(this.nativeObject.pointer, screenXParamValue, screenYParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	public DepthAccessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DepthAccessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * åœ¨æ¸²æŸ“ç›®æ ‡è¢«æ¸²æŸ“ä¹‹å‰è°ƒç”¨
	 * @param evt 
	 */
	public void preRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		super.preRenderTargetUpdate_NoVirtual(evt);
	}
	/**
	 * åœ¨æ¸²æŸ“ç›®æ ‡è¢«æ¸²æŸ“ä¹‹åè°ƒç”¨
	 * @param evt 
	 */
	public void postRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		super.postRenderTargetUpdate_NoVirtual(evt);
	}
	/**
	 * åœ¨è§†å£è¢«æ›´æ–°å‰è°ƒç”¨
	 * @param evt 
	 */
	public void preViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.preViewportUpdate_NoVirtual(evt);
	}
	/**
	 * åœ¨è§†å£è¢«æ›´æ–°åè°ƒç”¨
	 * @param evt 
	 */
	public void postViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.postViewportUpdate_NoVirtual(evt);
	}
	/**
	 * é€šçŸ¥ç›‘å¬å™¨è§†å£å·²ç»è¢«åŠ åˆ°æ­£åœ¨è®¨è®ºæ¸²æŸ“ç›®æ ‡ä¸­
	 * @param evt 
	 */
	public void viewportAdded(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.viewportAdded_NoVirtual(evt);
	}
	/**
	 * é€šçŸ¥ç›‘å¬å™¨è§†å£å·²ç»ä»æ­£åœ¨è®¨è®ºçš„æ¸²æŸ“ç›®æ ‡ä¸­å»é™¤æ‰
	 * @param evt 
	 */
	public void viewportRemoved(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.viewportRemoved_NoVirtual(evt);
	}
	
	native protected void register_preRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_postRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_preViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_postViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportAdded_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportRemoved_RenderTargetViewportEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "preRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_postRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "postRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_preViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "preViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_postViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "postViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_viewportAdded_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportAdded_RenderTargetViewportEvent_callback");
			this.register_viewportRemoved_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportRemoved_RenderTargetViewportEvent_callback");
		}
	}
	
	public static DepthAccessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DepthAccessor obj = null;
 		if(baseObj instanceof DepthAccessor)
		{
			obj = (DepthAccessor)baseObj;
		} else {
			obj = new DepthAccessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDepthAccessor");
			obj.increaseCast();
		}

		return obj;
	}
}
