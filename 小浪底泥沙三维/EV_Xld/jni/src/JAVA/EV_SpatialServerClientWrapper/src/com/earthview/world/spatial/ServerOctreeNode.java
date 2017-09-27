package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的八叉树结点类
 */
public class ServerOctreeNode extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerOctreeNode", new ServerOctreeNodeClassFactory());
	}

	native private long getNodeCode_void(long pNativeObject);
	/**
	 * 获取结点标识
	 * @return 节点标识
	 */
	public StringPointer getNodeCode()
	{
		long returnValue = getNodeCode_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取x最小值
	 * @return x最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取x最大值
	 * @return x最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取y最小值
	 * @return y最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取y最大值
	 * @return y最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinZ_void(long pNativeObject);
	/**
	 * 获取z最小值
	 * @return z最小值
	 */
	public double getMinZ()
	{
		double returnValue = getMinZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxZ_void(long pNativeObject);
	/**
	 * 获取z最大值
	 * @return z最大值
	 */
	public double getMaxZ()
	{
		double returnValue = getMaxZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVersion_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int getVersion()
	{
		int returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getObjects_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getObjects()
	{
		long returnValue = getObjects_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	public ServerOctreeNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerOctreeNode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerOctreeNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerOctreeNode obj = null;
 		if(baseObj instanceof ServerOctreeNode)
		{
			obj = (ServerOctreeNode)baseObj;
		} else {
			obj = new ServerOctreeNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerOctreeNode");
			obj.increaseCast();
		}

		return obj;
	}
}
