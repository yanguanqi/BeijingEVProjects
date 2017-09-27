package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Pvrtccodec extends com.earthview.world.graphic.ImageCodec {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPVRTCCodec", new PvrtccodecClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPVRTCCodecProxy", new PvrtccodecClassFactory());
	}

	public Pvrtccodec() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPVRTCCodecProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Pvrtccodec".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long code_MemoryDataStreamPtr_CodecDataPtr(long pNativeObject, long input, long pData);
	//// @copydoc CCodec::code
	public com.earthview.world.core.DataStreamPtr code(com.earthview.world.core.MemoryDataStreamPtr input, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		long inputParamValue = input.nativeObject.pointer;
		long pDataParamValue = pData.nativeObject.pointer;
		long returnValue = code_MemoryDataStreamPtr_CodecDataPtr(this.nativeObject.pointer, inputParamValue, pDataParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long code_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(long pNativeObject, long input, long pData);
	protected com.earthview.world.core.DataStreamPtr code_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr input, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		long inputParamValue = input.nativeObject.pointer;
		long pDataParamValue = pData.nativeObject.pointer;
		long returnValue = code_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(this.nativeObject.pointer, inputParamValue, pDataParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}

	native private void codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr(long pNativeObject, long input, String outFileName, long pData);
	//// @copydoc CCodec::codeToFile
	public void codeToFile(com.earthview.world.core.MemoryDataStreamPtr input, String outFileName, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		long inputParamValue = input.nativeObject.pointer;
		String outFileNameParamValue = outFileName;
		long pDataParamValue = pData.nativeObject.pointer;
		codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr(this.nativeObject.pointer, inputParamValue, outFileNameParamValue, pDataParamValue);
	}
	native private void codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(long pNativeObject, long input, String outFileName, long pData);
	protected void codeToFile_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr input, String outFileName, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		long inputParamValue = input.nativeObject.pointer;
		String outFileNameParamValue = outFileName;
		long pDataParamValue = pData.nativeObject.pointer;
		codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(this.nativeObject.pointer, inputParamValue, outFileNameParamValue, pDataParamValue);
	}

	native private long decode_DataStreamPtr(long pNativeObject, long input);
	//// @copydoc CCodec::decode
	public com.earthview.world.graphic.Codec.DecodeResult decode(com.earthview.world.core.DataStreamPtr input)
	{
		long inputParamValue = input.nativeObject.pointer;
		long returnValue = decode_DataStreamPtr(this.nativeObject.pointer, inputParamValue);
		com.earthview.world.graphic.Codec.DecodeResult __returnValue = new com.earthview.world.graphic.Codec.DecodeResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DecodeResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Codec.DecodeResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DecodeResult");
		}
		return __returnValue;
	}
	native private long decode_DataStreamPtr_NoVirtual(long pNativeObject, long input);
	protected com.earthview.world.graphic.Codec.DecodeResult decode_NoVirtual(com.earthview.world.core.DataStreamPtr input)
	{
		long inputParamValue = input.nativeObject.pointer;
		long returnValue = decode_DataStreamPtr_NoVirtual(this.nativeObject.pointer, inputParamValue);
		com.earthview.world.graphic.Codec.DecodeResult __returnValue = new com.earthview.world.graphic.Codec.DecodeResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DecodeResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Codec.DecodeResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DecodeResult");
		}
		return __returnValue;
	}

	native private String magicNumberToFileExt_ev_char_ev_size_t(long pNativeObject, long magicNumberPtr, long maxbytes);
	//// @copydoc CCodec::magicNumberToFileExt
	public String magicNumberToFileExt(BytePointer magicNumberPtr, long maxbytes)
	{
		long magicNumberPtrParamValue = (magicNumberPtr == null ? 0L : magicNumberPtr.nativeObject.pointer);
		long maxbytesParamValue = maxbytes;
		String returnValue = magicNumberToFileExt_ev_char_ev_size_t(this.nativeObject.pointer, magicNumberPtrParamValue, maxbytesParamValue);
		return returnValue;
	}
	native private String magicNumberToFileExt_ev_char_ev_size_t_NoVirtual(long pNativeObject, long magicNumberPtr, long maxbytes);
	protected String magicNumberToFileExt_NoVirtual(BytePointer magicNumberPtr, long maxbytes)
	{
		long magicNumberPtrParamValue = (magicNumberPtr == null ? 0L : magicNumberPtr.nativeObject.pointer);
		long maxbytesParamValue = maxbytes;
		String returnValue = magicNumberToFileExt_ev_char_ev_size_t_NoVirtual(this.nativeObject.pointer, magicNumberPtrParamValue, maxbytesParamValue);
		return returnValue;
	}

	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static void startup_void();
	//// Static method to startup and register the PVRTC codec
	public static void startup()
	{
		startup_void();
	}
	native private static void shutdown_void();
	//// Static method to shutdown and unregister the PVRTC codec
	public static void shutdown()
	{
		shutdown_void();
	}
	public Pvrtccodec(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Pvrtccodec(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * ReturnsthetypeofthedatathatsupportedbythiscodecasaEVString
	 * @param  
	 */
	public String getDataType()
	{
		return super.getDataType_NoVirtual();
	}
	/**
	 * Returnswhetheramagicnumberheadermatchesthiscodec.
	 * @param  magicNumberPtrPointertoastreamofbyteswhichshouldidentifythefile.	Notethatthismaybemorethanneeded-eachcodecmaybelookingfor	adifferentsizemagicnumber.
	 * @param  maxbytesThenumberofbytespassed
	 */
	public boolean magicNumberMatch(BytePointer magicNumberPtr, long maxbytes)
	{
		return super.magicNumberMatch_NoVirtual(magicNumberPtr, maxbytes);
	}
	
	native protected void register_code_MemoryDataStreamPtr_CodecDataPtr(long pNativeObject, String method);
	native protected void register_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr(long pNativeObject, String method);
	native protected void register_decode_DataStreamPtr(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataType_void(long pNativeObject, String method);
	native protected void register_magicNumberMatch_ev_char_ev_size_t(long pNativeObject, String method);
	native protected void register_magicNumberToFileExt_ev_char_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_code_MemoryDataStreamPtr_CodecDataPtr(this.nativeObject.pointer, "code_MemoryDataStreamPtr_CodecDataPtr_callback");
			this.register_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr(this.nativeObject.pointer, "codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback");
			this.register_decode_DataStreamPtr(this.nativeObject.pointer, "decode_DataStreamPtr_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataType_void(this.nativeObject.pointer, "getDataType_void_callback");
			this.register_magicNumberMatch_ev_char_ev_size_t(this.nativeObject.pointer, "magicNumberMatch_ev_char_ev_size_t_callback");
			this.register_magicNumberToFileExt_ev_char_ev_size_t(this.nativeObject.pointer, "magicNumberToFileExt_ev_char_ev_size_t_callback");
		}
	}
	
	public static Pvrtccodec fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Pvrtccodec obj = null;
 		if(baseObj instanceof Pvrtccodec)
		{
			obj = (Pvrtccodec)baseObj;
		} else {
			obj = new Pvrtccodec(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPVRTCCodec");
			obj.increaseCast();
		}

		return obj;
	}
}
