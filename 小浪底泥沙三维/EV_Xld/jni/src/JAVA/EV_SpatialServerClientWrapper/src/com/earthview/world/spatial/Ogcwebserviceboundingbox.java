package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /OGC数据集数据范围描述类/
 */
public class Ogcwebserviceboundingbox extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceBoundingBox", new OgcwebserviceboundingboxClassFactory());
	}

	native private long getSRSName_void(long pNativeObject);
	/**
	 * 获取投影名称
	 * @return 投影名称
	 */
	public StringPointer getSRSName()
	{
		long returnValue = getSRSName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getResX_void(long pNativeObject);
	/**
	 * 获取x方向精度
	 * @return x方向精度
	 */
	public double getResX()
	{
		double returnValue = getResX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getResY_void(long pNativeObject);
	/**
	 * 获取y方向精度
	 * @return y方向精度
	 */
	public double getResY()
	{
		double returnValue = getResY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取数据范围
	 * @return 数据范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwebserviceboundingbox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWebServiceBoundingBox", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 结果对象指针
	 */
	public com.earthview.world.spatial.Ogcwebserviceboundingbox ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebserviceboundingbox __returnValue = new com.earthview.world.spatial.Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceBoundingBox");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebserviceboundingbox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceBoundingBox");
		}
		return __returnValue;
	}
	public Ogcwebserviceboundingbox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwebserviceboundingbox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwebserviceboundingbox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwebserviceboundingbox obj = null;
 		if(baseObj instanceof Ogcwebserviceboundingbox)
		{
			obj = (Ogcwebserviceboundingbox)baseObj;
		} else {
			obj = new Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWebServiceBoundingBox");
			obj.increaseCast();
		}

		return obj;
	}
}
