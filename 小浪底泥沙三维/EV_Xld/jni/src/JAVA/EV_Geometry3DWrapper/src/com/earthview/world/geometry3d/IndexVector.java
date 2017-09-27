package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// </summary>
///  CIndexVector是索引的集合
/// </summary>
public class IndexVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CIndexVector", new IndexVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public IndexVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CIndexVector", null);
	}

	native private long OperatorIndex_ev_size_t(long pNativeObject, long index);
	/// </summary>
	/// 获取索引数据
	/// </summary>
	/// <param name="index">索引数据索引</param>
	/// <returns>索引数据的引用</returns>
	public long OperatorIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getIndices_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 获取索引数据
	/// </summary>
	/// <param name="pos">索引数据索引</param>
	/// <returns>索引数据的引用</returns>
	public long getIndices(long pos)
	{
		long posParamValue = pos;
		long returnValue = getIndices_ev_size_t(this.nativeObject.pointer, posParamValue);
		return returnValue;
	}
	native private void addIndices_ev_uint32(long pNativeObject, long indices);
	/// </summary>
	/// 增加索引数据
	/// </summary>
	public void addIndices(long indices)
	{
		long indicesParamValue = indices;
		addIndices_ev_uint32(this.nativeObject.pointer, indicesParamValue);
	}
	native private void insertIndices_ev_size_t_ev_uint16(long pNativeObject, long pos, int indices);
	/// </summary>
	///  插入索引数据
	/// </summary>
	public void insertIndices(long pos, int indices)
	{
		long posParamValue = pos;
		int indicesParamValue = indices;
		insertIndices_ev_size_t_ev_uint16(this.nativeObject.pointer, posParamValue, indicesParamValue);
	}
	native private void removeIndices_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 删除索引数据
	/// </summary>
	public void removeIndices(long pos)
	{
		long posParamValue = pos;
		removeIndices_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void removeAllIndices_void(long pNativeObject);
	/// </summary>
	/// 删除所有索引数据
	/// </summary>
	public void removeAllIndices()
	{
		removeAllIndices_void(this.nativeObject.pointer);
	}
	native private long getCapacity_void(long pNativeObject);
	/// </summary>
	/// 获取可容纳大小
	/// </summary>
	public long getCapacity()
	{
		long returnValue = getCapacity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCapacity_ev_size_t(long pNativeObject, long count);
	/// </summary>
	/// 申请空间，设置可容纳大小
	/// </summary>
	public void setCapacity(long count)
	{
		long countParamValue = count;
		setCapacity_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private long getCount_void(long pNativeObject);
	/// </summary>
	/// 获取元素数目
	/// </summary>
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public IndexVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IndexVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IndexVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IndexVector obj = null;
 		if(baseObj instanceof IndexVector)
		{
			obj = (IndexVector)baseObj;
		} else {
			obj = new IndexVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIndexVector");
			obj.increaseCast();
		}

		return obj;
	}
}
