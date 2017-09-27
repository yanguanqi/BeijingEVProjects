package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Mesh extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh", new MeshClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMeshProxy", new MeshClassFactory());
	}

	public static class SubMeshInfo extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::SubMeshInfo", new SubMeshInfoClassFactory());
		}

		public SubMeshInfo() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshInfo", null);
		}

		native private boolean OperatorLessThan_SubMeshInfo(long pNativeObject, long oth);
		public boolean OperatorLessThan(com.earthview.world.graphic.Mesh.SubMeshInfo oth)
		{
			long othParamValue = oth.nativeObject.pointer;
			boolean returnValue = OperatorLessThan_SubMeshInfo(this.nativeObject.pointer, othParamValue);
			return returnValue;
		}
		native private boolean OperatorGreaterThan_SubMeshInfo(long pNativeObject, long oth);
		public boolean OperatorGreaterThan(com.earthview.world.graphic.Mesh.SubMeshInfo oth)
		{
			long othParamValue = oth.nativeObject.pointer;
			boolean returnValue = OperatorGreaterThan_SubMeshInfo(this.nativeObject.pointer, othParamValue);
			return returnValue;
		}
		native private long get_SubMeshIndex_void(long pNativeObject);
		public long get_SubMeshIndex()
		{
			long jniValue = get_SubMeshIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_SubMeshIndex_ev_uint32 (long pNativeObject, long value);
		public void set_SubMeshIndex(long SubMeshIndex)
		{
			long SubMeshIndexParamValue = SubMeshIndex;
			
			set_SubMeshIndex_ev_uint32(this.nativeObject.pointer, SubMeshIndexParamValue);
		}
		
		native private long get_InstanceIndex_void(long pNativeObject);
		public long get_InstanceIndex()
		{
			long jniValue = get_InstanceIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_InstanceIndex_ev_uint32 (long pNativeObject, long value);
		public void set_InstanceIndex(long InstanceIndex)
		{
			long InstanceIndexParamValue = InstanceIndex;
			
			set_InstanceIndex_ev_uint32(this.nativeObject.pointer, InstanceIndexParamValue);
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
		
		public SubMeshInfo(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshInfo(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshInfo fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshInfo obj = null;
 			if(baseObj instanceof SubMeshInfo)
			{
				obj = (SubMeshInfo)baseObj;
			} else {
				obj = new SubMeshInfo(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshInfo");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshInfoClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshInfo emptyInstance = new SubMeshInfo(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MeshNodePtr extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::MeshNodePtr", new MeshNodePtrClassFactory());
		}

		public MeshNodePtr() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MeshNodePtr", null);
		}

		public MeshNodePtr(com.earthview.world.graphic.Mesh.MeshNode ref_rep) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_repPtr = new BasePointer(ref_rep);
			list.add("ref_rep", ref_repPtr.get());
			if(ref_rep != null)
			{
			ref_rep.setNoFree(true);
			}
			Create("MeshNodePtr", list);
		}

		public MeshNodePtr(com.earthview.world.graphic.Mesh.MeshNode ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_repPtr = new BasePointer(ref_rep);
			list.add("ref_rep", ref_repPtr.get());
			if(ref_rep != null)
			{
			ref_rep.setNoFree(true);
			}
			BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
			list.add("inFreeMethod", inFreeMethodPtr.get());
			Create("MeshNodePtr", list);
		}

		public MeshNodePtr(com.earthview.world.graphic.Mesh.MeshNodePtr r) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rPtr = new BasePointer(r);
			list.add("r", rPtr.get());
			Create("MeshNodePtr", list);
		}

		native private long get_void(long pNativeObject);
		public com.earthview.world.graphic.Mesh.MeshNode get()
		{
			long returnValue = get_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Mesh.MeshNode __returnValue = new com.earthview.world.graphic.Mesh.MeshNode(CreatedWhenConstruct.CWC_NotToCreate, "CMeshNode");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.MeshNode)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMeshNode");
			}
			return __returnValue;
		}
		public MeshNodePtr(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshNodePtr(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MeshNodePtr fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshNodePtr obj = null;
 			if(baseObj instanceof MeshNodePtr)
			{
				obj = (MeshNodePtr)baseObj;
			} else {
				obj = new MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MeshNodePtr");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshNodePtrClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshNodePtr emptyInstance = new MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MeshNode extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::CMeshNode", new MeshNodeClassFactory());
		}

		public MeshNode() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CMeshNode", null);
		}

		native private boolean addNode_MeshNodePtr(long pNativeObject, long node);
		public boolean addNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = addNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean existNode_MeshNodePtr(long pNativeObject, long node);
		public boolean existNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = existNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean existNode_EVString(long pNativeObject, String name);
		public boolean existNode(String name)
		{
			String nameParamValue = name;
			boolean returnValue = existNode_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private long getNumNodes_void(long pNativeObject);
		public long getNumNodes()
		{
			long returnValue = getNumNodes_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getNode_ev_uint32(long pNativeObject, long index);
		public com.earthview.world.graphic.Mesh.MeshNodePtr getNode(long index)
		{
			long indexParamValue = index;
			long returnValue = getNode_ev_uint32(this.nativeObject.pointer, indexParamValue);
			com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			}
			return __returnValue;
		}
		native private long getNode_EVString(long pNativeObject, String name);
		public com.earthview.world.graphic.Mesh.MeshNodePtr getNode(String name)
		{
			String nameParamValue = name;
			long returnValue = getNode_EVString(this.nativeObject.pointer, nameParamValue);
			com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			}
			return __returnValue;
		}
		native private boolean removeNode_MeshNodePtr(long pNativeObject, long node);
		public boolean removeNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = removeNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean removeNode_EVString(long pNativeObject, String name);
		public boolean removeNode(String name)
		{
			String nameParamValue = name;
			boolean returnValue = removeNode_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private void clearNodes_void(long pNativeObject);
		public void clearNodes()
		{
			clearNodes_void(this.nativeObject.pointer);
		}
		native private boolean appendSubMesh_SubMeshInfo(long pNativeObject, long sm);
		public boolean appendSubMesh(com.earthview.world.graphic.Mesh.SubMeshInfo sm)
		{
			long smParamValue = sm.nativeObject.pointer;
			boolean returnValue = appendSubMesh_SubMeshInfo(this.nativeObject.pointer, smParamValue);
			return returnValue;
		}
		native private boolean removeSubMesh_SubMeshInfo(long pNativeObject, long sm);
		public boolean removeSubMesh(com.earthview.world.graphic.Mesh.SubMeshInfo sm)
		{
			long smParamValue = sm.nativeObject.pointer;
			boolean returnValue = removeSubMesh_SubMeshInfo(this.nativeObject.pointer, smParamValue);
			return returnValue;
		}
		native private boolean existSubMesh_SubMeshInfo(long pNativeObject, long sm);
		public boolean existSubMesh(com.earthview.world.graphic.Mesh.SubMeshInfo sm)
		{
			long smParamValue = sm.nativeObject.pointer;
			boolean returnValue = existSubMesh_SubMeshInfo(this.nativeObject.pointer, smParamValue);
			return returnValue;
		}
		native private long getNumSubMeshes_void(long pNativeObject);
		public long getNumSubMeshes()
		{
			long returnValue = getNumSubMeshes_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getSubMesh_ev_uint32(long pNativeObject, long index);
		public com.earthview.world.graphic.Mesh.SubMeshInfo getSubMesh(long index)
		{
			long indexParamValue = index;
			long returnValue = getSubMesh_ev_uint32(this.nativeObject.pointer, indexParamValue);
			com.earthview.world.graphic.Mesh.SubMeshInfo __returnValue = new com.earthview.world.graphic.Mesh.SubMeshInfo(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "SubMeshInfo");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.SubMeshInfo)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "SubMeshInfo");
			}
			return __returnValue;
		}
		native private void clearSubMeshes_void(long pNativeObject);
		public void clearSubMeshes()
		{
			clearSubMeshes_void(this.nativeObject.pointer);
		}
		native private void setBoundingBox_CAxisAlignedBox(long pNativeObject, long boundingBox);
		public void setBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox boundingBox)
		{
			long boundingBoxParamValue = boundingBox.nativeObject.pointer;
			setBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, boundingBoxParamValue);
		}
		native private long getBoundingBox_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
		{
			long returnValue = getBoundingBox_void(this.nativeObject.pointer);
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
		native private String get_Name_void(long pNativeObject);
		public String get_Name()
		{
			String jniValue = get_Name_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_Name_EVString (long pNativeObject, String value);
		public void set_Name(String Name)
		{
			String NameParamValue = Name;
			
			set_Name_EVString(this.nativeObject.pointer, NameParamValue);
		}
		
		native private long get_OffsetMatrix_void(long pNativeObject);
		public com.earthview.world.spatial.math.Matrix4 get_OffsetMatrix()
		{
			long jniValue = get_OffsetMatrix_void(this.nativeObject.pointer);
			
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
		
		native private void set_OffsetMatrix_CMatrix4 (long pNativeObject, long value);
		public void set_OffsetMatrix(com.earthview.world.spatial.math.Matrix4 OffsetMatrix)
		{
			long OffsetMatrixParamValue = OffsetMatrix.nativeObject.pointer;
			
			set_OffsetMatrix_CMatrix4(this.nativeObject.pointer, OffsetMatrixParamValue);
		}
		
		public MeshNode(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshNode(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MeshNode fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshNode obj = null;
 			if(baseObj instanceof MeshNode)
			{
				obj = (MeshNode)baseObj;
			} else {
				obj = new MeshNode(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMeshNode");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshNodeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshNode emptyInstance = new MeshNode(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///set<EarthView::World::Graphic::CMovableObject *> mSubEntitySet;
	///vector<EarthView::World::Graphic::CSubEntity *> mSubEntitys;
	///map<CMovableObject *,SubMeshInfo> mObjAndSubMeshInfo;
	public static class MeshCategory extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::CMeshCategory", new MeshCategoryClassFactory());
		}

		public MeshCategory() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CMeshCategory", null);
		}

		native private boolean addNode_MeshNodePtr(long pNativeObject, long node);
		public boolean addNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = addNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean existNode_MeshNodePtr(long pNativeObject, long node);
		public boolean existNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = existNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean existNode_EVString(long pNativeObject, String name);
		public boolean existNode(String name)
		{
			String nameParamValue = name;
			boolean returnValue = existNode_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private long getNumNodes_void(long pNativeObject);
		public long getNumNodes()
		{
			long returnValue = getNumNodes_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getNode_ev_uint32(long pNativeObject, long index);
		public com.earthview.world.graphic.Mesh.MeshNodePtr getNode(long index)
		{
			long indexParamValue = index;
			long returnValue = getNode_ev_uint32(this.nativeObject.pointer, indexParamValue);
			com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			}
			return __returnValue;
		}
		native private long getNode_EVString(long pNativeObject, String name);
		public com.earthview.world.graphic.Mesh.MeshNodePtr getNode(String name)
		{
			String nameParamValue = name;
			long returnValue = getNode_EVString(this.nativeObject.pointer, nameParamValue);
			com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
			}
			return __returnValue;
		}
		native private boolean removeNode_MeshNodePtr(long pNativeObject, long node);
		public boolean removeNode(com.earthview.world.graphic.Mesh.MeshNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			boolean returnValue = removeNode_MeshNodePtr(this.nativeObject.pointer, nodeParamValue);
			return returnValue;
		}
		native private boolean removeNode_EVString(long pNativeObject, String name);
		public boolean removeNode(String name)
		{
			String nameParamValue = name;
			boolean returnValue = removeNode_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private void clearNodes_void(long pNativeObject);
		public void clearNodes()
		{
			clearNodes_void(this.nativeObject.pointer);
		}
		native private String get_Name_void(long pNativeObject);
		public String get_Name()
		{
			String jniValue = get_Name_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_Name_EVString (long pNativeObject, String value);
		public void set_Name(String Name)
		{
			String NameParamValue = Name;
			
			set_Name_EVString(this.nativeObject.pointer, NameParamValue);
		}
		
		native private String get_mDescription_void(long pNativeObject);
		public String get_mDescription()
		{
			String jniValue = get_mDescription_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mDescription_EVString (long pNativeObject, String value);
		public void set_mDescription(String mDescription)
		{
			String mDescriptionParamValue = mDescription;
			
			set_mDescription_EVString(this.nativeObject.pointer, mDescriptionParamValue);
		}
		
		native private long get_mId_void(long pNativeObject);
		public long get_mId()
		{
			long jniValue = get_mId_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mId_ev_uint32 (long pNativeObject, long value);
		public void set_mId(long mId)
		{
			long mIdParamValue = mId;
			
			set_mId_ev_uint32(this.nativeObject.pointer, mIdParamValue);
		}
		
		native private long get_mCategoryAttributeList_void(long pNativeObject);
		public com.earthview.world.core.CommonStringPairList get_mCategoryAttributeList()
		{
			long jniValue = get_mCategoryAttributeList_void(this.nativeObject.pointer);
			
			com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
			}
			return __returnValue;
		}
		
		native private void set_mCategoryAttributeList_CommonStringPairList (long pNativeObject, long value);
		public void set_mCategoryAttributeList(com.earthview.world.core.CommonStringPairList mCategoryAttributeList)
		{
			long mCategoryAttributeListParamValue = mCategoryAttributeList.nativeObject.pointer;
			
			set_mCategoryAttributeList_CommonStringPairList(this.nativeObject.pointer, mCategoryAttributeListParamValue);
		}
		
		public MeshCategory(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshCategory(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MeshCategory fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshCategory obj = null;
 			if(baseObj instanceof MeshCategory)
			{
				obj = (MeshCategory)baseObj;
			} else {
				obj = new MeshCategory(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMeshCategory");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshCategoryClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshCategory emptyInstance = new MeshCategory(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getNumCategorys_void(long pNativeObject);
	public long getNumCategorys()
	{
		long returnValue = getNumCategorys_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCategory_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.graphic.Mesh.MeshCategory getCategory(long index)
	{
		long indexParamValue = index;
		long returnValue = getCategory_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.Mesh.MeshCategory __returnValue = new com.earthview.world.graphic.Mesh.MeshCategory(CreatedWhenConstruct.CWC_NotToCreate, "CMeshCategory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshCategory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshCategory");
		}
		return __returnValue;
	}
	native private long getCategory_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Mesh.MeshCategory getCategory(String name)
	{
		String nameParamValue = name;
		long returnValue = getCategory_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.Mesh.MeshCategory __returnValue = new com.earthview.world.graphic.Mesh.MeshCategory(CreatedWhenConstruct.CWC_NotToCreate, "CMeshCategory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshCategory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshCategory");
		}
		return __returnValue;
	}
	native private boolean existCategory_EVString(long pNativeObject, String name);
	public boolean existCategory(String name)
	{
		String nameParamValue = name;
		boolean returnValue = existCategory_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean addCategory_CMeshCategory(long pNativeObject, long cate);
	public boolean addCategory(com.earthview.world.graphic.Mesh.MeshCategory cate)
	{
		long cateParamValue = cate.nativeObject.pointer;
		boolean returnValue = addCategory_CMeshCategory(this.nativeObject.pointer, cateParamValue);
		return returnValue;
	}
	native private boolean removeCategory_CMeshCategory(long pNativeObject, long cate);
	public boolean removeCategory(com.earthview.world.graphic.Mesh.MeshCategory cate)
	{
		long cateParamValue = cate.nativeObject.pointer;
		boolean returnValue = removeCategory_CMeshCategory(this.nativeObject.pointer, cateParamValue);
		return returnValue;
	}
	native private void clearCategorys_void(long pNativeObject);
	public void clearCategorys()
	{
		clearCategorys_void(this.nativeObject.pointer);
	}
	native private long getRootMeshNode_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh.MeshNodePtr getRootMeshNode()
	{
		long returnValue = getRootMeshNode_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
		}
		return __returnValue;
	}
	native private boolean createRootMeshNode_void(long pNativeObject);
	public boolean createRootMeshNode()
	{
		boolean returnValue = createRootMeshNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void destroyRootMeshNode_void(long pNativeObject);
	public void destroyRootMeshNode()
	{
		destroyRootMeshNode_void(this.nativeObject.pointer);
	}
	public static class MeshAnimationContainer extends com.earthview.world.graphic.AnimationContainer {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::CMeshAnimationContainer", new MeshAnimationContainerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::JCMeshAnimationContainerProxy", new MeshAnimationContainerClassFactory());
		}

		public MeshAnimationContainer(com.earthview.world.graphic.Mesh parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCMeshAnimationContainerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Mesh$MeshAnimationContainer".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private int getNumAnimations_void(long pNativeObject);
		public int getNumAnimations()
		{
			int returnValue = getNumAnimations_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getNumAnimations_void_NoVirtual(long pNativeObject);
		protected int getNumAnimations_NoVirtual()
		{
			int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getAnimation_ev_uint16(long pNativeObject, int index);
		public com.earthview.world.graphic.Animation getAnimation(int index)
		{
			int indexParamValue = index;
			long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
		protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
		{
			int indexParamValue = index;
			long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private long getAnimation_EVString(long pNativeObject, String name);
		public com.earthview.world.graphic.Animation getAnimation(String name)
		{
			String nameParamValue = name;
			long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
		public com.earthview.world.graphic.Animation createAnimation(String name, double length)
		{
			String nameParamValue = name;
			double lengthParamValue = length;
			long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
		protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
		{
			String nameParamValue = name;
			double lengthParamValue = length;
			long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private boolean hasAnimation_EVString(long pNativeObject, String name);
		public boolean hasAnimation(String name)
		{
			String nameParamValue = name;
			boolean returnValue = hasAnimation_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private boolean hasAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected boolean hasAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			boolean returnValue = hasAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}

		native private void removeAnimation_EVString(long pNativeObject, String name);
		public void removeAnimation(String name)
		{
			String nameParamValue = name;
			removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected void removeAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		}

		public MeshAnimationContainer(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshAnimationContainer(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_getNumAnimations_void(long pNativeObject, String method);
		native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
		native protected void register_getAnimation_EVString(long pNativeObject, String method);
		native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
		native protected void register_hasAnimation_EVString(long pNativeObject, String method);
		native protected void register_removeAnimation_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
				this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
				this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
				this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
				this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
				this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			}
		}
		
		public static MeshAnimationContainer fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshAnimationContainer obj = null;
 			if(baseObj instanceof MeshAnimationContainer)
			{
				obj = (MeshAnimationContainer)baseObj;
			} else {
				obj = new MeshAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMeshAnimationContainer");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshAnimationContainerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshAnimationContainer emptyInstance = new MeshAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getAnimationContainerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh.MeshAnimationContainer getAnimationContainerPtr()
	{
		long returnValue = getAnimationContainerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Mesh.MeshAnimationContainer __returnValue = new com.earthview.world.graphic.Mesh.MeshAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate, "CMeshAnimationContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshAnimationContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshAnimationContainer");
		}
		return __returnValue;
	}
	native private long getAnimationContainer_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh.MeshAnimationContainer getAnimationContainer()
	{
		long returnValue = getAnimationContainer_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.MeshAnimationContainer __returnValue = new com.earthview.world.graphic.Mesh.MeshAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate, "CMeshAnimationContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshAnimationContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshAnimationContainer");
		}
		return __returnValue;
	}
	protected  long createAnimation_EVString_Real_callback(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		com.earthview.world.graphic.Animation returnValue = createAnimation(nameParamValue, lengthParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
	/**
	 * 为该模型的顶点动画创建一个新的动画对象
	 * @param name 动画的名称
	 * @param length 动画的时长
	 */
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
	protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long getAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Animation returnValue = getAnimation(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_EVString(long pNativeObject, String name);
	/**
	 * 获得已命名的顶点动画对象
	 * @param name 动画的名称
	 */
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long _getAnimationImpl_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Animation returnValue = _getAnimationImpl(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getAnimationImpl_EVString(long pNativeObject, String name);
	/**
	 * 访问已给名称的顶点动画对象，如果不存在返回null
	 * @param name 动画的名称
	 */
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long _getAnimationImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation _getAnimationImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  boolean hasAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnimation_EVString(long pNativeObject, String name);
	/**
	 * 判断该模型是否包含已命名的顶点动画
	 * @param name 动画的名称
	 */
	public boolean hasAnimation(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean hasAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean hasAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void removeAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeAnimation(nameParamValue);
	}

	native private void removeAnimation_EVString(long pNativeObject, String name);
	/**
	 * 从该模型中删除顶点动画
	 * @param name 动画的名称
	 */
	public void removeAnimation(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  int getNumAnimations_void_callback()
	{
		int returnValue = getNumAnimations();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumAnimations_void(long pNativeObject);
	/**
	 * 获得该模型中变形动画的名称
	 * @param  
	 */
	public int getNumAnimations()
	{
		int returnValue = getNumAnimations_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumAnimations_void_NoVirtual(long pNativeObject);
	protected int getNumAnimations_NoVirtual()
	{
		int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getAnimation_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Animation returnValue = getAnimation(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过索引获得一个单独的变形动画
	 * @param index 索引值
	 */
	public com.earthview.world.graphic.Animation getAnimation(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  void removeAllAnimations_void_callback()
	{
		removeAllAnimations();
	}

	native private void removeAllAnimations_void(long pNativeObject);
	/**
	 * 从该模型中删除所有的变形动画
	 * @param  
	 */
	public void removeAllAnimations()
	{
		removeAllAnimations_void(this.nativeObject.pointer);
	}
	native private void removeAllAnimations_void_NoVirtual(long pNativeObject);
	protected void removeAllAnimations_NoVirtual()
	{
		removeAllAnimations_void_NoVirtual(this.nativeObject.pointer);
	}

	public static class MeshLodUsageList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::MeshLodUsageList", new MeshLodUsageListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public MeshLodUsageList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MeshLodUsageList", null);
		}

		native private void push_back_MeshLodUsage(long pNativeObject, long t);
		/**
		 * 在容器的尾部添加值为t的元素
		 * @param t 添加元素的值
		 */
		public void push_back(com.earthview.world.graphic.MeshLodUsage t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_MeshLodUsage(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器的最后一个元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器的第一个元素的引用
		 * @param  
		 */
		public com.earthview.world.graphic.MeshLodUsage front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MeshLodUsage __returnValue = new com.earthview.world.graphic.MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate, "MeshLodUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MeshLodUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MeshLodUsage");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器的最后一个元素的引用
		 * @param  
		 */
		public com.earthview.world.graphic.MeshLodUsage back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MeshLodUsage __returnValue = new com.earthview.world.graphic.MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate, "MeshLodUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MeshLodUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MeshLodUsage");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_MeshLodUsage(long pNativeObject, long pos, long t);
		/**
		 * 在迭代器pos所指向的元素前面插入值为t的新元素
		 * @param pos 插入元素的位置
		 * @param t 插入元素的值
		 */
		public void insert(long pos, com.earthview.world.graphic.MeshLodUsage t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_MeshLodUsage(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 去掉位置pos处元素的值
		 * @param pos 元素的位置
		 * @return 返回容器当前的值
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回标记容器大小是否为0的布尔值
		 * @param  
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
		 * @param n 
		 */
		public com.earthview.world.graphic.MeshLodUsage OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.MeshLodUsage __returnValue = new com.earthview.world.graphic.MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate, "MeshLodUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MeshLodUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MeshLodUsage");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回下标为n的元素的引用只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
		 * @param n 
		 */
		public com.earthview.world.graphic.MeshLodUsage at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.MeshLodUsage __returnValue = new com.earthview.world.graphic.MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate, "MeshLodUsage");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MeshLodUsage)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "MeshLodUsage");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器中元素的个数
		 * @param  
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整容器的长度大小，使其能容纳newSize个元素
		 * @param newSize 长度
		 */
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
		/**
		 * 删除容器中的所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public MeshLodUsageList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MeshLodUsageList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MeshLodUsageList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MeshLodUsageList obj = null;
 			if(baseObj instanceof MeshLodUsageList)
			{
				obj = (MeshLodUsageList)baseObj;
			} else {
				obj = new MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MeshLodUsageList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MeshLodUsageListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MeshLodUsageList emptyInstance = new MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 顶点骨骼列表，按顶点索引排列
	 */
	public static class VertexBoneAssignmentList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::VertexBoneAssignmentList", new VertexBoneAssignmentListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public VertexBoneAssignmentList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexBoneAssignmentList", null);
		}

		native private void push_ev_size_t_VertexBoneAssignment(long pNativeObject, long key, long val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public void push(long key, com.earthview.world.graphic.VertexBoneAssignment val)
		{
			long keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			push_ev_size_t_VertexBoneAssignment(this.nativeObject.pointer, keyParamValue, valParamValue);
		}
		native private boolean exist_ev_size_t(long pNativeObject, long key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(long key)
		{
			long keyParamValue = key;
			boolean returnValue = exist_ev_size_t(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private void erase_ev_size_t(long pNativeObject, long key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(long key)
		{
			long keyParamValue = key;
			erase_ev_size_t(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long count_ev_size_t(long pNativeObject, long key);
		/**
		 * 返回容器中键的数量
		 * @param  
		 * @return 键的数量
		 */
		public long count(long key)
		{
			long keyParamValue = key;
			long returnValue = count_ev_size_t(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long get_ev_size_t_ev_size_t(long pNativeObject, long key, long index);
		/**
		 * 获取指定键值的第几项
		 * @param key 键
		 * @param index 索引
		 */
		public com.earthview.world.graphic.VertexBoneAssignment get(long key, long index)
		{
			long keyParamValue = key;
			long indexParamValue = index;
			long returnValue = get_ev_size_t_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
			com.earthview.world.graphic.VertexBoneAssignment __returnValue = new com.earthview.world.graphic.VertexBoneAssignment(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_size_t_ev_size_t(long pNativeObject, long key, long index);
		/**
		 * 删除指定键值的第几项
		 * @param key 键
		 * @param index 索引
		 */
		public void erase(long key, long index)
		{
			long keyParamValue = key;
			long indexParamValue = index;
			erase_ev_size_t_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
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
		public VertexBoneAssignmentList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexBoneAssignmentList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexBoneAssignmentList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexBoneAssignmentList obj = null;
 			if(baseObj instanceof VertexBoneAssignmentList)
			{
				obj = (VertexBoneAssignmentList)baseObj;
			} else {
				obj = new VertexBoneAssignmentList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexBoneAssignmentList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexBoneAssignmentListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexBoneAssignmentList emptyInstance = new VertexBoneAssignmentList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::SubMeshList", new SubMeshListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public SubMeshList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshList", null);
		}

		native private void push_back_CSubMesh(long pNativeObject, long ref_t);
		/**
		 * 在容器的尾部添加值为t的元素
		 * @param t 添加元素的值
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.SubMesh> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CSubMesh(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器的最后一个元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器的第一个元素的引用
		 * @param  
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SubMesh> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.SubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器的最后一个元素的引用
		 * @param  
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SubMesh> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.SubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CSubMesh(long pNativeObject, long pos, long ref_t);
		/**
		 * 在迭代器pos所指向的元素前面插入值为t的新元素
		 * @param pos 插入元素的位置
		 * @param t 插入元素的值
		 */
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.SubMesh> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CSubMesh(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 去掉位置pos处元素的值
		 * @param pos 元素的位置
		 * @return 返回容器当前的值
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回标记容器大小是否为0的布尔值
		 * @param  
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
		 * @param n 
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SubMesh> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回下标为n的元素的引用只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
		 * @param n 
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SubMesh> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SubMesh> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SubMesh>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器中元素的个数
		 * @param  
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整容器的长度大小，使其能容纳newSize个元素
		 * @param newSize 长度
		 */
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
		/**
		 * 删除容器中的所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public SubMeshList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshList obj = null;
 			if(baseObj instanceof SubMeshList)
			{
				obj = (SubMeshList)baseObj;
			} else {
				obj = new SubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshList emptyInstance = new SubMeshList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 存储SubMesh的名称
	 */
	public static class SubMeshNameMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::SubMeshNameMap", new SubMeshNameMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public SubMeshNameMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshNameMap", null);
		}

		native private boolean push_EVString_ev_uint16(long pNativeObject, String key, int val);
		/**
		 * 在EarthView::World::Core::hashmap容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, int val)
		{
			String keyParamValue = key;
			int valParamValue = val;
			boolean returnValue = push_EVString_ev_uint16(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public UShortPointer OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public UShortPointer get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
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
		native private long getKeys_void(long pNativeObject);
		public com.earthview.world.core.StringVector getKeys()
		{
			long returnValue = getKeys_void(this.nativeObject.pointer);
			com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "StringVector");
			}
			return __returnValue;
		}
		public SubMeshNameMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshNameMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshNameMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshNameMap obj = null;
 			if(baseObj instanceof SubMeshNameMap)
			{
				obj = (SubMeshNameMap)baseObj;
			} else {
				obj = new SubMeshNameMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshNameMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshNameMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshNameMap emptyInstance = new SubMeshNameMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SubMeshNameMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::SubMeshNameMapPair", new SubMeshNameMapPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public SubMeshNameMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SubMeshNameMapPair", null);
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
		
		native private int get_second_void(long pNativeObject);
		public int get_second()
		{
			int jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_uint16 (long pNativeObject, int value);
		public void set_second(int second)
		{
			int secondParamValue = second;
			
			set_second_ev_uint16(this.nativeObject.pointer, secondParamValue);
		}
		
		public SubMeshNameMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshNameMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshNameMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshNameMapPair obj = null;
 			if(baseObj instanceof SubMeshNameMapPair)
			{
				obj = (SubMeshNameMapPair)baseObj;
			} else {
				obj = new SubMeshNameMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshNameMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshNameMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshNameMapPair emptyInstance = new SubMeshNameMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void prepareImpl_void(long pNativeObject);
	/**
	 * 准备的实现函数
	 * @param  
	 */
	public void prepareImpl()
	{
		prepareImpl_void(this.nativeObject.pointer);
	}
	native private void prepareImpl_void_NoVirtual(long pNativeObject);
	protected void prepareImpl_NoVirtual()
	{
		prepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unprepareImpl_void(long pNativeObject);
	/**
	 * 准备的反过程的实现函数
	 * @param  
	 */
	public void unprepareImpl()
	{
		unprepareImpl_void(this.nativeObject.pointer);
	}
	native private void unprepareImpl_void_NoVirtual(long pNativeObject);
	protected void unprepareImpl_NoVirtual()
	{
		unprepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void loadImpl_void(long pNativeObject);
	/**
	 * 加载的实现函数
	 * @param  
	 */
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void postLoadImpl_void(long pNativeObject);
	/**
	 * 加载后的实现函数
	 * @param  
	 */
	public void postLoadImpl()
	{
		postLoadImpl_void(this.nativeObject.pointer);
	}
	native private void postLoadImpl_void_NoVirtual(long pNativeObject);
	protected void postLoadImpl_NoVirtual()
	{
		postLoadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unloadImpl_void(long pNativeObject);
	/**
	 * 卸载的实现函数
	 * @param  
	 */
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long calculateSize_void(long pNativeObject);
	/**
	 * 计算资源的大小，只有在load执行之后调用
	 * @param  
	 */
	public long calculateSize()
	{
		long returnValue = calculateSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long calculateSize_void_NoVirtual(long pNativeObject);
	protected long calculateSize_NoVirtual()
	{
		long returnValue = calculateSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	/**
	 * 构造函数不能直接调用该方法
	 * @param creator 指向EarthView::World::Graphic::CResourceManager的指针，创建资源
	 * @param name 资源的名称
	 * @param handle 
	 * @param group 资源组的名称
	 * @param isManual 确定资源是否手动下载
	 * @param loader 指向EarthView::World::Graphic::CManualResourceLoader的指针
	 */
	public Mesh(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		BasePointer ref_loaderPtr = new BasePointer(ref_loader);
		list.add("ref_loader", ref_loaderPtr.get());
		Create("JCMeshProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Mesh".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数不能直接调用该方法
	 * @param creator 指向EarthView::World::Graphic::CResourceManager的指针，创建资源
	 * @param name 资源的名称
	 * @param handle 句柄
	 * @param group 资源组的名称
	 * @param isManual 确定资源是否手动下载
	 */
	public Mesh(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		Create("JCMeshProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Mesh".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数不能直接调用该方法
	 * @param creator 指向EarthView::World::Graphic::CResourceManager的指针，创建资源
	 * @param name 资源的名称
	 * @param handle 句柄
	 * @param group 资源组的名称
	 */
	public Mesh(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("JCMeshProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Mesh".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int checkInstanceCapability_void(long pNativeObject);
	/**
	 * 检查mesh是否支持instance
	 * @return 0不支持,1支持IT_ShaderBased，2支持IT_HardwareBased,3表示前面两种都支持
	 */
	public com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability()
	{
		int returnValue = checkInstanceCapability_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static boolean checkHardwareInstanceCapability_void();
	/**
	 * 判断是否支持硬件Instance
	 */
	public static boolean checkHardwareInstanceCapability()
	{
		boolean returnValue = checkHardwareInstanceCapability_void();
		return returnValue;
	}
	native private long createSubMesh_void(long pNativeObject);
	/**
	 * 创建一个新的子模型
	 * @param  
	 */
	public com.earthview.world.graphic.SubMesh createSubMesh()
	{
		long returnValue = createSubMesh_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long createSubMesh_EVString(long pNativeObject, String name);
	/**
	 * 创建一个新的子模型，并初始一个名称
	 * @param  
	 */
	public com.earthview.world.graphic.SubMesh createSubMesh(String name)
	{
		String nameParamValue = name;
		long returnValue = createSubMesh_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void nameSubMesh_EVString_ev_uint16(long pNativeObject, String name, int index);
	/**
	 * 给子模型命名
	 * @param name 名称
	 * @param index 索引
	 */
	public void nameSubMesh(String name, int index)
	{
		String nameParamValue = name;
		int indexParamValue = index;
		nameSubMesh_EVString_ev_uint16(this.nativeObject.pointer, nameParamValue, indexParamValue);
	}
	native private void unnameSubMesh_EVString(long pNativeObject, String name);
	/**
	 * 去除掉模型的名称
	 * @param name 名称
	 */
	public void unnameSubMesh(String name)
	{
		String nameParamValue = name;
		unnameSubMesh_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private int calculateGlobalIndex_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceIndex);
	/**
	 * 计算某个子部件的instance索引在所有子部件的全局索引
	 * @param submeshIndex 子部件索引
	 * @param instanceIndex 子部件下面instance索引
	 * @return 失败返回-1
	 */
	public int calculateGlobalIndex(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateGlobalIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, long globalIndex, long submeshIndex, long instanceIndex);
	/**
	 * 计算某个全局索引属于哪个子部件的第几个索引
	 * @param globalIndex 全局索引
	 * @param submeshIndex 子部件索引
	 * @param instanceIndex 子部件下面instance索引
	 */
	public void calculateInstanceIndex(long globalIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long globalIndexParamValue = globalIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, globalIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}
	native private int getMaxGlobalIndex_void(long pNativeObject);
	/**
	 * 获取最大全局索引下标
	 * @return 失败返回-1
	 */
	public int getMaxGlobalIndex()
	{
		int returnValue = getMaxGlobalIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int _getSubMeshIndex_EVString(long pNativeObject, String name);
	/**
	 * 获得子模型的索引
	 * @param name 名称
	 * @return 子模型索引
	 */
	public int _getSubMeshIndex(String name)
	{
		String nameParamValue = name;
		int returnValue = _getSubMeshIndex_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private int getNumSubMeshes_void(long pNativeObject);
	/**
	 * 获得子模型的数量
	 * @param  
	 */
	public int getNumSubMeshes()
	{
		int returnValue = getNumSubMeshes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubMesh_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得指向子模型的指针
	 * @param index 索引
	 */
	public com.earthview.world.graphic.SubMesh getSubMesh(int index)
	{
		int indexParamValue = index;
		long returnValue = getSubMesh_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getSubMesh_EVString(long pNativeObject, String name);
	/**
	 * 通过给定的名称获得子模型
	 * @param name 名称
	 */
	public com.earthview.world.graphic.SubMesh getSubMesh(String name)
	{
		String nameParamValue = name;
		long returnValue = getSubMesh_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void destroySubMesh_ev_uint16(long pNativeObject, int index);
	/**
	 * 销毁已给索引指向的子模型
	 * @param index 索引值
	 */
	public void destroySubMesh(int index)
	{
		int indexParamValue = index;
		destroySubMesh_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void destroySubMesh_EVString(long pNativeObject, String name);
	/**
	 * 销毁已给名称标识的子模型
	 * @param name 名称
	 */
	public void destroySubMesh(String name)
	{
		String nameParamValue = name;
		destroySubMesh_EVString(this.nativeObject.pointer, nameParamValue);
	}
	public static class SubMeshIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::SubMeshIterator", new SubMeshIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 
		 */
		public SubMeshIterator(com.earthview.world.graphic.Mesh.SubMeshList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("SubMeshIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 
		 */
		public SubMeshIterator(com.earthview.world.graphic.Mesh.SubMeshIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("SubMeshIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前值的指针
		 * @param  
		 * @return 当前值
		 */
		public com.earthview.world.graphic.SubMesh getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.SubMesh next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首值的指针
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.SubMesh getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.SubMesh getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SubMesh __returnValue = new com.earthview.world.graphic.SubMesh(CreatedWhenConstruct.CWC_NotToCreate, "CSubMesh");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
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
		public SubMeshIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SubMeshIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SubMeshIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SubMeshIterator obj = null;
 			if(baseObj instanceof SubMeshIterator)
			{
				obj = (SubMeshIterator)baseObj;
			} else {
				obj = new SubMeshIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SubMeshIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SubMeshIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SubMeshIterator emptyInstance = new SubMeshIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getSubMeshIterator_void(long pNativeObject);
	/**
	 * 获得一个遍历子模型的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.Mesh.SubMeshIterator getSubMeshIterator()
	{
		long returnValue = getSubMeshIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.SubMeshIterator __returnValue = new com.earthview.world.graphic.Mesh.SubMeshIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SubMeshIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.SubMeshIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SubMeshIterator");
		}
		return __returnValue;
	}
	native private long get_sharedVertexData_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData get_sharedVertexData()
	{
		long jniValue = get_sharedVertexData_void(this.nativeObject.pointer);
		
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
	
	native private void set_sharedVertexData_CVertexData (long pNativeObject, long value);
	public void set_sharedVertexData(com.earthview.world.graphic.VertexData sharedVertexData)
	{
		long sharedVertexDataParamValue = (sharedVertexData == null ? 0L : sharedVertexData.nativeObject.pointer);
		
		set_sharedVertexData_CVertexData(this.nativeObject.pointer, sharedVertexDataParamValue);
	}
	
	native private long get_sharedBlendIndexToBoneIndexMap_void(long pNativeObject);
	public com.earthview.world.graphic.IndexMap get_sharedBlendIndexToBoneIndexMap()
	{
		long jniValue = get_sharedBlendIndexToBoneIndexMap_void(this.nativeObject.pointer);
		
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
	
	native private void set_sharedBlendIndexToBoneIndexMap_IndexMap (long pNativeObject, long value);
	public void set_sharedBlendIndexToBoneIndexMap(com.earthview.world.graphic.IndexMap sharedBlendIndexToBoneIndexMap)
	{
		long sharedBlendIndexToBoneIndexMapParamValue = sharedBlendIndexToBoneIndexMap.nativeObject.pointer;
		
		set_sharedBlendIndexToBoneIndexMap_IndexMap(this.nativeObject.pointer, sharedBlendIndexToBoneIndexMapParamValue);
	}
	
	native private long ev_clone_EVString_EVString(long pNativeObject, String newName, String newGroup);
	/**
	 * 克隆模型对象，并赋予一个新的名称
	 * @param newName 克隆模型的新名称
	 * @param newGroup 新组的名称
	 */
	public com.earthview.world.graphic.MeshPtr ev_clone(String newName, String newGroup)
	{
		String newNameParamValue = newName;
		String newGroupParamValue = newGroup;
		long returnValue = ev_clone_EVString_EVString(this.nativeObject.pointer, newNameParamValue, newGroupParamValue);
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
	native private long ev_clone_EVString(long pNativeObject, String newName);
	/**
	 * 克隆模型对象，并赋予一个新的名称
	 * @param newName 克隆模型的新名称
	 */
	public com.earthview.world.graphic.MeshPtr ev_clone(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, newNameParamValue);
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
	native private long getBounds_void(long pNativeObject);
	/**
	 * 获得该模型的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBounds()
	{
		long returnValue = getBounds_void(this.nativeObject.pointer);
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
	native private double getBoundingSphereRadius_void(long pNativeObject);
	/**
	 * 获得边框盒的半径
	 * @param  
	 * @return 边框盒半径
	 */
	public double getBoundingSphereRadius()
	{
		double returnValue = getBoundingSphereRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _setBounds_CAxisAlignedBox_ev_bool(long pNativeObject, long bounds, boolean pad);
	/**
	 * 设置该模型的边框盒
	 * @param bounds 边框
	 * @param pad 设置为true，外围盒外扩
	 */
	public void _setBounds(com.earthview.world.spatial.math.AxisAlignedBox bounds, boolean pad)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		boolean padParamValue = pad;
		_setBounds_CAxisAlignedBox_ev_bool(this.nativeObject.pointer, boundsParamValue, padParamValue);
	}
	native private void _setBounds_CAxisAlignedBox(long pNativeObject, long bounds);
	/**
	 * 设置该模型的边框盒
	 * @param bounds 边框
	 */
	public void _setBounds(com.earthview.world.spatial.math.AxisAlignedBox bounds)
	{
		long boundsParamValue = bounds.nativeObject.pointer;
		_setBounds_CAxisAlignedBox(this.nativeObject.pointer, boundsParamValue);
	}
	native private void _setBoundingSphereRadius_Real(long pNativeObject, double radius);
	/**
	 * 设置边框盒半径
	 * @param radius 半径
	 */
	public void _setBoundingSphereRadius(double radius)
	{
		double radiusParamValue = radius;
		_setBoundingSphereRadius_Real(this.nativeObject.pointer, radiusParamValue);
	}
	native private void setSkeletonName_EVString(long pNativeObject, String skelName);
	/**
	 * 设置骨骼动画
	 * @param skelName 骨骼文件的名称
	 */
	public void setSkeletonName(String skelName)
	{
		String skelNameParamValue = skelName;
		setSkeletonName_EVString(this.nativeObject.pointer, skelNameParamValue);
	}
	native private boolean hasSkeleton_void(long pNativeObject);
	/**
	 * 判断该模型是否有骨骼动画
	 * @param  
	 * @return 如果有连接的骨骼返回true
	 */
	public boolean hasSkeleton()
	{
		boolean returnValue = hasSkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasVertexAnimation_void(long pNativeObject);
	/**
	 * 判断该模型是否有顶点动画
	 * @param  
	 * @return 如果有顶点动画返回true，否则返回false
	 */
	public boolean hasVertexAnimation()
	{
		boolean returnValue = hasVertexAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSkeleton_void(long pNativeObject);
	/**
	 * 获得骨骼动画
	 * @param  
	 * @return 返回骨骼的引用
	 */
	public com.earthview.world.graphic.SkeletonPtr getSkeleton()
	{
		long returnValue = getSkeleton_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SkeletonPtr __returnValue = new com.earthview.world.graphic.SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		}
		return __returnValue;
	}
	native private long getSkeletonName_void(long pNativeObject);
	/**
	 * 获得骨骼动画的名称
	 * @param  
	 */
	public StringPointer getSkeletonName()
	{
		long returnValue = getSkeletonName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void _initAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 初始化动画集合
	 * @param animSet 指向动画集合的指针
	 */
	public void _initAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_initAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void _refreshAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 刷新动画集合
	 * @param animSet 指向动画集合的指针
	 */
	public void _refreshAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_refreshAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void addBoneAssignment_VertexBoneAssignment(long pNativeObject, long vertBoneAssign);
	/**
	 * 为骨骼动画的带有权重值的骨头分配顶点
	 * @param vertBoneAssign 
	 */
	public void addBoneAssignment(com.earthview.world.graphic.VertexBoneAssignment vertBoneAssign)
	{
		long vertBoneAssignParamValue = vertBoneAssign.nativeObject.pointer;
		addBoneAssignment_VertexBoneAssignment(this.nativeObject.pointer, vertBoneAssignParamValue);
	}
	native private void clearBoneAssignments_void(long pNativeObject);
	/**
	 * 去除掉该模型的所有骨头分配
	 * @param  
	 */
	public void clearBoneAssignments()
	{
		clearBoneAssignments_void(this.nativeObject.pointer);
	}
	native private void _notifySkeleton_CSkeletonPtr(long pNativeObject, long pSkel);
	/**
	 * 通报骨骼动画
	 * @param pSkel 
	 */
	public void _notifySkeleton(com.earthview.world.graphic.SkeletonPtr pSkel)
	{
		long pSkelParamValue = pSkel.nativeObject.pointer;
		_notifySkeleton_CSkeletonPtr(this.nativeObject.pointer, pSkelParamValue);
	}
	native private long getBoneAssignmentIterator_void(long pNativeObject);
	/**
	 * 获得一个遍历所有骨头分配的迭代器
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
	/**
	 * 获得骨头分配列表的引用
	 * @param  
	 */
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
	native private int getNumLodLevels_void(long pNativeObject);
	/**
	 * 返回该模型支持的细节等级的数量
	 * @param  
	 * @return 细节等级数量
	 */
	public int getNumLodLevels()
	{
		int returnValue = getNumLodLevels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLodLevel_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得已编号的细节等级实体的细节
	 * @param  
	 */
	public com.earthview.world.graphic.MeshLodUsage getLodLevel(int index)
	{
		int indexParamValue = index;
		long returnValue = getLodLevel_ev_uint16(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.MeshLodUsage __returnValue = new com.earthview.world.graphic.MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate, "MeshLodUsage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshLodUsage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MeshLodUsage");
		}
		return __returnValue;
	}
	native private void createManualLodLevel_Real_EVString_EVString(long pNativeObject, double value, String meshName, String groupName);
	/**
	 * 向模型中添加一个手动的细节等级实体
	 * @param value 细节等级应用的值
	 * @param meshName 模型的名称
	 * @param groupName 组的名称
	 */
	public void createManualLodLevel(double value, String meshName, String groupName)
	{
		double valueParamValue = value;
		String meshNameParamValue = meshName;
		String groupNameParamValue = groupName;
		createManualLodLevel_Real_EVString_EVString(this.nativeObject.pointer, valueParamValue, meshNameParamValue, groupNameParamValue);
	}
	native private void createManualLodLevel_Real_EVString(long pNativeObject, double value, String meshName);
	/**
	 * 向模型中添加一个手动的细节等级实体
	 * @param value 细节等级应用的值
	 * @param meshName 模型的名称
	 */
	public void createManualLodLevel(double value, String meshName)
	{
		double valueParamValue = value;
		String meshNameParamValue = meshName;
		createManualLodLevel_Real_EVString(this.nativeObject.pointer, valueParamValue, meshNameParamValue);
	}
	native private void updateManualLodLevel_ev_uint16_EVString(long pNativeObject, int index, String meshName);
	/**
	 * 更新该模型的细节等级
	 * @param index 细节等级的索引
	 * @param meshName 模型的名称
	 */
	public void updateManualLodLevel(int index, String meshName)
	{
		int indexParamValue = index;
		String meshNameParamValue = meshName;
		updateManualLodLevel_ev_uint16_EVString(this.nativeObject.pointer, indexParamValue, meshNameParamValue);
	}
	native private int getLodIndex_Real(long pNativeObject, double value);
	/**
	 * 获得已给细节等级值的索引
	 * @param value 细节等级值
	 */
	public int getLodIndex(double value)
	{
		double valueParamValue = value;
		int returnValue = getLodIndex_Real(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean isLodManual_void(long pNativeObject);
	/**
	 * 判断该模型是否正在使用手动细节等级
	 * @param  
	 * @return 如果使用手动细节等级返回true，否则返回false
	 */
	public boolean isLodManual()
	{
		boolean returnValue = isLodManual_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _setLodInfo_ev_uint16_ev_bool(long pNativeObject, int numLevels, boolean isManual);
	public void _setLodInfo(int numLevels, boolean isManual)
	{
		int numLevelsParamValue = numLevels;
		boolean isManualParamValue = isManual;
		_setLodInfo_ev_uint16_ev_bool(this.nativeObject.pointer, numLevelsParamValue, isManualParamValue);
	}
	native private void _setLodUsage_ev_uint16_MeshLodUsage(long pNativeObject, int level, long usage);
	public void _setLodUsage(int level, com.earthview.world.graphic.MeshLodUsage usage)
	{
		int levelParamValue = level;
		long usageParamValue = usage.nativeObject.pointer;
		_setLodUsage_ev_uint16_MeshLodUsage(this.nativeObject.pointer, levelParamValue, usageParamValue);
	}
	native private void _setSubMeshLodFaceList_ev_uint16_ev_uint16_CIndexData(long pNativeObject, int subIdx, int level, long facedata);
	public void _setSubMeshLodFaceList(int subIdx, int level, com.earthview.world.graphic.IndexData facedata)
	{
		int subIdxParamValue = subIdx;
		int levelParamValue = level;
		long facedataParamValue = (facedata == null ? 0L : facedata.nativeObject.pointer);
		_setSubMeshLodFaceList_ev_uint16_ev_uint16_CIndexData(this.nativeObject.pointer, subIdxParamValue, levelParamValue, facedataParamValue);
	}
	native private void removeLodLevels_void(long pNativeObject);
	/**
	 * 从该模型中去除掉所有的细节等级数据
	 * @param  
	 */
	public void removeLodLevels()
	{
		removeLodLevels_void(this.nativeObject.pointer);
	}
	native private void setVertexBufferPolicy_Usage_ev_bool(long pNativeObject, int usage, boolean shadowBuffer);
	/**
	 * 当下载模型时，设置顶点缓冲使用的策略
	 * @param usage 用法标记
	 * @param shadowBuffer 如果设置为true，将会创建一个带阴影缓存的顶点缓存
	 */
	public void setVertexBufferPolicy(com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean shadowBuffer)
	{
		int usageParamValue = usage.getValue();
		boolean shadowBufferParamValue = shadowBuffer;
		setVertexBufferPolicy_Usage_ev_bool(this.nativeObject.pointer, usageParamValue, shadowBufferParamValue);
	}
	native private void setVertexBufferPolicy_Usage(long pNativeObject, int usage);
	/**
	 * 当下载模型时，设置顶点缓冲使用的策略
	 * @param usage 用法标记
	 */
	public void setVertexBufferPolicy(com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int usageParamValue = usage.getValue();
		setVertexBufferPolicy_Usage(this.nativeObject.pointer, usageParamValue);
	}
	native private void setIndexBufferPolicy_Usage_ev_bool(long pNativeObject, int usage, boolean shadowBuffer);
	/**
	 * 当下载模型时，设置索引缓冲使用的策略
	 * @param usage 用法标记
	 * @param shadowBuffer 如果设置为true，将会创建一个带阴影缓存的索引缓存
	 */
	public void setIndexBufferPolicy(com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean shadowBuffer)
	{
		int usageParamValue = usage.getValue();
		boolean shadowBufferParamValue = shadowBuffer;
		setIndexBufferPolicy_Usage_ev_bool(this.nativeObject.pointer, usageParamValue, shadowBufferParamValue);
	}
	native private void setIndexBufferPolicy_Usage(long pNativeObject, int usage);
	/**
	 * 当下载模型时，设置索引缓冲使用的策略
	 * @param usage 用法标记
	 */
	public void setIndexBufferPolicy(com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int usageParamValue = usage.getValue();
		setIndexBufferPolicy_Usage(this.nativeObject.pointer, usageParamValue);
	}
	native private int getVertexBufferUsage_void(long pNativeObject);
	/**
	 * 获得该模型顶点缓存的用法设置
	 * @param  
	 */
	public com.earthview.world.graphic.HardwareBuffer.Usage getVertexBufferUsage()
	{
		int returnValue = getVertexBufferUsage_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(returnValue);
	}
	native private int getIndexBufferUsage_void(long pNativeObject);
	/**
	 * 获得该模型索引缓存的用法设置
	 * @param  
	 */
	public com.earthview.world.graphic.HardwareBuffer.Usage getIndexBufferUsage()
	{
		int returnValue = getIndexBufferUsage_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(returnValue);
	}
	native private boolean isVertexBufferShadowed_void(long pNativeObject);
	/**
	 * 判断是否该模型顶点缓存附有阴影
	 * @param  
	 */
	public boolean isVertexBufferShadowed()
	{
		boolean returnValue = isVertexBufferShadowed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isIndexBufferShadowed_void(long pNativeObject);
	/**
	 * 判断是否该模型索引缓存附有阴影
	 * @param  
	 */
	public boolean isIndexBufferShadowed()
	{
		boolean returnValue = isIndexBufferShadowed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int _rationaliseBoneAssignments_ev_size_t_VertexBoneAssignmentList(long pNativeObject, long vertexCount, long assignments);
	public int _rationaliseBoneAssignments(long vertexCount, com.earthview.world.graphic.Mesh.VertexBoneAssignmentList assignments)
	{
		long vertexCountParamValue = vertexCount;
		long assignmentsParamValue = assignments.nativeObject.pointer;
		int returnValue = _rationaliseBoneAssignments_ev_size_t_VertexBoneAssignmentList(this.nativeObject.pointer, vertexCountParamValue, assignmentsParamValue);
		return returnValue;
	}
	native private void _compileBoneAssignments_void(long pNativeObject);
	/**
	 * 编辑骨骼分配到几何缓存
	 * @param  
	 */
	public void _compileBoneAssignments()
	{
		_compileBoneAssignments_void(this.nativeObject.pointer);
	}
	native private void _updateCompiledBoneAssignments_void(long pNativeObject);
	/**
	 * 更新已编辑的骨骼分配
	 * @param  
	 */
	public void _updateCompiledBoneAssignments()
	{
		_updateCompiledBoneAssignments_void(this.nativeObject.pointer);
	}
	native private void buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool_ev_bool(long pNativeObject, int targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored, boolean splitRotated, boolean storeParityInW);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 * @param sourceTexCoordSet 纹理坐标索引，2D的纹理坐标源
	 * @param index 元素索引
	 * @param splitMirrored 设置是否分离顶点，当一个镜像的切线空间转换被检查到
	 * @param splitRotated 设置是否分离顶点，当一个选装的切线空间转换被检查到
	 * @param storeParityInW 设置是否存储4维向量
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored, boolean splitRotated, boolean storeParityInW)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		int indexParamValue = index;
		boolean splitMirroredParamValue = splitMirrored;
		boolean splitRotatedParamValue = splitRotated;
		boolean storeParityInWParamValue = storeParityInW;
		buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue, indexParamValue, splitMirroredParamValue, splitRotatedParamValue, storeParityInWParamValue);
	}
	native private void buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool(long pNativeObject, int targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored, boolean splitRotated);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 * @param sourceTexCoordSet 纹理坐标索引，2D的纹理坐标源
	 * @param index 元素索引
	 * @param splitMirrored 设置是否分离顶点，当一个镜像的切线空间转换被检查到
	 * @param splitRotated 设置是否分离顶点，当一个选装的切线空间转换被检查到
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored, boolean splitRotated)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		int indexParamValue = index;
		boolean splitMirroredParamValue = splitMirrored;
		boolean splitRotatedParamValue = splitRotated;
		buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue, indexParamValue, splitMirroredParamValue, splitRotatedParamValue);
	}
	native private void buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool(long pNativeObject, int targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 * @param sourceTexCoordSet 纹理坐标索引，2D的纹理坐标源
	 * @param index 元素索引
	 * @param splitMirrored 设置是否分离顶点，当一个镜像的切线空间转换被检查到
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet, int index, boolean splitMirrored)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		int indexParamValue = index;
		boolean splitMirroredParamValue = splitMirrored;
		buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue, indexParamValue, splitMirroredParamValue);
	}
	native private void buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16(long pNativeObject, int targetSemantic, int sourceTexCoordSet, int index);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 * @param sourceTexCoordSet 纹理坐标索引，2D的纹理坐标源
	 * @param index 元素索引
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet, int index)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		int indexParamValue = index;
		buildTangentVectors_VertexElementSemantic_ev_uint16_ev_uint16(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue, indexParamValue);
	}
	native private void buildTangentVectors_VertexElementSemantic_ev_uint16(long pNativeObject, int targetSemantic, int sourceTexCoordSet);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 * @param sourceTexCoordSet 纹理坐标索引，2D的纹理坐标源
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		buildTangentVectors_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue);
	}
	native private void buildTangentVectors_VertexElementSemantic(long pNativeObject, int targetSemantic);
	/**
	 * 建立已给模型的切向量集合
	 * @param targetSemantic 存储切线
	 */
	public void buildTangentVectors(com.earthview.world.graphic.VertexElementSemantic targetSemantic)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		buildTangentVectors_VertexElementSemantic(this.nativeObject.pointer, targetSemanticParamValue);
	}
	native private void buildTangentVectors_void(long pNativeObject);
	/**
	 * 建立已给模型的切向量集合
	 * @param  
	 */
	public void buildTangentVectors()
	{
		buildTangentVectors_void(this.nativeObject.pointer);
	}
	native private boolean suggestTangentVectorBuildParams_VertexElementSemantic_ev_uint16_ev_uint16(long pNativeObject, int targetSemantic, long outSourceCoordSet, long outIndex);
	public boolean suggestTangentVectorBuildParams(com.earthview.world.graphic.VertexElementSemantic targetSemantic, UShortPointer outSourceCoordSet, UShortPointer outIndex)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		long outSourceCoordSetParamValue = outSourceCoordSet.nativeObject.pointer;
		long outIndexParamValue = outIndex.nativeObject.pointer;
		boolean returnValue = suggestTangentVectorBuildParams_VertexElementSemantic_ev_uint16_ev_uint16(this.nativeObject.pointer, targetSemanticParamValue, outSourceCoordSetParamValue, outIndexParamValue);
		return returnValue;
	}
	native private void buildEdgeList_void(long pNativeObject);
	/**
	 * 建立模型的边界列表，被用来产生阴影
	 * @param  
	 */
	public void buildEdgeList()
	{
		buildEdgeList_void(this.nativeObject.pointer);
	}
	native private void freeEdgeList_void(long pNativeObject);
	/**
	 * 销毁或是释放该模型建立的边界列表
	 * @param  
	 */
	public void freeEdgeList()
	{
		freeEdgeList_void(this.nativeObject.pointer);
	}
	native private void prepareForShadowVolume_void(long pNativeObject);
	/**
	 * 该方法为产生可渲染阴影准备模型
	 * @param  
	 */
	public void prepareForShadowVolume()
	{
		prepareForShadowVolume_void(this.nativeObject.pointer);
	}
	native private long getEdgeList_ev_uint16(long pNativeObject, int lodIndex);
	/**
	 * 获得模型的边界列表
	 * @param lodIndex 细节等级索引
	 */
	public com.earthview.world.graphic.EdgeData getEdgeList(int lodIndex)
	{
		int lodIndexParamValue = lodIndex;
		long returnValue = getEdgeList_ev_uint16(this.nativeObject.pointer, lodIndexParamValue);
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
	native private long getEdgeList_void(long pNativeObject);
	/**
	 * 获得模型的边界列表
	 * @param  
	 */
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
	native private boolean isPreparedForShadowVolumes_void(long pNativeObject);
	/**
	 * 判断该模型是否准备了渲染阴影的几何体
	 * @param  
	 * @return 如果是返回true,否则返回false
	 */
	public boolean isPreparedForShadowVolumes()
	{
		boolean returnValue = isPreparedForShadowVolumes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEdgeListBuilt_void(long pNativeObject);
	/**
	 * 判断该模型是否有附加的边界列表
	 * @param  
	 * @return 如果是返回true,否则返回false
	 */
	public boolean isEdgeListBuilt()
	{
		boolean returnValue = isEdgeListBuilt_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void prepareMatricesForVertexBlend_CMatrix4_CMatrix4_IndexMap(long blendMatrices, long boneMatrices, long indexMap);
	/**
	 * 准备软件顶点混合的矩阵
	 * @param blendMatrices 指向矩阵指针的指针，存储结果
	 * @param boneMatrices 指向一组矩阵的指针，用来混合
	 * @param indexMap 索引map转换混合索引到骨骼索引
	 */
	public static void prepareMatricesForVertexBlend(NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> blendMatrices, com.earthview.world.spatial.math.Matrix4 boneMatrices, com.earthview.world.graphic.IndexMap indexMap)
	{
		long blendMatricesParamValue = (blendMatrices == null ? 0L : blendMatrices.nativeObject.pointer);
		long boneMatricesParamValue = (boneMatrices == null ? 0L : boneMatrices.nativeObject.pointer);
		long indexMapParamValue = indexMap.nativeObject.pointer;
		prepareMatricesForVertexBlend_CMatrix4_CMatrix4_IndexMap(blendMatricesParamValue, boneMatricesParamValue, indexMapParamValue);
	}
	native private static void softwareVertexBlend_CVertexData_CVertexData_CMatrix4_ev_size_t_ev_bool(long sourceVertexData, long targetVertexData, long blendMatrices, long numMatrices, boolean blendNormals);
	/**
	 * 执行软件的顶点混合
	 * @param sourceVertexData 顶点源数据
	 * @param targetVertexData 顶点目标数据
	 * @param blendMatrices 指向矩阵指针的指针
	 * @param  numMatrices 混合矩阵中矩阵的数目
	 * @param blendNormals 如果为ture,法线也像位置信息一样被混合
	 */
	public static void softwareVertexBlend(com.earthview.world.graphic.VertexData sourceVertexData, com.earthview.world.graphic.VertexData targetVertexData, NativeObjectPointer<com.earthview.world.spatial.math.Matrix4> blendMatrices, long numMatrices, boolean blendNormals)
	{
		long sourceVertexDataParamValue = (sourceVertexData == null ? 0L : sourceVertexData.nativeObject.pointer);
		long targetVertexDataParamValue = (targetVertexData == null ? 0L : targetVertexData.nativeObject.pointer);
		long blendMatricesParamValue = (blendMatrices == null ? 0L : blendMatrices.nativeObject.pointer);
		long numMatricesParamValue = numMatrices;
		boolean blendNormalsParamValue = blendNormals;
		softwareVertexBlend_CVertexData_CVertexData_CMatrix4_ev_size_t_ev_bool(sourceVertexDataParamValue, targetVertexDataParamValue, blendMatricesParamValue, numMatricesParamValue, blendNormalsParamValue);
	}
	native private static void softwareVertexMorph_Real_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_CVertexData(double t, long b1, long b2, long targetVertexData);
	/**
	 * 执行软件顶点变形，用于变形动画
	 * @param t 起始缓冲位置和终点缓冲位置的距离
	 * @param b1 顶点缓存
	 * @param b2 顶点缓存
	 * @param targetVertexData 目标顶点数据
	 */
	public static void softwareVertexMorph(double t, com.earthview.world.graphic.HardwareVertexBufferSharedPtr b1, com.earthview.world.graphic.HardwareVertexBufferSharedPtr b2, com.earthview.world.graphic.VertexData targetVertexData)
	{
		double tParamValue = t;
		long b1ParamValue = b1.nativeObject.pointer;
		long b2ParamValue = b2.nativeObject.pointer;
		long targetVertexDataParamValue = (targetVertexData == null ? 0L : targetVertexData.nativeObject.pointer);
		softwareVertexMorph_Real_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_CVertexData(tParamValue, b1ParamValue, b2ParamValue, targetVertexDataParamValue);
	}
	native private static void softwareVertexPoseBlend_Real_VertexOffsetMap_NormalsMap_CVertexData(double weight, long vertexOffsetMap, long normalsMap, long targetVertexData);
	/**
	 * 执行软件顶点的姿态混合
	 * @param weight 测量偏移量的权重
	 * @param vertexOffsetMap 
	 * @param targetVertexData 目标顶点数据
	 */
	public static void softwareVertexPoseBlend(double weight, com.earthview.world.graphic.Pose.VertexOffsetMap vertexOffsetMap, com.earthview.world.graphic.Pose.NormalsMap normalsMap, com.earthview.world.graphic.VertexData targetVertexData)
	{
		double weightParamValue = weight;
		long vertexOffsetMapParamValue = vertexOffsetMap.nativeObject.pointer;
		long normalsMapParamValue = normalsMap.nativeObject.pointer;
		long targetVertexDataParamValue = (targetVertexData == null ? 0L : targetVertexData.nativeObject.pointer);
		softwareVertexPoseBlend_Real_VertexOffsetMap_NormalsMap_CVertexData(weightParamValue, vertexOffsetMapParamValue, normalsMapParamValue, targetVertexDataParamValue);
	}
	native private long getSubMeshNameMap_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh.SubMeshNameMap getSubMeshNameMap()
	{
		long returnValue = getSubMeshNameMap_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.SubMeshNameMap __returnValue = new com.earthview.world.graphic.Mesh.SubMeshNameMap(CreatedWhenConstruct.CWC_NotToCreate, "SubMeshNameMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.SubMeshNameMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SubMeshNameMap");
		}
		return __returnValue;
	}
	native private void setAutoBuildEdgeLists_ev_bool(long pNativeObject, boolean autobuild);
	/**
	 * 设置该模型是否应该自动建立边界列表
	 * @param autobuild 
	 */
	public void setAutoBuildEdgeLists(boolean autobuild)
	{
		boolean autobuildParamValue = autobuild;
		setAutoBuildEdgeLists_ev_bool(this.nativeObject.pointer, autobuildParamValue);
	}
	native private boolean getAutoBuildEdgeLists_void(long pNativeObject);
	/**
	 * 获得该模型是否设置自动建立边界列表
	 * @param  
	 * @return 如果设置返回true,否则返回false
	 */
	public boolean getAutoBuildEdgeLists()
	{
		boolean returnValue = getAutoBuildEdgeLists_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  int getSharedVertexDataAnimationType_void_callback()
	{
		com.earthview.world.graphic.VertexAnimationType returnValue = getSharedVertexDataAnimationType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSharedVertexDataAnimationType_void(long pNativeObject);
	/**
	 * 获得该模型支持的顶点动画类型
	 * @param  
	 */
	public com.earthview.world.graphic.VertexAnimationType getSharedVertexDataAnimationType()
	{
		int returnValue = getSharedVertexDataAnimationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexAnimationType.toEnum(returnValue);
	}
	native private int getSharedVertexDataAnimationType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexAnimationType getSharedVertexDataAnimationType_NoVirtual()
	{
		int returnValue = getSharedVertexDataAnimationType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexAnimationType.toEnum(returnValue);
	}

	native private boolean getSharedVertexDataAnimationIncludesNormals_void(long pNativeObject);
	//// Returns whether animation on shared vertex data includes normals
	public boolean getSharedVertexDataAnimationIncludesNormals()
	{
		boolean returnValue = getSharedVertexDataAnimationIncludesNormals_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexDataByTrackHandle_ev_uint16(long pNativeObject, int handle);
	/**
	 * 基于变形动画轨迹获得指向顶点数据元素的指针
	 * @param handle 句柄
	 */
	public com.earthview.world.graphic.VertexData getVertexDataByTrackHandle(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getVertexDataByTrackHandle_ev_uint16(this.nativeObject.pointer, handleParamValue);
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
	native private void updateMaterialForAllSubMeshes_void(long pNativeObject);
	/**
	 * 应用材质纹理的别名，遍历所有的子模型
	 * @param  
	 */
	public void updateMaterialForAllSubMeshes()
	{
		updateMaterialForAllSubMeshes_void(this.nativeObject.pointer);
	}
	native private void _determineAnimationTypes_void(long pNativeObject);
	/**
	 * 如果动画的类型还没有确定，扫描所有的顶点动画并决定顶点数据集的类型
	 * @param  
	 */
	public void _determineAnimationTypes()
	{
		_determineAnimationTypes_void(this.nativeObject.pointer);
	}
	native private boolean _getAnimationTypesDirty_void(long pNativeObject);
	public boolean _getAnimationTypesDirty()
	{
		boolean returnValue = _getAnimationTypesDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long createPose_ev_uint16_EVString(long pNativeObject, int target, String name);
	/**
	 * 为该模型或者是子模型创建一个新的姿态
	 * @param target 目标几何体索引
	 * @param name 姿态名称
	 * @return 返回一个新的姿态
	 */
	public com.earthview.world.graphic.Pose createPose(int target, String name)
	{
		int targetParamValue = target;
		String nameParamValue = name;
		long returnValue = createPose_ev_uint16_EVString(this.nativeObject.pointer, targetParamValue, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPose");
		}
		return __returnValue;
	}
	native private long createPose_ev_uint16(long pNativeObject, int target);
	/**
	 * 为该模型或者是子模型创建一个新的姿态动画
	 * @param target 目标几何体索引
	 * @return 返回一个新的姿态动画
	 */
	public com.earthview.world.graphic.Pose createPose(int target)
	{
		int targetParamValue = target;
		long returnValue = createPose_ev_uint16(this.nativeObject.pointer, targetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPose");
		}
		return __returnValue;
	}
	native private long getPoseCount_void(long pNativeObject);
	/**
	 * 获得姿态动画的数量
	 * @param  
	 */
	public long getPoseCount()
	{
		long returnValue = getPoseCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPose_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过索引获得一个已存在的姿态动画
	 * @param index 索引
	 */
	public com.earthview.world.graphic.Pose getPose(int index)
	{
		int indexParamValue = index;
		long returnValue = getPose_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPose");
		}
		return __returnValue;
	}
	native private long getPose_EVString(long pNativeObject, String name);
	/**
	 * 通过名称获得一个已存在的姿态动画
	 * @param name 名称
	 */
	public com.earthview.world.graphic.Pose getPose(String name)
	{
		String nameParamValue = name;
		long returnValue = getPose_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPose");
		}
		return __returnValue;
	}
	native private void removePose_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过索引删除一个已存在的姿态动画
	 * @param index 索引
	 */
	public void removePose(int index)
	{
		int indexParamValue = index;
		removePose_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removePose_EVString(long pNativeObject, String name);
	/**
	 * 通过名称删除一个已存在的姿态动画
	 * @param name 名称
	 */
	public void removePose(String name)
	{
		String nameParamValue = name;
		removePose_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAllPoses_void(long pNativeObject);
	/**
	 * 删除所有的姿态动画
	 * @param  
	 */
	public void removeAllPoses()
	{
		removeAllPoses_void(this.nativeObject.pointer);
	}
	public static class ConstPoseIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::ConstPoseIterator", new ConstPoseIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 
		 */
		public ConstPoseIterator(com.earthview.world.graphic.PoseList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("ConstPoseIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 
		 */
		public ConstPoseIterator(com.earthview.world.graphic.Mesh.ConstPoseIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("ConstPoseIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前值的指针
		 * @param  
		 * @return 当前值
		 */
		public com.earthview.world.graphic.Pose getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.Pose next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首值的指针
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Pose getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Pose getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		public ConstPoseIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstPoseIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstPoseIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstPoseIterator obj = null;
 			if(baseObj instanceof ConstPoseIterator)
			{
				obj = (ConstPoseIterator)baseObj;
			} else {
				obj = new ConstPoseIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstPoseIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstPoseIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstPoseIterator emptyInstance = new ConstPoseIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class PoseIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMesh::PoseIterator", new PoseIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param vec 
		 */
		public PoseIterator(com.earthview.world.graphic.PoseList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("PoseIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 
		 */
		public PoseIterator(com.earthview.world.graphic.Mesh.PoseIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("PoseIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前值的指针
		 * @param  
		 * @return 当前值
		 */
		public com.earthview.world.graphic.Pose getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.Pose next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首值的指针
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Pose getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Pose getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pose __returnValue = new com.earthview.world.graphic.Pose(CreatedWhenConstruct.CWC_NotToCreate, "CPose");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pose)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPose");
			}
			return __returnValue;
		}
		public PoseIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PoseIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PoseIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PoseIterator obj = null;
 			if(baseObj instanceof PoseIterator)
			{
				obj = (PoseIterator)baseObj;
			} else {
				obj = new PoseIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PoseIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PoseIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PoseIterator emptyInstance = new PoseIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getPoseIterator_void(long pNativeObject);
	/**
	 * 获得遍历姿态动画的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.Mesh.PoseIterator getPoseIterator()
	{
		long returnValue = getPoseIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.PoseIterator __returnValue = new com.earthview.world.graphic.Mesh.PoseIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "PoseIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.PoseIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PoseIterator");
		}
		return __returnValue;
	}
	native private long getPoseList_void(long pNativeObject);
	/**
	 * 获得姿态动画列表
	 * @param  
	 */
	public com.earthview.world.graphic.PoseList getPoseList()
	{
		long returnValue = getPoseList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.PoseList __returnValue = new com.earthview.world.graphic.PoseList(CreatedWhenConstruct.CWC_NotToCreate, "PoseList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PoseList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PoseList");
		}
		return __returnValue;
	}
	native private long getLodStrategy_void(long pNativeObject);
	/**
	 * 获得该模型细节等级策略
	 * @param  
	 */
	public com.earthview.world.graphic.LodStrategy getLodStrategy()
	{
		long returnValue = getLodStrategy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategy __returnValue = new com.earthview.world.graphic.LodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategy");
		}
		return __returnValue;
	}
	native private void setLodStrategy_CLodStrategy(long pNativeObject, long lodStrategy);
	/**
	 * 设置该模型细节等级策略
	 * @param  
	 */
	public void setLodStrategy(com.earthview.world.graphic.LodStrategy lodStrategy)
	{
		long lodStrategyParamValue = (lodStrategy == null ? 0L : lodStrategy.nativeObject.pointer);
		setLodStrategy_CLodStrategy(this.nativeObject.pointer, lodStrategyParamValue);
	}
	native private void loadFromDataStream_DataStreamPtr(long pNativeObject, long stream);
	/**
	 * 从内存流加载模型，本函数是为了手动加载模型，请勿单独使用
	 * @param  
	 */
	public void loadFromDataStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		loadFromDataStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	public Mesh(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Mesh(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 获得资源名
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		return super.getHandle_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		return super.getGroup_NoVirtual();
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
	}
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_removeAnimation_EVString(long pNativeObject, String method);
	native protected void register_getNumAnimations_void(long pNativeObject, String method);
	native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAllAnimations_void(long pNativeObject, String method);
	native protected void register_getSharedVertexDataAnimationType_void(long pNativeObject, String method);
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register__getAnimationImpl_EVString(this.nativeObject.pointer, "_getAnimationImpl_EVString_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
			this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
			this.register_removeAllAnimations_void(this.nativeObject.pointer, "removeAllAnimations_void_callback");
			this.register_getSharedVertexDataAnimationType_void(this.nativeObject.pointer, "getSharedVertexDataAnimationType_void_callback");
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static Mesh fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Mesh obj = null;
 		if(baseObj instanceof Mesh)
		{
			obj = (Mesh)baseObj;
		} else {
			obj = new Mesh(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMesh");
			obj.increaseCast();
		}

		return obj;
	}
}
