package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS数据集类
 */
public class Wmtsdataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSDataset", new WmtsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSDatasetProxy", new WmtsdatasetClassFactory());
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
	///获取包围盒
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
	public com.earthview.world.spatial.Wmtslayerinfo getLayerInfoRef()
	{
		long returnValue = getLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmtslayerinfo __returnValue = new com.earthview.world.spatial.Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMTSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmtslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMTSLayerInfo");
		}
		return __returnValue;
	}
	native private long getServerInfoRef_void(long pNativeObject);
	/**
	 * 获取服务信息
	 * @return 服务信息
	 */
	public com.earthview.world.spatial.Wmtsserverinfo getServerInfoRef()
	{
		long returnValue = getServerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Wmtsserverinfo __returnValue = new com.earthview.world.spatial.Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate, "CWMTSServerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wmtsserverinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWMTSServerInfo");
		}
		return __returnValue;
	}
	native private int getFeatureInfo_EVString_ev_uint32_ev_uint32_ev_real64_ev_real64_COGCResult(long pNativeObject, String tileMatrix, long row, long col, double x, double y, long result);
	/**
	 * 获取指定经纬度的要素
	 * @param tileMatrix tileMatrix名称
	 * @param row 瓦片行
	 * @param col 瓦片列
	 * @param x 地理坐标x
	 * @param y 地理坐标y
	 * @param result 查询结果
	 * @return 操作结果
	 */
	public int getFeatureInfo(String tileMatrix, long row, long col, double x, double y, com.earthview.world.spatial.Ogcresult result)
	{
		String tileMatrixParamValue = tileMatrix;
		long rowParamValue = row;
		long colParamValue = col;
		double xParamValue = x;
		double yParamValue = y;
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = getFeatureInfo_EVString_ev_uint32_ev_uint32_ev_real64_ev_real64_COGCResult(this.nativeObject.pointer, tileMatrixParamValue, rowParamValue, colParamValue, xParamValue, yParamValue, resultParamValue);
		return returnValue;
	}
	native private int getTile_EVString_ev_uint32_ev_uint32_COGCResult(long pNativeObject, String tileMatrix, long row, long col, long result);
	/**
	 * 获取指定瓦片
	 * @param tileMatrix tileMatrix名称
	 * @param row 瓦片行
	 * @param col 瓦片列
	 * @param result 查询结果
	 * @return 操作结果
	 */
	public int getTile(String tileMatrix, long row, long col, com.earthview.world.spatial.Ogcresult result)
	{
		String tileMatrixParamValue = tileMatrix;
		long rowParamValue = row;
		long colParamValue = col;
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = getTile_EVString_ev_uint32_ev_uint32_COGCResult(this.nativeObject.pointer, tileMatrixParamValue, rowParamValue, colParamValue, resultParamValue);
		return returnValue;
	}
	native private int getTile_EVString_ev_uint32_ev_uint32_COGCResult_ev_uint32(long pNativeObject, String tileMatrix, long row, long col, long result, long timeout_ms);
	public int getTile(String tileMatrix, long row, long col, com.earthview.world.spatial.Ogcresult result, long timeout_ms)
	{
		String tileMatrixParamValue = tileMatrix;
		long rowParamValue = row;
		long colParamValue = col;
		long resultParamValue = result.nativeObject.pointer;
		long timeout_msParamValue = timeout_ms;
		int returnValue = getTile_EVString_ev_uint32_ev_uint32_COGCResult_ev_uint32(this.nativeObject.pointer, tileMatrixParamValue, rowParamValue, colParamValue, resultParamValue, timeout_msParamValue);
		return returnValue;
	}
	native private long getTileMatrixSet_void(long pNativeObject);
	/**
	 * 获取TileMatrixSet名称
	 * @return TileMatrixSet名称
	 */
	public StringPointer getTileMatrixSet()
	{
		long returnValue = getTileMatrixSet_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTileMatrixSet_EVString(long pNativeObject, String tileMatrixSet);
	/**
	 * 设置TileMatrixSet名称
	 */
	public void setTileMatrixSet(String tileMatrixSet)
	{
		String tileMatrixSetParamValue = tileMatrixSet;
		setTileMatrixSet_EVString(this.nativeObject.pointer, tileMatrixSetParamValue);
	}
	native private long getDisplayStyle_void(long pNativeObject);
	/**
	 * 获取显示风格
	 * @return 显示风格
	 */
	public StringPointer getDisplayStyle()
	{
		long returnValue = getDisplayStyle_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDisplayStyle_EVString(long pNativeObject, String style);
	/**
	 * 设置显示风格
	 * @param style 风格
	 */
	public void setDisplayStyle(String style)
	{
		String styleParamValue = style;
		setDisplayStyle_EVString(this.nativeObject.pointer, styleParamValue);
	}
	native private long getFormat_void(long pNativeObject);
	/**
	 * 获取图片格式
	 * @return 图片格式
	 */
	public StringPointer getFormat()
	{
		long returnValue = getFormat_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFormat_EVString(long pNativeObject, String format);
	/**
	 * 设置图片格式
	 * @param format 图片格式
	 */
	public void setFormat(String format)
	{
		String formatParamValue = format;
		setFormat_EVString(this.nativeObject.pointer, formatParamValue);
	}
	native private long getInfoFormat_void(long pNativeObject);
	/**
	 * 获取要素返回格式
	 * @return 要素返回格式
	 */
	public StringPointer getInfoFormat()
	{
		long returnValue = getInfoFormat_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setInfoFormat_EVString(long pNativeObject, String infoformat);
	/**
	 * 设置要素返回格式
	 * @param infoformat 要素返回格式
	 */
	public void setInfoFormat(String infoformat)
	{
		String infoformatParamValue = infoformat;
		setInfoFormat_EVString(this.nativeObject.pointer, infoformatParamValue);
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

	public Wmtsdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmtsdataset(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Wmtsdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmtsdataset obj = null;
 		if(baseObj instanceof Wmtsdataset)
		{
			obj = (Wmtsdataset)baseObj;
		} else {
			obj = new Wmtsdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMTSDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
