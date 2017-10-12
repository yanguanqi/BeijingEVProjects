package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerRenderOrderController extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::LayerRenderOrderController", new LayerRenderOrderControllerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JLayerRenderOrderControllerProxy", new LayerRenderOrderControllerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayerRenderOrderController(com.earthview.world.spatial.atlas.Imap pMap) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pMapPtr = new BasePointer(pMap);
		list.add("pMap", pMapPtr.get());
		Create("JLayerRenderOrderControllerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.atlas.LayerRenderOrderController".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean isUseCustomOrder_void_callback()
	{
		boolean returnValue = isUseCustomOrder();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isUseCustomOrder_void(long pNativeObject);
	/**
	 * 判断是否按数据图层顺序渲染
	 * @param  
	 * @return 如果按数据图层顺序渲染，返回true,否则返回false
	 */
	public boolean isUseCustomOrder()
	{
		boolean returnValue = isUseCustomOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUseCustomOrder_void_NoVirtual(long pNativeObject);
	protected boolean isUseCustomOrder_NoVirtual()
	{
		boolean returnValue = isUseCustomOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUseCustomOrder_ev_bool_callback(boolean bControl)
	{
		boolean bControlParamValue = bControl;
		setUseCustomOrder(bControlParamValue);
	}

	native private void setUseCustomOrder_ev_bool(long pNativeObject, boolean bControl);
	/**
	 * 设置是否按数据图层顺序渲染
	 * @param bControl 是否按数据图层顺序渲染
	 */
	public void setUseCustomOrder(boolean bControl)
	{
		boolean bControlParamValue = bControl;
		setUseCustomOrder_ev_bool(this.nativeObject.pointer, bControlParamValue);
	}
	native private void setUseCustomOrder_ev_bool_NoVirtual(long pNativeObject, boolean bControl);
	protected void setUseCustomOrder_NoVirtual(boolean bControl)
	{
		boolean bControlParamValue = bControl;
		setUseCustomOrder_ev_bool_NoVirtual(this.nativeObject.pointer, bControlParamValue);
	}

	protected  void addLayer_ILayer_callback(long layer)
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
		addLayer(layerParamValue);
	}

	native private void addLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 向地图中追加一个图层
	 * @param layer 要追加的图层
	 */
	public void addLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		addLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void addLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void addLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		addLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void insertLayer_ev_uint32_ILayer_callback(long index, long layer)
	{
		long indexParamValue = index;
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
		insertLayer(indexParamValue, layerParamValue);
	}

	native private void insertLayer_ev_uint32_ILayer(long pNativeObject, long index, long layer);
	/**
	 * 插入一个图层到指定索引处
	 * @param index 索引
	 * @param layer 图层
	 */
	public void insertLayer(long index, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long indexParamValue = index;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, indexParamValue, layerParamValue);
	}
	native private void insertLayer_ev_uint32_ILayer_NoVirtual(long pNativeObject, long index, long layer);
	protected void insertLayer_NoVirtual(long index, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long indexParamValue = index;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer_NoVirtual(this.nativeObject.pointer, indexParamValue, layerParamValue);
	}

	protected  void removeLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeLayer(indexParamValue);
	}

	native private void removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的图层
	 * @param index 要移除图层的索引
	 */
	public void removeLayer(long index)
	{
		long indexParamValue = index;
		removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeLayer_ILayer_callback(long pLayer)
	{
		com.earthview.world.spatial.atlas.Ilayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial.atlas.Ilayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		removeLayer(pLayerParamValue);
	}

	native private void removeLayer_ILayer(long pNativeObject, long pLayer);
	/**
	 * 移除指定的图层
	 * @param pLayer 要移除的图层
	 */
	public void removeLayer(com.earthview.world.spatial.atlas.Ilayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		removeLayer_ILayer(this.nativeObject.pointer, pLayerParamValue);
	}
	native private void removeLayer_ILayer_NoVirtual(long pNativeObject, long pLayer);
	protected void removeLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		removeLayer_ILayer_NoVirtual(this.nativeObject.pointer, pLayerParamValue);
	}

	protected  void removeAll_void_callback()
	{
		removeAll();
	}

	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除地图中的所有图层
	 * @param  
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void moveLayer_ev_uint32_ev_uint32_callback(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer(oldIndexParamValue, newIndexParamValue);
	}

	native private void moveLayer_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动指定索引处的图层到新的索引处
	 * @param oldIndex 之前的索引
	 * @param newIndex 目标索引
	 */
	public void moveLayer(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveLayer_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long oldIndex, long newIndex);
	protected void moveLayer_NoVirtual(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveLayer_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	protected  long getLayerList_void_callback()
	{
		EarthView::World::Spatial::Atlas::LayerList returnValue = getLayerList();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerList_void(long pNativeObject);
	/**
	 * 获取图层
	 * @param index 数据图层的索引
	 * @return 数据图层
	 */
	public EarthView::World::Spatial::Atlas::LayerList getLayerList()
	{
		long returnValue = getLayerList_void(this.nativeObject.pointer);
		EarthView::World::Spatial::Atlas::LayerList __returnValue = new EarthView::World::Spatial::Atlas::LayerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Atlas::LayerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EarthView::World::Spatial::Atlas::LayerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Atlas::LayerList");
		}
		return __returnValue;
	}
	native private long getLayerList_void_NoVirtual(long pNativeObject);
	protected EarthView::World::Spatial::Atlas::LayerList getLayerList_NoVirtual()
	{
		long returnValue = getLayerList_void_NoVirtual(this.nativeObject.pointer);
		EarthView::World::Spatial::Atlas::LayerList __returnValue = new EarthView::World::Spatial::Atlas::LayerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Atlas::LayerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EarthView::World::Spatial::Atlas::LayerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Atlas::LayerList");
		}
		return __returnValue;
	}

	protected  void resetOrder_void_callback()
	{
		resetOrder();
	}

	native private void resetOrder_void(long pNativeObject);
	/**
	 * 重置渲染顺序
	 * @param  
	 */
	public void resetOrder()
	{
		resetOrder_void(this.nativeObject.pointer);
	}
	native private void resetOrder_void_NoVirtual(long pNativeObject);
	protected void resetOrder_NoVirtual()
	{
		resetOrder_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	public LayerRenderOrderController(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerRenderOrderController(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isUseCustomOrder_void(long pNativeObject, String method);
	native protected void register_setUseCustomOrder_ev_bool(long pNativeObject, String method);
	native protected void register_addLayer_ILayer(long pNativeObject, String method);
	native protected void register_insertLayer_ev_uint32_ILayer(long pNativeObject, String method);
	native protected void register_removeLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_removeLayer_ILayer(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_moveLayer_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getLayerList_void(long pNativeObject, String method);
	native protected void register_resetOrder_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isUseCustomOrder_void(this.nativeObject.pointer, "isUseCustomOrder_void_callback");
			this.register_setUseCustomOrder_ev_bool(this.nativeObject.pointer, "setUseCustomOrder_ev_bool_callback");
			this.register_addLayer_ILayer(this.nativeObject.pointer, "addLayer_ILayer_callback");
			this.register_insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, "insertLayer_ev_uint32_ILayer_callback");
			this.register_removeLayer_ev_uint32(this.nativeObject.pointer, "removeLayer_ev_uint32_callback");
			this.register_removeLayer_ILayer(this.nativeObject.pointer, "removeLayer_ILayer_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, "moveLayer_ev_uint32_ev_uint32_callback");
			this.register_getLayerList_void(this.nativeObject.pointer, "getLayerList_void_callback");
			this.register_resetOrder_void(this.nativeObject.pointer, "resetOrder_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static LayerRenderOrderController fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerRenderOrderController obj = null;
 		if(baseObj instanceof LayerRenderOrderController)
		{
			obj = (LayerRenderOrderController)baseObj;
		} else {
			obj = new LayerRenderOrderController(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LayerRenderOrderController");
			obj.increaseCast();
		}

		return obj;
	}
}
