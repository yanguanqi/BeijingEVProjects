package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializer extends com.earthview.world.graphic.Serializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CModelSerializer", new ModelSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCModelSerializerProxy", new ModelSerializerClassFactory());
	}

	public ModelSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ModelSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getFileExtension_void_callback()
	{
		String returnValue = getFileExtension();
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  void importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback(long stream, long pMesh, long miscParams)
	{
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
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
		com.earthview.world.core.CommonStringPairList miscParamsParamValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		miscParamsParamValue.setDelegate(true);
		miscParamsParamValue.setInstancePointer(new InstancePointer(miscParams));
		IClassFactory miscParamsParamValueClassFactory = GlobalClassFactoryMap.get(miscParamsParamValue.getCppInstanceTypeName());
		if (miscParamsParamValueClassFactory != null)
		{
			miscParamsParamValue.setDelegate(true);
			miscParamsParamValue = (com.earthview.world.core.CommonStringPairList)miscParamsParamValueClassFactory.create();
			miscParamsParamValue.setDelegate(true);
			miscParamsParamValue.setInstancePointer(new InstancePointer(miscParams));
		}
		importMesh(streamParamValue, pMeshParamValue, miscParamsParamValue);
	}

	native private void importMesh_DataStreamPtr_CMesh_CommonStringPairList(long pNativeObject, long stream, long pMesh, long miscParams);
	public void importMesh(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.CommonStringPairList miscParams)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long miscParamsParamValue = miscParams.nativeObject.pointer;
		importMesh_DataStreamPtr_CMesh_CommonStringPairList(this.nativeObject.pointer, streamParamValue, pMeshParamValue, miscParamsParamValue);
	}
	native private void importMesh_DataStreamPtr_CMesh_CommonStringPairList_NoVirtual(long pNativeObject, long stream, long pMesh, long miscParams);
	protected void importMesh_NoVirtual(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.CommonStringPairList miscParams)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		long miscParamsParamValue = miscParams.nativeObject.pointer;
		importMesh_DataStreamPtr_CMesh_CommonStringPairList_NoVirtual(this.nativeObject.pointer, streamParamValue, pMeshParamValue, miscParamsParamValue);
	}

	protected  void importMesh_DataStreamPtr_CMesh_callback(long stream, long pMesh)
	{
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
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
		importMesh(streamParamValue, pMeshParamValue);
	}

	native private void importMesh_DataStreamPtr_CMesh(long pNativeObject, long stream, long pMesh);
	public void importMesh(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		importMesh_DataStreamPtr_CMesh(this.nativeObject.pointer, streamParamValue, pMeshParamValue);
	}
	native private void importMesh_DataStreamPtr_CMesh_NoVirtual(long pNativeObject, long stream, long pMesh);
	protected void importMesh_NoVirtual(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pMeshParamValue = (pMesh == null ? 0L : pMesh.nativeObject.pointer);
		importMesh_DataStreamPtr_CMesh_NoVirtual(this.nativeObject.pointer, streamParamValue, pMeshParamValue);
	}

	native private void setListener_CModelSerializerListener(long pNativeObject, long ref_listener);
	//// Sets the listener for this serializer
	public void setListener(com.earthview.world.graphic.ModelSerializerListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setListener_CModelSerializerListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getListener_void(long pNativeObject);
	//// Returns the current listener
	public com.earthview.world.graphic.ModelSerializerListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializerListener __returnValue = new com.earthview.world.graphic.ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializerListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializerListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializerListener");
		}
		return __returnValue;
	}
	public ModelSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ModelSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelSerializer obj = null;
 		if(baseObj instanceof ModelSerializer)
		{
			obj = (ModelSerializer)baseObj;
		} else {
			obj = new ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
