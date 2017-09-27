package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayer extends com.earthview.world.spatial3d.atlas.Iclampscenelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CImageOverlayer", new ImageOverlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCImageOverlayerProxy", new ImageOverlayerClassFactory());
	}

	public ImageOverlayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImageOverlayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ImageOverlayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param geoObj GeoObject对象
	 */
	public ImageOverlayer(String name, com.earthview.world.spatial.kml.GeoObjectExtension geoObj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer geoObjPtr = new BasePointer(geoObj);
		list.add("geoObj", geoObjPtr.get());
		Create("JCImageOverlayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ImageOverlayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 
	 * @param north 最大纬度
	 * @param south 最小纬度
	 * @param east 最大经度
	 * @param west 最小经度
	 */
	public ImageOverlayer(String name, double north, double south, double east, double west) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer northPtr = new BasePointer(north);
		list.add("north", northPtr.get());
		BasePointer southPtr = new BasePointer(south);
		list.add("south", southPtr.get());
		BasePointer eastPtr = new BasePointer(east);
		list.add("east", eastPtr.get());
		BasePointer westPtr = new BasePointer(west);
		list.add("west", westPtr.get());
		Create("JCImageOverlayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ImageOverlayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 
	 * @param imageFilePath 图片路径
	 * @param north 最大纬度
	 * @param south 最小纬度
	 * @param east 最大经度
	 * @param west 最小经度
	 */
	public ImageOverlayer(String name, String imageFilePath, double north, double south, double east, double west) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer imageFilePathPtr = new BasePointer(imageFilePath);
		list.add("imageFilePath", imageFilePathPtr.get());
		BasePointer northPtr = new BasePointer(north);
		list.add("north", northPtr.get());
		BasePointer southPtr = new BasePointer(south);
		list.add("south", southPtr.get());
		BasePointer eastPtr = new BasePointer(east);
		list.add("east", eastPtr.get());
		BasePointer westPtr = new BasePointer(west);
		list.add("west", westPtr.get());
		Create("JCImageOverlayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ImageOverlayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获知图层类型
	 * @return 图层类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private boolean getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, int level, int row, int col, long tile);
	/**
	 * 获取瓦片
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

	native private boolean getTile_CTileInfo_CTileData(long pNativeObject, long tileInfo, long tile);
	/**
	 * 获取瓦片
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

	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerAdd_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerAdd_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyLayerRemoved_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe卸载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerRemoved_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerRemoved_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void setRotateAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置旋转角度
	 * @param angle 旋转角度
	 */
	public void setRotateAngle(double angle)
	{
		double angleParamValue = angle;
		setRotateAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setImageFilePath_EVString(long pNativeObject, String filePath);
	/**
	 * 设置图片路径
	 * @param filePath 图片路径
	 */
	public void setImageFilePath(String filePath)
	{
		String filePathParamValue = filePath;
		setImageFilePath_EVString(this.nativeObject.pointer, filePathParamValue);
	}
	native private void setOpacity_ev_real32(long pNativeObject, float opacity);
	/**
	 * 设置图片透明度
	 * @param filePath 图片路径
	 */
	public void setOpacity(float opacity)
	{
		float opacityParamValue = opacity;
		setOpacity_ev_real32(this.nativeObject.pointer, opacityParamValue);
	}
	native private float getOpacity_void(long pNativeObject);
	/**
	 * 获取图片透明度
	 */
	public float getOpacity()
	{
		float returnValue = getOpacity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDescription_EVString(long pNativeObject, String description);
	/**
	 * 设置图像覆盖层描述信息
	 * @param quadAlgorithmType 影像投影方式
	 * @param description 描述
	 */
	public void setDescription(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String description);
	protected void setDescription_NoVirtual(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descriptionParamValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取图像覆盖层名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getImagePath_void(long pNativeObject);
	/**
	 * 获取图像覆盖层图片路径
	 */
	public String getImagePath()
	{
		String returnValue = getImagePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setImageAltitudeMode_EVAltitudeMode(long pNativeObject, int mode);
	/**
	 * 设置高度模式
	 */
	public void setImageAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode mode)
	{
		int modeParamValue = mode.getValue();
		setImageAltitudeMode_EVAltitudeMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getImageAltitudeMode_void(long pNativeObject);
	/**
	 * 获取高度模式
	 */
	public com.earthview.world.spatial.utility.EVAltitudeMode getImageAltitudeMode()
	{
		int returnValue = getImageAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private void setAltitude_ev_real64(long pNativeObject, double alt);
	/**
	 * 设置高度
	 */
	public void setAltitude(double alt)
	{
		double altParamValue = alt;
		setAltitude_ev_real64(this.nativeObject.pointer, altParamValue);
	}
	native private long getGeoObject_ev_bool(long pNativeObject, boolean isSaveToKml);
	public com.earthview.world.spatial.kml.GeoObjectExtension getGeoObject(boolean isSaveToKml)
	{
		boolean isSaveToKmlParamValue = isSaveToKml;
		long returnValue = getGeoObject_ev_bool(this.nativeObject.pointer, isSaveToKmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	native private void setImageID_EVString(long pNativeObject, String id);
	/**
	 * 设置图像覆盖层ID，唯一性
	 */
	public void setImageID(String id)
	{
		String idParamValue = id;
		setImageID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private long get_mpoly_void(long pNativeObject);
	public com.earthview.world.geometry3d.MultiPolygon3DExtension get_mpoly()
	{
		long jniValue = get_mpoly_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.MultiPolygon3DExtension __returnValue = new com.earthview.world.geometry3d.MultiPolygon3DExtension(CreatedWhenConstruct.CWC_NotToCreate, "CMultiPolygon3DExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.MultiPolygon3DExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiPolygon3DExtension");
		}
		return __returnValue;
	}
	
	native private void set_mpoly_CMultiPolygon3DExtension (long pNativeObject, long value);
	public void set_mpoly(com.earthview.world.geometry3d.MultiPolygon3DExtension mpoly)
	{
		long mpolyParamValue = (mpoly == null ? 0L : mpoly.nativeObject.pointer);
		
		set_mpoly_CMultiPolygon3DExtension(this.nativeObject.pointer, mpolyParamValue);
	}
	
	native private void setSceneManager_CSceneManager(long pNativeObject, long ref_mSceneMgr);
	public void setSceneManager(com.earthview.world.graphic.SceneManager ref_mSceneMgr)
	{
		long ref_mSceneMgrParamValue = (ref_mSceneMgr == null ? 0L : ref_mSceneMgr.nativeObject.pointer);
		setSceneManager_CSceneManager(this.nativeObject.pointer, ref_mSceneMgrParamValue);
	}
	native private String createCachePath_ev_bool_EVString_ev_int32_ev_int32_ev_int32(long pNativeObject, boolean isMercator, String picId, int level, int row, int col);
	public String createCachePath(boolean isMercator, String picId, int level, int row, int col)
	{
		boolean isMercatorParamValue = isMercator;
		String picIdParamValue = picId;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		String returnValue = createCachePath_ev_bool_EVString_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, isMercatorParamValue, picIdParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private boolean get_mIsRendering_void(long pNativeObject);
	public boolean get_mIsRendering()
	{
		boolean jniValue = get_mIsRendering_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsRendering_ev_bool (long pNativeObject, boolean value);
	public void set_mIsRendering(boolean mIsRendering)
	{
		boolean mIsRenderingParamValue = mIsRendering;
		
		set_mIsRendering_ev_bool(this.nativeObject.pointer, mIsRenderingParamValue);
	}
	
	native private String get_mPictureGUID_void(long pNativeObject);
	public String get_mPictureGUID()
	{
		String jniValue = get_mPictureGUID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPictureGUID_EVString (long pNativeObject, String value);
	public void set_mPictureGUID(String mPictureGUID)
	{
		String mPictureGUIDParamValue = mPictureGUID;
		
		set_mPictureGUID_EVString(this.nativeObject.pointer, mPictureGUIDParamValue);
	}
	
	native private String get_imageID_void(long pNativeObject);
	public String get_imageID()
	{
		String jniValue = get_imageID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_imageID_EVString (long pNativeObject, String value);
	public void set_imageID(String imageID)
	{
		String imageIDParamValue = imageID;
		
		set_imageID_EVString(this.nativeObject.pointer, imageIDParamValue);
	}
	
	native private double get_altitude_void(long pNativeObject);
	public double get_altitude()
	{
		double jniValue = get_altitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_altitude_ev_real64 (long pNativeObject, double value);
	public void set_altitude(double altitude)
	{
		double altitudeParamValue = altitude;
		
		set_altitude_ev_real64(this.nativeObject.pointer, altitudeParamValue);
	}
	
	native private double get_north_void(long pNativeObject);
	public double get_north()
	{
		double jniValue = get_north_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_north_ev_real64 (long pNativeObject, double value);
	public void set_north(double north)
	{
		double northParamValue = north;
		
		set_north_ev_real64(this.nativeObject.pointer, northParamValue);
	}
	
	native private double get_south_void(long pNativeObject);
	public double get_south()
	{
		double jniValue = get_south_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_south_ev_real64 (long pNativeObject, double value);
	public void set_south(double south)
	{
		double southParamValue = south;
		
		set_south_ev_real64(this.nativeObject.pointer, southParamValue);
	}
	
	native private double get_east_void(long pNativeObject);
	public double get_east()
	{
		double jniValue = get_east_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_east_double (long pNativeObject, double value);
	public void set_east(double east)
	{
		double eastParamValue = east;
		
		set_east_double(this.nativeObject.pointer, eastParamValue);
	}
	
	native private double get_west_void(long pNativeObject);
	public double get_west()
	{
		double jniValue = get_west_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_west_ev_real64 (long pNativeObject, double value);
	public void set_west(double west)
	{
		double westParamValue = west;
		
		set_west_ev_real64(this.nativeObject.pointer, westParamValue);
	}
	
	native private double get_sphericalNorth_void(long pNativeObject);
	public double get_sphericalNorth()
	{
		double jniValue = get_sphericalNorth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sphericalNorth_ev_real64 (long pNativeObject, double value);
	public void set_sphericalNorth(double sphericalNorth)
	{
		double sphericalNorthParamValue = sphericalNorth;
		
		set_sphericalNorth_ev_real64(this.nativeObject.pointer, sphericalNorthParamValue);
	}
	
	native private double get_sphericalSouth_void(long pNativeObject);
	public double get_sphericalSouth()
	{
		double jniValue = get_sphericalSouth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sphericalSouth_ev_real64 (long pNativeObject, double value);
	public void set_sphericalSouth(double sphericalSouth)
	{
		double sphericalSouthParamValue = sphericalSouth;
		
		set_sphericalSouth_ev_real64(this.nativeObject.pointer, sphericalSouthParamValue);
	}
	
	native private double get_sphericalWest_void(long pNativeObject);
	public double get_sphericalWest()
	{
		double jniValue = get_sphericalWest_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sphericalWest_ev_real64 (long pNativeObject, double value);
	public void set_sphericalWest(double sphericalWest)
	{
		double sphericalWestParamValue = sphericalWest;
		
		set_sphericalWest_ev_real64(this.nativeObject.pointer, sphericalWestParamValue);
	}
	
	native private double get_sphericalEast_void(long pNativeObject);
	public double get_sphericalEast()
	{
		double jniValue = get_sphericalEast_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sphericalEast_ev_real64 (long pNativeObject, double value);
	public void set_sphericalEast(double sphericalEast)
	{
		double sphericalEastParamValue = sphericalEast;
		
		set_sphericalEast_ev_real64(this.nativeObject.pointer, sphericalEastParamValue);
	}
	
	native private double get_rotateAngle_void(long pNativeObject);
	public double get_rotateAngle()
	{
		double jniValue = get_rotateAngle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_rotateAngle_ev_real64 (long pNativeObject, double value);
	public void set_rotateAngle(double rotateAngle)
	{
		double rotateAngleParamValue = rotateAngle;
		
		set_rotateAngle_ev_real64(this.nativeObject.pointer, rotateAngleParamValue);
	}
	
	native private String get_imageFilePath_void(long pNativeObject);
	public String get_imageFilePath()
	{
		String jniValue = get_imageFilePath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_imageFilePath_EVString (long pNativeObject, String value);
	public void set_imageFilePath(String imageFilePath)
	{
		String imageFilePathParamValue = imageFilePath;
		
		set_imageFilePath_EVString(this.nativeObject.pointer, imageFilePathParamValue);
	}
	
	native private String get_description_void(long pNativeObject);
	public String get_description()
	{
		String jniValue = get_description_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_description_EVString (long pNativeObject, String value);
	public void set_description(String description)
	{
		String descriptionParamValue = description;
		
		set_description_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	
	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
	}
	
	native private float get_opacity_void(long pNativeObject);
	public float get_opacity()
	{
		float jniValue = get_opacity_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_opacity_ev_real32 (long pNativeObject, float value);
	public void set_opacity(float opacity)
	{
		float opacityParamValue = opacity;
		
		set_opacity_ev_real32(this.nativeObject.pointer, opacityParamValue);
	}
	
	native private boolean get_mSmooth_void(long pNativeObject);
	public boolean get_mSmooth()
	{
		boolean jniValue = get_mSmooth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSmooth_ev_bool (long pNativeObject, boolean value);
	public void set_mSmooth(boolean mSmooth)
	{
		boolean mSmoothParamValue = mSmooth;
		
		set_mSmooth_ev_bool(this.nativeObject.pointer, mSmoothParamValue);
	}
	
	native private boolean get_mIsVisible_void(long pNativeObject);
	public boolean get_mIsVisible()
	{
		boolean jniValue = get_mIsVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsVisible_ev_bool (long pNativeObject, boolean value);
	public void set_mIsVisible(boolean mIsVisible)
	{
		boolean mIsVisibleParamValue = mIsVisible;
		
		set_mIsVisible_ev_bool(this.nativeObject.pointer, mIsVisibleParamValue);
	}
	
	native private boolean get_mIsRemovePictureCache_void(long pNativeObject);
	public boolean get_mIsRemovePictureCache()
	{
		boolean jniValue = get_mIsRemovePictureCache_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsRemovePictureCache_ev_bool (long pNativeObject, boolean value);
	public void set_mIsRemovePictureCache(boolean mIsRemovePictureCache)
	{
		boolean mIsRemovePictureCacheParamValue = mIsRemovePictureCache;
		
		set_mIsRemovePictureCache_ev_bool(this.nativeObject.pointer, mIsRemovePictureCacheParamValue);
	}
	
	native private int get_altitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode get_altitudeMode()
	{
		int jniValue = get_altitudeMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(jniValue);
	}
	
	native private void set_altitudeMode_EVAltitudeMode (long pNativeObject, int value);
	public void set_altitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		
		set_altitudeMode_EVAltitudeMode(this.nativeObject.pointer, altitudeModeParamValue);
	}
	
	native private long get_mSceneMgr_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManager get_mSceneMgr()
	{
		long jniValue = get_mSceneMgr_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	
	native private void set_mSceneMgr_CSceneManager (long pNativeObject, long value);
	public void set_mSceneMgr(com.earthview.world.graphic.SceneManager mSceneMgr)
	{
		long mSceneMgrParamValue = (mSceneMgr == null ? 0L : mSceneMgr.nativeObject.pointer);
		
		set_mSceneMgr_CSceneManager(this.nativeObject.pointer, mSceneMgrParamValue);
	}
	
	/**
	 * 复制构造函数
	 * @param obj 对象
	 */
	public ImageOverlayer(com.earthview.world.geometry3d.ImageOverlayer obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCImageOverlayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ImageOverlayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public ImageOverlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageOverlayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取最大级别
	 * @param  
	 * @return 最大级别
	 */
	public int getMaxLevel()
	{
		return super.getMaxLevel_NoVirtual();
	}
	/**
	 * 获取最小级别
	 * @param  
	 * @return 最小级别
	 */
	public int getMinLevel()
	{
		return super.getMinLevel_NoVirtual();
	}
	/**
	 * 获取最大瓦片级别
	 * @return 最大瓦片级别
	 */
	public int getMaxVisibleLevel()
	{
		return super.getMaxVisibleLevel_NoVirtual();
	}
	/**
	 * 获取最小瓦片级别
	 * @return 最小瓦片级别
	 */
	public int getMinVisibleLevel()
	{
		return super.getMinVisibleLevel_NoVirtual();
	}
	/**
	 * 设置最大瓦片级别
	 * @param maxlevel 最大瓦片级别
	 */
	public boolean setMaxVisibleLevel(int maxlevel)
	{
		return super.setMaxVisibleLevel_NoVirtual(maxlevel);
	}
	/**
	 * 设置最小瓦片级别
	 * @param maxlevel 最小瓦片级别
	 */
	public boolean setMinVisibleLevel(int minlevel)
	{
		return super.setMinVisibleLevel_NoVirtual(minlevel);
	}
	/**
	 * 获取专题图内存流
	 * @return 专题图内存流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getThemeStream()
	{
		return super.getThemeStream_NoVirtual();
	}
	/**
	 * 判断内存流是否相同
	 * @return 内存流是否相同
	 */
	public boolean equalThemeStream(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		return super.equalThemeStream_NoVirtual(stream);
	}
	/**
	 * 通知瓦片已创建/销毁
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 */
	public void _notifyTileCreated(long level, long row, long col)
	{
		super._notifyTileCreated_NoVirtual(level, row, col);
	}
	public void _notifyTileDestroyed(long level, long row, long col)
	{
		super._notifyTileDestroyed_NoVirtual(level, row, col);
	}
	/**
	 * 获知指定级别的瓦片是否有效
	 * @return 指定级别的瓦片有效性
	 */
	public boolean levelValid(int level)
	{
		return super.levelValid_NoVirtual(level);
	}
	/**
	 * 返回图层地理范围
	 * @param  
	 * @return 图层地理范围
	 */
	public com.earthview.world.spatial.geometry.Envelope getGeoExtent()
	{
		return super.getGeoExtent_NoVirtual();
	}
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
		return super.setCurtainExtent_NoVirtual(minPX, minPY, maxPX, maxPY);
	}
	/**
	 * 设置卷帘透明度(取值范围[0,1];0为不透明,1为全透明)
	 * @param alpha 透明度
	 * @return 是否成功
	 */
	public boolean setCurtainAlpha(float alpha)
	{
		return super.setCurtainAlpha_NoVirtual(alpha);
	}
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
		return super.getCurtainExtent_NoVirtual(minPX, minPY, maxPX, maxPY);
	}
	/**
	 * 获取卷帘是否开启
	 */
	public boolean getCurtainEnabled()
	{
		return super.getCurtainEnabled_NoVirtual();
	}
	/**
	 * 开启或者关闭卷帘
	 * @param enabled 
	 */
	public boolean setCurtainEnabled(boolean enabled)
	{
		return super.setCurtainEnabled_NoVirtual(enabled);
	}
	/**
	 * 获取卷帘透明度(取值范围[0,1];0为不透明,1为全透明)
	 * @param alpha 透明度
	 * @return 是否成功
	 */
	public boolean getCurtainAlpha(FloatPointer alpha)
	{
		return super.getCurtainAlpha_NoVirtual(alpha);
	}
	/**
	 * 获取图层贴地模式
	 * @param  
	 * @return 贴地模式
	 */
	public com.earthview.world.spatial3d.atlas.ClampMode getClampMode()
	{
		return super.getClampMode_NoVirtual();
	}
	/**
	 * 设置图层贴地模式
	 * @param mode 贴地模式
	 */
	public void setClampMode(com.earthview.world.spatial3d.atlas.ClampMode mode)
	{
		super.setClampMode_NoVirtual(mode);
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
	/**
	 * 获取专题图
	 * @param  
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		return super.getTheme_NoVirtual();
	}
	/**
	 * 设置专题图
	 * @param theme 专题图
	 */
	public void setTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		super.setTheme_NoVirtual(theme);
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
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
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
	
	public static ImageOverlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageOverlayer obj = null;
 		if(baseObj instanceof ImageOverlayer)
		{
			obj = (ImageOverlayer)baseObj;
		} else {
			obj = new ImageOverlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageOverlayer");
			obj.increaseCast();
		}

		return obj;
	}
}
