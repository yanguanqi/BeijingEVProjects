package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片路径规则类工厂
 */
public class TilePathRuleFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePathRuleFactory", new TilePathRuleFactoryClassFactory());
	}

	native private static long createTilePathRule_EVTileDataType_EVTilePathType_EVTileModeType(int dataType, int tilePathType, int tileModeType);
	/**
	 * 生成瓦片路径规则
	 * @param dataType 数据类型，影像、矢量、DEM
	 * @param tilePathType 路径类型，离散文件、库文件
	 * @param tileModeType 模式，WGS84、Mercator还是古唐
	 */
	public static com.earthview.world.spatial.TilePathRule createTilePathRule(com.earthview.world.spatial.EVTileDataType dataType, com.earthview.world.spatial.EVTilePathType tilePathType, com.earthview.world.spatial.EVTileModeType tileModeType)
	{
		int dataTypeParamValue = dataType.getValue();
		int tilePathTypeParamValue = tilePathType.getValue();
		int tileModeTypeParamValue = tileModeType.getValue();
		long returnValue = createTilePathRule_EVTileDataType_EVTilePathType_EVTileModeType(dataTypeParamValue, tilePathTypeParamValue, tileModeTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePathRule __returnValue = new com.earthview.world.spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate, "CTilePathRule");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePathRule)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTilePathRule");
		}
		return __returnValue;
	}
	public TilePathRuleFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TilePathRuleFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TilePathRuleFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TilePathRuleFactory obj = null;
 		if(baseObj instanceof TilePathRuleFactory)
		{
			obj = (TilePathRuleFactory)baseObj;
		} else {
			obj = new TilePathRuleFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTilePathRuleFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
