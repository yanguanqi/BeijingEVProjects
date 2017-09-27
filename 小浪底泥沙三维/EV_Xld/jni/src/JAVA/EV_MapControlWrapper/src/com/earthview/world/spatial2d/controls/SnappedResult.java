package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 捕捉结果类
 */
public class SnappedResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CSnappedResult", new SnappedResultClassFactory());
	}

	native private long getSnappedPoint_void(long pNativeObject);
	/**
	 * 获取捕捉到的点
	 * @param  
	 * @return 点坐标指针
	 */
	public com.earthview.world.spatial.geometry.Point getSnappedPoint()
	{
		long returnValue = getSnappedPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getBeforePoint_void(long pNativeObject);
	/**
	 * 获取捕捉到的点的前一个点
	 * @param  
	 * @return 点坐标指针
	 */
	public com.earthview.world.spatial.geometry.Point getBeforePoint()
	{
		long returnValue = getBeforePoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getAfterPoint_void(long pNativeObject);
	/**
	 * 获取捕捉到的点的后一个点
	 * @param  
	 * @return 点坐标指针
	 */
	public com.earthview.world.spatial.geometry.Point getAfterPoint()
	{
		long returnValue = getAfterPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private boolean isVertex_void(long pNativeObject);
	/**
	 * 判断是否捕捉到顶点
	 * @param  
	 * @return 捕捉到顶点返回true,反之false
	 */
	public boolean isVertex()
	{
		boolean returnValue = isVertex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isOnEdge_void(long pNativeObject);
	/**
	 * 判断点是否在边缘上
	 * @param  
	 * @return 捕捉到的点在线上,则返回true,反之返回false
	 */
	public boolean isOnEdge()
	{
		boolean returnValue = isOnEdge_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAbove_void(long pNativeObject);
	/**
	 * 判断点是否在几何内部
	 * @param  
	 * @return 如果在几何对象内部则返回true,反之返回false
	 */
	public boolean isAbove()
	{
		boolean returnValue = isAbove_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFeatureId_void(long pNativeObject);
	/**
	 * 获取捕捉到的几何要素的id号
	 * @param  
	 * @return 要素ID号
	 */
	public int getFeatureId()
	{
		int returnValue = getFeatureId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayer_void(long pNativeObject);
	/// 获取捕捉到的图层
	/// </summary>
	/// <param name=""></param>
	/// <returns>要素ID号</returns>
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private boolean isSketchSnapped_void(long pNativeObject);
	/// <summary>
	/// <summary>
	/// 判断是否当前正在描述的几何是否被捕捉到
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果捕捉到正在描述的几何返回true,反之则否</returns>
	public boolean isSketchSnapped()
	{
		boolean returnValue = isSketchSnapped_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSnappedPart_void(long pNativeObject);
	/**
	 * 获取捕捉到几何中部分的索引
	 * @param  
	 * @return 返回几何部分的索引
	 */
	public com.earthview.world.spatial2d.controls.EditingObject getSnappedPart()
	{
		long returnValue = getSnappedPart_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	native private long getSnappedEditingObject_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.EditingObject getSnappedEditingObject()
	{
		long returnValue = getSnappedEditingObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditingObject __returnValue = new com.earthview.world.spatial2d.controls.EditingObject(CreatedWhenConstruct.CWC_NotToCreate, "CEditingObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditingObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditingObject");
		}
		return __returnValue;
	}
	public SnappedResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SnappedResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SnappedResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SnappedResult obj = null;
 		if(baseObj instanceof SnappedResult)
		{
			obj = (SnappedResult)baseObj;
		} else {
			obj = new SnappedResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSnappedResult");
			obj.increaseCast();
		}

		return obj;
	}
}
