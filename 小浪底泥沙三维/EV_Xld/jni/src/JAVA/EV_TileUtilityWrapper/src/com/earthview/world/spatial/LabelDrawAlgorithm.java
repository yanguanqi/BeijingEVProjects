package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 注记算法类
 */
public class LabelDrawAlgorithm extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelDrawAlgorithm", new LabelDrawAlgorithmClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LabelDrawAlgorithm() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelDrawAlgorithm", null);
	}

	native private void draw_IPaintDevice_ISymbol_CGeoElement_EarthView_World_Core_ev_string(long pNativeObject, long device, long symbol, long geoElement, String value);
	/**
	 * 默认构造函数
	 * @param device 绘图设备
	 * @param symbol 风格
	 * @param geoElement 地理元素
	 * @param value 要素字符
	 */
	public void draw(com.earthview.world.display.Ipaintdevice device, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.GeoElement geoElement, String value)
	{
		long deviceParamValue = (device == null ? 0L : device.nativeObject.pointer);
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		long geoElementParamValue = (geoElement == null ? 0L : geoElement.nativeObject.pointer);
		String valueParamValue = value;
		draw_IPaintDevice_ISymbol_CGeoElement_EarthView_World_Core_ev_string(this.nativeObject.pointer, deviceParamValue, symbolParamValue, geoElementParamValue, valueParamValue);
	}
	public LabelDrawAlgorithm(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelDrawAlgorithm(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelDrawAlgorithm fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelDrawAlgorithm obj = null;
 		if(baseObj instanceof LabelDrawAlgorithm)
		{
			obj = (LabelDrawAlgorithm)baseObj;
		} else {
			obj = new LabelDrawAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelDrawAlgorithm");
			obj.increaseCast();
		}

		return obj;
	}
}
