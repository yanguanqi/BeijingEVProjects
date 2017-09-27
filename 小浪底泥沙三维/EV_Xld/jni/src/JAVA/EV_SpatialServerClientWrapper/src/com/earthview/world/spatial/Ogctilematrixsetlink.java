package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS数据集描述信息类
 */
public class Ogctilematrixsetlink extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCTileMatrixSetLink", new OgctilematrixsetlinkClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogctilematrixsetlink() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCTileMatrixSetLink", null);
	}

	native private long getTileMatrixSet_void(long pNativeObject);
	/**
	 * 获取数据集合的名称
	 * @return 集合名称
	 */
	public StringPointer getTileMatrixSet()
	{
		long returnValue = getTileMatrixSet_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogctilematrixsetlink ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogctilematrixsetlink __returnValue = new com.earthview.world.spatial.Ogctilematrixsetlink(CreatedWhenConstruct.CWC_NotToCreate, "COGCTileMatrixSetLink");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogctilematrixsetlink)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCTileMatrixSetLink");
		}
		return __returnValue;
	}
	native private long getTileMatrixLimitsCount_void(long pNativeObject);
	/**
	 * 获取数据范围描述数
	 * @return 数据范围描述数目
	 */
	public long getTileMatrixLimitsCount()
	{
		long returnValue = getTileMatrixLimitsCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileMatrixLimitsRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的数据范围引用
	 * @param index 索引
	 * @return 指定数据范围引用
	 */
	public com.earthview.world.spatial.Ogctilematrixlimits getTileMatrixLimitsRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getTileMatrixLimitsRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogctilematrixlimits __returnValue = new com.earthview.world.spatial.Ogctilematrixlimits(CreatedWhenConstruct.CWC_NotToCreate, "COGCTileMatrixLimits");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogctilematrixlimits)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCTileMatrixLimits");
		}
		return __returnValue;
	}
	public Ogctilematrixsetlink(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogctilematrixsetlink(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogctilematrixsetlink fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogctilematrixsetlink obj = null;
 		if(baseObj instanceof Ogctilematrixsetlink)
		{
			obj = (Ogctilematrixsetlink)baseObj;
		} else {
			obj = new Ogctilematrixsetlink(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCTileMatrixSetLink");
			obj.increaseCast();
		}

		return obj;
	}
}
