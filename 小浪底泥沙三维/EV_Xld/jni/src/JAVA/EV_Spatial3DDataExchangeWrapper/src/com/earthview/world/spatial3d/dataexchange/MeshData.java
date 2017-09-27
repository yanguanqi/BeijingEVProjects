package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 自定义的mesh对象
 */
public class MeshData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshData", new MeshDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param mesh mesh对象
	 * @param worldTransform 世界矩阵
	 */
	public MeshData(com.earthview.world.graphic.MeshPtr mesh, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion quater) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer meshPtr = new BasePointer(mesh);
		list.add("mesh", meshPtr.get());
		BasePointer posPtr = new BasePointer(pos);
		list.add("pos", posPtr.get());
		BasePointer scalePtr = new BasePointer(scale);
		list.add("scale", scalePtr.get());
		BasePointer quaterPtr = new BasePointer(quater);
		list.add("quater", quaterPtr.get());
		Create("CMeshData", list);
	}

	/**
	 * 构造函数
	 * @param mesh mesh对象
	 */
	public MeshData(com.earthview.world.graphic.MeshPtr mesh) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer meshPtr = new BasePointer(mesh);
		list.add("mesh", meshPtr.get());
		Create("CMeshData", list);
	}

	/**
	 * 构造函数
	 */
	public MeshData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshData", null);
	}

	native private long getPosition_void(long pNativeObject);
	/**
	 * 获取位置信息（从.scene文件读取的，有可能不是经纬度）
	 * @return 返回CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getScale_void(long pNativeObject);
	/**
	 * 获取缩放比例信息
	 * @return 返回CVector3
	 */
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getQuaternion_void(long pNativeObject);
	/**
	 * 获取四元数信息
	 * @return 返回CQuaternion
	 */
	public com.earthview.world.spatial.math.Quaternion getQuaternion()
	{
		long returnValue = getQuaternion_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getMeshPtr_void(long pNativeObject);
	/**
	 * 获取mesh对象
	 * @return 返回mesh
	 */
	public com.earthview.world.graphic.MeshPtr getMeshPtr()
	{
		long returnValue = getMeshPtr_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private String getResGroupName_void(long pNativeObject);
	/**
	 * 获取所在的资源组
	 * @return 返回资源组名
	 */
	public String getResGroupName()
	{
		String returnValue = getResGroupName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMeshName_void(long pNativeObject);
	/**
	 * 获取mesh名字
	 * @return 返回mesh名字
	 */
	public String getMeshName()
	{
		String returnValue = getMeshName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSourcePath_void(long pNativeObject);
	/**
	 * 返回源文件的路径
	 * @return 返回路径
	 */
	public String getSourcePath()
	{
		String returnValue = getSourcePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSourcePath_EVString(long pNativeObject, String path);
	/**
	 * 设置源文件的路径
	 * @param path 源路径
	 */
	public void setSourcePath(String path)
	{
		String pathParamValue = path;
		setSourcePath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void setNodeAnimationStream_MemoryDataStreamPtr(long pNativeObject, long ptr);
	/**
	 * 设置节点动画流
	 * @param ptr 动画流
	 */
	public void setNodeAnimationStream(com.earthview.world.core.MemoryDataStreamPtr ptr)
	{
		long ptrParamValue = ptr.nativeObject.pointer;
		setNodeAnimationStream_MemoryDataStreamPtr(this.nativeObject.pointer, ptrParamValue);
	}
	native private long getNodeAnimationStream_void(long pNativeObject);
	/**
	 * 获取节点动画流
	 * @return 返回节点动画流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getNodeAnimationStream()
	{
		long returnValue = getNodeAnimationStream_void(this.nativeObject.pointer);
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
	native private long getAttr_void(long pNativeObject);
	/**
	 * 获取自定义属性
	 * @return 返回自定义属性
	 */
	public com.earthview.world.spatial3d.dataexchange.MeshAttrMap getAttr()
	{
		long returnValue = getAttr_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataexchange.MeshAttrMap __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshAttrMap(CreatedWhenConstruct.CWC_NotToCreate, "MeshAttrMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshAttrMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MeshAttrMap");
		}
		return __returnValue;
	}
	native private void setAttr_MeshAttrMap(long pNativeObject, long attrmap);
	/**
	 * 设置自定义属性
	 * @param attrmap 自定义属性map
	 */
	public void setAttr(com.earthview.world.spatial3d.dataexchange.MeshAttrMap attrmap)
	{
		long attrmapParamValue = attrmap.nativeObject.pointer;
		setAttr_MeshAttrMap(this.nativeObject.pointer, attrmapParamValue);
	}
	public MeshData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshData obj = null;
 		if(baseObj instanceof MeshData)
		{
			obj = (MeshData)baseObj;
		} else {
			obj = new MeshData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshData");
			obj.increaseCast();
		}

		return obj;
	}
}
