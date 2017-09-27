package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渐进色色带类提供方法如下：获取色带类型、获取与设置首颜色、获取与设置尾颜色、获取与设置渐进色类型获取多站点模式下的站点个数、设置多站点模式、是否使用多站点的模式添加站点、是否存在指定站点、删除指定索引站点、删除所有站点、获取站点、获取站点偏移量创建色带、深度拷贝、判断相同类型的对象属性是否一致转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复ColorRamp属性
 */
public class GradientColorRamp extends com.earthview.world.spatial.display.ColorRamp {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CGradientColorRamp", new GradientColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCGradientColorRampProxy", new GradientColorRampClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public GradientColorRamp() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGradientColorRampProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.GradientColorRamp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param type 渐变色带类型
	 */
	public GradientColorRamp(com.earthview.world.spatial.display.EVGradientColorRampType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCGradientColorRampProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.GradientColorRamp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getColorRampType_void(long pNativeObject);
	/**
	 * 获取色带类型
	 * @param  
	 * @return 色带类型
	 */
	public com.earthview.world.spatial.display.EVColorRampType getColorRampType()
	{
		int returnValue = getColorRampType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorRampType.toEnum(returnValue);
	}
	native private int getColorRampType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVColorRampType getColorRampType_NoVirtual()
	{
		int returnValue = getColorRampType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorRampType.toEnum(returnValue);
	}

	native private long getStartColor_void(long pNativeObject);
	/**
	 * 获取首颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getStartColor()
	{
		long returnValue = getStartColor_void(this.nativeObject.pointer);
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
	native private long getEndColor_void(long pNativeObject);
	/**
	 * 获取尾颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getEndColor()
	{
		long returnValue = getEndColor_void(this.nativeObject.pointer);
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
	native private void setStartColor_IColor(long pNativeObject, long color);
	/**
	 * 设置首颜色颜色需要匹配EarthView::World::Spatial::Display::EVGradientColorRampType，如果不同，默认转换
	 * @param color 颜色
	 * @return 颜色对象
	 */
	public void setStartColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setStartColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setEndColor_IColor(long pNativeObject, long color);
	/**
	 * 设置尾颜色颜色需要匹配EarthView::World::Spatial::Display::EVGradientColorRampType，如果不同，默认转换
	 * @param color 颜色
	 * @return 颜色对象
	 */
	public void setEndColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setEndColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取渐进色类型
	 * @param  
	 * @return 渐进色类型
	 */
	public com.earthview.world.spatial.display.EVGradientColorRampType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVGradientColorRampType.toEnum(returnValue);
	}
	native private void setType_EVGradientColorRampType(long pNativeObject, int type);
	/**
	 * 设置渐进色类型
	 * @param type 渐进色类型
	 */
	public void setType(com.earthview.world.spatial.display.EVGradientColorRampType type)
	{
		int typeParamValue = type.getValue();
		setType_EVGradientColorRampType(this.nativeObject.pointer, typeParamValue);
	}
	native private boolean useMultiStop_void(long pNativeObject);
	/**
	 * 是否使用多站点的模式
	 * @param  
	 * @return 是否使用
	 */
	public boolean useMultiStop()
	{
		boolean returnValue = useMultiStop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStopCount_void(long pNativeObject);
	/**
	 * 获取多站点模式下的站点个数
	 * @param  
	 * @return 站点个数
	 */
	public long getStopCount()
	{
		long returnValue = getStopCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseMultiStop_ev_bool(long pNativeObject, boolean used);
	/**
	 * 设置多站点模式
	 * @param used 是否启用
	 */
	public void setUseMultiStop(boolean used)
	{
		boolean usedParamValue = used;
		setUseMultiStop_ev_bool(this.nativeObject.pointer, usedParamValue);
	}
	native private int addStop_IColor_ev_uint32(long pNativeObject, long color, long offset);
	/**
	 * 添加站点如果站点存在，覆盖该站点颜色；位置范围为[0,100]
	 * @param color 颜色
	 * @param offset 位置
	 */
	public int addStop(com.earthview.world.spatial.display.Icolor color, long offset)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long offsetParamValue = offset;
		int returnValue = addStop_IColor_ev_uint32(this.nativeObject.pointer, colorParamValue, offsetParamValue);
		return returnValue;
	}
	native private int contains_ev_uint32(long pNativeObject, long offset);
	/**
	 * 是否存在指定站点
	 * @param offset 位置[0，100]
	 * @return 索引位置，从0开始
	 */
	public int contains(long offset)
	{
		long offsetParamValue = offset;
		int returnValue = contains_ev_uint32(this.nativeObject.pointer, offsetParamValue);
		return returnValue;
	}
	native private boolean remove_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除指定索引站点索引从0开始
	 * @param index 索引
	 * @return 成功，返回true;否则，返回false
	 */
	public boolean remove(long index)
	{
		long indexParamValue = index;
		boolean returnValue = remove_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeAll_void(long pNativeObject);
	/**
	 * 删除所有站点
	 * @param  
	 * @return 成功，返回true;否则，返回false
	 */
	public boolean removeAll()
	{
		boolean returnValue = removeAll_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStop_ev_uint32(long pNativeObject, long offset);
	/**
	 * 获取站点
	 * @param offset 接受位置信息
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getStop(long offset)
	{
		long offsetParamValue = offset;
		long returnValue = getStop_ev_uint32(this.nativeObject.pointer, offsetParamValue);
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
	native private int getPosition_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取站点偏移量索引从0开始索引
	 * @param index 索引
	 * @return 偏移量
	 */
	public int getPosition(long index)
	{
		long indexParamValue = index;
		int returnValue = getPosition_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void createRamp_ev_uint32(long pNativeObject, long count);
	/**
	 * 创建色带
	 * @param count 指定大小
	 */
	public void createRamp(long count)
	{
		long countParamValue = count;
		createRamp_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private void createRamp_ev_uint32_NoVirtual(long pNativeObject, long count);
	protected void createRamp_NoVirtual(long count)
	{
		long countParamValue = count;
		createRamp_ev_uint32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝内存需要外部释放
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.ColorRamp ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorRamp __returnValue = new com.earthview.world.spatial.display.ColorRamp(CreatedWhenConstruct.CWC_NotToCreate, "CColorRamp");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorRamp)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColorRamp");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.ColorRamp ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorRamp __returnValue = new com.earthview.world.spatial.display.ColorRamp(CreatedWhenConstruct.CWC_NotToCreate, "CColorRamp");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorRamp)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColorRamp");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 转换成二进制
	 * @param stream 流对象
	 * @return xml
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将属性信息转为XML
	 * @param xmlFile xml文件
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XMLElement中恢复信息
	 * @param element 要素
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

	native private boolean equal_CColorRamp(long pNativeObject, long pColorRamp);
	/**
	 * 判断相同类型的对象属性是否一致
	 * @param pColor Color对象
	 */
	public boolean equal(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		boolean returnValue = equal_CColorRamp(this.nativeObject.pointer, pColorRampParamValue);
		return returnValue;
	}
	native private boolean equal_CColorRamp_NoVirtual(long pNativeObject, long pColorRamp);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		boolean returnValue = equal_CColorRamp_NoVirtual(this.nativeObject.pointer, pColorRampParamValue);
		return returnValue;
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复ColorRamp属性
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

	public GradientColorRamp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GradientColorRamp(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取色带中颜色的个数
	 * @param  
	 * @return 颜色个数
	 */
	public long getColorCount()
	{
		return super.getColorCount_NoVirtual();
	}
	/**
	 * 获取指定索引的颜色
	 * @param index 指定索引
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef(long index)
	{
		return super.getColorRef_NoVirtual(index);
	}
	
	native protected void register_createRamp_ev_uint32(long pNativeObject, String method);
	native protected void register_getColorCount_void(long pNativeObject, String method);
	native protected void register_getColorRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getColorRampType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_equal_CColorRamp(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createRamp_ev_uint32(this.nativeObject.pointer, "createRamp_ev_uint32_callback");
			this.register_getColorCount_void(this.nativeObject.pointer, "getColorCount_void_callback");
			this.register_getColorRef_ev_uint32(this.nativeObject.pointer, "getColorRef_ev_uint32_callback");
			this.register_getColorRampType_void(this.nativeObject.pointer, "getColorRampType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_equal_CColorRamp(this.nativeObject.pointer, "equal_CColorRamp_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static GradientColorRamp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GradientColorRamp obj = null;
 		if(baseObj instanceof GradientColorRamp)
		{
			obj = (GradientColorRamp)baseObj;
		} else {
			obj = new GradientColorRamp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGradientColorRamp");
			obj.increaseCast();
		}

		return obj;
	}
}
