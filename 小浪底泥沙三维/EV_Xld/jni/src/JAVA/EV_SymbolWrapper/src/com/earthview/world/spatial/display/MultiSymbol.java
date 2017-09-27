package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 多图层风格类，是所有多图层各风格类的基类提供方法如下：获取与移除指定风格图层，添加与插入风格图层、获取风格图层个数、移动某一风格图层获取与设置指定图片的数据、获取图片的个数、获取指定图片的ID、是否含有图片获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class MultiSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CMultiSymbol", new MultiSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCMultiSymbolProxy", new MultiSymbolClassFactory());
	}

	native private long getLayerRef_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定风格图层
	 * @param index 索引
	 * @return 风格图层
	 */
	public com.earthview.world.spatial.display.SymbolLayer getLayerRef(int index)
	{
		int indexParamValue = index;
		long returnValue = getLayerRef_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.SymbolLayer __returnValue = new com.earthview.world.spatial.display.SymbolLayer(CreatedWhenConstruct.CWC_NotToCreate, "CSymbolLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SymbolLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSymbolLayer");
		}
		return __returnValue;
	}
	native private void add_ISymbol_ev_bool_ev_bool(long pNativeObject, long symbol, boolean visible, boolean lock);
	/**
	 * 添加风格图层
	 * @param symbol 图层风格
	 * @param visible 是否可见
	 * @param lock 是否锁定
	 */
	public void add(com.earthview.world.spatial.display.Isymbol symbol, boolean visible, boolean lock)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		boolean visibleParamValue = visible;
		boolean lockParamValue = lock;
		add_ISymbol_ev_bool_ev_bool(this.nativeObject.pointer, symbolParamValue, visibleParamValue, lockParamValue);
	}
	native private void add_CSymbolLayer(long pNativeObject, long layer);
	/**
	 * 添加风格图层
	 * @param layer 风格图层
	 */
	public void add(com.earthview.world.spatial.display.SymbolLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		add_CSymbolLayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void insert_ev_int32_CSymbolLayer(long pNativeObject, int pos, long layer);
	/**
	 * 插入风格图层
	 * @param pos 插入位置
	 * @param layer 风格图层
	 */
	public void insert(int pos, com.earthview.world.spatial.display.SymbolLayer layer)
	{
		int posParamValue = pos;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insert_ev_int32_CSymbolLayer(this.nativeObject.pointer, posParamValue, layerParamValue);
	}
	native private void insert_ev_int32_ISymbol_ev_bool_ev_bool(long pNativeObject, int pos, long symbol, boolean visible, boolean lock);
	/**
	 * 插入风格图层
	 * @param pos 插入位置
	 * @param layer 风格图层
	 * @param visible 是否可见
	 * @param lock 是否锁定
	 */
	public void insert(int pos, com.earthview.world.spatial.display.Isymbol symbol, boolean visible, boolean lock)
	{
		int posParamValue = pos;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		boolean visibleParamValue = visible;
		boolean lockParamValue = lock;
		insert_ev_int32_ISymbol_ev_bool_ev_bool(this.nativeObject.pointer, posParamValue, symbolParamValue, visibleParamValue, lockParamValue);
	}
	native private void remove_ev_int32(long pNativeObject, int index);
	/**
	 * 移除指定风格图层
	 * @param index 索引
	 */
	public void remove(int index)
	{
		int indexParamValue = index;
		remove_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private int getCount_void(long pNativeObject);
	/**
	 * 获取风格图层个数
	 * @param  
	 */
	public int getCount()
	{
		int returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean move_ev_int32_ev_int32(long pNativeObject, int oldIndex, int newIndex);
	/**
	 * 移动某一风格图层
	 * @param oldIndex 旧位置
	 * @param newIndex 新位置
	 * @return 若返回true,则移动风格图层成功
	 */
	public boolean move(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		boolean returnValue = move_ev_int32_ev_int32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
		return returnValue;
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 获取流
	 * @param stream 流对象
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

	native private String toSLD_void(long pNativeObject);
	/**
	 * 获取SLD
	 * @param  
	 * @return SLD字符串
	 */
	public String toSLD()
	{
		String returnValue = toSLD_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toSLD_void_NoVirtual(long pNativeObject);
	protected String toSLD_NoVirtual()
	{
		String returnValue = toSLD_void_NoVirtual(this.nativeObject.pointer);
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
	 * @param stream 图片数据流
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

	native private void fromSLD_EVString(long pNativeObject, long sld);
	/**
	 * 从SLD恢复Symbol属性
	 * @param sld SLD字符串
	 */
	public void fromSLD(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString(this.nativeObject.pointer, sldParamValue);
	}
	native private void fromSLD_EVString_NoVirtual(long pNativeObject, long sld);
	protected void fromSLD_NoVirtual(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldParamValue);
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

	public MultiSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MultiSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 复制符号
	 * @param  
	 * @return 返回复制的符号
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		return super.ev_clone_NoVirtual();
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
	 * 获取符号类型
	 * @param  
	 * @return 返回类型
	 */
	public int getSymbolType()
	{
		return super.getSymbolType_NoVirtual();
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
	
	public static MultiSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MultiSymbol obj = null;
 		if(baseObj instanceof MultiSymbol)
		{
			obj = (MultiSymbol)baseObj;
		} else {
			obj = new MultiSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMultiSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
