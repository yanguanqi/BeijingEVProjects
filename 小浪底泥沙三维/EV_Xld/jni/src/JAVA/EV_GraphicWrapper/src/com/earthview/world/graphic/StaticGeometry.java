package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 提前转换和批处理网格以便在场景中高效的作为静态几何体来使用
 */
public class StaticGeometry extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry", new StaticGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCStaticGeometryProxy", new StaticGeometryClassFactory());
	}

	public static class OptimisedSubMeshStaticGeometry extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry", new OptimisedSubMeshStaticGeometryClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public OptimisedSubMeshStaticGeometry() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("COptimisedSubMeshStaticGeometry", null);
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
		
		native private void set_vertexData_CVertexData (long pNativeObject, long value);
		public void set_vertexData(com.earthview.world.graphic.VertexData vertexData)
		{
			long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
			
			set_vertexData_CVertexData(this.nativeObject.pointer, vertexDataParamValue);
		}
		
		native private long get_indexData_void(long pNativeObject);
		public com.earthview.world.graphic.IndexData get_indexData()
		{
			long jniValue = get_indexData_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CIndexData");
			}
			return __returnValue;
		}
		
		native private void set_indexData_CIndexData (long pNativeObject, long value);
		public void set_indexData(com.earthview.world.graphic.IndexData indexData)
		{
			long indexDataParamValue = (indexData == null ? 0L : indexData.nativeObject.pointer);
			
			set_indexData_CIndexData(this.nativeObject.pointer, indexDataParamValue);
		}
		
		public OptimisedSubMeshStaticGeometry(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OptimisedSubMeshStaticGeometry(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OptimisedSubMeshStaticGeometry fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OptimisedSubMeshStaticGeometry obj = null;
 			if(baseObj instanceof OptimisedSubMeshStaticGeometry)
			{
				obj = (OptimisedSubMeshStaticGeometry)baseObj;
			} else {
				obj = new OptimisedSubMeshStaticGeometry(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "COptimisedSubMeshStaticGeometry");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OptimisedSubMeshStaticGeometryClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OptimisedSubMeshStaticGeometry emptyInstance = new OptimisedSubMeshStaticGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OptimisedSubMeshStaticGeometryList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList", new OptimisedSubMeshStaticGeometryListClassFactory());
		}

		public OptimisedSubMeshStaticGeometryList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OptimisedSubMeshStaticGeometryList", null);
		}

		native private void push_back_COptimisedSubMeshStaticGeometry(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_COptimisedSubMeshStaticGeometry(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void push_front_COptimisedSubMeshStaticGeometry(long pNativeObject, long ref_t);
		public void push_front(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_front_COptimisedSubMeshStaticGeometry(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_COptimisedSubMeshStaticGeometry(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_COptimisedSubMeshStaticGeometry(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private void remove_COptimisedSubMeshStaticGeometry(long pNativeObject, long val);
		public void remove(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.OptimisedSubMeshStaticGeometry> val)
		{
			long valParamValue = val.nativeObject.pointer;
			remove_COptimisedSubMeshStaticGeometry(this.nativeObject.pointer, valParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
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
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public OptimisedSubMeshStaticGeometryList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OptimisedSubMeshStaticGeometryList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OptimisedSubMeshStaticGeometryList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OptimisedSubMeshStaticGeometryList obj = null;
 			if(baseObj instanceof OptimisedSubMeshStaticGeometryList)
			{
				obj = (OptimisedSubMeshStaticGeometryList)baseObj;
			} else {
				obj = new OptimisedSubMeshStaticGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OptimisedSubMeshStaticGeometryList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OptimisedSubMeshStaticGeometryListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OptimisedSubMeshStaticGeometryList emptyInstance = new OptimisedSubMeshStaticGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshLodStaticGeometryLink extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink", new SubMeshLodStaticGeometryLinkClassFactory());
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
		
		native private void set_vertexData_CVertexData (long pNativeObject, long value);
		public void set_vertexData(com.earthview.world.graphic.VertexData vertexData)
		{
			long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
			
			set_vertexData_CVertexData(this.nativeObject.pointer, vertexDataParamValue);
		}
		
		native private long get_indexData_void(long pNativeObject);
		public com.earthview.world.graphic.IndexData get_indexData()
		{
			long jniValue = get_indexData_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CIndexData");
			}
			return __returnValue;
		}
		
		native private void set_indexData_CIndexData (long pNativeObject, long value);
		public void set_indexData(com.earthview.world.graphic.IndexData indexData)
		{
			long indexDataParamValue = (indexData == null ? 0L : indexData.nativeObject.pointer);
			
			set_indexData_CIndexData(this.nativeObject.pointer, indexDataParamValue);
		}
		
		public SubMeshLodStaticGeometryLink() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshLodStaticGeometryLink", null);
		}

		public SubMeshLodStaticGeometryLink(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshLodStaticGeometryLink(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshLodStaticGeometryLink fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshLodStaticGeometryLink obj = null;
 			if(baseObj instanceof SubMeshLodStaticGeometryLink)
			{
				obj = (SubMeshLodStaticGeometryLink)baseObj;
			} else {
				obj = new SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshLodStaticGeometryLink");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshLodStaticGeometryLinkClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshLodStaticGeometryLink emptyInstance = new SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef vector<EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink> EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList;
	public static class SubMeshLodStaticGeometryLinkList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList", new SubMeshLodStaticGeometryLinkListClassFactory());
		}

		public SubMeshLodStaticGeometryLinkList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshLodStaticGeometryLinkList", null);
		}

		native private void push_back_SubMeshLodStaticGeometryLink(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_SubMeshLodStaticGeometryLink(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLink");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLink");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_SubMeshLodStaticGeometryLink(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_SubMeshLodStaticGeometryLink(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLink");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLink");
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
		public SubMeshLodStaticGeometryLinkList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshLodStaticGeometryLinkList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshLodStaticGeometryLinkList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshLodStaticGeometryLinkList obj = null;
 			if(baseObj instanceof SubMeshLodStaticGeometryLinkList)
			{
				obj = (SubMeshLodStaticGeometryLinkList)baseObj;
			} else {
				obj = new SubMeshLodStaticGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshLodStaticGeometryLinkList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshLodStaticGeometryLinkListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshLodStaticGeometryLinkList emptyInstance = new SubMeshLodStaticGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshStaticGeometryLookup extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup", new SubMeshStaticGeometryLookupClassFactory());
		}

		public SubMeshStaticGeometryLookup() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshStaticGeometryLookup", null);
		}

		native private boolean push_CSubMesh_SubMeshLodStaticGeometryLinkList(long pNativeObject, long ref_key, long ref_val);
		public boolean push(NativeObjectPointer<com.earthview.world.graphic.SubMesh> ref_key, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList> ref_val)
		{
			long ref_keyParamValue = ref_key.nativeObject.pointer;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_CSubMesh_SubMeshLodStaticGeometryLinkList(this.nativeObject.pointer, ref_keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_CSubMesh(long pNativeObject, long key);
		public boolean exist(NativeObjectPointer<com.earthview.world.graphic.SubMesh> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			boolean returnValue = exist_CSubMesh(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_CSubMesh(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList> OperatorIndex(NativeObjectPointer<com.earthview.world.graphic.SubMesh> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = OperatorIndex_CSubMesh(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_CSubMesh(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList> get(NativeObjectPointer<com.earthview.world.graphic.SubMesh> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = get_CSubMesh(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_CSubMesh(long pNativeObject, long key);
		public void erase(NativeObjectPointer<com.earthview.world.graphic.SubMesh> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			erase_CSubMesh(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public SubMeshStaticGeometryLookup(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshStaticGeometryLookup(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshStaticGeometryLookup fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshStaticGeometryLookup obj = null;
 			if(baseObj instanceof SubMeshStaticGeometryLookup)
			{
				obj = (SubMeshStaticGeometryLookup)baseObj;
			} else {
				obj = new SubMeshStaticGeometryLookup(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshStaticGeometryLookup");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshStaticGeometryLookupClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshStaticGeometryLookup emptyInstance = new SubMeshStaticGeometryLookup(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QueuedStaticSubMesh extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh", new QueuedStaticSubMeshClassFactory());
		}

		public QueuedStaticSubMesh() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedStaticSubMesh", null);
		}

		native private long get_submesh_void(long pNativeObject);
		public com.earthview.world.graphic.SubMesh get_submesh()
		{
			long jniValue = get_submesh_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SubMesh)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSubMesh");
			}
			return __returnValue;
		}
		
		native private void set_submesh_CSubMesh (long pNativeObject, long value);
		public void set_submesh(com.earthview.world.graphic.SubMesh submesh)
		{
			long submeshParamValue = (submesh == null ? 0L : submesh.nativeObject.pointer);
			
			set_submesh_CSubMesh(this.nativeObject.pointer, submeshParamValue);
		}
		
		native private long get_geometryLodList_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList get_geometryLodList()
		{
			long jniValue = get_geometryLodList_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLinkList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLinkList");
			}
			return __returnValue;
		}
		
		native private void set_geometryLodList_SubMeshLodStaticGeometryLinkList (long pNativeObject, long value);
		public void set_geometryLodList(com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLinkList geometryLodList)
		{
			long geometryLodListParamValue = (geometryLodList == null ? 0L : geometryLodList.nativeObject.pointer);
			
			set_geometryLodList_SubMeshLodStaticGeometryLinkList(this.nativeObject.pointer, geometryLodListParamValue);
		}
		
		native private String get_materialName_void(long pNativeObject);
		public String get_materialName()
		{
			String jniValue = get_materialName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_materialName_EVString (long pNativeObject, String value);
		public void set_materialName(String materialName)
		{
			String materialNameParamValue = materialName;
			
			set_materialName_EVString(this.nativeObject.pointer, materialNameParamValue);
		}
		
		native private long get_position_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_position()
		{
			long jniValue = get_position_void(this.nativeObject.pointer);
			
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
		
		native private void set_position_CVector3 (long pNativeObject, long value);
		public void set_position(com.earthview.world.spatial.math.Vector3 position)
		{
			long positionParamValue = position.nativeObject.pointer;
			
			set_position_CVector3(this.nativeObject.pointer, positionParamValue);
		}
		
		native private long get_orientation_void(long pNativeObject);
		public com.earthview.world.spatial.math.Quaternion get_orientation()
		{
			long jniValue = get_orientation_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			}
			return __returnValue;
		}
		
		native private void set_orientation_CQuaternion (long pNativeObject, long value);
		public void set_orientation(com.earthview.world.spatial.math.Quaternion orientation)
		{
			long orientationParamValue = orientation.nativeObject.pointer;
			
			set_orientation_CQuaternion(this.nativeObject.pointer, orientationParamValue);
		}
		
		native private long get_scale_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_scale()
		{
			long jniValue = get_scale_void(this.nativeObject.pointer);
			
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
		
		native private void set_scale_CVector3 (long pNativeObject, long value);
		public void set_scale(com.earthview.world.spatial.math.Vector3 scale)
		{
			long scaleParamValue = scale.nativeObject.pointer;
			
			set_scale_CVector3(this.nativeObject.pointer, scaleParamValue);
		}
		
		native private long get_worldBounds_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox get_worldBounds()
		{
			long jniValue = get_worldBounds_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_worldBounds_CAxisAlignedBox (long pNativeObject, long value);
		public void set_worldBounds(com.earthview.world.spatial.math.AxisAlignedBox worldBounds)
		{
			long worldBoundsParamValue = worldBounds.nativeObject.pointer;
			
			set_worldBounds_CAxisAlignedBox(this.nativeObject.pointer, worldBoundsParamValue);
		}
		
		public QueuedStaticSubMesh(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedStaticSubMesh(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedStaticSubMesh fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedStaticSubMesh obj = null;
 			if(baseObj instanceof QueuedStaticSubMesh)
			{
				obj = (QueuedStaticSubMesh)baseObj;
			} else {
				obj = new QueuedStaticSubMesh(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedStaticSubMesh");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedStaticSubMeshClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedStaticSubMesh emptyInstance = new QueuedStaticSubMesh(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef vector<EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*> QueuedStaticSubMeshList;
	public static class QueuedStaticSubMeshList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList", new QueuedStaticSubMeshListClassFactory());
		}

		public QueuedStaticSubMeshList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedStaticSubMeshList", null);
		}

		native private void push_back_QueuedStaticSubMesh(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_QueuedStaticSubMesh(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_QueuedStaticSubMesh(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_QueuedStaticSubMesh(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh>(new InstancePointer(returnValue));
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
		public QueuedStaticSubMeshList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedStaticSubMeshList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedStaticSubMeshList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedStaticSubMeshList obj = null;
 			if(baseObj instanceof QueuedStaticSubMeshList)
			{
				obj = (QueuedStaticSubMeshList)baseObj;
			} else {
				obj = new QueuedStaticSubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedStaticSubMeshList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedStaticSubMeshListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedStaticSubMeshList emptyInstance = new QueuedStaticSubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QueuedStaticGeometry extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry", new QueuedStaticGeometryClassFactory());
		}

		public QueuedStaticGeometry() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedStaticGeometry", null);
		}

		native private long get_geometry_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink get_geometry()
		{
			long jniValue = get_geometry_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink __returnValue = new com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodStaticGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodStaticGeometryLink");
			}
			return __returnValue;
		}
		
		native private void set_geometry_SubMeshLodStaticGeometryLink (long pNativeObject, long value);
		public void set_geometry(com.earthview.world.graphic.StaticGeometry.SubMeshLodStaticGeometryLink geometry)
		{
			long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
			
			set_geometry_SubMeshLodStaticGeometryLink(this.nativeObject.pointer, geometryParamValue);
		}
		
		native private long get_position_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_position()
		{
			long jniValue = get_position_void(this.nativeObject.pointer);
			
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
		
		native private void set_position_CVector3 (long pNativeObject, long value);
		public void set_position(com.earthview.world.spatial.math.Vector3 position)
		{
			long positionParamValue = position.nativeObject.pointer;
			
			set_position_CVector3(this.nativeObject.pointer, positionParamValue);
		}
		
		native private long get_orientation_void(long pNativeObject);
		public com.earthview.world.spatial.math.Quaternion get_orientation()
		{
			long jniValue = get_orientation_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			}
			return __returnValue;
		}
		
		native private void set_orientation_CQuaternion (long pNativeObject, long value);
		public void set_orientation(com.earthview.world.spatial.math.Quaternion orientation)
		{
			long orientationParamValue = orientation.nativeObject.pointer;
			
			set_orientation_CQuaternion(this.nativeObject.pointer, orientationParamValue);
		}
		
		native private long get_scale_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_scale()
		{
			long jniValue = get_scale_void(this.nativeObject.pointer);
			
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
		
		native private void set_scale_CVector3 (long pNativeObject, long value);
		public void set_scale(com.earthview.world.spatial.math.Vector3 scale)
		{
			long scaleParamValue = scale.nativeObject.pointer;
			
			set_scale_CVector3(this.nativeObject.pointer, scaleParamValue);
		}
		
		public QueuedStaticGeometry(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedStaticGeometry(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedStaticGeometry fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedStaticGeometry obj = null;
 			if(baseObj instanceof QueuedStaticGeometry)
			{
				obj = (QueuedStaticGeometry)baseObj;
			} else {
				obj = new QueuedStaticGeometry(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedStaticGeometry");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedStaticGeometryClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedStaticGeometry emptyInstance = new QueuedStaticGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef vector<QueuedGeometry*> QueuedStaticGeometryList;
	public static class QueuedStaticGeometryList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList", new QueuedStaticGeometryListClassFactory());
		}

		public QueuedStaticGeometryList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedStaticGeometryList", null);
		}

		native private void push_back_QueuedStaticGeometry(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_QueuedStaticGeometry(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_QueuedStaticGeometry(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_QueuedStaticGeometry(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry>(new InstancePointer(returnValue));
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
		public QueuedStaticGeometryList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedStaticGeometryList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedStaticGeometryList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedStaticGeometryList obj = null;
 			if(baseObj instanceof QueuedStaticGeometryList)
			{
				obj = (QueuedStaticGeometryList)baseObj;
			} else {
				obj = new QueuedStaticGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedStaticGeometryList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedStaticGeometryListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedStaticGeometryList emptyInstance = new QueuedStaticGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// forward declarations
	public static class StaticGeometryBucket extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket", new StaticGeometryBucketClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::JCStaticGeometryBucketProxy", new StaticGeometryBucketClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 
		 * @param formatString 
		 * @param vData 顶点数据
		 * @param iData 顶点的索引数据信息
		 */
		public StaticGeometryBucket(com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket ref_parent, String formatString, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer formatStringPtr = new BasePointer(formatString);
			list.add("formatString", formatStringPtr.get());
			BasePointer vDataPtr = new BasePointer(vData);
			list.add("vData", vDataPtr.get());
			BasePointer iDataPtr = new BasePointer(iData);
			list.add("iData", iDataPtr.get());
			Create("JCStaticGeometryBucketProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.StaticGeometry$StaticGeometryBucket".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticMaterialBucket");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticMaterialBucket");
			}
			return __returnValue;
		}
		native private long getVertexData_void(long pNativeObject);
		/**
		 * 获得这个几何体的顶点数据
		 * @param  
		 */
		public com.earthview.world.graphic.VertexData getVertexData()
		{
			long returnValue = getVertexData_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long getIndexData_void(long pNativeObject);
		/**
		 * 获得这个几何体的索引数据
		 * @param  
		 */
		public com.earthview.world.graphic.IndexData getIndexData()
		{
			long returnValue = getIndexData_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CIndexData");
			}
			return __returnValue;
		}
		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获得一个渲染实体使用的材质技术指针
		 * @param  
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			long returnValue = getMaterial_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long getMaterial_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
		{
			long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}

		native private long getTechnique_void(long pNativeObject);
		/**
		 * 获得技术
		 * @param  
		 */
		public com.earthview.world.graphic.Technique getTechnique()
		{
			long returnValue = getTechnique_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		native private long getTechnique_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.Technique getTechnique_NoVirtual()
		{
			long returnValue = getTechnique_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}

		native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
		/**
		 * 获得渲染操作
		 * @param op 渲染操作
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
		}
		native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
		protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得球体坐标的世界矩阵
		 * @param xform 四维矩阵
		 */
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}
		native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
		protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}

		native private long getLights_void(long pNativeObject);
		/**
		 * 获得光源
		 * @param  
		 * @return 返回光源对象
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			long returnValue = getLights_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}
		native private long getLights_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.LightList getLights_NoVirtual()
		{
			long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}

		native private boolean getCastsShadows_void(long pNativeObject);
		/**
		 * 能否获得阴影
		 * @param  
		 */
		public boolean getCastsShadows()
		{
			boolean returnValue = getCastsShadows_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean getCastsShadows_void_NoVirtual(long pNativeObject);
		protected boolean getCastsShadows_NoVirtual()
		{
			boolean returnValue = getCastsShadows_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private boolean assign_QueuedStaticGeometry(long pNativeObject, long qsm);
		public boolean assign(com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry qsm)
		{
			long qsmParamValue = (qsm == null ? 0L : qsm.nativeObject.pointer);
			boolean returnValue = assign_QueuedStaticGeometry(this.nativeObject.pointer, qsmParamValue);
			return returnValue;
		}
		native private void build_ev_bool(long pNativeObject, boolean stencilShadows);
		//// Build
		public void build(boolean stencilShadows)
		{
			boolean stencilShadowsParamValue = stencilShadows;
			build_ev_bool(this.nativeObject.pointer, stencilShadowsParamValue);
		}
		public StaticGeometryBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticGeometryBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 渲染开始时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 * @return 如果自动执行渲染过程返回true,手动执行返回false
		 */
		public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			return super.preRender_NoVirtual(sm, rsys);
		}
		/**
		 * 渲染完成时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 */
		public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			super.postRender_NoVirtual(sm, rsys);
		}
		/**
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
		}
		/**
		 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
		 * @param constantEntry CAutoConstantEntry的别名
		 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
		}
		/**
		 * 设置多边形渲染方式是否可重写
		 * @param override 设置参数
		 * @return true可以超越，false不可以
		 */
		public void setPolygonModeOverrideable(boolean override)
		{
			super.setPolygonModeOverrideable_NoVirtual(override);
		}
		/**
		 * 获得多边形渲染方式是否可重写
		 * @param  
		 */
		public boolean getPolygonModeOverrideable()
		{
			return super.getPolygonModeOverrideable_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数
		 * @param  
		 */
		public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
		{
			super.setCustomAmbient_NoVirtual(ambient);
		}
		/**
		 * 获取自定义环境光系数
		 * @param  
		 */
		public com.earthview.world.graphic.ColourValue getCustomAmbient()
		{
			return super.getCustomAmbient_NoVirtual();
		}
		/**
		 * 获取自定义环境光系数是否启用
		 * @param  
		 */
		public boolean getCustomAmbientEnabled()
		{
			return super.getCustomAmbientEnabled_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数是否启用
		 * @param  
		 */
		public void setCustomAmbientEnabled(boolean enabled)
		{
			super.setCustomAmbientEnabled_NoVirtual(enabled);
		}
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			return super.getMovableObject_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			return super.existListener_NoVirtual(listener);
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public long getListenerCount()
		{
			return super.getListenerCount_NoVirtual();
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 设置渲染系统的私有数据
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
		{
			return super.getRenderSystemData_NoVirtual();
		}
		/**
		 * 获得渲染系统的私有数据
		 * @param  
		 */
		public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
		{
			super.setRenderSystemData_NoVirtual(ref_val);
		}
		
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_getTechnique_void(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
		native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
		native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
		native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
		native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
		native protected void register_getCustomAmbient_void(long pNativeObject, String method);
		native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
		native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_getMovableObject_void(long pNativeObject, String method);
		native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_getRenderSystemData_void(long pNativeObject, String method);
		native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
				this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
				this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
				this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
				this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
				this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
				this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
				this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
				this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
				this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
				this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
				this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
				this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
				this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
			}
		}
		
		public static StaticGeometryBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticGeometryBucket obj = null;
 			if(baseObj instanceof StaticGeometryBucket)
			{
				obj = (StaticGeometryBucket)baseObj;
			} else {
				obj = new StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CStaticGeometryBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticGeometryBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticGeometryBucket emptyInstance = new StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class StaticMaterialBucket extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket", new StaticMaterialBucketClassFactory());
		}

		//// list of Geometry Buckets in this region
		///typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList;
		public static class StaticGeometryBucketList extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList", new StaticGeometryBucketListClassFactory());
			}

			public StaticGeometryBucketList() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("StaticGeometryBucketList", null);
			}

			native private void push_back_CStaticGeometryBucket(long pNativeObject, long ref_t);
			public void push_back(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> ref_t)
			{
				long ref_tParamValue = ref_t.nativeObject.pointer;
				push_back_CStaticGeometryBucket(this.nativeObject.pointer, ref_tParamValue);
			}
			native private void pop_back_void(long pNativeObject);
			public void pop_back()
			{
				pop_back_void(this.nativeObject.pointer);
			}
			native private long front_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> front()
			{
				long returnValue = front_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long back_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> back()
			{
				long returnValue = back_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void insert_ev_uint32_CStaticGeometryBucket(long pNativeObject, long pos, long ref_t);
			public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> ref_t)
			{
				long posParamValue = pos;
				long ref_tParamValue = ref_t.nativeObject.pointer;
				insert_ev_uint32_CStaticGeometryBucket(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> OperatorIndex(long n)
			{
				long nParamValue = n;
				long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long at_ev_size_t(long pNativeObject, long n);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> at(long n)
			{
				long nParamValue = n;
				long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket>(new InstancePointer(returnValue));
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
			public StaticGeometryBucketList(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticGeometryBucketList(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticGeometryBucketList fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticGeometryBucketList obj = null;
 				if(baseObj instanceof StaticGeometryBucketList)
				{
					obj = (StaticGeometryBucketList)baseObj;
				} else {
					obj = new StaticGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticGeometryBucketList");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticGeometryBucketListClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticGeometryBucketList emptyInstance = new StaticGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public StaticMaterialBucket(com.earthview.world.graphic.StaticGeometry.StaticLODBucket ref_parent, String materialName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer materialNamePtr = new BasePointer(materialName);
			list.add("materialName", materialNamePtr.get());
			Create("CStaticMaterialBucket", list);
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticLODBucket getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticLODBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticLODBucket");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticLODBucket");
			}
			return __returnValue;
		}
		native private long getMaterialName_void(long pNativeObject);
		//// Get the material name
		public StringPointer getMaterialName()
		{
			long returnValue = getMaterialName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void assign_QueuedStaticGeometry(long pNativeObject, long qsm);
		//// Assign geometry to this bucket
		public void assign(com.earthview.world.graphic.StaticGeometry.QueuedStaticGeometry qsm)
		{
			long qsmParamValue = (qsm == null ? 0L : qsm.nativeObject.pointer);
			assign_QueuedStaticGeometry(this.nativeObject.pointer, qsmParamValue);
		}
		native private void build_ev_bool(long pNativeObject, boolean stencilShadows);
		//// Build
		public void build(boolean stencilShadows)
		{
			boolean stencilShadowsParamValue = stencilShadows;
			build_ev_bool(this.nativeObject.pointer, stencilShadowsParamValue);
		}
		native private void addRenderables_CRenderQueue_ev_uint8_Real(long pNativeObject, long queue, short group, double lodValue);
		//// Add children to the render queue
		public void addRenderables(com.earthview.world.graphic.RenderQueue queue, short group, double lodValue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			short groupParamValue = group;
			double lodValueParamValue = lodValue;
			addRenderables_CRenderQueue_ev_uint8_Real(this.nativeObject.pointer, queueParamValue, groupParamValue, lodValueParamValue);
		}
		native private long getMaterial_void(long pNativeObject);
		//// Get the material for this bucket
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			long returnValue = getMaterial_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		//// Iterator over geometry
		////typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList> StaticGeometryIterator;
		public static class StaticGeometryBucketIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator", new StaticGeometryBucketIteratorClassFactory());
			}

			public StaticGeometryBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketList vec) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer vecPtr = new BasePointer(vec);
				list.add("vec", vecPtr.get());
				Create("StaticGeometryBucketIterator", list);
			}

			public StaticGeometryBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketIterator rhs) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer rhsPtr = new BasePointer(rhs);
				list.add("rhs", rhsPtr.get());
				Create("StaticGeometryBucketIterator", list);
			}

			native private boolean hasMoreElements_void(long pNativeObject);
			public boolean hasMoreElements()
			{
				boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private void moveNext_void(long pNativeObject);
			public void moveNext()
			{
				moveNext_void(this.nativeObject.pointer);
			}
			native private long getCurrent_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticGeometryBucket");
				}
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticGeometryBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticGeometryBucket");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticGeometryBucket");
				}
				return __returnValue;
			}
			public StaticGeometryBucketIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticGeometryBucketIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticGeometryBucketIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticGeometryBucketIterator obj = null;
 				if(baseObj instanceof StaticGeometryBucketIterator)
				{
					obj = (StaticGeometryBucketIterator)baseObj;
				} else {
					obj = new StaticGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticGeometryBucketIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticGeometryBucketIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticGeometryBucketIterator emptyInstance = new StaticGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long getGeometryIterator_void(long pNativeObject);
		//// Get an iterator over the contained geometry
		public com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketIterator getGeometryIterator()
		{
			long returnValue = getGeometryIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketIterator __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "StaticGeometryBucketIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket.StaticGeometryBucketIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "StaticGeometryBucketIterator");
			}
			return __returnValue;
		}
		native private long getCurrentTechnique_void(long pNativeObject);
		//// Get the current EarthView::World::Graphic::CTechnique
		public com.earthview.world.graphic.Technique getCurrentTechnique()
		{
			long returnValue = getCurrentTechnique_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		public StaticMaterialBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticMaterialBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StaticMaterialBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticMaterialBucket obj = null;
 			if(baseObj instanceof StaticMaterialBucket)
			{
				obj = (StaticMaterialBucket)baseObj;
			} else {
				obj = new StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CStaticMaterialBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticMaterialBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticMaterialBucket emptyInstance = new StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class StaticLODBucket extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket", new StaticLODBucketClassFactory());
		}

		//// Lookup of CMaterial Buckets in this region
		///typedef map<EVString, EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap;
		public static class StaticMaterialBucketMap extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap", new StaticMaterialBucketMapClassFactory());
			}

			public StaticMaterialBucketMap() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("StaticMaterialBucketMap", null);
			}

			native private boolean push_EVString_CStaticMaterialBucket(long pNativeObject, String key, long ref_val);
			public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> ref_val)
			{
				String keyParamValue = key;
				long ref_valParamValue = ref_val.nativeObject.pointer;
				boolean returnValue = push_EVString_CStaticMaterialBucket(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
				return returnValue;
			}
			native private boolean exist_EVString(long pNativeObject, String key);
			public boolean exist(String key)
			{
				String keyParamValue = key;
				boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
				return returnValue;
			}
			native private long OperatorIndex_EVString(long pNativeObject, String key);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> OperatorIndex(String key)
			{
				String keyParamValue = key;
				long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long get_EVString(long pNativeObject, String key);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> get(String key)
			{
				String keyParamValue = key;
				long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void erase_EVString(long pNativeObject, String key);
			public void erase(String key)
			{
				String keyParamValue = key;
				erase_EVString(this.nativeObject.pointer, keyParamValue);
			}
			native private long size_void(long pNativeObject);
			public long size()
			{
				long returnValue = size_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private void clear_void(long pNativeObject);
			public void clear()
			{
				clear_void(this.nativeObject.pointer);
			}
			native private boolean empty_void(long pNativeObject);
			public boolean empty()
			{
				boolean returnValue = empty_void(this.nativeObject.pointer);
				return returnValue;
			}
			public StaticMaterialBucketMap(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticMaterialBucketMap(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticMaterialBucketMap fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticMaterialBucketMap obj = null;
 				if(baseObj instanceof StaticMaterialBucketMap)
				{
					obj = (StaticMaterialBucketMap)baseObj;
				} else {
					obj = new StaticMaterialBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticMaterialBucketMap");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticMaterialBucketMapClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticMaterialBucketMap emptyInstance = new StaticMaterialBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public StaticLODBucket(com.earthview.world.graphic.StaticGeometry.StaticRegion ref_parent, int lod, double lodValue) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer lodPtr = new BasePointer(lod);
			list.add("lod", lodPtr.get());
			BasePointer lodValuePtr = new BasePointer(lodValue);
			list.add("lodValue", lodValuePtr.get());
			Create("CStaticLODBucket", list);
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegion getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
			}
			return __returnValue;
		}
		native private int getLod_void(long pNativeObject);
		//// Get the lod index
		public int getLod()
		{
			int returnValue = getLod_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private double getLodValue_void(long pNativeObject);
		//// Get the lod value
		public double getLodValue()
		{
			double returnValue = getLodValue_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void assign_QueuedStaticSubMesh_ev_uint16(long pNativeObject, long qsm, int atLod);
		public void assign(com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh qsm, int atLod)
		{
			long qsmParamValue = (qsm == null ? 0L : qsm.nativeObject.pointer);
			int atLodParamValue = atLod;
			assign_QueuedStaticSubMesh_ev_uint16(this.nativeObject.pointer, qsmParamValue, atLodParamValue);
		}
		native private void build_ev_bool(long pNativeObject, boolean stencilShadows);
		//// Build
		public void build(boolean stencilShadows)
		{
			boolean stencilShadowsParamValue = stencilShadows;
			build_ev_bool(this.nativeObject.pointer, stencilShadowsParamValue);
		}
		native private void addRenderables_CRenderQueue_ev_uint8_Real(long pNativeObject, long queue, short group, double lodValue);
		//// Add children to the render queue
		public void addRenderables(com.earthview.world.graphic.RenderQueue queue, short group, double lodValue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			short groupParamValue = group;
			double lodValueParamValue = lodValue;
			addRenderables_CRenderQueue_ev_uint8_Real(this.nativeObject.pointer, queueParamValue, groupParamValue, lodValueParamValue);
		}
		//// Iterator over the materials in this LOD
		///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap> StaticMaterialIterator;
		///struct EV_GRAPHIC_DLL MaterialBucketPair
		///{
		///	EVString first;
		///	EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* second;
		///};
		public static class StaticMaterialBucketPair extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair", new StaticMaterialBucketPairClassFactory());
			}

			public StaticMaterialBucketPair() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("StaticMaterialBucketPair", null);
			}

			native private String get_first_void(long pNativeObject);
			public String get_first()
			{
				String jniValue = get_first_void(this.nativeObject.pointer);
				
				return jniValue;
			}
			
			native private void set_first_EVString (long pNativeObject, String value);
			public void set_first(String first)
			{
				String firstParamValue = first;
				
				set_first_EVString(this.nativeObject.pointer, firstParamValue);
			}
			
			native private long get_second_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket get_second()
			{
				long jniValue = get_second_void(this.nativeObject.pointer);
				
				if(jniValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(jniValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticMaterialBucket");
				}
				return __returnValue;
			}
			
			native private void set_second_CStaticMaterialBucket (long pNativeObject, long value);
			public void set_second(com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket second)
			{
				long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
				
				set_second_CStaticMaterialBucket(this.nativeObject.pointer, secondParamValue);
			}
			
			public StaticMaterialBucketPair(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticMaterialBucketPair(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticMaterialBucketPair fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticMaterialBucketPair obj = null;
 				if(baseObj instanceof StaticMaterialBucketPair)
				{
					obj = (StaticMaterialBucketPair)baseObj;
				} else {
					obj = new StaticMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticMaterialBucketPair");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticMaterialBucketPairClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticMaterialBucketPair emptyInstance = new StaticMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class StaticMaterialBucketIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator", new StaticMaterialBucketIteratorClassFactory());
			}

			public StaticMaterialBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketMap lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("StaticMaterialBucketIterator", list);
			}

			public StaticMaterialBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketIterator other) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer otherPtr = new BasePointer(other);
				list.add("other", otherPtr.get());
				Create("StaticMaterialBucketIterator", list);
			}

			native private boolean hasMoreElements_void(long pNativeObject);
			public boolean hasMoreElements()
			{
				boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private void moveNext_void(long pNativeObject);
			public void moveNext()
			{
				moveNext_void(this.nativeObject.pointer);
			}
			native private String nextKey_void(long pNativeObject);
			public String nextKey()
			{
				String returnValue = nextKey_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private long nextValue_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket nextValue()
			{
				long returnValue = nextValue_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticMaterialBucket");
				}
				return __returnValue;
			}
			native private long nextValuePtr_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> nextValuePtr()
			{
				long returnValue = nextValuePtr_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticMaterialBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "StaticMaterialBucketPair");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "StaticMaterialBucketPair");
				}
				return __returnValue;
			}
			native private long getCurrent_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "StaticMaterialBucketPair");
				}
				return __returnValue;
			}
			public StaticMaterialBucketIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticMaterialBucketIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticMaterialBucketIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticMaterialBucketIterator obj = null;
 				if(baseObj instanceof StaticMaterialBucketIterator)
				{
					obj = (StaticMaterialBucketIterator)baseObj;
				} else {
					obj = new StaticMaterialBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticMaterialBucketIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticMaterialBucketIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticMaterialBucketIterator emptyInstance = new StaticMaterialBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long getMaterialIterator_void(long pNativeObject);
		//// Get an iterator over the materials in this LOD
		public com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketIterator getMaterialIterator()
		{
			long returnValue = getMaterialIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketIterator __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "StaticMaterialBucketIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket.StaticMaterialBucketIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "StaticMaterialBucketIterator");
			}
			return __returnValue;
		}
		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		native private long getEdgeList_void(long pNativeObject);
		public com.earthview.world.graphic.EdgeData getEdgeList()
		{
			long returnValue = getEdgeList_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
			}
			return __returnValue;
		}
		native private long getShadowRenderableList_void(long pNativeObject);
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableList getShadowRenderableList()
		{
			long returnValue = getShadowRenderableList_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ShadowCaster.ShadowRenderableList __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableList(CreatedWhenConstruct.CWC_NotToCreate, "ShadowRenderableList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableList");
			}
			return __returnValue;
		}
		native private boolean isVertexProgramInUse_void(long pNativeObject);
		public boolean isVertexProgramInUse()
		{
			boolean returnValue = isVertexProgramInUse_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void updateShadowRenderables_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long lightPos, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
		public void updateShadowRenderables(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.spatial.math.Vector4 lightPos, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightPosParamValue = lightPos.nativeObject.pointer;
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			long flagsParamValue = flags;
			updateShadowRenderables_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightPosParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		}
		native private void updateShadowRenderables_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long lightPos, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
		public void updateShadowRenderables(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.spatial.math.Vector4 lightPos, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightPosParamValue = lightPos.nativeObject.pointer;
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			updateShadowRenderables_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightPosParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		}
		public StaticLODBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticLODBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StaticLODBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticLODBucket obj = null;
 			if(baseObj instanceof StaticLODBucket)
			{
				obj = (StaticLODBucket)baseObj;
			} else {
				obj = new StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CStaticLODBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticLODBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticLODBucket emptyInstance = new StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class StaticRegion extends com.earthview.world.graphic.MovableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticRegion", new StaticRegionClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::JCStaticRegionProxy", new StaticRegionClassFactory());
		}

		//// list of LOD Buckets in this region
		///typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList;
		public static class StaticLODBucketList extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList", new StaticLODBucketListClassFactory());
			}

			public StaticLODBucketList() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("StaticLODBucketList", null);
			}

			native private void push_back_CStaticLODBucket(long pNativeObject, long ref_t);
			public void push_back(NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> ref_t)
			{
				long ref_tParamValue = ref_t.nativeObject.pointer;
				push_back_CStaticLODBucket(this.nativeObject.pointer, ref_tParamValue);
			}
			native private void pop_back_void(long pNativeObject);
			public void pop_back()
			{
				pop_back_void(this.nativeObject.pointer);
			}
			native private long front_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> front()
			{
				long returnValue = front_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long back_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> back()
			{
				long returnValue = back_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void insert_ev_uint32_CStaticLODBucket(long pNativeObject, long pos, long ref_t);
			public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> ref_t)
			{
				long posParamValue = pos;
				long ref_tParamValue = ref_t.nativeObject.pointer;
				insert_ev_uint32_CStaticLODBucket(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> OperatorIndex(long n)
			{
				long nParamValue = n;
				long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long at_ev_size_t(long pNativeObject, long n);
			public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> at(long n)
			{
				long nParamValue = n;
				long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticLODBucket>(new InstancePointer(returnValue));
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
			public StaticLODBucketList(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticLODBucketList(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticLODBucketList fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticLODBucketList obj = null;
 				if(baseObj instanceof StaticLODBucketList)
				{
					obj = (StaticLODBucketList)baseObj;
				} else {
					obj = new StaticLODBucketList(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticLODBucketList");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticLODBucketListClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticLODBucketList emptyInstance = new StaticLODBucketList(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public StaticRegion(com.earthview.world.graphic.StaticGeometry ref_parent, String name, com.earthview.world.graphic.SceneManager mgr, long regionID, com.earthview.world.spatial.math.Vector3 centre) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			BasePointer mgrPtr = new BasePointer(mgr);
			list.add("mgr", mgrPtr.get());
			BasePointer regionIDPtr = new BasePointer(regionID);
			list.add("regionID", regionIDPtr.get());
			BasePointer centrePtr = new BasePointer(centre);
			list.add("centre", centrePtr.get());
			Create("JCStaticRegionProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.StaticGeometry$StaticRegion".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getParent_void(long pNativeObject);
		/// more fields can be added in subclasses
		public com.earthview.world.graphic.StaticGeometry getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry __returnValue = new com.earthview.world.graphic.StaticGeometry(CreatedWhenConstruct.CWC_NotToCreate, "CStaticGeometry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticGeometry");
			}
			return __returnValue;
		}
		native private void assign_QueuedStaticSubMesh(long pNativeObject, long qmesh);
		/**
		 * 给这部分赋一个队列网格
		 * @param qmesh 
		 */
		public void assign(com.earthview.world.graphic.StaticGeometry.QueuedStaticSubMesh qmesh)
		{
			long qmeshParamValue = (qmesh == null ? 0L : qmesh.nativeObject.pointer);
			assign_QueuedStaticSubMesh(this.nativeObject.pointer, qmeshParamValue);
		}
		native private void build_ev_bool(long pNativeObject, boolean stencilShadows);
		//// Build this region
		public void build(boolean stencilShadows)
		{
			boolean stencilShadowsParamValue = stencilShadows;
			build_ev_bool(this.nativeObject.pointer, stencilShadowsParamValue);
		}
		native private long getID_void(long pNativeObject);
		/**
		 * 得到这部分的ID号
		 * @param  
		 */
		public long getID()
		{
			long returnValue = getID_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getCentre_void(long pNativeObject);
		/**
		 * 得到这部分的中心点x,y,z
		 * @param  
		 */
		public com.earthview.world.spatial.math.Vector3 getCentre()
		{
			long returnValue = getCentre_void(this.nativeObject.pointer);
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
		native private String getMovableType_void(long pNativeObject);
		public String getMovableType()
		{
			String returnValue = getMovableType_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getMovableType_void_NoVirtual(long pNativeObject);
		protected String getMovableType_NoVirtual()
		{
			String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private void _notifyCurrentCamera_CCamera(long pNativeObject, long cam);
		public void _notifyCurrentCamera(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera(this.nativeObject.pointer, camParamValue);
		}
		native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long cam);
		protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		}

		native private long getBoundingBox_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
		{
			long returnValue = getBoundingBox_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
			}
			return __returnValue;
		}
		native private long getBoundingBox_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
		{
			long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
			}
			return __returnValue;
		}

		native private double getBoundingRadius_void(long pNativeObject);
		public double getBoundingRadius()
		{
			double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
		protected double getBoundingRadius_NoVirtual()
		{
			double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
		public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
		}
		native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
		protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
		{
			long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
			_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
		}

		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		//// @copydoc CMovableObject::visitRenderables
		///void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor,
		///	ev_bool debugRenderables = false);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
		protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}

		native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
		}
		native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
		protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
		}

		native private boolean isVisible_void(long pNativeObject);
		public boolean isVisible()
		{
			boolean returnValue = isVisible_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isVisible_void_NoVirtual(long pNativeObject);
		protected boolean isVisible_NoVirtual()
		{
			boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getTypeFlags_void(long pNativeObject);
		public long getTypeFlags()
		{
			long returnValue = getTypeFlags_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getTypeFlags_void_NoVirtual(long pNativeObject);
		protected long getTypeFlags_NoVirtual()
		{
			long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList> StaticLODIterator;
		public static class StaticLODBucketIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator", new StaticLODBucketIteratorClassFactory());
			}

			public StaticLODBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketIterator rhs) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer rhsPtr = new BasePointer(rhs);
				list.add("rhs", rhsPtr.get());
				Create("StaticLODBucketIterator", list);
			}

			public StaticLODBucketIterator(com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketList lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("StaticLODBucketIterator", list);
			}

			native private boolean hasMoreElements_void(long pNativeObject);
			public boolean hasMoreElements()
			{
				boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private void moveNext_void(long pNativeObject);
			public void moveNext()
			{
				moveNext_void(this.nativeObject.pointer);
			}
			native private long getCurrent_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticLODBucket");
				}
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticLODBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticLODBucket");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.StaticGeometry.StaticLODBucket getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.StaticGeometry.StaticLODBucket __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CStaticLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CStaticLODBucket");
				}
				return __returnValue;
			}
			public StaticLODBucketIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public StaticLODBucketIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static StaticLODBucketIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				StaticLODBucketIterator obj = null;
 				if(baseObj instanceof StaticLODBucketIterator)
				{
					obj = (StaticLODBucketIterator)baseObj;
				} else {
					obj = new StaticLODBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "StaticLODBucketIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class StaticLODBucketIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				StaticLODBucketIterator emptyInstance = new StaticLODBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long getLODIterator_void(long pNativeObject);
		//// Get an iterator over the LODs in this region
		public com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketIterator getLODIterator()
		{
			long returnValue = getLODIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketIterator __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "StaticLODBucketIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion.StaticLODBucketIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "StaticLODBucketIterator");
			}
			return __returnValue;
		}
		native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
		//// @copydoc CShadowCaster::getShadowVolumeRenderableIterator
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			long flagsParamValue = flags;
			long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
			com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			}
			return __returnValue;
		}
		native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
		protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			long flagsParamValue = flags;
			long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
			com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			}
			return __returnValue;
		}

		native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
			com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			}
			return __returnValue;
		}
		native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
		protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			int shadowTechniqueParamValue = shadowTechnique.getValue();
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
			boolean extrudeVerticesParamValue = extrudeVertices;
			double extrusionDistanceParamValue = extrusionDistance;
			long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
			com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
			}
			return __returnValue;
		}

		native private long getEdgeList_void(long pNativeObject);
		//// Overridden from EarthView::World::Graphic::CMovableObject
		public com.earthview.world.graphic.EdgeData getEdgeList()
		{
			long returnValue = getEdgeList_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
			}
			return __returnValue;
		}
		native private long getEdgeList_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.EdgeData getEdgeList_NoVirtual()
		{
			long returnValue = getEdgeList_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
			}
			return __returnValue;
		}

		native private boolean hasEdgeList_void(long pNativeObject);
		public boolean hasEdgeList()
		{
			boolean returnValue = hasEdgeList_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean hasEdgeList_void_NoVirtual(long pNativeObject);
		protected boolean hasEdgeList_NoVirtual()
		{
			boolean returnValue = hasEdgeList_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		public StaticRegion(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticRegion(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
		{
			return super.getAnimableObjectPtr_NoVirtual();
		}
		/**
		 * 获取渲染队列ID
		 * @param  
		 */
		public short getRenderQueueId()
		{
			return super.getRenderQueueId_NoVirtual();
		}
		/**
		 * 通报创建者只能内部使用
		 * @param fact 实例
		 */
		public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
		{
			super._notifyCreator_NoVirtual(ref_fact);
		}
		/**
		 * 获取创建者如果有的话，获取，只能在内部使用
		 * @param  
		 * @return 移动对象工厂类
		 */
		public com.earthview.world.graphic.MovableObjectFactory _getCreator()
		{
			return super._getCreator_NoVirtual();
		}
		/**
		 * 通报场景管理器只能内部使用
		 * @param man 场景管理者
		 */
		public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
		{
			super._notifyManager_NoVirtual(ref_mgr);
		}
		/**
		 * 获取场景管理器
		 * @param  
		 * @return 管理者
		 */
		public com.earthview.world.graphic.SceneManager _getManager()
		{
			return super._getManager_NoVirtual();
		}
		/**
		 * 获取对象的名称
		 * @param  
		 * @return 名称
		 */
		public String getName()
		{
			return super.getName_NoVirtual();
		}
		/**
		 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
		 * @param  
		 * @return 节点名称
		 */
		public com.earthview.world.graphic.Node getParentNode()
		{
			return super.getParentNode_NoVirtual();
		}
		/**
		 * 获取对象的场景父节点
		 * @param  
		 * @return 场景节点
		 */
		public com.earthview.world.graphic.SceneNode getParentSceneNode()
		{
			return super.getParentSceneNode_NoVirtual();
		}
		/**
		 * 判断父节点是否是骨骼节点
		 * @param  
		 * @return 成功，返回标签点，否则为场景节点
		 */
		public boolean isParentTagPoint()
		{
			return super.isParentTagPoint_NoVirtual();
		}
		/**
		 * 通报被挂接内部方法
		 * @param parent 父节点名称
		 * @param isTagPoint 是否挂接在节点下
		 */
		public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
		{
			super._notifyAttached_NoVirtual(ref_parent, isTagPoint);
		}
		public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
		{
			super._notifyAttached_NoVirtual(ref_parent);
		}
		/**
		 * 是否已挂接
		 * @param  
		 * @return 为真，挂接
		 */
		public boolean isAttached()
		{
			return super.isAttached_NoVirtual();
		}
		/**
		 * 将指定对象从父节点分离
		 * @param  
		 */
		public void detachFromParent()
		{
			super.detachFromParent_NoVirtual();
		}
		/**
		 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
		 * @param  
		 */
		public boolean isInScene()
		{
			return super.isInScene_NoVirtual();
		}
		/**
		 * 通报被移动内部方法
		 * @param  
		 */
		public void _notifyMoved()
		{
			super._notifyMoved_NoVirtual();
		}
		/**
		 * 通报光源查询结束内部方法
		 * @param  
		 */
		public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
		{
			super._notifyLightsQueried_NoVirtual(lightList);
		}
		public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
		{
			super.setLightQueriedListener_NoVirtual(listener);
		}
		public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
		{
			return super.getLightQueriedListener_NoVirtual();
		}
		public long getLightListUpdated()
		{
			return super.getLightListUpdated_NoVirtual();
		}
		public void setLightListUpdated(long frame)
		{
			super.setLightListUpdated_NoVirtual(frame);
		}
		/**
		 * 在世界空间中获取当前对象的边框球体
		 * @param derive 是否检索
		 */
		public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
		{
			return super.getWorldBoundingSphere_NoVirtual(derive);
		}
		public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
		{
			return super.getWorldBoundingSphere_NoVirtual();
		}
		/**
		 * 设置是否可见
		 * @param visible 是否可见
		 */
		public void setVisible(boolean visible)
		{
			super.setVisible_NoVirtual(visible);
		}
		/**
		 * 获取是否可见,与setVisible对应
		 * @param  
		 */
		public boolean getVisible()
		{
			return super.getVisible_NoVirtual();
		}
		/**
		 * 设置该对象可渲染的距离上限
		 * @param dist 默认为0
		 */
		public void setRenderingMaxDistance(double dist)
		{
			super.setRenderingMaxDistance_NoVirtual(dist);
		}
		/**
		 * 获取该对象可渲染的距离下限
		 * @param  
		 */
		public double getRenderingMaxDistance()
		{
			return super.getRenderingMaxDistance_NoVirtual();
		}
		/**
		 * 设置该对象可渲染的距离下限
		 * @param dist 默认为0
		 */
		public void setRenderingMinDistance(double dist)
		{
			super.setRenderingMinDistance_NoVirtual(dist);
		}
		/**
		 * 获取该对象可渲染的距离上限
		 * @param  
		 */
		public double getRenderingMinDistance()
		{
			return super.getRenderingMinDistance_NoVirtual();
		}
		/**
		 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
		 * @param pixelSize 像素大小
		 */
		public void setRenderingMinPixelSize(double pixelSize)
		{
			super.setRenderingMinPixelSize_NoVirtual(pixelSize);
		}
		/**
		 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
		 * @param  
		 * @return 像素大小
		 */
		public double getRenderingMinPixelSize()
		{
			return super.getRenderingMinPixelSize_NoVirtual();
		}
		/// <summary>
		/// 设置选中时的高亮颜色				
		/// <param name=""></param>				
		/// <returns></returns>
		public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
		{
			super.setSelectionColour_NoVirtual(colour);
		}
		/// <summary>
		/// 设置选中的对象				
		/// <param name="objIndics">选中的对象集合</param>				
		/// <returns></returns>
		public boolean setSelected(com.earthview.world.core.IntVector objIndics)
		{
			return super.setSelected_NoVirtual(objIndics);
		}
		/// <summary>
		/// 获得选中的对象				
		/// <param name=""></param>				
		/// <returns>选中的对象集合</returns>
		public com.earthview.world.core.IntVector getSelected()
		{
			return super.getSelected_NoVirtual();
		}
		/**
		 * 射线选择
		 * @param ray 射线对象
		 * @param EarthView::World::Graphic::CViewport 所在视口
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param objIndex 选中的对象序号
		 * @param point 交点
		 * @return true:与射线相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
		}
		/**
		 * 盒选择
		 * @param aabb 盒
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定盒相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
		}
		/**
		 * 球选择
		 * @param sphere 球
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param indexVec 选中的对象序号的集合
		 * @return true:物体包围盒与指定球相交;false:不相交
		 */
		public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
		{
			return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
		}
		/**
		 * 选择组件
		 * @param ray 射线对象
		 * @param EarthView::World::Graphic::CViewport 所在视口
		 * @param prepareToRenderSelection 是否准备渲染选中的对象
		 * @param objIndex 物体序号
		 * @param submeshIndex submesh序号
		 * @param instanceIndex instance序号
		 * @param segmentIndex 索引分段序号
		 * @param point 交点
		 * @return true:组件与射线相交;false:不相交
		 */
		public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
		{
			return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
		}
		/**
		 * 绘制选择对象
		 * @param  
		 */
		public void renderSelection()
		{
			super.renderSelection_NoVirtual();
		}
		/**
		 * 清除选择
		 * @param  
		 */
		public void clearSelection()
		{
			super.clearSelection_NoVirtual();
		}
		/**
		 * 开始编辑
		 * @param  
		 */
		public boolean startEditing(long objectIndex)
		{
			return super.startEditing_NoVirtual(objectIndex);
		}
		/**
		 * 结束编辑
		 * @param  
		 */
		public void endEditing()
		{
			super.endEditing_NoVirtual();
		}
		/**
		 * 获得编辑包围盒
		 * @param  
		 */
		public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
		{
			return super.getEditBoundingBox_NoVirtual();
		}
		/**
		 * 获得选中对象的世界变换矩阵
		 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
		 * @param matrix 世界变换矩阵
		 */
		public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
		}
		/**
		 * 设置选中对象的世界变换矩阵
		 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
		 * @param matrix 世界变换矩阵
		 */
		public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
		{
			return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
		}
		/**
		 * 设置渲染队列组信息
		 * @param queueID 队列ID号
		 */
		public void setRenderQueueGroup(short queueID)
		{
			super.setRenderQueueGroup_NoVirtual(queueID);
		}
		/**
		 * 设置渲染队列组信息和队列优先级
		 * @param queueID 队列ID号
		 * @param priority 优先级
		 */
		public void setRenderQueueGroupAndPriority(short queueID, int priority)
		{
			super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
		}
		/**
		 * 获取该实体的渲染队列组
		 * @param  
		 */
		public short getRenderQueueGroup()
		{
			return super.getRenderQueueGroup_NoVirtual();
		}
		/**
		 * 获取父节点的全部变化信息
		 * @param  
		 */
		public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
		{
			return super._getParentNodeFullTransform_NoVirtual();
		}
		/**
		 * 设置该对象的询问标识
		 * @param flags 
		 */
		public void setQueryFlags(long flags)
		{
			super.setQueryFlags_NoVirtual(flags);
		}
		/**
		 * 添加询问标识
		 * @param flags 
		 */
		public void addQueryFlags(long flags)
		{
			super.addQueryFlags_NoVirtual(flags);
		}
		/**
		 * 移除询问标识
		 * @param flags 
		 */
		public void removeQueryFlags(long flags)
		{
			super.removeQueryFlags_NoVirtual(flags);
		}
		/**
		 * 获取询问标识
		 * @param  
		 */
		public long getQueryFlags()
		{
			return super.getQueryFlags_NoVirtual();
		}
		/**
		 * 设置对象可见标识
		 * @param flags 
		 */
		public void setVisibilityFlags(long flags)
		{
			super.setVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 添加对象可见标识
		 * @param flags 
		 */
		public void addVisibilityFlags(long flags)
		{
			super.addVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 移除对象可见标识
		 * @param flags 
		 */
		public void removeVisibilityFlags(long flags)
		{
			super.removeVisibilityFlags_NoVirtual(flags);
		}
		/**
		 * 获取对象可见标识
		 * @param flags 
		 */
		public long getVisibilityFlags()
		{
			return super.getVisibilityFlags_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
		{
			return super.existListener_NoVirtual(listener);
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public long getListenerCount()
		{
			return super.getListenerCount_NoVirtual();
		}
		/**
		 * 获取监听器
		 * @param  
		 */
		public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 获取光源列表以距离可移动物体由近到远顺序排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList queryLights()
		{
			return super.queryLights_NoVirtual();
		}
		/**
		 * 获取光线掩码默认所有光源影响对象
		 * @param  
		 */
		public long getLightMask()
		{
			return super.getLightMask_NoVirtual();
		}
		/**
		 * 设置光线掩码
		 * @param lightMask 
		 */
		public void setLightMask(long lightMask)
		{
			super.setLightMask_NoVirtual(lightMask);
		}
		/**
		 * 获取指向该对象当前光列表
		 * @param  
		 */
		public com.earthview.world.graphic.LightList _getLightList()
		{
			return super._getLightList_NoVirtual();
		}
		/**
		 * 设置投射阴影
		 * @param enabled 
		 */
		public void setCastShadows(boolean enabled)
		{
			super.setCastShadows_NoVirtual(enabled);
		}
		/**
		 * 是否接收阴影
		 * @param  
		 */
		public boolean getReceivesShadows()
		{
			return super.getReceivesShadows_NoVirtual();
		}
		/**
		 * 设置调试该对象是否启用
		 * @param  
		 */
		public void setDebugDisplayEnabled(boolean enabled)
		{
			super.setDebugDisplayEnabled_NoVirtual(enabled);
		}
		/**
		 * 是否调试该对象是否启用
		 * @param  
		 */
		public boolean isDebugDisplayEnabled()
		{
			return super.isDebugDisplayEnabled_NoVirtual();
		}
		public boolean getCastShadows()
		{
			return super.getCastShadows_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
		{
			return super.getWorldBoundingBox_NoVirtual(derive);
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
		{
			return super.getWorldBoundingBox_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
		{
			return super.getLightCapBounds_NoVirtual();
		}
		public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
		{
			return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
		}
		public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
		{
			return super.getPointExtrusionDistance_NoVirtual(l);
		}
		public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
		{
			super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
		}
		public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
		{
			super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
		}
		public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
		{
			super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
		}
		
		native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
		native protected void register_getRenderQueueId_void(long pNativeObject, String method);
		native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
		native protected void register__getCreator_void(long pNativeObject, String method);
		native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
		native protected void register__getManager_void(long pNativeObject, String method);
		native protected void register_getName_void(long pNativeObject, String method);
		native protected void register_getMovableType_void(long pNativeObject, String method);
		native protected void register_getParentNode_void(long pNativeObject, String method);
		native protected void register_getParentSceneNode_void(long pNativeObject, String method);
		native protected void register_isParentTagPoint_void(long pNativeObject, String method);
		native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
		native protected void register__notifyAttached_CNode(long pNativeObject, String method);
		native protected void register_isAttached_void(long pNativeObject, String method);
		native protected void register_detachFromParent_void(long pNativeObject, String method);
		native protected void register_isInScene_void(long pNativeObject, String method);
		native protected void register__notifyMoved_void(long pNativeObject, String method);
		native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
		native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
		native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
		native protected void register_getLightListUpdated_void(long pNativeObject, String method);
		native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
		native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
		native protected void register_getBoundingBox_void(long pNativeObject, String method);
		native protected void register_getBoundingRadius_void(long pNativeObject, String method);
		native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
		native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
		native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
		native protected void register_setVisible_ev_bool(long pNativeObject, String method);
		native protected void register_getVisible_void(long pNativeObject, String method);
		native protected void register_isVisible_void(long pNativeObject, String method);
		native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
		native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
		native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
		native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
		native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
		native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
		native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
		native protected void register_setSelected_IntVector(long pNativeObject, String method);
		native protected void register_getSelected_void(long pNativeObject, String method);
		native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
		native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
		native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
		native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
		native protected void register_renderSelection_void(long pNativeObject, String method);
		native protected void register_clearSelection_void(long pNativeObject, String method);
		native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
		native protected void register_endEditing_void(long pNativeObject, String method);
		native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
		native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
		native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
		native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
		native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
		native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
		native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
		native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_getQueryFlags_void(long pNativeObject, String method);
		native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
		native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
		native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_queryLights_void(long pNativeObject, String method);
		native protected void register_getLightMask_void(long pNativeObject, String method);
		native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
		native protected void register__getLightList_void(long pNativeObject, String method);
		native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
		native protected void register_getReceivesShadows_void(long pNativeObject, String method);
		native protected void register_getTypeFlags_void(long pNativeObject, String method);
		native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
		native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
		native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
		native protected void register_getCastShadows_void(long pNativeObject, String method);
		native protected void register_getEdgeList_void(long pNativeObject, String method);
		native protected void register_hasEdgeList_void(long pNativeObject, String method);
		native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
		native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
		native protected void register_getLightCapBounds_void(long pNativeObject, String method);
		native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
		native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
		native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
		native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
		native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
		native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
		native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
				this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
				this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
				this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
				this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
				this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
				this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
				this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
				this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
				this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
				this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
				this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
				this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
				this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
				this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
				this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
				this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
				this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
				this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
				this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
				this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
				this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
				this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
				this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
				this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
				this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
				this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
				this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
				this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
				this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
				this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
				this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
				this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
				this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
				this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
				this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
				this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
				this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
				this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
				this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
				this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
				this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
				this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
				this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
				this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
				this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
				this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
				this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
				this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
				this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
				this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
				this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
				this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
				this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
				this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
				this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
				this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
				this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
				this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
				this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
				this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
				this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
				this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
				this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
				this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
				this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
				this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
				this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
				this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
				this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
				this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
				this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
				this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
				this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
				this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
				this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
				this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
				this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
				this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
				this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
				this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
				this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
				this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
				this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
				this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
				this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
				this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
				this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
				this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
			}
		}
		
		public static StaticRegion fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticRegion obj = null;
 			if(baseObj instanceof StaticRegion)
			{
				obj = (StaticRegion)baseObj;
			} else {
				obj = new StaticRegion(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CStaticRegion");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticRegionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticRegion emptyInstance = new StaticRegion(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class StaticRegionMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::StaticRegionMap", new StaticRegionMapClassFactory());
		}

		public StaticRegionMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StaticRegionMap", null);
		}

		native private boolean push_ev_uint32_CStaticRegion(long pNativeObject, long key, long ref_val);
		public boolean push(long key, NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> ref_val)
		{
			long keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint32_CStaticRegion(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint32(long pNativeObject, long key);
		public boolean exist(long key)
		{
			long keyParamValue = key;
			boolean returnValue = exist_ev_uint32(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint32(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> OperatorIndex(long key)
		{
			long keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint32(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint32(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> get(long key)
		{
			long keyParamValue = key;
			long returnValue = get_ev_uint32(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint32(long pNativeObject, long key);
		public void erase(long key)
		{
			long keyParamValue = key;
			erase_ev_uint32(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public StaticRegionMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticRegionMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StaticRegionMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticRegionMap obj = null;
 			if(baseObj instanceof StaticRegionMap)
			{
				obj = (StaticRegionMap)baseObj;
			} else {
				obj = new StaticRegionMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StaticRegionMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticRegionMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticRegionMap emptyInstance = new StaticRegionMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getRegion_CAxisAlignedBox_ev_bool_callback(long bounds, boolean autoCreate)
	{
		com.earthview.world.spatial.math.AxisAlignedBox boundsParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		boundsParamValue.setDelegate(true);
		boundsParamValue.setInstancePointer(new InstancePointer(bounds));
		IClassFactory boundsParamValueClassFactory = GlobalClassFactoryMap.get(boundsParamValue.getCppInstanceTypeName());
		if (boundsParamValueClassFactory != null)
		{
			boundsParamValue.setDelegate(true);
			boundsParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)boundsParamValueClassFactory.create();
			boundsParamValue.setDelegate(true);
			boundsParamValue.setInstancePointer(new InstancePointer(bounds));
		}
		boolean autoCreateParamValue = autoCreate;
		com.earthview.world.graphic.StaticGeometry.StaticRegion returnValue = getRegion(boundsParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegion_CAxisAlignedBox_ev_bool(long pNativeObject, long bounds, boolean autoCreate);
	public com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion(com.earthview.world.spatial.math.AxisAlignedBox bounds, boolean autoCreate)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_CAxisAlignedBox_ev_bool(this.nativeObject.pointer, boundsParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}
	native private long getRegion_CAxisAlignedBox_ev_bool_NoVirtual(long pNativeObject, long bounds, boolean autoCreate);
	protected com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox bounds, boolean autoCreate)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_CAxisAlignedBox_ev_bool_NoVirtual(this.nativeObject.pointer, boundsParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}

	protected  long getRegion_CVector3_ev_bool_callback(long point, boolean autoCreate)
	{
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		boolean autoCreateParamValue = autoCreate;
		com.earthview.world.graphic.StaticGeometry.StaticRegion returnValue = getRegion(pointParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegion_CVector3_ev_bool(long pNativeObject, long point, boolean autoCreate);
	public com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion(com.earthview.world.spatial.math.Vector3 point, boolean autoCreate)
	{
		long pointParamValue = point.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_CVector3_ev_bool(this.nativeObject.pointer, pointParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}
	native private long getRegion_CVector3_ev_bool_NoVirtual(long pNativeObject, long point, boolean autoCreate);
	protected com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion_NoVirtual(com.earthview.world.spatial.math.Vector3 point, boolean autoCreate)
	{
		long pointParamValue = point.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_CVector3_ev_bool_NoVirtual(this.nativeObject.pointer, pointParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}

	protected  long getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_callback(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		com.earthview.world.graphic.StaticGeometry.StaticRegion returnValue = getRegion(xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(long pNativeObject, int x, int y, int z, boolean autoCreate);
	public com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}
	native private long getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(long pNativeObject, int x, int y, int z, boolean autoCreate);
	protected com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion_NoVirtual(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}

	protected  long getRegion_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.StaticGeometry.StaticRegion returnValue = getRegion(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegion_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion(long index)
	{
		long indexParamValue = index;
		long returnValue = getRegion_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}
	native private long getRegion_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.StaticGeometry.StaticRegion getRegion_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getRegion_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
		}
		return __returnValue;
	}

	protected  void getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_callback(long point, long x, long y, long z)
	{
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		UShortPointer xParamValue = new UShortPointer(new InstancePointer(x));
		UShortPointer yParamValue = new UShortPointer(new InstancePointer(y));
		UShortPointer zParamValue = new UShortPointer(new InstancePointer(z));
		getRegionIndexes(pointParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, long point, long x, long y, long z);
	public void getRegionIndexes(com.earthview.world.spatial.math.Vector3 point, UShortPointer x, UShortPointer y, UShortPointer z)
	{
		long pointParamValue = point.nativeObject.pointer;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, pointParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, long point, long x, long y, long z);
	protected void getRegionIndexes_NoVirtual(com.earthview.world.spatial.math.Vector3 point, UShortPointer x, UShortPointer y, UShortPointer z)
	{
		long pointParamValue = point.nativeObject.pointer;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, pointParamValue, xParamValue, yParamValue, zParamValue);
	}

	protected  long packIndex_ev_uint16_ev_uint16_ev_uint16_callback(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = packIndex(xParamValue, yParamValue, zParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long packIndex_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, int x, int y, int z);
	public long packIndex(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = packIndex_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		return returnValue;
	}
	native private long packIndex_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int x, int y, int z);
	protected long packIndex_NoVirtual(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = packIndex_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		return returnValue;
	}

	protected  double getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_callback(long box, int x, int y, int z)
	{
		com.earthview.world.spatial.math.AxisAlignedBox boxParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		boxParamValue.setDelegate(true);
		boxParamValue.setInstancePointer(new InstancePointer(box));
		IClassFactory boxParamValueClassFactory = GlobalClassFactoryMap.get(boxParamValue.getCppInstanceTypeName());
		if (boxParamValueClassFactory != null)
		{
			boxParamValue.setDelegate(true);
			boxParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)boxParamValueClassFactory.create();
			boxParamValue.setDelegate(true);
			boxParamValue.setInstancePointer(new InstancePointer(box));
		}
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		double returnValue = getVolumeIntersection(boxParamValue, xParamValue, yParamValue, zParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, long box, int x, int y, int z);
	public double getVolumeIntersection(com.earthview.world.spatial.math.AxisAlignedBox box, int x, int y, int z)
	{
		long boxParamValue = box.nativeObject.pointer;
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		double returnValue = getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, boxParamValue, xParamValue, yParamValue, zParamValue);
		return returnValue;
	}
	native private double getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, long box, int x, int y, int z);
	protected double getVolumeIntersection_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox box, int x, int y, int z)
	{
		long boxParamValue = box.nativeObject.pointer;
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		double returnValue = getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, boxParamValue, xParamValue, yParamValue, zParamValue);
		return returnValue;
	}

	protected  long getRegionBounds_ev_uint16_ev_uint16_ev_uint16_callback(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getRegionBounds(xParamValue, yParamValue, zParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegionBounds_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, int x, int y, int z);
	public com.earthview.world.spatial.math.AxisAlignedBox getRegionBounds(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getRegionBounds_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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
	native private long getRegionBounds_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int x, int y, int z);
	protected com.earthview.world.spatial.math.AxisAlignedBox getRegionBounds_NoVirtual(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getRegionBounds_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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

	protected  long getRegionCentre_ev_uint16_ev_uint16_ev_uint16_callback(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		com.earthview.world.spatial.math.Vector3 returnValue = getRegionCentre(xParamValue, yParamValue, zParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegionCentre_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, int x, int y, int z);
	public com.earthview.world.spatial.math.Vector3 getRegionCentre(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getRegionCentre_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getRegionCentre_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int x, int y, int z);
	protected com.earthview.world.spatial.math.Vector3 getRegionCentre_NoVirtual(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getRegionCentre_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  long calculateBounds_CVertexData_CVector3_CQuaternion_CVector3_callback(long vertexData, long position, long orientation, long scale)
	{
		com.earthview.world.graphic.VertexData vertexDataParamValue = (vertexData == 0L ? null : new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate));
		if(vertexDataParamValue != null)
		{
		vertexDataParamValue.setDelegate(true);
		vertexDataParamValue.setInstancePointer(new InstancePointer(vertexData));
		IClassFactory vertexDataParamValueClassFactory = GlobalClassFactoryMap.get(vertexDataParamValue.getCppInstanceTypeName());
		if (vertexDataParamValueClassFactory != null)
		{
			vertexDataParamValue.setDelegate(true);
			vertexDataParamValue = (com.earthview.world.graphic.VertexData)vertexDataParamValueClassFactory.create();
			vertexDataParamValue.setDelegate(true);
			vertexDataParamValue.setInstancePointer(new InstancePointer(vertexData));
		}
		}
		com.earthview.world.spatial.math.Vector3 positionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		positionParamValue.setDelegate(true);
		positionParamValue.setInstancePointer(new InstancePointer(position));
		IClassFactory positionParamValueClassFactory = GlobalClassFactoryMap.get(positionParamValue.getCppInstanceTypeName());
		if (positionParamValueClassFactory != null)
		{
			positionParamValue.setDelegate(true);
			positionParamValue = (com.earthview.world.spatial.math.Vector3)positionParamValueClassFactory.create();
			positionParamValue.setDelegate(true);
			positionParamValue.setInstancePointer(new InstancePointer(position));
		}
		com.earthview.world.spatial.math.Quaternion orientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		orientationParamValue.setDelegate(true);
		orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		IClassFactory orientationParamValueClassFactory = GlobalClassFactoryMap.get(orientationParamValue.getCppInstanceTypeName());
		if (orientationParamValueClassFactory != null)
		{
			orientationParamValue.setDelegate(true);
			orientationParamValue = (com.earthview.world.spatial.math.Quaternion)orientationParamValueClassFactory.create();
			orientationParamValue.setDelegate(true);
			orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		}
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = calculateBounds(vertexDataParamValue, positionParamValue, orientationParamValue, scaleParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long calculateBounds_CVertexData_CVector3_CQuaternion_CVector3(long pNativeObject, long vertexData, long position, long orientation, long scale);
	public com.earthview.world.spatial.math.AxisAlignedBox calculateBounds(com.earthview.world.graphic.VertexData vertexData, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.spatial.math.Vector3 scale)
	{
		long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long returnValue = calculateBounds_CVertexData_CVector3_CQuaternion_CVector3(this.nativeObject.pointer, vertexDataParamValue, positionParamValue, orientationParamValue, scaleParamValue);
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
	native private long calculateBounds_CVertexData_CVector3_CQuaternion_CVector3_NoVirtual(long pNativeObject, long vertexData, long position, long orientation, long scale);
	protected com.earthview.world.spatial.math.AxisAlignedBox calculateBounds_NoVirtual(com.earthview.world.graphic.VertexData vertexData, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.spatial.math.Vector3 scale)
	{
		long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long returnValue = calculateBounds_CVertexData_CVector3_CQuaternion_CVector3_NoVirtual(this.nativeObject.pointer, vertexDataParamValue, positionParamValue, orientationParamValue, scaleParamValue);
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

	//// Constructor; do not use directly (@see CSceneManager::createStaticGeometry)
	public StaticGeometry(com.earthview.world.graphic.SceneManager ref_owner, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ownerPtr = new BasePointer(ref_owner);
		list.add("ref_owner", ref_ownerPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCStaticGeometryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.StaticGeometry".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	//// Get the name of this object
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void addEntity_CEntity_CVector3_CQuaternion_CVector3_callback(long ent, long position, long orientation, long scale)
	{
		com.earthview.world.graphic.Entity entParamValue = (ent == 0L ? null : new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate));
		if(entParamValue != null)
		{
		entParamValue.setDelegate(true);
		entParamValue.setInstancePointer(new InstancePointer(ent));
		IClassFactory entParamValueClassFactory = GlobalClassFactoryMap.get(entParamValue.getCppInstanceTypeName());
		if (entParamValueClassFactory != null)
		{
			entParamValue.setDelegate(true);
			entParamValue = (com.earthview.world.graphic.Entity)entParamValueClassFactory.create();
			entParamValue.setDelegate(true);
			entParamValue.setInstancePointer(new InstancePointer(ent));
		}
		}
		com.earthview.world.spatial.math.Vector3 positionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		positionParamValue.setDelegate(true);
		positionParamValue.setInstancePointer(new InstancePointer(position));
		IClassFactory positionParamValueClassFactory = GlobalClassFactoryMap.get(positionParamValue.getCppInstanceTypeName());
		if (positionParamValueClassFactory != null)
		{
			positionParamValue.setDelegate(true);
			positionParamValue = (com.earthview.world.spatial.math.Vector3)positionParamValueClassFactory.create();
			positionParamValue.setDelegate(true);
			positionParamValue.setInstancePointer(new InstancePointer(position));
		}
		com.earthview.world.spatial.math.Quaternion orientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		orientationParamValue.setDelegate(true);
		orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		IClassFactory orientationParamValueClassFactory = GlobalClassFactoryMap.get(orientationParamValue.getCppInstanceTypeName());
		if (orientationParamValueClassFactory != null)
		{
			orientationParamValue.setDelegate(true);
			orientationParamValue = (com.earthview.world.spatial.math.Quaternion)orientationParamValueClassFactory.create();
			orientationParamValue.setDelegate(true);
			orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		}
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		addEntity(entParamValue, positionParamValue, orientationParamValue, scaleParamValue);
	}

	native private void addEntity_CEntity_CVector3_CQuaternion_CVector3(long pNativeObject, long ent, long position, long orientation, long scale);
	public void addEntity(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.spatial.math.Vector3 scale)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		addEntity_CEntity_CVector3_CQuaternion_CVector3(this.nativeObject.pointer, entParamValue, positionParamValue, orientationParamValue, scaleParamValue);
	}
	native private void addEntity_CEntity_CVector3_CQuaternion_CVector3_NoVirtual(long pNativeObject, long ent, long position, long orientation, long scale);
	protected void addEntity_NoVirtual(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.spatial.math.Vector3 scale)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		addEntity_CEntity_CVector3_CQuaternion_CVector3_NoVirtual(this.nativeObject.pointer, entParamValue, positionParamValue, orientationParamValue, scaleParamValue);
	}

	protected  void addEntity_CEntity_CVector3_CQuaternion_callback(long ent, long position, long orientation)
	{
		com.earthview.world.graphic.Entity entParamValue = (ent == 0L ? null : new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate));
		if(entParamValue != null)
		{
		entParamValue.setDelegate(true);
		entParamValue.setInstancePointer(new InstancePointer(ent));
		IClassFactory entParamValueClassFactory = GlobalClassFactoryMap.get(entParamValue.getCppInstanceTypeName());
		if (entParamValueClassFactory != null)
		{
			entParamValue.setDelegate(true);
			entParamValue = (com.earthview.world.graphic.Entity)entParamValueClassFactory.create();
			entParamValue.setDelegate(true);
			entParamValue.setInstancePointer(new InstancePointer(ent));
		}
		}
		com.earthview.world.spatial.math.Vector3 positionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		positionParamValue.setDelegate(true);
		positionParamValue.setInstancePointer(new InstancePointer(position));
		IClassFactory positionParamValueClassFactory = GlobalClassFactoryMap.get(positionParamValue.getCppInstanceTypeName());
		if (positionParamValueClassFactory != null)
		{
			positionParamValue.setDelegate(true);
			positionParamValue = (com.earthview.world.spatial.math.Vector3)positionParamValueClassFactory.create();
			positionParamValue.setDelegate(true);
			positionParamValue.setInstancePointer(new InstancePointer(position));
		}
		com.earthview.world.spatial.math.Quaternion orientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		orientationParamValue.setDelegate(true);
		orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		IClassFactory orientationParamValueClassFactory = GlobalClassFactoryMap.get(orientationParamValue.getCppInstanceTypeName());
		if (orientationParamValueClassFactory != null)
		{
			orientationParamValue.setDelegate(true);
			orientationParamValue = (com.earthview.world.spatial.math.Quaternion)orientationParamValueClassFactory.create();
			orientationParamValue.setDelegate(true);
			orientationParamValue.setInstancePointer(new InstancePointer(orientation));
		}
		addEntity(entParamValue, positionParamValue, orientationParamValue);
	}

	native private void addEntity_CEntity_CVector3_CQuaternion(long pNativeObject, long ent, long position, long orientation);
	public void addEntity(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		addEntity_CEntity_CVector3_CQuaternion(this.nativeObject.pointer, entParamValue, positionParamValue, orientationParamValue);
	}
	native private void addEntity_CEntity_CVector3_CQuaternion_NoVirtual(long pNativeObject, long ent, long position, long orientation);
	protected void addEntity_NoVirtual(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		addEntity_CEntity_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, entParamValue, positionParamValue, orientationParamValue);
	}

	protected  void addEntity_CEntity_CVector3_callback(long ent, long position)
	{
		com.earthview.world.graphic.Entity entParamValue = (ent == 0L ? null : new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate));
		if(entParamValue != null)
		{
		entParamValue.setDelegate(true);
		entParamValue.setInstancePointer(new InstancePointer(ent));
		IClassFactory entParamValueClassFactory = GlobalClassFactoryMap.get(entParamValue.getCppInstanceTypeName());
		if (entParamValueClassFactory != null)
		{
			entParamValue.setDelegate(true);
			entParamValue = (com.earthview.world.graphic.Entity)entParamValueClassFactory.create();
			entParamValue.setDelegate(true);
			entParamValue.setInstancePointer(new InstancePointer(ent));
		}
		}
		com.earthview.world.spatial.math.Vector3 positionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		positionParamValue.setDelegate(true);
		positionParamValue.setInstancePointer(new InstancePointer(position));
		IClassFactory positionParamValueClassFactory = GlobalClassFactoryMap.get(positionParamValue.getCppInstanceTypeName());
		if (positionParamValueClassFactory != null)
		{
			positionParamValue.setDelegate(true);
			positionParamValue = (com.earthview.world.spatial.math.Vector3)positionParamValueClassFactory.create();
			positionParamValue.setDelegate(true);
			positionParamValue.setInstancePointer(new InstancePointer(position));
		}
		addEntity(entParamValue, positionParamValue);
	}

	native private void addEntity_CEntity_CVector3(long pNativeObject, long ent, long position);
	public void addEntity(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		addEntity_CEntity_CVector3(this.nativeObject.pointer, entParamValue, positionParamValue);
	}
	native private void addEntity_CEntity_CVector3_NoVirtual(long pNativeObject, long ent, long position);
	protected void addEntity_NoVirtual(com.earthview.world.graphic.Entity ent, com.earthview.world.spatial.math.Vector3 position)
	{
		long entParamValue = (ent == null ? 0L : ent.nativeObject.pointer);
		long positionParamValue = position.nativeObject.pointer;
		addEntity_CEntity_CVector3_NoVirtual(this.nativeObject.pointer, entParamValue, positionParamValue);
	}

	protected  void addSceneNode_CSceneNode_callback(long node)
	{
		com.earthview.world.graphic.SceneNode nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.SceneNode)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		addSceneNode(nodeParamValue);
	}

	native private void addSceneNode_CSceneNode(long pNativeObject, long node);
	public void addSceneNode(com.earthview.world.graphic.SceneNode node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		addSceneNode_CSceneNode(this.nativeObject.pointer, nodeParamValue);
	}
	native private void addSceneNode_CSceneNode_NoVirtual(long pNativeObject, long node);
	protected void addSceneNode_NoVirtual(com.earthview.world.graphic.SceneNode node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		addSceneNode_CSceneNode_NoVirtual(this.nativeObject.pointer, nodeParamValue);
	}

	protected  void build_void_callback()
	{
		build();
	}

	native private void build_void(long pNativeObject);
	public void build()
	{
		build_void(this.nativeObject.pointer);
	}
	native private void build_void_NoVirtual(long pNativeObject);
	protected void build_NoVirtual()
	{
		build_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void destroy_void_callback()
	{
		destroy();
	}

	native private void destroy_void(long pNativeObject);
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	native private void destroy_void_NoVirtual(long pNativeObject);
	protected void destroy_NoVirtual()
	{
		destroy_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setRenderingDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingDistance(distParamValue);
	}

	native private void setRenderingDistance_Real(long pNativeObject, double dist);
	public void setRenderingDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingDistance_void_callback()
	{
		double returnValue = getRenderingDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingDistance_void(long pNativeObject);
	public double getRenderingDistance()
	{
		double returnValue = getRenderingDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingDistance_NoVirtual()
	{
		double returnValue = getRenderingDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSquaredRenderingDistance_void_callback()
	{
		double returnValue = getSquaredRenderingDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSquaredRenderingDistance_void(long pNativeObject);
	public double getSquaredRenderingDistance()
	{
		double returnValue = getSquaredRenderingDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSquaredRenderingDistance_void_NoVirtual(long pNativeObject);
	protected double getSquaredRenderingDistance_NoVirtual()
	{
		double returnValue = getSquaredRenderingDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  boolean isVisible_void_callback()
	{
		boolean returnValue = isVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_void(long pNativeObject);
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCastShadows_ev_bool_callback(boolean castShadows)
	{
		boolean castShadowsParamValue = castShadows;
		setCastShadows(castShadowsParamValue);
	}

	native private void setCastShadows_ev_bool(long pNativeObject, boolean castShadows);
	public void setCastShadows(boolean castShadows)
	{
		boolean castShadowsParamValue = castShadows;
		setCastShadows_ev_bool(this.nativeObject.pointer, castShadowsParamValue);
	}
	native private void setCastShadows_ev_bool_NoVirtual(long pNativeObject, boolean castShadows);
	protected void setCastShadows_NoVirtual(boolean castShadows)
	{
		boolean castShadowsParamValue = castShadows;
		setCastShadows_ev_bool_NoVirtual(this.nativeObject.pointer, castShadowsParamValue);
	}

	protected  boolean getCastShadows_void_callback()
	{
		boolean returnValue = getCastShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCastShadows_void(long pNativeObject);
	//// Will the geometry from this object cast shadows?
	public boolean getCastShadows()
	{
		boolean returnValue = getCastShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCastShadows_void_NoVirtual(long pNativeObject);
	protected boolean getCastShadows_NoVirtual()
	{
		boolean returnValue = getCastShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRegionDimensions_CVector3_callback(long size)
	{
		com.earthview.world.spatial.math.Vector3 sizeParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		sizeParamValue.setDelegate(true);
		sizeParamValue.setInstancePointer(new InstancePointer(size));
		IClassFactory sizeParamValueClassFactory = GlobalClassFactoryMap.get(sizeParamValue.getCppInstanceTypeName());
		if (sizeParamValueClassFactory != null)
		{
			sizeParamValue.setDelegate(true);
			sizeParamValue = (com.earthview.world.spatial.math.Vector3)sizeParamValueClassFactory.create();
			sizeParamValue.setDelegate(true);
			sizeParamValue.setInstancePointer(new InstancePointer(size));
		}
		setRegionDimensions(sizeParamValue);
	}

	native private void setRegionDimensions_CVector3(long pNativeObject, long size);
	public void setRegionDimensions(com.earthview.world.spatial.math.Vector3 size)
	{
		long sizeParamValue = size.nativeObject.pointer;
		setRegionDimensions_CVector3(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setRegionDimensions_CVector3_NoVirtual(long pNativeObject, long size);
	protected void setRegionDimensions_NoVirtual(com.earthview.world.spatial.math.Vector3 size)
	{
		long sizeParamValue = size.nativeObject.pointer;
		setRegionDimensions_CVector3_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	protected  long getRegionDimensions_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getRegionDimensions();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRegionDimensions_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getRegionDimensions()
	{
		long returnValue = getRegionDimensions_void(this.nativeObject.pointer);
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
	native private long getRegionDimensions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getRegionDimensions_NoVirtual()
	{
		long returnValue = getRegionDimensions_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setOrigin_CVector3_callback(long origin)
	{
		com.earthview.world.spatial.math.Vector3 originParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		originParamValue.setDelegate(true);
		originParamValue.setInstancePointer(new InstancePointer(origin));
		IClassFactory originParamValueClassFactory = GlobalClassFactoryMap.get(originParamValue.getCppInstanceTypeName());
		if (originParamValueClassFactory != null)
		{
			originParamValue.setDelegate(true);
			originParamValue = (com.earthview.world.spatial.math.Vector3)originParamValueClassFactory.create();
			originParamValue.setDelegate(true);
			originParamValue.setInstancePointer(new InstancePointer(origin));
		}
		setOrigin(originParamValue);
	}

	native private void setOrigin_CVector3(long pNativeObject, long origin);
	/**
	 * 设置几何体的原点
	 * @param origin 原点坐标
	 */
	public void setOrigin(com.earthview.world.spatial.math.Vector3 origin)
	{
		long originParamValue = origin.nativeObject.pointer;
		setOrigin_CVector3(this.nativeObject.pointer, originParamValue);
	}
	native private void setOrigin_CVector3_NoVirtual(long pNativeObject, long origin);
	protected void setOrigin_NoVirtual(com.earthview.world.spatial.math.Vector3 origin)
	{
		long originParamValue = origin.nativeObject.pointer;
		setOrigin_CVector3_NoVirtual(this.nativeObject.pointer, originParamValue);
	}

	protected  long getOrigin_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getOrigin();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOrigin_void(long pNativeObject);
	/**
	 * 得到几何体的原点
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getOrigin()
	{
		long returnValue = getOrigin_void(this.nativeObject.pointer);
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
	native private long getOrigin_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getOrigin_NoVirtual()
	{
		long returnValue = getOrigin_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setVisibilityFlags_ev_uint32(long pNativeObject, long flags);
	/**
	 * 设置所有区域的可见性标记
	 * @param flags 标识
	 */
	public void setVisibilityFlags(long flags)
	{
		long flagsParamValue = flags;
		setVisibilityFlags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
	}
	native private long getVisibilityFlags_void(long pNativeObject);
	/**
	 * 返回区域的可见性标识
	 * @param  
	 * @return 返回区域的可见性标识
	 */
	public long getVisibilityFlags()
	{
		long returnValue = getVisibilityFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup(queueIDParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	protected  short getRenderQueueGroup_void_callback()
	{
		short returnValue = getRenderQueueGroup();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRenderQueueGroup_void(long pNativeObject);
	public short getRenderQueueGroup()
	{
		short returnValue = getRenderQueueGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRenderQueueGroup_void_NoVirtual(long pNativeObject);
	protected short getRenderQueueGroup_NoVirtual()
	{
		short returnValue = getRenderQueueGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	//// @copydoc CMovableObject::visitRenderables
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	///struct EV_GRAPHIC_DLL RegionPair
	///{
	///	ev_uint32 first;
	///	EarthView::World::Graphic::CStaticGeometry::CStaticRegion* second;
	///};
	public static class StaticRegionPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::StaticRegionPair", new StaticRegionPairClassFactory());
		}

		public StaticRegionPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StaticRegionPair", null);
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint32 (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_uint32(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegion get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
			}
			return __returnValue;
		}
		
		native private void set_second_CStaticRegion (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.StaticGeometry.StaticRegion second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CStaticRegion(this.nativeObject.pointer, secondParamValue);
		}
		
		public StaticRegionPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticRegionPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StaticRegionPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticRegionPair obj = null;
 			if(baseObj instanceof StaticRegionPair)
			{
				obj = (StaticRegionPair)baseObj;
			} else {
				obj = new StaticRegionPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StaticRegionPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticRegionPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticRegionPair emptyInstance = new StaticRegionPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Iterator for iterating over contained regions
	///typedef EarthView::World::Core::CMapIterator<RegionMap> RegionIterator;
	public static class StaticRegionIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator", new StaticRegionIteratorClassFactory());
		}

		public StaticRegionIterator(com.earthview.world.graphic.StaticGeometry.StaticRegionMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("StaticRegionIterator", list);
		}

		public StaticRegionIterator(com.earthview.world.graphic.StaticGeometry.StaticRegionIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("StaticRegionIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private String nextKey_void(long pNativeObject);
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegion nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.StaticGeometry.StaticRegion>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegion next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.StaticGeometry.StaticRegion __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegion(CreatedWhenConstruct.CWC_NotToCreate, "CStaticRegion");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegion)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CStaticRegion");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegionPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticRegionPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegionPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticRegionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StaticRegionPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegionPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticRegionPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegionPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticRegionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StaticRegionPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.StaticGeometry.StaticRegionPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.StaticGeometry.StaticRegionPair __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegionPair(CreatedWhenConstruct.CWC_NotToCreate, "StaticRegionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StaticRegionPair");
			}
			return __returnValue;
		}
		public StaticRegionIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StaticRegionIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StaticRegionIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StaticRegionIterator obj = null;
 			if(baseObj instanceof StaticRegionIterator)
			{
				obj = (StaticRegionIterator)baseObj;
			} else {
				obj = new StaticRegionIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StaticRegionIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StaticRegionIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StaticRegionIterator emptyInstance = new StaticRegionIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getRegionIterator_void(long pNativeObject);
	//// Get an iterator over the regions in this geometry
	public com.earthview.world.graphic.StaticGeometry.StaticRegionIterator getRegionIterator()
	{
		long returnValue = getRegionIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.StaticGeometry.StaticRegionIterator __returnValue = new com.earthview.world.graphic.StaticGeometry.StaticRegionIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StaticRegionIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StaticGeometry.StaticRegionIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StaticRegionIterator");
		}
		return __returnValue;
	}
	public StaticGeometry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StaticGeometry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRegion_CAxisAlignedBox_ev_bool(long pNativeObject, String method);
	native protected void register_getRegion_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(long pNativeObject, String method);
	native protected void register_getRegion_ev_uint32(long pNativeObject, String method);
	native protected void register_getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_packIndex_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getRegionBounds_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getRegionCentre_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_calculateBounds_CVertexData_CVector3_CQuaternion_CVector3(long pNativeObject, String method);
	native protected void register_addEntity_CEntity_CVector3_CQuaternion_CVector3(long pNativeObject, String method);
	native protected void register_addEntity_CEntity_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_addEntity_CEntity_CVector3(long pNativeObject, String method);
	native protected void register_addSceneNode_CSceneNode(long pNativeObject, String method);
	native protected void register_build_void(long pNativeObject, String method);
	native protected void register_destroy_void(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_setRenderingDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingDistance_void(long pNativeObject, String method);
	native protected void register_getSquaredRenderingDistance_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_setRegionDimensions_CVector3(long pNativeObject, String method);
	native protected void register_getRegionDimensions_void(long pNativeObject, String method);
	native protected void register_setOrigin_CVector3(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRegion_CAxisAlignedBox_ev_bool(this.nativeObject.pointer, "getRegion_CAxisAlignedBox_ev_bool_callback");
			this.register_getRegion_CVector3_ev_bool(this.nativeObject.pointer, "getRegion_CVector3_ev_bool_callback");
			this.register_getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, "getRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_callback");
			this.register_getRegion_ev_uint32(this.nativeObject.pointer, "getRegion_ev_uint32_callback");
			this.register_getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getRegionIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_packIndex_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "packIndex_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getRegionBounds_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getRegionBounds_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getRegionCentre_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getRegionCentre_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_calculateBounds_CVertexData_CVector3_CQuaternion_CVector3(this.nativeObject.pointer, "calculateBounds_CVertexData_CVector3_CQuaternion_CVector3_callback");
			this.register_addEntity_CEntity_CVector3_CQuaternion_CVector3(this.nativeObject.pointer, "addEntity_CEntity_CVector3_CQuaternion_CVector3_callback");
			this.register_addEntity_CEntity_CVector3_CQuaternion(this.nativeObject.pointer, "addEntity_CEntity_CVector3_CQuaternion_callback");
			this.register_addEntity_CEntity_CVector3(this.nativeObject.pointer, "addEntity_CEntity_CVector3_callback");
			this.register_addSceneNode_CSceneNode(this.nativeObject.pointer, "addSceneNode_CSceneNode_callback");
			this.register_build_void(this.nativeObject.pointer, "build_void_callback");
			this.register_destroy_void(this.nativeObject.pointer, "destroy_void_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_setRenderingDistance_Real(this.nativeObject.pointer, "setRenderingDistance_Real_callback");
			this.register_getRenderingDistance_void(this.nativeObject.pointer, "getRenderingDistance_void_callback");
			this.register_getSquaredRenderingDistance_void(this.nativeObject.pointer, "getSquaredRenderingDistance_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_setRegionDimensions_CVector3(this.nativeObject.pointer, "setRegionDimensions_CVector3_callback");
			this.register_getRegionDimensions_void(this.nativeObject.pointer, "getRegionDimensions_void_callback");
			this.register_setOrigin_CVector3(this.nativeObject.pointer, "setOrigin_CVector3_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
		}
	}
	
	public static StaticGeometry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StaticGeometry obj = null;
 		if(baseObj instanceof StaticGeometry)
		{
			obj = (StaticGeometry)baseObj;
		} else {
			obj = new StaticGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStaticGeometry");
			obj.increaseCast();
		}

		return obj;
	}
}
