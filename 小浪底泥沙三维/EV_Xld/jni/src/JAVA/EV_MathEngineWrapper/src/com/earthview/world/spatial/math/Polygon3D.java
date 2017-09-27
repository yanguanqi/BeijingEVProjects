package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 多边形类,定义了三维空间中多边形操作
 */
public class Polygon3D extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D", new Polygon3DClassFactory());
	}

	///typedef multimap<CVector3, CVector3>		EdgeMap;
	/// <summary>
	/// 多边形边界集合类
	/// </summary>
	public static class EdgeMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D::EdgeMap", new EdgeMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public EdgeMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EdgeMap", null);
		}

		native private void push_CVector3_CVector3(long pNativeObject, long key, long val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public void push(com.earthview.world.spatial.math.Vector3 key, com.earthview.world.spatial.math.Vector3 val)
		{
			long keyParamValue = key.nativeObject.pointer;
			long valParamValue = val.nativeObject.pointer;
			push_CVector3_CVector3(this.nativeObject.pointer, keyParamValue, valParamValue);
		}
		native private boolean exist_CVector3(long pNativeObject, long key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(com.earthview.world.spatial.math.Vector3 key)
		{
			long keyParamValue = key.nativeObject.pointer;
			boolean returnValue = exist_CVector3(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private void erase_CVector3(long pNativeObject, long key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(com.earthview.world.spatial.math.Vector3 key)
		{
			long keyParamValue = key.nativeObject.pointer;
			erase_CVector3(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long count_CVector3(long pNativeObject, long key);
		/**
		 * 返回键对应值的数量
		 * @param key 键
		 * @return 键对应值的数量
		 */
		public long count(com.earthview.world.spatial.math.Vector3 key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = count_CVector3(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long get_CVector3_ev_size_t(long pNativeObject, long key, long index);
		/**
		 * 获得指定键值的第几项值
		 * @param key 键
		 * @param index 指定键值的第几项
		 * @return 返回指定键值的第几项值
		 */
		public com.earthview.world.spatial.math.Vector3 get(com.earthview.world.spatial.math.Vector3 key, long index)
		{
			long keyParamValue = key.nativeObject.pointer;
			long indexParamValue = index;
			long returnValue = get_CVector3_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
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
		native private void erase_CVector3_ev_size_t(long pNativeObject, long key, long index);
		/**
		 * 删除指定键值的第几项
		 * @param key 键
		 * @param index 指定键值的第几项
		 */
		public void erase(com.earthview.world.spatial.math.Vector3 key, long index)
		{
			long keyParamValue = key.nativeObject.pointer;
			long indexParamValue = index;
			erase_CVector3_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public EdgeMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EdgeMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EdgeMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EdgeMap obj = null;
 			if(baseObj instanceof EdgeMap)
			{
				obj = (EdgeMap)baseObj;
			} else {
				obj = new EdgeMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EdgeMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EdgeMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EdgeMap emptyInstance = new EdgeMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 多边形边界集合对应键值对类
	 */
	public static class Edge extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D::Edge", new EdgeClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CVector3");
			}
			return __returnValue;
		}
		
		native private void set_first_CVector3 (long pNativeObject, long value);
		public void set_first(com.earthview.world.spatial.math.Vector3 first)
		{
			long firstParamValue = first.nativeObject.pointer;
			
			set_first_CVector3(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CVector3");
			}
			return __returnValue;
		}
		
		native private void set_second_CVector3 (long pNativeObject, long value);
		public void set_second(com.earthview.world.spatial.math.Vector3 second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_CVector3(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 构造函数
		 * @param fir 键
		 * @param sec 值
		 */
		public Edge(com.earthview.world.spatial.math.Vector3 fir, com.earthview.world.spatial.math.Vector3 sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("Edge", list);
		}

		native private long OperatorAssign_Edge(long pNativeObject, long other);
		/**
		 * 重载"="操作符
		 * @param other 其它键值对类对象
		 * @return 赋值结果
		 */
		public com.earthview.world.spatial.math.Polygon3D.Edge OperatorAssign(com.earthview.world.spatial.math.Polygon3D.Edge other)
		{
			long otherParamValue = other.nativeObject.pointer;
			long returnValue = OperatorAssign_Edge(this.nativeObject.pointer, otherParamValue);
			com.earthview.world.spatial.math.Polygon3D.Edge __returnValue = new com.earthview.world.spatial.math.Polygon3D.Edge(CreatedWhenConstruct.CWC_NotToCreate, "Edge");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Polygon3D.Edge)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "Edge");
			}
			return __returnValue;
		}
		public Edge(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Edge(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Edge fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Edge obj = null;
 			if(baseObj instanceof Edge)
			{
				obj = (Edge)baseObj;
			} else {
				obj = new Edge(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Edge");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EdgeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Edge emptyInstance = new Edge(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Polygon3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPolygon3D", null);
	}

	/**
	 * 复制构造函数
	 * @param cpy 
	 */
	public Polygon3D(com.earthview.world.spatial.math.Polygon3D cpy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cpyPtr = new BasePointer(cpy);
		list.add("cpy", cpyPtr.get());
		Create("CPolygon3D", list);
	}

	native private void insertVertex_CVector3_ev_size_t(long pNativeObject, long vdata, long vertexIndex);
	/**
	 * 插入顶点坐标和索引（必须共面）
	 * @param vdata 顶点数据
	 * @param vertexIndex 顶点索引
	 */
	public void insertVertex(com.earthview.world.spatial.math.Vector3 vdata, long vertexIndex)
	{
		long vdataParamValue = vdata.nativeObject.pointer;
		long vertexIndexParamValue = vertexIndex;
		insertVertex_CVector3_ev_size_t(this.nativeObject.pointer, vdataParamValue, vertexIndexParamValue);
	}
	native private void insertVertex_CVector3(long pNativeObject, long vdata);
	/**
	 * 插入顶点坐标
	 * @param vdata 顶点数据
	 */
	public void insertVertex(com.earthview.world.spatial.math.Vector3 vdata)
	{
		long vdataParamValue = vdata.nativeObject.pointer;
		insertVertex_CVector3(this.nativeObject.pointer, vdataParamValue);
	}
	native private long getVertex_ev_size_t(long pNativeObject, long vertex);
	/**
	 * 根据顶点索引返回顶点数据
	 * @param vertex 顶点索引
	 * @return 顶点数据
	 */
	public com.earthview.world.spatial.math.Vector3 getVertex(long vertex)
	{
		long vertexParamValue = vertex;
		long returnValue = getVertex_ev_size_t(this.nativeObject.pointer, vertexParamValue);
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
	native private void setVertex_CVector3_ev_size_t(long pNativeObject, long vdata, long vertexIndex);
	/**
	 * 根据顶点索引设置顶点坐标
	 * @param vdata 顶点数据
	 * @param vertexIndex 顶点索引
	 */
	public void setVertex(com.earthview.world.spatial.math.Vector3 vdata, long vertexIndex)
	{
		long vdataParamValue = vdata.nativeObject.pointer;
		long vertexIndexParamValue = vertexIndex;
		setVertex_CVector3_ev_size_t(this.nativeObject.pointer, vdataParamValue, vertexIndexParamValue);
	}
	native private void removeDuplicates_void(long pNativeObject);
	/**
	 * 移除相等的坐标点
	 * @param  
	 */
	public void removeDuplicates()
	{
		removeDuplicates_void(this.nativeObject.pointer);
	}
	native private long getVertexCount_void(long pNativeObject);
	/**
	 * 获得顶点数量
	 * @param  
	 * @return 返回顶点数量
	 */
	public long getVertexCount()
	{
		long returnValue = getVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNormal_void(long pNativeObject);
	/**
	 * 获得平面法线
	 * @param  
	 * @return 返回平面法线向量
	 */
	public com.earthview.world.spatial.math.Vector3 getNormal()
	{
		long returnValue = getNormal_void(this.nativeObject.pointer);
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
	native private void deleteVertex_ev_size_t(long pNativeObject, long vertex);
	/**
	 * 根据顶点索引删除顶点数据
	 * @param vertex 顶点索引
	 */
	public void deleteVertex(long vertex)
	{
		long vertexParamValue = vertex;
		deleteVertex_ev_size_t(this.nativeObject.pointer, vertexParamValue);
	}
	native private boolean isPointInside_CVector3(long pNativeObject, long point);
	/**
	 * 判断点是否在多边形内
	 * @param point 点数据
	 * @return 在多边形内返回true，否则false
	 */
	public boolean isPointInside(com.earthview.world.spatial.math.Vector3 point)
	{
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = isPointInside_CVector3(this.nativeObject.pointer, pointParamValue);
		return returnValue;
	}
	native private void storeEdges_EdgeMap(long pNativeObject, long edgeMap);
	/**
	 * 按逆时针方向存储多边形边
	 * @param edgeMap 多边形边集合
	 */
	public void storeEdges(com.earthview.world.spatial.math.Polygon3D.EdgeMap edgeMap)
	{
		long edgeMapParamValue = (edgeMap == null ? 0L : edgeMap.nativeObject.pointer);
		storeEdges_EdgeMap(this.nativeObject.pointer, edgeMapParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置多边形对象
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private boolean OperatorEquals_CPolygon3D(long pNativeObject, long rhs);
	/**
	 * 判断多边形是否相等
	 * @param rhs 多边形对象
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Polygon3D rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CPolygon3D(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CPolygon3D(long pNativeObject, long rhs);
	/**
	 * 判断多边形是否非相等
	 * @param rhs 多边形对象
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Polygon3D rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CPolygon3D(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public Polygon3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Polygon3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Polygon3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Polygon3D obj = null;
 		if(baseObj instanceof Polygon3D)
		{
			obj = (Polygon3D)baseObj;
		} else {
			obj = new Polygon3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPolygon3D");
			obj.increaseCast();
		}

		return obj;
	}
}
