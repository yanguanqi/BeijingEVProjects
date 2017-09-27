package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// </summary>
///  submesh数据信息集合
/// </summary>
public class SubMeshDataVector extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CSubMeshDataVector", new SubMeshDataVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SubMeshDataVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSubMeshDataVector", null);
	}

	native private long OperatorIndex_ev_size_t(long pNativeObject, long index);
	/// </summary>
	/// 获取submesh数据
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>submesh数据</returns>
	public com.earthview.world.geometry3d.SubMeshData OperatorIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.geometry3d.SubMeshData __returnValue = new com.earthview.world.geometry3d.SubMeshData(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SubMeshData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SubMeshData");
		}
		return __returnValue;
	}
	native private long getSubMeshData_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 获取submesh数据
	/// </summary>
	/// <param name="pos">索引</param>
	/// <returns>submesh数据</returns>
	public com.earthview.world.geometry3d.SubMeshData getSubMeshData(long pos)
	{
		long posParamValue = pos;
		long returnValue = getSubMeshData_ev_size_t(this.nativeObject.pointer, posParamValue);
		com.earthview.world.geometry3d.SubMeshData __returnValue = new com.earthview.world.geometry3d.SubMeshData(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SubMeshData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SubMeshData");
		}
		return __returnValue;
	}
	native private void addSubMeshData_SubMeshData(long pNativeObject, long subMeshData);
	/// </summary>
	/// 追加submesh数据
	/// </summary>
	/// <param name="subMeshData">submesh数据</param>
	/// <returns></returns>
	public void addSubMeshData(com.earthview.world.geometry3d.SubMeshData subMeshData)
	{
		long subMeshDataParamValue = subMeshData.nativeObject.pointer;
		addSubMeshData_SubMeshData(this.nativeObject.pointer, subMeshDataParamValue);
	}
	native private void insertSubMeshData_ev_size_t_SubMeshData(long pNativeObject, long pos, long subMeshData);
	/// </summary>
	/// 插入submesh数据
	/// </summary>
	/// <param name="pos">索引位置</param>
	/// <param name="subMeshData">submesh数据</param>
	/// <returns></returns>
	public void insertSubMeshData(long pos, com.earthview.world.geometry3d.SubMeshData subMeshData)
	{
		long posParamValue = pos;
		long subMeshDataParamValue = subMeshData.nativeObject.pointer;
		insertSubMeshData_ev_size_t_SubMeshData(this.nativeObject.pointer, posParamValue, subMeshDataParamValue);
	}
	native private void removeSubMeshData_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 删除submesh数据
	/// </summary>
	/// <param name="pos">索引位置</param>
	/// <returns></returns>
	public void removeSubMeshData(long pos)
	{
		long posParamValue = pos;
		removeSubMeshData_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void removeAllSubMeshDatas_void(long pNativeObject);
	/// </summary>
	/// 删除所有submesh数据
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public void removeAllSubMeshDatas()
	{
		removeAllSubMeshDatas_void(this.nativeObject.pointer);
	}
	native private long getCapacity_void(long pNativeObject);
	/// </summary>
	/// 获取容器容量
	/// </summary>
	/// <param name=""></param>
	/// <returns>容器容量</returns>
	public long getCapacity()
	{
		long returnValue = getCapacity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCapacity_ev_size_t(long pNativeObject, long count);
	/// </summary>
	/// 设置容器容量
	/// </summary>
	/// <param name="count">容量</param>
	/// <returns></returns>
	public void setCapacity(long count)
	{
		long countParamValue = count;
		setCapacity_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private long getCount_void(long pNativeObject);
	/// </summary>
	/// 获取容器元素数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>元素数量</returns>
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SubMeshDataVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubMeshDataVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubMeshDataVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubMeshDataVector obj = null;
 		if(baseObj instanceof SubMeshDataVector)
		{
			obj = (SubMeshDataVector)baseObj;
		} else {
			obj = new SubMeshDataVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubMeshDataVector");
			obj.increaseCast();
		}

		return obj;
	}
}
