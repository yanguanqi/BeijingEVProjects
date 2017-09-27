package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图选择类
 */
public class MapSelection extends com.earthview.world.spatial.atlas.Imapselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMapSelection", new MapSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCMapSelectionProxy", new MapSelectionClassFactory());
	}

	native private long getSelectionCount_void(long pNativeObject);
	/**
	 * 获取地图中选中要素的数量
	 * @param  
	 * @return 个数
	 */
	public long getSelectionCount()
	{
		long returnValue = getSelectionCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSelectionCount_void_NoVirtual(long pNativeObject);
	protected long getSelectionCount_NoVirtual()
	{
		long returnValue = getSelectionCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getSelectionLayerCount_void(long pNativeObject);
	/**
	 * 获取地图选择集中图层的数量
	 * @param  
	 * @return 个数
	 */
	public long getSelectionLayerCount()
	{
		long returnValue = getSelectionLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerSelection_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的图层选择集
	 * @param index 索引
	 * @return 图层选择集
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerSelection_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private long getLayerSelection_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerSelection_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的图层
	 * @param index 索引
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getLayerSelection_ILayer(long pNativeObject, long pLayer);
	/**
	 * 获取指定图层的图层选择集
	 * @param pLayer 图层
	 * @return 图层选择集
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection(com.earthview.world.spatial.atlas.Ilayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		long returnValue = getLayerSelection_ILayer(this.nativeObject.pointer, pLayerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private boolean exist_ILayer(long pNativeObject, long layer);
	/**
	 * 查询是否存在该图层选择集记录
	 * @param layer 图层
	 * @return 存在返回true，否则返回false
	 */
	public boolean exist(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = exist_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清空地图选择集
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

	public MapSelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapSelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSelectionCount_void(long pNativeObject, String method);
	native protected void register_getLayerSelection_ev_uint32(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSelectionCount_void(this.nativeObject.pointer, "getSelectionCount_void_callback");
			this.register_getLayerSelection_ev_uint32(this.nativeObject.pointer, "getLayerSelection_ev_uint32_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
		}
	}
	
	public static MapSelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapSelection obj = null;
 		if(baseObj instanceof MapSelection)
		{
			obj = (MapSelection)baseObj;
		} else {
			obj = new MapSelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
