package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Serializer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSerializer", new SerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSerializerProxy", new SerializerClassFactory());
	}

	public Serializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Serializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	//// The endianness of written files
	public enum Endian implements INativeEnum<Endian> {
		ENDIAN_NATIVE(EndianHelper.ENUM_VALUES[0]),
		ENDIAN_BIG(EndianHelper.ENUM_VALUES[1]),
		ENDIAN_LITTLE(EndianHelper.ENUM_VALUES[2]);
		private int value;
		Endian(int i) {
			this.value = i;
		}
		public Endian getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Endian toEnum(int retval) {
			if(retval == ENDIAN_NATIVE.value){
				return ENDIAN_NATIVE;
			}
			else if(retval == ENDIAN_BIG.value){
				return ENDIAN_BIG;
			}
			else if(retval == ENDIAN_LITTLE.value){
				return ENDIAN_LITTLE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EndianHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  void writeFileHeader_void_callback()
	{
		writeFileHeader();
	}

	native private void writeFileHeader_void(long pNativeObject);
	//// Internal methods
	public void writeFileHeader()
	{
		writeFileHeader_void(this.nativeObject.pointer);
	}
	native private void writeFileHeader_void_NoVirtual(long pNativeObject);
	protected void writeFileHeader_NoVirtual()
	{
		writeFileHeader_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void writeChunkHeader_ev_uint16_ev_size_t_callback(int id, long size)
	{
		int idParamValue = id;
		long sizeParamValue = size;
		writeChunkHeader(idParamValue, sizeParamValue);
	}

	native private void writeChunkHeader_ev_uint16_ev_size_t(long pNativeObject, int id, long size);
	public void writeChunkHeader(int id, long size)
	{
		int idParamValue = id;
		long sizeParamValue = size;
		writeChunkHeader_ev_uint16_ev_size_t(this.nativeObject.pointer, idParamValue, sizeParamValue);
	}
	native private void writeChunkHeader_ev_uint16_ev_size_t_NoVirtual(long pNativeObject, int id, long size);
	protected void writeChunkHeader_NoVirtual(int id, long size)
	{
		int idParamValue = id;
		long sizeParamValue = size;
		writeChunkHeader_ev_uint16_ev_size_t_NoVirtual(this.nativeObject.pointer, idParamValue, sizeParamValue);
	}

	protected  void readFileHeader_DataStreamPtr_callback(long stream)
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
		readFileHeader(streamParamValue);
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

	protected  int readChunk_DataStreamPtr_callback(long stream)
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
		int returnValue = readChunk(streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readChunk_DataStreamPtr(long pNativeObject, long stream);
	public int readChunk(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = readChunk_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private int readChunk_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected int readChunk_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = readChunk_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}

	protected  void flipToLittleEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipToLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipToLittleEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipToLittleEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipToLittleEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipToLittleEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipToLittleEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipToLittleEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipToLittleEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipFromLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipFromLittleEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipFromLittleEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipFromLittleEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipFromLittleEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipFromLittleEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipFromLittleEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipFromLittleEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void flipEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void determineEndianness_DataStreamPtr_callback(long stream)
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
		determineEndianness(streamParamValue);
	}

	native private void determineEndianness_DataStreamPtr(long pNativeObject, long stream);
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		determineEndianness_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void determineEndianness_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void determineEndianness_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		determineEndianness_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  void determineEndianness_Endian_callback(int requestedEndian)
	{
		com.earthview.world.graphic.Serializer.Endian requestedEndianParamValue = com.earthview.world.graphic.Serializer.Endian.toEnum(requestedEndian);
		determineEndianness(requestedEndianParamValue);
	}

	native private void determineEndianness_Endian(long pNativeObject, int requestedEndian);
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.Serializer.Endian requestedEndian)
	{
		int requestedEndianParamValue = requestedEndian.getValue();
		determineEndianness_Endian(this.nativeObject.pointer, requestedEndianParamValue);
	}
	native private void determineEndianness_Endian_NoVirtual(long pNativeObject, int requestedEndian);
	protected void determineEndianness_NoVirtual(com.earthview.world.graphic.Serializer.Endian requestedEndian)
	{
		int requestedEndianParamValue = requestedEndian.getValue();
		determineEndianness_Endian_NoVirtual(this.nativeObject.pointer, requestedEndianParamValue);
	}

	public Serializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Serializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Serializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Serializer obj = null;
 		if(baseObj instanceof Serializer)
		{
			obj = (Serializer)baseObj;
		} else {
			obj = new Serializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
