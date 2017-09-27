package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// </summary>
///  CVertexVector是顶点的集合
/// </summary>
public class VertexVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CVertexVector", new VertexVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public VertexVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVertexVector", null);
	}

	native private long OperatorIndex_ev_size_t(long pNativeObject, long index);
	/// </summary>
	/// 获取顶点数据
	/// </summary>
	/// <param name="index">顶点数据索引</param>
	/// <returns>顶点数据的引用</returns>
	public com.earthview.world.geometry3d.Vertex OperatorIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.geometry3d.Vertex __returnValue = new com.earthview.world.geometry3d.Vertex(CreatedWhenConstruct.CWC_NotToCreate, "CVertex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Vertex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertex");
		}
		return __returnValue;
	}
	native private long getVertex_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 获取顶点数据
	/// </summary>
	/// <param name="pos">顶点数据索引</param>
	/// <returns>顶点数据的引用</returns>
	public com.earthview.world.geometry3d.Vertex getVertex(long pos)
	{
		long posParamValue = pos;
		long returnValue = getVertex_ev_size_t(this.nativeObject.pointer, posParamValue);
		com.earthview.world.geometry3d.Vertex __returnValue = new com.earthview.world.geometry3d.Vertex(CreatedWhenConstruct.CWC_NotToCreate, "CVertex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Vertex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertex");
		}
		return __returnValue;
	}
	native private void addVertex_CVertex(long pNativeObject, long vertex);
	/// </summary>
	///  增加顶点
	/// </summary>
	public void addVertex(com.earthview.world.geometry3d.Vertex vertex)
	{
		long vertexParamValue = vertex.nativeObject.pointer;
		addVertex_CVertex(this.nativeObject.pointer, vertexParamValue);
	}
	native private void insertVertex_ev_size_t_CVertex(long pNativeObject, long pos, long vertex);
	/// </summary>
	///  插入顶点
	/// </summary>
	public void insertVertex(long pos, com.earthview.world.geometry3d.Vertex vertex)
	{
		long posParamValue = pos;
		long vertexParamValue = vertex.nativeObject.pointer;
		insertVertex_ev_size_t_CVertex(this.nativeObject.pointer, posParamValue, vertexParamValue);
	}
	native private void removeVertex_ev_size_t(long pNativeObject, long pos);
	/// </summary>
	/// 删除顶点
	/// </summary>
	public void removeVertex(long pos)
	{
		long posParamValue = pos;
		removeVertex_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void removeAllVertexs_void(long pNativeObject);
	/// </summary>
	/// 删除所有顶点
	/// </summary>
	public void removeAllVertexs()
	{
		removeAllVertexs_void(this.nativeObject.pointer);
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
	public VertexVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VertexVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexVector obj = null;
 		if(baseObj instanceof VertexVector)
		{
			obj = (VertexVector)baseObj;
		} else {
			obj = new VertexVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexVector");
			obj.increaseCast();
		}

		return obj;
	}
}
