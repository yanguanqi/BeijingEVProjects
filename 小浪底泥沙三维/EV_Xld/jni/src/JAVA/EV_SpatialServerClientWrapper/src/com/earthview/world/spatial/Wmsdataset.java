package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS数据集类
 */
public class Wmsdataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSDataset", new WmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSDatasetProxy", new WmsdatasetClassFactory());
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

	protected  long getEnvelopeRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelopeRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据包围盒信息
	 * @return 包围盒对象指针
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取图层信息
	 * @return 图层信息
	 */
	public com.earthview.world.spatial.Wmslayerinfo getLayerInfoRef()
	{
		long returnValue = getLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmslayerinfo __returnValue = new com.earthview.world.spatial.Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSLayerInfo");
		}
		return __returnValue;
	}
	native private long getServerInfoRef_void(long pNativeObject);
	/**
	 * 获取服务信息
	 * @return 服务信息
	 */
	public com.earthview.world.spatial.Wmsserverinfo getServerInfoRef()
	{
		long returnValue = getServerInfoRef_void(this.nativeObject.pointer);
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
	native private int getMap_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_EVString_COGCResult(long pNativeObject, String styles, String srs, long mapRect, long width, long height, String format, long result);
	/**
	 * 获取地图图片
	 * @param styles 风格
	 * @param srs 投影
	 * @param mapRect 数据范围
	 * @param width 图片宽
	 * @param height 图片高
	 * @param format 图片格式
	 * @param result 查询结果
	 * @return 操作结果
	 */
	public int getMap(String styles, String srs, com.earthview.world.spatial.geometry.Ienvelope mapRect, long width, long height, String format, com.earthview.world.spatial.Ogcresult result)
	{
		String stylesParamValue = styles;
		String srsParamValue = srs;
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		String formatParamValue = format;
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = getMap_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_EVString_COGCResult(this.nativeObject.pointer, stylesParamValue, srsParamValue, mapRectParamValue, widthParamValue, heightParamValue, formatParamValue, resultParamValue);
		return returnValue;
	}
	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 此图层下含有子图层数目
	 * @return 子图层数目
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int findLayer_EVString(long pNativeObject, String lyrName);
	/**
	 * 获取指定子图层索引
	 * @param lyrName 图层名称
	 * @return 子图层索引
	 */
	public int findLayer(String lyrName)
	{
		String lyrNameParamValue = lyrName;
		int returnValue = findLayer_EVString(this.nativeObject.pointer, lyrNameParamValue);
		return returnValue;
	}
	native private long openDataset_ev_uint32(long pNativeObject, long index);
	/**
	 * 打开指定子图层
	 * @param index 子图层索引
	 * @return 子图层
	 */
	public com.earthview.world.spatial.Wmsdataset openDataset(long index)
	{
		long indexParamValue = index;
		long returnValue = openDataset_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmsdataset __returnValue = new com.earthview.world.spatial.Wmsdataset(CreatedWhenConstruct.CWC_NotToCreate, "CWMSDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmsdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSDataset");
		}
		return __returnValue;
	}
	native private long getSubLayerInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定子图层的图层信息
	 * @param index 子图层索引
	 * @return 指定子图层的图层信息指针
	 */
	public com.earthview.world.spatial.Wmslayerinfo getSubLayerInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubLayerInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmslayerinfo __returnValue = new com.earthview.world.spatial.Wmslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMSLayerInfo");
		}
		return __returnValue;
	}
	native private int getFeatureInfo_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_uint32_EVString_COGCResult(long pNativeObject, String styles, String srs, long mapRect, long width, long height, long x, long y, String infoformat, long result);
	/**
	 * 获取指定要素
	 * @param styles 渲染风格
	 * @param srs 渲染投影
	 * @param mapRect 数据范围
	 * @param width 生成的图片宽度
	 * @param height 生成的图片高度y
	 * @param x 图片的像素坐标x
	 * @param y 图片的像素坐标y
	 * @param infoformat 生成的图片格式
	 * @param result 查询结果
	 * @return 操作结果
	 */
	public int getFeatureInfo(String styles, String srs, com.earthview.world.spatial.geometry.Ienvelope mapRect, long width, long height, long x, long y, String infoformat, com.earthview.world.spatial.Ogcresult result)
	{
		String stylesParamValue = styles;
		String srsParamValue = srs;
		long mapRectParamValue = (mapRect == null ? 0L : mapRect.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long xParamValue = x;
		long yParamValue = y;
		String infoformatParamValue = infoformat;
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = getFeatureInfo_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_uint32_EVString_COGCResult(this.nativeObject.pointer, stylesParamValue, srsParamValue, mapRectParamValue, widthParamValue, heightParamValue, xParamValue, yParamValue, infoformatParamValue, resultParamValue);
		return returnValue;
	}
	native private void setBackColor_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, int r, int g, int b, boolean trans);
	/**
	 * 获取背景颜色
	 * @param r red
	 * @param g green
	 * @param b blue
	 * @param trans 透明与否
	 */
	public void setBackColor(int r, int g, int b, boolean trans)
	{
		int rParamValue = r;
		int gParamValue = g;
		int bParamValue = b;
		boolean transParamValue = trans;
		setBackColor_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, transParamValue);
	}
	native private void getBackColor_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, long r, long g, long b, long trans);
	/**
	 * 获取背景颜色
	 * @param r red
	 * @param g green
	 * @param b blue
	 * @param trans 透明与否
	 */
	public void getBackColor(IntegerPointer r, IntegerPointer g, IntegerPointer b, BooleanPointer trans)
	{
		long rParamValue = r.nativeObject.pointer;
		long gParamValue = g.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long transParamValue = trans.nativeObject.pointer;
		getBackColor_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, transParamValue);
	}
	native private void clearBackColor_void(long pNativeObject);
	/**
	 * 清除背景颜色设置
	 */
	public void clearBackColor()
	{
		clearBackColor_void(this.nativeObject.pointer);
	}
	native private void setElevation_EVString(long pNativeObject, String elevation);
	/**
	 * 设置高程信息
	 * @param elevation 高程信息
	 */
	public void setElevation(String elevation)
	{
		String elevationParamValue = elevation;
		setElevation_EVString(this.nativeObject.pointer, elevationParamValue);
	}
	native private long getElevation_void(long pNativeObject);
	/**
	 * 获取高程信息
	 * @return 高程信息
	 */
	public StringPointer getElevation()
	{
		long returnValue = getElevation_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTime_EVString(long pNativeObject, String datatime);
	/**
	 * 设置时间信息
	 * @param datatime 时间信息
	 */
	public void setTime(String datatime)
	{
		String datatimeParamValue = datatime;
		setTime_EVString(this.nativeObject.pointer, datatimeParamValue);
	}
	native private long getTime_void(long pNativeObject);
	/**
	 * 获取时间信息
	 * @return 时间信息
	 */
	public StringPointer getTime()
	{
		long returnValue = getTime_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFormatCount_void(long pNativeObject);
	/**
	 * 获取图片格式数目
	 * @return 图片格式数目
	 */
	public long getFormatCount()
	{
		long returnValue = getFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片格式
	 * @param index 索引
	 * @return 指定图片格式
	 */
	public String getFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getInfoFormatCount_void(long pNativeObject);
	/**
	 * 获取要素格式数目
	 * @return 要素格式数目
	 */
	public long getInfoFormatCount()
	{
		long returnValue = getInfoFormatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getInfoFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定要素格式
	 * @param index 索引
	 * @return 指定要素格式
	 */
	public String getInfoFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getInfoFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setReturnFeatureCount_ev_uint32(long pNativeObject, long featureCount);
	/**
	 * 设置每次返回要素数目
	 * @param featureCount 每次返回要素数目
	 */
	public void setReturnFeatureCount(long featureCount)
	{
		long featureCountParamValue = featureCount;
		setReturnFeatureCount_ev_uint32(this.nativeObject.pointer, featureCountParamValue);
	}
	native private long getReturnFeatureCount_void(long pNativeObject);
	/// <summary>
	/// 获取每次返回要素数目
	/// </summary
	/// <returns>每次返回要素数目</returns>
	public long getReturnFeatureCount()
	{
		long returnValue = getReturnFeatureCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getExceptionFormat_void(long pNativeObject);
	/**
	 * 获取返回的异常消息格式数目
	 */
	public long getExceptionFormat()
	{
		long returnValue = getExceptionFormat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getExceptionFormat_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的异常格式
	 * @param index 索引
	 * @return 指定异常格式
	 */
	public String getExceptionFormat(long index)
	{
		long indexParamValue = index;
		String returnValue = getExceptionFormat_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getUsedExceptionFormatForGetMap_void(long pNativeObject);
	/**
	 * 获取当前GetMap异常消息格式
	 * @return 异常消息格式
	 */
	public StringPointer getUsedExceptionFormatForGetMap()
	{
		long returnValue = getUsedExceptionFormatForGetMap_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setUsedExceptionFormatForGetMap_EVString(long pNativeObject, String format);
	/**
	 * 设置当前GetMap函数异常消息格式
	 * @param format 异常消息格式
	 */
	public void setUsedExceptionFormatForGetMap(String format)
	{
		String formatParamValue = format;
		setUsedExceptionFormatForGetMap_EVString(this.nativeObject.pointer, formatParamValue);
	}
	native private long getUsedExceptionFormatForGetFeatureInfo_void(long pNativeObject);
	/**
	 * 获取当前GetFeatureInfo函数返回的异常信息格式
	 * @return 异常信息格式
	 */
	public StringPointer getUsedExceptionFormatForGetFeatureInfo()
	{
		long returnValue = getUsedExceptionFormatForGetFeatureInfo_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setUsedExceptionFormatForGetFeatureInfo_EVString(long pNativeObject, String format);
	/**
	 * 设置当前GetFeatureInfo函数返回的异常信息格式
	 * @param format 异常信息格式
	 */
	public void setUsedExceptionFormatForGetFeatureInfo(String format)
	{
		String formatParamValue = format;
		setUsedExceptionFormatForGetFeatureInfo_EVString(this.nativeObject.pointer, formatParamValue);
	}
	public Wmsdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmsdataset(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
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
	
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
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
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
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
	
	public static Wmsdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmsdataset obj = null;
 		if(baseObj instanceof Wmsdataset)
		{
			obj = (Wmsdataset)baseObj;
		} else {
			obj = new Wmsdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMSDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
