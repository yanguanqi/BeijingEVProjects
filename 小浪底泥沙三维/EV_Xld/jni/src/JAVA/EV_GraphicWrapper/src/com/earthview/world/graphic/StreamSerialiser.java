package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StreamSerialiser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CStreamSerialiser", new StreamSerialiserClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCStreamSerialiserProxy", new StreamSerialiserClassFactory());
	}

	//// The endianness of files
	public enum Endian implements INativeEnum<Endian> {
		ENDIAN_AUTO(EndianHelper.ENUM_VALUES[0]),
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
			if(retval == ENDIAN_AUTO.value){
				return ENDIAN_AUTO;
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
	
	//// The storage format of Real values
	public enum RealStorageFormat implements INativeEnum<RealStorageFormat> {
		REAL_FLOAT(RealStorageFormatHelper.ENUM_VALUES[0]),
		REAL_DOUBLE(RealStorageFormatHelper.ENUM_VALUES[1]);
		private int value;
		RealStorageFormat(int i) {
			this.value = i;
		}
		public RealStorageFormat getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final RealStorageFormat toEnum(int retval) {
			if(retval == REAL_FLOAT.value){
				return REAL_FLOAT;
			}
			else if(retval == REAL_DOUBLE.value){
				return REAL_DOUBLE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class RealStorageFormatHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Definition of a chunk of data in a file
	///struct Chunk ;
	public static class Chunk extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CStreamSerialiser::Chunk", new ChunkClassFactory());
		}

		native private long get_id_void(long pNativeObject);
		public long get_id()
		{
			long jniValue = get_id_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_id_ev_uint32 (long pNativeObject, long value);
		public void set_id(long id)
		{
			long idParamValue = id;
			
			set_id_ev_uint32(this.nativeObject.pointer, idParamValue);
		}
		
		native private int get_version_void(long pNativeObject);
		public int get_version()
		{
			int jniValue = get_version_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_version_ev_uint16 (long pNativeObject, int value);
		public void set_version(int version)
		{
			int versionParamValue = version;
			
			set_version_ev_uint16(this.nativeObject.pointer, versionParamValue);
		}
		
		native private long get_length_void(long pNativeObject);
		public long get_length()
		{
			long jniValue = get_length_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_length_ev_uint32 (long pNativeObject, long value);
		public void set_length(long length)
		{
			long lengthParamValue = length;
			
			set_length_ev_uint32(this.nativeObject.pointer, lengthParamValue);
		}
		
		native private long get_offset_void(long pNativeObject);
		public long get_offset()
		{
			long jniValue = get_offset_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_offset_ev_uint32 (long pNativeObject, long value);
		public void set_offset(long offset)
		{
			long offsetParamValue = offset;
			
			set_offset_ev_uint32(this.nativeObject.pointer, offsetParamValue);
		}
		
		public Chunk() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("Chunk", null);
		}

		public Chunk(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Chunk(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Chunk fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Chunk obj = null;
 			if(baseObj instanceof Chunk)
			{
				obj = (Chunk)baseObj;
			} else {
				obj = new Chunk(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Chunk");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ChunkClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Chunk emptyInstance = new Chunk(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public StreamSerialiser(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.StreamSerialiser.Endian endianMode, boolean autoHeader, com.earthview.world.graphic.StreamSerialiser.RealStorageFormat realFormat) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		BasePointer endianModePtr = new BasePointer(endianMode);
		list.add("endianMode", endianModePtr.get());
		BasePointer autoHeaderPtr = new BasePointer(autoHeader);
		list.add("autoHeader", autoHeaderPtr.get());
		BasePointer realFormatPtr = new BasePointer(realFormat);
		list.add("realFormat", realFormatPtr.get());
		Create("JCStreamSerialiserProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.StreamSerialiser".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public StreamSerialiser(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.StreamSerialiser.Endian endianMode, boolean autoHeader) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		BasePointer endianModePtr = new BasePointer(endianMode);
		list.add("endianMode", endianModePtr.get());
		BasePointer autoHeaderPtr = new BasePointer(autoHeader);
		list.add("autoHeader", autoHeaderPtr.get());
		Create("JCStreamSerialiserProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.StreamSerialiser".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public StreamSerialiser(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.StreamSerialiser.Endian endianMode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		BasePointer endianModePtr = new BasePointer(endianMode);
		list.add("endianMode", endianModePtr.get());
		Create("JCStreamSerialiserProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.StreamSerialiser".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public StreamSerialiser(com.earthview.world.core.DataStreamPtr stream) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		Create("JCStreamSerialiserProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.StreamSerialiser".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getEndian_void_callback()
	{
		com.earthview.world.graphic.StreamSerialiser.Endian returnValue = getEndian();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getEndian_void(long pNativeObject);
	public com.earthview.world.graphic.StreamSerialiser.Endian getEndian()
	{
		int returnValue = getEndian_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.StreamSerialiser.Endian.toEnum(returnValue);
	}
	native private int getEndian_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.StreamSerialiser.Endian getEndian_NoVirtual()
	{
		int returnValue = getEndian_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.StreamSerialiser.Endian.toEnum(returnValue);
	}

	native private static long makeIdentifier_EVString(String code);
	public static long makeIdentifier(String code)
	{
		String codeParamValue = code;
		long returnValue = makeIdentifier_EVString(codeParamValue);
		return returnValue;
	}
	native private long getCurrentChunkDepth_void(long pNativeObject);
	public long getCurrentChunkDepth()
	{
		long returnValue = getCurrentChunkDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCurrentChunkID_void(long pNativeObject);
	public long getCurrentChunkID()
	{
		long returnValue = getCurrentChunkID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOffsetFromChunkStart_void(long pNativeObject);
	public long getOffsetFromChunkStart()
	{
		long returnValue = getOffsetFromChunkStart_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long readChunkBegin_void_callback()
	{
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = readChunkBegin();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long readChunkBegin_void(long pNativeObject);
	public com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin()
	{
		long returnValue = readChunkBegin_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long readChunkBegin_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin_NoVirtual()
	{
		long returnValue = readChunkBegin_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  long readChunkBegin_ev_uint32_ev_uint16_EVString_callback(long id, int maxVersion, String msg)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		String msgParamValue = msg;
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = readChunkBegin(idParamValue, maxVersionParamValue, msgParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long readChunkBegin_ev_uint32_ev_uint16_EVString(long pNativeObject, long id, int maxVersion, String msg);
	public com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin(long id, int maxVersion, String msg)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		String msgParamValue = msg;
		long returnValue = readChunkBegin_ev_uint32_ev_uint16_EVString(this.nativeObject.pointer, idParamValue, maxVersionParamValue, msgParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long readChunkBegin_ev_uint32_ev_uint16_EVString_NoVirtual(long pNativeObject, long id, int maxVersion, String msg);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin_NoVirtual(long id, int maxVersion, String msg)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		String msgParamValue = msg;
		long returnValue = readChunkBegin_ev_uint32_ev_uint16_EVString_NoVirtual(this.nativeObject.pointer, idParamValue, maxVersionParamValue, msgParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  long readChunkBegin_ev_uint32_ev_uint16_callback(long id, int maxVersion)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = readChunkBegin(idParamValue, maxVersionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long readChunkBegin_ev_uint32_ev_uint16(long pNativeObject, long id, int maxVersion);
	public com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin(long id, int maxVersion)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		long returnValue = readChunkBegin_ev_uint32_ev_uint16(this.nativeObject.pointer, idParamValue, maxVersionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long readChunkBegin_ev_uint32_ev_uint16_NoVirtual(long pNativeObject, long id, int maxVersion);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk readChunkBegin_NoVirtual(long id, int maxVersion)
	{
		long idParamValue = id;
		int maxVersionParamValue = maxVersion;
		long returnValue = readChunkBegin_ev_uint32_ev_uint16_NoVirtual(this.nativeObject.pointer, idParamValue, maxVersionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  void undoReadChunk_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		undoReadChunk(idParamValue);
	}

	native private void undoReadChunk_ev_uint32(long pNativeObject, long id);
	public void undoReadChunk(long id)
	{
		long idParamValue = id;
		undoReadChunk_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void undoReadChunk_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void undoReadChunk_NoVirtual(long id)
	{
		long idParamValue = id;
		undoReadChunk_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  long peekNextChunkID_void_callback()
	{
		long returnValue = peekNextChunkID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long peekNextChunkID_void(long pNativeObject);
	public long peekNextChunkID()
	{
		long returnValue = peekNextChunkID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long peekNextChunkID_void_NoVirtual(long pNativeObject);
	protected long peekNextChunkID_NoVirtual()
	{
		long returnValue = peekNextChunkID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void readChunkEnd_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		readChunkEnd(idParamValue);
	}

	native private void readChunkEnd_ev_uint32(long pNativeObject, long id);
	public void readChunkEnd(long id)
	{
		long idParamValue = id;
		readChunkEnd_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void readChunkEnd_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void readChunkEnd_NoVirtual(long id)
	{
		long idParamValue = id;
		readChunkEnd_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  boolean isEndOfChunk_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		boolean returnValue = isEndOfChunk(idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isEndOfChunk_ev_uint32(long pNativeObject, long id);
	public boolean isEndOfChunk(long id)
	{
		long idParamValue = id;
		boolean returnValue = isEndOfChunk_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean isEndOfChunk_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean isEndOfChunk_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = isEndOfChunk_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	protected  boolean eof_void_callback()
	{
		boolean returnValue = eof();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean eof_void(long pNativeObject);
	//// Reports whether the stream is at the end of file
	public boolean eof()
	{
		boolean returnValue = eof_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean eof_void_NoVirtual(long pNativeObject);
	protected boolean eof_NoVirtual()
	{
		boolean returnValue = eof_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getCurrentChunk_void_callback()
	{
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = getCurrentChunk();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentChunk_void(long pNativeObject);
	public com.earthview.world.graphic.StreamSerialiser.Chunk getCurrentChunk()
	{
		long returnValue = getCurrentChunk_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long getCurrentChunk_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk getCurrentChunk_NoVirtual()
	{
		long returnValue = getCurrentChunk_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  void writeChunkBegin_ev_uint32_ev_uint16_callback(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkBegin(idParamValue, versionParamValue);
	}

	native private void writeChunkBegin_ev_uint32_ev_uint16(long pNativeObject, long id, int version);
	public void writeChunkBegin(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkBegin_ev_uint32_ev_uint16(this.nativeObject.pointer, idParamValue, versionParamValue);
	}
	native private void writeChunkBegin_ev_uint32_ev_uint16_NoVirtual(long pNativeObject, long id, int version);
	protected void writeChunkBegin_NoVirtual(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkBegin_ev_uint32_ev_uint16_NoVirtual(this.nativeObject.pointer, idParamValue, versionParamValue);
	}

	protected  void writeChunkBegin_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		writeChunkBegin(idParamValue);
	}

	native private void writeChunkBegin_ev_uint32(long pNativeObject, long id);
	public void writeChunkBegin(long id)
	{
		long idParamValue = id;
		writeChunkBegin_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void writeChunkBegin_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void writeChunkBegin_NoVirtual(long id)
	{
		long idParamValue = id;
		writeChunkBegin_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  void writeChunkEnd_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		writeChunkEnd(idParamValue);
	}

	native private void writeChunkEnd_ev_uint32(long pNativeObject, long id);
	public void writeChunkEnd(long id)
	{
		long idParamValue = id;
		writeChunkEnd_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void writeChunkEnd_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void writeChunkEnd_NoVirtual(long id)
	{
		long idParamValue = id;
		writeChunkEnd_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  void writeData_void_ev_size_t_ev_size_t_callback(long buf, long size, long count)
	{
		VoidPointer bufParamValue = (buf == 0L ? null : new VoidPointer(new InstancePointer(buf)));
		long sizeParamValue = size;
		long countParamValue = count;
		writeData(bufParamValue, sizeParamValue, countParamValue);
	}

	native private void writeData_void_ev_size_t_ev_size_t(long pNativeObject, long buf, long size, long count);
	public void writeData(VoidPointer buf, long size, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		writeData_void_ev_size_t_ev_size_t(this.nativeObject.pointer, bufParamValue, sizeParamValue, countParamValue);
	}
	native private void writeData_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long buf, long size, long count);
	protected void writeData_NoVirtual(VoidPointer buf, long size, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		writeData_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, bufParamValue, sizeParamValue, countParamValue);
	}

	protected  long readChunkImpl_void_callback()
	{
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = readChunkImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long readChunkImpl_void(long pNativeObject);
	///template <typename T>
	///void write(const T* pT, ev_size_t count = 1)
	///{
	///	writeData(pT, sizeof(T), count);
	///}
	public com.earthview.world.graphic.StreamSerialiser.Chunk readChunkImpl()
	{
		long returnValue = readChunkImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long readChunkImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk readChunkImpl_NoVirtual()
	{
		long returnValue = readChunkImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  void writeChunkImpl_ev_uint32_ev_uint16_callback(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkImpl(idParamValue, versionParamValue);
	}

	native private void writeChunkImpl_ev_uint32_ev_uint16(long pNativeObject, long id, int version);
	public void writeChunkImpl(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkImpl_ev_uint32_ev_uint16(this.nativeObject.pointer, idParamValue, versionParamValue);
	}
	native private void writeChunkImpl_ev_uint32_ev_uint16_NoVirtual(long pNativeObject, long id, int version);
	protected void writeChunkImpl_NoVirtual(long id, int version)
	{
		long idParamValue = id;
		int versionParamValue = version;
		writeChunkImpl_ev_uint32_ev_uint16_NoVirtual(this.nativeObject.pointer, idParamValue, versionParamValue);
	}

	protected  void readHeader_void_callback()
	{
		readHeader();
	}

	native private void readHeader_void(long pNativeObject);
	public void readHeader()
	{
		readHeader_void(this.nativeObject.pointer);
	}
	native private void readHeader_void_NoVirtual(long pNativeObject);
	protected void readHeader_NoVirtual()
	{
		readHeader_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void writeHeader_void_callback()
	{
		writeHeader();
	}

	native private void writeHeader_void(long pNativeObject);
	public void writeHeader()
	{
		writeHeader_void(this.nativeObject.pointer);
	}
	native private void writeHeader_void_NoVirtual(long pNativeObject);
	protected void writeHeader_NoVirtual()
	{
		writeHeader_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long calculateChecksum_Chunk_callback(long c)
	{
		com.earthview.world.graphic.StreamSerialiser.Chunk cParamValue = (c == 0L ? null : new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate));
		if(cParamValue != null)
		{
		cParamValue.setDelegate(true);
		cParamValue.setInstancePointer(new InstancePointer(c));
		IClassFactory cParamValueClassFactory = GlobalClassFactoryMap.get(cParamValue.getCppInstanceTypeName());
		if (cParamValueClassFactory != null)
		{
			cParamValue.setDelegate(true);
			cParamValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)cParamValueClassFactory.create();
			cParamValue.setDelegate(true);
			cParamValue.setInstancePointer(new InstancePointer(c));
		}
		}
		long returnValue = calculateChecksum(cParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long calculateChecksum_Chunk(long pNativeObject, long c);
	public long calculateChecksum(com.earthview.world.graphic.StreamSerialiser.Chunk c)
	{
		long cParamValue = (c == null ? 0L : c.nativeObject.pointer);
		long returnValue = calculateChecksum_Chunk(this.nativeObject.pointer, cParamValue);
		return returnValue;
	}
	native private long calculateChecksum_Chunk_NoVirtual(long pNativeObject, long c);
	protected long calculateChecksum_NoVirtual(com.earthview.world.graphic.StreamSerialiser.Chunk c)
	{
		long cParamValue = (c == null ? 0L : c.nativeObject.pointer);
		long returnValue = calculateChecksum_Chunk_NoVirtual(this.nativeObject.pointer, cParamValue);
		return returnValue;
	}

	protected  void checkStream_ev_bool_ev_bool_ev_bool_callback(boolean failOnEof, boolean validateReadable, boolean validateWriteable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		boolean validateWriteableParamValue = validateWriteable;
		checkStream(failOnEofParamValue, validateReadableParamValue, validateWriteableParamValue);
	}

	native private void checkStream_ev_bool_ev_bool_ev_bool(long pNativeObject, boolean failOnEof, boolean validateReadable, boolean validateWriteable);
	public void checkStream(boolean failOnEof, boolean validateReadable, boolean validateWriteable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		boolean validateWriteableParamValue = validateWriteable;
		checkStream_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, failOnEofParamValue, validateReadableParamValue, validateWriteableParamValue);
	}
	native private void checkStream_ev_bool_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean failOnEof, boolean validateReadable, boolean validateWriteable);
	protected void checkStream_NoVirtual(boolean failOnEof, boolean validateReadable, boolean validateWriteable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		boolean validateWriteableParamValue = validateWriteable;
		checkStream_ev_bool_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, failOnEofParamValue, validateReadableParamValue, validateWriteableParamValue);
	}

	protected  void checkStream_ev_bool_ev_bool_callback(boolean failOnEof, boolean validateReadable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		checkStream(failOnEofParamValue, validateReadableParamValue);
	}

	native private void checkStream_ev_bool_ev_bool(long pNativeObject, boolean failOnEof, boolean validateReadable);
	public void checkStream(boolean failOnEof, boolean validateReadable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		checkStream_ev_bool_ev_bool(this.nativeObject.pointer, failOnEofParamValue, validateReadableParamValue);
	}
	native private void checkStream_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean failOnEof, boolean validateReadable);
	protected void checkStream_NoVirtual(boolean failOnEof, boolean validateReadable)
	{
		boolean failOnEofParamValue = failOnEof;
		boolean validateReadableParamValue = validateReadable;
		checkStream_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, failOnEofParamValue, validateReadableParamValue);
	}

	protected  void checkStream_ev_bool_callback(boolean failOnEof)
	{
		boolean failOnEofParamValue = failOnEof;
		checkStream(failOnEofParamValue);
	}

	native private void checkStream_ev_bool(long pNativeObject, boolean failOnEof);
	public void checkStream(boolean failOnEof)
	{
		boolean failOnEofParamValue = failOnEof;
		checkStream_ev_bool(this.nativeObject.pointer, failOnEofParamValue);
	}
	native private void checkStream_ev_bool_NoVirtual(long pNativeObject, boolean failOnEof);
	protected void checkStream_NoVirtual(boolean failOnEof)
	{
		boolean failOnEofParamValue = failOnEof;
		checkStream_ev_bool_NoVirtual(this.nativeObject.pointer, failOnEofParamValue);
	}

	protected  void checkStream_void_callback()
	{
		checkStream();
	}

	native private void checkStream_void(long pNativeObject);
	public void checkStream()
	{
		checkStream_void(this.nativeObject.pointer);
	}
	native private void checkStream_void_NoVirtual(long pNativeObject);
	protected void checkStream_NoVirtual()
	{
		checkStream_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void determineEndianness_void_callback()
	{
		determineEndianness();
	}

	native private void determineEndianness_void(long pNativeObject);
	public void determineEndianness()
	{
		determineEndianness_void(this.nativeObject.pointer);
	}
	native private void determineEndianness_void_NoVirtual(long pNativeObject);
	protected void determineEndianness_NoVirtual()
	{
		determineEndianness_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long popChunk_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		com.earthview.world.graphic.StreamSerialiser.Chunk returnValue = popChunk(idParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long popChunk_ev_uint32(long pNativeObject, long id);
	public com.earthview.world.graphic.StreamSerialiser.Chunk popChunk(long id)
	{
		long idParamValue = id;
		long returnValue = popChunk_ev_uint32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}
	native private long popChunk_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.graphic.StreamSerialiser.Chunk popChunk_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = popChunk_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.StreamSerialiser.Chunk __returnValue = new com.earthview.world.graphic.StreamSerialiser.Chunk(CreatedWhenConstruct.CWC_NotToCreate, "Chunk");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.StreamSerialiser.Chunk)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Chunk");
		}
		return __returnValue;
	}

	protected  void writeFloatsAsDoubles_ev_real32_ev_size_t_callback(long val, long count)
	{
		FloatPointer valParamValue = (val == 0L ? null : new FloatPointer(new InstancePointer(val)));
		long countParamValue = count;
		writeFloatsAsDoubles(valParamValue, countParamValue);
	}

	native private void writeFloatsAsDoubles_ev_real32_ev_size_t(long pNativeObject, long val, long count);
	public void writeFloatsAsDoubles(FloatPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		writeFloatsAsDoubles_ev_real32_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void writeFloatsAsDoubles_ev_real32_ev_size_t_NoVirtual(long pNativeObject, long val, long count);
	protected void writeFloatsAsDoubles_NoVirtual(FloatPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		writeFloatsAsDoubles_ev_real32_ev_size_t_NoVirtual(this.nativeObject.pointer, valParamValue, countParamValue);
	}

	protected  void writeDoublesAsFloats_ev_real64_ev_size_t_callback(long val, long count)
	{
		DoublePointer valParamValue = (val == 0L ? null : new DoublePointer(new InstancePointer(val)));
		long countParamValue = count;
		writeDoublesAsFloats(valParamValue, countParamValue);
	}

	native private void writeDoublesAsFloats_ev_real64_ev_size_t(long pNativeObject, long val, long count);
	public void writeDoublesAsFloats(DoublePointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		writeDoublesAsFloats_ev_real64_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void writeDoublesAsFloats_ev_real64_ev_size_t_NoVirtual(long pNativeObject, long val, long count);
	protected void writeDoublesAsFloats_NoVirtual(DoublePointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		writeDoublesAsFloats_ev_real64_ev_size_t_NoVirtual(this.nativeObject.pointer, valParamValue, countParamValue);
	}

	protected  void readFloatsAsDoubles_ev_real64_ev_size_t_callback(long val, long count)
	{
		DoublePointer valParamValue = (val == 0L ? null : new DoublePointer(new InstancePointer(val)));
		long countParamValue = count;
		readFloatsAsDoubles(valParamValue, countParamValue);
	}

	native private void readFloatsAsDoubles_ev_real64_ev_size_t(long pNativeObject, long val, long count);
	public void readFloatsAsDoubles(DoublePointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		readFloatsAsDoubles_ev_real64_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void readFloatsAsDoubles_ev_real64_ev_size_t_NoVirtual(long pNativeObject, long val, long count);
	protected void readFloatsAsDoubles_NoVirtual(DoublePointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		readFloatsAsDoubles_ev_real64_ev_size_t_NoVirtual(this.nativeObject.pointer, valParamValue, countParamValue);
	}

	protected  void readDoublesAsFloats_ev_real32_ev_size_t_callback(long val, long count)
	{
		FloatPointer valParamValue = (val == 0L ? null : new FloatPointer(new InstancePointer(val)));
		long countParamValue = count;
		readDoublesAsFloats(valParamValue, countParamValue);
	}

	native private void readDoublesAsFloats_ev_real32_ev_size_t(long pNativeObject, long val, long count);
	public void readDoublesAsFloats(FloatPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		readDoublesAsFloats_ev_real32_ev_size_t(this.nativeObject.pointer, valParamValue, countParamValue);
	}
	native private void readDoublesAsFloats_ev_real32_ev_size_t_NoVirtual(long pNativeObject, long val, long count);
	protected void readDoublesAsFloats_NoVirtual(FloatPointer val, long count)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		readDoublesAsFloats_ev_real32_ev_size_t_NoVirtual(this.nativeObject.pointer, valParamValue, countParamValue);
	}

	public StreamSerialiser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StreamSerialiser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getEndian_void(long pNativeObject, String method);
	native protected void register_readChunkBegin_void(long pNativeObject, String method);
	native protected void register_readChunkBegin_ev_uint32_ev_uint16_EVString(long pNativeObject, String method);
	native protected void register_readChunkBegin_ev_uint32_ev_uint16(long pNativeObject, String method);
	native protected void register_undoReadChunk_ev_uint32(long pNativeObject, String method);
	native protected void register_peekNextChunkID_void(long pNativeObject, String method);
	native protected void register_readChunkEnd_ev_uint32(long pNativeObject, String method);
	native protected void register_isEndOfChunk_ev_uint32(long pNativeObject, String method);
	native protected void register_eof_void(long pNativeObject, String method);
	native protected void register_getCurrentChunk_void(long pNativeObject, String method);
	native protected void register_writeChunkBegin_ev_uint32_ev_uint16(long pNativeObject, String method);
	native protected void register_writeChunkBegin_ev_uint32(long pNativeObject, String method);
	native protected void register_writeChunkEnd_ev_uint32(long pNativeObject, String method);
	native protected void register_writeData_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_readChunkImpl_void(long pNativeObject, String method);
	native protected void register_writeChunkImpl_ev_uint32_ev_uint16(long pNativeObject, String method);
	native protected void register_readHeader_void(long pNativeObject, String method);
	native protected void register_writeHeader_void(long pNativeObject, String method);
	native protected void register_calculateChecksum_Chunk(long pNativeObject, String method);
	native protected void register_checkStream_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_checkStream_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_checkStream_ev_bool(long pNativeObject, String method);
	native protected void register_checkStream_void(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_void(long pNativeObject, String method);
	native protected void register_popChunk_ev_uint32(long pNativeObject, String method);
	native protected void register_writeFloatsAsDoubles_ev_real32_ev_size_t(long pNativeObject, String method);
	native protected void register_writeDoublesAsFloats_ev_real64_ev_size_t(long pNativeObject, String method);
	native protected void register_readFloatsAsDoubles_ev_real64_ev_size_t(long pNativeObject, String method);
	native protected void register_readDoublesAsFloats_ev_real32_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getEndian_void(this.nativeObject.pointer, "getEndian_void_callback");
			this.register_readChunkBegin_void(this.nativeObject.pointer, "readChunkBegin_void_callback");
			this.register_readChunkBegin_ev_uint32_ev_uint16_EVString(this.nativeObject.pointer, "readChunkBegin_ev_uint32_ev_uint16_EVString_callback");
			this.register_readChunkBegin_ev_uint32_ev_uint16(this.nativeObject.pointer, "readChunkBegin_ev_uint32_ev_uint16_callback");
			this.register_undoReadChunk_ev_uint32(this.nativeObject.pointer, "undoReadChunk_ev_uint32_callback");
			this.register_peekNextChunkID_void(this.nativeObject.pointer, "peekNextChunkID_void_callback");
			this.register_readChunkEnd_ev_uint32(this.nativeObject.pointer, "readChunkEnd_ev_uint32_callback");
			this.register_isEndOfChunk_ev_uint32(this.nativeObject.pointer, "isEndOfChunk_ev_uint32_callback");
			this.register_eof_void(this.nativeObject.pointer, "eof_void_callback");
			this.register_getCurrentChunk_void(this.nativeObject.pointer, "getCurrentChunk_void_callback");
			this.register_writeChunkBegin_ev_uint32_ev_uint16(this.nativeObject.pointer, "writeChunkBegin_ev_uint32_ev_uint16_callback");
			this.register_writeChunkBegin_ev_uint32(this.nativeObject.pointer, "writeChunkBegin_ev_uint32_callback");
			this.register_writeChunkEnd_ev_uint32(this.nativeObject.pointer, "writeChunkEnd_ev_uint32_callback");
			this.register_writeData_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "writeData_void_ev_size_t_ev_size_t_callback");
			this.register_readChunkImpl_void(this.nativeObject.pointer, "readChunkImpl_void_callback");
			this.register_writeChunkImpl_ev_uint32_ev_uint16(this.nativeObject.pointer, "writeChunkImpl_ev_uint32_ev_uint16_callback");
			this.register_readHeader_void(this.nativeObject.pointer, "readHeader_void_callback");
			this.register_writeHeader_void(this.nativeObject.pointer, "writeHeader_void_callback");
			this.register_calculateChecksum_Chunk(this.nativeObject.pointer, "calculateChecksum_Chunk_callback");
			this.register_checkStream_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "checkStream_ev_bool_ev_bool_ev_bool_callback");
			this.register_checkStream_ev_bool_ev_bool(this.nativeObject.pointer, "checkStream_ev_bool_ev_bool_callback");
			this.register_checkStream_ev_bool(this.nativeObject.pointer, "checkStream_ev_bool_callback");
			this.register_checkStream_void(this.nativeObject.pointer, "checkStream_void_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_void(this.nativeObject.pointer, "determineEndianness_void_callback");
			this.register_popChunk_ev_uint32(this.nativeObject.pointer, "popChunk_ev_uint32_callback");
			this.register_writeFloatsAsDoubles_ev_real32_ev_size_t(this.nativeObject.pointer, "writeFloatsAsDoubles_ev_real32_ev_size_t_callback");
			this.register_writeDoublesAsFloats_ev_real64_ev_size_t(this.nativeObject.pointer, "writeDoublesAsFloats_ev_real64_ev_size_t_callback");
			this.register_readFloatsAsDoubles_ev_real64_ev_size_t(this.nativeObject.pointer, "readFloatsAsDoubles_ev_real64_ev_size_t_callback");
			this.register_readDoublesAsFloats_ev_real32_ev_size_t(this.nativeObject.pointer, "readDoublesAsFloats_ev_real32_ev_size_t_callback");
		}
	}
	
	public static StreamSerialiser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StreamSerialiser obj = null;
 		if(baseObj instanceof StreamSerialiser)
		{
			obj = (StreamSerialiser)baseObj;
		} else {
			obj = new StreamSerialiser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStreamSerialiser");
			obj.increaseCast();
		}

		return obj;
	}
}
