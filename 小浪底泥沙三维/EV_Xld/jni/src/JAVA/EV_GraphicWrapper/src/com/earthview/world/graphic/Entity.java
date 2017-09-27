package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 实体类此类是模型在场景中的实例
 */
public class Entity extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity", new EntityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCEntityProxy", new EntityClassFactory());
	}

	/**
	 * 实体监听器类
	 */
	public static class EntityListener extends com.earthview.world.graphic.Resource.ResourceListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::CEntityListener", new EntityListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::JCEntityListenerProxy", new EntityListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 父类
		 */
		public EntityListener(com.earthview.world.graphic.Entity parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCEntityListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Entity$EntityListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void backgroundLoadingComplete_CResource(long pNativeObject, long res);
		/**
		 * 回调显示，背景加载完成
		 * @param res 资源
		 */
		public void backgroundLoadingComplete(com.earthview.world.graphic.Resource res)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			backgroundLoadingComplete_CResource(this.nativeObject.pointer, resParamValue);
		}
		native private void backgroundLoadingComplete_CResource_NoVirtual(long pNativeObject, long res);
		protected void backgroundLoadingComplete_NoVirtual(com.earthview.world.graphic.Resource res)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			backgroundLoadingComplete_CResource_NoVirtual(this.nativeObject.pointer, resParamValue);
		}

		public EntityListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EntityListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public void backgroundPreparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.backgroundPreparingComplete_NoVirtual(pResource);
		}
		public void loadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.loadingComplete_NoVirtual(pResource);
		}
		public void preparingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.preparingComplete_NoVirtual(pResource);
		}
		public void unloadingComplete(com.earthview.world.graphic.Resource pResource)
		{
			super.unloadingComplete_NoVirtual(pResource);
		}
		
		native protected void register_backgroundLoadingComplete_CResource(long pNativeObject, String method);
		native protected void register_backgroundPreparingComplete_CResource(long pNativeObject, String method);
		native protected void register_loadingComplete_CResource(long pNativeObject, String method);
		native protected void register_preparingComplete_CResource(long pNativeObject, String method);
		native protected void register_unloadingComplete_CResource(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_backgroundLoadingComplete_CResource(this.nativeObject.pointer, "backgroundLoadingComplete_CResource_callback");
				this.register_backgroundPreparingComplete_CResource(this.nativeObject.pointer, "backgroundPreparingComplete_CResource_callback");
				this.register_loadingComplete_CResource(this.nativeObject.pointer, "loadingComplete_CResource_callback");
				this.register_preparingComplete_CResource(this.nativeObject.pointer, "preparingComplete_CResource_callback");
				this.register_unloadingComplete_CResource(this.nativeObject.pointer, "unloadingComplete_CResource_callback");
			}
		}
		
		public static EntityListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EntityListener obj = null;
 			if(baseObj instanceof EntityListener)
			{
				obj = (EntityListener)baseObj;
			} else {
				obj = new EntityListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CEntityListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EntityListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EntityListener emptyInstance = new EntityListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getEntityListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.Entity.EntityListener getEntityListenerPtr()
	{
		long returnValue = getEntityListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity.EntityListener __returnValue = new com.earthview.world.graphic.Entity.EntityListener(CreatedWhenConstruct.CWC_NotToCreate, "CEntityListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity.EntityListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityListener");
		}
		return __returnValue;
	}
	native private long getEntityListener_void(long pNativeObject);
	public com.earthview.world.graphic.Entity.EntityListener getEntityListener()
	{
		long returnValue = getEntityListener_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Entity.EntityListener __returnValue = new com.earthview.world.graphic.Entity.EntityListener(CreatedWhenConstruct.CWC_NotToCreate, "CEntityListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity.EntityListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityListener");
		}
		return __returnValue;
	}
	/// <summary>
	/// 实体集合
	/// 原为typedef set<EarthView::World::Graphic::CEntity*> EarthView::World::Graphic::CEntity::EntitySet;
	/// </summary>
	public static class EntitySet extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::EntitySet", new EntitySetClassFactory());
		}

		public EntitySet() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EntitySet", null);
		}

		native private void insert_CEntity(long pNativeObject, long ref_val);
		public void insert(NativeObjectPointer<com.earthview.world.graphic.Entity> ref_val)
		{
			long ref_valParamValue = ref_val.nativeObject.pointer;
			insert_CEntity(this.nativeObject.pointer, ref_valParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long erase_CEntity(long pNativeObject, long key);
		public long erase(NativeObjectPointer<com.earthview.world.graphic.Entity> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = erase_CEntity(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private long count_CEntity(long pNativeObject, long key);
		public long count(NativeObjectPointer<com.earthview.world.graphic.Entity> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = count_CEntity(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long max_size_void(long pNativeObject);
		public long max_size()
		{
			long returnValue = max_size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_EntitySet(long pNativeObject, long other);
		public void swap(com.earthview.world.graphic.Entity.EntitySet other)
		{
			long otherParamValue = other.nativeObject.pointer;
			swap_EntitySet(this.nativeObject.pointer, otherParamValue);
		}
		public EntitySet(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EntitySet(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EntitySet fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EntitySet obj = null;
 			if(baseObj instanceof EntitySet)
			{
				obj = (EntitySet)baseObj;
			} else {
				obj = new EntitySet(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EntitySet");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EntitySetClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EntitySet emptyInstance = new EntitySet(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef map<unsigned short, bool>::type SchemeHardwareAnimMap;
	public static class SchemeHardwareAnimMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::SchemeHardwareAnimMap", new SchemeHardwareAnimMapClassFactory());
		}

		public SchemeHardwareAnimMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SchemeHardwareAnimMap", null);
		}

		native private boolean push_ev_uint16_ev_bool(long pNativeObject, int key, boolean val);
		public boolean push(int key, boolean val)
		{
			int keyParamValue = key;
			boolean valParamValue = val;
			boolean returnValue = push_ev_uint16_ev_bool(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		public BooleanPointer OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		public BooleanPointer get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
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
		public SchemeHardwareAnimMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SchemeHardwareAnimMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SchemeHardwareAnimMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SchemeHardwareAnimMap obj = null;
 			if(baseObj instanceof SchemeHardwareAnimMap)
			{
				obj = (SchemeHardwareAnimMap)baseObj;
			} else {
				obj = new SchemeHardwareAnimMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SchemeHardwareAnimMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SchemeHardwareAnimMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SchemeHardwareAnimMap emptyInstance = new SchemeHardwareAnimMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long _getParentNodeFullTransform_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		long returnValue = _getParentNodeFullTransform_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long _getParentNodeFullTransform_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform_NoVirtual()
	{
		long returnValue = _getParentNodeFullTransform_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	/**
	 * 嵌套类允许实体对象渲染
	 */
	public static class EntityShadowRenderable extends com.earthview.world.graphic.ShadowRenderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::CEntityShadowRenderable", new EntityShadowRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::JCEntityShadowRenderableProxy", new EntityShadowRenderableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 
		 * @param indexBuffer 
		 * @param vertexData 
		 * @param createSeparateLightCap 
		 * @param subent 
		 * @param isLightCap 
		 */
		public EntityShadowRenderable(com.earthview.world.graphic.Entity ref_parent, com.earthview.world.graphic.HardwareIndexBufferSharedPtr ref_indexBuffer, com.earthview.world.graphic.VertexData ref_vertexData, boolean createSeparateLightCap, com.earthview.world.graphic.SubEntity ref_subent, boolean isLightCap) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer ref_indexBufferPtr = new BasePointer(ref_indexBuffer);
			list.add("ref_indexBuffer", ref_indexBufferPtr.get());
			BasePointer ref_vertexDataPtr = new BasePointer(ref_vertexData);
			list.add("ref_vertexData", ref_vertexDataPtr.get());
			BasePointer createSeparateLightCapPtr = new BasePointer(createSeparateLightCap);
			list.add("createSeparateLightCap", createSeparateLightCapPtr.get());
			BasePointer ref_subentPtr = new BasePointer(ref_subent);
			list.add("ref_subent", ref_subentPtr.get());
			BasePointer isLightCapPtr = new BasePointer(isLightCap);
			list.add("isLightCap", isLightCapPtr.get());
			Create("JCEntityShadowRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Entity$EntityShadowRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public EntityShadowRenderable(com.earthview.world.graphic.Entity ref_parent, com.earthview.world.graphic.HardwareIndexBufferSharedPtr ref_indexBuffer, com.earthview.world.graphic.VertexData ref_vertexData, boolean createSeparateLightCap, com.earthview.world.graphic.SubEntity ref_subent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer ref_indexBufferPtr = new BasePointer(ref_indexBuffer);
			list.add("ref_indexBuffer", ref_indexBufferPtr.get());
			BasePointer ref_vertexDataPtr = new BasePointer(ref_vertexData);
			list.add("ref_vertexData", ref_vertexDataPtr.get());
			BasePointer createSeparateLightCapPtr = new BasePointer(createSeparateLightCap);
			list.add("createSeparateLightCap", createSeparateLightCapPtr.get());
			BasePointer ref_subentPtr = new BasePointer(ref_subent);
			list.add("ref_subent", ref_subentPtr.get());
			Create("JCEntityShadowRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Entity$EntityShadowRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void _createSeparateLightCap_void(long pNativeObject);
		//// Create the separate light cap if it doesn't already exists
		public void _createSeparateLightCap()
		{
			_createSeparateLightCap_void(this.nativeObject.pointer);
		}
		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得世界坐标转换矩阵信息重写EarthView::World::Graphic::CShadowRenderable
		 * @param xform 四维矩阵
		 */
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		native private long getPositionBuffer_void(long pNativeObject);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getPositionBuffer()
		{
			long returnValue = getPositionBuffer_void(this.nativeObject.pointer);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private long getWBuffer_void(long pNativeObject);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getWBuffer()
		{
			long returnValue = getWBuffer_void(this.nativeObject.pointer);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private void rebindPositionBuffer_CVertexData_ev_bool(long pNativeObject, long ref_vertexData, boolean force);
		/**
		 * 重新绑定位置源为临时缓冲区用户使用
		 * @param vertexData 
		 * @param force 
		 */
		public void rebindPositionBuffer(com.earthview.world.graphic.VertexData ref_vertexData, boolean force)
		{
			long ref_vertexDataParamValue = (ref_vertexData == null ? 0L : ref_vertexData.nativeObject.pointer);
			boolean forceParamValue = force;
			rebindPositionBuffer_CVertexData_ev_bool(this.nativeObject.pointer, ref_vertexDataParamValue, forceParamValue);
		}
		native private boolean isVisible_void(long pNativeObject);
		/**
		 * 阴影渲染对象是否可见重写EarthView::World::Graphic::CShadowRenderable
		 * @param  
		 * @return 为真，可见
		 */
		public boolean isVisible()
		{
			boolean returnValue = isVisible_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isVisible_void_NoVirtual(long pNativeObject);
		protected boolean isVisible_NoVirtual()
		{
			boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private void rebindIndexBuffer_CHardwareIndexBufferSharedPtr(long pNativeObject, long indexBuffer);
		//// Overridden from ShadowRenderable
		public void rebindIndexBuffer(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
		{
			long indexBufferParamValue = indexBuffer.nativeObject.pointer;
			rebindIndexBuffer_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, indexBufferParamValue);
		}
		native private void rebindIndexBuffer_CHardwareIndexBufferSharedPtr_NoVirtual(long pNativeObject, long indexBuffer);
		protected void rebindIndexBuffer_NoVirtual(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
		{
			long indexBufferParamValue = indexBuffer.nativeObject.pointer;
			rebindIndexBuffer_CHardwareIndexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, indexBufferParamValue);
		}

		public EntityShadowRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EntityShadowRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 获得材质
		 * @param  
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			return super.getMaterial_NoVirtual();
		}
		/**
		 * 获得技术
		 * @param  
		 */
		public com.earthview.world.graphic.Technique getTechnique()
		{
			return super.getTechnique_NoVirtual();
		}
		/**
		 * 获得渲染操作
		 * @param op 
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			super.getRenderOperation_NoVirtual(op);
		}
		/**
		 * 渲染开始时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 * @return 如果自动执行渲染过程返回true,手动执行返回false
		 */
		public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			return super.preRender_NoVirtual(sm, rsys);
		}
		/**
		 * 渲染完成时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 */
		public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			super.postRender_NoVirtual(sm, rsys);
		}
		/**
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
		}
		/// <summary>
		/// 返回渲染实体相对虚拟相机的观察深度的平方
		/// </summary>
		/// <param name="cam"></param>
		/// <returns</returns>
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			return super.getSquaredViewDepth_NoVirtual(cam);
		}
		/**
		 * 获得光照的列表，按照相对于渲染实体的远近排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			return super.getLights_NoVirtual();
		}
		/**
		 * 是否投射投影
		 * @param  
		 */
		public boolean getCastsShadows()
		{
			return super.getCastsShadows_NoVirtual();
		}
		/**
		 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
		 * @param constantEntry CAutoConstantEntry的别名
		 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
		}
		/**
		 * 设置多边形渲染方式是否可重写
		 * @param override 设置参数
		 * @return true可以超越，false不可以
		 */
		public void setPolygonModeOverrideable(boolean override)
		{
			super.setPolygonModeOverrideable_NoVirtual(override);
		}
		/**
		 * 获得多边形渲染方式是否可重写
		 * @param  
		 */
		public boolean getPolygonModeOverrideable()
		{
			return super.getPolygonModeOverrideable_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数
		 * @param  
		 */
		public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
		{
			super.setCustomAmbient_NoVirtual(ambient);
		}
		/**
		 * 获取自定义环境光系数
		 * @param  
		 */
		public com.earthview.world.graphic.ColourValue getCustomAmbient()
		{
			return super.getCustomAmbient_NoVirtual();
		}
		/**
		 * 获取自定义环境光系数是否启用
		 * @param  
		 */
		public boolean getCustomAmbientEnabled()
		{
			return super.getCustomAmbientEnabled_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数是否启用
		 * @param  
		 */
		public void setCustomAmbientEnabled(boolean enabled)
		{
			super.setCustomAmbientEnabled_NoVirtual(enabled);
		}
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			return super.getMovableObject_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			return super.existListener_NoVirtual(listener);
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public long getListenerCount()
		{
			return super.getListenerCount_NoVirtual();
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 设置渲染系统的私有数据
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
		{
			return super.getRenderSystemData_NoVirtual();
		}
		/**
		 * 获得渲染系统的私有数据
		 * @param  
		 */
		public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
		{
			super.setRenderSystemData_NoVirtual(ref_val);
		}
		
		native protected void register_isVisible_void(long pNativeObject, String method);
		native protected void register_rebindIndexBuffer_CHardwareIndexBufferSharedPtr(long pNativeObject, String method);
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_getTechnique_void(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
		native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
		native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
		native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
		native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
		native protected void register_getCustomAmbient_void(long pNativeObject, String method);
		native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
		native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_getMovableObject_void(long pNativeObject, String method);
		native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_getRenderSystemData_void(long pNativeObject, String method);
		native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
				this.register_rebindIndexBuffer_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, "rebindIndexBuffer_CHardwareIndexBufferSharedPtr_callback");
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
				this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
				this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
				this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
				this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
				this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
				this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
				this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
				this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
				this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
				this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
				this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
				this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
				this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
			}
		}
		
		public static EntityShadowRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EntityShadowRenderable obj = null;
 			if(baseObj instanceof EntityShadowRenderable)
			{
				obj = (EntityShadowRenderable)baseObj;
			} else {
				obj = new EntityShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CEntityShadowRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EntityShadowRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EntityShadowRenderable emptyInstance = new EntityShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CMapIterator<ChildObjectList> EarthView::World::Graphic::CEntity::ChildObjectListIterator;
	/// <summary>
	/// 获取基于实体的模型
	///typedef EarthView::World::Core::CMapIterator<ChildObjectList> EarthView::World::Graphic::CEntity::ChildObjectListIterator;
	/// </summary>
	public static class ChildObjectListIteratorPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair", new ChildObjectListIteratorPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ChildObjectListIteratorPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ChildObjectListIteratorPair", null);
		}

		native private String get_first_void(long pNativeObject);
		public String get_first()
		{
			String jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_EVString (long pNativeObject, String value);
		public void set_first(String first)
		{
			String firstParamValue = first;
			
			set_first_EVString(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		
		native private void set_second_CMovableObject (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.MovableObject second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CMovableObject(this.nativeObject.pointer, secondParamValue);
		}
		
		public ChildObjectListIteratorPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildObjectListIteratorPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildObjectListIteratorPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildObjectListIteratorPair obj = null;
 			if(baseObj instanceof ChildObjectListIteratorPair)
			{
				obj = (ChildObjectListIteratorPair)baseObj;
			} else {
				obj = new ChildObjectListIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildObjectListIteratorPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildObjectListIteratorPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildObjectListIteratorPair emptyInstance = new ChildObjectListIteratorPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ChildObjectListIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEntity::ChildObjectListIterator", new ChildObjectListIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 
		 */
		public ChildObjectListIterator(com.earthview.world.graphic.MovableObjectList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ChildObjectListIterator", list);
		}

		/**
		 * 构造函数
		 * @param other 
		 */
		public ChildObjectListIterator(com.earthview.world.graphic.Entity.ChildObjectListIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ChildObjectListIterator", list);
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
		public com.earthview.world.graphic.MovableObject nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.MovableObject> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Entity.ChildObjectListIteratorPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Entity.ChildObjectListIteratorPair __returnValue = new com.earthview.world.graphic.Entity.ChildObjectListIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ChildObjectListIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Entity.ChildObjectListIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ChildObjectListIteratorPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Entity.ChildObjectListIteratorPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Entity.ChildObjectListIteratorPair __returnValue = new com.earthview.world.graphic.Entity.ChildObjectListIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ChildObjectListIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Entity.ChildObjectListIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ChildObjectListIteratorPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Entity.ChildObjectListIteratorPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Entity.ChildObjectListIteratorPair __returnValue = new com.earthview.world.graphic.Entity.ChildObjectListIteratorPair(CreatedWhenConstruct.CWC_NotToCreate, "ChildObjectListIteratorPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Entity.ChildObjectListIteratorPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ChildObjectListIteratorPair");
			}
			return __returnValue;
		}
		public ChildObjectListIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ChildObjectListIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ChildObjectListIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ChildObjectListIterator obj = null;
 			if(baseObj instanceof ChildObjectListIterator)
			{
				obj = (ChildObjectListIterator)baseObj;
			} else {
				obj = new ChildObjectListIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ChildObjectListIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChildObjectListIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ChildObjectListIterator emptyInstance = new ChildObjectListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getMesh_void(long pNativeObject);
	/**
	 * 获取模型
	 * @param  
	 */
	public com.earthview.world.graphic.MeshPtr getMesh()
	{
		long returnValue = getMesh_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long getSubEntity_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.graphic.SubEntity getSubEntity(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubEntity_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity __returnValue = new com.earthview.world.graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntity");
		}
		return __returnValue;
	}
	native private long getSubEntity_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.SubEntity getSubEntity(String name)
	{
		String nameParamValue = name;
		long returnValue = getSubEntity_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity __returnValue = new com.earthview.world.graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntity");
		}
		return __returnValue;
	}
	native private long getSubEntity_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceIndex);
	public com.earthview.world.graphic.SubEntity getSubEntity(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		long returnValue = getSubEntity_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity __returnValue = new com.earthview.world.graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntity");
		}
		return __returnValue;
	}
	native private long getSubEntity_EVString_ev_uint32(long pNativeObject, String submeshName, long instanceIndex);
	public com.earthview.world.graphic.SubEntity getSubEntity(String submeshName, long instanceIndex)
	{
		String submeshNameParamValue = submeshName;
		long instanceIndexParamValue = instanceIndex;
		long returnValue = getSubEntity_EVString_ev_uint32(this.nativeObject.pointer, submeshNameParamValue, instanceIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubEntity __returnValue = new com.earthview.world.graphic.SubEntity(CreatedWhenConstruct.CWC_NotToCreate, "CSubEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubEntity");
		}
		return __returnValue;
	}
	native private long getNumSubEntities_void(long pNativeObject);
	public long getNumSubEntities()
	{
		long returnValue = getNumSubEntities_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int calculateSubEntityIndex_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 * @return 返回-1计算失败
	 */
	public int calculateSubEntityIndex(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, long subEntityIndex, long submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标属于哪个子部件的哪个instance
	 * @param index subentity下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 * @return 返回-1计算失败
	 */
	public void calculateInstanceIndex(long subEntityIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}
	native private void setCastShadows_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCastShadows_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCastShadows_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setCastShadows_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCastShadows_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  void setVisible_ev_bool_ev_bool_callback(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible(visibleParamValue, cascadeParamValue);
	}

	native private void setVisible_ev_bool_ev_bool(long pNativeObject, boolean visible, boolean cascade);
	public void setVisible(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}
	native private void setVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean visible, boolean cascade);
	protected void setVisible_NoVirtual(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}

	native private long ev_clone_EVString(long pNativeObject, String newName);
	/**
	 * 克隆实体
	 * @param newName 新产生的实体的名称
	 * @return 新产生的实体指针
	 */
	public com.earthview.world.graphic.Entity ev_clone(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, newNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 通过名称设置实体材质
	 * @param name 名称
	 * @param groupName 组名称
	 */
	public void setMaterialName(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void setMaterialName_EVString(long pNativeObject, String name);
	/**
	 * 通过名称设置实体材质
	 * @param name 名称
	 */
	public void setMaterialName(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setMaterial_CMaterialPtr(long pNativeObject, long material);
	/**
	 * 设置实体材质
	 * @param material 材质
	 * @return 材质
	 */
	public void setMaterial(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		setMaterial_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
	}
	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 渲染时通报当前摄像机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组ID
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, short queueID, int priority);
	/**
	 * 设置渲染队列组ID和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}
	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(long pNativeObject, short queueID, int priority);
	protected void setRenderQueueGroupAndPriority_NoVirtual(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取模型坐标系的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private long getChildObjectsBoundingBox_void(long pNativeObject);
	//// merge all the child object Bounds a return it
	public com.earthview.world.spatial.math.AxisAlignedBox getChildObjectsBoundingBox()
	{
		long returnValue = getChildObjectsBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	/**
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private boolean setSelected_IntVector_NoVirtual(long pNativeObject, long objIndics);
	protected boolean setSelected_NoVirtual(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector_NoVirtual(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}

	native private long getSelected_void(long pNativeObject);
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		long returnValue = getSelected_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getSelected_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.IntVector getSelected_NoVirtual()
	{
		long returnValue = getSelected_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}

	native private boolean setSelected_ev_uint32_ev_uint32(long pNativeObject, long subMeshIndex, long instanceIndex);
	/// <summary>
	/// 设置选中的subMeshIndex对象				
	/// <param name="subMeshIndex">选中的subMeshIndex</param>	
	/// <param name="instanceIndex">默认值为0</param>
	/// <param name="segmentIndex">分段序号，默认值为-1</param>
	/// <returns></returns>
	public boolean setSelected(long subMeshIndex, long instanceIndex)
	{
		long subMeshIndexParamValue = subMeshIndex;
		long instanceIndexParamValue = instanceIndex;
		boolean returnValue = setSelected_ev_uint32_ev_uint32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private boolean setSelected_ev_uint32_ev_uint32_ev_int32(long pNativeObject, long subMeshIndex, long instanceIndex, int segmentIndex);
	public boolean setSelected(long subMeshIndex, long instanceIndex, int segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean returnValue = setSelected_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean getSelected_ev_uint32_ev_uint32(long pNativeObject, long subMeshIndex, long instanceIndex);
	/// <summary>
	/// 获取选中的subEntity对象				
	/// <param name="subMeshIndex">选中的subMeshIndex</param>	
	/// <param name="instanceIndex">默认值为0</param>
	/// <param name="segmentIndex">分段序号，默认值为-1</param>
	/// <returns></returns>
	public boolean getSelected(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		boolean returnValue = getSelected_ev_uint32_ev_uint32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private boolean getSelected_ev_uint32_ev_uint32_ev_int32(long pNativeObject, long subMeshIndex, long instanceIndex, long segmentIndex);
	public boolean getSelected(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex, IntegerPointer segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = getSelected_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	protected  void setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool_callback(int selectedSubMeshIndex, int selectedInstanceIndex, int selectedSegmentIndex, boolean bSelected)
	{
		int selectedSubMeshIndexParamValue = selectedSubMeshIndex;
		int selectedInstanceIndexParamValue = selectedInstanceIndex;
		int selectedSegmentIndexParamValue = selectedSegmentIndex;
		boolean bSelectedParamValue = bSelected;
		setprepareSelect(selectedSubMeshIndexParamValue, selectedInstanceIndexParamValue, selectedSegmentIndexParamValue, bSelectedParamValue);
	}

	native private void setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, int selectedSubMeshIndex, int selectedInstanceIndex, int selectedSegmentIndex, boolean bSelected);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void setprepareSelect(int selectedSubMeshIndex, int selectedInstanceIndex, int selectedSegmentIndex, boolean bSelected)
	{
		int selectedSubMeshIndexParamValue = selectedSubMeshIndex;
		int selectedInstanceIndexParamValue = selectedInstanceIndex;
		int selectedSegmentIndexParamValue = selectedSegmentIndex;
		boolean bSelectedParamValue = bSelected;
		setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, selectedSubMeshIndexParamValue, selectedInstanceIndexParamValue, selectedSegmentIndexParamValue, bSelectedParamValue);
	}
	native private void setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool_NoVirtual(long pNativeObject, int selectedSubMeshIndex, int selectedInstanceIndex, int selectedSegmentIndex, boolean bSelected);
	protected void setprepareSelect_NoVirtual(int selectedSubMeshIndex, int selectedInstanceIndex, int selectedSegmentIndex, boolean bSelected)
	{
		int selectedSubMeshIndexParamValue = selectedSubMeshIndex;
		int selectedInstanceIndexParamValue = selectedInstanceIndex;
		int selectedSegmentIndexParamValue = selectedSegmentIndex;
		boolean bSelectedParamValue = bSelected;
		setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, selectedSubMeshIndexParamValue, selectedInstanceIndexParamValue, selectedSegmentIndexParamValue, bSelectedParamValue);
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
	protected boolean startEditing_NoVirtual(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}

	native private void endEditing_void(long pNativeObject);
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getEditBoundingBox_void(long pNativeObject);
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		long returnValue = getEditBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}
	native private long getEditBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EditBoundingBox getEditBoundingBox_NoVirtual()
	{
		long returnValue = getEditBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}

	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean getSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean setSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	native private long getAnimationState_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.AnimationState getAnimationState(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private boolean hasAnimationState_EVString(long pNativeObject, String name);
	public boolean hasAnimationState(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private long getAllAnimationStates_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationStateSet getAllAnimationStates()
	{
		long returnValue = getAllAnimationStates_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationStateSet __returnValue = new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationStateSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationStateSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationStateSet");
		}
		return __returnValue;
	}
	native private void setDisplaySkeleton_ev_bool(long pNativeObject, boolean display);
	public void setDisplaySkeleton(boolean display)
	{
		boolean displayParamValue = display;
		setDisplaySkeleton_ev_bool(this.nativeObject.pointer, displayParamValue);
	}
	native private boolean getDisplaySkeleton_void(long pNativeObject);
	public boolean getDisplaySkeleton()
	{
		boolean returnValue = getDisplaySkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getManualLodLevel_ev_size_t(long pNativeObject, long index);
	public com.earthview.world.graphic.Entity getManualLodLevel(long index)
	{
		long indexParamValue = index;
		long returnValue = getManualLodLevel_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private long getNumManualLodLevels_void(long pNativeObject);
	public long getNumManualLodLevels()
	{
		long returnValue = getNumManualLodLevels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCurrentLodIndex_void(long pNativeObject);
	/**
	 * 获取当前LOD用于渲染
	 * @param  
	 * @return 名称
	 */
	public int getCurrentLodIndex()
	{
		int returnValue = getCurrentLodIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMeshLodBias_Real_ev_uint16_ev_uint16(long pNativeObject, double factor, int maxDetailIndex, int minDetailIndex);
	public void setMeshLodBias(double factor, int maxDetailIndex, int minDetailIndex)
	{
		double factorParamValue = factor;
		int maxDetailIndexParamValue = maxDetailIndex;
		int minDetailIndexParamValue = minDetailIndex;
		setMeshLodBias_Real_ev_uint16_ev_uint16(this.nativeObject.pointer, factorParamValue, maxDetailIndexParamValue, minDetailIndexParamValue);
	}
	native private void setMeshLodBias_Real_ev_uint16(long pNativeObject, double factor, int maxDetailIndex);
	public void setMeshLodBias(double factor, int maxDetailIndex)
	{
		double factorParamValue = factor;
		int maxDetailIndexParamValue = maxDetailIndex;
		setMeshLodBias_Real_ev_uint16(this.nativeObject.pointer, factorParamValue, maxDetailIndexParamValue);
	}
	native private void setMeshLodBias_Real(long pNativeObject, double factor);
	public void setMeshLodBias(double factor)
	{
		double factorParamValue = factor;
		setMeshLodBias_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private void setMaterialLodBias_Real_ev_uint16_ev_uint16(long pNativeObject, double factor, int maxDetailIndex, int minDetailIndex);
	public void setMaterialLodBias(double factor, int maxDetailIndex, int minDetailIndex)
	{
		double factorParamValue = factor;
		int maxDetailIndexParamValue = maxDetailIndex;
		int minDetailIndexParamValue = minDetailIndex;
		setMaterialLodBias_Real_ev_uint16_ev_uint16(this.nativeObject.pointer, factorParamValue, maxDetailIndexParamValue, minDetailIndexParamValue);
	}
	native private void setMaterialLodBias_Real_ev_uint16(long pNativeObject, double factor, int maxDetailIndex);
	public void setMaterialLodBias(double factor, int maxDetailIndex)
	{
		double factorParamValue = factor;
		int maxDetailIndexParamValue = maxDetailIndex;
		setMaterialLodBias_Real_ev_uint16(this.nativeObject.pointer, factorParamValue, maxDetailIndexParamValue);
	}
	native private void setMaterialLodBias_Real(long pNativeObject, double factor);
	public void setMaterialLodBias(double factor)
	{
		double factorParamValue = factor;
		setMaterialLodBias_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private void setPolygonModeOverrideable_ev_bool(long pNativeObject, boolean PolygonModeOverrideable);
	public void setPolygonModeOverrideable(boolean PolygonModeOverrideable)
	{
		boolean PolygonModeOverrideableParamValue = PolygonModeOverrideable;
		setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, PolygonModeOverrideableParamValue);
	}
	native private long attachObjectToBone_EVString_CMovableObject_CQuaternion_CVector3(long pNativeObject, String boneName, long ref_pMovable, long offsetOrientation, long offsetPosition);
	public com.earthview.world.graphic.TagPoint attachObjectToBone(String boneName, com.earthview.world.graphic.MovableObject ref_pMovable, com.earthview.world.spatial.math.Quaternion offsetOrientation, com.earthview.world.spatial.math.Vector3 offsetPosition)
	{
		String boneNameParamValue = boneName;
		long ref_pMovableParamValue = (ref_pMovable == null ? 0L : ref_pMovable.nativeObject.pointer);
		long offsetOrientationParamValue = offsetOrientation.nativeObject.pointer;
		long offsetPositionParamValue = offsetPosition.nativeObject.pointer;
		long returnValue = attachObjectToBone_EVString_CMovableObject_CQuaternion_CVector3(this.nativeObject.pointer, boneNameParamValue, ref_pMovableParamValue, offsetOrientationParamValue, offsetPositionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private long attachObjectToBone_EVString_CMovableObject_CQuaternion(long pNativeObject, String boneName, long ref_pMovable, long offsetOrientation);
	///EarthView::World::Graphic::CTagPoint* attachObjectToBone(const EVString &boneName,EarthView::World::Graphic::CMovableObject *pMovable,
	///	const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
	///	const EarthView::World::Spatial::Math::CVector3 &offsetPosition = EarthView::World::Spatial::Math::CVector3::ZERO);
	public com.earthview.world.graphic.TagPoint attachObjectToBone(String boneName, com.earthview.world.graphic.MovableObject ref_pMovable, com.earthview.world.spatial.math.Quaternion offsetOrientation)
	{
		String boneNameParamValue = boneName;
		long ref_pMovableParamValue = (ref_pMovable == null ? 0L : ref_pMovable.nativeObject.pointer);
		long offsetOrientationParamValue = offsetOrientation.nativeObject.pointer;
		long returnValue = attachObjectToBone_EVString_CMovableObject_CQuaternion(this.nativeObject.pointer, boneNameParamValue, ref_pMovableParamValue, offsetOrientationParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private long attachObjectToBone_EVString_CMovableObject(long pNativeObject, String boneName, long ref_pMovable);
	public com.earthview.world.graphic.TagPoint attachObjectToBone(String boneName, com.earthview.world.graphic.MovableObject ref_pMovable)
	{
		String boneNameParamValue = boneName;
		long ref_pMovableParamValue = (ref_pMovable == null ? 0L : ref_pMovable.nativeObject.pointer);
		long returnValue = attachObjectToBone_EVString_CMovableObject(this.nativeObject.pointer, boneNameParamValue, ref_pMovableParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private long detachObjectFromBone_EVString(long pNativeObject, String movableName);
	public com.earthview.world.graphic.MovableObject detachObjectFromBone(String movableName)
	{
		String movableNameParamValue = movableName;
		long returnValue = detachObjectFromBone_EVString(this.nativeObject.pointer, movableNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private void detachObjectFromBone_CMovableObject(long pNativeObject, long obj);
	public void detachObjectFromBone(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		detachObjectFromBone_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void detachAllObjectsFromBone_void(long pNativeObject);
	public void detachAllObjectsFromBone()
	{
		detachAllObjectsFromBone_void(this.nativeObject.pointer);
	}
	native private long getAttachedObjectIterator_void(long pNativeObject);
	public com.earthview.world.graphic.Entity.ChildObjectListIterator getAttachedObjectIterator()
	{
		long returnValue = getAttachedObjectIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Entity.ChildObjectListIterator __returnValue = new com.earthview.world.graphic.Entity.ChildObjectListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ChildObjectListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity.ChildObjectListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ChildObjectListIterator");
		}
		return __returnValue;
	}
	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获取球体限定半径
	 * @param  
	 * @return 边框盒
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMinimumBoundingBox_CAxisAlignedBox(long pNativeObject, long box);
	/**
	 * 设置最小包围盒，计算世界包围盒时，mesh的包围盒和最小包围盒先求并，然后再计算世界包围盒
	 * @param box 包围盒
	 */
	public void setMinimumBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		setMinimumBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	native private long getWorldBoundingBox_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 获取世界坐标系中的边框盒
	 * @param derive 是否重新计算,默认为false
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getWorldBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private long getWorldBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		long returnValue = getWorldBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getWorldBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual()
	{
		long returnValue = getWorldBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private long getWorldBoundingSphere_ev_bool(long pNativeObject, boolean derive);
	/**
	 * 获取世界空间系中的边框球体
	 * @param derive 是否重新计算,默认为false
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}
	native private long getWorldBoundingSphere_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.Sphere getWorldBoundingSphere_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingSphere_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}

	native private long getWorldBoundingSphere_void(long pNativeObject);
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		long returnValue = getWorldBoundingSphere_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}
	native private long getWorldBoundingSphere_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Sphere getWorldBoundingSphere_NoVirtual()
	{
		long returnValue = getWorldBoundingSphere_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Sphere __returnValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate, "CSphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Sphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphere");
		}
		return __returnValue;
	}

	native private long getEdgeList_void(long pNativeObject);
	/**
	 * 获取边列表
	 * @param  
	 */
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		long returnValue = getEdgeList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	native private long getEdgeList_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EdgeData getEdgeList_NoVirtual()
	{
		long returnValue = getEdgeList_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}

	native private boolean hasEdgeList_void(long pNativeObject);
	/**
	 * 是否存在边列表
	 * @param  
	 */
	public boolean hasEdgeList()
	{
		boolean returnValue = hasEdgeList_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasEdgeList_void_NoVirtual(long pNativeObject);
	protected boolean hasEdgeList_NoVirtual()
	{
		boolean returnValue = hasEdgeList_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
	/**
	 * 获取阴影锥渲染对象的迭代器
	 * @param shadowTechnique 生成阴影的方法
	 * @param light 光源
	 * @param indexBuffer 索引
	 * @param extrudeVertices 为真，在软件中挤压顶点后面的体积成为三维实体
	 * @param extrusionDist 距离
	 * @param flags 标识，默认为0
	 */
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private long _getBoneMatrices_void(long pNativeObject);
	/**
	 * 获取骨骼矩阵内部方法
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getBoneMatrices()
	{
		long returnValue = _getBoneMatrices_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private int _getNumBoneMatrices_void(long pNativeObject);
	public int _getNumBoneMatrices()
	{
		int returnValue = _getNumBoneMatrices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSkeleton_void(long pNativeObject);
	public boolean hasSkeleton()
	{
		boolean returnValue = hasSkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSkeleton_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonInstance getSkeleton()
	{
		long returnValue = getSkeleton_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SkeletonInstance __returnValue = new com.earthview.world.graphic.SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonInstance");
		}
		return __returnValue;
	}
	native private boolean isHardwareAnimationEnabled_void(long pNativeObject);
	public boolean isHardwareAnimationEnabled()
	{
		boolean returnValue = isHardwareAnimationEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	/**
	 * 通知挂接
	 * @param parent 父结点
	 * @param isTagPoint 是否在结点下，默认为false
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	/**
	 * 通知挂接
	 * @param parent 父结点
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void _notifyAttached_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	native private int getSoftwareAnimationRequests_void(long pNativeObject);
	public int getSoftwareAnimationRequests()
	{
		int returnValue = getSoftwareAnimationRequests_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSoftwareAnimationNormalsRequests_void(long pNativeObject);
	public int getSoftwareAnimationNormalsRequests()
	{
		int returnValue = getSoftwareAnimationNormalsRequests_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addSoftwareAnimationRequest_ev_bool(long pNativeObject, boolean normalsAlso);
	public void addSoftwareAnimationRequest(boolean normalsAlso)
	{
		boolean normalsAlsoParamValue = normalsAlso;
		addSoftwareAnimationRequest_ev_bool(this.nativeObject.pointer, normalsAlsoParamValue);
	}
	native private void removeSoftwareAnimationRequest_ev_bool(long pNativeObject, boolean normalsAlso);
	public void removeSoftwareAnimationRequest(boolean normalsAlso)
	{
		boolean normalsAlsoParamValue = normalsAlso;
		removeSoftwareAnimationRequest_ev_bool(this.nativeObject.pointer, normalsAlsoParamValue);
	}
	native private void shareSkeletonInstanceWith_CEntity(long pNativeObject, long entity);
	public void shareSkeletonInstanceWith(com.earthview.world.graphic.Entity entity)
	{
		long entityParamValue = (entity == null ? 0L : entity.nativeObject.pointer);
		shareSkeletonInstanceWith_CEntity(this.nativeObject.pointer, entityParamValue);
	}
	native private boolean hasVertexAnimation_void(long pNativeObject);
	public boolean hasVertexAnimation()
	{
		boolean returnValue = hasVertexAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void stopSharingSkeletonInstance_void(long pNativeObject);
	public void stopSharingSkeletonInstance()
	{
		stopSharingSkeletonInstance_void(this.nativeObject.pointer);
	}
	native private boolean sharesSkeletonInstance_void(long pNativeObject);
	public boolean sharesSkeletonInstance()
	{
		boolean returnValue = sharesSkeletonInstance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSkeletonInstanceSharingSet_void(long pNativeObject);
	public com.earthview.world.graphic.Entity.EntitySet getSkeletonInstanceSharingSet()
	{
		long returnValue = getSkeletonInstanceSharingSet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity.EntitySet __returnValue = new com.earthview.world.graphic.Entity.EntitySet(CreatedWhenConstruct.CWC_NotToCreate, "EntitySet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity.EntitySet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EntitySet");
		}
		return __returnValue;
	}
	native private void refreshAvailableAnimationState_void(long pNativeObject);
	public void refreshAvailableAnimationState()
	{
		refreshAvailableAnimationState_void(this.nativeObject.pointer);
	}
	native private void _updateAnimation_void(long pNativeObject);
	public void _updateAnimation()
	{
		_updateAnimation_void(this.nativeObject.pointer);
	}
	native private boolean _isAnimated_void(long pNativeObject);
	public boolean _isAnimated()
	{
		boolean returnValue = _isAnimated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean _isSkeletonAnimated_void(long pNativeObject);
	public boolean _isSkeletonAnimated()
	{
		boolean returnValue = _isSkeletonAnimated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getSkelAnimVertexData_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData _getSkelAnimVertexData()
	{
		long returnValue = _getSkelAnimVertexData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private long _getSoftwareVertexAnimVertexData_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData _getSoftwareVertexAnimVertexData()
	{
		long returnValue = _getSoftwareVertexAnimVertexData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private long _getHardwareVertexAnimVertexData_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData _getHardwareVertexAnimVertexData()
	{
		long returnValue = _getHardwareVertexAnimVertexData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private long _getSkelAnimTempBufferInfo_void(long pNativeObject);
	public com.earthview.world.graphic.TempBlendedBufferInfo _getSkelAnimTempBufferInfo()
	{
		long returnValue = _getSkelAnimTempBufferInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TempBlendedBufferInfo __returnValue = new com.earthview.world.graphic.TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTempBlendedBufferInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TempBlendedBufferInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTempBlendedBufferInfo");
		}
		return __returnValue;
	}
	native private long _getVertexAnimTempBufferInfo_void(long pNativeObject);
	public com.earthview.world.graphic.TempBlendedBufferInfo _getVertexAnimTempBufferInfo()
	{
		long returnValue = _getVertexAnimTempBufferInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TempBlendedBufferInfo __returnValue = new com.earthview.world.graphic.TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTempBlendedBufferInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TempBlendedBufferInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTempBlendedBufferInfo");
		}
		return __returnValue;
	}
	native private long getTypeFlags_void(long pNativeObject);
	//// Override to return specific type flag
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getVertexDataForBinding_void(long pNativeObject);
	//// Retrieve the EarthView::World::Graphic::CVertexData which should be used for GPU binding
	public com.earthview.world.graphic.VertexData getVertexDataForBinding()
	{
		long returnValue = getVertexDataForBinding_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	//// Identify which vertex data we should be sending to the renderer
	public enum VertexDataBindChoice implements INativeEnum<VertexDataBindChoice> {
		BIND_ORIGINAL(VertexDataBindChoiceHelper.ENUM_VALUES[0]),
		BIND_SOFTWARE_SKELETAL(VertexDataBindChoiceHelper.ENUM_VALUES[1]),
		BIND_SOFTWARE_MORPH(VertexDataBindChoiceHelper.ENUM_VALUES[2]),
		BIND_HARDWARE_MORPH(VertexDataBindChoiceHelper.ENUM_VALUES[3]);
		private int value;
		VertexDataBindChoice(int i) {
			this.value = i;
		}
		public VertexDataBindChoice getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final VertexDataBindChoice toEnum(int retval) {
			if(retval == BIND_ORIGINAL.value){
				return BIND_ORIGINAL;
			}
			else if(retval == BIND_SOFTWARE_SKELETAL.value){
				return BIND_SOFTWARE_SKELETAL;
			}
			else if(retval == BIND_SOFTWARE_MORPH.value){
				return BIND_SOFTWARE_MORPH;
			}
			else if(retval == BIND_HARDWARE_MORPH.value){
				return BIND_HARDWARE_MORPH;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class VertexDataBindChoiceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private int chooseVertexDataForBinding_ev_bool(long pNativeObject, boolean hasVertexAnim);
	//// Choose which vertex data to bind to the renderer
	public com.earthview.world.graphic.Entity.VertexDataBindChoice chooseVertexDataForBinding(boolean hasVertexAnim)
	{
		boolean hasVertexAnimParamValue = hasVertexAnim;
		int returnValue = chooseVertexDataForBinding_ev_bool(this.nativeObject.pointer, hasVertexAnimParamValue);
		return com.earthview.world.graphic.Entity.VertexDataBindChoice.toEnum(returnValue);
	}
	native private boolean _getBuffersMarkedForAnimation_void(long pNativeObject);
	public boolean _getBuffersMarkedForAnimation()
	{
		boolean returnValue = _getBuffersMarkedForAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _markBuffersUsedForAnimation_void(long pNativeObject);
	public void _markBuffersUsedForAnimation()
	{
		_markBuffersUsedForAnimation_void(this.nativeObject.pointer);
	}
	native private boolean isInitialised_void(long pNativeObject);
	public boolean isInitialised()
	{
		boolean returnValue = isInitialised_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _initialise_ev_bool_IntVector(long pNativeObject, boolean forceReinitialise, long submeshIndics);
	public void _initialise(boolean forceReinitialise, com.earthview.world.core.IntVector submeshIndics)
	{
		boolean forceReinitialiseParamValue = forceReinitialise;
		long submeshIndicsParamValue = submeshIndics.nativeObject.pointer;
		_initialise_ev_bool_IntVector(this.nativeObject.pointer, forceReinitialiseParamValue, submeshIndicsParamValue);
	}
	native private void _initialise_ev_bool(long pNativeObject, boolean forceReinitialise);
	public void _initialise(boolean forceReinitialise)
	{
		boolean forceReinitialiseParamValue = forceReinitialise;
		_initialise_ev_bool(this.nativeObject.pointer, forceReinitialiseParamValue);
	}
	native private void _initialise_void(long pNativeObject);
	public void _initialise()
	{
		_initialise_void(this.nativeObject.pointer);
	}
	native private void _deinitialise_void(long pNativeObject);
	public void _deinitialise()
	{
		_deinitialise_void(this.nativeObject.pointer);
	}
	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列debugRenderables默认为false
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	native private double _getMeshLodFactorTransformed_void(long pNativeObject);
	public double _getMeshLodFactorTransformed()
	{
		double returnValue = _getMeshLodFactorTransformed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSkipAnimationStateUpdate_ev_bool(long pNativeObject, boolean skip);
	public void setSkipAnimationStateUpdate(boolean skip)
	{
		boolean skipParamValue = skip;
		setSkipAnimationStateUpdate_ev_bool(this.nativeObject.pointer, skipParamValue);
	}
	native private boolean getSkipAnimationStateUpdate_void(long pNativeObject);
	public boolean getSkipAnimationStateUpdate()
	{
		boolean returnValue = getSkipAnimationStateUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlwaysUpdateMainSkeleton_ev_bool(long pNativeObject, boolean update);
	public void setAlwaysUpdateMainSkeleton(boolean update)
	{
		boolean updateParamValue = update;
		setAlwaysUpdateMainSkeleton_ev_bool(this.nativeObject.pointer, updateParamValue);
	}
	native private boolean getAlwaysUpdateMainSkeleton_void(long pNativeObject);
	public boolean getAlwaysUpdateMainSkeleton()
	{
		boolean returnValue = getAlwaysUpdateMainSkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Entity(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Entity(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		return super.getAnimableObjectPtr_NoVirtual();
	}
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		super._notifyMoved_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_setVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setVisible_ev_bool_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_ev_bool_callback");
			this.register_setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, "setprepareSelect_ev_int32_ev_int32_ev_int32_ev_bool_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static Entity fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Entity obj = null;
 		if(baseObj instanceof Entity)
		{
			obj = (Entity)baseObj;
		} else {
			obj = new Entity(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntity");
			obj.increaseCast();
		}

		return obj;
	}
}
