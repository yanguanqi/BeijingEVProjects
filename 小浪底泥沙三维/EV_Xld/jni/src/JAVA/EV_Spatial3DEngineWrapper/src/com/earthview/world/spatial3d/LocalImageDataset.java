package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalImageDataset extends com.earthview.world.spatial.Evwmtsdataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CLocalImageDataset", new LocalImageDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCLocalImageDatasetProxy", new LocalImageDatasetClassFactory());
	}

	protected  int getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback(String style, String format, int level, long row, long col, boolean getoriginformat, boolean gettime, long tileInfo)
	{
		String styleParamValue = style;
		String formatParamValue = format;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean getoriginformatParamValue = getoriginformat;
		boolean gettimeParamValue = gettime;
		com.earthview.world.spatial.Evtileinfo tileInfoParamValue = new com.earthview.world.spatial.Evtileinfo(CreatedWhenConstruct.CWC_NotToCreate);
		tileInfoParamValue.setDelegate(true);
		tileInfoParamValue.setInstancePointer(new InstancePointer(tileInfo));
		IClassFactory tileInfoParamValueClassFactory = GlobalClassFactoryMap.get(tileInfoParamValue.getCppInstanceTypeName());
		if (tileInfoParamValueClassFactory != null)
		{
			tileInfoParamValue.setDelegate(true);
			tileInfoParamValue = (com.earthview.world.spatial.Evtileinfo)tileInfoParamValueClassFactory.create();
			tileInfoParamValue.setDelegate(true);
			tileInfoParamValue.setInstancePointer(new InstancePointer(tileInfo));
		}
		int returnValue = getTile(styleParamValue, formatParamValue, levelParamValue, rowParamValue, colParamValue, getoriginformatParamValue, gettimeParamValue, tileInfoParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(long pNativeObject, String style, String format, int level, long row, long col, boolean getoriginformat, boolean gettime, long tileInfo);
	/**
	 * 获取瓦片
	 * @param style 渲染风格
	 * @param format 瓦片格式
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 * @param getoriginformat true表示获取对应瓦片的原始格式信息
	 * @param gettime true表示获取对应瓦片的时间信息
	 * @param tileInfo 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getTile(String style, String format, int level, long row, long col, boolean getoriginformat, boolean gettime, com.earthview.world.spatial.Evtileinfo tileInfo)
	{
		String styleParamValue = style;
		String formatParamValue = format;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean getoriginformatParamValue = getoriginformat;
		boolean gettimeParamValue = gettime;
		long tileInfoParamValue = tileInfo.nativeObject.pointer;
		int returnValue = getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(this.nativeObject.pointer, styleParamValue, formatParamValue, levelParamValue, rowParamValue, colParamValue, getoriginformatParamValue, gettimeParamValue, tileInfoParamValue);
		return returnValue;
	}
	native private int getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_NoVirtual(long pNativeObject, String style, String format, int level, long row, long col, boolean getoriginformat, boolean gettime, long tileInfo);
	protected int getTile_NoVirtual(String style, String format, int level, long row, long col, boolean getoriginformat, boolean gettime, com.earthview.world.spatial.Evtileinfo tileInfo)
	{
		String styleParamValue = style;
		String formatParamValue = format;
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		boolean getoriginformatParamValue = getoriginformat;
		boolean gettimeParamValue = gettime;
		long tileInfoParamValue = tileInfo.nativeObject.pointer;
		int returnValue = getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_NoVirtual(this.nativeObject.pointer, styleParamValue, formatParamValue, levelParamValue, rowParamValue, colParamValue, getoriginformatParamValue, gettimeParamValue, tileInfoParamValue);
		return returnValue;
	}

	protected  int getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback(int level, long row, long col, String fieldname, long serverresult)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String fieldnameParamValue = fieldname;
		com.earthview.world.spatial.MemoryStreamResult serverresultParamValue = new com.earthview.world.spatial.MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
		serverresultParamValue.setDelegate(true);
		serverresultParamValue.setInstancePointer(new InstancePointer(serverresult));
		IClassFactory serverresultParamValueClassFactory = GlobalClassFactoryMap.get(serverresultParamValue.getCppInstanceTypeName());
		if (serverresultParamValueClassFactory != null)
		{
			serverresultParamValue.setDelegate(true);
			serverresultParamValue = (com.earthview.world.spatial.MemoryStreamResult)serverresultParamValueClassFactory.create();
			serverresultParamValue.setDelegate(true);
			serverresultParamValue.setInstancePointer(new InstancePointer(serverresult));
		}
		int returnValue = getTileProperty(levelParamValue, rowParamValue, colParamValue, fieldnameParamValue, serverresultParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(long pNativeObject, int level, long row, long col, String fieldname, long serverresult);
	/**
	 * 获取瓦片属性
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 * @param fieldname 字段名
	 * @param serverresult 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getTileProperty(int level, long row, long col, String fieldname, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String fieldnameParamValue = fieldname;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, fieldnameParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_NoVirtual(long pNativeObject, int level, long row, long col, String fieldname, long serverresult);
	protected int getTileProperty_NoVirtual(int level, long row, long col, String fieldname, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String fieldnameParamValue = fieldname;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, fieldnameParamValue, serverresultParamValue);
		return returnValue;
	}

	protected  int getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback(int level, long tilerow, long tilecol, int x, int y, String infoformat, long serverresult)
	{
		int levelParamValue = level;
		long tilerowParamValue = tilerow;
		long tilecolParamValue = tilecol;
		int xParamValue = x;
		int yParamValue = y;
		String infoformatParamValue = infoformat;
		com.earthview.world.spatial.MemoryStreamResult serverresultParamValue = new com.earthview.world.spatial.MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
		serverresultParamValue.setDelegate(true);
		serverresultParamValue.setInstancePointer(new InstancePointer(serverresult));
		IClassFactory serverresultParamValueClassFactory = GlobalClassFactoryMap.get(serverresultParamValue.getCppInstanceTypeName());
		if (serverresultParamValueClassFactory != null)
		{
			serverresultParamValue.setDelegate(true);
			serverresultParamValue = (com.earthview.world.spatial.MemoryStreamResult)serverresultParamValueClassFactory.create();
			serverresultParamValue.setDelegate(true);
			serverresultParamValue.setInstancePointer(new InstancePointer(serverresult));
		}
		int returnValue = getFeatureInfo(levelParamValue, tilerowParamValue, tilecolParamValue, xParamValue, yParamValue, infoformatParamValue, serverresultParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(long pNativeObject, int level, long tilerow, long tilecol, int x, int y, String infoformat, long serverresult);
	/**
	 * 查询某瓦片某像素点的几何要素的信息
	 * @param level 级别
	 * @param tilerow 行
	 * @param tilecol 列
	 * @param x 查询像素点x
	 * @param y 查询像素点y
	 * @param infoformat 返回数据格式
	 * @param serverresult 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getFeatureInfo(int level, long tilerow, long tilecol, int x, int y, String infoformat, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		int levelParamValue = level;
		long tilerowParamValue = tilerow;
		long tilecolParamValue = tilecol;
		int xParamValue = x;
		int yParamValue = y;
		String infoformatParamValue = infoformat;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(this.nativeObject.pointer, levelParamValue, tilerowParamValue, tilecolParamValue, xParamValue, yParamValue, infoformatParamValue, serverresultParamValue);
		return returnValue;
	}
	native private int getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_NoVirtual(long pNativeObject, int level, long tilerow, long tilecol, int x, int y, String infoformat, long serverresult);
	protected int getFeatureInfo_NoVirtual(int level, long tilerow, long tilecol, int x, int y, String infoformat, com.earthview.world.spatial.MemoryStreamResult serverresult)
	{
		int levelParamValue = level;
		long tilerowParamValue = tilerow;
		long tilecolParamValue = tilecol;
		int xParamValue = x;
		int yParamValue = y;
		String infoformatParamValue = infoformat;
		long serverresultParamValue = serverresult.nativeObject.pointer;
		int returnValue = getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_NoVirtual(this.nativeObject.pointer, levelParamValue, tilerowParamValue, tilecolParamValue, xParamValue, yParamValue, infoformatParamValue, serverresultParamValue);
		return returnValue;
	}

	protected  long getOGCWMTSCapabilitiesRef_void_callback()
	{
		com.earthview.world.spatial.Wmtsserverinfo returnValue = getOGCWMTSCapabilitiesRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOGCWMTSCapabilitiesRef_void(long pNativeObject);
	/**
	 * 获取OGC元数据对象
	 * @return OGC格式的源数据对象指针
	 */
	public com.earthview.world.spatial.Wmtsserverinfo getOGCWMTSCapabilitiesRef()
	{
		long returnValue = getOGCWMTSCapabilitiesRef_void(this.nativeObject.pointer);
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
	native private long getOGCWMTSCapabilitiesRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Wmtsserverinfo getOGCWMTSCapabilitiesRef_NoVirtual()
	{
		long returnValue = getOGCWMTSCapabilitiesRef_void_NoVirtual(this.nativeObject.pointer);
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

	protected  int getEVWMTSCapabilities_EVString_callback(long value)
	{
		StringPointer valueParamValue = new StringPointer(new InstancePointer(value));
		int returnValue = getEVWMTSCapabilities(valueParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getEVWMTSCapabilities_EVString(long pNativeObject, long value);
	/**
	 * 获取xml格式的EarthView元数据
	 * @param value 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getEVWMTSCapabilities(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getEVWMTSCapabilities_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int getEVWMTSCapabilities_EVString_NoVirtual(long pNativeObject, long value);
	protected int getEVWMTSCapabilities_NoVirtual(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = getEVWMTSCapabilities_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}

	protected  long getLayerInfoRef_void_callback()
	{
		com.earthview.world.spatial.Evwmtslayerinfo returnValue = getLayerInfoRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取EarthView元数据对象
	 * @return 元数据对象指针
	 */
	public com.earthview.world.spatial.Evwmtslayerinfo getLayerInfoRef()
	{
		long returnValue = getLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmtslayerinfo __returnValue = new com.earthview.world.spatial.Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMTSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmtslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMTSLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Evwmtslayerinfo getLayerInfoRef_NoVirtual()
	{
		long returnValue = getLayerInfoRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwmtslayerinfo __returnValue = new com.earthview.world.spatial.Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVWMTSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwmtslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWMTSLayerInfo");
		}
		return __returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取更新时间
	 * @return 更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getCacheDataType_void_callback()
	{
		com.earthview.world.spatial.EVSSCCacheDataType returnValue = getCacheDataType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getCacheDataType_void(long pNativeObject);
	/**
	 * 获取缓存数据类型
	 * @return vector/image/dem
	 */
	public com.earthview.world.spatial.EVSSCCacheDataType getCacheDataType()
	{
		int returnValue = getCacheDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheDataType.toEnum(returnValue);
	}
	native private int getCacheDataType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCCacheDataType getCacheDataType_NoVirtual()
	{
		int returnValue = getCacheDataType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCCacheDataType.toEnum(returnValue);
	}

	public LocalImageDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LocalImageDataset(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		return super.hasSubDataset_NoVirtual();
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
	
	native protected void register_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(long pNativeObject, String method);
	native protected void register_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(long pNativeObject, String method);
	native protected void register_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(long pNativeObject, String method);
	native protected void register_getOGCWMTSCapabilitiesRef_void(long pNativeObject, String method);
	native protected void register_getEVWMTSCapabilities_EVString(long pNativeObject, String method);
	native protected void register_getLayerInfoRef_void(long pNativeObject, String method);
	native protected void register_getCacheDataType_void(long pNativeObject, String method);
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
			this.register_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(this.nativeObject.pointer, "getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback");
			this.register_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(this.nativeObject.pointer, "getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback");
			this.register_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(this.nativeObject.pointer, "getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback");
			this.register_getOGCWMTSCapabilitiesRef_void(this.nativeObject.pointer, "getOGCWMTSCapabilitiesRef_void_callback");
			this.register_getEVWMTSCapabilities_EVString(this.nativeObject.pointer, "getEVWMTSCapabilities_EVString_callback");
			this.register_getLayerInfoRef_void(this.nativeObject.pointer, "getLayerInfoRef_void_callback");
			this.register_getCacheDataType_void(this.nativeObject.pointer, "getCacheDataType_void_callback");
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
	
	public static LocalImageDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LocalImageDataset obj = null;
 		if(baseObj instanceof LocalImageDataset)
		{
			obj = (LocalImageDataset)baseObj;
		} else {
			obj = new LocalImageDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLocalImageDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
