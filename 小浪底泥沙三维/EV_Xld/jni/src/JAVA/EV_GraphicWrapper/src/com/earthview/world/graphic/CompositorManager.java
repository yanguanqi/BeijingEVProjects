package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorManager", new CompositorManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositorManagerProxy", new CompositorManagerClassFactory());
	}

	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long params);
	//// Overridden from EarthView::World::Graphic::CResourceManager
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long params);
	protected com.earthview.world.graphic.Resource createImpl_NoVirtual(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}

	public CompositorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCompositorManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CompositorManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.CompositorManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.CompositorManager __returnValue = new com.earthview.world.graphic.CompositorManager(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.CompositorManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorManager __returnValue = new com.earthview.world.graphic.CompositorManager(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorManager");
		}
		return __returnValue;
	}
	native private void initialise_void(long pNativeObject);
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void parseScript_DataStreamPtr_EVString_NoVirtual(long pNativeObject, long stream, String groupName);
	protected void parseScript_NoVirtual(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}

	native private long getCompositorChain_CViewport(long pNativeObject, long vp);
	public com.earthview.world.graphic.CompositorChain getCompositorChain(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long returnValue = getCompositorChain_CViewport(this.nativeObject.pointer, vpParamValue);
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
	native private boolean hasCompositorChain_CViewport(long pNativeObject, long vp);
	public boolean hasCompositorChain(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		boolean returnValue = hasCompositorChain_CViewport(this.nativeObject.pointer, vpParamValue);
		return returnValue;
	}
	native private void removeCompositorChain_CViewport(long pNativeObject, long vp);
	public void removeCompositorChain(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		removeCompositorChain_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	native private long addCompositor_CViewport_EVString_ev_int32(long pNativeObject, long ref_vp, String compositor, int addPosition);
	public com.earthview.world.graphic.CompositorInstance addCompositor(com.earthview.world.graphic.Viewport ref_vp, String compositor, int addPosition)
	{
		long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
		String compositorParamValue = compositor;
		int addPositionParamValue = addPosition;
		long returnValue = addCompositor_CViewport_EVString_ev_int32(this.nativeObject.pointer, ref_vpParamValue, compositorParamValue, addPositionParamValue);
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
	native private long addCompositor_CViewport_EVString(long pNativeObject, long ref_vp, String compositor);
	public com.earthview.world.graphic.CompositorInstance addCompositor(com.earthview.world.graphic.Viewport ref_vp, String compositor)
	{
		long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
		String compositorParamValue = compositor;
		long returnValue = addCompositor_CViewport_EVString(this.nativeObject.pointer, ref_vpParamValue, compositorParamValue);
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
	native private void removeCompositor_CViewport_EVString(long pNativeObject, long vp, String compositor);
	public void removeCompositor(com.earthview.world.graphic.Viewport vp, String compositor)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		String compositorParamValue = compositor;
		removeCompositor_CViewport_EVString(this.nativeObject.pointer, vpParamValue, compositorParamValue);
	}
	native private void setCompositorEnabled_CViewport_EVString_ev_bool(long pNativeObject, long vp, String compositor, boolean value);
	public void setCompositorEnabled(com.earthview.world.graphic.Viewport vp, String compositor, boolean value)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		String compositorParamValue = compositor;
		boolean valueParamValue = value;
		setCompositorEnabled_CViewport_EVString_ev_bool(this.nativeObject.pointer, vpParamValue, compositorParamValue, valueParamValue);
	}
	native private long _getTexturedRectangle2D_void(long pNativeObject);
	public com.earthview.world.graphic.Renderable _getTexturedRectangle2D()
	{
		long returnValue = _getTexturedRectangle2D_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}
	native private void removeAll_void(long pNativeObject);
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _reconstructAllCompositorResources_void(long pNativeObject);
	public void _reconstructAllCompositorResources()
	{
		_reconstructAllCompositorResources_void(this.nativeObject.pointer);
	}
	public static class UniqueTextureSet extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorManager::UniqueTextureSet", new UniqueTextureSetClassFactory());
		}

		public UniqueTextureSet() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("UniqueTextureSet", null);
		}

		native private void insert_CTexture(long pNativeObject, long ref_val);
		public void insert(NativeObjectPointer<com.earthview.world.graphic.Texture> ref_val)
		{
			long ref_valParamValue = ref_val.nativeObject.pointer;
			insert_CTexture(this.nativeObject.pointer, ref_valParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long erase_CTexture(long pNativeObject, long key);
		public long erase(NativeObjectPointer<com.earthview.world.graphic.Texture> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = erase_CTexture(this.nativeObject.pointer, keyParamValue);
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
		native private long count_CTexture(long pNativeObject, long key);
		public long count(NativeObjectPointer<com.earthview.world.graphic.Texture> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = count_CTexture(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long max_size_void(long pNativeObject);
		public long max_size()
		{
			long returnValue = max_size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_UniqueTextureSet(long pNativeObject, long other);
		public void swap(com.earthview.world.graphic.CompositorManager.UniqueTextureSet other)
		{
			long otherParamValue = other.nativeObject.pointer;
			swap_UniqueTextureSet(this.nativeObject.pointer, otherParamValue);
		}
		public UniqueTextureSet(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public UniqueTextureSet(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static UniqueTextureSet fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			UniqueTextureSet obj = null;
 			if(baseObj instanceof UniqueTextureSet)
			{
				obj = (UniqueTextureSet)baseObj;
			} else {
				obj = new UniqueTextureSet(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "UniqueTextureSet");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class UniqueTextureSetClassFactory implements IClassFactory {
		public BaseObject create()
		{
			UniqueTextureSet emptyInstance = new UniqueTextureSet(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getPooledTexture_EVString_EVString_ev_size_t_ev_size_t_PixelFormat_ev_uint32_EVString_ev_bool_UniqueTextureSet_CCompositorInstance_TextureScope(long pNativeObject, String name, String localName, long w, long h, int f, long aa, String aaHint, boolean srgb, long texturesAlreadyAssigned, long inst, int scope);
	public com.earthview.world.graphic.TexturePtr getPooledTexture(String name, String localName, long w, long h, com.earthview.world.graphic.PixelFormat f, long aa, String aaHint, boolean srgb, com.earthview.world.graphic.CompositorManager.UniqueTextureSet texturesAlreadyAssigned, com.earthview.world.graphic.CompositorInstance inst, com.earthview.world.graphic.CompositionTechnique.TextureScope scope)
	{
		String nameParamValue = name;
		String localNameParamValue = localName;
		long wParamValue = w;
		long hParamValue = h;
		int fParamValue = f.getValue();
		long aaParamValue = aa;
		String aaHintParamValue = aaHint;
		boolean srgbParamValue = srgb;
		long texturesAlreadyAssignedParamValue = texturesAlreadyAssigned.nativeObject.pointer;
		long instParamValue = (inst == null ? 0L : inst.nativeObject.pointer);
		int scopeParamValue = scope.getValue();
		long returnValue = getPooledTexture_EVString_EVString_ev_size_t_ev_size_t_PixelFormat_ev_uint32_EVString_ev_bool_UniqueTextureSet_CCompositorInstance_TextureScope(this.nativeObject.pointer, nameParamValue, localNameParamValue, wParamValue, hParamValue, fParamValue, aaParamValue, aaHintParamValue, srgbParamValue, texturesAlreadyAssignedParamValue, instParamValue, scopeParamValue);
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
	native private void freePooledTextures_ev_bool(long pNativeObject, boolean onlyIfUnreferenced);
	public void freePooledTextures(boolean onlyIfUnreferenced)
	{
		boolean onlyIfUnreferencedParamValue = onlyIfUnreferenced;
		freePooledTextures_ev_bool(this.nativeObject.pointer, onlyIfUnreferencedParamValue);
	}
	native private void freePooledTextures_void(long pNativeObject);
	public void freePooledTextures()
	{
		freePooledTextures_void(this.nativeObject.pointer);
	}
	native private void registerCompositorLogic_EVString_CCompositorLogic(long pNativeObject, String name, long ref_logic);
	public void registerCompositorLogic(String name, com.earthview.world.graphic.CompositorLogic ref_logic)
	{
		String nameParamValue = name;
		long ref_logicParamValue = (ref_logic == null ? 0L : ref_logic.nativeObject.pointer);
		registerCompositorLogic_EVString_CCompositorLogic(this.nativeObject.pointer, nameParamValue, ref_logicParamValue);
	}
	native private void unregisterCompositorLogic_EVString(long pNativeObject, String name);
	public void unregisterCompositorLogic(String name)
	{
		String nameParamValue = name;
		unregisterCompositorLogic_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getCompositorLogic_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.CompositorLogic getCompositorLogic(String name)
	{
		String nameParamValue = name;
		long returnValue = getCompositorLogic_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorLogic __returnValue = new com.earthview.world.graphic.CompositorLogic(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorLogic");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorLogic)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorLogic");
		}
		return __returnValue;
	}
	native private void registerCustomCompositionPass_EVString_CCustomCompositionPass(long pNativeObject, String name, long ref_customPass);
	public void registerCustomCompositionPass(String name, com.earthview.world.graphic.CustomCompositionPass ref_customPass)
	{
		String nameParamValue = name;
		long ref_customPassParamValue = (ref_customPass == null ? 0L : ref_customPass.nativeObject.pointer);
		registerCustomCompositionPass_EVString_CCustomCompositionPass(this.nativeObject.pointer, nameParamValue, ref_customPassParamValue);
	}
	native private long getCustomCompositionPass_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.CustomCompositionPass getCustomCompositionPass(String name)
	{
		String nameParamValue = name;
		long returnValue = getCustomCompositionPass_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CustomCompositionPass __returnValue = new com.earthview.world.graphic.CustomCompositionPass(CreatedWhenConstruct.CWC_NotToCreate, "CCustomCompositionPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CustomCompositionPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCustomCompositionPass");
		}
		return __returnValue;
	}
	public CompositorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 创建(但不加载)资源，若存在则直接返回
	 */
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual)
	{
		return super.create_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group)
	{
		return super.create_NoVirtual(name, group);
	}
	/**
	 * 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		return super.createUnmanaged_NoVirtual(name, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		return super.createUnmanaged_NoVirtual(name);
	}
	/**
	 * 创建或获取资源
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		return super.createOrRetrieve_NoVirtual(name, group);
	}
	/**
	 * 设置内存总容量
	 */
	public void setMemoryBudget(long bytes)
	{
		super.setMemoryBudget_NoVirtual(bytes);
	}
	/**
	 * 获取内存总容量
	 */
	public long getMemoryBudget()
	{
		return super.getMemoryBudget_NoVirtual();
	}
	/**
	 * 获取已经占用的内存容量
	 */
	public long getMemoryUsage()
	{
		return super.getMemoryUsage_NoVirtual();
	}
	/**
	 * 卸载资源
	 */
	public void unload(String name)
	{
		super.unload_NoVirtual(name);
	}
	public void unload(ULongPointer handle)
	{
		super.unload_NoVirtual(handle);
	}
	/**
	 * 卸载所有资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadAll(boolean reloadableOnly)
	{
		super.unloadAll_NoVirtual(reloadableOnly);
	}
	public void unloadAll()
	{
		super.unloadAll_NoVirtual();
	}
	/**
	 * 重新加载所有资源
	 */
	public void reloadAll(boolean reloadableOnly)
	{
		super.reloadAll_NoVirtual(reloadableOnly);
	}
	public void reloadAll()
	{
		super.reloadAll_NoVirtual();
	}
	/**
	 * 卸载所有未被引用的资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadUnreferencedResources(boolean reloadableOnly)
	{
		super.unloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void unloadUnreferencedResources()
	{
		super.unloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 重新加载所有未被引用的资源
	 * @param reloadableOnly 
	 */
	public void reloadUnreferencedResources(boolean reloadableOnly)
	{
		super.reloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void reloadUnreferencedResources()
	{
		super.reloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 移除资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void remove(com.earthview.world.graphic.ResourcePtr r)
	{
		super.remove_NoVirtual(r);
	}
	public void remove(String name)
	{
		super.remove_NoVirtual(name);
	}
	public void remove(ULongPointer handle)
	{
		super.remove_NoVirtual(handle);
	}
	public void remove(String name, String groupname)
	{
		super.remove_NoVirtual(name, groupname);
	}
	/**
	 * 移除所有未被引用的资源				
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void removeUnreferencedResources(boolean reloadableOnly)
	{
		super.removeUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void removeUnreferencedResources()
	{
		super.removeUnreferencedResources_NoVirtual();
	}
	public void removeUnreferencedResource(String name)
	{
		super.removeUnreferencedResource_NoVirtual(name);
	}
	public void removeUnreferencedResource(String name, String groupName)
	{
		super.removeUnreferencedResource_NoVirtual(name, groupName);
	}
	/**
	 * 卸载所有未被引用的资源				
	 * @param  
	 */
	public void unloadUnreferencedResource(String name, String groupName)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName);
	}
	public void unloadUnreferencedResource(String name, String groupName, int useCount)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName, useCount);
	}
	/**
	 * 获取资源				
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr getByName(String name, String groupName)
	{
		return super.getByName_NoVirtual(name, groupName);
	}
	public com.earthview.world.graphic.ResourcePtr getByName(String name)
	{
		return super.getByName_NoVirtual(name);
	}
	public com.earthview.world.graphic.ResourcePtr getByHandle(ULongPointer handle)
	{
		return super.getByHandle_NoVirtual(handle);
	}
	/**
	 * 判断资源是否存在于资源管理器中				
	 * @param  
	 */
	public boolean resourceExists(String name)
	{
		return super.resourceExists_NoVirtual(name);
	}
	public boolean resourceExists(ULongPointer handle)
	{
		return super.resourceExists_NoVirtual(handle);
	}
	/**
	 * 通知资源被开始使用				
	 * @param  
	 */
	public void _notifyResourceTouched(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceTouched_NoVirtual(res);
	}
	/**
	 * 通知资源被加载完成			
	 * @param  
	 */
	public void _notifyResourceLoaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceLoaded_NoVirtual(res);
	}
	/**
	 * 通知资源被卸载完成			
	 * @param  
	 */
	public void _notifyResourceUnloaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceUnloaded_NoVirtual(res);
	}
	/**
	 * 准备资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual)
	{
		return super.prepare_NoVirtual(name, group, isManual);
	}
	/**
	 * 加载资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual)
	{
		return super.load_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		return super.load_NoVirtual(name, group);
	}
	public void setVerbose(boolean v)
	{
		super.setVerbose_NoVirtual(v);
	}
	public boolean getVerbose()
	{
		return super.getVerbose_NoVirtual();
	}
	public void addImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.addImpl_NoVirtual(res);
	}
	public void removeImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.removeImpl_NoVirtual(res);
	}
	public void checkUsage()
	{
		super.checkUsage_NoVirtual();
	}
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		return super.getScriptPatterns_NoVirtual();
	}
	public double getLoadingOrder()
	{
		return super.getLoadingOrder_NoVirtual();
	}
	
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_create_EVString_EVString(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMemoryBudget_ev_size_t(long pNativeObject, String method);
	native protected void register_getMemoryBudget_void(long pNativeObject, String method);
	native protected void register_getMemoryUsage_void(long pNativeObject, String method);
	native protected void register_unload_EVString(long pNativeObject, String method);
	native protected void register_unload_ev_uint64(long pNativeObject, String method);
	native protected void register_unloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_unloadAll_void(long pNativeObject, String method);
	native protected void register_reloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_reloadAll_void(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_remove_ResourcePtr(long pNativeObject, String method);
	native protected void register_remove_EVString(long pNativeObject, String method);
	native protected void register_remove_ev_uint64(long pNativeObject, String method);
	native protected void register_remove_EVString_EVString(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString_ev_uint16(long pNativeObject, String method);
	native protected void register_getByName_EVString_EVString(long pNativeObject, String method);
	native protected void register_getByName_EVString(long pNativeObject, String method);
	native protected void register_getByHandle_ev_uint64(long pNativeObject, String method);
	native protected void register_resourceExists_EVString(long pNativeObject, String method);
	native protected void register_resourceExists_ev_uint64(long pNativeObject, String method);
	native protected void register__notifyResourceTouched_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceLoaded_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceUnloaded_CResource(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString(long pNativeObject, String method);
	native protected void register_setVerbose_ev_bool(long pNativeObject, String method);
	native protected void register_getVerbose_void(long pNativeObject, String method);
	native protected void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_addImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_removeImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_checkUsage_void(long pNativeObject, String method);
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_create_EVString_EVString_ev_bool(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_callback");
			this.register_create_EVString_EVString(this.nativeObject.pointer, "create_EVString_EVString_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createUnmanaged_EVString_ev_bool(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_callback");
			this.register_createUnmanaged_EVString(this.nativeObject.pointer, "createUnmanaged_EVString_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_callback");
			this.register_createOrRetrieve_EVString_EVString(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_callback");
			this.register_setMemoryBudget_ev_size_t(this.nativeObject.pointer, "setMemoryBudget_ev_size_t_callback");
			this.register_getMemoryBudget_void(this.nativeObject.pointer, "getMemoryBudget_void_callback");
			this.register_getMemoryUsage_void(this.nativeObject.pointer, "getMemoryUsage_void_callback");
			this.register_unload_EVString(this.nativeObject.pointer, "unload_EVString_callback");
			this.register_unload_ev_uint64(this.nativeObject.pointer, "unload_ev_uint64_callback");
			this.register_unloadAll_ev_bool(this.nativeObject.pointer, "unloadAll_ev_bool_callback");
			this.register_unloadAll_void(this.nativeObject.pointer, "unloadAll_void_callback");
			this.register_reloadAll_ev_bool(this.nativeObject.pointer, "reloadAll_ev_bool_callback");
			this.register_reloadAll_void(this.nativeObject.pointer, "reloadAll_void_callback");
			this.register_unloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "unloadUnreferencedResources_ev_bool_callback");
			this.register_unloadUnreferencedResources_void(this.nativeObject.pointer, "unloadUnreferencedResources_void_callback");
			this.register_reloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "reloadUnreferencedResources_ev_bool_callback");
			this.register_reloadUnreferencedResources_void(this.nativeObject.pointer, "reloadUnreferencedResources_void_callback");
			this.register_remove_ResourcePtr(this.nativeObject.pointer, "remove_ResourcePtr_callback");
			this.register_remove_EVString(this.nativeObject.pointer, "remove_EVString_callback");
			this.register_remove_ev_uint64(this.nativeObject.pointer, "remove_ev_uint64_callback");
			this.register_remove_EVString_EVString(this.nativeObject.pointer, "remove_EVString_EVString_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_removeUnreferencedResources_ev_bool(this.nativeObject.pointer, "removeUnreferencedResources_ev_bool_callback");
			this.register_removeUnreferencedResources_void(this.nativeObject.pointer, "removeUnreferencedResources_void_callback");
			this.register_removeUnreferencedResource_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_callback");
			this.register_removeUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString_ev_uint16(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_ev_uint16_callback");
			this.register_getByName_EVString_EVString(this.nativeObject.pointer, "getByName_EVString_EVString_callback");
			this.register_getByName_EVString(this.nativeObject.pointer, "getByName_EVString_callback");
			this.register_getByHandle_ev_uint64(this.nativeObject.pointer, "getByHandle_ev_uint64_callback");
			this.register_resourceExists_EVString(this.nativeObject.pointer, "resourceExists_EVString_callback");
			this.register_resourceExists_ev_uint64(this.nativeObject.pointer, "resourceExists_ev_uint64_callback");
			this.register__notifyResourceTouched_CResource(this.nativeObject.pointer, "_notifyResourceTouched_CResource_callback");
			this.register__notifyResourceLoaded_CResource(this.nativeObject.pointer, "_notifyResourceLoaded_CResource_callback");
			this.register__notifyResourceUnloaded_CResource(this.nativeObject.pointer, "_notifyResourceUnloaded_CResource_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_prepare_EVString_EVString_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_load_EVString_EVString_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString(this.nativeObject.pointer, "load_EVString_EVString_callback");
			this.register_setVerbose_ev_bool(this.nativeObject.pointer, "setVerbose_ev_bool_callback");
			this.register_getVerbose_void(this.nativeObject.pointer, "getVerbose_void_callback");
			this.register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_addImpl_ResourcePtr(this.nativeObject.pointer, "addImpl_ResourcePtr_callback");
			this.register_removeImpl_ResourcePtr(this.nativeObject.pointer, "removeImpl_ResourcePtr_callback");
			this.register_checkUsage_void(this.nativeObject.pointer, "checkUsage_void_callback");
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static CompositorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorManager obj = null;
 		if(baseObj instanceof CompositorManager)
		{
			obj = (CompositorManager)baseObj;
		} else {
			obj = new CompositorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
