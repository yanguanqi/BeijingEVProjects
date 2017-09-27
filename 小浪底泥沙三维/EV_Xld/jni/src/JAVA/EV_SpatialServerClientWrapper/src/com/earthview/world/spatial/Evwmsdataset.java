package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

/**
 * EarthViewWMS数据集类从数据源获取的dataset是描述map，可以获取描述lyaer的子dataset
 */
public class Evwmsdataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSDataset", new EvwmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSDatasetProxy", new EvwmsdatasetClassFactory());
	}

	native private int getMap_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVSSCImageType_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(long pNativeObject, String layers, String styles, int srs, long maprect, long width, long height, int format, boolean transparent, int red, int green, int blue, String time, String elevation, long serverresult);
	/**
	 * 获取指定地图
	 * @param layers 图层
	 * @param styles 风格
	 * @param srs 投影
	 * @param maprect 范围
	 * @param width 图片宽
	 * @param height 图片高
	 * @param format 图片格式
	 * @param transparent true表示背景透明
	 * @param red 背景r值
	 * @param green 背景g值
	 * @param blue 背景b值
	 * @param time 时间，可为空
	 * @param elevation 高程，可为空
	 * @param serverresult 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getMap(String layers, String styles, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, com.earthview.world.spatial.EVSSCImageType format, boolean transparent, int red, int green, int blue, String time, String elevation, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layersParamValue = layers;
		String stylesParamValue = styles;
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		int formatParamValue = format.getValue();
		boolean transparentParamValue = transparent;
		int redParamValue = red;
		int greenParamValue = green;
		int blueParamValue = blue;
		String timeParamValue = time;
		String elevationParamValue = elevation;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getMap_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVSSCImageType_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(this.nativeObject.pointer, layersParamValue, stylesParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, formatParamValue, transparentParamValue, redParamValue, greenParamValue, blueParamValue, timeParamValue, elevationParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getFeatureInfo_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString(long pNativeObject, String layers, int srs, long maprect, long width, long height, long featurecount, int x, int y, long value);
	/**
	 * 获取指定要素信息
	 * @param layers 图层
	 * @param srs 投影
	 * @param maprect 范围
	 * @param width 图片宽
	 * @param height 图片高
	 * @param featurecount 返回的要素数目
	 * @param x 图片位置像素值x
	 * @param y 图片位置像素值y
	 * @param value 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getFeatureInfo(String layers, com.earthview.world.spatial.EVSSCSRS srs, com.earthview.world.spatial.geometry.Ienvelope maprect, long width, long height, long featurecount, int x, int y, StringPointer value)
	{
		String layersParamValue = layers;
		int srsParamValue = srs.getValue();
		long maprectParamValue = (maprect == null ? 0L : maprect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long featurecountParamValue = featurecount;
		int xParamValue = x;
		int yParamValue = y;
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getFeatureInfo_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString(this.nativeObject.pointer, layersParamValue, srsParamValue, maprectParamValue, widthParamValue, heightParamValue, featurecountParamValue, xParamValue, yParamValue, valueParamValue);
		return returnValue;
	}
	native private int getLayerLegend_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(long pNativeObject, String layer, long legendwidth, long legendheight, long serverresult);
	/**
	 * 获取图例
	 * @param layer 查询图层
	 * @param legendwidth 图例宽
	 * @param legendheight 图例高
	 * @param serverresult 结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getLayerLegend(String layer, long legendwidth, long legendheight, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		String layerParamValue = layer;
		long legendwidthParamValue = legendwidth;
		long legendheightParamValue = legendheight;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getLayerLegend_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(this.nativeObject.pointer, layerParamValue, legendwidthParamValue, legendheightParamValue, serverresultParamValue);
		return returnValue;
	}
	native private long getOGCWMSCapabilitiesRef_void(long pNativeObject);
	/**
	 * 获取OGC元数据对象
	 * @return OGC元数据对象指针
	 */
	public com.earthview.world.spatial.Wmsserverinfo getOGCWMSCapabilitiesRef()
	{
		long returnValue = getOGCWMSCapabilitiesRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmsserverinfo __returnValue = new com.earthview.world.spatial.Wmsserverinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSServerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmsserverinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSServerInfo");
		}
		return __returnValue;
	}
	native private int getEVWMSCapabilities_EVString(long pNativeObject, long value);
	/**
	 * 获取xml的EarthView元数据描述
	 * @param value 结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getEVWMSCapabilities(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getEVWMSCapabilities_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean isMapLayerDataset_void(long pNativeObject);
	/**
	 * /是否数据图层/
	 * @return false表示目录层，不能直接当作图层名获取getMap、getFeatureInfo、getLayerLegend等操作
	 */
	public boolean isMapLayerDataset()
	{
		boolean returnValue = isMapLayerDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取元数据信息，如果是mapDataset指针转成CEVWMSMapInfo,否则转成CEVMapLayerInfo
	 * @return 源数据对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getLayerInfoRef()
	{
		long returnValue = getLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private boolean hasSubDataset_void(long pNativeObject);
	/**
	 * 是否含有子数据集
	 * @return true表示含有
	 */
	public boolean hasSubDataset()
	{
		boolean returnValue = hasSubDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSubDataset_void_NoVirtual(long pNativeObject);
	protected boolean hasSubDataset_NoVirtual()
	{
		boolean returnValue = hasSubDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getSubDatasetCount_void(long pNativeObject);
	/**
	 * 获取子数据集数目
	 * @return 子数据集数目
	 */
	public long getSubDatasetCount()
	{
		long returnValue = getSubDatasetCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long openSubDataset_ev_uint32(long pNativeObject, long index);
	/**
	 * 打开子数据集，打开子数据集后不允许关闭父数据集，否则子数据集不可用
	 * @param index 索引
	 * @return 子数据集对象指针，需释放
	 */
	public com.earthview.world.spatial.Evwmsdataset openSubDataset(long index)
	{
		long indexParamValue = index;
		long returnValue = openSubDataset_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmsdataset __returnValue = new com.earthview.world.spatial.Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSDataset");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmsdataset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSDataset");
		}
		return __returnValue;
	}
	native private long openSubDataset_EVString(long pNativeObject, String datasetname);
	/**
	 * 打开子数据集，打开子数据集后不允许关闭父数据集，否则子数据集不可用
	 * @param datasetname 子数据集名称
	 * @return 子数据集对象指针，需释放
	 */
	public com.earthview.world.spatial.Evwmsdataset openSubDataset(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		long returnValue = openSubDataset_EVString(this.nativeObject.pointer, datasetnameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmsdataset __returnValue = new com.earthview.world.spatial.Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSDataset");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmsdataset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSDataset");
		}
		return __returnValue;
	}
	native private long getParentDatasetRef_void(long pNativeObject);
	/**
	 * 获取父数据集
	 * @return 父数据集对象指针
	 */
	public com.earthview.world.spatial.Evwmsdataset getParentDatasetRef()
	{
		long returnValue = getParentDatasetRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmsdataset __returnValue = new com.earthview.world.spatial.Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMSDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmsdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMSDataset");
		}
		return __returnValue;
	}
	native private String getDescription_void(long pNativeObject);
	/**
	 * /获取数据集描述/
	 * @return 描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Evwmsdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmsdataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		return super.getDataSourceRef_NoVirtual();
	}
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		return super.startEditing_NoVirtual(withUndo);
	}
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		return super.stopEditing_NoVirtual(isSave);
	}
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		return super.isBeginEditingOperation_NoVirtual();
	}
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		return super.beginEditingOperation_NoVirtual();
	}
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		return super.endEditingOperation_NoVirtual(isConfirm);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_hasSubDataset_void(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isBeginEditingOperation_void(long pNativeObject, String method);
	native protected void register_beginEditingOperation_void(long pNativeObject, String method);
	native protected void register_endEditingOperation_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_hasSubDataset_void(this.nativeObject.pointer, "hasSubDataset_void_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_isBeginEditingOperation_void(this.nativeObject.pointer, "isBeginEditingOperation_void_callback");
			this.register_beginEditingOperation_void(this.nativeObject.pointer, "beginEditingOperation_void_callback");
			this.register_endEditingOperation_ev_bool(this.nativeObject.pointer, "endEditingOperation_ev_bool_callback");
		}
	}
	
	public static Evwmsdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmsdataset obj = null;
 		if(baseObj instanceof Evwmsdataset)
		{
			obj = (Evwmsdataset)baseObj;
		} else {
			obj = new Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMSDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
