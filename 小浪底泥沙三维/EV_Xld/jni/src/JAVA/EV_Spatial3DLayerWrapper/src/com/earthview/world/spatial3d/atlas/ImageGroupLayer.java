package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CImageGroupLayer(影像图层组)管理以下图层:影像图层CImageClampSceneLayer嵌套的影像图层组CImageGroupLayer
 */
public class ImageGroupLayer extends com.earthview.world.spatial3d.atlas.Iclampscenelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer", new ImageGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageGroupLayerProxy", new ImageGroupLayerClassFactory());
	}

	public enum TimePriority implements INativeEnum<TimePriority> {
		TP_EARLIEST_WHEN_LATER(TimePriorityHelper.ENUM_VALUES[0]),
		TP_LATEST_WHEN_EARLIER(TimePriorityHelper.ENUM_VALUES[1]),
		TP_CLOSET(TimePriorityHelper.ENUM_VALUES[2]);
		private int value;
		TimePriority(int i) {
			this.value = i;
		}
		public TimePriority getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TimePriority toEnum(int retval) {
			if(retval == TP_EARLIEST_WHEN_LATER.value){
				return TP_EARLIEST_WHEN_LATER;
			}
			else if(retval == TP_LATEST_WHEN_EARLIER.value){
				return TP_LATEST_WHEN_EARLIER;
			}
			else if(retval == TP_CLOSET.value){
				return TP_CLOSET;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TimePriorityHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///早于某个时间的最晚的一个时间                        
	public static class TimeList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimeList", new TimeListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public TimeList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TimeList", null);
		}

		native private void push_back_CCoreTime(long pNativeObject, long t);
		/**
		 * 在当前粒子列表后面增加一个元素
		 * @param t 增加的元素
		 */
		public void push_back(com.earthview.world.core.CoreTime t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CCoreTime(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_CCoreTime(long pNativeObject, long t);
		/**
		 * 在当前粒子列表前面增加一个元素
		 * @param t 增加的元素
		 */
		public void push_front(com.earthview.world.core.CoreTime t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_CCoreTime(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除当前粒子列表最后一个元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		/**
		 * 删除当前粒子列表第一个元素
		 * @param  
		 */
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回当前粒子列表第一个元素的引用
		 * @param  
		 * @return 第一个元素的引用
		 */
		public com.earthview.world.core.CoreTime front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate, "CCoreTime");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回当前粒子列表最后一个元素的引用
		 * @param  
		 * @return 最后一个元素的引用
		 */
		public com.earthview.world.core.CoreTime back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate, "CCoreTime");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		/**
		 * 返回当前粒子列表第pos元素的引用
		 * @param  
		 * @return 第pos元素的引用
		 */
		public com.earthview.world.core.CoreTime at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate, "CCoreTime");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CCoreTime(long pNativeObject, long pos, long t);
		/**
		 * 在当前粒子列表第pos元素之后插入元素t
		 * @param pos 迭代器下标
		 * @param t 要插入的元素
		 */
		public void insert(long pos, com.earthview.world.core.CoreTime t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CCoreTime(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 移除当前粒子列表中的某一个元素
		 * @param pos 该移除元素所在迭代器位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断当前粒子列表是否为空
		 * @param  
		 * @return 如果为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 当前粒子列表存储元素的大小
		 * @param  
		 * @return 当前广告版元素的个数
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整粒子列表存储元素的大小
		 * @param newSize 新的列表存储元素的个数
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空列表中的元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public TimeList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TimeList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TimeList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TimeList obj = null;
 			if(baseObj instanceof TimeList)
			{
				obj = (TimeList)baseObj;
			} else {
				obj = new TimeList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TimeList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TimeListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TimeList emptyInstance = new TimeList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class DesiredTime extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime", new DesiredTimeClassFactory());
		}

		public DesiredTime() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CDesiredTime", null);
		}

		public DesiredTime(com.earthview.world.core.CoreTime tm, com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimePriority prt) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer tmPtr = new BasePointer(tm);
			list.add("tm", tmPtr.get());
			BasePointer prtPtr = new BasePointer(prt);
			list.add("prt", prtPtr.get());
			Create("CDesiredTime", list);
		}

		native private long get_time_void(long pNativeObject);
		public com.earthview.world.core.CoreTime get_time()
		{
			long jniValue = get_time_void(this.nativeObject.pointer);
			
			com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
			}
			return __returnValue;
		}
		
		native private void set_time_CCoreTime (long pNativeObject, long value);
		public void set_time(com.earthview.world.core.CoreTime time)
		{
			long timeParamValue = time.nativeObject.pointer;
			
			set_time_CCoreTime(this.nativeObject.pointer, timeParamValue);
		}
		
		native private int get_priority_void(long pNativeObject);
		public com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimePriority get_priority()
		{
			int jniValue = get_priority_void(this.nativeObject.pointer);
			
			return com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimePriority.toEnum(jniValue);
		}
		
		native private void set_priority_TimePriority (long pNativeObject, int value);
		public void set_priority(com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimePriority priority)
		{
			int priorityParamValue = priority.getValue();
			
			set_priority_TimePriority(this.nativeObject.pointer, priorityParamValue);
		}
		
		public DesiredTime(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DesiredTime(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static DesiredTime fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DesiredTime obj = null;
 			if(baseObj instanceof DesiredTime)
			{
				obj = (DesiredTime)baseObj;
			} else {
				obj = new DesiredTime(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDesiredTime");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DesiredTimeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DesiredTime emptyInstance = new DesiredTime(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public ImageGroupLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImageGroupLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.ImageGroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 图层名
	 */
	public ImageGroupLayer(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCImageGroupLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.ImageGroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
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
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 * @param tile 返回的瓦片数据信息
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

	native private boolean getCurtainTiles_ev_int32_ev_int32_ev_int32_CLayerTileList(long pNativeObject, int level, int row, int col, long tiles);
	/**
	 * 获取所有可见图层的瓦片
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 * @param tiles 瓦片集合
	 * @return 是否成功
	 */
	public boolean getCurtainTiles(int level, int row, int col, com.earthview.world.spatial3d.atlas.LayerTileList tiles)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tilesParamValue = tiles.nativeObject.pointer;
		boolean returnValue = getCurtainTiles_ev_int32_ev_int32_ev_int32_CLayerTileList(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tilesParamValue);
		return returnValue;
	}
	native private boolean getCurtainExtent_IClampSceneLayer_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long layer, long minPX, long minPY, long maxPX, long maxPY, long alpha);
	/**
	 * 获取指定图层的卷帘范围(像素单位，取值为[-1,1])
	 * @param layer 图层
	 * @param minPX 最小x坐标
	 * @param minPY 最小y坐标
	 * @param maxPX 最大x坐标
	 * @param maxPY 最大y坐标
	 * @return 是否成功
	 */
	public boolean getCurtainExtent(com.earthview.world.spatial3d.atlas.Iclampscenelayer layer, FloatPointer minPX, FloatPointer minPY, FloatPointer maxPX, FloatPointer maxPY, FloatPointer alpha)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long minPXParamValue = minPX.nativeObject.pointer;
		long minPYParamValue = minPY.nativeObject.pointer;
		long maxPXParamValue = maxPX.nativeObject.pointer;
		long maxPYParamValue = maxPY.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		boolean returnValue = getCurtainExtent_IClampSceneLayer_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, layerParamValue, minPXParamValue, minPYParamValue, maxPXParamValue, maxPYParamValue, alphaParamValue);
		return returnValue;
	}
	native private boolean getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long minPX, long minPY, long maxPX, long maxPY);
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

	native private boolean addLayer_IClampSceneLayer(long pNativeObject, long ref_layer);
	/**
	 * 添加一个EarthView::World::Spatial3D::Atlas::IClampSceneLayer图层
	 * @param layer 图层
	 */
	public boolean addLayer(com.earthview.world.spatial3d.atlas.Iclampscenelayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = addLayer_IClampSceneLayer(this.nativeObject.pointer, ref_layerParamValue);
		return returnValue;
	}
	native private boolean insertLayer_ev_uint32_IClampSceneLayer(long pNativeObject, long pos, long ref_layer);
	/**
	 * 插入一个EarthView::World::Spatial3D::Atlas::IClampSceneLayer图层
	 * @param pos 插入的位置
	 * @param layer 图层
	 */
	public boolean insertLayer(long pos, com.earthview.world.spatial3d.atlas.Iclampscenelayer ref_layer)
	{
		long posParamValue = pos;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = insertLayer_ev_uint32_IClampSceneLayer(this.nativeObject.pointer, posParamValue, ref_layerParamValue);
		return returnValue;
	}
	native private boolean removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除图层
	 * @param index 索引
	 * @return 是否成功
	 */
	public boolean removeLayer(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeLayer_IClampSceneLayer(long pNativeObject, long layer);
	/**
	 * 删除图层
	 * @param layer 图层
	 * @return 是否成功
	 */
	public boolean removeLayer(com.earthview.world.spatial3d.atlas.Iclampscenelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_IClampSceneLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取EarthView::World::Spatial3D::Atlas::IClampSceneLayer的数量
	 * @param  
	 * @return EarthView::World::Spatial3D::Atlas::IClampSceneLayer的数量
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLayerIndex_IClampSceneLayer(long pNativeObject, long layer);
	/**
	 * 获取EarthView::World::Spatial3D::Atlas::IClampSceneLayer的索引
	 * @param layer WMTSLayer图层
	 * @return EarthView::World::Spatial3D::Atlas::IClampSceneLayer的索引
	 */
	public int getLayerIndex(com.earthview.world.spatial3d.atlas.Iclampscenelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int returnValue = getLayerIndex_IClampSceneLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	protected  long getLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial3d.atlas.Iclampscenelayer returnValue = getLayer(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取影像图层或者图层组调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
	 * @param index 索引
	 */
	public com.earthview.world.spatial3d.atlas.Iclampscenelayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iclampscenelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate, "IClampSceneLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iclampscenelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IClampSceneLayer");
		}
		return __returnValue;
	}
	native private long getLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial3d.atlas.Iclampscenelayer getLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iclampscenelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iclampscenelayer(CreatedWhenConstruct.CWC_NotToCreate, "IClampSceneLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iclampscenelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IClampSceneLayer");
		}
		return __returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置图层可见性
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean moveLayer_ev_uint32_ev_uint32(long pNativeObject, long index, long pos);
	/**
	 * 移动图层顺序
	 * @param index 索引
	 * @param pos 移动后的顺序
	 * @return 是否成功
	 */
	public boolean moveLayer(long index, long pos)
	{
		long indexParamValue = index;
		long posParamValue = pos;
		boolean returnValue = moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, posParamValue);
		return returnValue;
	}
	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * 通知图层增加
	 * @param pSceneMgr 场景管理器
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
	 * 通知图层移除
	 * @param pSceneMgr 场景管理器
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

	native private void _notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, long camera, int updateType);
	/**
	 * 通知图层刷新
	 * @param camera 镜头
	 * @param updateType 刷新类型
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}
	native private void _notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(long pNativeObject, long camera, int updateType);
	protected void _notifyRefreshed_NoVirtual(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}

	native private void _notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	/**
	 * 数据集变更通知
	 * @param strDataSourceName 数据源名称
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent_NoVirtual(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	protected void _notifyDataChanged_NoVirtual(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent_NoVirtual(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private long getTimeList_void(long pNativeObject);
	/**
	 * 获得时间的刻度
	 * @param  
	 */
	public com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimeList getTimeList()
	{
		long returnValue = getTimeList_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimeList __returnValue = new com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimeList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TimeList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.ImageGroupLayer.TimeList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TimeList");
		}
		return __returnValue;
	}
	native private void setDesiredTime_CDesiredTime_ev_bool(long pNativeObject, long dt, long layerOrderChanged);
	/**
	 * 设置期望的时间
	 * @param dt 期望时间
	 * @param layerOrderChanged 图层顺序是否改变
	 */
	public void setDesiredTime(com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTime dt, BooleanPointer layerOrderChanged)
	{
		long dtParamValue = dt.nativeObject.pointer;
		long layerOrderChangedParamValue = layerOrderChanged.nativeObject.pointer;
		setDesiredTime_CDesiredTime_ev_bool(this.nativeObject.pointer, dtParamValue, layerOrderChangedParamValue);
	}
	native private long getDesiredTime_void(long pNativeObject);
	/**
	 * 获取期望的时间
	 * @param  
	 * @return 期望时间
	 */
	public com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTime getDesiredTime()
	{
		long returnValue = getDesiredTime_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTime __returnValue = new com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTime(CreatedWhenConstruct.CWC_NotToCreate, "CDesiredTime");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.ImageGroupLayer.DesiredTime)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDesiredTime");
		}
		return __returnValue;
	}
	native private void setDesiredTimeValid_ev_bool_ev_bool(long pNativeObject, boolean valid, long layerOrderChanged);
	/**
	 * 设置期望的时间是否有效
	 * @param valid 是否有效
	 * @param layerOrderChanged 图层顺序是否改变
	 */
	public void setDesiredTimeValid(boolean valid, BooleanPointer layerOrderChanged)
	{
		boolean validParamValue = valid;
		long layerOrderChangedParamValue = layerOrderChanged.nativeObject.pointer;
		setDesiredTimeValid_ev_bool_ev_bool(this.nativeObject.pointer, validParamValue, layerOrderChangedParamValue);
	}
	native private boolean getDesiredTimeValid_void(long pNativeObject);
	/**
	 * 获取期望的时间是否有效
	 * @param  
	 * @return 是否有效
	 */
	public boolean getDesiredTimeValid()
	{
		boolean returnValue = getDesiredTimeValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasVisibleLayer_void(long pNativeObject);
	/**
	 * 判断是否有可见图层
	 * @param  
	 * @return 是否有效
	 */
	public boolean hasVisibleLayer()
	{
		boolean returnValue = hasVisibleLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setCurtainEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 启用或者禁用卷帘
	 * @param enabled 
	 * @return 是否有效
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

	native private boolean getCurtainEnabled_void(long pNativeObject);
	/**
	 * 获取卷帘是否启用
	 * @param enabled 
	 * @return 是否有效
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

	native private long getCurtainLayerCount_void(long pNativeObject);
	/**
	 * 获取卷帘图层数量
	 */
	public long getCurtainLayerCount()
	{
		long returnValue = getCurtainLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getLayerCurtainEnabled_IClampSceneLayer(long pNativeObject, long layer);
	/**
	 * 获取图层是否开启卷帘
	 */
	public boolean getLayerCurtainEnabled(com.earthview.world.spatial3d.atlas.Iclampscenelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = getLayerCurtainEnabled_IClampSceneLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml恢复图层参数
	 * @param element xml
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	public ImageGroupLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageGroupLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取瓦片，具体在子类中实现
	 * @param tile 瓦片内容
	 * @param north 瓦片信息
	 * @return 是否成功
	 */
	public boolean getTile(com.earthview.world.spatial.TileInfo tileInfo, com.earthview.world.spatial.TileData tile)
	{
		return super.getTile_NoVirtual(tileInfo, tile);
	}
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
		return super.getTile_NoVirtual(minX, minY, maxX, maxY, tile);
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
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
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
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getLayer_ev_uint32(long pNativeObject, String method);
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
			this.register_getLayer_ev_uint32(this.nativeObject.pointer, "getLayer_ev_uint32_callback");
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
	
	public static ImageGroupLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageGroupLayer obj = null;
 		if(baseObj instanceof ImageGroupLayer)
		{
			obj = (ImageGroupLayer)baseObj;
		} else {
			obj = new ImageGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageGroupLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
