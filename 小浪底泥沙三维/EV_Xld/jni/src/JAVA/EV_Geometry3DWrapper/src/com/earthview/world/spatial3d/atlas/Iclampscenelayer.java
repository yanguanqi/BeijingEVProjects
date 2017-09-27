package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 聚合贴地层二维的图层，提供在三维中渲染的接口管理三维中贴地层二维图层
 */
public class Iclampscenelayer extends com.earthview.world.spatial3d.atlas.Iscenelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::IClampSceneLayer", new IclampscenelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JIClampSceneLayerProxy", new IclampscenelayerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Iclampscenelayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIClampSceneLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Iclampscenelayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Iclampscenelayer(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JIClampSceneLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Iclampscenelayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean getTile_ev_int32_ev_int32_ev_int32_CTileData_callback(int level, int row, int col, long tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		com.earthview.world.spatial.TileData tileParamValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		tileParamValue.setDelegate(true);
		tileParamValue.setInstancePointer(new InstancePointer(tile));
		IClassFactory tileParamValueClassFactory = GlobalClassFactoryMap.get(tileParamValue.getCppInstanceTypeName());
		if (tileParamValueClassFactory != null)
		{
			tileParamValue.setDelegate(true);
			tileParamValue = (com.earthview.world.spatial.TileData)tileParamValueClassFactory.create();
			tileParamValue.setDelegate(true);
			tileParamValue.setInstancePointer(new InstancePointer(tile));
		}
		boolean returnValue = getTile(levelParamValue, rowParamValue, colParamValue, tileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, int level, int row, int col, long tile);
	/**
	 * 获取瓦片，具体在子类中实现
	 * @param tile 瓦片内容
	 * @param north 瓦片信息
	 * @return 是否成功
	 */
	public boolean getTile(int level, int row, int col, com.earthview.world.spatial.TileData tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_ev_int32_ev_int32_ev_int32_CTileData(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tileParamValue);
		return returnValue;
	}
	native private boolean getTile_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(long pNativeObject, int level, int row, int col, long tile);
	protected boolean getTile_NoVirtual(int level, int row, int col, com.earthview.world.spatial.TileData tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tileParamValue);
		return returnValue;
	}

	protected  boolean getTile_CTileInfo_CTileData_callback(long tileInfo, long tile)
	{
		com.earthview.world.spatial.TileInfo tileInfoParamValue = new com.earthview.world.spatial.TileInfo(CreatedWhenConstruct.CWC_NotToCreate);
		tileInfoParamValue.setDelegate(true);
		tileInfoParamValue.setInstancePointer(new InstancePointer(tileInfo));
		IClassFactory tileInfoParamValueClassFactory = GlobalClassFactoryMap.get(tileInfoParamValue.getCppInstanceTypeName());
		if (tileInfoParamValueClassFactory != null)
		{
			tileInfoParamValue.setDelegate(true);
			tileInfoParamValue = (com.earthview.world.spatial.TileInfo)tileInfoParamValueClassFactory.create();
			tileInfoParamValue.setDelegate(true);
			tileInfoParamValue.setInstancePointer(new InstancePointer(tileInfo));
		}
		com.earthview.world.spatial.TileData tileParamValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		tileParamValue.setDelegate(true);
		tileParamValue.setInstancePointer(new InstancePointer(tile));
		IClassFactory tileParamValueClassFactory = GlobalClassFactoryMap.get(tileParamValue.getCppInstanceTypeName());
		if (tileParamValueClassFactory != null)
		{
			tileParamValue.setDelegate(true);
			tileParamValue = (com.earthview.world.spatial.TileData)tileParamValueClassFactory.create();
			tileParamValue.setDelegate(true);
			tileParamValue.setInstancePointer(new InstancePointer(tile));
		}
		boolean returnValue = getTile(tileInfoParamValue, tileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTile_CTileInfo_CTileData(long pNativeObject, long tileInfo, long tile);
	/**
	 * 获取瓦片，具体在子类中实现
	 * @param tile 瓦片内容
	 * @param north 瓦片信息
	 * @return 是否成功
	 */
	public boolean getTile(com.earthview.world.spatial.TileInfo tileInfo, com.earthview.world.spatial.TileData tile)
	{
		long tileInfoParamValue = tileInfo.nativeObject.pointer;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_CTileInfo_CTileData(this.nativeObject.pointer, tileInfoParamValue, tileParamValue);
		return returnValue;
	}
	native private boolean getTile_CTileInfo_CTileData_NoVirtual(long pNativeObject, long tileInfo, long tile);
	protected boolean getTile_NoVirtual(com.earthview.world.spatial.TileInfo tileInfo, com.earthview.world.spatial.TileData tile)
	{
		long tileInfoParamValue = tileInfo.nativeObject.pointer;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_CTileInfo_CTileData_NoVirtual(this.nativeObject.pointer, tileInfoParamValue, tileParamValue);
		return returnValue;
	}

	protected  boolean getTile_Real_Real_Real_Real_CTileData_callback(double minX, double minY, double maxX, double maxY, long tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		com.earthview.world.spatial.TileData tileParamValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		tileParamValue.setDelegate(true);
		tileParamValue.setInstancePointer(new InstancePointer(tile));
		IClassFactory tileParamValueClassFactory = GlobalClassFactoryMap.get(tileParamValue.getCppInstanceTypeName());
		if (tileParamValueClassFactory != null)
		{
			tileParamValue.setDelegate(true);
			tileParamValue = (com.earthview.world.spatial.TileData)tileParamValueClassFactory.create();
			tileParamValue.setDelegate(true);
			tileParamValue.setInstancePointer(new InstancePointer(tile));
		}
		boolean returnValue = getTile(minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTile_Real_Real_Real_Real_CTileData(long pNativeObject, double minX, double minY, double maxX, double maxY, long tile);
	/**
	 * 获取瓦片
	 * @param minX 瓦片经纬度范围minX
	 * @param minY 瓦片经纬度范围minY
	 * @param maxX 瓦片经纬度范围maxX
	 * @param maxY 瓦片经纬度范围maxY
	 * @param tile 返回的瓦片数据信息
	 * @return 是否成功
	 */
	public boolean getTile(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_Real_Real_Real_Real_CTileData(this.nativeObject.pointer, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		return returnValue;
	}
	native private boolean getTile_Real_Real_Real_Real_CTileData_NoVirtual(long pNativeObject, double minX, double minY, double maxX, double maxY, long tile);
	protected boolean getTile_NoVirtual(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_Real_Real_Real_Real_CTileData_NoVirtual(this.nativeObject.pointer, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		return returnValue;
	}

	protected  int getMaxLevel_void_callback()
	{
		int returnValue = getMaxLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取最大级别
	 * @param  
	 * @return 最大级别
	 */
	public int getMaxLevel()
	{
		int returnValue = getMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxLevel_NoVirtual()
	{
		int returnValue = getMaxLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMinLevel_void_callback()
	{
		int returnValue = getMinLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMinLevel_void(long pNativeObject);
	/**
	 * 获取最小级别
	 * @param  
	 * @return 最小级别
	 */
	public int getMinLevel()
	{
		int returnValue = getMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinLevel_void_NoVirtual(long pNativeObject);
	protected int getMinLevel_NoVirtual()
	{
		int returnValue = getMinLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMaxVisibleLevel_void_callback()
	{
		int returnValue = getMaxVisibleLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxVisibleLevel_void(long pNativeObject);
	/**
	 * 获取最大瓦片级别
	 * @return 最大瓦片级别
	 */
	public int getMaxVisibleLevel()
	{
		int returnValue = getMaxVisibleLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxVisibleLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxVisibleLevel_NoVirtual()
	{
		int returnValue = getMaxVisibleLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMinVisibleLevel_void_callback()
	{
		int returnValue = getMinVisibleLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMinVisibleLevel_void(long pNativeObject);
	/**
	 * 获取最小瓦片级别
	 * @return 最小瓦片级别
	 */
	public int getMinVisibleLevel()
	{
		int returnValue = getMinVisibleLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinVisibleLevel_void_NoVirtual(long pNativeObject);
	protected int getMinVisibleLevel_NoVirtual()
	{
		int returnValue = getMinVisibleLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean setMaxVisibleLevel_ev_int32_callback(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		boolean returnValue = setMaxVisibleLevel(maxlevelParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setMaxVisibleLevel_ev_int32(long pNativeObject, int maxlevel);
	/**
	 * 设置最大瓦片级别
	 * @param maxlevel 最大瓦片级别
	 */
	public boolean setMaxVisibleLevel(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		boolean returnValue = setMaxVisibleLevel_ev_int32(this.nativeObject.pointer, maxlevelParamValue);
		return returnValue;
	}
	native private boolean setMaxVisibleLevel_ev_int32_NoVirtual(long pNativeObject, int maxlevel);
	protected boolean setMaxVisibleLevel_NoVirtual(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		boolean returnValue = setMaxVisibleLevel_ev_int32_NoVirtual(this.nativeObject.pointer, maxlevelParamValue);
		return returnValue;
	}

	protected  boolean setMinVisibleLevel_ev_int32_callback(int minlevel)
	{
		int minlevelParamValue = minlevel;
		boolean returnValue = setMinVisibleLevel(minlevelParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setMinVisibleLevel_ev_int32(long pNativeObject, int minlevel);
	/**
	 * 设置最小瓦片级别
	 * @param maxlevel 最小瓦片级别
	 */
	public boolean setMinVisibleLevel(int minlevel)
	{
		int minlevelParamValue = minlevel;
		boolean returnValue = setMinVisibleLevel_ev_int32(this.nativeObject.pointer, minlevelParamValue);
		return returnValue;
	}
	native private boolean setMinVisibleLevel_ev_int32_NoVirtual(long pNativeObject, int minlevel);
	protected boolean setMinVisibleLevel_NoVirtual(int minlevel)
	{
		int minlevelParamValue = minlevel;
		boolean returnValue = setMinVisibleLevel_ev_int32_NoVirtual(this.nativeObject.pointer, minlevelParamValue);
		return returnValue;
	}

	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void_NoVirtual(long pNativeObject);
	protected double getMinX_NoVirtual()
	{
		double returnValue = getMinX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void_NoVirtual(long pNativeObject);
	protected double getMaxX_NoVirtual()
	{
		double returnValue = getMaxX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void_NoVirtual(long pNativeObject);
	protected double getMinY_NoVirtual()
	{
		double returnValue = getMinY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void_NoVirtual(long pNativeObject);
	protected double getMaxY_NoVirtual()
	{
		double returnValue = getMaxY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getTheme_void(long pNativeObject);
	/**
	 * 获取专题图
	 * @return 专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		long returnValue = getTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getTheme_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme getTheme_NoVirtual()
	{
		long returnValue = getTheme_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	native private void setTheme_ITheme(long pNativeObject, long theme);
	/**
	 * 设置专题图
	 * @param theme 专题图
	 */
	public void setTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setTheme_ITheme(this.nativeObject.pointer, themeParamValue);
	}
	native private void setTheme_ITheme_NoVirtual(long pNativeObject, long theme);
	protected void setTheme_NoVirtual(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setTheme_ITheme_NoVirtual(this.nativeObject.pointer, themeParamValue);
	}

	protected  long getThemeStream_void_callback()
	{
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getThemeStream();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getThemeStream_void(long pNativeObject);
	/**
	 * 获取专题图内存流
	 * @return 专题图内存流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getThemeStream()
	{
		long returnValue = getThemeStream_void(this.nativeObject.pointer);
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
	native private long getThemeStream_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.MemoryDataStreamPtr getThemeStream_NoVirtual()
	{
		long returnValue = getThemeStream_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean equalThemeStream_MemoryDataStreamPtr_callback(long stream)
	{
		com.earthview.world.core.MemoryDataStreamPtr streamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean returnValue = equalThemeStream(streamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean equalThemeStream_MemoryDataStreamPtr(long pNativeObject, long stream);
	/**
	 * 判断内存流是否相同
	 * @return 内存流是否相同
	 */
	public boolean equalThemeStream(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private boolean equalThemeStream_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected boolean equalThemeStream_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}

	protected  void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_callback(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated(levelParamValue, rowParamValue, colParamValue);
	}

	native private void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long level, long row, long col);
	/**
	 * 通知瓦片已创建/销毁
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 */
	public void _notifyTileCreated(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}
	native private void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long level, long row, long col);
	protected void _notifyTileCreated_NoVirtual(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}

	protected  void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_callback(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed(levelParamValue, rowParamValue, colParamValue);
	}

	native private void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long level, long row, long col);
	public void _notifyTileDestroyed(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}
	native private void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long level, long row, long col);
	protected void _notifyTileDestroyed_NoVirtual(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}

	protected  boolean levelValid_ev_int32_callback(int level)
	{
		int levelParamValue = level;
		boolean returnValue = levelValid(levelParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean levelValid_ev_int32(long pNativeObject, int level);
	/**
	 * 获知指定级别的瓦片是否有效
	 * @return 指定级别的瓦片有效性
	 */
	public boolean levelValid(int level)
	{
		int levelParamValue = level;
		boolean returnValue = levelValid_ev_int32(this.nativeObject.pointer, levelParamValue);
		return returnValue;
	}
	native private boolean levelValid_ev_int32_NoVirtual(long pNativeObject, int level);
	protected boolean levelValid_NoVirtual(int level)
	{
		int levelParamValue = level;
		boolean returnValue = levelValid_ev_int32_NoVirtual(this.nativeObject.pointer, levelParamValue);
		return returnValue;
	}

	protected  long getGeoExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Envelope returnValue = getGeoExtent();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeoExtent_void(long pNativeObject);
	/**
	 * 返回图层地理范围
	 * @param  
	 * @return 图层地理范围
	 */
	public com.earthview.world.spatial.geometry.Envelope getGeoExtent()
	{
		long returnValue = getGeoExtent_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate, "CEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private long getGeoExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Envelope getGeoExtent_NoVirtual()
	{
		long returnValue = getGeoExtent_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate, "CEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}

	protected  boolean setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback(float minPX, float minPY, float maxPX, float maxPY)
	{
		float minPXParamValue = minPX;
		float minPYParamValue = minPY;
		float maxPXParamValue = maxPX;
		float maxPYParamValue = maxPY;
		boolean returnValue = setCurtainExtent(minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, float minPX, float minPY, float maxPX, float maxPY);
	/**
	 * 设置卷帘范围(像素单位，取值为[-1,1])
	 * @param minPX 最小x坐标
	 * @param minPY 最小y坐标
	 * @param maxPX 最大x坐标
	 * @param maxPY 最大y坐标
	 * @return 是否成功
	 */
	public boolean setCurtainExtent(float minPX, float minPY, float maxPX, float maxPY)
	{
		float minPXParamValue = minPX;
		float minPYParamValue = minPY;
		float maxPXParamValue = maxPX;
		float maxPYParamValue = maxPY;
		boolean returnValue = setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		return returnValue;
	}
	native private boolean setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, float minPX, float minPY, float maxPX, float maxPY);
	protected boolean setCurtainExtent_NoVirtual(float minPX, float minPY, float maxPX, float maxPY)
	{
		float minPXParamValue = minPX;
		float minPYParamValue = minPY;
		float maxPXParamValue = maxPX;
		float maxPYParamValue = maxPY;
		boolean returnValue = setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		return returnValue;
	}

	protected  boolean setCurtainAlpha_ev_real32_callback(float alpha)
	{
		float alphaParamValue = alpha;
		boolean returnValue = setCurtainAlpha(alphaParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setCurtainAlpha_ev_real32(long pNativeObject, float alpha);
	/**
	 * 设置卷帘透明度(取值范围[0,1];0为不透明,1为全透明)
	 * @param alpha 透明度
	 * @return 是否成功
	 */
	public boolean setCurtainAlpha(float alpha)
	{
		float alphaParamValue = alpha;
		boolean returnValue = setCurtainAlpha_ev_real32(this.nativeObject.pointer, alphaParamValue);
		return returnValue;
	}
	native private boolean setCurtainAlpha_ev_real32_NoVirtual(long pNativeObject, float alpha);
	protected boolean setCurtainAlpha_NoVirtual(float alpha)
	{
		float alphaParamValue = alpha;
		boolean returnValue = setCurtainAlpha_ev_real32_NoVirtual(this.nativeObject.pointer, alphaParamValue);
		return returnValue;
	}

	protected  boolean getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback(long minPX, long minPY, long maxPX, long maxPY)
	{
		FloatPointer minPXParamValue = new FloatPointer(new InstancePointer(minPX));
		FloatPointer minPYParamValue = new FloatPointer(new InstancePointer(minPY));
		FloatPointer maxPXParamValue = new FloatPointer(new InstancePointer(maxPX));
		FloatPointer maxPYParamValue = new FloatPointer(new InstancePointer(maxPY));
		boolean returnValue = getCurtainExtent(minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long minPX, long minPY, long maxPX, long maxPY);
	/**
	 * 获取卷帘范围(像素单位，取值为[-1,1])
	 * @param minPX 最小x坐标
	 * @param minPY 最小y坐标
	 * @param maxPX 最大x坐标
	 * @param maxPY 最大y坐标
	 * @return 是否成功
	 */
	public boolean getCurtainExtent(FloatPointer minPX, FloatPointer minPY, FloatPointer maxPX, FloatPointer maxPY)
	{
		long minPXParamValue = minPX.nativeObject.pointer;
		long minPYParamValue = minPY.nativeObject.pointer;
		long maxPXParamValue = maxPX.nativeObject.pointer;
		long maxPYParamValue = maxPY.nativeObject.pointer;
		boolean returnValue = getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		return returnValue;
	}
	native private boolean getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long minPX, long minPY, long maxPX, long maxPY);
	protected boolean getCurtainExtent_NoVirtual(FloatPointer minPX, FloatPointer minPY, FloatPointer maxPX, FloatPointer maxPY)
	{
		long minPXParamValue = minPX.nativeObject.pointer;
		long minPYParamValue = minPY.nativeObject.pointer;
		long maxPXParamValue = maxPX.nativeObject.pointer;
		long maxPYParamValue = maxPY.nativeObject.pointer;
		boolean returnValue = getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue);
		return returnValue;
	}

	protected  boolean getCurtainEnabled_void_callback()
	{
		boolean returnValue = getCurtainEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCurtainEnabled_void(long pNativeObject);
	/**
	 * 获取卷帘是否开启
	 */
	public boolean getCurtainEnabled()
	{
		boolean returnValue = getCurtainEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCurtainEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getCurtainEnabled_NoVirtual()
	{
		boolean returnValue = getCurtainEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean setCurtainEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		boolean returnValue = setCurtainEnabled(enabledParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setCurtainEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 开启或者关闭卷帘
	 * @param enabled 
	 */
	public boolean setCurtainEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		boolean returnValue = setCurtainEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
		return returnValue;
	}
	native private boolean setCurtainEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected boolean setCurtainEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		boolean returnValue = setCurtainEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
		return returnValue;
	}

	protected  boolean getCurtainAlpha_ev_real32_callback(long alpha)
	{
		FloatPointer alphaParamValue = new FloatPointer(new InstancePointer(alpha));
		boolean returnValue = getCurtainAlpha(alphaParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCurtainAlpha_ev_real32(long pNativeObject, long alpha);
	/**
	 * 获取卷帘透明度(取值范围[0,1];0为不透明,1为全透明)
	 * @param alpha 透明度
	 * @return 是否成功
	 */
	public boolean getCurtainAlpha(FloatPointer alpha)
	{
		long alphaParamValue = alpha.nativeObject.pointer;
		boolean returnValue = getCurtainAlpha_ev_real32(this.nativeObject.pointer, alphaParamValue);
		return returnValue;
	}
	native private boolean getCurtainAlpha_ev_real32_NoVirtual(long pNativeObject, long alpha);
	protected boolean getCurtainAlpha_NoVirtual(FloatPointer alpha)
	{
		long alphaParamValue = alpha.nativeObject.pointer;
		boolean returnValue = getCurtainAlpha_ev_real32_NoVirtual(this.nativeObject.pointer, alphaParamValue);
		return returnValue;
	}

	protected  int getClampMode_void_callback()
	{
		com.earthview.world.spatial3d.atlas.ClampMode returnValue = getClampMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getClampMode_void(long pNativeObject);
	/**
	 * 获取图层贴地模式
	 * @param  
	 * @return 贴地模式
	 */
	public com.earthview.world.spatial3d.atlas.ClampMode getClampMode()
	{
		int returnValue = getClampMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.atlas.ClampMode.toEnum(returnValue);
	}
	native private int getClampMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.ClampMode getClampMode_NoVirtual()
	{
		int returnValue = getClampMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.atlas.ClampMode.toEnum(returnValue);
	}

	protected  void setClampMode_ClampMode_callback(int mode)
	{
		com.earthview.world.spatial3d.atlas.ClampMode modeParamValue = com.earthview.world.spatial3d.atlas.ClampMode.toEnum(mode);
		setClampMode(modeParamValue);
	}

	native private void setClampMode_ClampMode(long pNativeObject, int mode);
	/**
	 * 设置图层贴地模式
	 * @param mode 贴地模式
	 */
	public void setClampMode(com.earthview.world.spatial3d.atlas.ClampMode mode)
	{
		int modeParamValue = mode.getValue();
		setClampMode_ClampMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setClampMode_ClampMode_NoVirtual(long pNativeObject, int mode);
	protected void setClampMode_NoVirtual(com.earthview.world.spatial3d.atlas.ClampMode mode)
	{
		int modeParamValue = mode.getValue();
		setClampMode_ClampMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	public Iclampscenelayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iclampscenelayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 绑定一个二维图层
	 * @param layer 二维图层
	 */
	public void attachLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.attachLayer_NoVirtual(layer);
	}
	/**
	 * 取消绑定二维图层
	 * @param  
	 */
	public void detachLayer()
	{
		super.detachLayer_NoVirtual();
	}
	/**
	 * 获取绑定的二维图层
	 * @param  
	 * @return 绑定的二维图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		return super.getLayer_NoVirtual();
	}
	/// <summary>
	/// 获得场景名称
	/// </summary>
	/// <returns>场景名称</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 根据经纬度和级别获取高程
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerAdd_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe卸载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerRemoved_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		super._notifyRefreshed_NoVirtual(camera, updateType);
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/**
	 * 数据集更新事件的通知
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		super._notifyDataChanged_NoVirtual(strDataSourceName, strDatasetName, pEvent);
	}
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 获取图层类型
	 * @param  
	 * @return 图层类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取与图层所关联的数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 获取数据集所在的数据源
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 图层选择
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置图层的名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 设置图层的描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 设置图层是否正在编辑
	 * @param editing 如果为true,则设置图层正在编辑,反之则否
	 */
	public void setEditing(boolean editing)
	{
		super.setEditing_NoVirtual(editing);
	}
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置图层是否可视
	 * @param visible 如果为true,则图层可视,反之则否
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 判断图层是否支持选择
	 * @param  
	 */
	public boolean isSelectable()
	{
		return super.isSelectable_NoVirtual();
	}
	/**
	 * 设置图层是否支持选择
	 * @param selectable 是否可选
	 */
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 设置图层的透明度
	 * @param transparent 透明值
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 获取图层的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
	}
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	/**
	 * 图层的复制,内存外部释放
	 * @param sr 参考坐标系
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 把图层的信息保存到流中
	 * @param steam 导出流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 从xml中恢复图层的配置
	 * @param element xml要素
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	/**
	 * 把图层的信息导出到xml中
	 * @param  
	 * @return xml要素
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, String method);
	native protected void register_getTile_CTileInfo_CTileData(long pNativeObject, String method);
	native protected void register_getTile_Real_Real_Real_Real_CTileData(long pNativeObject, String method);
	native protected void register_getMaxLevel_void(long pNativeObject, String method);
	native protected void register_getMinLevel_void(long pNativeObject, String method);
	native protected void register_getMaxVisibleLevel_void(long pNativeObject, String method);
	native protected void register_getMinVisibleLevel_void(long pNativeObject, String method);
	native protected void register_setMaxVisibleLevel_ev_int32(long pNativeObject, String method);
	native protected void register_setMinVisibleLevel_ev_int32(long pNativeObject, String method);
	native protected void register_getThemeStream_void(long pNativeObject, String method);
	native protected void register_equalThemeStream_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_levelValid_ev_int32(long pNativeObject, String method);
	native protected void register_getGeoExtent_void(long pNativeObject, String method);
	native protected void register_setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setCurtainAlpha_ev_real32(long pNativeObject, String method);
	native protected void register_getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_getCurtainEnabled_void(long pNativeObject, String method);
	native protected void register_setCurtainEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getCurtainAlpha_ev_real32(long pNativeObject, String method);
	native protected void register_getClampMode_void(long pNativeObject, String method);
	native protected void register_setClampMode_ClampMode(long pNativeObject, String method);
	native protected void register_attachLayer_ILayer(long pNativeObject, String method);
	native protected void register_detachLayer_void(long pNativeObject, String method);
	native protected void register_getLayer_void(long pNativeObject, String method);
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_setTheme_ITheme(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getTile_ev_int32_ev_int32_ev_int32_CTileData(this.nativeObject.pointer, "getTile_ev_int32_ev_int32_ev_int32_CTileData_callback");
			this.register_getTile_CTileInfo_CTileData(this.nativeObject.pointer, "getTile_CTileInfo_CTileData_callback");
			this.register_getTile_Real_Real_Real_Real_CTileData(this.nativeObject.pointer, "getTile_Real_Real_Real_Real_CTileData_callback");
			this.register_getMaxLevel_void(this.nativeObject.pointer, "getMaxLevel_void_callback");
			this.register_getMinLevel_void(this.nativeObject.pointer, "getMinLevel_void_callback");
			this.register_getMaxVisibleLevel_void(this.nativeObject.pointer, "getMaxVisibleLevel_void_callback");
			this.register_getMinVisibleLevel_void(this.nativeObject.pointer, "getMinVisibleLevel_void_callback");
			this.register_setMaxVisibleLevel_ev_int32(this.nativeObject.pointer, "setMaxVisibleLevel_ev_int32_callback");
			this.register_setMinVisibleLevel_ev_int32(this.nativeObject.pointer, "setMinVisibleLevel_ev_int32_callback");
			this.register_getThemeStream_void(this.nativeObject.pointer, "getThemeStream_void_callback");
			this.register_equalThemeStream_MemoryDataStreamPtr(this.nativeObject.pointer, "equalThemeStream_MemoryDataStreamPtr_callback");
			this.register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_levelValid_ev_int32(this.nativeObject.pointer, "levelValid_ev_int32_callback");
			this.register_getGeoExtent_void(this.nativeObject.pointer, "getGeoExtent_void_callback");
			this.register_setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_setCurtainAlpha_ev_real32(this.nativeObject.pointer, "setCurtainAlpha_ev_real32_callback");
			this.register_getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_getCurtainEnabled_void(this.nativeObject.pointer, "getCurtainEnabled_void_callback");
			this.register_setCurtainEnabled_ev_bool(this.nativeObject.pointer, "setCurtainEnabled_ev_bool_callback");
			this.register_getCurtainAlpha_ev_real32(this.nativeObject.pointer, "getCurtainAlpha_ev_real32_callback");
			this.register_getClampMode_void(this.nativeObject.pointer, "getClampMode_void_callback");
			this.register_setClampMode_ClampMode(this.nativeObject.pointer, "setClampMode_ClampMode_callback");
			this.register_attachLayer_ILayer(this.nativeObject.pointer, "attachLayer_ILayer_callback");
			this.register_detachLayer_void(this.nativeObject.pointer, "detachLayer_void_callback");
			this.register_getLayer_void(this.nativeObject.pointer, "getLayer_void_callback");
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_setTheme_ITheme(this.nativeObject.pointer, "setTheme_ITheme_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Iclampscenelayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iclampscenelayer obj = null;
 		if(baseObj instanceof Iclampscenelayer)
		{
			obj = (Iclampscenelayer)baseObj;
		} else {
			obj = new Iclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IClampSceneLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
