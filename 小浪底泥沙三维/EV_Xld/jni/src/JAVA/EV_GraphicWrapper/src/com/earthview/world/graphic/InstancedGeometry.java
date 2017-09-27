package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedGeometry extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry", new InstancedGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCInstancedGeometryProxy", new InstancedGeometryClassFactory());
	}

	//// Saved link between EarthView::World::Graphic::CSubMesh at a LOD and vertex/index data
	//// May point to original or optimised geometry
	public static class SubMeshLodInstancedGeometryLink extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink", new SubMeshLodInstancedGeometryLinkClassFactory());
		}

		public SubMeshLodInstancedGeometryLink() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshLodInstancedGeometryLink", null);
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
		
		public SubMeshLodInstancedGeometryLink(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshLodInstancedGeometryLink(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshLodInstancedGeometryLink fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshLodInstancedGeometryLink obj = null;
 			if(baseObj instanceof SubMeshLodInstancedGeometryLink)
			{
				obj = (SubMeshLodInstancedGeometryLink)baseObj;
			} else {
				obj = new SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshLodInstancedGeometryLink");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshLodInstancedGeometryLinkClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshLodInstancedGeometryLink emptyInstance = new SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshLodInstancedGeometryLinkList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList", new SubMeshLodInstancedGeometryLinkListClassFactory());
		}

		public SubMeshLodInstancedGeometryLinkList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshLodInstancedGeometryLinkList", null);
		}

		native private void push_back_SubMeshLodInstancedGeometryLink(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_SubMeshLodInstancedGeometryLink(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLink");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLink");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_SubMeshLodInstancedGeometryLink(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_SubMeshLodInstancedGeometryLink(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLink");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLink");
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
		public SubMeshLodInstancedGeometryLinkList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshLodInstancedGeometryLinkList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshLodInstancedGeometryLinkList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshLodInstancedGeometryLinkList obj = null;
 			if(baseObj instanceof SubMeshLodInstancedGeometryLinkList)
			{
				obj = (SubMeshLodInstancedGeometryLinkList)baseObj;
			} else {
				obj = new SubMeshLodInstancedGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshLodInstancedGeometryLinkList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshLodInstancedGeometryLinkListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshLodInstancedGeometryLinkList emptyInstance = new SubMeshLodInstancedGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshInstancedGeometryLookup extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup", new SubMeshInstancedGeometryLookupClassFactory());
		}

		native private boolean push_CSubMesh_SubMeshLodInstancedGeometryLinkList(long pNativeObject, long ref_key, long ref_val);
		public boolean push(com.earthview.world.graphic.SubMesh ref_key, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList> ref_val)
		{
			long ref_keyParamValue = (ref_key == null ? 0L : ref_key.nativeObject.pointer);
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_CSubMesh_SubMeshLodInstancedGeometryLinkList(this.nativeObject.pointer, ref_keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_CSubMesh(long pNativeObject, long key);
		public boolean exist(com.earthview.world.graphic.SubMesh key)
		{
			long keyParamValue = (key == null ? 0L : key.nativeObject.pointer);
			boolean returnValue = exist_CSubMesh(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_CSubMesh(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList> OperatorIndex(com.earthview.world.graphic.SubMesh key)
		{
			long keyParamValue = (key == null ? 0L : key.nativeObject.pointer);
			long returnValue = OperatorIndex_CSubMesh(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_CSubMesh(long pNativeObject, long key);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList> get(com.earthview.world.graphic.SubMesh key)
		{
			long keyParamValue = (key == null ? 0L : key.nativeObject.pointer);
			long returnValue = get_CSubMesh(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_CSubMesh(long pNativeObject, long key);
		public void erase(com.earthview.world.graphic.SubMesh key)
		{
			long keyParamValue = (key == null ? 0L : key.nativeObject.pointer);
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
		public SubMeshInstancedGeometryLookup() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshInstancedGeometryLookup", null);
		}

		public SubMeshInstancedGeometryLookup(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshInstancedGeometryLookup(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshInstancedGeometryLookup fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshInstancedGeometryLookup obj = null;
 			if(baseObj instanceof SubMeshInstancedGeometryLookup)
			{
				obj = (SubMeshInstancedGeometryLookup)baseObj;
			} else {
				obj = new SubMeshInstancedGeometryLookup(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshInstancedGeometryLookup");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshInstancedGeometryLookupClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshInstancedGeometryLookup emptyInstance = new SubMeshInstancedGeometryLookup(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Structure recording a queued submesh for the build
	public static class QueuedInstancedSubMesh extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh", new QueuedInstancedSubMeshClassFactory());
		}

		public QueuedInstancedSubMesh() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedInstancedSubMesh", null);
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
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList get_geometryLodList()
		{
			long jniValue = get_geometryLodList_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLinkList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLinkList");
			}
			return __returnValue;
		}
		
		native private void set_geometryLodList_SubMeshLodInstancedGeometryLinkList (long pNativeObject, long value);
		public void set_geometryLodList(com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLinkList geometryLodList)
		{
			long geometryLodListParamValue = (geometryLodList == null ? 0L : geometryLodList.nativeObject.pointer);
			
			set_geometryLodList_SubMeshLodInstancedGeometryLinkList(this.nativeObject.pointer, geometryLodListParamValue);
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
		
		native private long get_ID_void(long pNativeObject);
		public long get_ID()
		{
			long jniValue = get_ID_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_ID_ev_uint32 (long pNativeObject, long value);
		public void set_ID(long ID)
		{
			long IDParamValue = ID;
			
			set_ID_ev_uint32(this.nativeObject.pointer, IDParamValue);
		}
		
		public QueuedInstancedSubMesh(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedInstancedSubMesh(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedInstancedSubMesh fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedInstancedSubMesh obj = null;
 			if(baseObj instanceof QueuedInstancedSubMesh)
			{
				obj = (QueuedInstancedSubMesh)baseObj;
			} else {
				obj = new QueuedInstancedSubMesh(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedInstancedSubMesh");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedInstancedSubMeshClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedInstancedSubMesh emptyInstance = new QueuedInstancedSubMesh(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QueuedInstancedSubMeshList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList", new QueuedInstancedSubMeshListClassFactory());
		}

		public QueuedInstancedSubMeshList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedInstancedSubMeshList", null);
		}

		native private void push_back_QueuedInstancedSubMesh(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_QueuedInstancedSubMesh(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_QueuedInstancedSubMesh(long pNativeObject, long pos, long t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_QueuedInstancedSubMesh(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh>(new InstancePointer(returnValue));
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
		public QueuedInstancedSubMeshList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedInstancedSubMeshList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedInstancedSubMeshList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedInstancedSubMeshList obj = null;
 			if(baseObj instanceof QueuedInstancedSubMeshList)
			{
				obj = (QueuedInstancedSubMeshList)baseObj;
			} else {
				obj = new QueuedInstancedSubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedInstancedSubMeshList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedInstancedSubMeshListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedInstancedSubMeshList emptyInstance = new QueuedInstancedSubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QueuedInstancedSubMeshOriginList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList", new QueuedInstancedSubMeshOriginListClassFactory());
		}

		public QueuedInstancedSubMeshOriginList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedInstancedSubMeshOriginList", null);
		}

		native private void push_back_EVString(long pNativeObject, String t);
		public void push_back(String t)
		{
			String tParamValue = t;
			push_back_EVString(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public StringPointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public StringPointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_EVString(long pNativeObject, long pos, String t);
		public void insert(long pos, String t)
		{
			long posParamValue = pos;
			String tParamValue = t;
			insert_ev_uint32_EVString(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public StringPointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public StringPointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
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
		public QueuedInstancedSubMeshOriginList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedInstancedSubMeshOriginList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedInstancedSubMeshOriginList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedInstancedSubMeshOriginList obj = null;
 			if(baseObj instanceof QueuedInstancedSubMeshOriginList)
			{
				obj = (QueuedInstancedSubMeshOriginList)baseObj;
			} else {
				obj = new QueuedInstancedSubMeshOriginList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedInstancedSubMeshOriginList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedInstancedSubMeshOriginListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedInstancedSubMeshOriginList emptyInstance = new QueuedInstancedSubMeshOriginList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Structure recording a queued geometry for low level builds
	public static class QueuedInstancedGeometry extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry", new QueuedInstancedGeometryClassFactory());
		}

		public QueuedInstancedGeometry() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedInstancedGeometry", null);
		}

		native private long get_geometry_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink get_geometry()
		{
			long jniValue = get_geometry_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink __returnValue = new com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshLodInstancedGeometryLink");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SubMeshLodInstancedGeometryLink");
			}
			return __returnValue;
		}
		
		native private void set_geometry_SubMeshLodInstancedGeometryLink (long pNativeObject, long value);
		public void set_geometry(com.earthview.world.graphic.InstancedGeometry.SubMeshLodInstancedGeometryLink geometry)
		{
			long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
			
			set_geometry_SubMeshLodInstancedGeometryLink(this.nativeObject.pointer, geometryParamValue);
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
		
		native private long get_ID_void(long pNativeObject);
		public long get_ID()
		{
			long jniValue = get_ID_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_ID_ev_uint32 (long pNativeObject, long value);
		public void set_ID(long ID)
		{
			long IDParamValue = ID;
			
			set_ID_ev_uint32(this.nativeObject.pointer, IDParamValue);
		}
		
		public QueuedInstancedGeometry(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedInstancedGeometry(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedInstancedGeometry fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedInstancedGeometry obj = null;
 			if(baseObj instanceof QueuedInstancedGeometry)
			{
				obj = (QueuedInstancedGeometry)baseObj;
			} else {
				obj = new QueuedInstancedGeometry(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedInstancedGeometry");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedInstancedGeometryClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedInstancedGeometry emptyInstance = new QueuedInstancedGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class QueuedInstancedGeometryList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList", new QueuedInstancedGeometryListClassFactory());
		}

		public QueuedInstancedGeometryList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("QueuedInstancedGeometryList", null);
		}

		native private void push_back_QueuedInstancedGeometry(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_QueuedInstancedGeometry(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_QueuedInstancedGeometry(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_QueuedInstancedGeometry(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry>(new InstancePointer(returnValue));
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
		public QueuedInstancedGeometryList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public QueuedInstancedGeometryList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static QueuedInstancedGeometryList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			QueuedInstancedGeometryList obj = null;
 			if(baseObj instanceof QueuedInstancedGeometryList)
			{
				obj = (QueuedInstancedGeometryList)baseObj;
			} else {
				obj = new QueuedInstancedGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "QueuedInstancedGeometryList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class QueuedInstancedGeometryListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			QueuedInstancedGeometryList emptyInstance = new QueuedInstancedGeometryList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// forward declarations
	public static class InstancedGeometryBucket extends com.earthview.world.graphic.SimpleRenderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket", new InstancedGeometryBucketClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::JCInstancedGeometryBucketProxy", new InstancedGeometryBucketClassFactory());
		}

		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		///cmoveobject
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

		native private boolean getCastsShadows_void(long pNativeObject);
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

		public InstancedGeometryBucket(com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket ref_parent, String formatString, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData) {
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
			Create("JCInstancedGeometryBucketProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedGeometry$InstancedGeometryBucket".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public InstancedGeometryBucket(String name, com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket ref_parent, String formatString, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer formatStringPtr = new BasePointer(formatString);
			list.add("formatString", formatStringPtr.get());
			BasePointer vDataPtr = new BasePointer(vData);
			list.add("vData", vDataPtr.get());
			BasePointer iDataPtr = new BasePointer(iData);
			list.add("iData", iDataPtr.get());
			Create("JCInstancedGeometryBucketProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedGeometry$InstancedGeometryBucket".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public InstancedGeometryBucket(com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket ref_parent, String formatString, com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket bucket) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer formatStringPtr = new BasePointer(formatString);
			list.add("formatString", formatStringPtr.get());
			BasePointer bucketPtr = new BasePointer(bucket);
			list.add("bucket", bucketPtr.get());
			Create("JCInstancedGeometryBucketProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedGeometry$InstancedGeometryBucket".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public InstancedGeometryBucket(String name, com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket ref_parent, String formatString, com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket bucket) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer formatStringPtr = new BasePointer(formatString);
			list.add("formatString", formatStringPtr.get());
			BasePointer bucketPtr = new BasePointer(bucket);
			list.add("bucket", bucketPtr.get());
			Create("JCInstancedGeometryBucketProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedGeometry$InstancedGeometryBucket".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedMaterialBucket");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstancedMaterialBucket");
			}
			return __returnValue;
		}
		native private long getVertexData_void(long pNativeObject);
		//// Get the vertex data for this geometry
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
		//// Get the index data for this geometry
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
		native private long getTechnique_void(long pNativeObject);
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
		native private long getMaterial_void(long pNativeObject);
		//// @copydoc CRenderable::getMaterial
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

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
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

		protected  int getNumWorldTransforms_void_callback()
		{
			int returnValue = getNumWorldTransforms();
			int __returnValue = returnValue;
			return __returnValue;
		}

		native private int getNumWorldTransforms_void(long pNativeObject);
		public int getNumWorldTransforms()
		{
			int returnValue = getNumWorldTransforms_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getNumWorldTransforms_void_NoVirtual(long pNativeObject);
		protected int getNumWorldTransforms_NoVirtual()
		{
			int returnValue = getNumWorldTransforms_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
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

		native private String getFormatString_void(long pNativeObject);
		public String getFormatString()
		{
			String returnValue = getFormatString_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean assign_QueuedInstancedGeometry(long pNativeObject, long qsm);
		public boolean assign(com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry qsm)
		{
			long qsmParamValue = (qsm == null ? 0L : qsm.nativeObject.pointer);
			boolean returnValue = assign_QueuedInstancedGeometry(this.nativeObject.pointer, qsmParamValue);
			return returnValue;
		}
		native private void build_void(long pNativeObject);
		//// Build
		public void build()
		{
			build_void(this.nativeObject.pointer);
		}
		native private long getAABB_void(long pNativeObject);
		//// retun the BoundingBox information. Usefull when cloning the batch instance.
		public com.earthview.world.spatial.math.AxisAlignedBox getAABB()
		{
			long returnValue = getAABB_void(this.nativeObject.pointer);
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
		public InstancedGeometryBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedGeometryBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public com.earthview.world.graphic.SimpleRenderable.SimpleRenderableInternal getRenderable()
		{
			return super.getRenderable_NoVirtual();
		}
		public void setRenderOperation(com.earthview.world.graphic.RenderOperation rend)
		{
			super.setRenderOperation_NoVirtual(rend);
		}
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			super.getRenderOperation_NoVirtual(op);
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
		 * 获取移动对象类型的名称
		 * @param  
		 * @return 名称
		 */
		public String getMovableType()
		{
			return super.getMovableType_NoVirtual();
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
		 * 通报当前相机内部方法
		 * @param cam 摄像机
		 */
		public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
		{
			super._notifyCurrentCamera_NoVirtual(ref_cam);
		}
		/**
		 * 获取模型坐标系下的包围盒
		 * @param  
		 * @return 边框盒
		 */
		public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
		{
			return super.getBoundingBox_NoVirtual();
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
		 * 更新渲染队列内部方法
		 * @param queue 渲染队列
		 */
		public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
		{
			super._updateRenderQueue_NoVirtual(queue);
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
		 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
		 * @param  
		 */
		public boolean isVisible()
		{
			return super.isVisible_NoVirtual();
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
		 * 获取可移动对象的类型标识
		 * @param  
		 */
		public long getTypeFlags()
		{
			return super.getTypeFlags_NoVirtual();
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
		public com.earthview.world.graphic.EdgeData getEdgeList()
		{
			return super.getEdgeList_NoVirtual();
		}
		public boolean hasEdgeList()
		{
			return super.hasEdgeList_NoVirtual();
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
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
		}
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
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
		
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getRenderable_void(long pNativeObject, String method);
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_setRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
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
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getRenderable_void(this.nativeObject.pointer, "getRenderable_void_callback");
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_setRenderOperation_CRenderOperation(this.nativeObject.pointer, "setRenderOperation_CRenderOperation_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
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
		
		public static InstancedGeometryBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedGeometryBucket obj = null;
 			if(baseObj instanceof InstancedGeometryBucket)
			{
				obj = (InstancedGeometryBucket)baseObj;
			} else {
				obj = new InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstancedGeometryBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedGeometryBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedGeometryBucket emptyInstance = new InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class InstancedGeometryBucketList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList", new InstancedGeometryBucketListClassFactory());
		}

		public InstancedGeometryBucketList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("InstancedGeometryBucketList", null);
		}

		native private void push_back_CInstancedGeometryBucket(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CInstancedGeometryBucket(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CInstancedGeometryBucket(long pNativeObject, long pos, long t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CInstancedGeometryBucket(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
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
		public InstancedGeometryBucketList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedGeometryBucketList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstancedGeometryBucketList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedGeometryBucketList obj = null;
 			if(baseObj instanceof InstancedGeometryBucketList)
			{
				obj = (InstancedGeometryBucketList)baseObj;
			} else {
				obj = new InstancedGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InstancedGeometryBucketList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedGeometryBucketListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedGeometryBucketList emptyInstance = new InstancedGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class InstancedObject extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedObject", new InstancedObjectClassFactory());
		}

		public enum TransformSpace implements INativeEnum<TransformSpace> {
			TS_LOCAL(TransformSpaceHelper.ENUM_VALUES[0]),
			TS_PARENT(TransformSpaceHelper.ENUM_VALUES[1]),
			TS_WORLD(TransformSpaceHelper.ENUM_VALUES[2]);
			private int value;
			TransformSpace(int i) {
				this.value = i;
			}
			public TransformSpace getEnum(int val) {
				return toEnum(val);
			}
			public int getValue() {
				return this.value;
			}
			public static final TransformSpace toEnum(int retval) {
				if(retval == TS_LOCAL.value){
					return TS_LOCAL;
				}
				else if(retval == TS_PARENT.value){
					return TS_PARENT;
				}
				else if(retval == TS_WORLD.value){
					return TS_WORLD;
				}
				throw new RuntimeException("wrong number in jni call for an enum!");
			}
		}
		static class TransformSpaceHelper {
			public static final int[] ENUM_VALUES = getEnumValues();
			private static native int[] getEnumValues();
		}
		
		//// list of Geometry Buckets that contains the instanced object
		public InstancedObject(int index) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer indexPtr = new BasePointer(index);
			list.add("index", indexPtr.get());
			Create("CInstancedObject", list);
		}

		public InstancedObject(int index, com.earthview.world.graphic.SkeletonInstance ref_skeleton, com.earthview.world.graphic.AnimationStateSet animations) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer indexPtr = new BasePointer(index);
			list.add("index", indexPtr.get());
			BasePointer ref_skeletonPtr = new BasePointer(ref_skeleton);
			list.add("ref_skeleton", ref_skeletonPtr.get());
			BasePointer animationsPtr = new BasePointer(animations);
			list.add("animations", animationsPtr.get());
			Create("CInstancedObject", list);
		}

		native private void setPosition_CVector3(long pNativeObject, long position);
		public void setPosition(com.earthview.world.spatial.math.Vector3 position)
		{
			long positionParamValue = position.nativeObject.pointer;
			setPosition_CVector3(this.nativeObject.pointer, positionParamValue);
		}
		native private long getPosition_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 getPosition()
		{
			long returnValue = getPosition_void(this.nativeObject.pointer);
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
		native private void yaw_CRadian(long pNativeObject, long angle);
		public void yaw(com.earthview.world.spatial.math.Radian angle)
		{
			long angleParamValue = angle.nativeObject.pointer;
			yaw_CRadian(this.nativeObject.pointer, angleParamValue);
		}
		native private void pitch_CRadian(long pNativeObject, long angle);
		public void pitch(com.earthview.world.spatial.math.Radian angle)
		{
			long angleParamValue = angle.nativeObject.pointer;
			pitch_CRadian(this.nativeObject.pointer, angleParamValue);
		}
		native private void roll_CRadian(long pNativeObject, long angle);
		public void roll(com.earthview.world.spatial.math.Radian angle)
		{
			long angleParamValue = angle.nativeObject.pointer;
			roll_CRadian(this.nativeObject.pointer, angleParamValue);
		}
		native private void rotate_CQuaternion(long pNativeObject, long q);
		public void rotate(com.earthview.world.spatial.math.Quaternion q)
		{
			long qParamValue = q.nativeObject.pointer;
			rotate_CQuaternion(this.nativeObject.pointer, qParamValue);
		}
		native private void setScale_CVector3(long pNativeObject, long scale);
		public void setScale(com.earthview.world.spatial.math.Vector3 scale)
		{
			long scaleParamValue = scale.nativeObject.pointer;
			setScale_CVector3(this.nativeObject.pointer, scaleParamValue);
		}
		native private long getScale_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 getScale()
		{
			long returnValue = getScale_void(this.nativeObject.pointer);
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
		native private void setOrientation_CQuaternion(long pNativeObject, long q);
		public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
		{
			long qParamValue = q.nativeObject.pointer;
			setOrientation_CQuaternion(this.nativeObject.pointer, qParamValue);
		}
		native private void setPositionAndOrientation_CVector3_CQuaternion(long pNativeObject, long p, long q);
		public void setPositionAndOrientation(com.earthview.world.spatial.math.Vector3 p, com.earthview.world.spatial.math.Quaternion q)
		{
			long pParamValue = p.nativeObject.pointer;
			long qParamValue = q.nativeObject.pointer;
			setPositionAndOrientation_CVector3_CQuaternion(this.nativeObject.pointer, pParamValue, qParamValue);
		}
		native private long getOrientation_void(long pNativeObject);
		public com.earthview.world.spatial.math.Quaternion getOrientation()
		{
			long returnValue = getOrientation_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			}
			return __returnValue;
		}
		native private void addBucketToList_CInstancedGeometryBucket(long pNativeObject, long ref_bucket);
		public void addBucketToList(com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket ref_bucket)
		{
			long ref_bucketParamValue = (ref_bucket == null ? 0L : ref_bucket.nativeObject.pointer);
			addBucketToList_CInstancedGeometryBucket(this.nativeObject.pointer, ref_bucketParamValue);
		}
		native private void needUpdate_void(long pNativeObject);
		public void needUpdate()
		{
			needUpdate_void(this.nativeObject.pointer);
		}
		native private long getGeometryBucketList_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList getGeometryBucketList()
		{
			long returnValue = getGeometryBucketList_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate, "InstancedGeometryBucketList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstancedGeometryBucketList");
			}
			return __returnValue;
		}
		native private void translate_CMatrix3_CVector3(long pNativeObject, long axes, long move);
		public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
		{
			long axesParamValue = axes.nativeObject.pointer;
			long moveParamValue = move.nativeObject.pointer;
			translate_CMatrix3_CVector3(this.nativeObject.pointer, axesParamValue, moveParamValue);
		}
		native private void translate_CVector3(long pNativeObject, long d);
		public void translate(com.earthview.world.spatial.math.Vector3 d)
		{
			long dParamValue = d.nativeObject.pointer;
			translate_CVector3(this.nativeObject.pointer, dParamValue);
		}
		native private long getLocalAxes_void(long pNativeObject);
		public com.earthview.world.spatial.math.Matrix3 getLocalAxes()
		{
			long returnValue = getLocalAxes_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
			}
			return __returnValue;
		}
		native private void updateAnimation_void(long pNativeObject);
		public void updateAnimation()
		{
			updateAnimation_void(this.nativeObject.pointer);
		}
		native private long getAnimationState_EVString(long pNativeObject, String name);
		public com.earthview.world.graphic.AnimationState getAnimationState(String name)
		{
			String nameParamValue = name;
			long returnValue = getAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
			}
			return __returnValue;
		}
		native private long getSkeletonInstance_void(long pNativeObject);
		public com.earthview.world.graphic.SkeletonInstance getSkeletonInstance()
		{
			long returnValue = getSkeletonInstance_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SkeletonInstance __returnValue = new com.earthview.world.graphic.SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInstance");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SkeletonInstance)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSkeletonInstance");
			}
			return __returnValue;
		}
		public InstancedObject(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedObject(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstancedObject fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedObject obj = null;
 			if(baseObj instanceof InstancedObject)
			{
				obj = (InstancedObject)baseObj;
			} else {
				obj = new InstancedObject(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstancedObject");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedObjectClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedObject emptyInstance = new InstancedObject(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class InstancedMaterialBucket extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket", new InstancedMaterialBucketClassFactory());
		}

		/// index to current Geometry Buckets for a given geometry format
		public static class InstancedGeometryBucketMap extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap", new InstancedGeometryBucketMapClassFactory());
			}

			public InstancedGeometryBucketMap() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedGeometryBucketMap", null);
			}

			native private boolean push_EVString_CInstancedGeometryBucket(long pNativeObject, String key, long ref_val);
			public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> ref_val)
			{
				String keyParamValue = key;
				long ref_valParamValue = ref_val.nativeObject.pointer;
				boolean returnValue = push_EVString_CInstancedGeometryBucket(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> OperatorIndex(String key)
			{
				String keyParamValue = key;
				long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long get_EVString(long pNativeObject, String key);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> get(String key)
			{
				String keyParamValue = key;
				long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket>(new InstancePointer(returnValue));
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
			public InstancedGeometryBucketMap(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedGeometryBucketMap(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedGeometryBucketMap fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedGeometryBucketMap obj = null;
 				if(baseObj instanceof InstancedGeometryBucketMap)
				{
					obj = (InstancedGeometryBucketMap)baseObj;
				} else {
					obj = new InstancedGeometryBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedGeometryBucketMap");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedGeometryBucketMapClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedGeometryBucketMap emptyInstance = new InstancedGeometryBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public InstancedMaterialBucket(com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket ref_parent, String materialName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer materialNamePtr = new BasePointer(materialName);
			list.add("materialName", materialNamePtr.get());
			Create("CInstancedMaterialBucket", list);
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedLODBucket");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstancedLODBucket");
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
		native private void assign_QueuedInstancedGeometry(long pNativeObject, long ref_qsm);
		//// Assign geometry to this bucket
		public void assign(com.earthview.world.graphic.InstancedGeometry.QueuedInstancedGeometry ref_qsm)
		{
			long ref_qsmParamValue = (ref_qsm == null ? 0L : ref_qsm.nativeObject.pointer);
			assign_QueuedInstancedGeometry(this.nativeObject.pointer, ref_qsmParamValue);
		}
		native private void build_void(long pNativeObject);
		//// Build
		public void build()
		{
			build_void(this.nativeObject.pointer);
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
		///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList> GeometryIterator;
		public static class InstancedGeometryBucketIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator", new InstancedGeometryBucketIteratorClassFactory());
			}

			public InstancedGeometryBucketIterator(com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("InstancedGeometryBucketIterator", list);
			}

			public InstancedGeometryBucketIterator(com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketIterator other) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer otherPtr = new BasePointer(other);
				list.add("other", otherPtr.get());
				Create("InstancedGeometryBucketIterator", list);
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
			public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedGeometryBucket");
				}
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedGeometryBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedGeometryBucket");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedGeometryBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedGeometryBucket");
				}
				return __returnValue;
			}
			public InstancedGeometryBucketIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedGeometryBucketIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedGeometryBucketIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedGeometryBucketIterator obj = null;
 				if(baseObj instanceof InstancedGeometryBucketIterator)
				{
					obj = (InstancedGeometryBucketIterator)baseObj;
				} else {
					obj = new InstancedGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedGeometryBucketIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedGeometryBucketIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedGeometryBucketIterator emptyInstance = new InstancedGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long getGeometryIterator_void(long pNativeObject);
		//// Get an iterator over the contained geometry
		public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketIterator getGeometryIterator()
		{
			long returnValue = getGeometryIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketIterator __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstancedGeometryBucketIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstancedGeometryBucketIterator");
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
		native private long getMaterialBucketMap_void(long pNativeObject);
		//// Return the geometry map
		public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketMap getMaterialBucketMap()
		{
			long returnValue = getMaterialBucketMap_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketMap __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketMap(CreatedWhenConstruct.CWC_NotToCreate, "InstancedGeometryBucketMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket.InstancedGeometryBucketMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstancedGeometryBucketMap");
			}
			return __returnValue;
		}
		native private long getGeometryBucketList_void(long pNativeObject);
		//// Return the geometry list
		public com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList getGeometryBucketList()
		{
			long returnValue = getGeometryBucketList_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList(CreatedWhenConstruct.CWC_NotToCreate, "InstancedGeometryBucketList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucketList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstancedGeometryBucketList");
			}
			return __returnValue;
		}
		native private void updateContainers_CInstancedGeometryBucket_EVString(long pNativeObject, long ref_bucket, String format);
		//// fill in the map and the list
		public void updateContainers(com.earthview.world.graphic.InstancedGeometry.InstancedGeometryBucket ref_bucket, String format)
		{
			long ref_bucketParamValue = (ref_bucket == null ? 0L : ref_bucket.nativeObject.pointer);
			String formatParamValue = format;
			updateContainers_CInstancedGeometryBucket_EVString(this.nativeObject.pointer, ref_bucketParamValue, formatParamValue);
		}
		native private void setLastIndex_ev_int32(long pNativeObject, int index);
		public void setLastIndex(int index)
		{
			int indexParamValue = index;
			setLastIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
		}
		native private int getLastIndex_void(long pNativeObject);
		public int getLastIndex()
		{
			int returnValue = getLastIndex_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void setMaterial_EVString(long pNativeObject, String name);
		public void setMaterial(String name)
		{
			String nameParamValue = name;
			setMaterial_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		public InstancedMaterialBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedMaterialBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstancedMaterialBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedMaterialBucket obj = null;
 			if(baseObj instanceof InstancedMaterialBucket)
			{
				obj = (InstancedMaterialBucket)baseObj;
			} else {
				obj = new InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstancedMaterialBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedMaterialBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedMaterialBucket emptyInstance = new InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class InstancedLODBucket extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket", new InstancedLODBucketClassFactory());
		}

		//// Lookup of CMaterial Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		public static class InstancedMaterialBucketMap extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap", new InstancedMaterialBucketMapClassFactory());
			}

			native private boolean push_ev_uint16_CInstancedMaterialBucket(long pNativeObject, int key, long ref_val);
			public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> ref_val)
			{
				int keyParamValue = key;
				long ref_valParamValue = ref_val.nativeObject.pointer;
				boolean returnValue = push_ev_uint16_CInstancedMaterialBucket(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
				return returnValue;
			}
			native private boolean exist_ev_uint16(long pNativeObject, int key);
			public boolean exist(int key)
			{
				int keyParamValue = key;
				boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
				return returnValue;
			}
			native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> OperatorIndex(int key)
			{
				int keyParamValue = key;
				long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long get_ev_uint16(long pNativeObject, int key);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> get(int key)
			{
				int keyParamValue = key;
				long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void erase_ev_uint16(long pNativeObject, int key);
			public void erase(int key)
			{
				int keyParamValue = key;
				erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
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
			public InstancedMaterialBucketMap() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedMaterialBucketMap", null);
			}

			public InstancedMaterialBucketMap(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedMaterialBucketMap(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedMaterialBucketMap fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedMaterialBucketMap obj = null;
 				if(baseObj instanceof InstancedMaterialBucketMap)
				{
					obj = (InstancedMaterialBucketMap)baseObj;
				} else {
					obj = new InstancedMaterialBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedMaterialBucketMap");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedMaterialBucketMapClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedMaterialBucketMap emptyInstance = new InstancedMaterialBucketMap(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class InstancedMaterialBucketPair extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair", new InstancedMaterialBucketPairClassFactory());
			}

			public InstancedMaterialBucketPair() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedMaterialBucketPair", null);
			}

			native private int get_first_void(long pNativeObject);
			public int get_first()
			{
				int jniValue = get_first_void(this.nativeObject.pointer);
				
				return jniValue;
			}
			
			native private void set_first_ev_uint16 (long pNativeObject, int value);
			public void set_first(int first)
			{
				int firstParamValue = first;
				
				set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
			}
			
			native private long get_second_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket get_second()
			{
				long jniValue = get_second_void(this.nativeObject.pointer);
				
				if(jniValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(jniValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedMaterialBucket");
				}
				return __returnValue;
			}
			
			native private void set_second_CInstancedMaterialBucket (long pNativeObject, long value);
			public void set_second(com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket second)
			{
				long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
				
				set_second_CInstancedMaterialBucket(this.nativeObject.pointer, secondParamValue);
			}
			
			public InstancedMaterialBucketPair(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedMaterialBucketPair(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedMaterialBucketPair fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedMaterialBucketPair obj = null;
 				if(baseObj instanceof InstancedMaterialBucketPair)
				{
					obj = (InstancedMaterialBucketPair)baseObj;
				} else {
					obj = new InstancedMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedMaterialBucketPair");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedMaterialBucketPairClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedMaterialBucketPair emptyInstance = new InstancedMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class InstancedMaterialIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator", new InstancedMaterialIteratorClassFactory());
			}

			public InstancedMaterialIterator(com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketMap lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("InstancedMaterialIterator", list);
			}

			public InstancedMaterialIterator(com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialIterator other) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer otherPtr = new BasePointer(other);
				list.add("other", otherPtr.get());
				Create("InstancedMaterialIterator", list);
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
			native private int nextKey_void(long pNativeObject);
			public int nextKey()
			{
				int returnValue = nextKey_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private long nextValue_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket nextValue()
			{
				long returnValue = nextValue_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedMaterialBucket");
				}
				return __returnValue;
			}
			native private long nextValuePtr_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> nextValuePtr()
			{
				long returnValue = nextValuePtr_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedMaterialBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedMaterialBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedMaterialBucketPair");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedMaterialBucketPair");
				}
				return __returnValue;
			}
			native private long getCurrent_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedMaterialBucketPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialBucketPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedMaterialBucketPair");
				}
				return __returnValue;
			}
			public InstancedMaterialIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedMaterialIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedMaterialIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedMaterialIterator obj = null;
 				if(baseObj instanceof InstancedMaterialIterator)
				{
					obj = (InstancedMaterialIterator)baseObj;
				} else {
					obj = new InstancedMaterialIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedMaterialIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedMaterialIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedMaterialIterator emptyInstance = new InstancedMaterialIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public InstancedLODBucket(com.earthview.world.graphic.InstancedGeometry.BatchInstance ref_parent, int lod, double lodValue) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer lodPtr = new BasePointer(lod);
			list.add("lod", lodPtr.get());
			BasePointer lodValuePtr = new BasePointer(lodValue);
			list.add("lodValue", lodValuePtr.get());
			Create("CInstancedLODBucket", list);
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
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
		native private void assign_QueuedInstancedSubMesh_ev_uint16(long pNativeObject, long ref_qsm, int atLod);
		public void assign(com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh ref_qsm, int atLod)
		{
			long ref_qsmParamValue = (ref_qsm == null ? 0L : ref_qsm.nativeObject.pointer);
			int atLodParamValue = atLod;
			assign_QueuedInstancedSubMesh_ev_uint16(this.nativeObject.pointer, ref_qsmParamValue, atLodParamValue);
		}
		native private void build_void(long pNativeObject);
		//// Build
		public void build()
		{
			build_void(this.nativeObject.pointer);
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
		native private long getMaterialIterator_void(long pNativeObject);
		//// Get an iterator over the materials in this LOD
		public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialIterator getMaterialIterator()
		{
			long returnValue = getMaterialIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialIterator __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstancedMaterialIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket.InstancedMaterialIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstancedMaterialIterator");
			}
			return __returnValue;
		}
		native private void updateContainers_CInstancedMaterialBucket_EVString(long pNativeObject, long ref_bucket, long name);
		//// fill the map
		public void updateContainers(com.earthview.world.graphic.InstancedGeometry.InstancedMaterialBucket ref_bucket, StringPointer name)
		{
			long ref_bucketParamValue = (ref_bucket == null ? 0L : ref_bucket.nativeObject.pointer);
			long nameParamValue = name.nativeObject.pointer;
			updateContainers_CInstancedMaterialBucket_EVString(this.nativeObject.pointer, ref_bucketParamValue, nameParamValue);
		}
		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
		{
			long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
			boolean debugRenderablesParamValue = debugRenderables;
			visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
		}
		public InstancedLODBucket(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InstancedLODBucket(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InstancedLODBucket fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InstancedLODBucket obj = null;
 			if(baseObj instanceof InstancedLODBucket)
			{
				obj = (InstancedLODBucket)baseObj;
			} else {
				obj = new InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInstancedLODBucket");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InstancedLODBucketClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InstancedLODBucket emptyInstance = new InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class BatchInstance extends com.earthview.world.graphic.MovableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance", new BatchInstanceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::JCBatchInstanceProxy", new BatchInstanceClassFactory());
		}

		//// list of LOD Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		public static class InstancedLODBucketList extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList", new InstancedLODBucketListClassFactory());
			}

			public InstancedLODBucketList() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedLODBucketList", null);
			}

			native private void push_back_CInstancedLODBucket(long pNativeObject, long ref_t);
			public void push_back(NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> ref_t)
			{
				long ref_tParamValue = ref_t.nativeObject.pointer;
				push_back_CInstancedLODBucket(this.nativeObject.pointer, ref_tParamValue);
			}
			native private void pop_back_void(long pNativeObject);
			public void pop_back()
			{
				pop_back_void(this.nativeObject.pointer);
			}
			native private long front_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> front()
			{
				long returnValue = front_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long back_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> back()
			{
				long returnValue = back_void(this.nativeObject.pointer);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void insert_ev_uint32_CInstancedLODBucket(long pNativeObject, long pos, long ref_t);
			public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> ref_t)
			{
				long posParamValue = pos;
				long ref_tParamValue = ref_t.nativeObject.pointer;
				insert_ev_uint32_CInstancedLODBucket(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> OperatorIndex(long n)
			{
				long nParamValue = n;
				long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long at_ev_size_t(long pNativeObject, long n);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> at(long n)
			{
				long nParamValue = n;
				long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket>(new InstancePointer(returnValue));
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
			public InstancedLODBucketList(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedLODBucketList(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedLODBucketList fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedLODBucketList obj = null;
 				if(baseObj instanceof InstancedLODBucketList)
				{
					obj = (InstancedLODBucketList)baseObj;
				} else {
					obj = new InstancedLODBucketList(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedLODBucketList");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedLODBucketListClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedLODBucketList emptyInstance = new InstancedLODBucketList(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		///typedef map<ev_uint16, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap;
		///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator;
		public static class InstancedObjectsMap extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap", new InstancedObjectsMapClassFactory());
			}

			native private boolean push_ev_uint16_CInstancedObject(long pNativeObject, int key, long ref_val);
			public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> ref_val)
			{
				int keyParamValue = key;
				long ref_valParamValue = ref_val.nativeObject.pointer;
				boolean returnValue = push_ev_uint16_CInstancedObject(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
				return returnValue;
			}
			native private boolean exist_ev_uint16(long pNativeObject, int key);
			public boolean exist(int key)
			{
				int keyParamValue = key;
				boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
				return returnValue;
			}
			native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> OperatorIndex(int key)
			{
				int keyParamValue = key;
				long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long get_ev_uint16(long pNativeObject, int key);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> get(int key)
			{
				int keyParamValue = key;
				long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private void erase_ev_uint16(long pNativeObject, int key);
			public void erase(int key)
			{
				int keyParamValue = key;
				erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
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
			public InstancedObjectsMap() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedObjectsMap", null);
			}

			public InstancedObjectsMap(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedObjectsMap(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedObjectsMap fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedObjectsMap obj = null;
 				if(baseObj instanceof InstancedObjectsMap)
				{
					obj = (InstancedObjectsMap)baseObj;
				} else {
					obj = new InstancedObjectsMap(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedObjectsMap");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedObjectsMapClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedObjectsMap emptyInstance = new InstancedObjectsMap(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class InstancedObjectsPair extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair", new InstancedObjectsPairClassFactory());
			}

			public InstancedObjectsPair() {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				Create("InstancedObjectsPair", null);
			}

			native private int get_first_void(long pNativeObject);
			public int get_first()
			{
				int jniValue = get_first_void(this.nativeObject.pointer);
				
				return jniValue;
			}
			
			native private void set_first_ev_uint16 (long pNativeObject, int value);
			public void set_first(int first)
			{
				int firstParamValue = first;
				
				set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
			}
			
			native private long get_second_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedObject get_second()
			{
				long jniValue = get_second_void(this.nativeObject.pointer);
				
				if(jniValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedObject __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedObject");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(jniValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedObject)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedObject");
				}
				return __returnValue;
			}
			
			native private void set_second_CInstancedObject (long pNativeObject, long value);
			public void set_second(com.earthview.world.graphic.InstancedGeometry.InstancedObject second)
			{
				long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
				
				set_second_CInstancedObject(this.nativeObject.pointer, secondParamValue);
			}
			
			public InstancedObjectsPair(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedObjectsPair(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedObjectsPair fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedObjectsPair obj = null;
 				if(baseObj instanceof InstancedObjectsPair)
				{
					obj = (InstancedObjectsPair)baseObj;
				} else {
					obj = new InstancedObjectsPair(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedObjectsPair");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedObjectsPairClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedObjectsPair emptyInstance = new InstancedObjectsPair(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		public static class InstancedObjectIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator", new InstancedObjectIteratorClassFactory());
			}

			public InstancedObjectIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsMap lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("InstancedObjectIterator", list);
			}

			public InstancedObjectIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectIterator other) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer otherPtr = new BasePointer(other);
				list.add("other", otherPtr.get());
				Create("InstancedObjectIterator", list);
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
			native private int nextKey_void(long pNativeObject);
			public int nextKey()
			{
				int returnValue = nextKey_void(this.nativeObject.pointer);
				return returnValue;
			}
			native private long nextValue_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedObject nextValue()
			{
				long returnValue = nextValue_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedObject __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedObject");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedObject)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedObject");
				}
				return __returnValue;
			}
			native private long nextValuePtr_void(long pNativeObject);
			public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> nextValuePtr()
			{
				long returnValue = nextValuePtr_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.InstancedObject>(new InstancePointer(returnValue));
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedObject next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedObject __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedObject");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedObject)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedObject");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedObjectsPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedObjectsPair");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedObjectsPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedObjectsPair");
				}
				return __returnValue;
			}
			native private long getCurrent_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair(CreatedWhenConstruct.CWC_NotToCreate, "InstancedObjectsPair");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsPair)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "InstancedObjectsPair");
				}
				return __returnValue;
			}
			public InstancedObjectIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedObjectIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedObjectIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedObjectIterator obj = null;
 				if(baseObj instanceof InstancedObjectIterator)
				{
					obj = (InstancedObjectIterator)baseObj;
				} else {
					obj = new InstancedObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedObjectIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedObjectIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedObjectIterator emptyInstance = new InstancedObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long get_mLodValues_void(long pNativeObject);
		public com.earthview.world.graphic.LodValueList get_mLodValues()
		{
			long jniValue = get_mLodValues_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.LodValueList __returnValue = new com.earthview.world.graphic.LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "LodValueList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LodValueList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LodValueList");
			}
			return __returnValue;
		}
		
		native private void set_mLodValues_LodValueList (long pNativeObject, long value);
		public void set_mLodValues(com.earthview.world.graphic.LodValueList mLodValues)
		{
			long mLodValuesParamValue = mLodValues.nativeObject.pointer;
			
			set_mLodValues_LodValueList(this.nativeObject.pointer, mLodValuesParamValue);
		}
		
		native private long get_mAABB_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox get_mAABB()
		{
			long jniValue = get_mAABB_void(this.nativeObject.pointer);
			
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
		
		native private void set_mAABB_CAxisAlignedBox (long pNativeObject, long value);
		public void set_mAABB(com.earthview.world.spatial.math.AxisAlignedBox mAABB)
		{
			long mAABBParamValue = mAABB.nativeObject.pointer;
			
			set_mAABB_CAxisAlignedBox(this.nativeObject.pointer, mAABBParamValue);
		}
		
		native private double get_mBoundingRadius_void(long pNativeObject);
		public double get_mBoundingRadius()
		{
			double jniValue = get_mBoundingRadius_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mBoundingRadius_Real (long pNativeObject, double value);
		public void set_mBoundingRadius(double mBoundingRadius)
		{
			double mBoundingRadiusParamValue = mBoundingRadius;
			
			set_mBoundingRadius_Real(this.nativeObject.pointer, mBoundingRadiusParamValue);
		}
		
		native private int get_mCurrentLod_void(long pNativeObject);
		public int get_mCurrentLod()
		{
			int jniValue = get_mCurrentLod_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mCurrentLod_ev_uint16 (long pNativeObject, int value);
		public void set_mCurrentLod(int mCurrentLod)
		{
			int mCurrentLodParamValue = mCurrentLod;
			
			set_mCurrentLod_ev_uint16(this.nativeObject.pointer, mCurrentLodParamValue);
		}
		
		native private double get_mLodValue_void(long pNativeObject);
		public double get_mLodValue()
		{
			double jniValue = get_mLodValue_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mLodValue_Real (long pNativeObject, double value);
		public void set_mLodValue(double mLodValue)
		{
			double mLodValueParamValue = mLodValue;
			
			set_mLodValue_Real(this.nativeObject.pointer, mLodValueParamValue);
		}
		
		native private long get_mCamera_void(long pNativeObject);
		public com.earthview.world.graphic.Camera get_mCamera()
		{
			long jniValue = get_mCamera_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCamera");
			}
			return __returnValue;
		}
		
		native private void set_mCamera_CCamera (long pNativeObject, long value);
		public void set_mCamera(com.earthview.world.graphic.Camera mCamera)
		{
			long mCameraParamValue = (mCamera == null ? 0L : mCamera.nativeObject.pointer);
			
			set_mCamera_CCamera(this.nativeObject.pointer, mCameraParamValue);
		}
		
		native private double get_mSquaredViewDepth_void(long pNativeObject);
		public double get_mSquaredViewDepth()
		{
			double jniValue = get_mSquaredViewDepth_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mSquaredViewDepth_Real (long pNativeObject, double value);
		public void set_mSquaredViewDepth(double mSquaredViewDepth)
		{
			double mSquaredViewDepthParamValue = mSquaredViewDepth;
			
			set_mSquaredViewDepth_Real(this.nativeObject.pointer, mSquaredViewDepthParamValue);
		}
		
		public BatchInstance(com.earthview.world.graphic.InstancedGeometry ref_parent, String name, com.earthview.world.graphic.SceneManager ref_mgr, long BatchInstanceID) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			BasePointer namePtr = new BasePointer(name);
			list.add("name", namePtr.get());
			BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
			list.add("ref_mgr", ref_mgrPtr.get());
			BasePointer BatchInstanceIDPtr = new BasePointer(BatchInstanceID);
			list.add("BatchInstanceID", BatchInstanceIDPtr.get());
			Create("JCBatchInstanceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.InstancedGeometry$BatchInstance".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getParent_void(long pNativeObject);
		/// more fields can be added in subclasses
		public com.earthview.world.graphic.InstancedGeometry getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry __returnValue = new com.earthview.world.graphic.InstancedGeometry(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedGeometry");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstancedGeometry");
			}
			return __returnValue;
		}
		native private void assign_QueuedInstancedSubMesh(long pNativeObject, long ref_qmesh);
		//// Assign a queued mesh to this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance, read for final build
		public void assign(com.earthview.world.graphic.InstancedGeometry.QueuedInstancedSubMesh ref_qmesh)
		{
			long ref_qmeshParamValue = (ref_qmesh == null ? 0L : ref_qmesh.nativeObject.pointer);
			assign_QueuedInstancedSubMesh(this.nativeObject.pointer, ref_qmeshParamValue);
		}
		native private void build_void(long pNativeObject);
		//// Build this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		public void build()
		{
			build_void(this.nativeObject.pointer);
		}
		native private long getID_void(long pNativeObject);
		//// Get the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance ID of this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		public long getID()
		{
			long returnValue = getID_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getMovableType_void(long pNativeObject);
		//// Get the centre point of the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		///			const EarthView::World::Spatial::Math::CVector3& getCentre() const { return mCentre; }
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

		native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
		public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
		{
			long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
		}
		native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
		protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
		{
			long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
			_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
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

		native private void setBoundingBox_CAxisAlignedBox(long pNativeObject, long box);
		public void setBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox box)
		{
			long boxParamValue = box.nativeObject.pointer;
			setBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
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

		native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
		//// @copydoc CMovableObject::visitRenderables
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

		///	ev_uint32 getTypeFlags() const;
		///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator;
		public static class InstancedLODIterator extends com.earthview.world.core.BaseObject {
			
			static {
				GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator", new InstancedLODIteratorClassFactory());
			}

			public InstancedLODIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODBucketList lst) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer lstPtr = new BasePointer(lst);
				list.add("lst", lstPtr.get());
				Create("InstancedLODIterator", list);
			}

			public InstancedLODIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODIterator other) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
				NameValuePairList list = new NameValuePairList();
				BasePointer otherPtr = new BasePointer(other);
				list.add("other", otherPtr.get());
				Create("InstancedLODIterator", list);
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
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket getCurrent()
			{
				long returnValue = getCurrent_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedLODBucket");
				}
				return __returnValue;
			}
			native private long next_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket next()
			{
				long returnValue = next_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedLODBucket");
				}
				return __returnValue;
			}
			native private long getBegin_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket getBegin()
			{
				long returnValue = getBegin_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedLODBucket");
				}
				return __returnValue;
			}
			native private long getEnd_void(long pNativeObject);
			public com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket getEnd()
			{
				long returnValue = getEnd_void(this.nativeObject.pointer);
				if(returnValue == 0L) {
					return null;
				}
				com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedLODBucket");
				__returnValue.setDelegate(true);
				InstancePointer __instancePointer = new InstancePointer(returnValue);
				__returnValue.setInstancePointer(__instancePointer);
				IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
				if (__returnValueClassFactory != null)
				{
					__returnValue.setDelegate(true);
					__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket)__returnValueClassFactory.create();
					__returnValue.setDelegate(true);
					__returnValue.bindNativeObject(__instancePointer, "CInstancedLODBucket");
				}
				return __returnValue;
			}
			public InstancedLODIterator(CreatedWhenConstruct cwc) {
				super(CreatedWhenConstruct.CWC_NotToCreate);
			}
			public InstancedLODIterator(CreatedWhenConstruct cwc, String classNameStr) {
				super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
			}
			
			
			
			
			public static InstancedLODIterator fromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
				{
					return null;
				}
				InstancedLODIterator obj = null;
 				if(baseObj instanceof InstancedLODIterator)
				{
					obj = (InstancedLODIterator)baseObj;
				} else {
					obj = new InstancedLODIterator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.bindNativeObject(baseObj.nativeObject, "InstancedLODIterator");
					obj.increaseCast();
				}

				return obj;
			}
		}
		public static class InstancedLODIteratorClassFactory implements IClassFactory {
			public BaseObject create()
			{
				InstancedLODIterator emptyInstance = new InstancedLODIterator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}
		
		native private long getLODIterator_void(long pNativeObject);
		//// Get an iterator over the LODs in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODIterator getLODIterator()
		{
			long returnValue = getLODIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODIterator __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstancedLODIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedLODIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstancedLODIterator");
			}
			return __returnValue;
		}
		native private long getLights_void(long pNativeObject);
		//// Shared set of lights for all GeometryBuckets
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
		native private void updateBoundingBox_void(long pNativeObject);
		//// update the bounding box of the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance according to the positions of the objects
		public void updateBoundingBox()
		{
			updateBoundingBox_void(this.nativeObject.pointer);
		}
		native private void updateContainers_CInstancedLODBucket(long pNativeObject, long ref_bucket);
		//// fill in the list
		public void updateContainers(com.earthview.world.graphic.InstancedGeometry.InstancedLODBucket ref_bucket)
		{
			long ref_bucketParamValue = (ref_bucket == null ? 0L : ref_bucket.nativeObject.pointer);
			updateContainers_CInstancedLODBucket(this.nativeObject.pointer, ref_bucketParamValue);
		}
		native private void attachToScene_void(long pNativeObject);
		//// attach the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance to the scene
		public void attachToScene()
		{
			attachToScene_void(this.nativeObject.pointer);
		}
		native private void addInstancedObject_ev_uint16_CInstancedObject(long pNativeObject, int index, long ref_object);
		public void addInstancedObject(int index, com.earthview.world.graphic.InstancedGeometry.InstancedObject ref_object)
		{
			int indexParamValue = index;
			long ref_objectParamValue = (ref_object == null ? 0L : ref_object.nativeObject.pointer);
			addInstancedObject_ev_uint16_CInstancedObject(this.nativeObject.pointer, indexParamValue, ref_objectParamValue);
		}
		native private long isInstancedObjectPresent_ev_uint16(long pNativeObject, int index);
		public com.earthview.world.graphic.InstancedGeometry.InstancedObject isInstancedObjectPresent(int index)
		{
			int indexParamValue = index;
			long returnValue = isInstancedObjectPresent_ev_uint16(this.nativeObject.pointer, indexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.InstancedObject __returnValue = new com.earthview.world.graphic.InstancedGeometry.InstancedObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.InstancedObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CInstancedObject");
			}
			return __returnValue;
		}
		native private long getObjectIterator_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectIterator getObjectIterator()
		{
			long returnValue = getObjectIterator_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectIterator __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectIterator(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "InstancedObjectIterator");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectIterator)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "InstancedObjectIterator");
			}
			return __returnValue;
		}
		native private long getSceneNode_void(long pNativeObject);
		public com.earthview.world.graphic.SceneNode getSceneNode()
		{
			long returnValue = getSceneNode_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
			}
			return __returnValue;
		}
		native private long getInstancesMap_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsMap getInstancesMap()
		{
			long returnValue = getInstancesMap_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsMap __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsMap(CreatedWhenConstruct.CWC_NotToCreate, "InstancedObjectsMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance.InstancedObjectsMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "InstancedObjectsMap");
			}
			return __returnValue;
		}
		public BatchInstance(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BatchInstance(CreatedWhenConstruct cwc, String classNameStr) {
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
		 * 获取可移动对象的类型标识
		 * @param  
		 */
		public long getTypeFlags()
		{
			return super.getTypeFlags_NoVirtual();
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
		public com.earthview.world.graphic.EdgeData getEdgeList()
		{
			return super.getEdgeList_NoVirtual();
		}
		public boolean hasEdgeList()
		{
			return super.hasEdgeList_NoVirtual();
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
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
		}
		public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
		{
			return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
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
		
		public static BatchInstance fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BatchInstance obj = null;
 			if(baseObj instanceof BatchInstance)
			{
				obj = (BatchInstance)baseObj;
			} else {
				obj = new BatchInstance(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CBatchInstance");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BatchInstanceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BatchInstance emptyInstance = new BatchInstance(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// change the shader used to render the batch instance
	public static class BatchInstanceMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap", new BatchInstanceMapClassFactory());
		}

		native private boolean push_ev_uint16_CBatchInstance(long pNativeObject, int key, long ref_val);
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CBatchInstance(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
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
		public BatchInstanceMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("BatchInstanceMap", null);
		}

		public BatchInstanceMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BatchInstanceMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BatchInstanceMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BatchInstanceMap obj = null;
 			if(baseObj instanceof BatchInstanceMap)
			{
				obj = (BatchInstanceMap)baseObj;
			} else {
				obj = new BatchInstanceMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BatchInstanceMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BatchInstanceMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BatchInstanceMap emptyInstance = new BatchInstanceMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RenderOperationVector extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector", new RenderOperationVectorClassFactory());
		}

		public RenderOperationVector() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("RenderOperationVector", null);
		}

		native private void push_back_CRenderOperation(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.RenderOperation> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CRenderOperation(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.RenderOperation> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.RenderOperation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderOperation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.RenderOperation> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.RenderOperation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderOperation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CRenderOperation(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.RenderOperation> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CRenderOperation(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.RenderOperation> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.RenderOperation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderOperation>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.RenderOperation> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.RenderOperation> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderOperation>(new InstancePointer(returnValue));
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
		public RenderOperationVector(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderOperationVector(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderOperationVector fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderOperationVector obj = null;
 			if(baseObj instanceof RenderOperationVector)
			{
				obj = (RenderOperationVector)baseObj;
			} else {
				obj = new RenderOperationVector(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderOperationVector");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderOperationVectorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderOperationVector emptyInstance = new RenderOperationVector(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getBatchInstance_CAxisAlignedBox_ev_bool_callback(long bounds, boolean autoCreate)
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
		com.earthview.world.graphic.InstancedGeometry.BatchInstance returnValue = getBatchInstance(boundsParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstance_CAxisAlignedBox_ev_bool(long pNativeObject, long bounds, boolean autoCreate);
	public com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance(com.earthview.world.spatial.math.AxisAlignedBox bounds, boolean autoCreate)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_CAxisAlignedBox_ev_bool(this.nativeObject.pointer, boundsParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}
	native private long getBatchInstance_CAxisAlignedBox_ev_bool_NoVirtual(long pNativeObject, long bounds, boolean autoCreate);
	protected com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox bounds, boolean autoCreate)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_CAxisAlignedBox_ev_bool_NoVirtual(this.nativeObject.pointer, boundsParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}

	protected  long getBatchInstance_CVector3_ev_bool_callback(long point, boolean autoCreate)
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
		com.earthview.world.graphic.InstancedGeometry.BatchInstance returnValue = getBatchInstance(pointParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstance_CVector3_ev_bool(long pNativeObject, long point, boolean autoCreate);
	public com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance(com.earthview.world.spatial.math.Vector3 point, boolean autoCreate)
	{
		long pointParamValue = point.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_CVector3_ev_bool(this.nativeObject.pointer, pointParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}
	native private long getBatchInstance_CVector3_ev_bool_NoVirtual(long pNativeObject, long point, boolean autoCreate);
	protected com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance_NoVirtual(com.earthview.world.spatial.math.Vector3 point, boolean autoCreate)
	{
		long pointParamValue = point.nativeObject.pointer;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_CVector3_ev_bool_NoVirtual(this.nativeObject.pointer, pointParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}

	protected  long getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_callback(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		com.earthview.world.graphic.InstancedGeometry.BatchInstance returnValue = getBatchInstance(xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(long pNativeObject, int x, int y, int z, boolean autoCreate);
	public com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}
	native private long getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(long pNativeObject, int x, int y, int z, boolean autoCreate);
	protected com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance_NoVirtual(int x, int y, int z, boolean autoCreate)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		boolean autoCreateParamValue = autoCreate;
		long returnValue = getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, autoCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}

	protected  long getBatchInstance_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.InstancedGeometry.BatchInstance returnValue = getBatchInstance(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstance_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance(long index)
	{
		long indexParamValue = index;
		long returnValue = getBatchInstance_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}
	native private long getBatchInstance_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.InstancedGeometry.BatchInstance getBatchInstance_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getBatchInstance_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}

	protected  void getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_callback(long point, long x, long y, long z)
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
		getBatchInstanceIndexes(pointParamValue, xParamValue, yParamValue, zParamValue);
	}

	native private void getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, long point, long x, long y, long z);
	public void getBatchInstanceIndexes(com.earthview.world.spatial.math.Vector3 point, UShortPointer x, UShortPointer y, UShortPointer z)
	{
		long pointParamValue = point.nativeObject.pointer;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, pointParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, long point, long x, long y, long z);
	protected void getBatchInstanceIndexes_NoVirtual(com.earthview.world.spatial.math.Vector3 point, UShortPointer x, UShortPointer y, UShortPointer z)
	{
		long pointParamValue = point.nativeObject.pointer;
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, pointParamValue, xParamValue, yParamValue, zParamValue);
	}

	protected  long getInstancedGeometryInstance_void_callback()
	{
		com.earthview.world.graphic.InstancedGeometry.BatchInstance returnValue = getInstancedGeometryInstance();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInstancedGeometryInstance_void(long pNativeObject);
	public com.earthview.world.graphic.InstancedGeometry.BatchInstance getInstancedGeometryInstance()
	{
		long returnValue = getInstancedGeometryInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
	}
	native private long getInstancedGeometryInstance_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.InstancedGeometry.BatchInstance getInstancedGeometryInstance_NoVirtual()
	{
		long returnValue = getInstancedGeometryInstance_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
		}
		return __returnValue;
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

	protected  long getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16_callback(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getBatchInstanceBounds(xParamValue, yParamValue, zParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, int x, int y, int z);
	public com.earthview.world.spatial.math.AxisAlignedBox getBatchInstanceBounds(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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
	native private long getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int x, int y, int z);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBatchInstanceBounds_NoVirtual(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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

	protected  long getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16_callback(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		com.earthview.world.spatial.math.Vector3 returnValue = getBatchInstanceCentre(xParamValue, yParamValue, zParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, int x, int y, int z);
	public com.earthview.world.spatial.math.Vector3 getBatchInstanceCentre(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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
	native private long getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int x, int y, int z);
	protected com.earthview.world.spatial.math.Vector3 getBatchInstanceCentre_NoVirtual(int x, int y, int z)
	{
		int xParamValue = x;
		int yParamValue = y;
		int zParamValue = z;
		long returnValue = getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
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

	//// Constructor; do not use directly (@see CSceneManager::createInstancedGeometry)
	public InstancedGeometry(com.earthview.world.graphic.SceneManager ref_owner, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ownerPtr = new BasePointer(ref_owner);
		list.add("ref_owner", ref_ownerPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCInstancedGeometryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.InstancedGeometry".equals(this.getClass().getName()))
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

	native private void addBatchInstance_void(long pNativeObject);
	public void addBatchInstance()
	{
		addBatchInstance_void(this.nativeObject.pointer);
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

	protected  void setBatchInstanceDimensions_CVector3_callback(long size)
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
		setBatchInstanceDimensions(sizeParamValue);
	}

	native private void setBatchInstanceDimensions_CVector3(long pNativeObject, long size);
	public void setBatchInstanceDimensions(com.earthview.world.spatial.math.Vector3 size)
	{
		long sizeParamValue = size.nativeObject.pointer;
		setBatchInstanceDimensions_CVector3(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setBatchInstanceDimensions_CVector3_NoVirtual(long pNativeObject, long size);
	protected void setBatchInstanceDimensions_NoVirtual(com.earthview.world.spatial.math.Vector3 size)
	{
		long sizeParamValue = size.nativeObject.pointer;
		setBatchInstanceDimensions_CVector3_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	protected  long getBatchInstanceDimensions_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getBatchInstanceDimensions();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBatchInstanceDimensions_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getBatchInstanceDimensions()
	{
		long returnValue = getBatchInstanceDimensions_void(this.nativeObject.pointer);
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
	native private long getBatchInstanceDimensions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getBatchInstanceDimensions_NoVirtual()
	{
		long returnValue = getBatchInstanceDimensions_void_NoVirtual(this.nativeObject.pointer);
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

	//// Iterator for iterating over contained BatchInstances
	///	typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap> EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator;
	public static class BatchInstancePair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair", new BatchInstancePairClassFactory());
		}

		public BatchInstancePair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("BatchInstancePair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
			}
			return __returnValue;
		}
		
		native private void set_second_CBatchInstance (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.InstancedGeometry.BatchInstance second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CBatchInstance(this.nativeObject.pointer, secondParamValue);
		}
		
		public BatchInstancePair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BatchInstancePair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BatchInstancePair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BatchInstancePair obj = null;
 			if(baseObj instanceof BatchInstancePair)
			{
				obj = (BatchInstancePair)baseObj;
			} else {
				obj = new BatchInstancePair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BatchInstancePair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BatchInstancePairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BatchInstancePair emptyInstance = new BatchInstancePair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class BatchInstanceIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator", new BatchInstanceIteratorClassFactory());
		}

		public BatchInstanceIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstanceMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("BatchInstanceIterator", list);
		}

		public BatchInstanceIterator(com.earthview.world.graphic.InstancedGeometry.BatchInstanceIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("BatchInstanceIterator", list);
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
		native private int nextKey_void(long pNativeObject);
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstancedGeometry.BatchInstance>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstance next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.InstancedGeometry.BatchInstance __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstance(CreatedWhenConstruct.CWC_NotToCreate, "CBatchInstance");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstance)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBatchInstance");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstancePair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstancePair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstancePair(CreatedWhenConstruct.CWC_NotToCreate, "BatchInstancePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstancePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "BatchInstancePair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstancePair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstancePair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstancePair(CreatedWhenConstruct.CWC_NotToCreate, "BatchInstancePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstancePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "BatchInstancePair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.InstancedGeometry.BatchInstancePair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.InstancedGeometry.BatchInstancePair __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstancePair(CreatedWhenConstruct.CWC_NotToCreate, "BatchInstancePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstancePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "BatchInstancePair");
			}
			return __returnValue;
		}
		public BatchInstanceIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BatchInstanceIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BatchInstanceIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BatchInstanceIterator obj = null;
 			if(baseObj instanceof BatchInstanceIterator)
			{
				obj = (BatchInstanceIterator)baseObj;
			} else {
				obj = new BatchInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BatchInstanceIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BatchInstanceIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BatchInstanceIterator emptyInstance = new BatchInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getBatchInstanceIterator_void(long pNativeObject);
	//// Get an iterator over the BatchInstances in this geometry
	public com.earthview.world.graphic.InstancedGeometry.BatchInstanceIterator getBatchInstanceIterator()
	{
		long returnValue = getBatchInstanceIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.InstancedGeometry.BatchInstanceIterator __returnValue = new com.earthview.world.graphic.InstancedGeometry.BatchInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BatchInstanceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.BatchInstanceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BatchInstanceIterator");
		}
		return __returnValue;
	}
	native private long getRenderOperationVector_void(long pNativeObject);
	//// get the mRenderOps vector.
	public com.earthview.world.graphic.InstancedGeometry.RenderOperationVector getRenderOperationVector()
	{
		long returnValue = getRenderOperationVector_void(this.nativeObject.pointer);
		com.earthview.world.graphic.InstancedGeometry.RenderOperationVector __returnValue = new com.earthview.world.graphic.InstancedGeometry.RenderOperationVector(CreatedWhenConstruct.CWC_NotToCreate, "RenderOperationVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedGeometry.RenderOperationVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RenderOperationVector");
		}
		return __returnValue;
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
	protected  void dump_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		dump(filenameParamValue);
	}

	native private void dump_EVString(long pNativeObject, String filename);
	public void dump(String filename)
	{
		String filenameParamValue = filename;
		dump_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void dump_EVString_NoVirtual(long pNativeObject, String filename);
	protected void dump_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		dump_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
	}

	native private long getBaseSkeletonInstance_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonInstance getBaseSkeletonInstance()
	{
		long returnValue = getBaseSkeletonInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SkeletonInstance __returnValue = new com.earthview.world.graphic.SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonInstance");
		}
		return __returnValue;
	}
	native private long getBaseSkeleton_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonPtr getBaseSkeleton()
	{
		long returnValue = getBaseSkeleton_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SkeletonPtr __returnValue = new com.earthview.world.graphic.SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		}
		return __returnValue;
	}
	native private long getBaseAnimationState_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationStateSet getBaseAnimationState()
	{
		long returnValue = getBaseAnimationState_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationStateSet __returnValue = new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationStateSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationStateSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationStateSet");
		}
		return __returnValue;
	}
	native private long getObjectCount_void(long pNativeObject);
	public long getObjectCount()
	{
		long returnValue = getObjectCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setProvideWorldInverses_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setProvideWorldInverses(flagParamValue);
	}

	native private void setProvideWorldInverses_ev_bool(long pNativeObject, boolean flag);
	public void setProvideWorldInverses(boolean flag)
	{
		boolean flagParamValue = flag;
		setProvideWorldInverses_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setProvideWorldInverses_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setProvideWorldInverses_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setProvideWorldInverses_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  boolean getProvideWorldInverses_void_callback()
	{
		boolean returnValue = getProvideWorldInverses();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getProvideWorldInverses_void(long pNativeObject);
	public boolean getProvideWorldInverses()
	{
		boolean returnValue = getProvideWorldInverses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getProvideWorldInverses_void_NoVirtual(long pNativeObject);
	protected boolean getProvideWorldInverses_NoVirtual()
	{
		boolean returnValue = getProvideWorldInverses_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public InstancedGeometry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstancedGeometry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getBatchInstance_CAxisAlignedBox_ev_bool(long pNativeObject, String method);
	native protected void register_getBatchInstance_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(long pNativeObject, String method);
	native protected void register_getBatchInstance_ev_uint32(long pNativeObject, String method);
	native protected void register_getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getInstancedGeometryInstance_void(long pNativeObject, String method);
	native protected void register_packIndex_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16(long pNativeObject, String method);
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
	native protected void register_setBatchInstanceDimensions_CVector3(long pNativeObject, String method);
	native protected void register_getBatchInstanceDimensions_void(long pNativeObject, String method);
	native protected void register_setOrigin_CVector3(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register_dump_EVString(long pNativeObject, String method);
	native protected void register_setProvideWorldInverses_ev_bool(long pNativeObject, String method);
	native protected void register_getProvideWorldInverses_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getBatchInstance_CAxisAlignedBox_ev_bool(this.nativeObject.pointer, "getBatchInstance_CAxisAlignedBox_ev_bool_callback");
			this.register_getBatchInstance_CVector3_ev_bool(this.nativeObject.pointer, "getBatchInstance_CVector3_ev_bool_callback");
			this.register_getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, "getBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_callback");
			this.register_getBatchInstance_ev_uint32(this.nativeObject.pointer, "getBatchInstance_ev_uint32_callback");
			this.register_getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getBatchInstanceIndexes_CVector3_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getInstancedGeometryInstance_void(this.nativeObject.pointer, "getInstancedGeometryInstance_void_callback");
			this.register_packIndex_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "packIndex_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getVolumeIntersection_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getBatchInstanceBounds_ev_uint16_ev_uint16_ev_uint16_callback");
			this.register_getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16(this.nativeObject.pointer, "getBatchInstanceCentre_ev_uint16_ev_uint16_ev_uint16_callback");
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
			this.register_setBatchInstanceDimensions_CVector3(this.nativeObject.pointer, "setBatchInstanceDimensions_CVector3_callback");
			this.register_getBatchInstanceDimensions_void(this.nativeObject.pointer, "getBatchInstanceDimensions_void_callback");
			this.register_setOrigin_CVector3(this.nativeObject.pointer, "setOrigin_CVector3_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register_dump_EVString(this.nativeObject.pointer, "dump_EVString_callback");
			this.register_setProvideWorldInverses_ev_bool(this.nativeObject.pointer, "setProvideWorldInverses_ev_bool_callback");
			this.register_getProvideWorldInverses_void(this.nativeObject.pointer, "getProvideWorldInverses_void_callback");
		}
	}
	
	public static InstancedGeometry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstancedGeometry obj = null;
 		if(baseObj instanceof InstancedGeometry)
		{
			obj = (InstancedGeometry)baseObj;
		} else {
			obj = new InstancedGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstancedGeometry");
			obj.increaseCast();
		}

		return obj;
	}
}
