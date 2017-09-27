package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片规则类
 */
public class TileRule extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileRule", new TileRuleClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TileRule() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileRule", null);
	}

	/**
	 * 拷贝构造函数
	 * @param tileReference 拷贝对象
	 */
	public TileRule(com.earthview.world.spatial.TileRule tileRule) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tileRulePtr = new BasePointer(tileRule);
		list.add("tileRule", tileRulePtr.get());
		Create("CTileRule", list);
	}

	native private long getTileLevelRef_void(long pNativeObject);
	/**
	 * 获取瓦片级别参数对象
	 * @return 瓦片级别参数对象引用
	 */
	public com.earthview.world.spatial.TileLevel getTileLevelRef()
	{
		long returnValue = getTileLevelRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileLevel __returnValue = new com.earthview.world.spatial.TileLevel(CreatedWhenConstruct.CWC_NotToCreate, "CTileLevel");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileLevel)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileLevel");
		}
		return __returnValue;
	}
	native private long getTileOriginRef_void(long pNativeObject);
	/**
	 * 获取瓦片角点信息类
	 * @return 瓦片角点信息对象引用
	 */
	public com.earthview.world.spatial.TileOrigin getTileOriginRef()
	{
		long returnValue = getTileOriginRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileOrigin __returnValue = new com.earthview.world.spatial.TileOrigin(CreatedWhenConstruct.CWC_NotToCreate, "CTileOrigin");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileOrigin)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileOrigin");
		}
		return __returnValue;
	}
	native private long getTilePixelSizeRef_void(long pNativeObject);
	/**
	 * 获取瓦片像素大小对象
	 * @return 瓦片像素大小对象引用
	 */
	public com.earthview.world.spatial.TilePixelSize getTilePixelSizeRef()
	{
		long returnValue = getTilePixelSizeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePixelSize __returnValue = new com.earthview.world.spatial.TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate, "CTilePixelSize");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePixelSize)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTilePixelSize");
		}
		return __returnValue;
	}
	native private int getTileUnitsType_void(long pNativeObject);
	/**
	 * 获取瓦片单位类型
	 * @return 瓦片单位类型
	 */
	public com.earthview.world.spatial.EVTileUnitsType getTileUnitsType()
	{
		int returnValue = getTileUnitsType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileUnitsType.toEnum(returnValue);
	}
	native private void setTileLevel_CTileLevel(long pNativeObject, long tileLevel);
	/**
	 * 设置瓦片级别信息
	 * @param tileLevel 瓦片级别信息对象
	 */
	public void setTileLevel(com.earthview.world.spatial.TileLevel tileLevel)
	{
		long tileLevelParamValue = tileLevel.nativeObject.pointer;
		setTileLevel_CTileLevel(this.nativeObject.pointer, tileLevelParamValue);
	}
	native private void setTileOrigin_CTileOrigin(long pNativeObject, long tileOrigin);
	/**
	 * 设置瓦片位置信息
	 * @param tileOrigin 瓦片位置信息对象
	 */
	public void setTileOrigin(com.earthview.world.spatial.TileOrigin tileOrigin)
	{
		long tileOriginParamValue = tileOrigin.nativeObject.pointer;
		setTileOrigin_CTileOrigin(this.nativeObject.pointer, tileOriginParamValue);
	}
	native private void setTilePixelSize_CTilePixelSize(long pNativeObject, long tilePixelSize);
	/**
	 * 设置瓦片像素信息
	 * @param tilePixelSize 瓦片像素信息对象
	 */
	public void setTilePixelSize(com.earthview.world.spatial.TilePixelSize tilePixelSize)
	{
		long tilePixelSizeParamValue = tilePixelSize.nativeObject.pointer;
		setTilePixelSize_CTilePixelSize(this.nativeObject.pointer, tilePixelSizeParamValue);
	}
	native private void setTileUnits_EVTileUnitsType(long pNativeObject, int type);
	/**
	 * 设置瓦片单位类型
	 * @param type 设置瓦片单位类型
	 */
	public void setTileUnits(com.earthview.world.spatial.EVTileUnitsType type)
	{
		int typeParamValue = type.getValue();
		setTileUnits_EVTileUnitsType(this.nativeObject.pointer, typeParamValue);
	}
	public TileRule(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileRule(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileRule fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileRule obj = null;
 		if(baseObj instanceof TileRule)
		{
			obj = (TileRule)baseObj;
		} else {
			obj = new TileRule(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileRule");
			obj.increaseCast();
		}

		return obj;
	}
}
