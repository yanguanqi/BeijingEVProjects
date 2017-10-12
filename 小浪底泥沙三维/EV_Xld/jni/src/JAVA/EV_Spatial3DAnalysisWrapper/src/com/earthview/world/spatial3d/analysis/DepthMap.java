package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///定义表示相机的视椎体
public class DepthMap extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CDepthMap", new DepthMapClassFactory());
	}

	public DepthMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDepthMap", null);
	}

	native private float getDepthAt_int_int(long pNativeObject, int x, int y);
	/**
	 * 获取位置(x,y)对应的深度值
	 * @param x 横坐标
	 * @param y 纵坐标
	 * @return 深度值
	 */
	public float getDepthAt(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		float returnValue = getDepthAt_int_int(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private long getViewProjMatrix_void(long pNativeObject);
	/**
	 * 获取渲染该深度图时使用的相机对应的视图投影矩阵
	 * @return 视图投影矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewProjMatrix()
	{
		long returnValue = getViewProjMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private int getWidth_void(long pNativeObject);
	/**
	 * 获取深度图宽度
	 * @return 宽度
	 */
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void(long pNativeObject);
	/**
	 * 获取深度图高度
	 * @return 高度
	 */
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DepthMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DepthMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DepthMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DepthMap obj = null;
 		if(baseObj instanceof DepthMap)
		{
			obj = (DepthMap)baseObj;
		} else {
			obj = new DepthMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDepthMap");
			obj.increaseCast();
		}

		return obj;
	}
}
