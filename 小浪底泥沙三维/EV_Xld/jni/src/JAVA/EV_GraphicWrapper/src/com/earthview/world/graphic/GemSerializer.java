package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GemSerializer extends com.earthview.world.graphic.ModelSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGemSerializer", new GemSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCGemSerializerProxy", new GemSerializerClassFactory());
	}

	public GemSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGemSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GemSerializer".equals(this.getClass().getName()))
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

	public GemSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GemSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void importMesh(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Mesh pMesh, com.earthview.world.core.CommonStringPairList miscParams)
	{
		super.importMesh_NoVirtual(stream, pMesh, miscParams);
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
	
	public static GemSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GemSerializer obj = null;
 		if(baseObj instanceof GemSerializer)
		{
			obj = (GemSerializer)baseObj;
		} else {
			obj = new GemSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGemSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
