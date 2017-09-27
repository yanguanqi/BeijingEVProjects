package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Abstractclassthatdefinesa'codec'.@remarksAcodecclassworkslikeatwo-wayfilterfordata-dataenteredononeend(thedecodeend)getsprocessedandtransformedintoeasilyusabledatawhiledatapassedtheotherwayaroundcodesitback.@parThecodecconceptisaprettygenericone-youcaneasilyunderstandhowitcanbeusedforimages,sounds,archives,evencompresseddata.
 */
public class Codec extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec", new CodecClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCodecProxy", new CodecClassFactory());
	}

	public static class CodecData extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::CCodecData", new CodecDataClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::JCCodecDataProxy", new CodecDataClassFactory());
		}

		public CodecData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCodecDataProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Codec$CodecData".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  String dataType_void_callback()
		{
			String returnValue = dataType();
			String __returnValue = returnValue;
			return __returnValue;
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

		public CodecData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CodecData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_dataType_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_dataType_void(this.nativeObject.pointer, "dataType_void_callback");
			}
		}
		
		public static CodecData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CodecData obj = null;
 			if(baseObj instanceof CodecData)
			{
				obj = (CodecData)baseObj;
			} else {
				obj = new CodecData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCodecData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CodecDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CodecData emptyInstance = new CodecData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CodecDataPtr extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::CodecDataPtr", new CodecDataPtrClassFactory());
		}

		public CodecDataPtr() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CodecDataPtr", null);
		}

		public CodecDataPtr(com.earthview.world.graphic.Codec.CodecData rep) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer repPtr = new BasePointer(rep);
			list.add("rep", repPtr.get());
			if(rep != null)
			{
			rep.setNoFree(true);
			}
			Create("CodecDataPtr", list);
		}

		public CodecDataPtr(com.earthview.world.graphic.Codec.CodecData rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer repPtr = new BasePointer(rep);
			list.add("rep", repPtr.get());
			if(rep != null)
			{
			rep.setNoFree(true);
			}
			BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
			list.add("inFreeMethod", inFreeMethodPtr.get());
			Create("CodecDataPtr", list);
		}

		public CodecDataPtr(com.earthview.world.graphic.Codec.CodecDataPtr r) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rPtr = new BasePointer(r);
			list.add("r", rPtr.get());
			Create("CodecDataPtr", list);
		}

		native private long get_void(long pNativeObject);
		public com.earthview.world.graphic.Codec.CodecData get()
		{
			long returnValue = get_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Codec.CodecData __returnValue = new com.earthview.world.graphic.Codec.CodecData(CreatedWhenConstruct.CWC_NotToCreate, "CCodecData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec.CodecData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodecData");
			}
			return __returnValue;
		}
		public CodecDataPtr(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CodecDataPtr(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CodecDataPtr fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CodecDataPtr obj = null;
 			if(baseObj instanceof CodecDataPtr)
			{
				obj = (CodecDataPtr)baseObj;
			} else {
				obj = new CodecDataPtr(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CodecDataPtr");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CodecDataPtrClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CodecDataPtr emptyInstance = new CodecDataPtr(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///   typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CodecList> EarthView::World::Graphic::CCodec::CodecIterator;
	public static class CodecPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::CCodecPair", new CodecPairClassFactory());
		}

		public CodecPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CCodecPair", null);
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
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.Codec get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Codec __returnValue = new com.earthview.world.graphic.Codec(CreatedWhenConstruct.CWC_NotToCreate, "CCodec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodec");
			}
			return __returnValue;
		}
		
		native private void set_second_CCodec (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.Codec second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CCodec(this.nativeObject.pointer, secondParamValue);
		}
		
		public CodecPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CodecPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CodecPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CodecPair obj = null;
 			if(baseObj instanceof CodecPair)
			{
				obj = (CodecPair)baseObj;
			} else {
				obj = new CodecPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCodecPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CodecPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CodecPair emptyInstance = new CodecPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CodecIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::CodecIterator", new CodecIteratorClassFactory());
		}

		public CodecIterator(com.earthview.world.graphic.CodecList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("CodecIterator", list);
		}

		public CodecIterator(com.earthview.world.graphic.Codec.CodecIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("CodecIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private String nextKey_void(long pNativeObject);
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		public com.earthview.world.graphic.Codec nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Codec __returnValue = new com.earthview.world.graphic.Codec(CreatedWhenConstruct.CWC_NotToCreate, "CCodec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodec");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Codec> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.Codec> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Codec>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Codec next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Codec __returnValue = new com.earthview.world.graphic.Codec(CreatedWhenConstruct.CWC_NotToCreate, "CCodec");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodec");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Codec.CodecPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Codec.CodecPair __returnValue = new com.earthview.world.graphic.Codec.CodecPair(CreatedWhenConstruct.CWC_NotToCreate, "CCodecPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec.CodecPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodecPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Codec.CodecPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Codec.CodecPair __returnValue = new com.earthview.world.graphic.Codec.CodecPair(CreatedWhenConstruct.CWC_NotToCreate, "CCodecPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec.CodecPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodecPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Codec.CodecPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Codec.CodecPair __returnValue = new com.earthview.world.graphic.Codec.CodecPair(CreatedWhenConstruct.CWC_NotToCreate, "CCodecPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec.CodecPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCodecPair");
			}
			return __returnValue;
		}
		public CodecIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CodecIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CodecIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CodecIterator obj = null;
 			if(baseObj instanceof CodecIterator)
			{
				obj = (CodecIterator)baseObj;
			} else {
				obj = new CodecIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CodecIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CodecIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CodecIterator emptyInstance = new CodecIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private boolean get_NeedConversion_void(long pNativeObject);
	public boolean get_NeedConversion()
	{
		boolean jniValue = get_NeedConversion_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_NeedConversion_ev_bool (long pNativeObject, boolean value);
	public void set_NeedConversion(boolean NeedConversion)
	{
		boolean NeedConversionParamValue = NeedConversion;
		
		set_NeedConversion_ev_bool(this.nativeObject.pointer, NeedConversionParamValue);
	}
	
	native private boolean get_NeedDeCompress_void(long pNativeObject);
	public boolean get_NeedDeCompress()
	{
		boolean jniValue = get_NeedDeCompress_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_NeedDeCompress_ev_bool (long pNativeObject, boolean value);
	public void set_NeedDeCompress(boolean NeedDeCompress)
	{
		boolean NeedDeCompressParamValue = NeedDeCompress;
		
		set_NeedDeCompress_ev_bool(this.nativeObject.pointer, NeedDeCompressParamValue);
	}
	
	native private boolean get_IsEVG_void(long pNativeObject);
	public boolean get_IsEVG()
	{
		boolean jniValue = get_IsEVG_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_IsEVG_ev_bool (long pNativeObject, boolean value);
	public void set_IsEVG(boolean IsEVG)
	{
		boolean IsEVGParamValue = IsEVG;
		
		set_IsEVG_ev_bool(this.nativeObject.pointer, IsEVGParamValue);
	}
	
	native private int get_DxtFormat_void(long pNativeObject);
	public int get_DxtFormat()
	{
		int jniValue = get_DxtFormat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_DxtFormat_ev_uint16 (long pNativeObject, int value);
	public void set_DxtFormat(int DxtFormat)
	{
		int DxtFormatParamValue = DxtFormat;
		
		set_DxtFormat_ev_uint16(this.nativeObject.pointer, DxtFormatParamValue);
	}
	
	native private boolean get_HasMipMap_void(long pNativeObject);
	public boolean get_HasMipMap()
	{
		boolean jniValue = get_HasMipMap_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_HasMipMap_ev_bool (long pNativeObject, boolean value);
	public void set_HasMipMap(boolean HasMipMap)
	{
		boolean HasMipMapParamValue = HasMipMap;
		
		set_HasMipMap_ev_bool(this.nativeObject.pointer, HasMipMapParamValue);
	}
	
	native private boolean get_HasOneBitAlpha_void(long pNativeObject);
	public boolean get_HasOneBitAlpha()
	{
		boolean jniValue = get_HasOneBitAlpha_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_HasOneBitAlpha_ev_bool (long pNativeObject, boolean value);
	public void set_HasOneBitAlpha(boolean HasOneBitAlpha)
	{
		boolean HasOneBitAlphaParamValue = HasOneBitAlpha;
		
		set_HasOneBitAlpha_ev_bool(this.nativeObject.pointer, HasOneBitAlphaParamValue);
	}
	
	public Codec() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCodecProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Codec".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static void registerCodec_CCodec(long ref_pCodec);
	/**
	 * Registersanewcodecinthedatabase.
	 * @param  name="pCodec"
	 */
	public static void registerCodec(com.earthview.world.graphic.Codec ref_pCodec)
	{
		long ref_pCodecParamValue = (ref_pCodec == null ? 0L : ref_pCodec.nativeObject.pointer);
		registerCodec_CCodec(ref_pCodecParamValue);
	}
	native private static boolean isCodecRegistered_EVString(String codecType);
	/**
	 * Returnwhetheracodecisregisteredalready.
	 * @param  name="codecType"
	 */
	public static boolean isCodecRegistered(String codecType)
	{
		String codecTypeParamValue = codecType;
		boolean returnValue = isCodecRegistered_EVString(codecTypeParamValue);
		return returnValue;
	}
	native private static void unRegisterCodec_CCodec(long pCodec);
	/**
	 * Unregistersacodecfromthedatabase.
	 * @param  name="pCodec"
	 */
	public static void unRegisterCodec(com.earthview.world.graphic.Codec pCodec)
	{
		long pCodecParamValue = (pCodec == null ? 0L : pCodec.nativeObject.pointer);
		unRegisterCodec_CCodec(pCodecParamValue);
	}
	native private static long getCodecIterator_void();
	/**
	 * Getstheiteratorfortheregisteredcodecs.
	 * @param  
	 */
	public static com.earthview.world.graphic.Codec.CodecIterator getCodecIterator()
	{
		long returnValue = getCodecIterator_void();
		com.earthview.world.graphic.Codec.CodecIterator __returnValue = new com.earthview.world.graphic.Codec.CodecIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CodecIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Codec.CodecIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CodecIterator");
		}
		return __returnValue;
	}
	native private static long getExtensions_void();
	/**
	 * Getsthefileextensionlistfortheregisteredcodecs.
	 * @param  
	 * @return Getsthefileextensionlistfortheregisteredcodecs.
	 */
	public static com.earthview.world.core.StringVector getExtensions()
	{
		long returnValue = getExtensions_void();
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
	native private static long getCodec_EVString(String extension);
	/**
	 * Getsthecodecregisteredforthepassedinfileextension.
	 * @param  name="extension"
	 * @return EarthView::World::Graphic::CCodecpointer
	 */
	public static com.earthview.world.graphic.Codec getCodec(String extension)
	{
		String extensionParamValue = extension;
		long returnValue = getCodec_EVString(extensionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Codec __returnValue = new com.earthview.world.graphic.Codec(CreatedWhenConstruct.CWC_NotToCreate, "CCodec");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Codec)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCodec");
		}
		return __returnValue;
	}
	native private static long getCodec_ev_char_ev_size_t(long magicNumberPtr, long maxbytes);
	/**
	 * Getsthecodecthatcanhandlethegiven'magic'identifier.
	 * @param  name="magicNumberPtr"Pointertoastreamofbyteswhichshouldidentifythefile.	Notethatthismaybemorethanneeded-eachcodecmaybelookingfor	adifferentsizemagicnumber.
	 * @param  name="maxbytes"Thenumberofbytespassed
	 * @return EarthView::World::Graphic::CCodecpointer
	 */
	public static com.earthview.world.graphic.Codec getCodec(BytePointer magicNumberPtr, long maxbytes)
	{
		long magicNumberPtrParamValue = (magicNumberPtr == null ? 0L : magicNumberPtr.nativeObject.pointer);
		long maxbytesParamValue = maxbytes;
		long returnValue = getCodec_ev_char_ev_size_t(magicNumberPtrParamValue, maxbytesParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Codec __returnValue = new com.earthview.world.graphic.Codec(CreatedWhenConstruct.CWC_NotToCreate, "CCodec");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Codec)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCodec");
		}
		return __returnValue;
	}
	protected  long code_MemoryDataStreamPtr_CodecDataPtr_callback(long input, long pData)
	{
		com.earthview.world.core.MemoryDataStreamPtr inputParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		inputParamValue.setDelegate(true);
		inputParamValue.setInstancePointer(new InstancePointer(input));
		IClassFactory inputParamValueClassFactory = GlobalClassFactoryMap.get(inputParamValue.getCppInstanceTypeName());
		if (inputParamValueClassFactory != null)
		{
			inputParamValue.setDelegate(true);
			inputParamValue = (com.earthview.world.core.MemoryDataStreamPtr)inputParamValueClassFactory.create();
			inputParamValue.setDelegate(true);
			inputParamValue.setInstancePointer(new InstancePointer(input));
		}
		com.earthview.world.graphic.Codec.CodecDataPtr pDataParamValue = new com.earthview.world.graphic.Codec.CodecDataPtr(CreatedWhenConstruct.CWC_NotToCreate);
		pDataParamValue.setDelegate(true);
		pDataParamValue.setInstancePointer(new InstancePointer(pData));
		IClassFactory pDataParamValueClassFactory = GlobalClassFactoryMap.get(pDataParamValue.getCppInstanceTypeName());
		if (pDataParamValueClassFactory != null)
		{
			pDataParamValue.setDelegate(true);
			pDataParamValue = (com.earthview.world.graphic.Codec.CodecDataPtr)pDataParamValueClassFactory.create();
			pDataParamValue.setDelegate(true);
			pDataParamValue.setInstancePointer(new InstancePointer(pData));
		}
		com.earthview.world.core.DataStreamPtr returnValue = code(inputParamValue, pDataParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long code_MemoryDataStreamPtr_CodecDataPtr(long pNativeObject, long input, long pData);
	/**
	 * Codesthedataintheinputstreamandsavestheresultintheoutputstream.
	 * @param  name="input"
	 * @param  name="pData"
	 */
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

	protected  void codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback(long input, String outFileName, long pData)
	{
		com.earthview.world.core.MemoryDataStreamPtr inputParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		inputParamValue.setDelegate(true);
		inputParamValue.setInstancePointer(new InstancePointer(input));
		IClassFactory inputParamValueClassFactory = GlobalClassFactoryMap.get(inputParamValue.getCppInstanceTypeName());
		if (inputParamValueClassFactory != null)
		{
			inputParamValue.setDelegate(true);
			inputParamValue = (com.earthview.world.core.MemoryDataStreamPtr)inputParamValueClassFactory.create();
			inputParamValue.setDelegate(true);
			inputParamValue.setInstancePointer(new InstancePointer(input));
		}
		String outFileNameParamValue = outFileName;
		com.earthview.world.graphic.Codec.CodecDataPtr pDataParamValue = new com.earthview.world.graphic.Codec.CodecDataPtr(CreatedWhenConstruct.CWC_NotToCreate);
		pDataParamValue.setDelegate(true);
		pDataParamValue.setInstancePointer(new InstancePointer(pData));
		IClassFactory pDataParamValueClassFactory = GlobalClassFactoryMap.get(pDataParamValue.getCppInstanceTypeName());
		if (pDataParamValueClassFactory != null)
		{
			pDataParamValue.setDelegate(true);
			pDataParamValue = (com.earthview.world.graphic.Codec.CodecDataPtr)pDataParamValueClassFactory.create();
			pDataParamValue.setDelegate(true);
			pDataParamValue.setInstancePointer(new InstancePointer(pData));
		}
		codeToFile(inputParamValue, outFileNameParamValue, pDataParamValue);
	}

	native private void codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr(long pNativeObject, long input, String outFileName, long pData);
	/**
	 * Codesthedataintheinputchunkandsavestheresultintheoutputfilenameprovided.Providedforefficiencysincecodingtomemoryisprogressivethereforememoryrequiredisunknownleadingtoreallocations.
	 * @param  name="input"Theinputdata
	 * @param  name="outFileName"Thefilenametowriteto
	 * @param  name="pData"Extrainformationtobepassedtothecodec(codectypespecific)
	 */
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

	/// Result of a decoding; both a decoded data stream and EarthView::World::Graphic::CCodec::CCodecData metadata
	public static class DecodeResult extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCodec::DecodeResult", new DecodeResultClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public com.earthview.world.core.MemoryDataStreamPtr get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
			}
			return __returnValue;
		}
		
		native private void set_first_MemoryDataStreamPtr (long pNativeObject, long value);
		public void set_first(com.earthview.world.core.MemoryDataStreamPtr first)
		{
			long firstParamValue = first.nativeObject.pointer;
			
			set_first_MemoryDataStreamPtr(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.Codec.CodecDataPtr get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.Codec.CodecDataPtr __returnValue = new com.earthview.world.graphic.Codec.CodecDataPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CodecDataPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Codec.CodecDataPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CodecDataPtr");
			}
			return __returnValue;
		}
		
		native private void set_second_CodecDataPtr (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.Codec.CodecDataPtr second)
		{
			long secondParamValue = second.nativeObject.pointer;
			
			set_second_CodecDataPtr(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 构造函数
		 * @param fir 键
		 * @param sec 值
		 */
		public DecodeResult(com.earthview.world.core.MemoryDataStreamPtr fir, com.earthview.world.graphic.Codec.CodecDataPtr sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("DecodeResult", list);
		}

		public DecodeResult() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("DecodeResult", null);
		}

		public DecodeResult(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DecodeResult(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DecodeResult fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DecodeResult obj = null;
 			if(baseObj instanceof DecodeResult)
			{
				obj = (DecodeResult)baseObj;
			} else {
				obj = new DecodeResult(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "DecodeResult");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DecodeResultClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DecodeResult emptyInstance = new DecodeResult(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long decode_DataStreamPtr_callback(long input)
	{
		com.earthview.world.core.DataStreamPtr inputParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		inputParamValue.setDelegate(true);
		inputParamValue.setInstancePointer(new InstancePointer(input));
		IClassFactory inputParamValueClassFactory = GlobalClassFactoryMap.get(inputParamValue.getCppInstanceTypeName());
		if (inputParamValueClassFactory != null)
		{
			inputParamValue.setDelegate(true);
			inputParamValue = (com.earthview.world.core.DataStreamPtr)inputParamValueClassFactory.create();
			inputParamValue.setDelegate(true);
			inputParamValue.setInstancePointer(new InstancePointer(input));
		}
		com.earthview.world.graphic.Codec.DecodeResult returnValue = decode(inputParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long decode_DataStreamPtr(long pNativeObject, long input);
	/**
	 * Codesthedatafromtheinputchunkintotheoutputchunk.
	 * @param  name="input"CStreamcontainingtheencodeddata
	 */
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

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	/**
	 * ReturnsthetypeofthecodecasaEVString
	 * @param  
	 */
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

	protected  String getDataType_void_callback()
	{
		String returnValue = getDataType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDataType_void(long pNativeObject);
	/**
	 * ReturnsthetypeofthedatathatsupportedbythiscodecasaEVString
	 * @param  
	 */
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

	protected  boolean magicNumberMatch_ev_char_ev_size_t_callback(long magicNumberPtr, long maxbytes)
	{
		BytePointer magicNumberPtrParamValue = (magicNumberPtr == 0L ? null : new BytePointer(new InstancePointer(magicNumberPtr)));
		long maxbytesParamValue = maxbytes;
		boolean returnValue = magicNumberMatch(magicNumberPtrParamValue, maxbytesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean magicNumberMatch_ev_char_ev_size_t(long pNativeObject, long magicNumberPtr, long maxbytes);
	/**
	 * Returnswhetheramagicnumberheadermatchesthiscodec.
	 * @param  magicNumberPtrPointertoastreamofbyteswhichshouldidentifythefile.	Notethatthismaybemorethanneeded-eachcodecmaybelookingfor	adifferentsizemagicnumber.
	 * @param  maxbytesThenumberofbytespassed
	 */
	public boolean magicNumberMatch(BytePointer magicNumberPtr, long maxbytes)
	{
		long magicNumberPtrParamValue = (magicNumberPtr == null ? 0L : magicNumberPtr.nativeObject.pointer);
		long maxbytesParamValue = maxbytes;
		boolean returnValue = magicNumberMatch_ev_char_ev_size_t(this.nativeObject.pointer, magicNumberPtrParamValue, maxbytesParamValue);
		return returnValue;
	}
	native private boolean magicNumberMatch_ev_char_ev_size_t_NoVirtual(long pNativeObject, long magicNumberPtr, long maxbytes);
	protected boolean magicNumberMatch_NoVirtual(BytePointer magicNumberPtr, long maxbytes)
	{
		long magicNumberPtrParamValue = (magicNumberPtr == null ? 0L : magicNumberPtr.nativeObject.pointer);
		long maxbytesParamValue = maxbytes;
		boolean returnValue = magicNumberMatch_ev_char_ev_size_t_NoVirtual(this.nativeObject.pointer, magicNumberPtrParamValue, maxbytesParamValue);
		return returnValue;
	}

	protected  String magicNumberToFileExt_ev_char_ev_size_t_callback(long magicNumberPtr, long maxbytes)
	{
		BytePointer magicNumberPtrParamValue = (magicNumberPtr == 0L ? null : new BytePointer(new InstancePointer(magicNumberPtr)));
		long maxbytesParamValue = maxbytes;
		String returnValue = magicNumberToFileExt(magicNumberPtrParamValue, maxbytesParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String magicNumberToFileExt_ev_char_ev_size_t(long pNativeObject, long magicNumberPtr, long maxbytes);
	/**
	 * Mapsamagicnumberheadertoafileextension,ifthiscodecrecognisesit.
	 * @param  magicNumberPtrPointertoastreamofbyteswhichshouldidentifythefile.	Notethatthismaybemorethanneeded-eachcodecmaybelookingfor	adifferentsizemagicnumber.
	 * @param  maxbytesThenumberofbytespassed
	 * @return Ablankstringifthemagicnumberwasunknown,orafileextension.
	 */
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

	public Codec(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Codec(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Codec fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Codec obj = null;
 		if(baseObj instanceof Codec)
		{
			obj = (Codec)baseObj;
		} else {
			obj = new Codec(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCodec");
			obj.increaseCast();
		}

		return obj;
	}
}
