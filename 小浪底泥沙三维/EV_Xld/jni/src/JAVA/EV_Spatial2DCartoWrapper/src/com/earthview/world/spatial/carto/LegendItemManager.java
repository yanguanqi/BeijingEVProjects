package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LegendItemManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItemManager", new LegendItemManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LegendItemManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLegendItemManager", null);
	}

	native private void createLegendItem_ILegendItemVector_ILayer(long pNativeObject, long pItemVector, long pLayer);
	/**
	 * 创建图例项
	 * @param pItemVector 将创建的图例项添加到的目标图例容器
	 * @param pLayer 需要创建图例项的图层
	 */
	public void createLegendItem(Ilegenditemvector pItemVector, com.earthview.world.spatial.atlas.Ilayer pLayer)
	{
		long pItemVectorParamValue = (pItemVector == null ? 0L : pItemVector.nativeObject.pointer);
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		createLegendItem_ILegendItemVector_ILayer(this.nativeObject.pointer, pItemVectorParamValue, pLayerParamValue);
	}
	native private void removeLegendItem_ILegendItemVector_ILayer(long pNativeObject, long pItemVector, long pLayer);
	/**
	 * 从图例项容器移除图例项
	 * @param pItemVector 图例容器
	 * @param pLayer 需要移除的图例项对应的图层
	 * @return 元素类型
	 */
	public void removeLegendItem(Ilegenditemvector pItemVector, com.earthview.world.spatial.atlas.Ilayer pLayer)
	{
		long pItemVectorParamValue = (pItemVector == null ? 0L : pItemVector.nativeObject.pointer);
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		removeLegendItem_ILegendItemVector_ILayer(this.nativeObject.pointer, pItemVectorParamValue, pLayerParamValue);
	}
	public LegendItemManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LegendItemManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LegendItemManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LegendItemManager obj = null;
 		if(baseObj instanceof LegendItemManager)
		{
			obj = (LegendItemManager)baseObj;
		} else {
			obj = new LegendItemManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLegendItemManager");
			obj.increaseCast();
		}

		return obj;
	}
}
