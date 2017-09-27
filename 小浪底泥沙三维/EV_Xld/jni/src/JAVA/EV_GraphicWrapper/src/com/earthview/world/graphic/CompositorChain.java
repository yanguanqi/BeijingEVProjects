package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Chainofcompositoreffectsapplyingtooneviewport.
 */
public class CompositorChain extends com.earthview.world.graphic.RenderTargetListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorChain", new CompositorChainClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositorChainProxy", new CompositorChainClassFactory());
	}

	public CompositorChain(com.earthview.world.graphic.Viewport ref_vp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_vpPtr = new BasePointer(ref_vp);
		list.add("ref_vp", ref_vpPtr.get());
		Create("JCCompositorChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CompositorChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public static class InternalViewportListener extends com.earthview.world.graphic.Viewport.ViewportListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorChain::CInternalViewportListener", new InternalViewportListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorChain::JCInternalViewportListenerProxy", new InternalViewportListenerClassFactory());
		}

		public InternalViewportListener(com.earthview.world.graphic.CompositorChain ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCInternalViewportListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.CompositorChain$InternalViewportListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void viewportCameraChanged_CViewport(long pNativeObject, long viewport);
		public void viewportCameraChanged(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportCameraChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportCameraChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportCameraChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportCameraChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		native private void viewportDimensionsChanged_CViewport(long pNativeObject, long viewport);
		public void viewportDimensionsChanged(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDimensionsChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportDimensionsChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportDimensionsChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDimensionsChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		native private void viewportDestroyed_CViewport(long pNativeObject, long viewport);
		public void viewportDestroyed(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDestroyed_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportDestroyed_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportDestroyed_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDestroyed_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		public InternalViewportListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InternalViewportListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_viewportCameraChanged_CViewport(long pNativeObject, String method);
		native protected void register_viewportDimensionsChanged_CViewport(long pNativeObject, String method);
		native protected void register_viewportDestroyed_CViewport(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_viewportCameraChanged_CViewport(this.nativeObject.pointer, "viewportCameraChanged_CViewport_callback");
				this.register_viewportDimensionsChanged_CViewport(this.nativeObject.pointer, "viewportDimensionsChanged_CViewport_callback");
				this.register_viewportDestroyed_CViewport(this.nativeObject.pointer, "viewportDestroyed_CViewport_callback");
			}
		}
		
		public static InternalViewportListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InternalViewportListener obj = null;
 			if(baseObj instanceof InternalViewportListener)
			{
				obj = (InternalViewportListener)baseObj;
			} else {
				obj = new InternalViewportListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInternalViewportListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InternalViewportListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InternalViewportListener emptyInstance = new InternalViewportListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void viewportCameraChanged_CViewport_callback(long viewport)
	{
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		viewportCameraChanged(viewportParamValue);
	}

	native private void viewportCameraChanged_CViewport(long pNativeObject, long viewport);
	public void viewportCameraChanged(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportCameraChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
	}
	native private void viewportCameraChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
	protected void viewportCameraChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportCameraChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
	}

	protected  void viewportDimensionsChanged_CViewport_callback(long viewport)
	{
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		viewportDimensionsChanged(viewportParamValue);
	}

	native private void viewportDimensionsChanged_CViewport(long pNativeObject, long viewport);
	public void viewportDimensionsChanged(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportDimensionsChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
	}
	native private void viewportDimensionsChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
	protected void viewportDimensionsChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportDimensionsChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
	}

	protected  void viewportDestroyed_CViewport_callback(long viewport)
	{
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		viewportDestroyed(viewportParamValue);
	}

	native private void viewportDestroyed_CViewport(long pNativeObject, long viewport);
	public void viewportDestroyed(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportDestroyed_CViewport(this.nativeObject.pointer, viewportParamValue);
	}
	native private void viewportDestroyed_CViewport_NoVirtual(long pNativeObject, long viewport);
	protected void viewportDestroyed_NoVirtual(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		viewportDestroyed_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
	}

	protected  long getViewportListenerPtr_void_callback()
	{
		com.earthview.world.graphic.CompositorChain.InternalViewportListener returnValue = getViewportListenerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewportListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.CompositorChain.InternalViewportListener getViewportListenerPtr()
	{
		long returnValue = getViewportListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorChain.InternalViewportListener __returnValue = new com.earthview.world.graphic.CompositorChain.InternalViewportListener(CreatedWhenConstruct.CWC_NotToCreate, "CInternalViewportListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorChain.InternalViewportListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInternalViewportListener");
		}
		return __returnValue;
	}
	native private long getViewportListenerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.CompositorChain.InternalViewportListener getViewportListenerPtr_NoVirtual()
	{
		long returnValue = getViewportListenerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorChain.InternalViewportListener __returnValue = new com.earthview.world.graphic.CompositorChain.InternalViewportListener(CreatedWhenConstruct.CWC_NotToCreate, "CInternalViewportListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorChain.InternalViewportListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInternalViewportListener");
		}
		return __returnValue;
	}

	native private static long get_LAST_void();
	public static long get_LAST()
	{
		long jniValue = get_LAST_void();
		
		return jniValue;
	}
	
	native private static long get_BEST_void();
	public static long get_BEST()
	{
		long jniValue = get_BEST_void();
		
		return jniValue;
	}
	
	native private long addCompositor_CCompositorPtr_ev_size_t_EVString(long pNativeObject, long filter, long addPosition, String scheme);
	/**
	 * Applyacompositor.Initially,thefilterisenabled.
	 * @param  name="filter"Filtertoapply
	 * @param  name="addPosition"Positioninfilterchaintoinsertthisfilterat;defaultstotheend(lastappliedfilter)
	 * @param  name="scheme"Schemetouse(blankmeansdefault)
	 */
	public com.earthview.world.graphic.CompositorInstance addCompositor(com.earthview.world.graphic.CompositorPtr filter, long addPosition, String scheme)
	{
		long filterParamValue = filter.nativeObject.pointer;
		long addPositionParamValue = addPosition;
		String schemeParamValue = scheme;
		long returnValue = addCompositor_CCompositorPtr_ev_size_t_EVString(this.nativeObject.pointer, filterParamValue, addPositionParamValue, schemeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private void removeCompositor_ev_size_t(long pNativeObject, long position);
	/**
	 * Removeacompositor.
	 * @param  name="position"Positioninfilterchainoffiltertoremove;defaultstotheend(lastappliedfilter)
	 */
	public void removeCompositor(long position)
	{
		long positionParamValue = position;
		removeCompositor_ev_size_t(this.nativeObject.pointer, positionParamValue);
	}
	native private long getNumCompositors_void(long pNativeObject);
	/**
	 * Getthenumberofcompositors.
	 * @param  
	 */
	public long getNumCompositors()
	{
		long returnValue = getNumCompositors_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAllCompositors_void(long pNativeObject);
	/**
	 * Removeallcompositors.
	 * @param  
	 */
	public void removeAllCompositors()
	{
		removeAllCompositors_void(this.nativeObject.pointer);
	}
	native private long getCompositor_ev_size_t(long pNativeObject, long index);
	/**
	 * Getcompositorinstancebyposition.
	 * @param  name="index"
	 */
	public com.earthview.world.graphic.CompositorInstance getCompositor(long index)
	{
		long indexParamValue = index;
		long returnValue = getCompositor_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long getCompositor_EVString(long pNativeObject, String name);
	/**
	 * Getcompositorinstancebyname.Returnsnullifnotfound.
	 * @param  name="name"
	 */
	public com.earthview.world.graphic.CompositorInstance getCompositor(String name)
	{
		String nameParamValue = name;
		long returnValue = getCompositor_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long _getOriginalSceneCompositor_void(long pNativeObject);
	/**
	 * Gettheoriginalscenecompositorinstanceforthischain(internaluse).
	 * @param  
	 */
	public com.earthview.world.graphic.CompositorInstance _getOriginalSceneCompositor()
	{
		long returnValue = _getOriginalSceneCompositor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long getCompositors_void(long pNativeObject);
	/**
	 * Getaniteratoroverthecompositorinstances.Thefirstcompositorinthislistisappliedfirst,thelastoneisappliedlast.
	 * @param  
	 */
	public com.earthview.world.graphic.CompositorInstanceIterator getCompositors()
	{
		long returnValue = getCompositors_void(this.nativeObject.pointer);
		com.earthview.world.graphic.CompositorInstanceIterator __returnValue = new com.earthview.world.graphic.CompositorInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CompositorInstanceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstanceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CompositorInstanceIterator");
		}
		return __returnValue;
	}
	native private void setCompositorEnabled_ev_size_t_ev_bool(long pNativeObject, long position, boolean state);
	/**
	 * Enableordisableacompositor,byposition.Disablingacompositorstopsitfromrendering	addCompositorincasesthefilterisswitchedonandoffalot.
	 * @param  name="position"Positioninfilterchainoffilter
	 * @param  name="state"
	 */
	public void setCompositorEnabled(long position, boolean state)
	{
		long positionParamValue = position;
		boolean stateParamValue = state;
		setCompositorEnabled_ev_size_t_ev_bool(this.nativeObject.pointer, positionParamValue, stateParamValue);
	}
	native private void preRenderTargetUpdate_RenderTargetEvent(long pNativeObject, long evt);
	public void preRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void preRenderTargetUpdate_RenderTargetEvent_NoVirtual(long pNativeObject, long evt);
	protected void preRenderTargetUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preRenderTargetUpdate_RenderTargetEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	native private void postRenderTargetUpdate_RenderTargetEvent(long pNativeObject, long evt);
	public void postRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postRenderTargetUpdate_RenderTargetEvent_NoVirtual(long pNativeObject, long evt);
	protected void postRenderTargetUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postRenderTargetUpdate_RenderTargetEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	native private void preViewportUpdate_RenderTargetViewportEvent(long pNativeObject, long evt);
	public void preViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void preViewportUpdate_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void preViewportUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preViewportUpdate_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	native private void postViewportUpdate_RenderTargetViewportEvent(long pNativeObject, long evt);
	public void postViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postViewportUpdate_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void postViewportUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postViewportUpdate_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	native private void _markDirty_void(long pNativeObject);
	/**
	 * Markstateasdirty,andtoberecompilednextframe.
	 * @param  
	 */
	public void _markDirty()
	{
		_markDirty_void(this.nativeObject.pointer);
	}
	native private long getViewport_void(long pNativeObject);
	/**
	 * Getviewportthatisthetargetofthischain
	 * @param  
	 */
	public com.earthview.world.graphic.Viewport getViewport()
	{
		long returnValue = getViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private void _removeInstance_CCompositorInstance(long pNativeObject, long i);
	/**
	 * Removeacompositorbypointer.ThisisinternallyusedbyCCompositionTechniqueto	"weak"removeanyinstancedofadeletedtechnique.
	 * @param  name="i"
	 */
	public void _removeInstance(com.earthview.world.graphic.CompositorInstance i)
	{
		long iParamValue = (i == null ? 0L : i.nativeObject.pointer);
		_removeInstance_CCompositorInstance(this.nativeObject.pointer, iParamValue);
	}
	native private void _queuedOperation_CRenderSystemOperation(long pNativeObject, long ref_op);
	/**
	 * Internalmethodforregisteringaqueuedoperationfordeletionlater
	 * @param  name="op"
	 */
	public void _queuedOperation(com.earthview.world.graphic.CompositorInstance.RenderSystemOperation ref_op)
	{
		long ref_opParamValue = (ref_op == null ? 0L : ref_op.nativeObject.pointer);
		_queuedOperation_CRenderSystemOperation(this.nativeObject.pointer, ref_opParamValue);
	}
	native private void _compile_void(long pNativeObject);
	/**
	 * CompilethisCompositionchainintoaseriesofCRenderTargetoperations.
	 * @param  
	 */
	public void _compile()
	{
		_compile_void(this.nativeObject.pointer);
	}
	native private long getPreviousInstance_CCompositorInstance_ev_bool(long pNativeObject, long curr, boolean activeOnly);
	/**
	 * Getthepreviousinstanceinthischaintotheonespecified.
	 * @param  name="curr"
	 * @param  name="activeOnly"
	 */
	public com.earthview.world.graphic.CompositorInstance getPreviousInstance(com.earthview.world.graphic.CompositorInstance curr, boolean activeOnly)
	{
		long currParamValue = (curr == null ? 0L : curr.nativeObject.pointer);
		boolean activeOnlyParamValue = activeOnly;
		long returnValue = getPreviousInstance_CCompositorInstance_ev_bool(this.nativeObject.pointer, currParamValue, activeOnlyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long getNextInstance_CCompositorInstance_ev_bool(long pNativeObject, long curr, boolean activeOnly);
	/**
	 * Getthenextinstanceinthischaintotheonespecified.
	 * @param  name="curr"
	 * @param  name="activeOnly"
	 */
	public com.earthview.world.graphic.CompositorInstance getNextInstance(com.earthview.world.graphic.CompositorInstance curr, boolean activeOnly)
	{
		long currParamValue = (curr == null ? 0L : curr.nativeObject.pointer);
		boolean activeOnlyParamValue = activeOnly;
		long returnValue = getNextInstance_CCompositorInstance_ev_bool(this.nativeObject.pointer, currParamValue, activeOnlyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	public static class Rqlistener extends com.earthview.world.graphic.RenderQueueListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorChain::CRQListener", new RqlistenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorChain::JCRQListenerProxy", new RqlistenerClassFactory());
		}

		native private void renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, long pSceneMgr, short id, String invocation, long skipThisQueue);
		public void renderQueueStarted(com.earthview.world.graphic.SceneManager pSceneMgr, short id, String invocation, BooleanPointer skipThisQueue)
		{
			long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
			short idParamValue = id;
			String invocationParamValue = invocation;
			long skipThisQueueParamValue = skipThisQueue.nativeObject.pointer;
			renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, pSceneMgrParamValue, idParamValue, invocationParamValue, skipThisQueueParamValue);
		}
		native private void renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(long pNativeObject, long pSceneMgr, short id, String invocation, long skipThisQueue);
		protected void renderQueueStarted_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr, short id, String invocation, BooleanPointer skipThisQueue)
		{
			long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
			short idParamValue = id;
			String invocationParamValue = invocation;
			long skipThisQueueParamValue = skipThisQueue.nativeObject.pointer;
			renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue, idParamValue, invocationParamValue, skipThisQueueParamValue);
		}

		native private void renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, long pSceneMgr, short id, String invocation, long repeatThisQueue);
		public void renderQueueEnded(com.earthview.world.graphic.SceneManager pSceneMgr, short id, String invocation, BooleanPointer repeatThisQueue)
		{
			long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
			short idParamValue = id;
			String invocationParamValue = invocation;
			long repeatThisQueueParamValue = repeatThisQueue.nativeObject.pointer;
			renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, pSceneMgrParamValue, idParamValue, invocationParamValue, repeatThisQueueParamValue);
		}
		native private void renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(long pNativeObject, long pSceneMgr, short id, String invocation, long repeatThisQueue);
		protected void renderQueueEnded_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr, short id, String invocation, BooleanPointer repeatThisQueue)
		{
			long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
			short idParamValue = id;
			String invocationParamValue = invocation;
			long repeatThisQueueParamValue = repeatThisQueue.nativeObject.pointer;
			renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue, idParamValue, invocationParamValue, repeatThisQueueParamValue);
		}

		public Rqlistener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRQListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.CompositorChain$Rqlistener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void setOperation_CTargetOperation_CSceneManager_CRenderSystem(long pNativeObject, long ref_op, long ref_sm, long ref_rs);
		public void setOperation(com.earthview.world.graphic.CompositorInstance.TargetOperation ref_op, com.earthview.world.graphic.SceneManager ref_sm, com.earthview.world.graphic.RenderSystem ref_rs)
		{
			long ref_opParamValue = (ref_op == null ? 0L : ref_op.nativeObject.pointer);
			long ref_smParamValue = (ref_sm == null ? 0L : ref_sm.nativeObject.pointer);
			long ref_rsParamValue = (ref_rs == null ? 0L : ref_rs.nativeObject.pointer);
			setOperation_CTargetOperation_CSceneManager_CRenderSystem(this.nativeObject.pointer, ref_opParamValue, ref_smParamValue, ref_rsParamValue);
		}
		native private void notifyViewport_CViewport(long pNativeObject, long ref_vp);
		public void notifyViewport(com.earthview.world.graphic.Viewport ref_vp)
		{
			long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
			notifyViewport_CViewport(this.nativeObject.pointer, ref_vpParamValue);
		}
		native private void flushUpTo_ev_uint8(long pNativeObject, short id);
		public void flushUpTo(short id)
		{
			short idParamValue = id;
			flushUpTo_ev_uint8(this.nativeObject.pointer, idParamValue);
		}
		public Rqlistener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Rqlistener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 在所有渲染队列被执行前事件通知
		 * @param  
		 */
		public void preRenderQueues()
		{
			super.preRenderQueues_NoVirtual();
		}
		/**
		 * 在所有渲染队列被执行后事件通知
		 * @param  
		 */
		public void postRenderQueues()
		{
			super.postRenderQueues_NoVirtual();
		}
		
		native protected void register_preRenderQueues_void(long pNativeObject, String method);
		native protected void register_postRenderQueues_void(long pNativeObject, String method);
		native protected void register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, String method);
		native protected void register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_preRenderQueues_void(this.nativeObject.pointer, "preRenderQueues_void_callback");
				this.register_postRenderQueues_void(this.nativeObject.pointer, "postRenderQueues_void_callback");
				this.register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, "renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback");
				this.register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, "renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback");
			}
		}
		
		public static Rqlistener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Rqlistener obj = null;
 			if(baseObj instanceof Rqlistener)
			{
				obj = (Rqlistener)baseObj;
			} else {
				obj = new Rqlistener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRQListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RqlistenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Rqlistener emptyInstance = new Rqlistener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public CompositorChain(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorChain(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 通知监听器视口已经被加到正在讨论渲染目标中
	 * @param evt 
	 */
	public void viewportAdded(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.viewportAdded_NoVirtual(evt);
	}
	/**
	 * 通知监听器视口已经从正在讨论的渲染目标中去除掉
	 * @param evt 
	 */
	public void viewportRemoved(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		super.viewportRemoved_NoVirtual(evt);
	}
	
	native protected void register_viewportCameraChanged_CViewport(long pNativeObject, String method);
	native protected void register_viewportDimensionsChanged_CViewport(long pNativeObject, String method);
	native protected void register_viewportDestroyed_CViewport(long pNativeObject, String method);
	native protected void register_getViewportListenerPtr_void(long pNativeObject, String method);
	native protected void register_preRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_postRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_preViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_postViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportAdded_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportRemoved_RenderTargetViewportEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_viewportCameraChanged_CViewport(this.nativeObject.pointer, "viewportCameraChanged_CViewport_callback");
			this.register_viewportDimensionsChanged_CViewport(this.nativeObject.pointer, "viewportDimensionsChanged_CViewport_callback");
			this.register_viewportDestroyed_CViewport(this.nativeObject.pointer, "viewportDestroyed_CViewport_callback");
			this.register_getViewportListenerPtr_void(this.nativeObject.pointer, "getViewportListenerPtr_void_callback");
			this.register_preRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "preRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_postRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "postRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_preViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "preViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_postViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "postViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_viewportAdded_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportAdded_RenderTargetViewportEvent_callback");
			this.register_viewportRemoved_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportRemoved_RenderTargetViewportEvent_callback");
		}
	}
	
	public static CompositorChain fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorChain obj = null;
 		if(baseObj instanceof CompositorChain)
		{
			obj = (CompositorChain)baseObj;
		} else {
			obj = new CompositorChain(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositorChain");
			obj.increaseCast();
		}

		return obj;
	}
}
