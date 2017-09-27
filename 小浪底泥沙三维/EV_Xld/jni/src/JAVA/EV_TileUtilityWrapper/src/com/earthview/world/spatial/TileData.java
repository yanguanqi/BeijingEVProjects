package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片数据类
 */
public class TileData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileData", new TileDataClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TileData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileData", null);
	}

	native private long getTileInfo_void(long pNativeObject);
	/**
	 * 获取瓦片分块信息对象
	 * @return 分块信息对象的指针，不需释放
	 */
	public com.earthview.world.spatial.TileInfo getTileInfo()
	{
		long returnValue = getTileInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileInfo __returnValue = new com.earthview.world.spatial.TileInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileInfo");
		}
		return __returnValue;
	}
	native private void setTileInfo_CTileInfo(long pNativeObject, long ref_tileinfo);
	/**
	 * 设置瓦片分块信息
	 * @param tileinfo 瓦片分块信息
	 */
	public void setTileInfo(com.earthview.world.spatial.TileInfo ref_tileinfo)
	{
		long ref_tileinfoParamValue = (ref_tileinfo == null ? 0L : ref_tileinfo.nativeObject.pointer);
		setTileInfo_CTileInfo(this.nativeObject.pointer, ref_tileinfoParamValue);
	}
	native private void setData_EVString_DataStreamPtr(long pNativeObject, String strFileName, long stream);
	/**
	 * 设置瓦片信息
	 * @param strFileName 文件名称
	 * @param stream 瓦片数据流的智能指针
	 */
	public void setData(String strFileName, com.earthview.world.core.DataStreamPtr stream)
	{
		String strFileNameParamValue = strFileName;
		long streamParamValue = stream.nativeObject.pointer;
		setData_EVString_DataStreamPtr(this.nativeObject.pointer, strFileNameParamValue, streamParamValue);
	}
	native private void setData_DataStreamPtr(long pNativeObject, long stream);
	/**
	 * 设置瓦片数据流
	 * @param stream 瓦片数据的智能指针
	 */
	public void setData(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		setData_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private long getData_void(long pNativeObject);
	/**
	 * 获取瓦片数据流
	 * @return 瓦片数据流的智能指针
	 */
	public com.earthview.world.core.DataStreamPtr getData()
	{
		long returnValue = getData_void(this.nativeObject.pointer);
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
	native private long getThemeStream_void(long pNativeObject);
	/**
	 * 获取绘制瓦片时使用的专题图风格(针对矢量)
	 * @return 序列化之后的专题图风格
	 */
	public com.earthview.world.core.DataStreamPtr getThemeStream()
	{
		long returnValue = getThemeStream_void(this.nativeObject.pointer);
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
	native private void setThemeStream_DataStreamPtr(long pNativeObject, long theme);
	/**
	 * 设置绘制瓦片时使用的专题图风格(针对矢量)
	 * @return 序列化之后的专题图风格
	 */
	public void setThemeStream(com.earthview.world.core.DataStreamPtr theme)
	{
		long themeParamValue = theme.nativeObject.pointer;
		setThemeStream_DataStreamPtr(this.nativeObject.pointer, themeParamValue);
	}
	native private void setFileName_EVString(long pNativeObject, String strFileName);
	/**
	 * 设置瓦片文件名
	 * @param strFileName 瓦片标识
	 */
	public void setFileName(String strFileName)
	{
		String strFileNameParamValue = strFileName;
		setFileName_EVString(this.nativeObject.pointer, strFileNameParamValue);
	}
	native private long getFileName_void(long pNativeObject);
	/**
	 * 获取瓦片文件名
	 * @return 瓦片标识
	 */
	public StringPointer getFileName()
	{
		long returnValue = getFileName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setLayerName_EVString(long pNativeObject, String strLayerName);
	/**
	 * 设置瓦片数据所在的图层名
	 * @param strLayerName 图层名
	 */
	public void setLayerName(String strLayerName)
	{
		String strLayerNameParamValue = strLayerName;
		setLayerName_EVString(this.nativeObject.pointer, strLayerNameParamValue);
	}
	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取瓦片数据所在的图层名
	 * @return 图层名
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setStreamType_EVString(long pNativeObject, String strType);
	/**
	 * 设置数据流类型
	 * @param strType 数据流类型
	 */
	public void setStreamType(String strType)
	{
		String strTypeParamValue = strType;
		setStreamType_EVString(this.nativeObject.pointer, strTypeParamValue);
	}
	native private long getStreamType_void(long pNativeObject);
	/**
	 * 获取数据流类型
	 * @return 数据流类型
	 */
	public StringPointer getStreamType()
	{
		long returnValue = getStreamType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDefective_ev_bool(long pNativeObject, boolean defective);
	/**
	 * 设置瓦片是否有缺陷(黑边或者残缺)
	 * @param defective 
	 */
	public void setDefective(boolean defective)
	{
		boolean defectiveParamValue = defective;
		setDefective_ev_bool(this.nativeObject.pointer, defectiveParamValue);
	}
	native private boolean getDefective_void(long pNativeObject);
	/**
	 * 获取瓦片是否有缺陷(黑边或者残缺)
	 */
	public boolean getDefective()
	{
		boolean returnValue = getDefective_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addTileAttachment_ITileAttachmentPtr(long pNativeObject, long tileAttachment);
	/**
	 * 添加瓦片附属物
	 */
	public void addTileAttachment(com.earthview.world.spatial.Itileattachmentptr tileAttachment)
	{
		long tileAttachmentParamValue = tileAttachment.nativeObject.pointer;
		addTileAttachment_ITileAttachmentPtr(this.nativeObject.pointer, tileAttachmentParamValue);
	}
	native private long getTileAttachmentCount_void(long pNativeObject);
	/**
	 * 获取瓦片附属物数量
	 */
	public long getTileAttachmentCount()
	{
		long returnValue = getTileAttachmentCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileAttachment_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取瓦片附属物
	 */
	public com.earthview.world.spatial.Itileattachmentptr getTileAttachment(long index)
	{
		long indexParamValue = index;
		long returnValue = getTileAttachment_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.Itileattachmentptr __returnValue = new com.earthview.world.spatial.Itileattachmentptr(CreatedWhenConstruct.CWC_NotToCreate, "ITileAttachmentPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Itileattachmentptr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITileAttachmentPtr");
		}
		return __returnValue;
	}
	native private void mergeTileAttachmentList_CTileData(long pNativeObject, long other);
	public void mergeTileAttachmentList(com.earthview.world.spatial.TileData other)
	{
		long otherParamValue = other.nativeObject.pointer;
		mergeTileAttachmentList_CTileData(this.nativeObject.pointer, otherParamValue);
	}
	public TileData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileData obj = null;
 		if(baseObj instanceof TileData)
		{
			obj = (TileData)baseObj;
		} else {
			obj = new TileData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileData");
			obj.increaseCast();
		}

		return obj;
	}
}
