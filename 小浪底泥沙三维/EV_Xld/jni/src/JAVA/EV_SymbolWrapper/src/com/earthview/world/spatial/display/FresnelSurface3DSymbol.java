package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 水面符号				
 */
public class FresnelSurface3DSymbol extends com.earthview.world.spatial.display.Symbol3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CFresnelSurface3DSymbol", new FresnelSurface3DSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCFresnelSurface3DSymbolProxy", new FresnelSurface3DSymbolClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public FresnelSurface3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFresnelSurface3DSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.FresnelSurface3DSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setTimeValue_ev_real32(long pNativeObject, float t);
	/**
	 * 设置水面变动时间间隔
	 * @param t 时间间隔
	 */
	public void setTimeValue(float t)
	{
		float tParamValue = t;
		setTimeValue_ev_real32(this.nativeObject.pointer, tParamValue);
	}
	native private void setScroll_ev_real32(long pNativeObject, float scroll);
	/**
	 * 设置水面流动速度
	 * @param scroll 流动速度
	 */
	public void setScroll(float scroll)
	{
		float scrollParamValue = scroll;
		setScroll_ev_real32(this.nativeObject.pointer, scrollParamValue);
	}
	native private void setScale_ev_real32(long pNativeObject, float scale);
	/**
	 * 设置水面波动幅度
	 * @param scale 波动幅度
	 */
	public void setScale(float scale)
	{
		float scaleParamValue = scale;
		setScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private float getTimeValue_void(long pNativeObject);
	/**
	 * 获取水面变动时间间隔
	 * @param  
	 * @return 时间间隔
	 */
	public float getTimeValue()
	{
		float returnValue = getTimeValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getScroll_void(long pNativeObject);
	/**
	 * 获取水面流动速度
	 * @param  
	 * @return 流动速度
	 */
	public float getScroll()
	{
		float returnValue = getScroll_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getScale_void(long pNativeObject);
	/**
	 * 获取水面波动幅度
	 * @param  
	 * @return 波动幅度
	 */
	public float getScale()
	{
		float returnValue = getScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBrightnessScale_ev_real32(long pNativeObject, float scale);
	/**
	 * 设置水面亮度
	 * @param scale 亮度
	 */
	public void setBrightnessScale(float scale)
	{
		float scaleParamValue = scale;
		setBrightnessScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private float getBrightnessScale_void(long pNativeObject);
	/**
	 * 获取水面亮度
	 * @param  
	 * @return 亮度
	 */
	public float getBrightnessScale()
	{
		float returnValue = getBrightnessScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinDistance_ev_real32(long pNativeObject, float dis);
	/**
	 * 设置水面反射半径
	 * @param dis 水面反射半径
	 */
	public void setMinDistance(float dis)
	{
		float disParamValue = dis;
		setMinDistance_ev_real32(this.nativeObject.pointer, disParamValue);
	}
	native private float getMinDistance_void(long pNativeObject);
	/**
	 * 获取水面反射半径
	 * @param  
	 * @return 反射半径
	 */
	public float getMinDistance()
	{
		float returnValue = getMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisibleDistance_ev_real32(long pNativeObject, float dis);
	/**
	 * 设置水面的可视距离
	 * @param dis 水面的可视距离
	 */
	public void setVisibleDistance(float dis)
	{
		float disParamValue = dis;
		setVisibleDistance_ev_real32(this.nativeObject.pointer, disParamValue);
	}
	native private float getVisibleDistance_void(long pNativeObject);
	/**
	 * 获取水面的可视距离
	 * @param  
	 * @return 水面的可视距离
	 */
	public float getVisibleDistance()
	{
		float returnValue = getVisibleDistance_void(this.nativeObject.pointer);
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

	native private long getPictureUri_void(long pNativeObject);
	/**
	 * 获取图片路径
	 * @param  
	 * @return 图片路径
	 */
	public StringPointer getPictureUri()
	{
		long returnValue = getPictureUri_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPictureUri_EVString(long pNativeObject, String uri);
	/**
	 * 设置图片路径
	 * @param uri 图片路径
	 */
	public void setPictureUri(String uri)
	{
		String uriParamValue = uri;
		setPictureUri_EVString(this.nativeObject.pointer, uriParamValue);
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

	native private float getFlowSpeed_void(long pNativeObject);
	public float getFlowSpeed()
	{
		float returnValue = getFlowSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFlowSpeed_ev_real32(long pNativeObject, float speed);
	public void setFlowSpeed(float speed)
	{
		float speedParamValue = speed;
		setFlowSpeed_ev_real32(this.nativeObject.pointer, speedParamValue);
	}
	native private float getWaveDensity_void(long pNativeObject);
	public float getWaveDensity()
	{
		float returnValue = getWaveDensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWaveDensity_ev_real32(long pNativeObject, float density);
	public void setWaveDensity(float density)
	{
		float densityParamValue = density;
		setWaveDensity_ev_real32(this.nativeObject.pointer, densityParamValue);
	}
	native private boolean getUnderWaterEnable_void(long pNativeObject);
	public boolean getUnderWaterEnable()
	{
		boolean returnValue = getUnderWaterEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUnderWaterEnable_ev_bool(long pNativeObject, boolean flag);
	public void setUnderWaterEnable(boolean flag)
	{
		boolean flagParamValue = flag;
		setUnderWaterEnable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getReflectionEnable_void(long pNativeObject);
	public boolean getReflectionEnable()
	{
		boolean returnValue = getReflectionEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setReflectionEnable_ev_bool(long pNativeObject, boolean flag);
	public void setReflectionEnable(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectionEnable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getReflectWithoutSky_void(long pNativeObject);
	public boolean getReflectWithoutSky()
	{
		boolean returnValue = getReflectWithoutSky_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setReflectWithoutSky_ev_bool(long pNativeObject, boolean flag);
	public void setReflectWithoutSky(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectWithoutSky_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getRefractionEnable_void(long pNativeObject);
	public boolean getRefractionEnable()
	{
		boolean returnValue = getRefractionEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRefractionEnable_ev_bool(long pNativeObject, boolean flag);
	public void setRefractionEnable(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractionEnable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private float getWaterDeep_void(long pNativeObject);
	public float getWaterDeep()
	{
		float returnValue = getWaterDeep_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWaterDeep_ev_real32(long pNativeObject, float deep);
	public void setWaterDeep(float deep)
	{
		float deepParamValue = deep;
		setWaterDeep_ev_real32(this.nativeObject.pointer, deepParamValue);
	}
	native private float getWavePower_void(long pNativeObject);
	public float getWavePower()
	{
		float returnValue = getWavePower_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWavePower_ev_real32(long pNativeObject, float power);
	public void setWavePower(float power)
	{
		float powerParamValue = power;
		setWavePower_ev_real32(this.nativeObject.pointer, powerParamValue);
	}
	native private float getLightPower_void(long pNativeObject);
	public float getLightPower()
	{
		float returnValue = getLightPower_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLightPower_ev_real32(long pNativeObject, float power);
	public void setLightPower(float power)
	{
		float powerParamValue = power;
		setLightPower_ev_real32(this.nativeObject.pointer, powerParamValue);
	}
	native private long getWaterColor_void(long pNativeObject);
	public com.earthview.world.spatial.display.Icolor getWaterColor()
	{
		long returnValue = getWaterColor_void(this.nativeObject.pointer);
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
	native private void setWaterColor_IColor(long pNativeObject, long color);
	public void setWaterColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setWaterColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private float getWaveDir_void(long pNativeObject);
	public float getWaveDir()
	{
		float returnValue = getWaveDir_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWaveDir_ev_real32(long pNativeObject, float dir);
	public void setWaveDir(float dir)
	{
		float dirParamValue = dir;
		setWaveDir_ev_real32(this.nativeObject.pointer, dirParamValue);
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

	native private boolean getGpuParametersDirty_void(long pNativeObject);
	/**
	 * 获取gpu参数是否已改变
	 * @param  
	 * @return gpu参数是否已改变
	 */
	public boolean getGpuParametersDirty()
	{
		boolean returnValue = getGpuParametersDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGpuParametersDirty_ev_bool(long pNativeObject, boolean dirty);
	/**
	 * 设置gpu参数是否已改变
	 * @param dirty gpu参数是否已改变
	 */
	public void setGpuParametersDirty(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setGpuParametersDirty_ev_bool(this.nativeObject.pointer, dirtyParamValue);
	}
	public FresnelSurface3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FresnelSurface3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static FresnelSurface3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FresnelSurface3DSymbol obj = null;
 		if(baseObj instanceof FresnelSurface3DSymbol)
		{
			obj = (FresnelSurface3DSymbol)baseObj;
		} else {
			obj = new FresnelSurface3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFresnelSurface3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
