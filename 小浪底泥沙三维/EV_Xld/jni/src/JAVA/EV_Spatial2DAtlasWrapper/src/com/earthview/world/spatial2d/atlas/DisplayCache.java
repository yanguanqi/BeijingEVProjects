package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 显示缓存类
 */
public class DisplayCache extends com.earthview.world.spatial.atlas.Idisplaycache {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CDisplayCache", new DisplayCacheClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCDisplayCacheProxy", new DisplayCacheClassFactory());
	}

	native private long getMapCacheInfo_void(long pNativeObject);
	/**
	 * 获取地图的缓存信息
	 * @param  
	 * @return 缓存信息
	 */
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

	native private long getCachedMap_void(long pNativeObject);
	/**
	 * 获取高速缓存位图
	 * @param  
	 * @return 高速缓存位图
	 */
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

	native private long getLayerCacheInfo_ILayer(long pNativeObject, long layer);
	/**
	 * 获取图层的缓存信息，返回的缓存位图宽高同窗口一致
	 * @param layer 图层
	 * @return 缓存信息
	 */
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

	native private long getLayerCacheInfoWithoutResize_ILayer(long pNativeObject, long layer);
	/**
	 * 直接获取图层的缓存信息，不检测其宽高是否与窗口一致
	 * @param layer 图层
	 * @return 缓存信息
	 */
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

	native private long getSelectionCacheInfo_void(long pNativeObject);
	/**
	 * 获取选择集的缓存信息
	 * @param  
	 * @return 缓存信息
	 */
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

	native private boolean selectionCached_void(long pNativeObject);
	/**
	 * 判断选择集是否做了缓存
	 * @param  
	 * @return 如果做了选择集的缓存则返回true,反之则否
	 */
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

	native private void setSelectionCached_ev_bool(long pNativeObject, boolean cached);
	/**
	 * 设置是否为选择集做缓存
	 * @param cached 如果为true,则为选择集做缓存,反之则否
	 */
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

	native private long addCache_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 为指定图层做缓存
	 * @param layer 待做缓存的图层
	 * @return 缓存信息
	 */
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

	native private void removeCache_ILayer(long pNativeObject, long layer);
	/**
	 * 移除指定图层的缓存信息
	 * @param layer 待移除缓存信息的图层
	 */
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

	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有缓存
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	public DisplayCache(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DisplayCache(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DisplayCache fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DisplayCache obj = null;
 		if(baseObj instanceof DisplayCache)
		{
			obj = (DisplayCache)baseObj;
		} else {
			obj = new DisplayCache(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDisplayCache");
			obj.increaseCast();
		}

		return obj;
	}
}
