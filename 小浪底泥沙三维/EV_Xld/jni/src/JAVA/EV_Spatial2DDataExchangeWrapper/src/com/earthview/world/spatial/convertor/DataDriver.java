package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类
 */
public class DataDriver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataDriver", new DataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataDriverProxy", new DataDriverClassFactory());
	}

	protected  void finishWrite_void_callback()
	{
		finishWrite();
	}

	native private void finishWrite_void(long pNativeObject);
	/**
	 * 写入数据完成
	 */
	public void finishWrite()
	{
		finishWrite_void(this.nativeObject.pointer);
	}
	native private void finishWrite_void_NoVirtual(long pNativeObject);
	protected void finishWrite_NoVirtual()
	{
		finishWrite_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void close_void_callback()
	{
		close();
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

	protected  boolean canRead_void_callback()
	{
		boolean returnValue = canRead();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canRead_void(long pNativeObject);
	/**
	 * 当前数据驱动是否支持读操作
	 * @return 支持读操作返回true，否则返回false
	 */
	public boolean canRead()
	{
		boolean returnValue = canRead_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canRead_void_NoVirtual(long pNativeObject);
	protected boolean canRead_NoVirtual()
	{
		boolean returnValue = canRead_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canWrite_void_callback()
	{
		boolean returnValue = canWrite();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canWrite_void(long pNativeObject);
	/**
	 * 当前数据驱动是否支持写操作
	 * @return 支持写操作返回true，否则返回false
	 */
	public boolean canWrite()
	{
		boolean returnValue = canWrite_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canWrite_void_NoVirtual(long pNativeObject);
	protected boolean canWrite_NoVirtual()
	{
		boolean returnValue = canWrite_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int read_ev_uint32_CDataStream_callback(long index, long stream)
	{
		long indexParamValue = index;
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
		int returnValue = read(indexParamValue, streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int read_ev_uint32_CDataStream(long pNativeObject, long index, long stream);
	/**
	 * 读取第n个索引的要素
	 * @param index 要素索引
	 * @param stream 格式化的要素数据流
	 * @return 操作结果状态
	 */
	public int read(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = read_ev_uint32_CDataStream(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}
	native private int read_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long index, long stream);
	protected int read_NoVirtual(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = read_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}

	protected  int write_ev_uint32_CDataStream_callback(long index, long stream)
	{
		long indexParamValue = index;
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
		int returnValue = write(indexParamValue, streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int write_ev_uint32_CDataStream(long pNativeObject, long index, long stream);
	/**
	 * 写入第n个索引的要素
	 * @param index 要素索引
	 * @param stream 格式化的要素数据流
	 * @return 操作结果状态
	 */
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

	protected  int open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(long pPropertySet, int mode, long ref_param, long featurecount, long stream)
	{
		com.earthview.world.spatial.geodataset.Ipropertyset pPropertySetParamValue = (pPropertySet == 0L ? null : new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPropertySetParamValue != null)
		{
		pPropertySetParamValue.setDelegate(true);
		pPropertySetParamValue.setInstancePointer(new InstancePointer(pPropertySet));
		IClassFactory pPropertySetParamValueClassFactory = GlobalClassFactoryMap.get(pPropertySetParamValue.getCppInstanceTypeName());
		if (pPropertySetParamValueClassFactory != null)
		{
			pPropertySetParamValue.setDelegate(true);
			pPropertySetParamValue = (com.earthview.world.spatial.geodataset.Ipropertyset)pPropertySetParamValueClassFactory.create();
			pPropertySetParamValue.setDelegate(true);
			pPropertySetParamValue.setInstancePointer(new InstancePointer(pPropertySet));
		}
		}
		com.earthview.world.spatial.convertor.EVDataExchangeOperateMode modeParamValue = com.earthview.world.spatial.convertor.EVDataExchangeOperateMode.toEnum(mode);
		com.earthview.world.spatial.convertor.DataExchangeParam ref_paramParamValue = (ref_param == 0L ? null : new com.earthview.world.spatial.convertor.DataExchangeParam(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_paramParamValue != null)
		{
		ref_paramParamValue.setDelegate(true);
		ref_paramParamValue.setInstancePointer(new InstancePointer(ref_param));
		IClassFactory ref_paramParamValueClassFactory = GlobalClassFactoryMap.get(ref_paramParamValue.getCppInstanceTypeName());
		if (ref_paramParamValueClassFactory != null)
		{
			ref_paramParamValue.setDelegate(true);
			ref_paramParamValue = (com.earthview.world.spatial.convertor.DataExchangeParam)ref_paramParamValueClassFactory.create();
			ref_paramParamValue.setDelegate(true);
			ref_paramParamValue.setInstancePointer(new InstancePointer(ref_param));
		}
		}
		UIntegerPointer featurecountParamValue = new UIntegerPointer(new InstancePointer(featurecount));
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
		int returnValue = open(pPropertySetParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, long pPropertySet, int mode, long ref_param, long featurecount, long stream);
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
		long pPropertySetParamValue = (pPropertySet == null ? 0L : pPropertySet.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long featurecountParamValue = featurecount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, pPropertySetParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		return returnValue;
	}
	native private int open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long pPropertySet, int mode, long ref_param, long featurecount, long stream);
	protected int open_NoVirtual(com.earthview.world.spatial.geodataset.Ipropertyset pPropertySet, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer featurecount, com.earthview.world.core.DataStream stream)
	{
		long pPropertySetParamValue = (pPropertySet == null ? 0L : pPropertySet.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long featurecountParamValue = featurecount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, pPropertySetParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		return returnValue;
	}

	protected  int open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(long ref_dataSource, String datasetName, int mode, long ref_param, long featurecount, long stream)
	{
		com.earthview.world.spatial.geodataset.Idatasource ref_dataSourceParamValue = (ref_dataSource == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_dataSourceParamValue != null)
		{
		ref_dataSourceParamValue.setDelegate(true);
		ref_dataSourceParamValue.setInstancePointer(new InstancePointer(ref_dataSource));
		IClassFactory ref_dataSourceParamValueClassFactory = GlobalClassFactoryMap.get(ref_dataSourceParamValue.getCppInstanceTypeName());
		if (ref_dataSourceParamValueClassFactory != null)
		{
			ref_dataSourceParamValue.setDelegate(true);
			ref_dataSourceParamValue = (com.earthview.world.spatial.geodataset.Idatasource)ref_dataSourceParamValueClassFactory.create();
			ref_dataSourceParamValue.setDelegate(true);
			ref_dataSourceParamValue.setInstancePointer(new InstancePointer(ref_dataSource));
		}
		}
		String datasetNameParamValue = datasetName;
		com.earthview.world.spatial.convertor.EVDataExchangeOperateMode modeParamValue = com.earthview.world.spatial.convertor.EVDataExchangeOperateMode.toEnum(mode);
		com.earthview.world.spatial.convertor.DataExchangeParam ref_paramParamValue = (ref_param == 0L ? null : new com.earthview.world.spatial.convertor.DataExchangeParam(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_paramParamValue != null)
		{
		ref_paramParamValue.setDelegate(true);
		ref_paramParamValue.setInstancePointer(new InstancePointer(ref_param));
		IClassFactory ref_paramParamValueClassFactory = GlobalClassFactoryMap.get(ref_paramParamValue.getCppInstanceTypeName());
		if (ref_paramParamValueClassFactory != null)
		{
			ref_paramParamValue.setDelegate(true);
			ref_paramParamValue = (com.earthview.world.spatial.convertor.DataExchangeParam)ref_paramParamValueClassFactory.create();
			ref_paramParamValue.setDelegate(true);
			ref_paramParamValue.setInstancePointer(new InstancePointer(ref_param));
		}
		}
		UIntegerPointer featurecountParamValue = new UIntegerPointer(new InstancePointer(featurecount));
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
		int returnValue = open(ref_dataSourceParamValue, datasetNameParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, long ref_dataSource, String datasetName, int mode, long ref_param, long featurecount, long stream);
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
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long featurecountParamValue = featurecount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, ref_dataSourceParamValue, datasetNameParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		return returnValue;
	}
	native private int open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long ref_dataSource, String datasetName, int mode, long ref_param, long featurecount, long stream);
	protected int open_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String datasetName, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer featurecount, com.earthview.world.core.DataStream stream)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long featurecountParamValue = featurecount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, ref_dataSourceParamValue, datasetNameParamValue, modeParamValue, ref_paramParamValue, featurecountParamValue, streamParamValue);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据驱动类型
	 * @return 数据驱动类型
	 */
	public com.earthview.world.spatial.convertor.EVDataDriverType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.convertor.EVDataDriverType.toEnum(returnValue);
	}
	native private long getListener_void(long pNativeObject);
	public com.earthview.world.spatial.convertor.Idataexchangelistener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.Idataexchangelistener __returnValue = new com.earthview.world.spatial.convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate, "IDataExchangeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.Idataexchangelistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataExchangeListener");
		}
		return __returnValue;
	}
	native private void setListener_IDataExchangeListener(long pNativeObject, long pListener);
	public void setListener(com.earthview.world.spatial.convertor.Idataexchangelistener pListener)
	{
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		setListener_IDataExchangeListener(this.nativeObject.pointer, pListenerParamValue);
	}
	public DataDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static DataDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataDriver obj = null;
 		if(baseObj instanceof DataDriver)
		{
			obj = (DataDriver)baseObj;
		} else {
			obj = new DataDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
