package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 凸面体类定义一些图面体的操作
 */
public class ConvexBody extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CConvexBody", new ConvexBodyClassFactory());
	}

	public static class PolygonList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConvexBody::PolygonList", new PolygonListClassFactory());
		}

		native private void push_back_CPolygon3D(long pNativeObject, long ref_t);
		/**
		 * 在容器后面追加对象
		 * @param t 需要追加的对象
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CPolygon3D(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 从容器后面取出对象
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 检查发生变化的第一个元素
		 * @param  
		 * @return 返回第一个元素
		 */
		public NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 检查发生变化的最后一个元素
		 * @param  
		 * @return 返回最后一个元素
		 */
		public NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void swap_PolygonList(long pNativeObject, long rhs);
		/**
		 * 替换容器中的对象
		 * @param rhs 用作替换的对象
		 */
		public void swap(com.earthview.world.graphic.ConvexBody.PolygonList rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			swap_PolygonList(this.nativeObject.pointer, rhsParamValue);
		}
		native private void insert_ev_uint32_CPolygon3D(long pNativeObject, long pos, long ref_t);
		/**
		 * 插入元素
		 * @param pos 插入元素的位置
		 * @param t 插入的元素
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CPolygon3D(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 移除元素
		 * @param pos 需要移除元素的位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 数组下标"[]"重载
		 * @param n 下标
		 * @return 返回对应下标的数组中的值
		 */
		public NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 检查发生变化的下标
		 * @param n 下标
		 * @return 返回对应下标的位置
		 */
		public NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.math.Polygon3D>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 容器的大小
		 * @param  
		 * @return 返回容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整容器的大小
		 * @param n 调整的大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 检查容器预留的空间
		 * @param t 预留给容器的空间大小
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		/**
		 * 默认构造函数
		 * @param  
		 */
		public PolygonList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PolygonList", null);
		}

		public PolygonList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PolygonList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PolygonList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PolygonList obj = null;
 			if(baseObj instanceof PolygonList)
			{
				obj = (PolygonList)baseObj;
			} else {
				obj = new PolygonList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PolygonList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PolygonListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PolygonList emptyInstance = new PolygonList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public ConvexBody() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CConvexBody", null);
	}

	/**
	 * 构造函数
	 * @param cpy EarthView::World::Graphic::CConvexBody类的引用
	 */
	public ConvexBody(com.earthview.world.graphic.ConvexBody cpy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cpyPtr = new BasePointer(cpy);
		list.add("cpy", cpyPtr.get());
		Create("CConvexBody", list);
	}

	native private void define_CFrustum(long pNativeObject, long frustum);
	/**
	 * 定义截头锥体
	 * @param frustum EarthView::World::Graphic::CFrustum的引用
	 */
	public void define(com.earthview.world.graphic.Frustum frustum)
	{
		long frustumParamValue = frustum.nativeObject.pointer;
		define_CFrustum(this.nativeObject.pointer, frustumParamValue);
	}
	native private void define_CAxisAlignedBox(long pNativeObject, long aab);
	/**
	 * 定义平行轴边框盒
	 * @param aab EarthView::World::Spatial::Math::CAxisAlignedBox的引用
	 */
	public void define(com.earthview.world.spatial.math.AxisAlignedBox aab)
	{
		long aabParamValue = aab.nativeObject.pointer;
		define_CAxisAlignedBox(this.nativeObject.pointer, aabParamValue);
	}
	native private void clip_CFrustum(long pNativeObject, long frustum);
	/**
	 * 用截头锥体裁剪立体
	 * @param frustum EarthView::World::Graphic::CFrustum的引用
	 */
	public void clip(com.earthview.world.graphic.Frustum frustum)
	{
		long frustumParamValue = frustum.nativeObject.pointer;
		clip_CFrustum(this.nativeObject.pointer, frustumParamValue);
	}
	native private void clip_CAxisAlignedBox(long pNativeObject, long aab);
	/**
	 * 用平行轴边框盒裁剪立体
	 * @param aab EarthView::World::Spatial::Math::CAxisAlignedBox的引用
	 */
	public void clip(com.earthview.world.spatial.math.AxisAlignedBox aab)
	{
		long aabParamValue = aab.nativeObject.pointer;
		clip_CAxisAlignedBox(this.nativeObject.pointer, aabParamValue);
	}
	native private void clip_CConvexBody(long pNativeObject, long body);
	/**
	 * 用一个立体裁剪另一个立体
	 * @param body EarthView::World::Graphic::CConvexBody的引用
	 */
	public void clip(com.earthview.world.graphic.ConvexBody body)
	{
		long bodyParamValue = body.nativeObject.pointer;
		clip_CConvexBody(this.nativeObject.pointer, bodyParamValue);
	}
	native private void clip_CPlane(long pNativeObject, long pl);
	/**
	 * 用有效的平面空间裁剪物体
	 * @param pl EarthView::World::Spatial::Math::CPlane的引用
	 */
	public void clip(com.earthview.world.spatial.math.Plane pl)
	{
		long plParamValue = pl.nativeObject.pointer;
		clip_CPlane(this.nativeObject.pointer, plParamValue);
	}
	native private void clip_CPlane_ev_bool(long pNativeObject, long pl, boolean keepNegative);
	/**
	 * 用有效的平面空间裁剪物体
	 * @param pl EarthView::World::Spatial::Math::CPlane的引用
	 * @param keepNegative 平面有效性的判断
	 */
	public void clip(com.earthview.world.spatial.math.Plane pl, boolean keepNegative)
	{
		long plParamValue = pl.nativeObject.pointer;
		boolean keepNegativeParamValue = keepNegative;
		clip_CPlane_ev_bool(this.nativeObject.pointer, plParamValue, keepNegativeParamValue);
	}
	native private void extend_CVector3(long pNativeObject, long pt);
	/**
	 * 放置构成凸面体的输入点的集合
	 * @param pt EarthView::World::Spatial::Math::CVector3的引用
	 */
	public void extend(com.earthview.world.spatial.math.Vector3 pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		extend_CVector3(this.nativeObject.pointer, ptParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置目标物体
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private long getPolygonCount_void(long pNativeObject);
	/**
	 * 得到多边形的个数
	 * @param  
	 * @return 返回多边形的个数
	 */
	public long getPolygonCount()
	{
		long returnValue = getPolygonCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexCount_ev_size_t(long pNativeObject, long poly);
	/**
	 * 得到一个多边形包含顶点个数
	 * @param poly 目标多边形
	 * @return 返回顶点个数
	 */
	public long getVertexCount(long poly)
	{
		long polyParamValue = poly;
		long returnValue = getVertexCount_ev_size_t(this.nativeObject.pointer, polyParamValue);
		return returnValue;
	}
	native private long getPolygon_ev_size_t(long pNativeObject, long poly);
	/**
	 * 得到一个多边形
	 * @param poly 目标多边形
	 * @return 返回多边形的引用
	 */
	public com.earthview.world.spatial.math.Polygon3D getPolygon(long poly)
	{
		long polyParamValue = poly;
		long returnValue = getPolygon_ev_size_t(this.nativeObject.pointer, polyParamValue);
		com.earthview.world.spatial.math.Polygon3D __returnValue = new com.earthview.world.spatial.math.Polygon3D(CreatedWhenConstruct.CWC_NotToCreate, "CPolygon3D");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Polygon3D)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolygon3D");
		}
		return __returnValue;
	}
	native private long getVertex_ev_size_t_ev_size_t(long pNativeObject, long poly, long vertex);
	/**
	 * 得到一个多边形中的一个特定顶点
	 * @param poly 目标多边形
	 * @param vertex 目标顶点
	 * @return 返回三维向量类的引用
	 */
	public com.earthview.world.spatial.math.Vector3 getVertex(long poly, long vertex)
	{
		long polyParamValue = poly;
		long vertexParamValue = vertex;
		long returnValue = getVertex_ev_size_t_ev_size_t(this.nativeObject.pointer, polyParamValue, vertexParamValue);
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
	native private long getNormal_ev_size_t(long pNativeObject, long poly);
	/**
	 * 得到一个标准的多边形
	 * @param poly 目标多边形
	 * @return 返回三维向量类的引用
	 */
	public com.earthview.world.spatial.math.Vector3 getNormal(long poly)
	{
		long polyParamValue = poly;
		long returnValue = getNormal_ev_size_t(this.nativeObject.pointer, polyParamValue);
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
	native private long getAABB_void(long pNativeObject);
	/**
	 * 得到一个平行轴边框盒
	 * @param  
	 * @return 返回平行轴边框盒类的引用
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getAABB()
	{
		long returnValue = getAABB_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private boolean hasClosedHull_void(long pNativeObject);
	/**
	 * 检查立体表面是否是闭合的
	 * @param  
	 * @return 闭合的返回true，否则返回false
	 */
	public boolean hasClosedHull()
	{
		boolean returnValue = hasClosedHull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void mergePolygons_void(long pNativeObject);
	/**
	 * 将在同一个平面内的邻近多边形合并
	 * @param  
	 */
	public void mergePolygons()
	{
		mergePolygons_void(this.nativeObject.pointer);
	}
	native private boolean OperatorEquals_CConvexBody(long pNativeObject, long rhs);
	/**
	 * 等号"=="运算符的重载
	 * @param rhs EarthView::World::Graphic::CConvexBody类的引用
	 * @return 相等则返回true，否则返回false
	 */
	public boolean OperatorEquals(com.earthview.world.graphic.ConvexBody rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CConvexBody(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CConvexBody(long pNativeObject, long rhs);
	/**
	 * 不等号"!="运算符的重载
	 * @param rhs EarthView::World::Graphic::CConvexBody类的引用
	 * @return 不相等则返回true，否则返回false
	 */
	public boolean OperatorNotEquals(com.earthview.world.graphic.ConvexBody rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CConvexBody(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void logInfo_void(long pNativeObject);
	/**
	 * 记录立体的详细情况
	 * @param  
	 */
	public void logInfo()
	{
		logInfo_void(this.nativeObject.pointer);
	}
	native private static void _initialisePool_void();
	/**
	 * 给内部的多边形集合所使用的最小空间赋初值
	 * @param  
	 */
	public static void _initialisePool()
	{
		_initialisePool_void();
	}
	native private static void _destroyPool_void();
	/**
	 * 释放内部的多边形集合所使用的最小空间
	 * @param  
	 */
	public static void _destroyPool()
	{
		_destroyPool_void();
	}
	public ConvexBody(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConvexBody(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConvexBody fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConvexBody obj = null;
 		if(baseObj instanceof ConvexBody)
		{
			obj = (ConvexBody)baseObj;
		} else {
			obj = new ConvexBody(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CConvexBody");
			obj.increaseCast();
		}

		return obj;
	}
}
