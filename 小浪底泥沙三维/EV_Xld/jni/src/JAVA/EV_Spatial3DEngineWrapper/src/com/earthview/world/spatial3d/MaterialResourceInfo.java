package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialResourceInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CMaterialResourceInfo", new MaterialResourceInfoClassFactory());
	}

	public MaterialResourceInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMaterialResourceInfo", null);
	}

	native private void setRefCount_ev_uint32(long pNativeObject, long count);
	/**
	 * 设置资源引用数量
	 * @param count 数量
	 */
	public void setRefCount(long count)
	{
		long countParamValue = count;
		setRefCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private long getRefCount_void(long pNativeObject);
	/**
	 * 获取资源引用数量
	 * @param  
	 * @return 数量
	 */
	public long getRefCount()
	{
		long returnValue = getRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceID_ev_uint32(long pNativeObject, long resourceID);
	/**
	 * 设置资源id
	 * @param resourceID 资源ID
	 */
	public void setResourceID(long resourceID)
	{
		long resourceIDParamValue = resourceID;
		setResourceID_ev_uint32(this.nativeObject.pointer, resourceIDParamValue);
	}
	native private long getResourceID_void(long pNativeObject);
	/**
	 * 获取资源id
	 * @param  
	 */
	public long getResourceID()
	{
		long returnValue = getResourceID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFilename_EVString(long pNativeObject, String filename);
	/**
	 * 设置资源文件名称
	 * @param filename 资源文件名称
	 */
	public void setFilename(String filename)
	{
		String filenameParamValue = filename;
		setFilename_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private String getFilename_void(long pNativeObject);
	/**
	 * 获取资源文件名称
	 * @param  
	 */
	public String getFilename()
	{
		String returnValue = getFilename_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataSize_ev_uint32(long pNativeObject, long size);
	/**
	 * 设置资源数据大小
	 * @param size 资源大小
	 */
	public void setDataSize(long size)
	{
		long sizeParamValue = size;
		setDataSize_ev_uint32(this.nativeObject.pointer, sizeParamValue);
	}
	native private long getDataSize_void(long pNativeObject);
	/**
	 * 获取资源数据大小
	 * @param  
	 */
	public long getDataSize()
	{
		long returnValue = getDataSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceType_MaterialResourceType(long pNativeObject, int type);
	/**
	 * 设置数据源类型
	 * @param type 资源类型
	 */
	public void setResourceType(com.earthview.world.spatial3d.dataset.MaterialResourceType type)
	{
		int typeParamValue = type.getValue();
		setResourceType_MaterialResourceType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getResourceType_void(long pNativeObject);
	/**
	 * 获取数据源类型
	 * @param  
	 */
	public com.earthview.world.spatial3d.dataset.MaterialResourceType getResourceType()
	{
		int returnValue = getResourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.MaterialResourceType.toEnum(returnValue);
	}
	native private void setSubMeshIndex_ev_uint32(long pNativeObject, long index);
	/**
	 * 设置submehs序号
	 * @param index submesh序号
	 */
	public void setSubMeshIndex(long index)
	{
		long indexParamValue = index;
		setSubMeshIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private long getSubMeshIndex_void(long pNativeObject);
	/**
	 * 获取submesh序号
	 * @param  
	 */
	public long getSubMeshIndex()
	{
		long returnValue = getSubMeshIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setChangeFromTemplate_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置从模板改变
	 * @param flag true改变，false不改变
	 */
	public void setChangeFromTemplate(boolean flag)
	{
		boolean flagParamValue = flag;
		setChangeFromTemplate_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getChangeFromTemplate_void(long pNativeObject);
	/**
	 * 获取是否改变
	 * @param  
	 */
	public boolean getChangeFromTemplate()
	{
		boolean returnValue = getChangeFromTemplate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataBufRef_ev_byte(long pNativeObject, long buf);
	/**
	 * 设置资源数据流
	 * @param buf 资源数据流
	 */
	public void setDataBufRef(UBytePointer buf)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		setDataBufRef_ev_byte(this.nativeObject.pointer, bufParamValue);
	}
	native private long getDataBufRef_void(long pNativeObject);
	/**
	 * 获取资源数据流
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
	public MaterialResourceInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialResourceInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialResourceInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialResourceInfo obj = null;
 		if(baseObj instanceof MaterialResourceInfo)
		{
			obj = (MaterialResourceInfo)baseObj;
		} else {
			obj = new MaterialResourceInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterialResourceInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
