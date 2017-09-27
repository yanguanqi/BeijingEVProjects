package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 解压7z压缩数据类
 */
public class Decode extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CDecode", new DecodeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Decode() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDecode", null);
	}

	native private static long decode_7z_MemoryDataStreamPtr(long instream_7z);
	/**
	 * 解压7z压缩文件
	 * @param instream_7z 7z压缩文件的内存流智能指针
	 * @return 解压出文件对应的内存流的智能指针,文件名通过getName获得
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr decode_7z(com.earthview.world.core.MemoryDataStreamPtr instream_7z)
	{
		long instream_7zParamValue = instream_7z.nativeObject.pointer;
		long returnValue = decode_7z_MemoryDataStreamPtr(instream_7zParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long decode_7z_CMemoryDataStream(long instream_7z);
	/**
	 * 解压7z压缩文件
	 * @param instream_7z 7z压缩文件的内存流指针
	 * @return 解压出文件对应的内存流的智能指针,文件名通过getName获得
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr decode_7z(com.earthview.world.core.MemoryDataStream instream_7z)
	{
		long instream_7zParamValue = (instream_7z == null ? 0L : instream_7z.nativeObject.pointer);
		long returnValue = decode_7z_CMemoryDataStream(instream_7zParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long decode_7z_stream_MemoryDataStreamPtr(long instream_7z);
	/**
	 * 解压7z压缩流
	 * @param instream_7z 7z压缩流的内存流智能指针
	 * @return 解压结果对应的内存流的智能指针
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr decode_7z_stream(com.earthview.world.core.MemoryDataStreamPtr instream_7z)
	{
		long instream_7zParamValue = instream_7z.nativeObject.pointer;
		long returnValue = decode_7z_stream_MemoryDataStreamPtr(instream_7zParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long decode_7z_stream_CMemoryDataStream(long instream_7z);
	/**
	 * 解压7z压缩流
	 * @param instream_7z 7z压缩流的内存流指针
	 * @return 解压结果对应的内存流的智能指针
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr decode_7z_stream(com.earthview.world.core.MemoryDataStream instream_7z)
	{
		long instream_7zParamValue = (instream_7z == null ? 0L : instream_7z.nativeObject.pointer);
		long returnValue = decode_7z_stream_CMemoryDataStream(instream_7zParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long encode_7z_archive_MemoryDataStreamPtr(long instream);
	/**
	 * 压缩成7z流
	 * @param instream 原始数据
	 * @return 压缩后的数据
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr encode_7z_archive(com.earthview.world.core.MemoryDataStreamPtr instream)
	{
		long instreamParamValue = instream.nativeObject.pointer;
		long returnValue = encode_7z_archive_MemoryDataStreamPtr(instreamParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long decode_7z_archive_MemoryDataStreamPtr(long instream_7z);
	/**
	 * 解压7z压缩流
	 * @param instream_7z 7z压缩流的内存流智能指针
	 * @return 解压结果对应的内存流的智能指针
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr decode_7z_archive(com.earthview.world.core.MemoryDataStreamPtr instream_7z)
	{
		long instream_7zParamValue = instream_7z.nativeObject.pointer;
		long returnValue = decode_7z_archive_MemoryDataStreamPtr(instream_7zParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static boolean is7zMemoryArchive_MemoryDataStreamPtr(long instream_7z);
	/**
	 * 判断所给流是否为7z内存流
	 * @param instream_7z 原始数据
	 */
	public static boolean is7zMemoryArchive(com.earthview.world.core.MemoryDataStreamPtr instream_7z)
	{
		long instream_7zParamValue = instream_7z.nativeObject.pointer;
		boolean returnValue = is7zMemoryArchive_MemoryDataStreamPtr(instream_7zParamValue);
		return returnValue;
	}
	native private static long encode_7z_archive_ForBatch_MemoryDataStreamPtr(long instream);
	/**
	 * 压缩成7z流，只初始化一次7z的内存，下次再压缩不再申请内存，但也不释放，需要显示调用clearMemForBatch释放
	 * @param instream 原始数据
	 * @return 压缩后的数据
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr encode_7z_archive_ForBatch(com.earthview.world.core.MemoryDataStreamPtr instream)
	{
		long instreamParamValue = instream.nativeObject.pointer;
		long returnValue = encode_7z_archive_ForBatch_MemoryDataStreamPtr(instreamParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static void clearMemForBatch_void();
	/**
	 * 释放初始内存
	 */
	public static void clearMemForBatch()
	{
		clearMemForBatch_void();
	}
	public Decode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Decode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Decode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Decode obj = null;
 		if(baseObj instanceof Decode)
		{
			obj = (Decode)baseObj;
		} else {
			obj = new Decode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDecode");
			obj.increaseCast();
		}

		return obj;
	}
}
