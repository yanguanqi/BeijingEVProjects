package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EdgeData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData", new EdgeDataClassFactory());
	}

	public EdgeData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEdgeData", null);
	}

	public static class Triangle extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::CTriangle", new TriangleClassFactory());
		}

		native private String get_indexSet_void(long pNativeObject);
		public ULongPointer get_indexSet()
		{
			String jniValue = get_indexSet_void(this.nativeObject.pointer);
			
			ULongPointer __returnValue = new ULongPointer(jniValue);
			return __returnValue;
		}
		
		native private void set_indexSet_ev_uint64 (long pNativeObject, long value);
		public void set_indexSet(ULongPointer indexSet)
		{
			long indexSetParamValue = indexSet.nativeObject.pointer;
			
			set_indexSet_ev_uint64(this.nativeObject.pointer, indexSetParamValue);
		}
		
		native private String get_vertexSet_void(long pNativeObject);
		public ULongPointer get_vertexSet()
		{
			String jniValue = get_vertexSet_void(this.nativeObject.pointer);
			
			ULongPointer __returnValue = new ULongPointer(jniValue);
			return __returnValue;
		}
		
		native private void set_vertexSet_ev_uint64 (long pNativeObject, long value);
		public void set_vertexSet(ULongPointer vertexSet)
		{
			long vertexSetParamValue = vertexSet.nativeObject.pointer;
			
			set_vertexSet_ev_uint64(this.nativeObject.pointer, vertexSetParamValue);
		}
		
		native private long get_vertIndex_void(long pNativeObject);
		public NativeULongBuffer get_vertIndex()
		{
			long jniValue = get_vertIndex_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			NativeULongBuffer __returnValue = new NativeULongBuffer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_vertIndex_ev_uint64 (long pNativeObject, long value);
		public void set_vertIndex(NativeULongBuffer vertIndex)
		{
			long vertIndexParamValue = (vertIndex == null ? 0L : vertIndex.nativeObject.pointer);
			
			set_vertIndex_ev_uint64(this.nativeObject.pointer, vertIndexParamValue);
		}
		
		native private long get_sharedVertIndex_void(long pNativeObject);
		public NativeULongBuffer get_sharedVertIndex()
		{
			long jniValue = get_sharedVertIndex_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			NativeULongBuffer __returnValue = new NativeULongBuffer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_sharedVertIndex_ev_uint64 (long pNativeObject, long value);
		public void set_sharedVertIndex(NativeULongBuffer sharedVertIndex)
		{
			long sharedVertIndexParamValue = (sharedVertIndex == null ? 0L : sharedVertIndex.nativeObject.pointer);
			
			set_sharedVertIndex_ev_uint64(this.nativeObject.pointer, sharedVertIndexParamValue);
		}
		
		//// Vertex indexes, relative to a shared vertex buffer with
		/// duplicates eliminated (this buffer is not exposed)
		public Triangle() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CTriangle", null);
		}

		public Triangle(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Triangle(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Triangle fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Triangle obj = null;
 			if(baseObj instanceof Triangle)
			{
				obj = (Triangle)baseObj;
			} else {
				obj = new Triangle(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTriangle");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TriangleClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Triangle emptyInstance = new Triangle(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Edge extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::CEdge", new EdgeClassFactory());
		}

		native private long get_triIndex_void(long pNativeObject);
		public NativeULongBuffer get_triIndex()
		{
			long jniValue = get_triIndex_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			NativeULongBuffer __returnValue = new NativeULongBuffer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_triIndex_ev_uint64 (long pNativeObject, long value);
		public void set_triIndex(NativeULongBuffer triIndex)
		{
			long triIndexParamValue = (triIndex == null ? 0L : triIndex.nativeObject.pointer);
			
			set_triIndex_ev_uint64(this.nativeObject.pointer, triIndexParamValue);
		}
		
		native private long get_vertIndex_void(long pNativeObject);
		public NativeULongBuffer get_vertIndex()
		{
			long jniValue = get_vertIndex_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			NativeULongBuffer __returnValue = new NativeULongBuffer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_vertIndex_ev_uint64 (long pNativeObject, long value);
		public void set_vertIndex(NativeULongBuffer vertIndex)
		{
			long vertIndexParamValue = (vertIndex == null ? 0L : vertIndex.nativeObject.pointer);
			
			set_vertIndex_ev_uint64(this.nativeObject.pointer, vertIndexParamValue);
		}
		
		native private long get_sharedVertIndex_void(long pNativeObject);
		public NativeULongBuffer get_sharedVertIndex()
		{
			long jniValue = get_sharedVertIndex_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			NativeULongBuffer __returnValue = new NativeULongBuffer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_sharedVertIndex_ev_uint64 (long pNativeObject, long value);
		public void set_sharedVertIndex(NativeULongBuffer sharedVertIndex)
		{
			long sharedVertIndexParamValue = (sharedVertIndex == null ? 0L : sharedVertIndex.nativeObject.pointer);
			
			set_sharedVertIndex_ev_uint64(this.nativeObject.pointer, sharedVertIndexParamValue);
		}
		
		native private boolean get_degenerate_void(long pNativeObject);
		public boolean get_degenerate()
		{
			boolean jniValue = get_degenerate_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_degenerate_ev_bool (long pNativeObject, boolean value);
		public void set_degenerate(boolean degenerate)
		{
			boolean degenerateParamValue = degenerate;
			
			set_degenerate_ev_bool(this.nativeObject.pointer, degenerateParamValue);
		}
		
		public Edge() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CEdge", null);
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
				obj.bindNativeObject(baseObj.nativeObject, "CEdge");
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
	
	/// Array of 4D vector of triangle face normal, which is unit vector orthogonal
	/// to the triangles, plus distance from origin.
	/// Use aligned policy here because we are intended to use in SIMD optimised routines .
	public static class TriangleFaceNormalList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList", new TriangleFaceNormalListClassFactory());
		}

		public TriangleFaceNormalList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TriangleFaceNormalList", null);
		}

		public TriangleFaceNormalList(long count) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer countPtr = new BasePointer(count);
			list.add("count", countPtr.get());
			Create("TriangleFaceNormalList", list);
		}

		native private void push_back_CVector4(long pNativeObject, long t);
		public void push_back(com.earthview.world.spatial.math.Vector4 t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CVector4(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector4 front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector4 back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private void swap_TriangleFaceNormalList(long pNativeObject, long rhs);
		public void swap(com.earthview.world.graphic.EdgeData.TriangleFaceNormalList rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			swap_TriangleFaceNormalList(this.nativeObject.pointer, rhsParamValue);
		}
		native private void insert_ev_uint32_CVector4(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.spatial.math.Vector4 t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CVector4(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.spatial.math.Vector4 OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.spatial.math.Vector4 at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public TriangleFaceNormalList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TriangleFaceNormalList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TriangleFaceNormalList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TriangleFaceNormalList obj = null;
 			if(baseObj instanceof TriangleFaceNormalList)
			{
				obj = (TriangleFaceNormalList)baseObj;
			} else {
				obj = new TriangleFaceNormalList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TriangleFaceNormalList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TriangleFaceNormalListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TriangleFaceNormalList emptyInstance = new TriangleFaceNormalList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// Working vector used when calculating the silhouette.
	/// Use std::vector<ev_char> instead of std::vector<ev_bool> which might implemented
	public static class TriangleLightFacingList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::TriangleLightFacingList", new TriangleLightFacingListClassFactory());
		}

		public TriangleLightFacingList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TriangleLightFacingList", null);
		}

		native private void push_back_ev_char(long pNativeObject, byte t);
		public void push_back(byte t)
		{
			byte tParamValue = t;
			push_back_ev_char(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public BytePointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public BytePointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_ev_char(long pNativeObject, long pos, byte t);
		public void insert(long pos, byte t)
		{
			long posParamValue = pos;
			byte tParamValue = t;
			insert_ev_uint32_ev_char(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public BytePointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public BytePointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public TriangleLightFacingList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TriangleLightFacingList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TriangleLightFacingList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TriangleLightFacingList obj = null;
 			if(baseObj instanceof TriangleLightFacingList)
			{
				obj = (TriangleLightFacingList)baseObj;
			} else {
				obj = new TriangleLightFacingList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TriangleLightFacingList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TriangleLightFacingListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TriangleLightFacingList emptyInstance = new TriangleLightFacingList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TriangleList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::TriangleList", new TriangleListClassFactory());
		}

		public TriangleList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TriangleList", null);
		}

		public TriangleList(long count) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer countPtr = new BasePointer(count);
			list.add("count", countPtr.get());
			Create("TriangleList", list);
		}

		native private void push_back_CTriangle(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.EdgeData.Triangle t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CTriangle(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.Triangle front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.Triangle __returnValue = new com.earthview.world.graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate, "CTriangle");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Triangle)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTriangle");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.Triangle back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.Triangle __returnValue = new com.earthview.world.graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate, "CTriangle");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Triangle)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTriangle");
			}
			return __returnValue;
		}
		native private void swap_TriangleList(long pNativeObject, long rhs);
		public void swap(com.earthview.world.graphic.EdgeData.TriangleList rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			swap_TriangleList(this.nativeObject.pointer, rhsParamValue);
		}
		native private void insert_ev_uint32_CTriangle(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.EdgeData.Triangle t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CTriangle(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.Triangle OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.Triangle __returnValue = new com.earthview.world.graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate, "CTriangle");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Triangle)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTriangle");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.Triangle at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.Triangle __returnValue = new com.earthview.world.graphic.EdgeData.Triangle(CreatedWhenConstruct.CWC_NotToCreate, "CTriangle");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Triangle)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTriangle");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public TriangleList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TriangleList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TriangleList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TriangleList obj = null;
 			if(baseObj instanceof TriangleList)
			{
				obj = (TriangleList)baseObj;
			} else {
				obj = new TriangleList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TriangleList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TriangleListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TriangleList emptyInstance = new TriangleList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class EdgeList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::EdgeList", new EdgeListClassFactory());
		}

		public EdgeList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EdgeList", null);
		}

		native private void push_back_CEdge(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.EdgeData.Edge t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CEdge(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.Edge front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.Edge __returnValue = new com.earthview.world.graphic.EdgeData.Edge(CreatedWhenConstruct.CWC_NotToCreate, "CEdge");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Edge)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdge");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.Edge back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.Edge __returnValue = new com.earthview.world.graphic.EdgeData.Edge(CreatedWhenConstruct.CWC_NotToCreate, "CEdge");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Edge)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdge");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CEdge(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.EdgeData.Edge t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CEdge(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.Edge OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.Edge __returnValue = new com.earthview.world.graphic.EdgeData.Edge(CreatedWhenConstruct.CWC_NotToCreate, "CEdge");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Edge)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdge");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.Edge at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.Edge __returnValue = new com.earthview.world.graphic.EdgeData.Edge(CreatedWhenConstruct.CWC_NotToCreate, "CEdge");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.Edge)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdge");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public EdgeList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EdgeList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EdgeList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EdgeList obj = null;
 			if(baseObj instanceof EdgeList)
			{
				obj = (EdgeList)baseObj;
			} else {
				obj = new EdgeList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EdgeList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EdgeListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EdgeList emptyInstance = new EdgeList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class EdgeGroup extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::EdgeGroup", new EdgeGroupClassFactory());
		}

		public EdgeGroup() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EdgeGroup", null);
		}

		native private long get_vertexSet_void(long pNativeObject);
		public long get_vertexSet()
		{
			long jniValue = get_vertexSet_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_vertexSet_ev_size_t (long pNativeObject, long value);
		public void set_vertexSet(long vertexSet)
		{
			long vertexSetParamValue = vertexSet;
			
			set_vertexSet_ev_size_t(this.nativeObject.pointer, vertexSetParamValue);
		}
		
		native private long get_vertexData_void(long pNativeObject);
		public com.earthview.world.graphic.VertexData get_vertexData()
		{
			long jniValue = get_vertexData_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexData");
			}
			return __returnValue;
		}
		
		native private long get_triStart_void(long pNativeObject);
		public long get_triStart()
		{
			long jniValue = get_triStart_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_triStart_ev_size_t (long pNativeObject, long value);
		public void set_triStart(long triStart)
		{
			long triStartParamValue = triStart;
			
			set_triStart_ev_size_t(this.nativeObject.pointer, triStartParamValue);
		}
		
		native private long get_triCount_void(long pNativeObject);
		public long get_triCount()
		{
			long jniValue = get_triCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_triCount_ev_size_t (long pNativeObject, long value);
		public void set_triCount(long triCount)
		{
			long triCountParamValue = triCount;
			
			set_triCount_ev_size_t(this.nativeObject.pointer, triCountParamValue);
		}
		
		native private long get_edges_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.EdgeList get_edges()
		{
			long jniValue = get_edges_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.EdgeData.EdgeList __returnValue = new com.earthview.world.graphic.EdgeData.EdgeList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "EdgeList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.EdgeList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "EdgeList");
			}
			return __returnValue;
		}
		
		native private void set_edges_EdgeList (long pNativeObject, long value);
		public void set_edges(com.earthview.world.graphic.EdgeData.EdgeList edges)
		{
			long edgesParamValue = edges.nativeObject.pointer;
			
			set_edges_EdgeList(this.nativeObject.pointer, edgesParamValue);
		}
		
		native private long get_localMatrix_void(long pNativeObject);
		public com.earthview.world.spatial.math.Matrix4 get_localMatrix()
		{
			long jniValue = get_localMatrix_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			}
			return __returnValue;
		}
		
		native private void set_localMatrix_CMatrix4 (long pNativeObject, long value);
		public void set_localMatrix(com.earthview.world.spatial.math.Matrix4 localMatrix)
		{
			long localMatrixParamValue = localMatrix.nativeObject.pointer;
			
			set_localMatrix_CMatrix4(this.nativeObject.pointer, localMatrixParamValue);
		}
		
		public EdgeGroup(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EdgeGroup(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EdgeGroup fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EdgeGroup obj = null;
 			if(baseObj instanceof EdgeGroup)
			{
				obj = (EdgeGroup)baseObj;
			} else {
				obj = new EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EdgeGroup");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EdgeGroupClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EdgeGroup emptyInstance = new EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class EdgeGroupList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeData::EdgeGroupList", new EdgeGroupListClassFactory());
		}

		public EdgeGroupList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("EdgeGroupList", null);
		}

		native private void push_back_EdgeGroup(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.EdgeData.EdgeGroup t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_EdgeGroup(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.EdgeGroup front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.EdgeGroup __returnValue = new com.earthview.world.graphic.EdgeData.EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate, "EdgeGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.EdgeGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "EdgeGroup");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData.EdgeGroup back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.EdgeData.EdgeGroup __returnValue = new com.earthview.world.graphic.EdgeData.EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate, "EdgeGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.EdgeGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "EdgeGroup");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_EdgeGroup(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.EdgeData.EdgeGroup t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_EdgeGroup(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.EdgeGroup OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.EdgeGroup __returnValue = new com.earthview.world.graphic.EdgeData.EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate, "EdgeGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.EdgeGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "EdgeGroup");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.EdgeData.EdgeGroup at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.EdgeData.EdgeGroup __returnValue = new com.earthview.world.graphic.EdgeData.EdgeGroup(CreatedWhenConstruct.CWC_NotToCreate, "EdgeGroup");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData.EdgeGroup)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "EdgeGroup");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public EdgeGroupList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public EdgeGroupList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static EdgeGroupList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			EdgeGroupList obj = null;
 			if(baseObj instanceof EdgeGroupList)
			{
				obj = (EdgeGroupList)baseObj;
			} else {
				obj = new EdgeGroupList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "EdgeGroupList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class EdgeGroupListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			EdgeGroupList emptyInstance = new EdgeGroupList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_triangles_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData.TriangleList get_triangles()
	{
		long jniValue = get_triangles_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.EdgeData.TriangleList __returnValue = new com.earthview.world.graphic.EdgeData.TriangleList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TriangleList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData.TriangleList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TriangleList");
		}
		return __returnValue;
	}
	
	native private void set_triangles_TriangleList (long pNativeObject, long value);
	public void set_triangles(com.earthview.world.graphic.EdgeData.TriangleList triangles)
	{
		long trianglesParamValue = triangles.nativeObject.pointer;
		
		set_triangles_TriangleList(this.nativeObject.pointer, trianglesParamValue);
	}
	
	native private long get_triangleFaceNormals_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData.TriangleFaceNormalList get_triangleFaceNormals()
	{
		long jniValue = get_triangleFaceNormals_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.EdgeData.TriangleFaceNormalList __returnValue = new com.earthview.world.graphic.EdgeData.TriangleFaceNormalList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TriangleFaceNormalList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData.TriangleFaceNormalList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TriangleFaceNormalList");
		}
		return __returnValue;
	}
	
	native private void set_triangleFaceNormals_TriangleFaceNormalList (long pNativeObject, long value);
	public void set_triangleFaceNormals(com.earthview.world.graphic.EdgeData.TriangleFaceNormalList triangleFaceNormals)
	{
		long triangleFaceNormalsParamValue = triangleFaceNormals.nativeObject.pointer;
		
		set_triangleFaceNormals_TriangleFaceNormalList(this.nativeObject.pointer, triangleFaceNormalsParamValue);
	}
	
	native private long get_triangleLightFacings_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData.TriangleLightFacingList get_triangleLightFacings()
	{
		long jniValue = get_triangleLightFacings_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.EdgeData.TriangleLightFacingList __returnValue = new com.earthview.world.graphic.EdgeData.TriangleLightFacingList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TriangleLightFacingList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData.TriangleLightFacingList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TriangleLightFacingList");
		}
		return __returnValue;
	}
	
	native private void set_triangleLightFacings_TriangleLightFacingList (long pNativeObject, long value);
	public void set_triangleLightFacings(com.earthview.world.graphic.EdgeData.TriangleLightFacingList triangleLightFacings)
	{
		long triangleLightFacingsParamValue = triangleLightFacings.nativeObject.pointer;
		
		set_triangleLightFacings_TriangleLightFacingList(this.nativeObject.pointer, triangleLightFacingsParamValue);
	}
	
	native private long get_edgeGroups_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData.EdgeGroupList get_edgeGroups()
	{
		long jniValue = get_edgeGroups_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.EdgeData.EdgeGroupList __returnValue = new com.earthview.world.graphic.EdgeData.EdgeGroupList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "EdgeGroupList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData.EdgeGroupList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EdgeGroupList");
		}
		return __returnValue;
	}
	
	native private void set_edgeGroups_EdgeGroupList (long pNativeObject, long value);
	public void set_edgeGroups(com.earthview.world.graphic.EdgeData.EdgeGroupList edgeGroups)
	{
		long edgeGroupsParamValue = edgeGroups.nativeObject.pointer;
		
		set_edgeGroups_EdgeGroupList(this.nativeObject.pointer, edgeGroupsParamValue);
	}
	
	native private boolean get_isClosed_void(long pNativeObject);
	public boolean get_isClosed()
	{
		boolean jniValue = get_isClosed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isClosed_ev_bool (long pNativeObject, boolean value);
	public void set_isClosed(boolean isClosed)
	{
		boolean isClosedParamValue = isClosed;
		
		set_isClosed_ev_bool(this.nativeObject.pointer, isClosedParamValue);
	}
	
	native private void updateTriangleLightFacing_CVector4(long pNativeObject, long lightPos);
	public void updateTriangleLightFacing(com.earthview.world.spatial.math.Vector4 lightPos)
	{
		long lightPosParamValue = lightPos.nativeObject.pointer;
		updateTriangleLightFacing_CVector4(this.nativeObject.pointer, lightPosParamValue);
	}
	native private void updateFaceNormals_ev_size_t_CHardwareVertexBufferSharedPtr(long pNativeObject, long vertexSet, long positionBuffer);
	public void updateFaceNormals(long vertexSet, com.earthview.world.graphic.HardwareVertexBufferSharedPtr positionBuffer)
	{
		long vertexSetParamValue = vertexSet;
		long positionBufferParamValue = positionBuffer.nativeObject.pointer;
		updateFaceNormals_ev_size_t_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, vertexSetParamValue, positionBufferParamValue);
	}
	native private void log_CLogger(long pNativeObject, long ptLog);
	/// Debugging method
	public void log(com.earthview.world.core.Logger ptLog)
	{
		long ptLogParamValue = (ptLog == null ? 0L : ptLog.nativeObject.pointer);
		log_CLogger(this.nativeObject.pointer, ptLogParamValue);
	}
	public EdgeData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EdgeData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EdgeData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EdgeData obj = null;
 		if(baseObj instanceof EdgeData)
		{
			obj = (EdgeData)baseObj;
		} else {
			obj = new EdgeData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEdgeData");
			obj.increaseCast();
		}

		return obj;
	}
}
