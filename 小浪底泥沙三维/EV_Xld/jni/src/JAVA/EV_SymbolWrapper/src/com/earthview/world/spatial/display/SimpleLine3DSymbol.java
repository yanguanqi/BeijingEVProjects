package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线扩展符号				
 */
public class SimpleLine3DSymbol extends com.earthview.world.spatial.display.Symbol3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSimpleLine3DSymbol", new SimpleLine3DSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSimpleLine3DSymbolProxy", new SimpleLine3DSymbolClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SimpleLine3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSimpleLine3DSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SimpleLine3DSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getTransectShapeType_void(long pNativeObject);
	/**
	 * 获取线扩展截面形状类型
	 * @param  
	 * @return 截面形状类型
	 */
	public com.earthview.world.spatial.display.EVTransectShapeType getTransectShapeType()
	{
		int returnValue = getTransectShapeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVTransectShapeType.toEnum(returnValue);
	}
	native private void setTransectShapeType_EVTransectShapeType(long pNativeObject, int type);
	/**
	 * 设置线扩展截面形状类型
	 * @param type 截面形状类型
	 */
	public void setTransectShapeType(com.earthview.world.spatial.display.EVTransectShapeType type)
	{
		int typeParamValue = type.getValue();
		setTransectShapeType_EVTransectShapeType(this.nativeObject.pointer, typeParamValue);
	}
	native private long getPropertyCount_void(long pNativeObject);
	/**
	 * 获取线扩展属性数量
	 * @param  
	 * @return 属性数量
	 */
	public long getPropertyCount()
	{
		long returnValue = getPropertyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getProperty_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取线扩展属性
	 * @param index 索引
	 */
	public com.earthview.world.spatial.display.KeyValuePair getProperty(long index)
	{
		long indexParamValue = index;
		long returnValue = getProperty_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.display.KeyValuePair __returnValue = new com.earthview.world.spatial.display.KeyValuePair(CreatedWhenConstruct.CWC_NotToCreate, "KeyValuePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.KeyValuePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "KeyValuePair");
		}
		return __returnValue;
	}
	native private void setPropertyValue_ev_uint32_EVString(long pNativeObject, long index, String value);
	/**
	 * 设置线扩展属性
	 * @param index 属性索引
	 * @param value 属性
	 */
	public void setPropertyValue(long index, String value)
	{
		long indexParamValue = index;
		String valueParamValue = value;
		setPropertyValue_ev_uint32_EVString(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private long getPropertyFieldCount_void(long pNativeObject);
	/**
	 * 获取线扩展属性字段数量，和属性相同
	 * @param  
	 * @return 属性数量
	 */
	public long getPropertyFieldCount()
	{
		long returnValue = getPropertyFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPropertyField_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取线扩展属性字段
	 * @param index 索引
	 */
	public com.earthview.world.spatial.display.KeyValuePair getPropertyField(long index)
	{
		long indexParamValue = index;
		long returnValue = getPropertyField_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.display.KeyValuePair __returnValue = new com.earthview.world.spatial.display.KeyValuePair(CreatedWhenConstruct.CWC_NotToCreate, "KeyValuePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.KeyValuePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "KeyValuePair");
		}
		return __returnValue;
	}
	native private void setPropertyFieldValue_ev_uint32_EVString(long pNativeObject, long index, String value);
	/**
	 * 设置线扩展属性字段
	 * @param index 属性索引
	 * @param value 属性字段
	 */
	public void setPropertyFieldValue(long index, String value)
	{
		long indexParamValue = index;
		String valueParamValue = value;
		setPropertyFieldValue_ev_uint32_EVString(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private int getHeaderClosed_void(long pNativeObject);
	/**
	 * 获取线扩展首端闭合类型
	 * @param  
	 * @return 首端闭合类型
	 */
	public com.earthview.world.spatial.display.EVClosedShapeType getHeaderClosed()
	{
		int returnValue = getHeaderClosed_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVClosedShapeType.toEnum(returnValue);
	}
	native private void setHeaderClosed_EVClosedShapeType(long pNativeObject, int closed);
	/**
	 * 设置线扩展首端闭合类型
	 * @param closed 首端闭合类型
	 */
	public void setHeaderClosed(com.earthview.world.spatial.display.EVClosedShapeType closed)
	{
		int closedParamValue = closed.getValue();
		setHeaderClosed_EVClosedShapeType(this.nativeObject.pointer, closedParamValue);
	}
	native private int getTailClosed_void(long pNativeObject);
	/**
	 * 获取线扩展尾端闭合类型
	 * @param  
	 * @return 尾端闭合类型
	 */
	public com.earthview.world.spatial.display.EVClosedShapeType getTailClosed()
	{
		int returnValue = getTailClosed_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVClosedShapeType.toEnum(returnValue);
	}
	native private void setTailClosed_EVClosedShapeType(long pNativeObject, int closed);
	/**
	 * 设置线扩展尾端闭合类型
	 * @param closed 尾端闭合类型
	 */
	public void setTailClosed(com.earthview.world.spatial.display.EVClosedShapeType closed)
	{
		int closedParamValue = closed.getValue();
		setTailClosed_EVClosedShapeType(this.nativeObject.pointer, closedParamValue);
	}
	native private long getFillColor_void(long pNativeObject);
	/**
	 * 获取填充颜色
	 * @param  
	 * @return 填充颜色
	 */
	public com.earthview.world.spatial.display.Icolor getFillColor()
	{
		long returnValue = getFillColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private boolean setFillColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置填充颜色
	 * @param pColor 填充颜色
	 */
	public boolean setFillColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		boolean returnValue = setFillColor_IColor(this.nativeObject.pointer, pColorParamValue);
		return returnValue;
	}
	native private long getLineColor_void(long pNativeObject);
	/**
	 * 获取线扩展边框颜色
	 * @param  
	 * @return 线扩展边框颜色
	 */
	public com.earthview.world.spatial.display.Icolor getLineColor()
	{
		long returnValue = getLineColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private boolean setLineColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置线扩展边框颜色
	 * @param pColor 线扩展边框颜色
	 */
	public boolean setLineColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		boolean returnValue = setLineColor_IColor(this.nativeObject.pointer, pColorParamValue);
		return returnValue;
	}
	protected  void setDrawingMode_EVSymbol3DDrawingMode_callback(int mode)
	{
		com.earthview.world.spatial.display.EVSymbol3DDrawingMode modeParamValue = com.earthview.world.spatial.display.EVSymbol3DDrawingMode.toEnum(mode);
		setDrawingMode(modeParamValue);
	}

	native private void setDrawingMode_EVSymbol3DDrawingMode(long pNativeObject, int mode);
	/**
	 * 设置绘制模式
	 * @param mode 绘制模式
	 */
	public void setDrawingMode(com.earthview.world.spatial.display.EVSymbol3DDrawingMode mode)
	{
		int modeParamValue = mode.getValue();
		setDrawingMode_EVSymbol3DDrawingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setDrawingMode_EVSymbol3DDrawingMode_NoVirtual(long pNativeObject, int mode);
	protected void setDrawingMode_NoVirtual(com.earthview.world.spatial.display.EVSymbol3DDrawingMode mode)
	{
		int modeParamValue = mode.getValue();
		setDrawingMode_EVSymbol3DDrawingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	protected  int getDrawingMode_void_callback()
	{
		com.earthview.world.spatial.display.EVSymbol3DDrawingMode returnValue = getDrawingMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDrawingMode_void(long pNativeObject);
	/**
	 * 获取绘制模式
	 * @param  
	 * @return 绘制模式
	 */
	public com.earthview.world.spatial.display.EVSymbol3DDrawingMode getDrawingMode()
	{
		int returnValue = getDrawingMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVSymbol3DDrawingMode.toEnum(returnValue);
	}
	native private int getDrawingMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVSymbol3DDrawingMode getDrawingMode_NoVirtual()
	{
		int returnValue = getDrawingMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVSymbol3DDrawingMode.toEnum(returnValue);
	}

	native private void setNeedInterpolate_ev_bool(long pNativeObject, boolean need);
	/**
	 * 设置线扩展是否插值
	 * @param need 线扩展是否插值
	 */
	public void setNeedInterpolate(boolean need)
	{
		boolean needParamValue = need;
		setNeedInterpolate_ev_bool(this.nativeObject.pointer, needParamValue);
	}
	native private boolean getNeedInterpolate_void(long pNativeObject);
	/**
	 * 设置线扩展是否插值
	 * @param  
	 * @return 线扩展是否插值
	 */
	public boolean getNeedInterpolate()
	{
		boolean returnValue = getNeedInterpolate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCornerSmoothing_ev_bool(long pNativeObject, boolean smooth);
	/**
	 * 设置线扩展拐点是否平滑插值,局部坐标不考虑
	 * @param smooth 线扩展是否平滑插值
	 */
	public void setCornerSmoothing(boolean smooth)
	{
		boolean smoothParamValue = smooth;
		setCornerSmoothing_ev_bool(this.nativeObject.pointer, smoothParamValue);
	}
	native private boolean getCornerSmoothing_void(long pNativeObject);
	/**
	 * 拐点是否平滑插值,局部坐标不考虑
	 * @param  
	 * @return 拐点是否平滑插值
	 */
	public boolean getCornerSmoothing()
	{
		boolean returnValue = getCornerSmoothing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterpolateDistance_ev_real32(long pNativeObject, float dis);
	/**
	 * 设置线扩展插值距离
	 * @param dis 线扩展插值距离
	 */
	public void setInterpolateDistance(float dis)
	{
		float disParamValue = dis;
		setInterpolateDistance_ev_real32(this.nativeObject.pointer, disParamValue);
	}
	native private float getInterpolateDistance_void(long pNativeObject);
	/**
	 * 设置线扩展插值距离
	 * @param  
	 * @return 线扩展插值距离
	 */
	public float getInterpolateDistance()
	{
		float returnValue = getInterpolateDistance_void(this.nativeObject.pointer);
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

	native private long OperatorAssign_CSimpleLine3DSymbol(long pNativeObject, long other);
	/// <summary>
	///  复制操作，复制所有信息，含颜色，法向量
	/// <summary>
	public com.earthview.world.spatial.display.SimpleLine3DSymbol OperatorAssign(com.earthview.world.spatial.display.SimpleLine3DSymbol other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSimpleLine3DSymbol(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial.display.SimpleLine3DSymbol __returnValue = new com.earthview.world.spatial.display.SimpleLine3DSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleLine3DSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SimpleLine3DSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleLine3DSymbol");
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

	native private void setLineLabel_ev_bool(long pNativeObject, boolean lineLabel);
	/**
	 * 设置是否启用沿线注记
	 * @param lineLabel 是否启用沿线注记
	 */
	public void setLineLabel(boolean lineLabel)
	{
		boolean lineLabelParamValue = lineLabel;
		setLineLabel_ev_bool(this.nativeObject.pointer, lineLabelParamValue);
	}
	native private boolean getLineLabel_void(long pNativeObject);
	/**
	 * 获取是否开启了沿线注记
	 * @param  
	 * @return 是否启用沿线注记
	 */
	public boolean getLineLabel()
	{
		boolean returnValue = getLineLabel_void(this.nativeObject.pointer);
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

	public SimpleLine3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SimpleLine3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_setDrawingMode_EVSymbol3DDrawingMode(long pNativeObject, String method);
	native protected void register_getDrawingMode_void(long pNativeObject, String method);
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
			this.register_setDrawingMode_EVSymbol3DDrawingMode(this.nativeObject.pointer, "setDrawingMode_EVSymbol3DDrawingMode_callback");
			this.register_getDrawingMode_void(this.nativeObject.pointer, "getDrawingMode_void_callback");
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
	
	public static SimpleLine3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SimpleLine3DSymbol obj = null;
 		if(baseObj instanceof SimpleLine3DSymbol)
		{
			obj = (SimpleLine3DSymbol)baseObj;
		} else {
			obj = new SimpleLine3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimpleLine3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
