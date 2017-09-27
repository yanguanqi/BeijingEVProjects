package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型资源映射表表项
 */
public class MeshResourceItem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshResourceItem", new MeshResourceItemClassFactory());
	}

	public MeshResourceItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshResourceItem", null);
	}

	native private boolean getValidState_void(long pNativeObject);
	/**
	 * 获取资源文件是否合法，一般指关联的文件是否存在
	 * @return ev_bool
	 */
	public boolean getValidState()
	{
		boolean returnValue = getValidState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setValidState_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置合法状态
	 * @param state 状态
	 * @return void
	 */
	public void setValidState(boolean state)
	{
		boolean stateParamValue = state;
		setValidState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private boolean getUploadState_void(long pNativeObject);
	/**
	 * 获取当前资源文件是否已经被导入过
	 * @return ev_bool
	 */
	public boolean getUploadState()
	{
		boolean returnValue = getUploadState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUploadState_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置当前资源文件是否已经被导入过
	 * @param state 状态
	 * @return void
	 */
	public void setUploadState(boolean state)
	{
		boolean stateParamValue = state;
		setUploadState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private String getResourceName_void(long pNativeObject);
	/**
	 * 获取资源名称，主要做为在映射表中key
	 * @return EVString
	 */
	public String getResourceName()
	{
		String returnValue = getResourceName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceName_EVString(long pNativeObject, String resourceName);
	/**
	 * 设置资源名称
	 * @param resourceName 资源名称
	 * @return void
	 */
	public void setResourceName(String resourceName)
	{
		String resourceNameParamValue = resourceName;
		setResourceName_EVString(this.nativeObject.pointer, resourceNameParamValue);
	}
	native private String getResourceFile_void(long pNativeObject);
	/**
	 * 获取资源文件路径
	 * @return EVString
	 */
	public String getResourceFile()
	{
		String returnValue = getResourceFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceFile_EVString(long pNativeObject, String filename);
	/**
	 * 设置资源文件路径
	 * @param filename 资源文件路径
	 * @return void
	 */
	public void setResourceFile(String filename)
	{
		String filenameParamValue = filename;
		setResourceFile_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取资源类别
	 * @return EarthView::World::Spatial3D::Dataset::MaterialResourceType
	 */
	public com.earthview.world.spatial3d.dataset.MaterialResourceType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.MaterialResourceType.toEnum(returnValue);
	}
	native private void setType_MaterialResourceType(long pNativeObject, int type);
	/**
	 * 设置资源类别
	 * @param type 资源类别
	 * @return void
	 */
	public void setType(com.earthview.world.spatial3d.dataset.MaterialResourceType type)
	{
		int typeParamValue = type.getValue();
		setType_MaterialResourceType(this.nativeObject.pointer, typeParamValue);
	}
	native private void addRef_void(long pNativeObject);
	/**
	 * 引用计数，同一资源可能被不同模型引用，在删除该资源时要检查引用计数是否为0
	 * @return void
	 */
	public void addRef()
	{
		addRef_void(this.nativeObject.pointer);
	}
	native private void delRef_void(long pNativeObject);
	public void delRef()
	{
		delRef_void(this.nativeObject.pointer);
	}
	native private void resetRef_void(long pNativeObject);
	public void resetRef()
	{
		resetRef_void(this.nativeObject.pointer);
	}
	native private long getRef_void(long pNativeObject);
	public long getRef()
	{
		long returnValue = getRef_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRef_ev_uint32(long pNativeObject, long count);
	public void setRef(long count)
	{
		long countParamValue = count;
		setRef_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	public MeshResourceItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshResourceItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshResourceItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshResourceItem obj = null;
 		if(baseObj instanceof MeshResourceItem)
		{
			obj = (MeshResourceItem)baseObj;
		} else {
			obj = new MeshResourceItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshResourceItem");
			obj.increaseCast();
		}

		return obj;
	}
}
