package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 所有三维图层选择集的集合
 */
public class GlobeSelection extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeSelection", new GlobeSelectionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeSelection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeSelection", null);
	}

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取图层数量
	 * @return 图层数量
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean add_IGlobeLayer_ILayerSelection(long pNativeObject, long ref_layer, long ref_selection);
	/**
	 * 增加一条三维图层选择集记录
	 * @param ref_layer 三维图层
	 * @param ref_selection 图层选择集
	 * @return 添加成功返回true，失败返回false
	 */
	public boolean add(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, com.earthview.world.spatial.atlas.Ilayerselection ref_selection)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		long ref_selectionParamValue = (ref_selection == null ? 0L : ref_selection.nativeObject.pointer);
		boolean returnValue = add_IGlobeLayer_ILayerSelection(this.nativeObject.pointer, ref_layerParamValue, ref_selectionParamValue);
		return returnValue;
	}
	native private boolean remove_IGlobeLayer(long pNativeObject, long layer);
	/**
	 * 移除一条三维图层选择集记录
	 * @param layer 三维图层
	 * @return 移除成功返回true，失败返回false
	 */
	public boolean remove(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = remove_IGlobeLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空三维图层选择集的集合
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean exist_IGlobeLayer(long pNativeObject, long layer);
	/**
	 * 查询是否存在该三维图层选择集记录
	 * @param layer 三维图层
	 * @return 存在返回true，否则返回false
	 */
	public boolean exist(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = exist_IGlobeLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long get_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据序号获得三维图层
	 * @param index 序号
	 * @return 三维图层
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer get(long index)
	{
		long indexParamValue = index;
		long returnValue = get_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private long get_IGlobeLayer(long pNativeObject, long layer);
	/**
	 * 根据三维图层获得该图层的选择集
	 * @param layer 三维图层
	 * @return 三维图层选择集
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection get(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = get_IGlobeLayer(this.nativeObject.pointer, layerParamValue);
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
	public GlobeSelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeSelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeSelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeSelection obj = null;
 		if(baseObj instanceof GlobeSelection)
		{
			obj = (GlobeSelection)baseObj;
		} else {
			obj = new GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
