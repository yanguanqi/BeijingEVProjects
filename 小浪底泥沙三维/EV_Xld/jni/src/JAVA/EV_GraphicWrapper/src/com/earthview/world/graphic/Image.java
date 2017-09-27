package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x00000002,
public class Image extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CImage", new ImageClassFactory());
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
	
	public Image() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CImage", null);
	}

	public Image(com.earthview.world.graphic.Image img) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer imgPtr = new BasePointer(img);
		list.add("img", imgPtr.get());
		Create("CImage", list);
	}

	native private long OperatorAssign_CImage(long pNativeObject, long img);
	public com.earthview.world.graphic.Image OperatorAssign(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		long returnValue = OperatorAssign_CImage(this.nativeObject.pointer, imgParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long flipAroundY_void(long pNativeObject);
	public com.earthview.world.graphic.Image flipAroundY()
	{
		long returnValue = flipAroundY_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long flipAroundX_void(long pNativeObject);
	public com.earthview.world.graphic.Image flipAroundX()
	{
		long returnValue = flipAroundX_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t_ev_size_t(long pNativeObject, long pData, long uWidth, long uHeight, long depth, int eFormat, boolean autoDelete, long numFaces, long numMipMaps);
	public com.earthview.world.graphic.Image loadDynamicImage(UBytePointer pData, long uWidth, long uHeight, long depth, com.earthview.world.graphic.PixelFormat eFormat, boolean autoDelete, long numFaces, long numMipMaps)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long depthParamValue = depth;
		int eFormatParamValue = eFormat.getValue();
		boolean autoDeleteParamValue = autoDelete;
		long numFacesParamValue = numFaces;
		long numMipMapsParamValue = numMipMaps;
		long returnValue = loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, uWidthParamValue, uHeightParamValue, depthParamValue, eFormatParamValue, autoDeleteParamValue, numFacesParamValue, numMipMapsParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t(long pNativeObject, long pData, long uWidth, long uHeight, long depth, int eFormat, boolean autoDelete, long numFaces);
	public com.earthview.world.graphic.Image loadDynamicImage(UBytePointer pData, long uWidth, long uHeight, long depth, com.earthview.world.graphic.PixelFormat eFormat, boolean autoDelete, long numFaces)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long depthParamValue = depth;
		int eFormatParamValue = eFormat.getValue();
		boolean autoDeleteParamValue = autoDelete;
		long numFacesParamValue = numFaces;
		long returnValue = loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t(this.nativeObject.pointer, pDataParamValue, uWidthParamValue, uHeightParamValue, depthParamValue, eFormatParamValue, autoDeleteParamValue, numFacesParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool(long pNativeObject, long pData, long uWidth, long uHeight, long depth, int eFormat, boolean autoDelete);
	public com.earthview.world.graphic.Image loadDynamicImage(UBytePointer pData, long uWidth, long uHeight, long depth, com.earthview.world.graphic.PixelFormat eFormat, boolean autoDelete)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long depthParamValue = depth;
		int eFormatParamValue = eFormat.getValue();
		boolean autoDeleteParamValue = autoDelete;
		long returnValue = loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool(this.nativeObject.pointer, pDataParamValue, uWidthParamValue, uHeightParamValue, depthParamValue, eFormatParamValue, autoDeleteParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat(long pNativeObject, long pData, long uWidth, long uHeight, long depth, int eFormat);
	public com.earthview.world.graphic.Image loadDynamicImage(UBytePointer pData, long uWidth, long uHeight, long depth, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long depthParamValue = depth;
		int eFormatParamValue = eFormat.getValue();
		long returnValue = loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat(this.nativeObject.pointer, pDataParamValue, uWidthParamValue, uHeightParamValue, depthParamValue, eFormatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_PixelFormat(long pNativeObject, long pData, long uWidth, long uHeight, int eFormat);
	public com.earthview.world.graphic.Image loadDynamicImage(UBytePointer pData, long uWidth, long uHeight, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		int eFormatParamValue = eFormat.getValue();
		long returnValue = loadDynamicImage_ev_uchar_ev_size_t_ev_size_t_PixelFormat(this.nativeObject.pointer, pDataParamValue, uWidthParamValue, uHeightParamValue, eFormatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t_ev_size_t(long pNativeObject, long stream, long uWidth, long uHeight, long uDepth, int eFormat, long numFaces, long numMipMaps);
	public com.earthview.world.graphic.Image loadRawData(com.earthview.world.core.DataStreamPtr stream, long uWidth, long uHeight, long uDepth, com.earthview.world.graphic.PixelFormat eFormat, long numFaces, long numMipMaps)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long uDepthParamValue = uDepth;
		int eFormatParamValue = eFormat.getValue();
		long numFacesParamValue = numFaces;
		long numMipMapsParamValue = numMipMaps;
		long returnValue = loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t_ev_size_t(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, uDepthParamValue, eFormatParamValue, numFacesParamValue, numMipMapsParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t(long pNativeObject, long stream, long uWidth, long uHeight, long uDepth, int eFormat, long numFaces);
	public com.earthview.world.graphic.Image loadRawData(com.earthview.world.core.DataStreamPtr stream, long uWidth, long uHeight, long uDepth, com.earthview.world.graphic.PixelFormat eFormat, long numFaces)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long uDepthParamValue = uDepth;
		int eFormatParamValue = eFormat.getValue();
		long numFacesParamValue = numFaces;
		long returnValue = loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, uDepthParamValue, eFormatParamValue, numFacesParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat(long pNativeObject, long stream, long uWidth, long uHeight, long uDepth, int eFormat);
	public com.earthview.world.graphic.Image loadRawData(com.earthview.world.core.DataStreamPtr stream, long uWidth, long uHeight, long uDepth, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		long uDepthParamValue = uDepth;
		int eFormatParamValue = eFormat.getValue();
		long returnValue = loadRawData_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, uDepthParamValue, eFormatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadRawData_DataStreamPtr_ev_size_t_ev_size_t_PixelFormat(long pNativeObject, long stream, long uWidth, long uHeight, int eFormat);
	public com.earthview.world.graphic.Image loadRawData(com.earthview.world.core.DataStreamPtr stream, long uWidth, long uHeight, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long uWidthParamValue = uWidth;
		long uHeightParamValue = uHeight;
		int eFormatParamValue = eFormat.getValue();
		long returnValue = loadRawData_DataStreamPtr_ev_size_t_ev_size_t_PixelFormat(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, eFormatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString(long pNativeObject, String strFileName, String groupName);
	public com.earthview.world.graphic.Image load(String strFileName, String groupName)
	{
		String strFileNameParamValue = strFileName;
		String groupNameParamValue = groupName;
		long returnValue = load_EVString_EVString(this.nativeObject.pointer, strFileNameParamValue, groupNameParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long load_DataStreamPtr_EVString(long pNativeObject, long stream, String type);
	public com.earthview.world.graphic.Image load(com.earthview.world.core.DataStreamPtr stream, String type)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String typeParamValue = type;
		long returnValue = load_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, typeParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long load_DataStreamPtr(long pNativeObject, long stream);
	public com.earthview.world.graphic.Image load(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = load_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long load_DataStreamPtr_EVString_ev_bool(long pNativeObject, long stream, String type, boolean ignoreMipmap);
	/// hll, 2014/09/25, 添加
	/// 加载图像，并指定是否忽略掉 mipmap
	///
	/// 调用举例： 
	/// image.NeedDeCompress = true;
	/// image.load(stream, "dds", true);
	/// 加载 dds 格式的 stream，并解压缩（此时 image 为 RGB/RGBA 格式图像），
	/// 且忽略掉了 mipmap（只取 0 级 mimap）
	///
	/// 注意：此接口当前只针对 dds, 若为其他格式，则 withMipmap 参数无效。
	public com.earthview.world.graphic.Image load(com.earthview.world.core.DataStreamPtr stream, String type, boolean ignoreMipmap)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String typeParamValue = type;
		boolean ignoreMipmapParamValue = ignoreMipmap;
		long returnValue = load_DataStreamPtr_EVString_ev_bool(this.nativeObject.pointer, streamParamValue, typeParamValue, ignoreMipmapParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_EVString_EVString_EVString_PixelFormat(long pNativeObject, String rgbFilename, String alphaFilename, String groupName, int format);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(String rgbFilename, String alphaFilename, String groupName, com.earthview.world.graphic.PixelFormat format)
	{
		String rgbFilenameParamValue = rgbFilename;
		String alphaFilenameParamValue = alphaFilename;
		String groupNameParamValue = groupName;
		int formatParamValue = format.getValue();
		long returnValue = loadTwoImagesAsRGBA_EVString_EVString_EVString_PixelFormat(this.nativeObject.pointer, rgbFilenameParamValue, alphaFilenameParamValue, groupNameParamValue, formatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_EVString_EVString_EVString(long pNativeObject, String rgbFilename, String alphaFilename, String groupName);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(String rgbFilename, String alphaFilename, String groupName)
	{
		String rgbFilenameParamValue = rgbFilename;
		String alphaFilenameParamValue = alphaFilename;
		String groupNameParamValue = groupName;
		long returnValue = loadTwoImagesAsRGBA_EVString_EVString_EVString(this.nativeObject.pointer, rgbFilenameParamValue, alphaFilenameParamValue, groupNameParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat_EVString_EVString(long pNativeObject, long rgbStream, long alphaStream, int fmt, String rgbType, String alphaType);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(com.earthview.world.core.DataStreamPtr rgbStream, com.earthview.world.core.DataStreamPtr alphaStream, com.earthview.world.graphic.PixelFormat fmt, String rgbType, String alphaType)
	{
		long rgbStreamParamValue = rgbStream.nativeObject.pointer;
		long alphaStreamParamValue = alphaStream.nativeObject.pointer;
		int fmtParamValue = fmt.getValue();
		String rgbTypeParamValue = rgbType;
		String alphaTypeParamValue = alphaType;
		long returnValue = loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat_EVString_EVString(this.nativeObject.pointer, rgbStreamParamValue, alphaStreamParamValue, fmtParamValue, rgbTypeParamValue, alphaTypeParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat(long pNativeObject, long rgbStream, long alphaStream, int fmt);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(com.earthview.world.core.DataStreamPtr rgbStream, com.earthview.world.core.DataStreamPtr alphaStream, com.earthview.world.graphic.PixelFormat fmt)
	{
		long rgbStreamParamValue = rgbStream.nativeObject.pointer;
		long alphaStreamParamValue = alphaStream.nativeObject.pointer;
		int fmtParamValue = fmt.getValue();
		long returnValue = loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat(this.nativeObject.pointer, rgbStreamParamValue, alphaStreamParamValue, fmtParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat_EVString(long pNativeObject, long rgbStream, long alphaStream, int fmt, String rgbType);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(com.earthview.world.core.DataStreamPtr rgbStream, com.earthview.world.core.DataStreamPtr alphaStream, com.earthview.world.graphic.PixelFormat fmt, String rgbType)
	{
		long rgbStreamParamValue = rgbStream.nativeObject.pointer;
		long alphaStreamParamValue = alphaStream.nativeObject.pointer;
		int fmtParamValue = fmt.getValue();
		String rgbTypeParamValue = rgbType;
		long returnValue = loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr_PixelFormat_EVString(this.nativeObject.pointer, rgbStreamParamValue, alphaStreamParamValue, fmtParamValue, rgbTypeParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr(long pNativeObject, long rgbStream, long alphaStream);
	public com.earthview.world.graphic.Image loadTwoImagesAsRGBA(com.earthview.world.core.DataStreamPtr rgbStream, com.earthview.world.core.DataStreamPtr alphaStream)
	{
		long rgbStreamParamValue = rgbStream.nativeObject.pointer;
		long alphaStreamParamValue = alphaStream.nativeObject.pointer;
		long returnValue = loadTwoImagesAsRGBA_DataStreamPtr_DataStreamPtr(this.nativeObject.pointer, rgbStreamParamValue, alphaStreamParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long combineTwoImagesAsRGBA_CImage_CImage_PixelFormat(long pNativeObject, long rgb, long alpha, int format);
	public com.earthview.world.graphic.Image combineTwoImagesAsRGBA(com.earthview.world.graphic.Image rgb, com.earthview.world.graphic.Image alpha, com.earthview.world.graphic.PixelFormat format)
	{
		long rgbParamValue = rgb.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		int formatParamValue = format.getValue();
		long returnValue = combineTwoImagesAsRGBA_CImage_CImage_PixelFormat(this.nativeObject.pointer, rgbParamValue, alphaParamValue, formatParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private long combineTwoImagesAsRGBA_CImage_CImage(long pNativeObject, long rgb, long alpha);
	public com.earthview.world.graphic.Image combineTwoImagesAsRGBA(com.earthview.world.graphic.Image rgb, com.earthview.world.graphic.Image alpha)
	{
		long rgbParamValue = rgb.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		long returnValue = combineTwoImagesAsRGBA_CImage_CImage(this.nativeObject.pointer, rgbParamValue, alphaParamValue);
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	native private void save_EVString(long pNativeObject, String filename);
	public void save(String filename)
	{
		String filenameParamValue = filename;
		save_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private long encode_EVString(long pNativeObject, String formatextension);
	public com.earthview.world.core.DataStreamPtr encode(String formatextension)
	{
		String formatextensionParamValue = formatextension;
		long returnValue = encode_EVString(this.nativeObject.pointer, formatextensionParamValue);
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
	native private long toDDS_DataStreamPtr(long pNativeObject, long inputStream);
	public com.earthview.world.core.DataStreamPtr toDDS(com.earthview.world.core.DataStreamPtr inputStream)
	{
		long inputStreamParamValue = inputStream.nativeObject.pointer;
		long returnValue = toDDS_DataStreamPtr(this.nativeObject.pointer, inputStreamParamValue);
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
	native private long toDDS2_DataStreamPtr(long pNativeObject, long inputStream);
	public com.earthview.world.core.DataStreamPtr toDDS2(com.earthview.world.core.DataStreamPtr inputStream)
	{
		long inputStreamParamValue = inputStream.nativeObject.pointer;
		long returnValue = toDDS2_DataStreamPtr(this.nativeObject.pointer, inputStreamParamValue);
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
	native private long getData_void(long pNativeObject);
	public UBytePointer getData()
	{
		long returnValue = getData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSize_void(long pNativeObject);
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumMipmaps_void(long pNativeObject);
	public long getNumMipmaps()
	{
		long returnValue = getNumMipmaps_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasFlag_ImageFlags(long pNativeObject, int imgFlag);
	public boolean hasFlag(com.earthview.world.graphic.ImageFlags imgFlag)
	{
		int imgFlagParamValue = imgFlag.getValue();
		boolean returnValue = hasFlag_ImageFlags(this.nativeObject.pointer, imgFlagParamValue);
		return returnValue;
	}
	native private long getWidth_void(long pNativeObject);
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void(long pNativeObject);
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDepth_void(long pNativeObject);
	public long getDepth()
	{
		long returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumFaces_void(long pNativeObject);
	public long getNumFaces()
	{
		long returnValue = getNumFaces_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRowSpan_void(long pNativeObject);
	public long getRowSpan()
	{
		long returnValue = getRowSpan_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFormat_void(long pNativeObject);
	public com.earthview.world.graphic.PixelFormat getFormat()
	{
		int returnValue = getFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private short getBPP_void(long pNativeObject);
	public short getBPP()
	{
		short returnValue = getBPP_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getHasAlpha_void(long pNativeObject);
	public boolean getHasAlpha()
	{
		boolean returnValue = getHasAlpha_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void applyGamma_ev_uchar_Real_ev_size_t_ev_uchar(long buffer, double gamma, long size, short bpp);
	public static void applyGamma(UBytePointer buffer, double gamma, long size, short bpp)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		double gammaParamValue = gamma;
		long sizeParamValue = size;
		short bppParamValue = bpp;
		applyGamma_ev_uchar_Real_ev_size_t_ev_uchar(bufferParamValue, gammaParamValue, sizeParamValue, bppParamValue);
	}
	native private long getColourAt_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long x, long y, long z);
	public com.earthview.world.graphic.ColourValue getColourAt(long x, long y, long z)
	{
		long xParamValue = x;
		long yParamValue = y;
		long zParamValue = z;
		long returnValue = getColourAt_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long cv, long x, long y, long z);
	public void setColourAt(com.earthview.world.graphic.ColourValue cv, long x, long y, long z)
	{
		long cvParamValue = cv.nativeObject.pointer;
		long xParamValue = x;
		long yParamValue = y;
		long zParamValue = z;
		setColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, cvParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private long getPixelBox_ev_size_t_ev_size_t(long pNativeObject, long face, long mipmap);
	public com.earthview.world.graphic.PixelBox getPixelBox(long face, long mipmap)
	{
		long faceParamValue = face;
		long mipmapParamValue = mipmap;
		long returnValue = getPixelBox_ev_size_t_ev_size_t(this.nativeObject.pointer, faceParamValue, mipmapParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private long getPixelBox_ev_size_t(long pNativeObject, long face);
	public com.earthview.world.graphic.PixelBox getPixelBox(long face)
	{
		long faceParamValue = face;
		long returnValue = getPixelBox_ev_size_t(this.nativeObject.pointer, faceParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private long getPixelBox_void(long pNativeObject);
	public com.earthview.world.graphic.PixelBox getPixelBox()
	{
		long returnValue = getPixelBox_void(this.nativeObject.pointer);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private void freeMemory_void(long pNativeObject);
	/// Delete all the memory held by this image, if owned by this image (not dynamic)
	public void freeMemory()
	{
		freeMemory_void(this.nativeObject.pointer);
	}
	public enum Filter implements INativeEnum<Filter> {
		FILTER_NEAREST(FilterHelper.ENUM_VALUES[0]),
		FILTER_LINEAR(FilterHelper.ENUM_VALUES[1]),
		FILTER_BILINEAR(FilterHelper.ENUM_VALUES[2]),
		FILTER_BOX(FilterHelper.ENUM_VALUES[3]),
		FILTER_TRIANGLE(FilterHelper.ENUM_VALUES[4]),
		FILTER_BICUBIC(FilterHelper.ENUM_VALUES[5]);
		private int value;
		Filter(int i) {
			this.value = i;
		}
		public Filter getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Filter toEnum(int retval) {
			if(retval == FILTER_NEAREST.value){
				return FILTER_NEAREST;
			}
			else if(retval == FILTER_LINEAR.value){
				return FILTER_LINEAR;
			}
			else if(retval == FILTER_BILINEAR.value){
				return FILTER_BILINEAR;
			}
			else if(retval == FILTER_BOX.value){
				return FILTER_BOX;
			}
			else if(retval == FILTER_TRIANGLE.value){
				return FILTER_TRIANGLE;
			}
			else if(retval == FILTER_BICUBIC.value){
				return FILTER_BICUBIC;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class FilterHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static void scale_CPixelBox_CPixelBox_Filter(long src, long dst, int filter);
	public static void scale(com.earthview.world.graphic.PixelBox src, com.earthview.world.graphic.PixelBox dst, com.earthview.world.graphic.Image.Filter filter)
	{
		long srcParamValue = src.nativeObject.pointer;
		long dstParamValue = dst.nativeObject.pointer;
		int filterParamValue = filter.getValue();
		scale_CPixelBox_CPixelBox_Filter(srcParamValue, dstParamValue, filterParamValue);
	}
	native private static void scale_CPixelBox_CPixelBox(long src, long dst);
	public static void scale(com.earthview.world.graphic.PixelBox src, com.earthview.world.graphic.PixelBox dst)
	{
		long srcParamValue = src.nativeObject.pointer;
		long dstParamValue = dst.nativeObject.pointer;
		scale_CPixelBox_CPixelBox(srcParamValue, dstParamValue);
	}
	native private void resize_ev_uint16_ev_uint16_Filter(long pNativeObject, int width, int height, int filter);
	public void resize(int width, int height, com.earthview.world.graphic.Image.Filter filter)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		int filterParamValue = filter.getValue();
		resize_ev_uint16_ev_uint16_Filter(this.nativeObject.pointer, widthParamValue, heightParamValue, filterParamValue);
	}
	native private void resize_ev_uint16_ev_uint16(long pNativeObject, int width, int height);
	public void resize(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		resize_ev_uint16_ev_uint16(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private static long calculateSize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(long mipmaps, long faces, long width, long height, long depth, int format);
	/// Static function to calculate size in bytes from the number of mipmaps, faces and the dimensions
	public static long calculateSize(long mipmaps, long faces, long width, long height, long depth, com.earthview.world.graphic.PixelFormat format)
	{
		long mipmapsParamValue = mipmaps;
		long facesParamValue = faces;
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int formatParamValue = format.getValue();
		long returnValue = calculateSize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(mipmapsParamValue, facesParamValue, widthParamValue, heightParamValue, depthParamValue, formatParamValue);
		return returnValue;
	}
	native private static String getFileExtFromMagic_DataStreamPtr(long stream);
	/// Static function to get an image type string from a stream via magic numbers
	public static String getFileExtFromMagic(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String returnValue = getFileExtFromMagic_DataStreamPtr(streamParamValue);
		return returnValue;
	}
	public Image(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Image(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Image fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Image obj = null;
 		if(baseObj instanceof Image)
		{
			obj = (Image)baseObj;
		} else {
			obj = new Image(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImage");
			obj.increaseCast();
		}

		return obj;
	}
}
