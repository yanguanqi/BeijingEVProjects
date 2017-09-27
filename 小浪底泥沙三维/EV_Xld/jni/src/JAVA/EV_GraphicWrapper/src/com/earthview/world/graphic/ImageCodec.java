package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageCodec extends com.earthview.world.graphic.Codec {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CImageCodec", new ImageCodecClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCImageCodecProxy", new ImageCodecClassFactory());
	}

	public ImageCodec() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImageCodecProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ImageCodec".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public static class ImageData extends com.earthview.world.graphic.Codec.CodecData {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CImageCodec::CImageData", new ImageDataClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CImageCodec::JCImageDataProxy", new ImageDataClassFactory());
		}

		public ImageData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCImageDataProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ImageCodec$ImageData".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long get_height_void(long pNativeObject);
		public long get_height()
		{
			long jniValue = get_height_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_height_ev_size_t (long pNativeObject, long value);
		public void set_height(long height)
		{
			long heightParamValue = height;
			
			set_height_ev_size_t(this.nativeObject.pointer, heightParamValue);
		}
		
		native private long get_width_void(long pNativeObject);
		public long get_width()
		{
			long jniValue = get_width_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_width_ev_size_t (long pNativeObject, long value);
		public void set_width(long width)
		{
			long widthParamValue = width;
			
			set_width_ev_size_t(this.nativeObject.pointer, widthParamValue);
		}
		
		native private long get_depth_void(long pNativeObject);
		public long get_depth()
		{
			long jniValue = get_depth_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_depth_ev_size_t (long pNativeObject, long value);
		public void set_depth(long depth)
		{
			long depthParamValue = depth;
			
			set_depth_ev_size_t(this.nativeObject.pointer, depthParamValue);
		}
		
		native private long get_size_void(long pNativeObject);
		public long get_size()
		{
			long jniValue = get_size_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_size_ev_size_t (long pNativeObject, long value);
		public void set_size(long size)
		{
			long sizeParamValue = size;
			
			set_size_ev_size_t(this.nativeObject.pointer, sizeParamValue);
		}
		
		native private int get_num_mipmaps_void(long pNativeObject);
		public int get_num_mipmaps()
		{
			int jniValue = get_num_mipmaps_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_num_mipmaps_ev_uint16 (long pNativeObject, int value);
		public void set_num_mipmaps(int num_mipmaps)
		{
			int num_mipmapsParamValue = num_mipmaps;
			
			set_num_mipmaps_ev_uint16(this.nativeObject.pointer, num_mipmapsParamValue);
		}
		
		native private long get_flags_void(long pNativeObject);
		public long get_flags()
		{
			long jniValue = get_flags_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_flags_ev_uint32 (long pNativeObject, long value);
		public void set_flags(long flags)
		{
			long flagsParamValue = flags;
			
			set_flags_ev_uint32(this.nativeObject.pointer, flagsParamValue);
		}
		
		native private int get_format_void(long pNativeObject);
		public com.earthview.world.graphic.PixelFormat get_format()
		{
			int jniValue = get_format_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.PixelFormat.toEnum(jniValue);
		}
		
		native private void set_format_PixelFormat (long pNativeObject, int value);
		public void set_format(com.earthview.world.graphic.PixelFormat format)
		{
			int formatParamValue = format.getValue();
			
			set_format_PixelFormat(this.nativeObject.pointer, formatParamValue);
		}
		
		native private String dataType_void(long pNativeObject);
		public String dataType()
		{
			String returnValue = dataType_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String dataType_void_NoVirtual(long pNativeObject);
		protected String dataType_NoVirtual()
		{
			String returnValue = dataType_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		public ImageData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ImageData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_dataType_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_dataType_void(this.nativeObject.pointer, "dataType_void_callback");
			}
		}
		
		public static ImageData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ImageData obj = null;
 			if(baseObj instanceof ImageData)
			{
				obj = (ImageData)baseObj;
			} else {
				obj = new ImageData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CImageData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ImageDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ImageData emptyInstance = new ImageData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private String getDataType_void(long pNativeObject);
	public String getDataType()
	{
		String returnValue = getDataType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDataType_void_NoVirtual(long pNativeObject);
	protected String getDataType_NoVirtual()
	{
		String returnValue = getDataType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public ImageCodec(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageCodec(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * Codesthedataintheinputstreamandsavestheresultintheoutputstream.
	 * @param  name="input"
	 * @param  name="pData"
	 */
	public com.earthview.world.core.DataStreamPtr code(com.earthview.world.core.MemoryDataStreamPtr input, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		return super.code_NoVirtual(input, pData);
	}
	/**
	 * Codesthedataintheinputchunkandsavestheresultintheoutputfilenameprovided.Providedforefficiencysincecodingtomemoryisprogressivethereforememoryrequiredisunknownleadingtoreallocations.
	 * @param  name="input"Theinputdata
	 * @param  name="outFileName"Thefilenametowriteto
	 * @param  name="pData"Extrainformationtobepassedtothecodec(codectypespecific)
	 */
	public void codeToFile(com.earthview.world.core.MemoryDataStreamPtr input, String outFileName, com.earthview.world.graphic.Codec.CodecDataPtr pData)
	{
		super.codeToFile_NoVirtual(input, outFileName, pData);
	}
	/**
	 * Codesthedatafromtheinputchunkintotheoutputchunk.
	 * @param  name="input"CStreamcontainingtheencodeddata
	 */
	public com.earthview.world.graphic.Codec.DecodeResult decode(com.earthview.world.core.DataStreamPtr input)
	{
		return super.decode_NoVirtual(input);
	}
	/**
	 * ReturnsthetypeofthecodecasaEVString
	 * @param  
	 */
	public String getType()
	{
		return super.getType_NoVirtual();
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
	/**
	 * Mapsamagicnumberheadertoafileextension,ifthiscodecrecognisesit.
	 * @param  magicNumberPtrPointertoastreamofbyteswhichshouldidentifythefile.	Notethatthismaybemorethanneeded-eachcodecmaybelookingfor	adifferentsizemagicnumber.
	 * @param  maxbytesThenumberofbytespassed
	 * @return Ablankstringifthemagicnumberwasunknown,orafileextension.
	 */
	public String magicNumberToFileExt(BytePointer magicNumberPtr, long maxbytes)
	{
		return super.magicNumberToFileExt_NoVirtual(magicNumberPtr, maxbytes);
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
	
	public static ImageCodec fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageCodec obj = null;
 		if(baseObj instanceof ImageCodec)
		{
			obj = (ImageCodec)baseObj;
		} else {
			obj = new ImageCodec(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageCodec");
			obj.increaseCast();
		}

		return obj;
	}
}
