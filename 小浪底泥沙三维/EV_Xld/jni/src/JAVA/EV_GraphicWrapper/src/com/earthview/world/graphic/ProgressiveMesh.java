package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgressiveMesh extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CProgressiveMesh", new ProgressiveMeshClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCProgressiveMeshProxy", new ProgressiveMeshClassFactory());
	}

	public enum VertexReductionQuota implements INativeEnum<VertexReductionQuota> {
		VRQ_CONSTANT(VertexReductionQuotaHelper.ENUM_VALUES[0]),
		VRQ_PROPORTIONAL(VertexReductionQuotaHelper.ENUM_VALUES[1]),
		VRQ_ERROR_COST(VertexReductionQuotaHelper.ENUM_VALUES[2]);
		private int value;
		VertexReductionQuota(int i) {
			this.value = i;
		}
		public VertexReductionQuota getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final VertexReductionQuota toEnum(int retval) {
			if(retval == VRQ_CONSTANT.value){
				return VRQ_CONSTANT;
			}
			else if(retval == VRQ_PROPORTIONAL.value){
				return VRQ_PROPORTIONAL;
			}
			else if(retval == VRQ_ERROR_COST.value){
				return VRQ_ERROR_COST;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class VertexReductionQuotaHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// A proportion of the remaining number of vertices are removed at each reduction
	public static class Lodfacelist extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CProgressiveMesh::LODFaceList", new LodfacelistClassFactory());
		}

		public Lodfacelist() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LODFaceList", null);
		}

		native private void push_back_CIndexData(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.IndexData> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CIndexData(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.IndexData> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.IndexData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.IndexData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.IndexData> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.IndexData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.IndexData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CIndexData(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.IndexData> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CIndexData(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.IndexData> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.IndexData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.IndexData>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.IndexData> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.IndexData> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.IndexData>(new InstancePointer(returnValue));
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
		public Lodfacelist(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Lodfacelist(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Lodfacelist fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Lodfacelist obj = null;
 			if(baseObj instanceof Lodfacelist)
			{
				obj = (Lodfacelist)baseObj;
			} else {
				obj = new Lodfacelist(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LODFaceList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LodfacelistClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Lodfacelist emptyInstance = new Lodfacelist(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private static boolean generateLodLevels_CMesh_LodValueList_VertexReductionQuota_Real(long pMesh, long lodValues, int reductionMethod, double reductionValue);
	public static boolean generateLodLevels(com.earthview.world.graphic.Mesh pMesh, com.earthview.world.graphic.LodValueList lodValues, com.earthview.world.graphic.ProgressiveMesh.VertexReductionQuota reductionMethod, double reductionValue)
	{
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long lodValuesParamValue = lodValues.nativeObject.pointer;
		int reductionMethodParamValue = reductionMethod.getValue();
		double reductionValueParamValue = reductionValue;
		boolean returnValue = generateLodLevels_CMesh_LodValueList_VertexReductionQuota_Real(pMeshParamValue, lodValuesParamValue, reductionMethodParamValue, reductionValueParamValue);
		return returnValue;
	}
	native private static long generateSimplifiedMesh_EVString_EVString_CMesh_bool_LodValueList_VertexReductionQuota_Real_ev_uint64(String name, String groupName, long inMesh, boolean dropOriginalGeometry, long lodValues, int reductionMethod, double reductionValue, long removedVertexDuplicatesCount);
	public static com.earthview.world.graphic.MeshPtr generateSimplifiedMesh(String name, String groupName, com.earthview.world.graphic.Mesh inMesh, boolean dropOriginalGeometry, com.earthview.world.graphic.LodValueList lodValues, com.earthview.world.graphic.ProgressiveMesh.VertexReductionQuota reductionMethod, double reductionValue, ULongPointer removedVertexDuplicatesCount)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		long inMeshParamValue = (inMesh == null ? 0L : inMesh.nativeObject.pointer);
		boolean dropOriginalGeometryParamValue = dropOriginalGeometry;
		long lodValuesParamValue = lodValues.nativeObject.pointer;
		int reductionMethodParamValue = reductionMethod.getValue();
		double reductionValueParamValue = reductionValue;
		long removedVertexDuplicatesCountParamValue = removedVertexDuplicatesCount.nativeObject.pointer;
		long returnValue = generateSimplifiedMesh_EVString_EVString_CMesh_bool_LodValueList_VertexReductionQuota_Real_ev_uint64(nameParamValue, groupNameParamValue, inMeshParamValue, dropOriginalGeometryParamValue, lodValuesParamValue, reductionMethodParamValue, reductionValueParamValue, removedVertexDuplicatesCountParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	public static class ProgressiveMeshList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList", new ProgressiveMeshListClassFactory());
		}

		native private void push_back_CProgressiveMesh(long pNativeObject, long ref_t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CProgressiveMesh(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器首个元素
		 * @param  
		 * @return 返回容器首个元素
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CProgressiveMesh(long pNativeObject, long pos, long ref_t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CProgressiveMesh(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 删除容器中间位置元素
		 * @param pos 位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为空
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
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ProgressiveMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public ProgressiveMeshList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ProgressiveMeshList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ProgressiveMeshList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ProgressiveMeshList obj = null;
 			if(baseObj instanceof ProgressiveMeshList)
			{
				obj = (ProgressiveMeshList)baseObj;
			} else {
				obj = new ProgressiveMeshList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ProgressiveMeshList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ProgressiveMeshListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ProgressiveMeshList emptyInstance = new ProgressiveMeshList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void addExtraVertexPositionBuffer_CVertexData_callback(long vertexData)
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
		addExtraVertexPositionBuffer(vertexDataParamValue);
	}

	native private void addExtraVertexPositionBuffer_CVertexData(long pNativeObject, long vertexData);
	public void addExtraVertexPositionBuffer(com.earthview.world.graphic.VertexData vertexData)
	{
		long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
		addExtraVertexPositionBuffer_CVertexData(this.nativeObject.pointer, vertexDataParamValue);
	}
	native private void addExtraVertexPositionBuffer_CVertexData_NoVirtual(long pNativeObject, long vertexData);
	protected void addExtraVertexPositionBuffer_NoVirtual(com.earthview.world.graphic.VertexData vertexData)
	{
		long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
		addExtraVertexPositionBuffer_CVertexData_NoVirtual(this.nativeObject.pointer, vertexDataParamValue);
	}

	native private static boolean build_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota_Real(long pmInList, long lodStrategy, long lodValues, int quota, double reductionValue);
	///virtual void build(ev_uint16 numLevels, LODFaceList* outList,
	///	EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota , Real reductionValue  );
	///virtual void build(ev_uint16 numLevels, LODFaceList* outList,
	///	EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota);
	///virtual void build(ev_uint16 numLevels, LODFaceList* outList);
	public static boolean build(com.earthview.world.graphic.ProgressiveMesh.ProgressiveMeshList pmInList, com.earthview.world.graphic.LodStrategy lodStrategy, com.earthview.world.graphic.LodValueList lodValues, com.earthview.world.graphic.ProgressiveMesh.VertexReductionQuota quota, double reductionValue)
	{
		long pmInListParamValue = pmInList.nativeObject.pointer;
		long lodStrategyParamValue = (lodStrategy == null ? 0L : lodStrategy.nativeObject.pointer);
		long lodValuesParamValue = lodValues.nativeObject.pointer;
		int quotaParamValue = quota.getValue();
		double reductionValueParamValue = reductionValue;
		boolean returnValue = build_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota_Real(pmInListParamValue, lodStrategyParamValue, lodValuesParamValue, quotaParamValue, reductionValueParamValue);
		return returnValue;
	}
	native private static boolean build_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota(long pmInList, long lodStrategy, long lodValues, int quota);
	public static boolean build(com.earthview.world.graphic.ProgressiveMesh.ProgressiveMeshList pmInList, com.earthview.world.graphic.LodStrategy lodStrategy, com.earthview.world.graphic.LodValueList lodValues, com.earthview.world.graphic.ProgressiveMesh.VertexReductionQuota quota)
	{
		long pmInListParamValue = pmInList.nativeObject.pointer;
		long lodStrategyParamValue = (lodStrategy == null ? 0L : lodStrategy.nativeObject.pointer);
		long lodValuesParamValue = lodValues.nativeObject.pointer;
		int quotaParamValue = quota.getValue();
		boolean returnValue = build_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota(pmInListParamValue, lodStrategyParamValue, lodValuesParamValue, quotaParamValue);
		return returnValue;
	}
	public ProgressiveMesh(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProgressiveMesh(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addExtraVertexPositionBuffer_CVertexData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addExtraVertexPositionBuffer_CVertexData(this.nativeObject.pointer, "addExtraVertexPositionBuffer_CVertexData_callback");
		}
	}
	
	public static ProgressiveMesh fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProgressiveMesh obj = null;
 		if(baseObj instanceof ProgressiveMesh)
		{
			obj = (ProgressiveMesh)baseObj;
		} else {
			obj = new ProgressiveMesh(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProgressiveMesh");
			obj.increaseCast();
		}

		return obj;
	}
}
