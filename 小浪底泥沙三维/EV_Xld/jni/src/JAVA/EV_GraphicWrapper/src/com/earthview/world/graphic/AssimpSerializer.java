package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AssimpSerializer extends com.earthview.world.graphic.ModelSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAssimpSerializer", new AssimpSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAssimpSerializerProxy", new AssimpSerializerClassFactory());
	}

	public AssimpSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAssimpSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AssimpSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getFileExtension_void(long pNativeObject);
	public String getFileExtension()
	{
		String returnValue = getFileExtension_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFileExtension_void_NoVirtual(long pNativeObject);
	protected String getFileExtension_NoVirtual()
	{
		String returnValue = getFileExtension_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void useDoubleSideLight_ev_bool(long pNativeObject, boolean doubleSideLight);
	public void useDoubleSideLight(boolean doubleSideLight)
	{
		boolean doubleSideLightParamValue = doubleSideLight;
		useDoubleSideLight_ev_bool(this.nativeObject.pointer, doubleSideLightParamValue);
	}
	native private void setIsLeftHand_ev_bool(long pNativeObject, boolean isLeftHand);
	public void setIsLeftHand(boolean isLeftHand)
	{
		boolean isLeftHandParamValue = isLeftHand;
		setIsLeftHand_ev_bool(this.nativeObject.pointer, isLeftHandParamValue);
	}
	protected  void importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback(String filePath, long pMesh, long aniStream, long skeletonStream)
	{
		String filePathParamValue = filePath;
		com.earthview.world.graphic.Mesh pMeshParamValue = (pMesh == 0L ? null : new com.earthview.world.graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate));
		if(pMeshParamValue != null)
		{
		pMeshParamValue.setDelegate(true);
		pMeshParamValue.setInstancePointer(new InstancePointer(pMesh));
		IClassFactory pMeshParamValueClassFactory = GlobalClassFactoryMap.get(pMeshParamValue.getCppInstanceTypeName());
		if (pMeshParamValueClassFactory != null)
		{
			pMeshParamValue.setDelegate(true);
			pMeshParamValue = (com.earthview.world.graphic.Mesh)pMeshParamValueClassFactory.create();
			pMeshParamValue.setDelegate(true);
			pMeshParamValue.setInstancePointer(new InstancePointer(pMesh));
		}
		}
		com.earthview.world.core.MemoryDataStreamPtr aniStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		aniStreamParamValue.setDelegate(true);
		aniStreamParamValue.setInstancePointer(new InstancePointer(aniStream));
		IClassFactory aniStreamParamValueClassFactory = GlobalClassFactoryMap.get(aniStreamParamValue.getCppInstanceTypeName());
		if (aniStreamParamValueClassFactory != null)
		{
			aniStreamParamValue.setDelegate(true);
			aniStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)aniStreamParamValueClassFactory.create();
			aniStreamParamValue.setDelegate(true);
			aniStreamParamValue.setInstancePointer(new InstancePointer(aniStream));
		}
		com.earthview.world.core.MemoryDataStreamPtr skeletonStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		skeletonStreamParamValue.setDelegate(true);
		skeletonStreamParamValue.setInstancePointer(new InstancePointer(skeletonStream));
		IClassFactory skeletonStreamParamValueClassFactory = GlobalClassFactoryMap.get(skeletonStreamParamValue.getCppInstanceTypeName());
		if (skeletonStreamParamValueClassFactory != null)
		{
			skeletonStreamParamValue.setDelegate(true);
			skeletonStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)skeletonStreamParamValueClassFactory.create();
			skeletonStreamParamValue.setDelegate(true);
			skeletonStreamParamValue.setInstancePointer(new InstancePointer(skeletonStream));
		}
		importMesh(filePathParamValue, pMeshParamValue, aniStreamParamValue, skeletonStreamParamValue);
	}

	native private void importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(long pNativeObject, String filePath, long pMesh, long aniStream, long skeletonStream);
	///virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh,EarthView::World::Core::NameValuePairList& miscParams);
	public void importMesh(String filePath, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.MemoryDataStreamPtr aniStream, com.earthview.world.core.MemoryDataStreamPtr skeletonStream)
	{
		String filePathParamValue = filePath;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long aniStreamParamValue = aniStream.nativeObject.pointer;
		long skeletonStreamParamValue = skeletonStream.nativeObject.pointer;
		importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(this.nativeObject.pointer, filePathParamValue, pMeshParamValue, aniStreamParamValue, skeletonStreamParamValue);
	}
	native private void importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String filePath, long pMesh, long aniStream, long skeletonStream);
	protected void importMesh_NoVirtual(String filePath, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.MemoryDataStreamPtr aniStream, com.earthview.world.core.MemoryDataStreamPtr skeletonStream)
	{
		String filePathParamValue = filePath;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long aniStreamParamValue = aniStream.nativeObject.pointer;
		long skeletonStreamParamValue = skeletonStream.nativeObject.pointer;
		importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, filePathParamValue, pMeshParamValue, aniStreamParamValue, skeletonStreamParamValue);
	}

	native private void setAlphaRejection_ev_byte(long pNativeObject, short alphaRejection);
	//// Sets the listener for this serializer
	//void setListener(EarthView::World::Graphic::CAssimpSerializer *ref_listener);
	//// Returns the current listener
	//EarthView::World::Graphic::CAssimpSerializer *getListener();
	public void setAlphaRejection(short alphaRejection)
	{
		short alphaRejectionParamValue = alphaRejection;
		setAlphaRejection_ev_byte(this.nativeObject.pointer, alphaRejectionParamValue);
	}
	native private void setCompositorAllSubmesh_ev_bool(long pNativeObject, boolean b);
	public void setCompositorAllSubmesh(boolean b)
	{
		boolean bParamValue = b;
		setCompositorAllSubmesh_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setExportNormal_ev_bool(long pNativeObject, boolean exportNormal);
	///是否导出法线
	public void setExportNormal(boolean exportNormal)
	{
		boolean exportNormalParamValue = exportNormal;
		setExportNormal_ev_bool(this.nativeObject.pointer, exportNormalParamValue);
	}
	native private void setOptimizeVertex_ev_bool(long pNativeObject, boolean optimizeVertex);
	///是否优化减少重复顶点
	public void setOptimizeVertex(boolean optimizeVertex)
	{
		boolean optimizeVertexParamValue = optimizeVertex;
		setOptimizeVertex_ev_bool(this.nativeObject.pointer, optimizeVertexParamValue);
	}
	native private void setLocalMatrix_CMatrix4(long pNativeObject, long localMatrix);
	///设置模型局部矩阵
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 localMatrix)
	{
		long localMatrixParamValue = localMatrix.nativeObject.pointer;
		setLocalMatrix_CMatrix4(this.nativeObject.pointer, localMatrixParamValue);
	}
	native private boolean assimp2mesh_EVString_EVString_ev_bool(long pNativeObject, String daeFile, String desFolder, boolean toDDS);
	///protected:
	///EarthView::World::Graphic::CAssimpSerializer *mListener;
	public boolean assimp2mesh(String daeFile, String desFolder, boolean toDDS)
	{
		String daeFileParamValue = daeFile;
		String desFolderParamValue = desFolder;
		boolean toDDSParamValue = toDDS;
		boolean returnValue = assimp2mesh_EVString_EVString_ev_bool(this.nativeObject.pointer, daeFileParamValue, desFolderParamValue, toDDSParamValue);
		return returnValue;
	}
	native private long assimp2mesh2_EVString_EVString_ev_bool_CAssimpToMeshListener(long pNativeObject, String daeFile, String desFolder, boolean toDDS, long listener);
	public com.earthview.world.graphic.MeshPtr assimp2mesh2(String daeFile, String desFolder, boolean toDDS, com.earthview.world.graphic.AssimpToMeshListener listener)
	{
		String daeFileParamValue = daeFile;
		String desFolderParamValue = desFolder;
		boolean toDDSParamValue = toDDS;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		long returnValue = assimp2mesh2_EVString_EVString_ev_bool_CAssimpToMeshListener(this.nativeObject.pointer, daeFileParamValue, desFolderParamValue, toDDSParamValue, listenerParamValue);
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
	native private long assimp2mesh2_no_initresource_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(long pNativeObject, String daeFile, String desFolder, boolean toDDS, long listener, String resourceGroup);
	public com.earthview.world.graphic.MeshPtr assimp2mesh2_no_initresource(String daeFile, String desFolder, boolean toDDS, com.earthview.world.graphic.AssimpToMeshListener listener, String resourceGroup)
	{
		String daeFileParamValue = daeFile;
		String desFolderParamValue = desFolder;
		boolean toDDSParamValue = toDDS;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String resourceGroupParamValue = resourceGroup;
		long returnValue = assimp2mesh2_no_initresource_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(this.nativeObject.pointer, daeFileParamValue, desFolderParamValue, toDDSParamValue, listenerParamValue, resourceGroupParamValue);
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
	native private long assimp2mesh2_7z_no_initresource_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(long pNativeObject, String daeFile, String desFolder, boolean toDDS, long listener, String resourceGroup);
	public com.earthview.world.graphic.MeshPtr assimp2mesh2_7z_no_initresource(String daeFile, String desFolder, boolean toDDS, com.earthview.world.graphic.AssimpToMeshListener listener, String resourceGroup)
	{
		String daeFileParamValue = daeFile;
		String desFolderParamValue = desFolder;
		boolean toDDSParamValue = toDDS;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String resourceGroupParamValue = resourceGroup;
		long returnValue = assimp2mesh2_7z_no_initresource_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(this.nativeObject.pointer, daeFileParamValue, desFolderParamValue, toDDSParamValue, listenerParamValue, resourceGroupParamValue);
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
	native private void getSourceTextureNames_EVString_CStringArray(long pNativeObject, String daeFile, long textures);
	public void getSourceTextureNames(String daeFile, com.earthview.world.core.StringArray textures)
	{
		String daeFileParamValue = daeFile;
		long texturesParamValue = textures.nativeObject.pointer;
		getSourceTextureNames_EVString_CStringArray(this.nativeObject.pointer, daeFileParamValue, texturesParamValue);
	}
	native private void exportMesh_EVString_EVString(long pNativeObject, String meshFilePath, String exportFilePath);
	///导出mesh
	public void exportMesh(String meshFilePath, String exportFilePath)
	{
		String meshFilePathParamValue = meshFilePath;
		String exportFilePathParamValue = exportFilePath;
		exportMesh_EVString_EVString(this.nativeObject.pointer, meshFilePathParamValue, exportFilePathParamValue);
	}
	native private void exportMesh_CMesh_DataStreamPtr_EVString_ev_bool(long pNativeObject, long pMesh, long aniDataPtr, String exportFilePath, boolean exportFromLocal);
	///
	public void exportMesh(com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.DataStreamPtr aniDataPtr, String exportFilePath, boolean exportFromLocal)
	{
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long aniDataPtrParamValue = aniDataPtr.nativeObject.pointer;
		String exportFilePathParamValue = exportFilePath;
		boolean exportFromLocalParamValue = exportFromLocal;
		exportMesh_CMesh_DataStreamPtr_EVString_ev_bool(this.nativeObject.pointer, pMeshParamValue, aniDataPtrParamValue, exportFilePathParamValue, exportFromLocalParamValue);
	}
	native private boolean isValidExportFormat_CMesh_DataStreamPtr_EVString_ev_bool_ev_bool(long pNativeObject, long pMesh, long aniDataPtr, String exportFilePath, long isValidFormat, boolean exportFromLocal);
	///
	public boolean isValidExportFormat(com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.DataStreamPtr aniDataPtr, String exportFilePath, BooleanPointer isValidFormat, boolean exportFromLocal)
	{
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long aniDataPtrParamValue = aniDataPtr.nativeObject.pointer;
		String exportFilePathParamValue = exportFilePath;
		long isValidFormatParamValue = isValidFormat.nativeObject.pointer;
		boolean exportFromLocalParamValue = exportFromLocal;
		boolean returnValue = isValidExportFormat_CMesh_DataStreamPtr_EVString_ev_bool_ev_bool(this.nativeObject.pointer, pMeshParamValue, aniDataPtrParamValue, exportFilePathParamValue, isValidFormatParamValue, exportFromLocalParamValue);
		return returnValue;
	}
	native private boolean isValidExportFormat_EVString_EVString_ev_bool(long pNativeObject, String meshFilePath, String exportFilePath, long isValidFormat);
	///
	public boolean isValidExportFormat(String meshFilePath, String exportFilePath, BooleanPointer isValidFormat)
	{
		String meshFilePathParamValue = meshFilePath;
		String exportFilePathParamValue = exportFilePath;
		long isValidFormatParamValue = isValidFormat.nativeObject.pointer;
		boolean returnValue = isValidExportFormat_EVString_EVString_ev_bool(this.nativeObject.pointer, meshFilePathParamValue, exportFilePathParamValue, isValidFormatParamValue);
		return returnValue;
	}
	public AssimpSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AssimpSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void importMesh(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.CommonStringPairList miscParams)
	{
		super.importMesh_NoVirtual(stream, pMesh, miscParams);
	}
	public void importMesh(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh)
	{
		super.importMesh_NoVirtual(stream, pMesh);
	}
	//// Internal methods
	public void writeFileHeader()
	{
		super.writeFileHeader_NoVirtual();
	}
	public void writeChunkHeader(int id, long size)
	{
		super.writeChunkHeader_NoVirtual(id, size);
	}
	public void readFileHeader(com.earthview.world.core.DataStreamPtr stream)
	{
		super.readFileHeader_NoVirtual(stream);
	}
	public int readChunk(com.earthview.world.core.DataStreamPtr stream)
	{
		return super.readChunk_NoVirtual(stream);
	}
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipToLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		super.flipToLittleEndian_NoVirtual(pData, size);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size);
	}
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		super.flipEndian_NoVirtual(pData, size, count);
	}
	public void flipEndian(VoidPointer pData, long size)
	{
		super.flipEndian_NoVirtual(pData, size);
	}
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		super.determineEndianness_NoVirtual(stream);
	}
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.Serializer.Endian requestedEndian)
	{
		super.determineEndianness_NoVirtual(requestedEndian);
	}
	
	native protected void register_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getFileExtension_void(long pNativeObject, String method);
	native protected void register_importMesh_DataStreamPtr_CMesh_CommonStringPairList(long pNativeObject, String method);
	native protected void register_importMesh_DataStreamPtr_CMesh(long pNativeObject, String method);
	native protected void register_writeFileHeader_void(long pNativeObject, String method);
	native protected void register_writeChunkHeader_ev_uint16_ev_size_t(long pNativeObject, String method);
	native protected void register_readFileHeader_DataStreamPtr(long pNativeObject, String method);
	native protected void register_readChunk_DataStreamPtr(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_DataStreamPtr(long pNativeObject, String method);
	native protected void register_determineEndianness_Endian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(this.nativeObject.pointer, "importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback");
			this.register_getFileExtension_void(this.nativeObject.pointer, "getFileExtension_void_callback");
			this.register_importMesh_DataStreamPtr_CMesh_CommonStringPairList(this.nativeObject.pointer, "importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback");
			this.register_importMesh_DataStreamPtr_CMesh(this.nativeObject.pointer, "importMesh_DataStreamPtr_CMesh_callback");
			this.register_writeFileHeader_void(this.nativeObject.pointer, "writeFileHeader_void_callback");
			this.register_writeChunkHeader_ev_uint16_ev_size_t(this.nativeObject.pointer, "writeChunkHeader_ev_uint16_ev_size_t_callback");
			this.register_readFileHeader_DataStreamPtr(this.nativeObject.pointer, "readFileHeader_DataStreamPtr_callback");
			this.register_readChunk_DataStreamPtr(this.nativeObject.pointer, "readChunk_DataStreamPtr_callback");
			this.register_flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_DataStreamPtr(this.nativeObject.pointer, "determineEndianness_DataStreamPtr_callback");
			this.register_determineEndianness_Endian(this.nativeObject.pointer, "determineEndianness_Endian_callback");
		}
	}
	
	public static AssimpSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AssimpSerializer obj = null;
 		if(baseObj instanceof AssimpSerializer)
		{
			obj = (AssimpSerializer)baseObj;
		} else {
			obj = new AssimpSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAssimpSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
