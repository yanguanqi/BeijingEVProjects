package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Idisplaycache extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IDisplayCache", new IdisplaycacheClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIDisplayCacheProxy", new IdisplaycacheClassFactory());
	}

	public Idisplaycache() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIDisplayCacheProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.atlas.Idisplaycache".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getMapCacheInfo_void_callback()
	{
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = getMapCacheInfo();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMapCacheInfo_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Icacheinfo getMapCacheInfo()
	{
		long returnValue = getMapCacheInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long getMapCacheInfo_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Icacheinfo getMapCacheInfo_NoVirtual()
	{
		long returnValue = getMapCacheInfo_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  long getCachedMap_void_callback()
	{
		com.earthview.world.display.Icachedbitmap returnValue = getCachedMap();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCachedMap_void(long pNativeObject);
	public com.earthview.world.display.Icachedbitmap getCachedMap()
	{
		long returnValue = getCachedMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Icachedbitmap __returnValue = new com.earthview.world.display.Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate, "ICachedBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Icachedbitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICachedBitmap");
		}
		return __returnValue;
	}
	native private long getCachedMap_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Icachedbitmap getCachedMap_NoVirtual()
	{
		long returnValue = getCachedMap_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Icachedbitmap __returnValue = new com.earthview.world.display.Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate, "ICachedBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Icachedbitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICachedBitmap");
		}
		return __returnValue;
	}

	protected  long getLayerCacheInfo_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = getLayerCacheInfo(layerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerCacheInfo_ILayer(long pNativeObject, long layer);
	public com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfo(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = getLayerCacheInfo_ILayer(this.nativeObject.pointer, layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long getLayerCacheInfo_ILayer_NoVirtual(long pNativeObject, long layer);
	protected com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfo_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = getLayerCacheInfo_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  long getLayerCacheInfo2_void_callback()
	{
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = getLayerCacheInfo2();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerCacheInfo2_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfo2()
	{
		long returnValue = getLayerCacheInfo2_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long getLayerCacheInfo2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfo2_NoVirtual()
	{
		long returnValue = getLayerCacheInfo2_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  long getLayerCacheInfoWithoutResize_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = getLayerCacheInfoWithoutResize(layerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerCacheInfoWithoutResize_ILayer(long pNativeObject, long layer);
	public com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfoWithoutResize(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = getLayerCacheInfoWithoutResize_ILayer(this.nativeObject.pointer, layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long getLayerCacheInfoWithoutResize_ILayer_NoVirtual(long pNativeObject, long layer);
	protected com.earthview.world.spatial.atlas.Icacheinfo getLayerCacheInfoWithoutResize_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = getLayerCacheInfoWithoutResize_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  long getSelectionCacheInfo_void_callback()
	{
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = getSelectionCacheInfo();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSelectionCacheInfo_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Icacheinfo getSelectionCacheInfo()
	{
		long returnValue = getSelectionCacheInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long getSelectionCacheInfo_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Icacheinfo getSelectionCacheInfo_NoVirtual()
	{
		long returnValue = getSelectionCacheInfo_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  boolean selectionCached_void_callback()
	{
		boolean returnValue = selectionCached();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectionCached_void(long pNativeObject);
	public boolean selectionCached()
	{
		boolean returnValue = selectionCached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean selectionCached_void_NoVirtual(long pNativeObject);
	protected boolean selectionCached_NoVirtual()
	{
		boolean returnValue = selectionCached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSelectionCached_ev_bool_callback(boolean cached)
	{
		boolean cachedParamValue = cached;
		setSelectionCached(cachedParamValue);
	}

	native private void setSelectionCached_ev_bool(long pNativeObject, boolean cached);
	public void setSelectionCached(boolean cached)
	{
		boolean cachedParamValue = cached;
		setSelectionCached_ev_bool(this.nativeObject.pointer, cachedParamValue);
	}
	native private void setSelectionCached_ev_bool_NoVirtual(long pNativeObject, boolean cached);
	protected void setSelectionCached_NoVirtual(boolean cached)
	{
		boolean cachedParamValue = cached;
		setSelectionCached_ev_bool_NoVirtual(this.nativeObject.pointer, cachedParamValue);
	}

	protected  long addCache_ILayer_callback(long ref_layer)
	{
		com.earthview.world.spatial.atlas.Ilayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		com.earthview.world.spatial.atlas.Icacheinfo returnValue = addCache(ref_layerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addCache_ILayer(long pNativeObject, long ref_layer);
	public com.earthview.world.spatial.atlas.Icacheinfo addCache(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		long returnValue = addCache_ILayer(this.nativeObject.pointer, ref_layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}
	native private long addCache_ILayer_NoVirtual(long pNativeObject, long ref_layer);
	protected com.earthview.world.spatial.atlas.Icacheinfo addCache_NoVirtual(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		long returnValue = addCache_ILayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Icacheinfo __returnValue = new com.earthview.world.spatial.atlas.Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate, "ICacheInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Icacheinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICacheInfo");
		}
		return __returnValue;
	}

	protected  void removeCache_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		removeCache(layerParamValue);
	}

	native private void removeCache_ILayer(long pNativeObject, long layer);
	public void removeCache(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		removeCache_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void removeCache_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void removeCache_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		removeCache_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	public Idisplaycache(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idisplaycache(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getMapCacheInfo_void(long pNativeObject, String method);
	native protected void register_getCachedMap_void(long pNativeObject, String method);
	native protected void register_getLayerCacheInfo_ILayer(long pNativeObject, String method);
	native protected void register_getLayerCacheInfo2_void(long pNativeObject, String method);
	native protected void register_getLayerCacheInfoWithoutResize_ILayer(long pNativeObject, String method);
	native protected void register_getSelectionCacheInfo_void(long pNativeObject, String method);
	native protected void register_selectionCached_void(long pNativeObject, String method);
	native protected void register_setSelectionCached_ev_bool(long pNativeObject, String method);
	native protected void register_addCache_ILayer(long pNativeObject, String method);
	native protected void register_removeCache_ILayer(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMapCacheInfo_void(this.nativeObject.pointer, "getMapCacheInfo_void_callback");
			this.register_getCachedMap_void(this.nativeObject.pointer, "getCachedMap_void_callback");
			this.register_getLayerCacheInfo_ILayer(this.nativeObject.pointer, "getLayerCacheInfo_ILayer_callback");
			this.register_getLayerCacheInfo2_void(this.nativeObject.pointer, "getLayerCacheInfo2_void_callback");
			this.register_getLayerCacheInfoWithoutResize_ILayer(this.nativeObject.pointer, "getLayerCacheInfoWithoutResize_ILayer_callback");
			this.register_getSelectionCacheInfo_void(this.nativeObject.pointer, "getSelectionCacheInfo_void_callback");
			this.register_selectionCached_void(this.nativeObject.pointer, "selectionCached_void_callback");
			this.register_setSelectionCached_ev_bool(this.nativeObject.pointer, "setSelectionCached_ev_bool_callback");
			this.register_addCache_ILayer(this.nativeObject.pointer, "addCache_ILayer_callback");
			this.register_removeCache_ILayer(this.nativeObject.pointer, "removeCache_ILayer_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
		}
	}
	
	public static Idisplaycache fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idisplaycache obj = null;
 		if(baseObj instanceof Idisplaycache)
		{
			obj = (Idisplaycache)baseObj;
		} else {
			obj = new Idisplaycache(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDisplayCache");
			obj.increaseCast();
		}

		return obj;
	}
}
