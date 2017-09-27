package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView数据交换驱动2继承自CEarthViewDataDriver针对导入数据格式点线面在一个图层进行相应修改，导入时创建多个要素集
 */
public class EarthViewDataDriver2 extends com.earthview.world.spatial.convertor.EarthViewDataDriver {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2", new EarthViewDataDriver2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCEarthViewDataDriver2Proxy", new EarthViewDataDriver2ClassFactory());
	}

	protected  long parseFeatureClass_CDataStream_ev_int64_callback(long stream, long skipedCount)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		long skipedCountParamValue = skipedCount;
		com.earthview.world.spatial2d.geodataset.VectorFeatureClass returnValue = parseFeatureClass(streamParamValue, skipedCountParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long parseFeatureClass_CDataStream_ev_int64(long pNativeObject, long stream, long skipedCount);
	public com.earthview.world.spatial2d.geodataset.VectorFeatureClass parseFeatureClass(com.earthview.world.core.DataStream stream, long skipedCount)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long skipedCountParamValue = skipedCount;
		long returnValue = parseFeatureClass_CDataStream_ev_int64(this.nativeObject.pointer, streamParamValue, skipedCountParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.VectorFeatureClass __returnValue = new com.earthview.world.spatial2d.geodataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate, "CVectorFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.VectorFeatureClass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorFeatureClass");
		}
		return __returnValue;
	}
	native private long parseFeatureClass_CDataStream_ev_int64_NoVirtual(long pNativeObject, long stream, long skipedCount);
	protected com.earthview.world.spatial2d.geodataset.VectorFeatureClass parseFeatureClass_NoVirtual(com.earthview.world.core.DataStream stream, long skipedCount)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long skipedCountParamValue = skipedCount;
		long returnValue = parseFeatureClass_CDataStream_ev_int64_NoVirtual(this.nativeObject.pointer, streamParamValue, skipedCountParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.VectorFeatureClass __returnValue = new com.earthview.world.spatial2d.geodataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate, "CVectorFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.VectorFeatureClass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorFeatureClass");
		}
		return __returnValue;
	}

	native private int write_ev_uint32_CDataStream(long pNativeObject, long index, long stream);
	public int write(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = write_ev_uint32_CDataStream(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}
	native private int write_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long index, long stream);
	protected int write_NoVirtual(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = write_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}

	native private void close_void(long pNativeObject);
	/**
	 * 关闭数据驱动
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void close_void_NoVirtual(long pNativeObject);
	protected void close_NoVirtual()
	{
		close_void_NoVirtual(this.nativeObject.pointer);
	}

	public EarthViewDataDriver2(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EarthViewDataDriver2(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 写入数据完成
	 */
	public void finishWrite()
	{
		super.finishWrite_NoVirtual();
	}
	/**
	 * 当前数据驱动是否支持读操作
	 * @return 支持读操作返回true，否则返回false
	 */
	public boolean canRead()
	{
		return super.canRead_NoVirtual();
	}
	/**
	 * 当前数据驱动是否支持写操作
	 * @return 支持写操作返回true，否则返回false
	 */
	public boolean canWrite()
	{
		return super.canWrite_NoVirtual();
	}
	/**
	 * 读取第n个索引的要素
	 * @param index 要素索引
	 * @param stream 格式化的要素数据流
	 * @return 操作结果状态
	 */
	public int read(long index, com.earthview.world.core.DataStream stream)
	{
		return super.read_NoVirtual(index, stream);
	}
	/**
	 * 打开数据驱动
	 * @param pPropertySet 数据集参数信息
	 * @param mode 操作模式
	 * @param param 转换参数
	 * @param featurecount 总要素数
	 * @param stream 数据结构
	 * @return 操作结果状态
	 */
	public int open(com.earthview.world.spatial.geodataset.Ipropertyset pPropertySet, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer featurecount, com.earthview.world.core.DataStream stream)
	{
		return super.open_NoVirtual(pPropertySet, mode, ref_param, featurecount, stream);
	}
	/**
	 * 打开数据驱动
	 * @param pDataSource 数据源
	 * @param datasetname 数据集名称
	 * @param mode 操作模式
	 * @param param 转换参数
	 * @param featurecount 总要素数
	 * @param stream 数据结构
	 * @return 操作结果状态
	 */
	public int open(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String datasetName, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer featurecount, com.earthview.world.core.DataStream stream)
	{
		return super.open_NoVirtual(ref_dataSource, datasetName, mode, ref_param, featurecount, stream);
	}
	
	native protected void register_parseFeatureClass_CDataStream_ev_int64(long pNativeObject, String method);
	native protected void register_finishWrite_void(long pNativeObject, String method);
	native protected void register_close_void(long pNativeObject, String method);
	native protected void register_canRead_void(long pNativeObject, String method);
	native protected void register_canWrite_void(long pNativeObject, String method);
	native protected void register_read_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_write_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_parseFeatureClass_CDataStream_ev_int64(this.nativeObject.pointer, "parseFeatureClass_CDataStream_ev_int64_callback");
			this.register_finishWrite_void(this.nativeObject.pointer, "finishWrite_void_callback");
			this.register_close_void(this.nativeObject.pointer, "close_void_callback");
			this.register_canRead_void(this.nativeObject.pointer, "canRead_void_callback");
			this.register_canWrite_void(this.nativeObject.pointer, "canWrite_void_callback");
			this.register_read_ev_uint32_CDataStream(this.nativeObject.pointer, "read_ev_uint32_CDataStream_callback");
			this.register_write_ev_uint32_CDataStream(this.nativeObject.pointer, "write_ev_uint32_CDataStream_callback");
			this.register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, "open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
			this.register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, "open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
		}
	}
	
	public static EarthViewDataDriver2 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EarthViewDataDriver2 obj = null;
 		if(baseObj instanceof EarthViewDataDriver2)
		{
			obj = (EarthViewDataDriver2)baseObj;
		} else {
			obj = new EarthViewDataDriver2(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEarthViewDataDriver2");
			obj.increaseCast();
		}

		return obj;
	}
}
