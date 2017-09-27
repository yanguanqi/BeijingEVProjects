package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图像符号				
 */
public class Photo3DSymbol extends com.earthview.world.spatial.display.Symbol3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CPhoto3DSymbol", new Photo3DSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCPhoto3DSymbolProxy", new Photo3DSymbolClassFactory());
	}

	public enum EVPhotoShapeType implements INativeEnum<EVPhotoShapeType> {
		PST_Rectangle(EVPhotoShapeTypeHelper.ENUM_VALUES[0]),
		PST_Column(EVPhotoShapeTypeHelper.ENUM_VALUES[1]),
		PST_Sphere(EVPhotoShapeTypeHelper.ENUM_VALUES[2]);
		private int value;
		EVPhotoShapeType(int i) {
			this.value = i;
		}
		public EVPhotoShapeType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPhotoShapeType toEnum(int retval) {
			if(retval == PST_Rectangle.value){
				return PST_Rectangle;
			}
			else if(retval == PST_Column.value){
				return PST_Column;
			}
			else if(retval == PST_Sphere.value){
				return PST_Sphere;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPhotoShapeTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPhotoTileOriginType implements INativeEnum<EVPhotoTileOriginType> {
		POT_LowerLeft(EVPhotoTileOriginTypeHelper.ENUM_VALUES[0]),
		POT_UpperLeft(EVPhotoTileOriginTypeHelper.ENUM_VALUES[1]);
		private int value;
		EVPhotoTileOriginType(int i) {
			this.value = i;
		}
		public EVPhotoTileOriginType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPhotoTileOriginType toEnum(int retval) {
			if(retval == POT_LowerLeft.value){
				return POT_LowerLeft;
			}
			else if(retval == POT_UpperLeft.value){
				return POT_UpperLeft;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPhotoTileOriginTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public Photo3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPhoto3DSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Photo3DSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getPhotoUri_void(long pNativeObject);
	/**
	 * 获取图像路径
	 * @param  
	 * @return 图像路径
	 */
	public StringPointer getPhotoUri()
	{
		long returnValue = getPhotoUri_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPhotoUri_EVString(long pNativeObject, String uri);
	/**
	 * 设置图像路径
	 * @param uri 图像路径
	 */
	public void setPhotoUri(String uri)
	{
		String uriParamValue = uri;
		setPhotoUri_EVString(this.nativeObject.pointer, uriParamValue);
	}
	native private float getRotate_void(long pNativeObject);
	/**
	 * 获取图像旋转角度
	 * @param  
	 * @return 图像旋转角度
	 */
	public float getRotate()
	{
		float returnValue = getRotate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotate_ev_real32(long pNativeObject, float angle);
	/**
	 * 设置图像旋转角度
	 * @param angle 图像旋转角度
	 */
	public void setRotate(float angle)
	{
		float angleParamValue = angle;
		setRotate_ev_real32(this.nativeObject.pointer, angleParamValue);
	}
	native private int getShapeType_void(long pNativeObject);
	/**
	 * 获取图像几何形状类型
	 * @param  
	 * @return 几何形状类型
	 */
	public com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoShapeType getShapeType()
	{
		int returnValue = getShapeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoShapeType.toEnum(returnValue);
	}
	native private void setShapeType_EVPhotoShapeType(long pNativeObject, int type);
	/**
	 * 设置图像几何形状类型
	 * @param type 几何形状类型
	 */
	public void setShapeType(com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoShapeType type)
	{
		int typeParamValue = type.getValue();
		setShapeType_EVPhotoShapeType(this.nativeObject.pointer, typeParamValue);
	}
	native private float getLeftFOV_void(long pNativeObject);
	/**
	 * 获取左视角
	 * @param  
	 * @return 左视角
	 */
	public float getLeftFOV()
	{
		float returnValue = getLeftFOV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLeftFOV_ev_real32(long pNativeObject, float fov);
	/**
	 * 设置左视角
	 * @param fov 左视角
	 */
	public void setLeftFOV(float fov)
	{
		float fovParamValue = fov;
		setLeftFOV_ev_real32(this.nativeObject.pointer, fovParamValue);
	}
	native private float getRightFOV_void(long pNativeObject);
	/**
	 * 获取右视角
	 * @param  
	 * @return 右视角
	 */
	public float getRightFOV()
	{
		float returnValue = getRightFOV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRightFOV_ev_real32(long pNativeObject, float fov);
	/**
	 * 设置右视角
	 * @param fov 右视角
	 */
	public void setRightFOV(float fov)
	{
		float fovParamValue = fov;
		setRightFOV_ev_real32(this.nativeObject.pointer, fovParamValue);
	}
	native private float getTopFOV_void(long pNativeObject);
	/**
	 * 获取顶视角
	 * @param  
	 * @return 顶视角
	 */
	public float getTopFOV()
	{
		float returnValue = getTopFOV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopFOV_ev_real32(long pNativeObject, float fov);
	/**
	 * 设置顶视角
	 * @param fov 顶视角
	 */
	public void setTopFOV(float fov)
	{
		float fovParamValue = fov;
		setTopFOV_ev_real32(this.nativeObject.pointer, fovParamValue);
	}
	native private float getBottomFOV_void(long pNativeObject);
	/**
	 * 获取底视角
	 * @param  
	 * @return 底视角
	 */
	public float getBottomFOV()
	{
		float returnValue = getBottomFOV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBottomFOV_ev_real32(long pNativeObject, float fov);
	/**
	 * 设置底视角
	 * @param fov 底视角
	 */
	public void setBottomFOV(float fov)
	{
		float fovParamValue = fov;
		setBottomFOV_ev_real32(this.nativeObject.pointer, fovParamValue);
	}
	native private double getViewNear_void(long pNativeObject);
	/**
	 * 获取最近视距
	 * @param  
	 * @return 最近视距
	 */
	public double getViewNear()
	{
		double returnValue = getViewNear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setViewNear_ev_real64(long pNativeObject, double n);
	/**
	 * 设置最近视距
	 * @param n 最近视距
	 */
	public void setViewNear(double n)
	{
		double nParamValue = n;
		setViewNear_ev_real64(this.nativeObject.pointer, nParamValue);
	}
	native private boolean getUseTile_void(long pNativeObject);
	/**
	 * 获取是否应用瓦片
	 * @param  
	 * @return 是否应用瓦片
	 */
	public boolean getUseTile()
	{
		boolean returnValue = getUseTile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseTile_ev_bool(long pNativeObject, boolean bUseTile);
	/**
	 * 设置是否应用瓦片
	 * @param bUseTile 是否应用瓦片
	 */
	public void setUseTile(boolean bUseTile)
	{
		boolean bUseTileParamValue = bUseTile;
		setUseTile_ev_bool(this.nativeObject.pointer, bUseTileParamValue);
	}
	native private long getTileSize_void(long pNativeObject);
	/**
	 * 获取瓦片大小
	 * @param  
	 * @return 瓦片大小
	 */
	public long getTileSize()
	{
		long returnValue = getTileSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTileSize_ev_uint32(long pNativeObject, long size);
	/**
	 * 设置瓦片大小
	 * @param size 瓦片大小
	 */
	public void setTileSize(long size)
	{
		long sizeParamValue = size;
		setTileSize_ev_uint32(this.nativeObject.pointer, sizeParamValue);
	}
	native private long getMaxWidth_void(long pNativeObject);
	/**
	 * 获取最大宽度
	 * @param  
	 * @return 最大宽度
	 */
	public long getMaxWidth()
	{
		long returnValue = getMaxWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxWidth_ev_uint32(long pNativeObject, long width);
	/**
	 * 设置最大宽度
	 * @param width 最大宽度
	 */
	public void setMaxWidth(long width)
	{
		long widthParamValue = width;
		setMaxWidth_ev_uint32(this.nativeObject.pointer, widthParamValue);
	}
	native private long getMaxHeight_void(long pNativeObject);
	/**
	 * 获取最大高度
	 * @param  
	 * @return 最大高度
	 */
	public long getMaxHeight()
	{
		long returnValue = getMaxHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxHeight_ev_uint32(long pNativeObject, long height);
	/**
	 * 设置最大高度
	 * @param height 最大高度
	 */
	public void setMaxHeight(long height)
	{
		long heightParamValue = height;
		setMaxHeight_ev_uint32(this.nativeObject.pointer, heightParamValue);
	}
	native private int getGridOrigin_void(long pNativeObject);
	/**
	 * 获取中心点
	 * @param  
	 * @return 中心点
	 */
	public com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoTileOriginType getGridOrigin()
	{
		int returnValue = getGridOrigin_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoTileOriginType.toEnum(returnValue);
	}
	native private void setGridOrigin_EVPhotoTileOriginType(long pNativeObject, int index);
	/**
	 * 设置中心点
	 * @param index 中心点类型
	 */
	public void setGridOrigin(com.earthview.world.spatial.display.Photo3DSymbol.EVPhotoTileOriginType index)
	{
		int indexParamValue = index.getValue();
		setGridOrigin_EVPhotoTileOriginType(this.nativeObject.pointer, indexParamValue);
	}
	native private int getSymbolType_void(long pNativeObject);
	/**
	 * 获取符号类型
	 * @param  
	 */
	public int getSymbolType()
	{
		int returnValue = getSymbolType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolType_void_NoVirtual(long pNativeObject);
	protected int getSymbolType_NoVirtual()
	{
		int returnValue = getSymbolType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param  
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 自我复制
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private boolean similar_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否相似如果相似，则可以同一批次创建三维渲染对象
	 * @param pSymbol Symbol对象
	 */
	public boolean similar(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = similar_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean similar_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean similar_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = similar_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Photo3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Photo3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取风格颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontColor()
	{
		return super.getFontColor_NoVirtual();
	}
	/**
	 * 获取字体边框颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontOutlineColor()
	{
		return super.getFontOutlineColor_NoVirtual();
	}
	/**
	 * 设置字体边框颜色
	 * @param color 字体边框颜色
	 */
	public void setFontOutlineColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setFontOutlineColor_NoVirtual(color);
	}
	/**
	 * 设置风格颜色
	 * @param color 风格颜色
	 */
	public void setFontColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setFontColor_NoVirtual(color);
	}
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 将符号输出到SLD字符串
	 * @param  
	 * @return 返回SLD字符串
	 */
	public String toSLD()
	{
		return super.toSLD_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 符号知否包含图像
	 * @param  
	 * @return 如果包含返回true；否则返回false
	 */
	public boolean hasImage()
	{
		return super.hasImage_NoVirtual();
	}
	/**
	 * 获取包含图像数量
	 * @param  
	 * @return 返回包含图像数量
	 */
	public long getImageCount()
	{
		return super.getImageCount_NoVirtual();
	}
	/**
	 * 获取指定索引处图像ID
	 * @param index 指定位置
	 * @return 返回图像ID
	 */
	public String getImageID(long index)
	{
		return super.getImageID_NoVirtual(index);
	}
	/**
	 * 以内存流的形式获取指定索引处图像
	 * @param index 指定位置
	 * @return 返回图像流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		return super.getImage_NoVirtual(index);
	}
	/**
	 * 设置指定索引的图像
	 * @param index 指定位置
	 * @param imageID 输出，图像
	 * @param stream 输入，流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		super.setImage_NoVirtual(index, imageID, stream);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	/**
	 * 从SLD读取符号
	 * @param sld SLD
	 */
	public void fromSLD(StringPointer sld)
	{
		super.fromSLD_NoVirtual(sld);
	}
	
	native protected void register_similar_ISymbol(long pNativeObject, String method);
	native protected void register_getFontColor_void(long pNativeObject, String method);
	native protected void register_getFontOutlineColor_void(long pNativeObject, String method);
	native protected void register_setFontOutlineColor_IColor(long pNativeObject, String method);
	native protected void register_setFontColor_IColor(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_similar_ISymbol(this.nativeObject.pointer, "similar_ISymbol_callback");
			this.register_getFontColor_void(this.nativeObject.pointer, "getFontColor_void_callback");
			this.register_getFontOutlineColor_void(this.nativeObject.pointer, "getFontOutlineColor_void_callback");
			this.register_setFontOutlineColor_IColor(this.nativeObject.pointer, "setFontOutlineColor_IColor_callback");
			this.register_setFontColor_IColor(this.nativeObject.pointer, "setFontColor_IColor_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Photo3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Photo3DSymbol obj = null;
 		if(baseObj instanceof Photo3DSymbol)
		{
			obj = (Photo3DSymbol)baseObj;
		} else {
			obj = new Photo3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPhoto3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
