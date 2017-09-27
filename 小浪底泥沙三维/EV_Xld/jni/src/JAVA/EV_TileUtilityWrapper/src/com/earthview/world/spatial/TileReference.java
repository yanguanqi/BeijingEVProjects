package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片参数类
 */
public class TileReference extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileReference", new TileReferenceClassFactory());
	}

	/**
	 * 拷贝构造函数
	 * @param tileReference 拷贝对象
	 */
	public TileReference(com.earthview.world.spatial.TileReference tileReference) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tileReferencePtr = new BasePointer(tileReference);
		list.add("tileReference", tileReferencePtr.get());
		Create("CTileReference", list);
	}

	/**
	 * 构造
	 * @param pTileRule 瓦片规则
	 */
	public TileReference(com.earthview.world.spatial.TileRule tileRule) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tileRulePtr = new BasePointer(tileRule);
		list.add("tileRule", tileRulePtr.get());
		Create("CTileReference", list);
	}

	native private long getTileRuleRef_void(long pNativeObject);
	/**
	 * 获取TileRule对象
	 * @return TileRule对象引用，不需释放
	 */
	public com.earthview.world.spatial.TileRule getTileRuleRef()
	{
		long returnValue = getTileRuleRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileRule __returnValue = new com.earthview.world.spatial.TileRule(CreatedWhenConstruct.CWC_NotToCreate, "CTileRule");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileRule)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileRule");
		}
		return __returnValue;
	}
	native private long getLevelInfo_ev_int32_ev_uint32(long pNativeObject, int level, long dpiPerInch);
	/**
	 * 获取指定级别的级别信息对象
	 * @param level 瓦片级别
	 * @param dpiPerInch 每英寸的DPI数（默认为96，用于计算比例尺和分辨率）
	 * @return 指定级别的信息对象指针，需要释放
	 */
	public com.earthview.world.spatial.TileLevelInfo getLevelInfo(int level, long dpiPerInch)
	{
		int levelParamValue = level;
		long dpiPerInchParamValue = dpiPerInch;
		long returnValue = getLevelInfo_ev_int32_ev_uint32(this.nativeObject.pointer, levelParamValue, dpiPerInchParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileLevelInfo __returnValue = new com.earthview.world.spatial.TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileLevelInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileLevelInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileLevelInfo");
		}
		return __returnValue;
	}
	native private long getLevelInfo_ev_int32_void_ev_uint32(long pNativeObject, int level, long ptr1, long dpiPerInch);
	/**
	 * 获取指定级别的级别信息对象，不建议使用
	 * @param level 瓦片级别
	 * @param ptr1 某EarthView::World::Spatial::CTileLevelInfo对象的首地址
	 * @param dpiPerInch 每英寸的DPI数（默认为96，用于计算比例尺和分辨率）
	 * @return 指定级别的信息对象指针，不需释放
	 */
	public com.earthview.world.spatial.TileLevelInfo getLevelInfo(int level, VoidPointer ptr1, long dpiPerInch)
	{
		int levelParamValue = level;
		long ptr1ParamValue = (ptr1 == null ? 0L : ptr1.nativeObject.pointer);
		long dpiPerInchParamValue = dpiPerInch;
		long returnValue = getLevelInfo_ev_int32_void_ev_uint32(this.nativeObject.pointer, levelParamValue, ptr1ParamValue, dpiPerInchParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileLevelInfo __returnValue = new com.earthview.world.spatial.TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileLevelInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileLevelInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileLevelInfo");
		}
		return __returnValue;
	}
	public TileReference(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileReference(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileReference fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileReference obj = null;
 		if(baseObj instanceof TileReference)
		{
			obj = (TileReference)baseObj;
		} else {
			obj = new TileReference(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileReference");
			obj.increaseCast();
		}

		return obj;
	}
}
