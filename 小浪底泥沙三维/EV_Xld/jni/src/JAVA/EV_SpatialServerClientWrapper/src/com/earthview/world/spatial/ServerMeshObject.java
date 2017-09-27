package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的网格对象类
 */
public class ServerMeshObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerMeshObject", new ServerMeshObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ServerMeshObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerMeshObject", null);
	}

	native private String getDatasetName_void(long pNativeObject);
	/**
	 * 获取数据名称
	 * @return 数据名称
	 */
	public String getDatasetName()
	{
		String returnValue = getDatasetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEntityID_void(long pNativeObject);
	/**
	 * 获取数据对应的ID号
	 * @return 实体ID号
	 */
	public int getEntityID()
	{
		int returnValue = getEntityID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMeshID_void(long pNativeObject);
	/**
	 * 获取网格ID
	 * @return 网格ID号
	 */
	public int getMeshID()
	{
		int returnValue = getMeshID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMeshName_void(long pNativeObject);
	/**
	 * 获取网格标识
	 * @return 网格标识
	 */
	public String getMeshName()
	{
		String returnValue = getMeshName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMeshData_void(long pNativeObject);
	/**
	 * 获取网格信息
	 * @return 网格对象的智能指针
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getMeshData()
	{
		long returnValue = getMeshData_void(this.nativeObject.pointer);
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
	native private String getEntityName_void(long pNativeObject);
	/**
	 * 获取实体名称
	 * @return 实体名称
	 */
	public String getEntityName()
	{
		String returnValue = getEntityName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFromTemplate_void(long pNativeObject);
	/**
	 * 是否从模板产生
	 * @return true/false
	 */
	public boolean isFromTemplate()
	{
		boolean returnValue = isFromTemplate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosX_void(long pNativeObject);
	/**
	 * 获取模型坐标x
	 * @return 坐标值x
	 */
	public double getPosX()
	{
		double returnValue = getPosX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosY_void(long pNativeObject);
	/**
	 * 获取模型坐标y
	 * @return 坐标值y
	 */
	public double getPosY()
	{
		double returnValue = getPosY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosZ_void(long pNativeObject);
	/**
	 * 获取模型坐标z
	 * @return 坐标值z
	 */
	public double getPosZ()
	{
		double returnValue = getPosZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleX_void(long pNativeObject);
	/**
	 * 获取模型缩放比例系数x
	 * @return 缩放系数x
	 */
	public double getScaleX()
	{
		double returnValue = getScaleX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleY_void(long pNativeObject);
	/**
	 * 获取模型缩放比例系数y
	 * @return 缩放系数y
	 */
	public double getScaleY()
	{
		double returnValue = getScaleY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleZ_void(long pNativeObject);
	/**
	 * 获取模型缩放比例系数z
	 * @return 缩放系数z
	 */
	public double getScaleZ()
	{
		double returnValue = getScaleZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationX_void(long pNativeObject);
	/**
	 * 获取模型旋转参数x
	 * @return 旋转参数x
	 */
	public double getRotationX()
	{
		double returnValue = getRotationX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationY_void(long pNativeObject);
	/**
	 * 获取模型旋转参数y
	 * @return 旋转参数y
	 */
	public double getRotationY()
	{
		double returnValue = getRotationY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationZ_void(long pNativeObject);
	/**
	 * 获取模型旋转参数z
	 * @return 旋转参数z
	 */
	public double getRotationZ()
	{
		double returnValue = getRotationZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationW_void(long pNativeObject);
	/**
	 * 获取模型旋转参数w
	 * @return 旋转参数w
	 */
	public double getRotationW()
	{
		double returnValue = getRotationW_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerMeshObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerMeshObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerMeshObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerMeshObject obj = null;
 		if(baseObj instanceof ServerMeshObject)
		{
			obj = (ServerMeshObject)baseObj;
		} else {
			obj = new ServerMeshObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerMeshObject");
			obj.increaseCast();
		}

		return obj;
	}
}
