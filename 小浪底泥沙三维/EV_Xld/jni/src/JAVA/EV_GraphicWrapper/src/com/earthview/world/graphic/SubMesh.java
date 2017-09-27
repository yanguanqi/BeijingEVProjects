package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 定义子网格对象[网格对象的一部分，该部分只能使用一种材质]
 */
public class SubMesh extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubMesh", new SubMeshClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SubMesh() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSubMesh", null);
	}

	native private boolean addInstance_CMatrix4_CColourValue(long pNativeObject, long matrix, long color);
	/**
	 * 添加submesh内部的instance
	 * @param matrix instance矩阵
	 * @param color 颜色
	 */
	public boolean addInstance(com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.graphic.ColourValue color)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		boolean returnValue = addInstance_CMatrix4_CColourValue(this.nativeObject.pointer, matrixParamValue, colorParamValue);
		return returnValue;
	}
	native private boolean removeInstance_ev_size_t(long pNativeObject, long index);
	/**
	 * 移除submesh内部指定序号的instance
	 * @param index 序号
	 */
	public boolean removeInstance(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeInstance_ev_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void clearInstances_void(long pNativeObject);
	/**
	 * 清除submesh内部的instance
	 */
	public void clearInstances()
	{
		clearInstances_void(this.nativeObject.pointer);
	}
	native private boolean getInstance_ev_size_t_CMatrix4_CColourValue(long pNativeObject, long index, long matrix, long color);
	/**
	 * 获取submesh内部指定序号的instance
	 * @param index 序号
	 */
	public boolean getInstance(long index, com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.graphic.ColourValue color)
	{
		long indexParamValue = index;
		long matrixParamValue = matrix.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		boolean returnValue = getInstance_ev_size_t_CMatrix4_CColourValue(this.nativeObject.pointer, indexParamValue, matrixParamValue, colorParamValue);
		return returnValue;
	}
	native private boolean getInstance_ev_size_t_CMatrix4(long pNativeObject, long index, long matrix);
	public boolean getInstance(long index, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long indexParamValue = index;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getInstance_ev_size_t_CMatrix4(this.nativeObject.pointer, indexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean getInstance_ev_size_t_CColourValue(long pNativeObject, long index, long color);
	public boolean getInstance(long index, com.earthview.world.graphic.ColourValue color)
	{
		long indexParamValue = index;
		long colorParamValue = color.nativeObject.pointer;
		boolean returnValue = getInstance_ev_size_t_CColourValue(this.nativeObject.pointer, indexParamValue, colorParamValue);
		return returnValue;
	}
	native private boolean setInstance_ev_size_t_CMatrix4_CColourValue(long pNativeObject, long index, long matrix, long color);
	/**
	 * 重新submesh内部指定序号的instance的矩阵和颜色
	 * @param index 序号
	 */
	public boolean setInstance(long index, com.earthview.world.spatial.math.Matrix4 matrix, com.earthview.world.graphic.ColourValue color)
	{
		long indexParamValue = index;
		long matrixParamValue = matrix.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		boolean returnValue = setInstance_ev_size_t_CMatrix4_CColourValue(this.nativeObject.pointer, indexParamValue, matrixParamValue, colorParamValue);
		return returnValue;
	}
	native private long getNumInstance_void(long pNativeObject);
	/**
	 * 获取submesh内部instance个数
	 * @param index 序号
	 */
	public long getNumInstance()
	{
		long returnValue = getNumInstance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean get_useSharedVertices_void(long pNativeObject);
	public boolean get_useSharedVertices()
	{
		boolean jniValue = get_useSharedVertices_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_useSharedVertices_ev_bool (long pNativeObject, boolean value);
	public void set_useSharedVertices(boolean useSharedVertices)
	{
		boolean useSharedVerticesParamValue = useSharedVertices;
		
		set_useSharedVertices_ev_bool(this.nativeObject.pointer, useSharedVerticesParamValue);
	}
	
	native private int get_operationType_void(long pNativeObject);
	public com.earthview.world.graphic.RenderOperation.OperationType get_operationType()
	{
		int jniValue = get_operationType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.RenderOperation.OperationType.toEnum(jniValue);
	}
	
	native private void set_operationType_OperationType (long pNativeObject, int value);
	public void set_operationType(com.earthview.world.graphic.RenderOperation.OperationType operationType)
	{
		int operationTypeParamValue = operationType.getValue();
		
		set_operationType_OperationType(this.nativeObject.pointer, operationTypeParamValue);
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
	
	native private long get_blendIndexToBoneIndexMap_void(long pNativeObject);
	public com.earthview.world.graphic.IndexMap get_blendIndexToBoneIndexMap()
	{
		long jniValue = get_blendIndexToBoneIndexMap_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.IndexMap __returnValue = new com.earthview.world.graphic.IndexMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "IndexMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IndexMap");
		}
		return __returnValue;
	}
	
	native private void set_blendIndexToBoneIndexMap_IndexMap (long pNativeObject, long value);
	public void set_blendIndexToBoneIndexMap(com.earthview.world.graphic.IndexMap blendIndexToBoneIndexMap)
	{
		long blendIndexToBoneIndexMapParamValue = blendIndexToBoneIndexMap.nativeObject.pointer;
		
		set_blendIndexToBoneIndexMap_IndexMap(this.nativeObject.pointer, blendIndexToBoneIndexMapParamValue);
	}
	
	native private long get_mLodFaceList_void(long pNativeObject);
	public com.earthview.world.graphic.ProgressiveMesh.Lodfacelist get_mLodFaceList()
	{
		long jniValue = get_mLodFaceList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ProgressiveMesh.Lodfacelist __returnValue = new com.earthview.world.graphic.ProgressiveMesh.Lodfacelist(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LODFaceList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ProgressiveMesh.Lodfacelist)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LODFaceList");
		}
		return __returnValue;
	}
	
	native private void set_mLodFaceList_LODFaceList (long pNativeObject, long value);
	public void set_mLodFaceList(com.earthview.world.graphic.ProgressiveMesh.Lodfacelist mLodFaceList)
	{
		long mLodFaceListParamValue = mLodFaceList.nativeObject.pointer;
		
		set_mLodFaceList_LODFaceList(this.nativeObject.pointer, mLodFaceListParamValue);
	}
	
	native private long get_extremityPoints_void(long pNativeObject);
	public com.earthview.world.spatial.math.VertexList get_extremityPoints()
	{
		long jniValue = get_extremityPoints_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	
	native private void set_extremityPoints_VertexList (long pNativeObject, long value);
	public void set_extremityPoints(com.earthview.world.spatial.math.VertexList extremityPoints)
	{
		long extremityPointsParamValue = extremityPoints.nativeObject.pointer;
		
		set_extremityPoints_VertexList(this.nativeObject.pointer, extremityPointsParamValue);
	}
	
	native private long get_parent_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh get_parent()
	{
		long jniValue = get_parent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Mesh __returnValue = new com.earthview.world.graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate, "CMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMesh");
		}
		return __returnValue;
	}
	
	native private void set_parent_CMesh (long pNativeObject, long value);
	public void set_parent(com.earthview.world.graphic.Mesh parent)
	{
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		
		set_parent_CMesh(this.nativeObject.pointer, parentParamValue);
	}
	
	native private void setMaterialName_EVString_EVString(long pNativeObject, String matName, String groupName);
	/**
	 * 设置子网格对象将要用到的材质名称
	 * @param matName 将要用到的材质的名称
	 * @param groupName 资源组管理器名称
	 */
	public void setMaterialName(String matName, String groupName)
	{
		String matNameParamValue = matName;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString(this.nativeObject.pointer, matNameParamValue, groupNameParamValue);
	}
	native private void setMaterialName_EVString(long pNativeObject, String matName);
	public void setMaterialName(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName_EVString(this.nativeObject.pointer, matNameParamValue);
	}
	native private long getMaterialName_void(long pNativeObject);
	/**
	 * 获得材质名称
	 * @param  
	 * @return 返回得到的材质名称
	 */
	public StringPointer getMaterialName()
	{
		long returnValue = getMaterialName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean isMatInitialised_void(long pNativeObject);
	/**
	 * 判断该子网格对象是否被赋予了一种材质
	 * @param  
	 * @return 若是返回true，不是则返回false
	 */
	public boolean isMatInitialised()
	{
		boolean returnValue = isMatInitialised_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _getRenderOperation_CRenderOperation_ev_uint16(long pNativeObject, long rend, int lodIndex);
	/**
	 * 返回一个渲染该网格的渲染操作结构
	 * @param rend 渲染操作
	 * @param lodIndex LOD的索引
	 */
	public void _getRenderOperation(com.earthview.world.graphic.RenderOperation rend, int lodIndex)
	{
		long rendParamValue = rend.nativeObject.pointer;
		int lodIndexParamValue = lodIndex;
		_getRenderOperation_CRenderOperation_ev_uint16(this.nativeObject.pointer, rendParamValue, lodIndexParamValue);
	}
	native private void _getRenderOperation_CRenderOperation(long pNativeObject, long rend);
	public void _getRenderOperation(com.earthview.world.graphic.RenderOperation rend)
	{
		long rendParamValue = rend.nativeObject.pointer;
		_getRenderOperation_CRenderOperation(this.nativeObject.pointer, rendParamValue);
	}
	native private void addBoneAssignment_VertexBoneAssignment(long pNativeObject, long vertBoneAssign);
	/**
	 * 在骨骼动画中，用已知重量给骨骼赋一个顶点，该方法只有在调用setSkeletonName方法之后才有效
	 * @param vertBoneAssign 
	 */
	public void addBoneAssignment(com.earthview.world.graphic.VertexBoneAssignment vertBoneAssign)
	{
		long vertBoneAssignParamValue = vertBoneAssign.nativeObject.pointer;
		addBoneAssignment_VertexBoneAssignment(this.nativeObject.pointer, vertBoneAssignParamValue);
	}
	native private void clearBoneAssignments_void(long pNativeObject);
	/**
	 * 清除该网格上所有的骨骼配置
	 * @param  
	 */
	public void clearBoneAssignments()
	{
		clearBoneAssignments_void(this.nativeObject.pointer);
	}
	native private long getBoneAssignmentIterator_void(long pNativeObject);
	/**
	 * 得到一个迭代器用来存取所有的骨骼配置。只有当子网格有几何体时，该方法可用
	 * @param  
	 */
	public com.earthview.world.graphic.BoneAssignmentIterator getBoneAssignmentIterator()
	{
		long returnValue = getBoneAssignmentIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.BoneAssignmentIterator __returnValue = new com.earthview.world.graphic.BoneAssignmentIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BoneAssignmentIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BoneAssignmentIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BoneAssignmentIterator");
		}
		return __returnValue;
	}
	native private long getBoneAssignments_void(long pNativeObject);
	///获得骨骼分配列表的参考
	public com.earthview.world.graphic.Mesh.VertexBoneAssignmentList getBoneAssignments()
	{
		long returnValue = getBoneAssignments_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.VertexBoneAssignmentList __returnValue = new com.earthview.world.graphic.Mesh.VertexBoneAssignmentList(CreatedWhenConstruct.CWC_NotToCreate, "VertexBoneAssignmentList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.VertexBoneAssignmentList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBoneAssignmentList");
		}
		return __returnValue;
	}
	native private void _compileBoneAssignments_void(long pNativeObject);
	///一旦编译骨骼分配到几何体缓冲时，必须调用该方法
	public void _compileBoneAssignments()
	{
		_compileBoneAssignments_void(this.nativeObject.pointer);
	}
	public static class AliasTexturePair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubMesh::AliasTexturePair", new AliasTexturePairClassFactory());
		}

		public AliasTexturePair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("AliasTexturePair", null);
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
		
		native private String get_second_void(long pNativeObject);
		public String get_second()
		{
			String jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_EVString (long pNativeObject, String value);
		public void set_second(String second)
		{
			String secondParamValue = second;
			
			set_second_EVString(this.nativeObject.pointer, secondParamValue);
		}
		
		public AliasTexturePair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AliasTexturePair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AliasTexturePair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AliasTexturePair obj = null;
 			if(baseObj instanceof AliasTexturePair)
			{
				obj = (AliasTexturePair)baseObj;
			} else {
				obj = new AliasTexturePair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AliasTexturePair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AliasTexturePairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AliasTexturePair emptyInstance = new AliasTexturePair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Core::AliasTextureNamePairList> EarthView::World::Graphic::CSubMesh::AliasTextureIterator;
	public static class AliasTextureIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubMesh::AliasTextureIterator", new AliasTextureIteratorClassFactory());
		}

		public AliasTextureIterator(com.earthview.world.core.CommonStringPairList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("AliasTextureIterator", list);
		}

		public AliasTextureIterator(com.earthview.world.graphic.SubMesh.AliasTextureIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("AliasTextureIterator", list);
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
		native private String nextValue_void(long pNativeObject);
		public String nextValue()
		{
			String returnValue = nextValue_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public StringPointer nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private String next_void(long pNativeObject);
		public String next()
		{
			String returnValue = next_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.SubMesh.AliasTexturePair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SubMesh.AliasTexturePair __returnValue = new com.earthview.world.graphic.SubMesh.AliasTexturePair(CreatedWhenConstruct.CWC_NotToCreate, "AliasTexturePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SubMesh.AliasTexturePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "AliasTexturePair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.SubMesh.AliasTexturePair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SubMesh.AliasTexturePair __returnValue = new com.earthview.world.graphic.SubMesh.AliasTexturePair(CreatedWhenConstruct.CWC_NotToCreate, "AliasTexturePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SubMesh.AliasTexturePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "AliasTexturePair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.SubMesh.AliasTexturePair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.SubMesh.AliasTexturePair __returnValue = new com.earthview.world.graphic.SubMesh.AliasTexturePair(CreatedWhenConstruct.CWC_NotToCreate, "AliasTexturePair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SubMesh.AliasTexturePair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "AliasTexturePair");
			}
			return __returnValue;
		}
		public AliasTextureIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AliasTextureIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AliasTextureIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AliasTextureIterator obj = null;
 			if(baseObj instanceof AliasTextureIterator)
			{
				obj = (AliasTextureIterator)baseObj;
			} else {
				obj = new AliasTextureIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AliasTextureIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AliasTextureIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AliasTextureIterator emptyInstance = new AliasTextureIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getAliasTextureIterator_void(long pNativeObject);
	/**
	 * 得到一个常迭代器用来存取分配给该子网格的所有纹理别名
	 * @param  
	 */
	public com.earthview.world.graphic.SubMesh.AliasTextureIterator getAliasTextureIterator()
	{
		long returnValue = getAliasTextureIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SubMesh.AliasTextureIterator __returnValue = new com.earthview.world.graphic.SubMesh.AliasTextureIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AliasTextureIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubMesh.AliasTextureIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AliasTextureIterator");
		}
		return __returnValue;
	}
	native private void addTextureAlias_EVString_EVString(long pNativeObject, String aliasName, String textureName);
	/**
	 * 增加一个别名，或者取代一个已经存在的别名并且和纹理名字相关联
	 * @param aliasName 纹理别名
	 * @param textureName 和纹理别名相关联的纹理名称
	 */
	public void addTextureAlias(String aliasName, String textureName)
	{
		String aliasNameParamValue = aliasName;
		String textureNameParamValue = textureName;
		addTextureAlias_EVString_EVString(this.nativeObject.pointer, aliasNameParamValue, textureNameParamValue);
	}
	native private void removeTextureAlias_EVString(long pNativeObject, String aliasName);
	/**
	 * 从子网格中删除指定的纹理别名
	 * @param aliasName 要删除纹理别名
	 */
	public void removeTextureAlias(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		removeTextureAlias_EVString(this.nativeObject.pointer, aliasNameParamValue);
	}
	native private void removeAllTextureAliases_void(long pNativeObject);
	/**
	 * 从子网格中删除所有纹理别名
	 * @param  
	 */
	public void removeAllTextureAliases()
	{
		removeAllTextureAliases_void(this.nativeObject.pointer);
	}
	native private boolean hasTextureAliases_void(long pNativeObject);
	/**
	 * 判断子网格中是否有纹理别名
	 * @param  
	 * @return 有纹理别名则返回true，否则返回false
	 */
	public boolean hasTextureAliases()
	{
		boolean returnValue = hasTextureAliases_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTextureAliasCount_void(long pNativeObject);
	/**
	 * 获得子网格中纹理别名的数量
	 * @param  
	 * @return 返回纹理别名数量
	 */
	public long getTextureAliasCount()
	{
		long returnValue = getTextureAliasCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateMaterialUsingTextureAliases_void(long pNativeObject);
	/**
	 * 子网格上当前所用的材质被拷贝到一个新的材质上，假如当前纹理别名和原始材质名称相匹配时，用子网格的纹理别名
	 * @param  
	 * @return 假如用纹理别名，并且一个新的材质被创建时返回true
	 */
	public boolean updateMaterialUsingTextureAliases()
	{
		boolean returnValue = updateMaterialUsingTextureAliases_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVertexAnimationType_void(long pNativeObject);
	/**
	 * 得到顶点动画类型
	 * @param  
	 * @return 返回顶点动画类型
	 */
	public com.earthview.world.graphic.VertexAnimationType getVertexAnimationType()
	{
		int returnValue = getVertexAnimationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexAnimationType.toEnum(returnValue);
	}
	native private boolean getVertexAnimationIncludesNormals_void(long pNativeObject);
	///zxt updatefor v1.8
	//// Returns whether animation on dedicated vertex data includes normals
	public boolean getVertexAnimationIncludesNormals()
	{
		boolean returnValue = getVertexAnimationIncludesNormals_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void generateExtremes_ev_size_t(long pNativeObject, long count);
	/**
	 * 生成子网格最终点
	 * @param count 子网格最终点计算的数量
	 */
	public void generateExtremes(long count)
	{
		long countParamValue = count;
		generateExtremes_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private boolean isBuildEdgesEnabled_void(long pNativeObject);
	/**
	 * 判断子网格是否在Edgelist中被包含
	 * @param  
	 * @return 假如在EdgeList中子网格被包含则返回true，反之返回false，默认是true
	 */
	public boolean isBuildEdgesEnabled()
	{
		boolean returnValue = isBuildEdgesEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBuildEdgesEnabled_ev_bool(long pNativeObject, boolean b);
	public void setBuildEdgesEnabled(boolean b)
	{
		boolean bParamValue = b;
		setBuildEdgesEnabled_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void reserveBlockIndicesSize_ev_size_t(long pNativeObject, long size);
	public void reserveBlockIndicesSize(long size)
	{
		long sizeParamValue = size;
		reserveBlockIndicesSize_ev_size_t(this.nativeObject.pointer, sizeParamValue);
	}
	native private void addBlockIndex_ev_uint32(long pNativeObject, long startIndex);
	public void addBlockIndex(long startIndex)
	{
		long startIndexParamValue = startIndex;
		addBlockIndex_ev_uint32(this.nativeObject.pointer, startIndexParamValue);
	}
	native private void removeBlockIndex_ev_uint32(long pNativeObject, long i);
	public void removeBlockIndex(long i)
	{
		long iParamValue = i;
		removeBlockIndex_ev_uint32(this.nativeObject.pointer, iParamValue);
	}
	native private void clearBlockIndices_void(long pNativeObject);
	public void clearBlockIndices()
	{
		clearBlockIndices_void(this.nativeObject.pointer);
	}
	native private long getNumBlockIndices_void(long pNativeObject);
	public long getNumBlockIndices()
	{
		long returnValue = getNumBlockIndices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_CVector3(long pNativeObject, long ray, long viewport, long worldMatrix, long point);
	/**
	 * 判断子网格是否被射线选中
	 * @param ray 射线
	 * @param viewport 视口
	 * @param worldMatrix submesh的世界变换矩阵
	 * @param oMatrix instance的内部变换矩阵
	 * @return 是否选中
	 */
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long worldMatrix, long point, long index1, long index2, long index3);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3(long pNativeObject, long ray, long viewport, long worldMatrix, boolean positiveSide, boolean negativeSide, long point);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long ray, long viewport, long iData, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.graphic.IndexData iData, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long iDataParamValue = (iData == null ? 0L : iData.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, rayParamValue, viewportParamValue, iDataParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(long pNativeObject, long ray, long viewport, long iData, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3, long segmentIndex);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.graphic.IndexData iData, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3, com.earthview.world.core.IntVector segmentIndex)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long iDataParamValue = (iData == null ? 0L : iData.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, iDataParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(long pNativeObject, long ray, long viewport, long vData, long iData, int ot, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3, long segmentIndex);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData, com.earthview.world.graphic.RenderOperation.OperationType ot, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3, com.earthview.world.core.IntVector segmentIndex)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long vDataParamValue = (vData == null ? 0L : vData.nativeObject.pointer);
		long iDataParamValue = (iData == null ? 0L : iData.nativeObject.pointer);
		int otParamValue = ot.getValue();
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, vDataParamValue, iDataParamValue, otParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(long pNativeObject, long ray, long viewport, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3, long segmentIndex);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3, com.earthview.world.core.IntVector segmentIndex)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_IntVector(long pNativeObject, long ray, long viewport, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long segmentIndex);
	public boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.core.IntVector segmentIndex)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_IntVector(this.nativeObject.pointer, rayParamValue, viewportParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private static boolean select_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(long ray, long viewport, long vData, long iData, int ot, long worldMatrix, boolean positiveSide, boolean negativeSide, long point, long index1, long index2, long index3);
	public static boolean select(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData, com.earthview.world.graphic.RenderOperation.OperationType ot, com.earthview.world.spatial.math.Matrix4 worldMatrix, boolean positiveSide, boolean negativeSide, com.earthview.world.spatial.math.Vector3 point, UIntegerPointer index1, UIntegerPointer index2, UIntegerPointer index3)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long vDataParamValue = (vData == null ? 0L : vData.nativeObject.pointer);
		long iDataParamValue = (iData == null ? 0L : iData.nativeObject.pointer);
		int otParamValue = ot.getValue();
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long pointParamValue = point.nativeObject.pointer;
		long index1ParamValue = index1.nativeObject.pointer;
		long index2ParamValue = index2.nativeObject.pointer;
		long index3ParamValue = index3.nativeObject.pointer;
		boolean returnValue = select_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(rayParamValue, viewportParamValue, vDataParamValue, iDataParamValue, otParamValue, worldMatrixParamValue, positiveSideParamValue, negativeSideParamValue, pointParamValue, index1ParamValue, index2ParamValue, index3ParamValue);
		return returnValue;
	}
	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取submesh在建模坐标系下的包围盒考虑了submesh被复用或者存在内部偏移矩阵的情况即:如果submesh存在内部instance，则返回的包围盒是其所有instance的包围盒的并集
	 * @param  
	 */
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
	native private long getVertexBoundingBox_void(long pNativeObject);
	/**
	 * 获取在建模坐标系下由vertexbuffer中的顶点坐标确定的包围盒		不考虑submesh被复用或者存在内部偏移矩阵的情况
	 * @param  
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getVertexBoundingBox()
	{
		long returnValue = getVertexBoundingBox_void(this.nativeObject.pointer);
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
	native private void setBoundingBoxDirty_void(long pNativeObject);
	public void setBoundingBoxDirty()
	{
		setBoundingBoxDirty_void(this.nativeObject.pointer);
	}
	native private void setVertexBoundingBoxDirty_void(long pNativeObject);
	public void setVertexBoundingBoxDirty()
	{
		setVertexBoundingBoxDirty_void(this.nativeObject.pointer);
	}
	public static final class Segment extends RemoteNativeObject {
	
		public Segment(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public Segment(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public Segment() {
			super(new InstancePointer(Create()),false);
		}
		native private long get_IndexBegun_void(long pNativeObject);
		public long get_IndexBegun()
		{
			long jniValue = get_IndexBegun_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_IndexBegun_ev_uint32 (long pNativeObject, long value);
		public void set_IndexBegun(long IndexBegun)
		{
			long IndexBegunParamValue = IndexBegun;
			
			set_IndexBegun_ev_uint32(this.nativeObject.pointer, IndexBegunParamValue);
		}
		
		native private long get_IndexEnd_void(long pNativeObject);
		public long get_IndexEnd()
		{
			long jniValue = get_IndexEnd_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_IndexEnd_ev_uint32 (long pNativeObject, long value);
		public void set_IndexEnd(long IndexEnd)
		{
			long IndexEndParamValue = IndexEnd;
			
			set_IndexEnd_ev_uint32(this.nativeObject.pointer, IndexEndParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	native private long getNumSegments_void(long pNativeObject);
	/**
	 * 获取分段数量，若为0，则表示未分段					
	 * @param  
	 */
	public long getNumSegments()
	{
		long returnValue = getNumSegments_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSegment_ev_uint32(long pNativeObject, long i);
	/**
	 * 获取某个分段的信息					
	 * @param i 分段的序号
	 */
	public com.earthview.world.graphic.SubMesh.Segment getSegment(long i)
	{
		long iParamValue = i;
		long returnValue = getSegment_ev_uint32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.graphic.SubMesh.Segment __returnValue = new com.earthview.world.graphic.SubMesh.Segment(new InstancePointer(returnValue), false);
		return __returnValue;
	}
	native private boolean insertSegment_Segment(long pNativeObject, long segment);
	/**
	 * 插入一个分段信息					
	 * @param segment 分段信息
	 * @return 是否插入成功，如果此分段与已有的分段存在索引交叉的情况，则插入失败
	 */
	public boolean insertSegment(com.earthview.world.graphic.SubMesh.Segment segment)
	{
		long segmentParamValue = segment.nativeObject.pointer;
		boolean returnValue = insertSegment_Segment(this.nativeObject.pointer, segmentParamValue);
		return returnValue;
	}
	native private boolean removeSegment_ev_uint32(long pNativeObject, long i);
	/**
	 * 删除一个分段信息					
	 * @param i 分段的序号
	 * @return 是否删除成功，如果该分段不存在，则删除失败
	 */
	public boolean removeSegment(long i)
	{
		long iParamValue = i;
		boolean returnValue = removeSegment_ev_uint32(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private void clearSegments_void(long pNativeObject);
	/**
	 * 清除所有分段信息					
	 * @param  
	 */
	public void clearSegments()
	{
		clearSegments_void(this.nativeObject.pointer);
	}
	native private int findSegment_ev_uint32(long pNativeObject, long index);
	/**
	 * 按照索引在indexbuffer中的序号来查找对应的分段				
	 * @param index 索引
	 * @return 分段的序号，若返回-1，则表示未分段或者该索引不属于任何分段
	 */
	public int findSegment(long index)
	{
		long indexParamValue = index;
		int returnValue = findSegment_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getSegmentVertexBoundingBox_ev_uint32(long pNativeObject, long i);
	/**
	 * 获取在建模坐标系下由vertexbuffer中某一分段对应的顶点坐标确定的包围盒		不考虑submesh被复用或者存在内部偏移矩阵的情况
	 * @param  
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getSegmentVertexBoundingBox(long i)
	{
		long iParamValue = i;
		long returnValue = getSegmentVertexBoundingBox_ev_uint32(this.nativeObject.pointer, iParamValue);
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
	public SubMesh(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubMesh(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubMesh fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubMesh obj = null;
 		if(baseObj instanceof SubMesh)
		{
			obj = (SubMesh)baseObj;
		} else {
			obj = new SubMesh(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubMesh");
			obj.increaseCast();
		}

		return obj;
	}
}
