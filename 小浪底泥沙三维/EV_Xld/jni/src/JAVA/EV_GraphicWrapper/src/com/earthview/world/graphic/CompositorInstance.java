package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorInstance extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance", new CompositorInstanceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositorInstanceProxy", new CompositorInstanceClassFactory());
	}

	public CompositorInstance(com.earthview.world.graphic.CompositionTechnique ref_technique, com.earthview.world.graphic.CompositorChain ref_chain) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_techniquePtr = new BasePointer(ref_technique);
		list.add("ref_technique", ref_techniquePtr.get());
		BasePointer ref_chainPtr = new BasePointer(ref_chain);
		list.add("ref_chain", ref_chainPtr.get());
		Create("JCCompositorInstanceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CompositorInstance".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public static class CompositorInstanceListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::CCompositorInstanceListener", new CompositorInstanceListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::JCCompositorInstanceListenerProxy", new CompositorInstanceListenerClassFactory());
		}

		public CompositorInstanceListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCompositorInstanceListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.CompositorInstance$CompositorInstanceListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void notifyMaterialSetup_ev_uint32_CMaterialPtr_callback(long pass_id, long mat)
		{
			long pass_idParamValue = pass_id;
			com.earthview.world.graphic.MaterialPtr matParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
			IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
			if (matParamValueClassFactory != null)
			{
				matParamValue.setDelegate(true);
				matParamValue = (com.earthview.world.graphic.MaterialPtr)matParamValueClassFactory.create();
				matParamValue.setDelegate(true);
				matParamValue.setInstancePointer(new InstancePointer(mat));
			}
			notifyMaterialSetup(pass_idParamValue, matParamValue);
		}

		native private void notifyMaterialSetup_ev_uint32_CMaterialPtr(long pNativeObject, long pass_id, long mat);
		public void notifyMaterialSetup(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
		{
			long pass_idParamValue = pass_id;
			long matParamValue = mat.nativeObject.pointer;
			notifyMaterialSetup_ev_uint32_CMaterialPtr(this.nativeObject.pointer, pass_idParamValue, matParamValue);
		}
		native private void notifyMaterialSetup_ev_uint32_CMaterialPtr_NoVirtual(long pNativeObject, long pass_id, long mat);
		protected void notifyMaterialSetup_NoVirtual(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
		{
			long pass_idParamValue = pass_id;
			long matParamValue = mat.nativeObject.pointer;
			notifyMaterialSetup_ev_uint32_CMaterialPtr_NoVirtual(this.nativeObject.pointer, pass_idParamValue, matParamValue);
		}

		protected  void notifyMaterialRender_ev_uint32_CMaterialPtr_callback(long pass_id, long mat)
		{
			long pass_idParamValue = pass_id;
			com.earthview.world.graphic.MaterialPtr matParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
			IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
			if (matParamValueClassFactory != null)
			{
				matParamValue.setDelegate(true);
				matParamValue = (com.earthview.world.graphic.MaterialPtr)matParamValueClassFactory.create();
				matParamValue.setDelegate(true);
				matParamValue.setInstancePointer(new InstancePointer(mat));
			}
			notifyMaterialRender(pass_idParamValue, matParamValue);
		}

		native private void notifyMaterialRender_ev_uint32_CMaterialPtr(long pNativeObject, long pass_id, long mat);
		public void notifyMaterialRender(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
		{
			long pass_idParamValue = pass_id;
			long matParamValue = mat.nativeObject.pointer;
			notifyMaterialRender_ev_uint32_CMaterialPtr(this.nativeObject.pointer, pass_idParamValue, matParamValue);
		}
		native private void notifyMaterialRender_ev_uint32_CMaterialPtr_NoVirtual(long pNativeObject, long pass_id, long mat);
		protected void notifyMaterialRender_NoVirtual(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
		{
			long pass_idParamValue = pass_id;
			long matParamValue = mat.nativeObject.pointer;
			notifyMaterialRender_ev_uint32_CMaterialPtr_NoVirtual(this.nativeObject.pointer, pass_idParamValue, matParamValue);
		}

		protected  void notifyResourcesCreated_ev_bool_callback(boolean forResizeOnly)
		{
			boolean forResizeOnlyParamValue = forResizeOnly;
			notifyResourcesCreated(forResizeOnlyParamValue);
		}

		native private void notifyResourcesCreated_ev_bool(long pNativeObject, boolean forResizeOnly);
		public void notifyResourcesCreated(boolean forResizeOnly)
		{
			boolean forResizeOnlyParamValue = forResizeOnly;
			notifyResourcesCreated_ev_bool(this.nativeObject.pointer, forResizeOnlyParamValue);
		}
		native private void notifyResourcesCreated_ev_bool_NoVirtual(long pNativeObject, boolean forResizeOnly);
		protected void notifyResourcesCreated_NoVirtual(boolean forResizeOnly)
		{
			boolean forResizeOnlyParamValue = forResizeOnly;
			notifyResourcesCreated_ev_bool_NoVirtual(this.nativeObject.pointer, forResizeOnlyParamValue);
		}

		public CompositorInstanceListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompositorInstanceListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_notifyMaterialSetup_ev_uint32_CMaterialPtr(long pNativeObject, String method);
		native protected void register_notifyMaterialRender_ev_uint32_CMaterialPtr(long pNativeObject, String method);
		native protected void register_notifyResourcesCreated_ev_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_notifyMaterialSetup_ev_uint32_CMaterialPtr(this.nativeObject.pointer, "notifyMaterialSetup_ev_uint32_CMaterialPtr_callback");
				this.register_notifyMaterialRender_ev_uint32_CMaterialPtr(this.nativeObject.pointer, "notifyMaterialRender_ev_uint32_CMaterialPtr_callback");
				this.register_notifyResourcesCreated_ev_bool(this.nativeObject.pointer, "notifyResourcesCreated_ev_bool_callback");
			}
		}
		
		public static CompositorInstanceListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompositorInstanceListener obj = null;
 			if(baseObj instanceof CompositorInstanceListener)
			{
				obj = (CompositorInstanceListener)baseObj;
			} else {
				obj = new CompositorInstanceListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCompositorInstanceListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompositorInstanceListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompositorInstanceListener emptyInstance = new CompositorInstanceListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RenderSystemOperation extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation", new RenderSystemOperationClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::JCRenderSystemOperationProxy", new RenderSystemOperationClassFactory());
		}

		public RenderSystemOperation() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRenderSystemOperationProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.CompositorInstance$RenderSystemOperation".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void execute_CSceneManager_CRenderSystem_callback(long sm, long rs)
		{
			com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
			if(smParamValue != null)
			{
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
			IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
			if (smParamValueClassFactory != null)
			{
				smParamValue.setDelegate(true);
				smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
				smParamValue.setDelegate(true);
				smParamValue.setInstancePointer(new InstancePointer(sm));
			}
			}
			com.earthview.world.graphic.RenderSystem rsParamValue = (rs == 0L ? null : new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate));
			if(rsParamValue != null)
			{
			rsParamValue.setDelegate(true);
			rsParamValue.setInstancePointer(new InstancePointer(rs));
			IClassFactory rsParamValueClassFactory = GlobalClassFactoryMap.get(rsParamValue.getCppInstanceTypeName());
			if (rsParamValueClassFactory != null)
			{
				rsParamValue.setDelegate(true);
				rsParamValue = (com.earthview.world.graphic.RenderSystem)rsParamValueClassFactory.create();
				rsParamValue.setDelegate(true);
				rsParamValue.setInstancePointer(new InstancePointer(rs));
			}
			}
			execute(smParamValue, rsParamValue);
		}

		native private void execute_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rs);
		//// Set state to CSceneManager and CRenderSystem
		public void execute(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rs)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsParamValue = (rs == null ? 0L : rs.nativeObject.pointer);
			execute_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsParamValue);
		}
		native private void execute_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rs);
		protected void execute_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rs)
		{
			long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
			long rsParamValue = (rs == null ? 0L : rs.nativeObject.pointer);
			execute_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsParamValue);
		}

		public RenderSystemOperation(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderSystemOperation(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_execute_CSceneManager_CRenderSystem(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_execute_CSceneManager_CRenderSystem(this.nativeObject.pointer, "execute_CSceneManager_CRenderSystem_callback");
			}
		}
		
		public static RenderSystemOperation fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderSystemOperation obj = null;
 			if(baseObj instanceof RenderSystemOperation)
			{
				obj = (RenderSystemOperation)baseObj;
			} else {
				obj = new RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemOperation");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderSystemOperationClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderSystemOperation emptyInstance = new RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QuadMaterialMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::QuadMaterialMap", new QuadMaterialMapClassFactory());
		}

		public QuadMaterialMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QuadMaterialMap", null);
		}

		native private boolean push_ev_int32_CMaterialPtr(long pNativeObject, int key, long val);
		public boolean push(int key, com.earthview.world.graphic.MaterialPtr val)
		{
			int keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_ev_int32_CMaterialPtr(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_int32(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_int32(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_int32(long pNativeObject, int key);
		public com.earthview.world.graphic.MaterialPtr OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_int32(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long get_ev_int32(long pNativeObject, int key);
		public com.earthview.world.graphic.MaterialPtr get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_int32(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private void erase_ev_int32(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_int32(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public QuadMaterialMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QuadMaterialMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QuadMaterialMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QuadMaterialMap obj = null;
 			if(baseObj instanceof QuadMaterialMap)
			{
				obj = (QuadMaterialMap)baseObj;
			} else {
				obj = new QuadMaterialMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QuadMaterialMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QuadMaterialMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QuadMaterialMap emptyInstance = new QuadMaterialMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QuadMaterialPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::QuadMaterialPair", new QuadMaterialPairClassFactory());
		}

		public QuadMaterialPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QuadMaterialPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_int32 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_int32(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialPtr get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		
		native private void set_second_CMaterialPtr (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.MaterialPtr second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_CMaterialPtr(this.nativeObject.pointer, secondParamValue);
		}
		
		public QuadMaterialPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QuadMaterialPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QuadMaterialPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QuadMaterialPair obj = null;
 			if(baseObj instanceof QuadMaterialPair)
			{
				obj = (QuadMaterialPair)baseObj;
			} else {
				obj = new QuadMaterialPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QuadMaterialPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QuadMaterialPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QuadMaterialPair emptyInstance = new QuadMaterialPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QuadMaterialIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::QuadMaterialIterator", new QuadMaterialIteratorClassFactory());
		}

		public QuadMaterialIterator(com.earthview.world.graphic.CompositorInstance.QuadMaterialMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("QuadMaterialIterator", list);
		}

		public QuadMaterialIterator(com.earthview.world.graphic.CompositorInstance.QuadMaterialIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("QuadMaterialIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialPtr nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialPtr nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialPtr next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.QuadMaterialPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.CompositorInstance.QuadMaterialPair __returnValue = new com.earthview.world.graphic.CompositorInstance.QuadMaterialPair(CreatedWhenConstruct.CWC_NotToCreate, "QuadMaterialPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.QuadMaterialPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "QuadMaterialPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.QuadMaterialPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.CompositorInstance.QuadMaterialPair __returnValue = new com.earthview.world.graphic.CompositorInstance.QuadMaterialPair(CreatedWhenConstruct.CWC_NotToCreate, "QuadMaterialPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.QuadMaterialPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "QuadMaterialPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.QuadMaterialPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.CompositorInstance.QuadMaterialPair __returnValue = new com.earthview.world.graphic.CompositorInstance.QuadMaterialPair(CreatedWhenConstruct.CWC_NotToCreate, "QuadMaterialPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.QuadMaterialPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "QuadMaterialPair");
			}
			return __returnValue;
		}
		public QuadMaterialIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QuadMaterialIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QuadMaterialIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QuadMaterialIterator obj = null;
 			if(baseObj instanceof QuadMaterialIterator)
			{
				obj = (QuadMaterialIterator)baseObj;
			} else {
				obj = new QuadMaterialIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QuadMaterialIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QuadMaterialIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QuadMaterialIterator emptyInstance = new QuadMaterialIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RenderSystemOpPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPair", new RenderSystemOpPairClassFactory());
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_int32 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_int32(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.RenderSystemOperation get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositorInstance.RenderSystemOperation __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemOperation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOperation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderSystemOperation");
			}
			return __returnValue;
		}
		
		native private void set_second_CRenderSystemOperation (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.CompositorInstance.RenderSystemOperation second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CRenderSystemOperation(this.nativeObject.pointer, secondParamValue);
		}
		
		public RenderSystemOpPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("RenderSystemOpPair", null);
		}

		public RenderSystemOpPair(int id, com.earthview.world.graphic.CompositorInstance.RenderSystemOperation op) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer idPtr = new BasePointer(id);
			list.add("id", idPtr.get());
			BasePointer opPtr = new BasePointer(op);
			list.add("op", opPtr.get());
			Create("RenderSystemOpPair", list);
		}

		public RenderSystemOpPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderSystemOpPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderSystemOpPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderSystemOpPair obj = null;
 			if(baseObj instanceof RenderSystemOpPair)
			{
				obj = (RenderSystemOpPair)baseObj;
			} else {
				obj = new RenderSystemOpPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderSystemOpPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderSystemOpPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderSystemOpPair emptyInstance = new RenderSystemOpPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RenderSystemOpPairs extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::RenderSystemOpPairs", new RenderSystemOpPairsClassFactory());
		}

		public RenderSystemOpPairs() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("RenderSystemOpPairs", null);
		}

		native private void push_back_RenderSystemOpPair(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_RenderSystemOpPair(this.nativeObject.pointer, tParamValue);
		}
		native private void insert_ev_uint32_RenderSystemOpPair(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_RenderSystemOpPair(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderSystemOpPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderSystemOpPair");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair(CreatedWhenConstruct.CWC_NotToCreate, "RenderSystemOpPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOpPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RenderSystemOpPair");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public RenderSystemOpPairs(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderSystemOpPairs(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderSystemOpPairs fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderSystemOpPairs obj = null;
 			if(baseObj instanceof RenderSystemOpPairs)
			{
				obj = (RenderSystemOpPairs)baseObj;
			} else {
				obj = new RenderSystemOpPairs(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderSystemOpPairs");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderSystemOpPairsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderSystemOpPairs emptyInstance = new RenderSystemOpPairs(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TargetOperation extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::CTargetOperation", new TargetOperationClassFactory());
		}

		public TargetOperation() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CTargetOperation", null);
		}

		public TargetOperation(com.earthview.world.graphic.RenderTarget ref_inTarget) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_inTargetPtr = new BasePointer(ref_inTarget);
			list.add("ref_inTarget", ref_inTargetPtr.get());
			Create("CTargetOperation", list);
		}

		native private long get_target_void(long pNativeObject);
		public com.earthview.world.graphic.RenderTarget get_target()
		{
			long jniValue = get_target_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
			}
			return __returnValue;
		}
		
		native private void set_target_CRenderTarget (long pNativeObject, long value);
		public void set_target(com.earthview.world.graphic.RenderTarget target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			
			set_target_CRenderTarget(this.nativeObject.pointer, targetParamValue);
		}
		
		native private int get_currentQueueGroupID_void(long pNativeObject);
		public int get_currentQueueGroupID()
		{
			int jniValue = get_currentQueueGroupID_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_currentQueueGroupID_ev_int32 (long pNativeObject, int value);
		public void set_currentQueueGroupID(int currentQueueGroupID)
		{
			int currentQueueGroupIDParamValue = currentQueueGroupID;
			
			set_currentQueueGroupID_ev_int32(this.nativeObject.pointer, currentQueueGroupIDParamValue);
		}
		
		native private long get_renderSystemOperations_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.RenderSystemOpPairs get_renderSystemOperations()
		{
			long jniValue = get_renderSystemOperations_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.CompositorInstance.RenderSystemOpPairs __returnValue = new com.earthview.world.graphic.CompositorInstance.RenderSystemOpPairs(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "RenderSystemOpPairs");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.RenderSystemOpPairs)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RenderSystemOpPairs");
			}
			return __returnValue;
		}
		
		native private void set_renderSystemOperations_RenderSystemOpPairs (long pNativeObject, long value);
		public void set_renderSystemOperations(com.earthview.world.graphic.CompositorInstance.RenderSystemOpPairs renderSystemOperations)
		{
			long renderSystemOperationsParamValue = renderSystemOperations.nativeObject.pointer;
			
			set_renderSystemOperations_RenderSystemOpPairs(this.nativeObject.pointer, renderSystemOperationsParamValue);
		}
		
		native private long get_visibilityMask_void(long pNativeObject);
		public long get_visibilityMask()
		{
			long jniValue = get_visibilityMask_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_visibilityMask_ev_uint32 (long pNativeObject, long value);
		public void set_visibilityMask(long visibilityMask)
		{
			long visibilityMaskParamValue = visibilityMask;
			
			set_visibilityMask_ev_uint32(this.nativeObject.pointer, visibilityMaskParamValue);
		}
		
		native private float get_lodBias_void(long pNativeObject);
		public float get_lodBias()
		{
			float jniValue = get_lodBias_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lodBias_ev_real32 (long pNativeObject, float value);
		public void set_lodBias(float lodBias)
		{
			float lodBiasParamValue = lodBias;
			
			set_lodBias_ev_real32(this.nativeObject.pointer, lodBiasParamValue);
		}
		
		public static class RenderQueueBitSet extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::CTargetOperation::RenderQueueBitSet", new RenderQueueBitSetClassFactory());
			}

			public RenderQueueBitSet() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("RenderQueueBitSet", null);
			}

			native private boolean any_void(long pNativeObject);
			public boolean any()
			{
				boolean returnValue = any_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private boolean none_void(long pNativeObject);
			public boolean none()
			{
				boolean returnValue = none_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private int count_void(long pNativeObject);
			public int count()
			{
				int returnValue = count_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private int size_void(long pNativeObject);
			public int size()
			{
				int returnValue = size_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private boolean test_ev_int32(long pNativeObject, int pos);
			public boolean test(int pos)
			{
				int posParamValue = pos;
				boolean returnValue = test_ev_int32(this.nativeObject.pointer, posParamValue);
				return returnValue;
			}
			native private void put_void(long pNativeObject);
			public void put()
			{
				put_void(this.nativeObject.pointer);
			}
			native private void put_ev_int32(long pNativeObject, int pos);
			public void put(int pos)
			{
				int posParamValue = pos;
				put_ev_int32(this.nativeObject.pointer, posParamValue);
			}
			native private void reset_void(long pNativeObject);
			public void reset()
			{
				reset_void(this.nativeObject.pointer);
			}
			native private void reset_ev_int32(long pNativeObject, int pos);
			public void reset(int pos)
			{
				int posParamValue = pos;
				reset_ev_int32(this.nativeObject.pointer, posParamValue);
			}
			native private void flip_void(long pNativeObject);
			public void flip()
			{
				flip_void(this.nativeObject.pointer);
			}
			native private void flip_ev_int32(long pNativeObject, int pos);
			public void flip(int pos)
			{
				int posParamValue = pos;
				flip_ev_int32(this.nativeObject.pointer, posParamValue);
			}
			public RenderQueueBitSet(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public RenderQueueBitSet(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static RenderQueueBitSet fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				RenderQueueBitSet obj = null;
 				if(baseObj instanceof RenderQueueBitSet)
				{
					obj = (RenderQueueBitSet)baseObj;
				} else {
					obj = new RenderQueueBitSet(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "RenderQueueBitSet");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class RenderQueueBitSetClassFactory implements IClassFactory {
			public BaseObject create()
			{
				RenderQueueBitSet emptyInstance = new RenderQueueBitSet(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long get_renderQueues_void(long pNativeObject);
		public com.earthview.world.graphic.CompositorInstance.TargetOperation.RenderQueueBitSet get_renderQueues()
		{
			long jniValue = get_renderQueues_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.CompositorInstance.TargetOperation.RenderQueueBitSet __returnValue = new com.earthview.world.graphic.CompositorInstance.TargetOperation.RenderQueueBitSet(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "RenderQueueBitSet");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.TargetOperation.RenderQueueBitSet)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RenderQueueBitSet");
			}
			return __returnValue;
		}
		
		native private void set_renderQueues_RenderQueueBitSet (long pNativeObject, long value);
		public void set_renderQueues(com.earthview.world.graphic.CompositorInstance.TargetOperation.RenderQueueBitSet renderQueues)
		{
			long renderQueuesParamValue = renderQueues.nativeObject.pointer;
			
			set_renderQueues_RenderQueueBitSet(this.nativeObject.pointer, renderQueuesParamValue);
		}
		
		native private boolean get_onlyInitial_void(long pNativeObject);
		public boolean get_onlyInitial()
		{
			boolean jniValue = get_onlyInitial_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_onlyInitial_ev_bool (long pNativeObject, boolean value);
		public void set_onlyInitial(boolean onlyInitial)
		{
			boolean onlyInitialParamValue = onlyInitial;
			
			set_onlyInitial_ev_bool(this.nativeObject.pointer, onlyInitialParamValue);
		}
		
		native private boolean get_hasBeenRendered_void(long pNativeObject);
		public boolean get_hasBeenRendered()
		{
			boolean jniValue = get_hasBeenRendered_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_hasBeenRendered_ev_bool (long pNativeObject, boolean value);
		public void set_hasBeenRendered(boolean hasBeenRendered)
		{
			boolean hasBeenRenderedParamValue = hasBeenRendered;
			
			set_hasBeenRendered_ev_bool(this.nativeObject.pointer, hasBeenRenderedParamValue);
		}
		
		native private boolean get_findVisibleObjects_void(long pNativeObject);
		public boolean get_findVisibleObjects()
		{
			boolean jniValue = get_findVisibleObjects_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_findVisibleObjects_ev_bool (long pNativeObject, boolean value);
		public void set_findVisibleObjects(boolean findVisibleObjects)
		{
			boolean findVisibleObjectsParamValue = findVisibleObjects;
			
			set_findVisibleObjects_ev_bool(this.nativeObject.pointer, findVisibleObjectsParamValue);
		}
		
		native private String get_materialScheme_void(long pNativeObject);
		public String get_materialScheme()
		{
			String jniValue = get_materialScheme_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_materialScheme_EVString (long pNativeObject, String value);
		public void set_materialScheme(String materialScheme)
		{
			String materialSchemeParamValue = materialScheme;
			
			set_materialScheme_EVString(this.nativeObject.pointer, materialSchemeParamValue);
		}
		
		native private boolean get_shadowsEnabled_void(long pNativeObject);
		public boolean get_shadowsEnabled()
		{
			boolean jniValue = get_shadowsEnabled_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_shadowsEnabled_ev_bool (long pNativeObject, boolean value);
		public void set_shadowsEnabled(boolean shadowsEnabled)
		{
			boolean shadowsEnabledParamValue = shadowsEnabled;
			
			set_shadowsEnabled_ev_bool(this.nativeObject.pointer, shadowsEnabledParamValue);
		}
		
		public TargetOperation(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TargetOperation(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TargetOperation fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TargetOperation obj = null;
 			if(baseObj instanceof TargetOperation)
			{
				obj = (TargetOperation)baseObj;
			} else {
				obj = new TargetOperation(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTargetOperation");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TargetOperationClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TargetOperation emptyInstance = new TargetOperation(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CompiledState extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorInstance::CompiledState", new CompiledStateClassFactory());
		}

		public CompiledState() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CompiledState", null);
		}

		native private void push_back_CTargetOperation(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.CompositorInstance.TargetOperation t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CTargetOperation(this.nativeObject.pointer, tParamValue);
		}
		native private void insert_ev_uint32_CTargetOperation(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.CompositorInstance.TargetOperation t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CTargetOperation(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.CompositorInstance.TargetOperation OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.CompositorInstance.TargetOperation __returnValue = new com.earthview.world.graphic.CompositorInstance.TargetOperation(CreatedWhenConstruct.CWC_NotToCreate, "CTargetOperation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.TargetOperation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTargetOperation");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.CompositorInstance.TargetOperation at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.CompositorInstance.TargetOperation __returnValue = new com.earthview.world.graphic.CompositorInstance.TargetOperation(CreatedWhenConstruct.CWC_NotToCreate, "CTargetOperation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositorInstance.TargetOperation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTargetOperation");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public CompiledState(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CompiledState(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CompiledState fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CompiledState obj = null;
 			if(baseObj instanceof CompiledState)
			{
				obj = (CompiledState)baseObj;
			} else {
				obj = new CompiledState(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CompiledState");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CompiledStateClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CompiledState emptyInstance = new CompiledState(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void setEnabled_ev_bool(long pNativeObject, boolean value);
	public void setEnabled(boolean value)
	{
		boolean valueParamValue = value;
		setEnabled_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getEnabled_void(long pNativeObject);
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlive_ev_bool(long pNativeObject, boolean value);
	public void setAlive(boolean value)
	{
		boolean valueParamValue = value;
		setAlive_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getAlive_void(long pNativeObject);
	public boolean getAlive()
	{
		boolean returnValue = getAlive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTextureInstanceName_EVString_ev_size_t(long pNativeObject, String name, long mrtIndex);
	public String getTextureInstanceName(String name, long mrtIndex)
	{
		String nameParamValue = name;
		long mrtIndexParamValue = mrtIndex;
		String returnValue = getTextureInstanceName_EVString_ev_size_t(this.nativeObject.pointer, nameParamValue, mrtIndexParamValue);
		return returnValue;
	}
	native private long getTextureInstance_EVString_ev_size_t(long pNativeObject, String name, long mrtIndex);
	public com.earthview.world.graphic.TexturePtr getTextureInstance(String name, long mrtIndex)
	{
		String nameParamValue = name;
		long mrtIndexParamValue = mrtIndex;
		long returnValue = getTextureInstance_EVString_ev_size_t(this.nativeObject.pointer, nameParamValue, mrtIndexParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long getRenderTarget_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.RenderTarget getRenderTarget(String name)
	{
		String nameParamValue = name;
		long returnValue = getRenderTarget_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	protected  void _compileTargetOperations_CompiledState_callback(long compiledState)
	{
		com.earthview.world.graphic.CompositorInstance.CompiledState compiledStateParamValue = new com.earthview.world.graphic.CompositorInstance.CompiledState(CreatedWhenConstruct.CWC_NotToCreate);
		compiledStateParamValue.setDelegate(true);
		compiledStateParamValue.setInstancePointer(new InstancePointer(compiledState));
		IClassFactory compiledStateParamValueClassFactory = GlobalClassFactoryMap.get(compiledStateParamValue.getCppInstanceTypeName());
		if (compiledStateParamValueClassFactory != null)
		{
			compiledStateParamValue.setDelegate(true);
			compiledStateParamValue = (com.earthview.world.graphic.CompositorInstance.CompiledState)compiledStateParamValueClassFactory.create();
			compiledStateParamValue.setDelegate(true);
			compiledStateParamValue.setInstancePointer(new InstancePointer(compiledState));
		}
		_compileTargetOperations(compiledStateParamValue);
	}

	native private void _compileTargetOperations_CompiledState(long pNativeObject, long compiledState);
	public void _compileTargetOperations(com.earthview.world.graphic.CompositorInstance.CompiledState compiledState)
	{
		long compiledStateParamValue = compiledState.nativeObject.pointer;
		_compileTargetOperations_CompiledState(this.nativeObject.pointer, compiledStateParamValue);
	}
	native private void _compileTargetOperations_CompiledState_NoVirtual(long pNativeObject, long compiledState);
	protected void _compileTargetOperations_NoVirtual(com.earthview.world.graphic.CompositorInstance.CompiledState compiledState)
	{
		long compiledStateParamValue = compiledState.nativeObject.pointer;
		_compileTargetOperations_CompiledState_NoVirtual(this.nativeObject.pointer, compiledStateParamValue);
	}

	protected  void _compileOutputOperation_CTargetOperation_callback(long finalState)
	{
		com.earthview.world.graphic.CompositorInstance.TargetOperation finalStateParamValue = new com.earthview.world.graphic.CompositorInstance.TargetOperation(CreatedWhenConstruct.CWC_NotToCreate);
		finalStateParamValue.setDelegate(true);
		finalStateParamValue.setInstancePointer(new InstancePointer(finalState));
		IClassFactory finalStateParamValueClassFactory = GlobalClassFactoryMap.get(finalStateParamValue.getCppInstanceTypeName());
		if (finalStateParamValueClassFactory != null)
		{
			finalStateParamValue.setDelegate(true);
			finalStateParamValue = (com.earthview.world.graphic.CompositorInstance.TargetOperation)finalStateParamValueClassFactory.create();
			finalStateParamValue.setDelegate(true);
			finalStateParamValue.setInstancePointer(new InstancePointer(finalState));
		}
		_compileOutputOperation(finalStateParamValue);
	}

	native private void _compileOutputOperation_CTargetOperation(long pNativeObject, long finalState);
	public void _compileOutputOperation(com.earthview.world.graphic.CompositorInstance.TargetOperation finalState)
	{
		long finalStateParamValue = finalState.nativeObject.pointer;
		_compileOutputOperation_CTargetOperation(this.nativeObject.pointer, finalStateParamValue);
	}
	native private void _compileOutputOperation_CTargetOperation_NoVirtual(long pNativeObject, long finalState);
	protected void _compileOutputOperation_NoVirtual(com.earthview.world.graphic.CompositorInstance.TargetOperation finalState)
	{
		long finalStateParamValue = finalState.nativeObject.pointer;
		_compileOutputOperation_CTargetOperation_NoVirtual(this.nativeObject.pointer, finalStateParamValue);
	}

	native private long getCompositor_void(long pNativeObject);
	public com.earthview.world.graphic.Compositor getCompositor()
	{
		long returnValue = getCompositor_void(this.nativeObject.pointer);
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
	native private long getTechnique_void(long pNativeObject);
	public com.earthview.world.graphic.CompositionTechnique getTechnique()
	{
		long returnValue = getTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique __returnValue = new com.earthview.world.graphic.CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTechnique");
		}
		return __returnValue;
	}
	native private void setTechnique_CCompositionTechnique_ev_bool(long pNativeObject, long ref_tech, boolean reuseTextures);
	public void setTechnique(com.earthview.world.graphic.CompositionTechnique ref_tech, boolean reuseTextures)
	{
		long ref_techParamValue = (ref_tech == null ? 0L : ref_tech.nativeObject.pointer);
		boolean reuseTexturesParamValue = reuseTextures;
		setTechnique_CCompositionTechnique_ev_bool(this.nativeObject.pointer, ref_techParamValue, reuseTexturesParamValue);
	}
	native private void setTechnique_CCompositionTechnique(long pNativeObject, long ref_tech);
	public void setTechnique(com.earthview.world.graphic.CompositionTechnique ref_tech)
	{
		long ref_techParamValue = (ref_tech == null ? 0L : ref_tech.nativeObject.pointer);
		setTechnique_CCompositionTechnique(this.nativeObject.pointer, ref_techParamValue);
	}
	native private void setScheme_EVString_ev_bool(long pNativeObject, String schemeName, boolean reuseTextures);
	public void setScheme(String schemeName, boolean reuseTextures)
	{
		String schemeNameParamValue = schemeName;
		boolean reuseTexturesParamValue = reuseTextures;
		setScheme_EVString_ev_bool(this.nativeObject.pointer, schemeNameParamValue, reuseTexturesParamValue);
	}
	native private void setScheme_EVString(long pNativeObject, String schemeName);
	public void setScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private long getScheme_void(long pNativeObject);
	//// Returns the name of the scheme this compositor is using
	public StringPointer getScheme()
	{
		long returnValue = getScheme_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void notifyResized_void(long pNativeObject);
	public void notifyResized()
	{
		notifyResized_void(this.nativeObject.pointer);
	}
	native private long getChain_void(long pNativeObject);
	public com.earthview.world.graphic.CompositorChain getChain()
	{
		long returnValue = getChain_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorChain __returnValue = new com.earthview.world.graphic.CompositorChain(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorChain");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorChain)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorChain");
		}
		return __returnValue;
	}
	native private void addListener_CCompositorInstanceListener(long pNativeObject, long ref_l);
	public void addListener(com.earthview.world.graphic.CompositorInstance.CompositorInstanceListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CCompositorInstanceListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void removeListener_CCompositorInstanceListener(long pNativeObject, long l);
	public void removeListener(com.earthview.world.graphic.CompositorInstance.CompositorInstanceListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CCompositorInstanceListener(this.nativeObject.pointer, lParamValue);
	}
	native private void _fireNotifyMaterialSetup_ev_uint32_CMaterialPtr(long pNativeObject, long pass_id, long mat);
	public void _fireNotifyMaterialSetup(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
	{
		long pass_idParamValue = pass_id;
		long matParamValue = mat.nativeObject.pointer;
		_fireNotifyMaterialSetup_ev_uint32_CMaterialPtr(this.nativeObject.pointer, pass_idParamValue, matParamValue);
	}
	native private void _fireNotifyMaterialRender_ev_uint32_CMaterialPtr(long pNativeObject, long pass_id, long mat);
	public void _fireNotifyMaterialRender(long pass_id, com.earthview.world.graphic.MaterialPtr mat)
	{
		long pass_idParamValue = pass_id;
		long matParamValue = mat.nativeObject.pointer;
		_fireNotifyMaterialRender_ev_uint32_CMaterialPtr(this.nativeObject.pointer, pass_idParamValue, matParamValue);
	}
	native private void _fireNotifyResourcesCreated_ev_bool(long pNativeObject, boolean forResizeOnly);
	public void _fireNotifyResourcesCreated(boolean forResizeOnly)
	{
		boolean forResizeOnlyParamValue = forResizeOnly;
		_fireNotifyResourcesCreated_ev_bool(this.nativeObject.pointer, forResizeOnlyParamValue);
	}
	public CompositorInstance(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorInstance(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register__compileTargetOperations_CompiledState(long pNativeObject, String method);
	native protected void register__compileOutputOperation_CTargetOperation(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__compileTargetOperations_CompiledState(this.nativeObject.pointer, "_compileTargetOperations_CompiledState_callback");
			this.register__compileOutputOperation_CTargetOperation(this.nativeObject.pointer, "_compileOutputOperation_CTargetOperation_callback");
		}
	}
	
	public static CompositorInstance fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorInstance obj = null;
 		if(baseObj instanceof CompositorInstance)
		{
			obj = (CompositorInstance)baseObj;
		} else {
			obj = new CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositorInstance");
			obj.increaseCast();
		}

		return obj;
	}
}
