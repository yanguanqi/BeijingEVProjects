package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////X,3DS,DAE special version
public class SkeletonSerializer extends com.earthview.world.graphic.Serializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeletonSerializer", new SkeletonSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSkeletonSerializerProxy", new SkeletonSerializerClassFactory());
	}

	public SkeletonSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSkeletonSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SkeletonSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void exportSkeleton_CSkeleton_EVString(long pNativeObject, long pSkeleton, String filename);
	////zxt updatefor v1.8
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, String filename)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		String filenameParamValue = filename;
		exportSkeleton_CSkeleton_EVString(this.nativeObject.pointer, pSkeletonParamValue, filenameParamValue);
	}
	native private void exportSkeleton_CSkeleton_EVString_SkeletonVersion(long pNativeObject, long pSkeleton, String filename, int ver);
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, String filename, com.earthview.world.graphic.SkeletonVersion ver)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		String filenameParamValue = filename;
		int verParamValue = ver.getValue();
		exportSkeleton_CSkeleton_EVString_SkeletonVersion(this.nativeObject.pointer, pSkeletonParamValue, filenameParamValue, verParamValue);
	}
	native private void exportSkeleton_CSkeleton_EVString_SkeletonVersion_Endian(long pNativeObject, long pSkeleton, String filename, int ver, int endianMode);
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, String filename, com.earthview.world.graphic.SkeletonVersion ver, com.earthview.world.graphic.Serializer.Endian endianMode)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		String filenameParamValue = filename;
		int verParamValue = ver.getValue();
		int endianModeParamValue = endianMode.getValue();
		exportSkeleton_CSkeleton_EVString_SkeletonVersion_Endian(this.nativeObject.pointer, pSkeletonParamValue, filenameParamValue, verParamValue, endianModeParamValue);
	}
	native private void exportSkeleton_CSkeleton_DataStreamPtr(long pNativeObject, long pSkeleton, long stream);
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, com.earthview.world.core.DataStreamPtr stream)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		exportSkeleton_CSkeleton_DataStreamPtr(this.nativeObject.pointer, pSkeletonParamValue, streamParamValue);
	}
	native private void exportSkeleton_CSkeleton_DataStreamPtr_SkeletonVersion(long pNativeObject, long pSkeleton, long stream, int ver);
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.SkeletonVersion ver)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		int verParamValue = ver.getValue();
		exportSkeleton_CSkeleton_DataStreamPtr_SkeletonVersion(this.nativeObject.pointer, pSkeletonParamValue, streamParamValue, verParamValue);
	}
	native private void exportSkeleton_CSkeleton_DataStreamPtr_SkeletonVersion_Endian(long pNativeObject, long pSkeleton, long stream, int ver, int endianMode);
	public void exportSkeleton(com.earthview.world.graphic.Skeleton pSkeleton, com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.SkeletonVersion ver, com.earthview.world.graphic.Serializer.Endian endianMode)
	{
		long pSkeletonParamValue = (pSkeleton == null ? 0L : pSkeleton.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		int verParamValue = ver.getValue();
		int endianModeParamValue = endianMode.getValue();
		exportSkeleton_CSkeleton_DataStreamPtr_SkeletonVersion_Endian(this.nativeObject.pointer, pSkeletonParamValue, streamParamValue, verParamValue, endianModeParamValue);
	}
	native private void importSkeleton_DataStreamPtr_CSkeleton(long pNativeObject, long stream, long pDest);
	public void importSkeleton(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Skeleton pDest)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		importSkeleton_DataStreamPtr_CSkeleton(this.nativeObject.pointer, streamParamValue, pDestParamValue);
	}
	native private void readFileHeader_DataStreamPtr(long pNativeObject, long stream);
	public void readFileHeader(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		readFileHeader_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void readFileHeader_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void readFileHeader_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		readFileHeader_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public SkeletonSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SkeletonSerializer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static SkeletonSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SkeletonSerializer obj = null;
 		if(baseObj instanceof SkeletonSerializer)
		{
			obj = (SkeletonSerializer)baseObj;
		} else {
			obj = new SkeletonSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkeletonSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
