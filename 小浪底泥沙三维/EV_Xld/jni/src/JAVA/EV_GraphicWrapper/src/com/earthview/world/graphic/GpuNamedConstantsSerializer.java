package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Simple class for loading / saving GpuNamedConstants
public class GpuNamedConstantsSerializer extends com.earthview.world.graphic.Serializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuNamedConstantsSerializer", new GpuNamedConstantsSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCGpuNamedConstantsSerializerProxy", new GpuNamedConstantsSerializerClassFactory());
	}

	public GpuNamedConstantsSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGpuNamedConstantsSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GpuNamedConstantsSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void exportNamedConstants_GpuNamedConstants_EVString_Endian(long pNativeObject, long pConsts, String filename, int endianMode);
	public void exportNamedConstants(com.earthview.world.graphic.GpuNamedConstants pConsts, String filename, com.earthview.world.graphic.Serializer.Endian endianMode)
	{
		long pConstsParamValue = (pConsts == null ? 0L : pConsts.nativeObject.pointer);
		String filenameParamValue = filename;
		int endianModeParamValue = endianMode.getValue();
		exportNamedConstants_GpuNamedConstants_EVString_Endian(this.nativeObject.pointer, pConstsParamValue, filenameParamValue, endianModeParamValue);
	}
	native private void exportNamedConstants_GpuNamedConstants_EVString(long pNativeObject, long pConsts, String filename);
	public void exportNamedConstants(com.earthview.world.graphic.GpuNamedConstants pConsts, String filename)
	{
		long pConstsParamValue = (pConsts == null ? 0L : pConsts.nativeObject.pointer);
		String filenameParamValue = filename;
		exportNamedConstants_GpuNamedConstants_EVString(this.nativeObject.pointer, pConstsParamValue, filenameParamValue);
	}
	native private void exportNamedConstants_GpuNamedConstants_DataStreamPtr_Endian(long pNativeObject, long pConsts, long stream, int endianMode);
	public void exportNamedConstants(com.earthview.world.graphic.GpuNamedConstants pConsts, com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.Serializer.Endian endianMode)
	{
		long pConstsParamValue = (pConsts == null ? 0L : pConsts.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		int endianModeParamValue = endianMode.getValue();
		exportNamedConstants_GpuNamedConstants_DataStreamPtr_Endian(this.nativeObject.pointer, pConstsParamValue, streamParamValue, endianModeParamValue);
	}
	native private void exportNamedConstants_GpuNamedConstants_DataStreamPtr(long pNativeObject, long pConsts, long stream);
	public void exportNamedConstants(com.earthview.world.graphic.GpuNamedConstants pConsts, com.earthview.world.core.DataStreamPtr stream)
	{
		long pConstsParamValue = (pConsts == null ? 0L : pConsts.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		exportNamedConstants_GpuNamedConstants_DataStreamPtr(this.nativeObject.pointer, pConstsParamValue, streamParamValue);
	}
	native private void importNamedConstants_DataStreamPtr_GpuNamedConstants(long pNativeObject, long stream, long pDest);
	public void importNamedConstants(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.GpuNamedConstants pDest)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		importNamedConstants_DataStreamPtr_GpuNamedConstants(this.nativeObject.pointer, streamParamValue, pDestParamValue);
	}
	public GpuNamedConstantsSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuNamedConstantsSerializer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static GpuNamedConstantsSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuNamedConstantsSerializer obj = null;
 		if(baseObj instanceof GpuNamedConstantsSerializer)
		{
			obj = (GpuNamedConstantsSerializer)baseObj;
		} else {
			obj = new GpuNamedConstantsSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuNamedConstantsSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
