package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 广告板符号				
 */
public class Billboard3DSymbol extends com.earthview.world.spatial.display.Symbol3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CBillboard3DSymbol", new Billboard3DSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCBillboard3DSymbolProxy", new Billboard3DSymbolClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Billboard3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBillboard3DSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Billboard3DSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getBillboardOriginType_void(long pNativeObject);
	/**
	 * 获取广告板几何中心位置的枚举类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVBillboardOriginType getBillboardOriginType()
	{
		int returnValue = getBillboardOriginType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVBillboardOriginType.toEnum(returnValue);
	}
	native private void setBillboardOriginType_EVBillboardOriginType(long pNativeObject, int type);
	/**
	 * 设置广告板几何中心位置的枚举类型
	 * @param  
	 */
	public void setBillboardOriginType(com.earthview.world.spatial.display.EVBillboardOriginType type)
	{
		int typeParamValue = type.getValue();
		setBillboardOriginType_EVBillboardOriginType(this.nativeObject.pointer, typeParamValue);
	}
	native private float getBillboardWidth_void(long pNativeObject);
	/**
	 * 获取广告板宽度
	 * @param  
	 */
	public float getBillboardWidth()
	{
		float returnValue = getBillboardWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBillboardWidth_ev_real32(long pNativeObject, float w);
	/**
	 * 设置广告板宽度
	 * @param  
	 */
	public void setBillboardWidth(float w)
	{
		float wParamValue = w;
		setBillboardWidth_ev_real32(this.nativeObject.pointer, wParamValue);
	}
	native private float getBillboardHeight_void(long pNativeObject);
	/**
	 * 获取广告板高度
	 * @param  
	 */
	public float getBillboardHeight()
	{
		float returnValue = getBillboardHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBillboardHeight_ev_real32(long pNativeObject, float h);
	/**
	 * 设置广告板高度
	 * @param  
	 */
	public void setBillboardHeight(float h)
	{
		float hParamValue = h;
		setBillboardHeight_ev_real32(this.nativeObject.pointer, hParamValue);
	}
	native private long getPictureID_void(long pNativeObject);
	/**
	 * 获取广告板显示的图片的ID
	 * @param  
	 */
	public StringPointer getPictureID()
	{
		long returnValue = getPictureID_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPictureID_EVString(long pNativeObject, String id);
	/**
	 * 设置广告板显示的图片的ID
	 * @param  
	 */
	public void setPictureID(String id)
	{
		String idParamValue = id;
		setPictureID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private boolean hasImage_void(long pNativeObject);
	/**
	 * 是否含有图片
	 * @param  
	 */
	public boolean hasImage()
	{
		boolean returnValue = hasImage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasImage_void_NoVirtual(long pNativeObject);
	protected boolean hasImage_NoVirtual()
	{
		boolean returnValue = hasImage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getImageCount_void(long pNativeObject);
	/**
	 * 获取图片的个数
	 * @param  
	 * @return 图片个数
	 */
	public long getImageCount()
	{
		long returnValue = getImageCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getImageCount_void_NoVirtual(long pNativeObject);
	protected long getImageCount_NoVirtual()
	{
		long returnValue = getImageCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getImageID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的ID
	 * @param index 图片序列号
	 * @return 图片ID
	 */
	public String getImageID(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getImageID_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getImageID_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getImage_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的数据
	 * @param index 图片序列号
	 * @return 图片数据流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getImage_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.core.MemoryDataStreamPtr getImage_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, long index, String imageID, long stream);
	/**
	 * 设置指定图片的数据
	 * @param index 图片序列号
	 * @param imageID 图片ID
	 * @return 图片数据流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}
	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long index, String imageID, long stream);
	protected void setImage_NoVirtual(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}

	native private float getPictureScale_void(long pNativeObject);
	/**
	 * 获取广告板显示的图片的缩放比例
	 * @param  
	 */
	public float getPictureScale()
	{
		float returnValue = getPictureScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPictureScale_ev_real32(long pNativeObject, float scale);
	/**
	 * 设置广告板显示的图片的缩放比例
	 * @param  
	 */
	public void setPictureScale(float scale)
	{
		float scaleParamValue = scale;
		setPictureScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private boolean getLiedown_void(long pNativeObject);
	/**
	 * 获取广告板是否平行于地面显示
	 * @param  
	 */
	public boolean getLiedown()
	{
		boolean returnValue = getLiedown_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLiedown_ev_bool(long pNativeObject, boolean liedown);
	/**
	 * 设置广告板显示的图片的缩放比例
	 * @param  
	 */
	public void setLiedown(boolean liedown)
	{
		boolean liedownParamValue = liedown;
		setLiedown_ev_bool(this.nativeObject.pointer, liedownParamValue);
	}
	native private float getPictureAngle_void(long pNativeObject);
	/**
	 * 获取广告板显示的图片的旋转角度
	 * @param  
	 */
	public float getPictureAngle()
	{
		float returnValue = getPictureAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPictureAngle_ev_real32(long pNativeObject, float angle);
	/**
	 * 设置广告板显示的图片的旋转角度
	 * @param  
	 */
	public void setPictureAngle(float angle)
	{
		float angleParamValue = angle;
		setPictureAngle_ev_real32(this.nativeObject.pointer, angleParamValue);
	}
	native private long getPictureAngleField_void(long pNativeObject);
	/**
	 * 获取图片旋转角度字段值
	 * @param  
	 * @return 图片旋转角度字段值
	 */
	public StringPointer getPictureAngleField()
	{
		long returnValue = getPictureAngleField_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPictureAngleField_EVString(long pNativeObject, String paf);
	/**
	 * 设置片旋转角度字段值
	 * @param paf 图片旋转角度字段值
	 */
	public void setPictureAngleField(String paf)
	{
		String pafParamValue = paf;
		setPictureAngleField_EVString(this.nativeObject.pointer, pafParamValue);
	}
	native private boolean getShowPicture_void(long pNativeObject);
	/**
	 * 询问广告板是否显示图片
	 * @param  
	 */
	public boolean getShowPicture()
	{
		boolean returnValue = getShowPicture_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShowPicture_ev_bool(long pNativeObject, boolean bShow);
	/**
	 * 设置广告板是否显示图片
	 * @param  
	 */
	public void setShowPicture(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		setShowPicture_ev_bool(this.nativeObject.pointer, bShowParamValue);
	}
	native private boolean getImageDirty_void(long pNativeObject);
	/**
	 * 询问广告板图片是否已经修改
	 * @param  
	 */
	public boolean getImageDirty()
	{
		boolean returnValue = getImageDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setImageDirty_ev_bool(long pNativeObject, boolean dirty);
	/**
	 * 设置广告板图片是否已经修改
	 * @param  
	 */
	public void setImageDirty(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setImageDirty_ev_bool(this.nativeObject.pointer, dirtyParamValue);
	}
	native private float getPicTransparency_void(long pNativeObject);
	/**
	 * 获取不透明度
	 * @param  
	 * @return 透明度(0:完全透明;1:完全不透明)
	 */
	public float getPicTransparency()
	{
		float returnValue = getPicTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPicTransparency_ev_real32(long pNativeObject, float t);
	/**
	 * 设置透明度
	 * @param t 透明度(0:完全透明;1:完全不透明)
	 */
	public void setPicTransparency(float t)
	{
		float tParamValue = t;
		setPicTransparency_ev_real32(this.nativeObject.pointer, tParamValue);
	}
	native private void setDownToGround_ev_bool(long pNativeObject, boolean downToGround);
	/**
	 * 设置延伸到地面
	 * @param downToGround 是否延伸到地面(false:延伸到地面;true:不延伸到地面)
	 */
	public void setDownToGround(boolean downToGround)
	{
		boolean downToGroundParamValue = downToGround;
		setDownToGround_ev_bool(this.nativeObject.pointer, downToGroundParamValue);
	}
	native private boolean getDownToGround_void(long pNativeObject);
	/**
	 * 获取延伸到地面
	 * @param  
	 * @return 是否延伸到地面(false:延伸到地面;true:不延伸到地面)
	 */
	public boolean getDownToGround()
	{
		boolean returnValue = getDownToGround_void(this.nativeObject.pointer);
		return returnValue;
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

	public Billboard3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Billboard3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Billboard3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Billboard3DSymbol obj = null;
 		if(baseObj instanceof Billboard3DSymbol)
		{
			obj = (Billboard3DSymbol)baseObj;
		} else {
			obj = new Billboard3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboard3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
