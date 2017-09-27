package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshDataInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CMeshDataInfo", new MeshDataInfoClassFactory());
	}

	public MeshDataInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshDataInfo", null);
	}

	native private void setRefCount_ev_uint32(long pNativeObject, long refCount);
	/**
	 * 设置引用数量
	 * @param refCount 引用数量
	 */
	public void setRefCount(long refCount)
	{
		long refCountParamValue = refCount;
		setRefCount_ev_uint32(this.nativeObject.pointer, refCountParamValue);
	}
	native private long getRefCount_void(long pNativeObject);
	/**
	 * 获取引用数量
	 * @param  
	 */
	public long getRefCount()
	{
		long returnValue = getRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMeshID_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 设置meshid
	 * @param meshID meshID
	 */
	public void setMeshID(long meshID)
	{
		long meshIDParamValue = meshID;
		setMeshID_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
	}
	native private long getMeshID_void(long pNativeObject);
	/**
	 * 获取meshid
	 * @param  
	 */
	public long getMeshID()
	{
		long returnValue = getMeshID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTemplateID_ev_uint32(long pNativeObject, long templateID);
	/**
	 * 设置模板id
	 * @param templateID 模板ID
	 */
	public void setTemplateID(long templateID)
	{
		long templateIDParamValue = templateID;
		setTemplateID_ev_uint32(this.nativeObject.pointer, templateIDParamValue);
	}
	native private long getTemplateID_void(long pNativeObject);
	/**
	 * 获取模板id
	 * @param  
	 */
	public long getTemplateID()
	{
		long returnValue = getTemplateID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInstanceNum_ev_uint32(long pNativeObject, long num);
	/**
	 * 设置instance数量
	 * @param num instance数量
	 */
	public void setInstanceNum(long num)
	{
		long numParamValue = num;
		setInstanceNum_ev_uint32(this.nativeObject.pointer, numParamValue);
	}
	native private long getInstanceNum_void(long pNativeObject);
	/**
	 * 获取instance数量
	 * @param  
	 */
	public long getInstanceNum()
	{
		long returnValue = getInstanceNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisibleDistance_double_double(long pNativeObject, double minDistance, double maxDistance);
	/**
	 * 设置可视距离
	 * @param minDistance 最近距离
	 * @param maxDistance 最远距离
	 */
	public void setVisibleDistance(double minDistance, double maxDistance)
	{
		double minDistanceParamValue = minDistance;
		double maxDistanceParamValue = maxDistance;
		setVisibleDistance_double_double(this.nativeObject.pointer, minDistanceParamValue, maxDistanceParamValue);
	}
	native private void getVisibleDistance_double_double(long pNativeObject, long minDistance, long maxDistance);
	/**
	 * 获取可视距离
	 * @param minDistance 最近距离
	 * @param maxDistance 最远距离
	 */
	public void getVisibleDistance(DoublePointer minDistance, DoublePointer maxDistance)
	{
		long minDistanceParamValue = minDistance.nativeObject.pointer;
		long maxDistanceParamValue = maxDistance.nativeObject.pointer;
		getVisibleDistance_double_double(this.nativeObject.pointer, minDistanceParamValue, maxDistanceParamValue);
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置mesh名称
	 * @param  mesh名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取mesh名称
	 * @param  
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFileName_EVString(long pNativeObject, String filename);
	/**
	 * 设置mesh文件名称
	 * @param filename mesh文件名称
	 */
	public void setFileName(String filename)
	{
		String filenameParamValue = filename;
		setFileName_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private String getFileName_void(long pNativeObject);
	/**
	 * 获取mesh文件名称
	 * @param  
	 */
	public String getFileName()
	{
		String returnValue = getFileName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataBufRef_ev_byte(long pNativeObject, long buf);
	/**
	 * 设置mesh数据流
	 * @param buf mesh数据流
	 */
	public void setDataBufRef(UBytePointer buf)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		setDataBufRef_ev_byte(this.nativeObject.pointer, bufParamValue);
	}
	native private long getDataBufRef_void(long pNativeObject);
	/**
	 * 获取mesh数据流
	 * @param  
	 */
	public UBytePointer getDataBufRef()
	{
		long returnValue = getDataBufRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDataSize_ev_uint32(long pNativeObject, long size);
	/**
	 * 设置mesh数据流大小
	 * @param size 数据流大小
	 */
	public void setDataSize(long size)
	{
		long sizeParamValue = size;
		setDataSize_ev_uint32(this.nativeObject.pointer, sizeParamValue);
	}
	native private long getDataSize_void(long pNativeObject);
	/**
	 * 获取mesh数据流大小
	 * @param  
	 */
	public long getDataSize()
	{
		long returnValue = getDataSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addResourceRef_CMaterialResourceInfo(long pNativeObject, long resource);
	/**
	 * 添加资源数据信息
	 * @param resource 资源信息
	 */
	public void addResourceRef(com.earthview.world.spatial3d.MaterialResourceInfo resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		addResourceRef_CMaterialResourceInfo(this.nativeObject.pointer, resourceParamValue);
	}
	native private long getResourceRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取资源数据信息
	 * @param index 标记索引
	 */
	public com.earthview.world.spatial3d.MaterialResourceInfo getResourceRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getResourceRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.MaterialResourceInfo __returnValue = new com.earthview.world.spatial3d.MaterialResourceInfo(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialResourceInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.MaterialResourceInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialResourceInfo");
		}
		return __returnValue;
	}
	native private long getResourceNum_void(long pNativeObject);
	/**
	 * 获取资源数量
	 * @param  
	 */
	public long getResourceNum()
	{
		long returnValue = getResourceNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @param  
	 */
	public com.earthview.world.spatial3d.MeshDataInfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.MeshDataInfo __returnValue = new com.earthview.world.spatial3d.MeshDataInfo(CreatedWhenConstruct.CWC_NotToCreate, "CMeshDataInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.MeshDataInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshDataInfo");
		}
		return __returnValue;
	}
	native private void clearBuffer_void(long pNativeObject);
	/**
	 * 清理数据
	 * @param  
	 */
	public void clearBuffer()
	{
		clearBuffer_void(this.nativeObject.pointer);
	}
	public MeshDataInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshDataInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshDataInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshDataInfo obj = null;
 		if(baseObj instanceof MeshDataInfo)
		{
			obj = (MeshDataInfo)baseObj;
		} else {
			obj = new MeshDataInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshDataInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
