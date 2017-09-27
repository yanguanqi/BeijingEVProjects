package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图例项类
 */
public class LegendItem extends Ilegenditem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItem", new LegendItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendItemProxy", new LegendItemClassFactory());
	}

	/**
	 * 构造函数
	 * @param c 
	 */
	public LegendItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLegendItemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.LegendItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @param c 
	 * @return 名称
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

	protected  void setName_EVString_callback(String strName)
	{
		String strNameParamValue = strName;
		setName(strNameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String strName);
	/**
	 * 设置名称
	 * @param c 名称
	 */
	public void setName(String strName)
	{
		String strNameParamValue = strName;
		setName_EVString(this.nativeObject.pointer, strNameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String strName);
	protected void setName_NoVirtual(String strName)
	{
		String strNameParamValue = strName;
		setName_EVString_NoVirtual(this.nativeObject.pointer, strNameParamValue);
	}

	protected  long getFeatureSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getFeatureSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFeatureSymbol_void(long pNativeObject);
	/**
	 * 获取要素风格
	 * @param c 图例风格
	 */
	public com.earthview.world.spatial.display.Isymbol getFeatureSymbol()
	{
		long returnValue = getFeatureSymbol_void(this.nativeObject.pointer);
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
	native private long getFeatureSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getFeatureSymbol_NoVirtual()
	{
		long returnValue = getFeatureSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setFeatureSymbol_ISymbol_callback(long pSymbol)
	{
		com.earthview.world.spatial.display.Isymbol pSymbolParamValue = (pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSymbolParamValue != null)
		{
		pSymbolParamValue.setDelegate(true);
		pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		IClassFactory pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(pSymbolParamValue.getCppInstanceTypeName());
		if (pSymbolParamValueClassFactory != null)
		{
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)pSymbolParamValueClassFactory.create();
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		}
		}
		setFeatureSymbol(pSymbolParamValue);
	}

	native private void setFeatureSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置要素风格
	 * @param c 图例风格
	 * @return 名称
	 */
	public void setFeatureSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setFeatureSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setFeatureSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setFeatureSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setFeatureSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取要素风格
	 * @param c 图例风格
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	protected  void setGeometryType_EVGeometryType_callback(int type)
	{
		com.earthview.world.spatial.geometry.EVGeometryType typeParamValue = com.earthview.world.spatial.geometry.EVGeometryType.toEnum(type);
		setGeometryType(typeParamValue);
	}

	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	/**
	 * 设置要素风格
	 * @param c 要素风格
	 */
	public void setGeometryType(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setGeometryType_EVGeometryType_NoVirtual(long pNativeObject, int type);
	protected void setGeometryType_NoVirtual(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  String getDatasetName_void_callback()
	{
		String returnValue = getDatasetName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDatasetName_void(long pNativeObject);
	/**
	 * 获取图例对应的数据集名称
	 * @param  
	 * @return 图例对应的数据集名称
	 */
	public String getDatasetName()
	{
		String returnValue = getDatasetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDatasetName_void_NoVirtual(long pNativeObject);
	protected String getDatasetName_NoVirtual()
	{
		String returnValue = getDatasetName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDatasetName_EVString_callback(String strName)
	{
		String strNameParamValue = strName;
		setDatasetName(strNameParamValue);
	}

	native private void setDatasetName_EVString(long pNativeObject, String strName);
	/**
	 * 设置图例对应的数据集名称
	 * @param strName 图例对应的数据集名称
	 */
	public void setDatasetName(String strName)
	{
		String strNameParamValue = strName;
		setDatasetName_EVString(this.nativeObject.pointer, strNameParamValue);
	}
	native private void setDatasetName_EVString_NoVirtual(long pNativeObject, String strName);
	protected void setDatasetName_NoVirtual(String strName)
	{
		String strNameParamValue = strName;
		setDatasetName_EVString_NoVirtual(this.nativeObject.pointer, strNameParamValue);
	}

	native private void setTransparentValue_ev_uint8(long pNativeObject, short nValue);
	/**
	 * 设置图例项的透明度
	 * @param nValue 透明值
	 */
	public void setTransparentValue(short nValue)
	{
		short nValueParamValue = nValue;
		setTransparentValue_ev_uint8(this.nativeObject.pointer, nValueParamValue);
	}
	native private short getTransparentValue_void(long pNativeObject);
	/**
	 * 获取图例项的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		short returnValue = getTransparentValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean isParentItem_void_callback()
	{
		boolean returnValue = isParentItem();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isParentItem_void(long pNativeObject);
	/**
	 * 判断是否是父项（在复杂专题图情况下，有父项和子项之分）
	 * @param  
	 * @return 是否是父项
	 */
	public boolean isParentItem()
	{
		boolean returnValue = isParentItem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isParentItem_void_NoVirtual(long pNativeObject);
	protected boolean isParentItem_NoVirtual()
	{
		boolean returnValue = isParentItem_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setParentItem_ev_bool_callback(boolean bParent)
	{
		boolean bParentParamValue = bParent;
		setParentItem(bParentParamValue);
	}

	native private void setParentItem_ev_bool(long pNativeObject, boolean bParent);
	/**
	 * 设置是否是父项
	 * @param bParent 是否是父项
	 */
	public void setParentItem(boolean bParent)
	{
		boolean bParentParamValue = bParent;
		setParentItem_ev_bool(this.nativeObject.pointer, bParentParamValue);
	}
	native private void setParentItem_ev_bool_NoVirtual(long pNativeObject, boolean bParent);
	protected void setParentItem_NoVirtual(boolean bParent)
	{
		boolean bParentParamValue = bParent;
		setParentItem_ev_bool_NoVirtual(this.nativeObject.pointer, bParentParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.carto.Ilegenditem returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆图例项
	 * @param  
	 * @return 克隆的对象
	 */
	public com.earthview.world.spatial.carto.Ilegenditem ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditem __returnValue = new com.earthview.world.spatial.carto.Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItem");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditem)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILegendItem");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ilegenditem ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditem __returnValue = new com.earthview.world.spatial.carto.Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItem");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditem)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILegendItem");
		}
		return __returnValue;
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素中恢复图例的配置
	 * @param element xml元素
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把图例的配置保存到xml元素中
	 * @param  
	 * @return xml元素
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

	public LegendItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LegendItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getFeatureSymbol_void(long pNativeObject, String method);
	native protected void register_setFeatureSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_setGeometryType_EVGeometryType(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_setDatasetName_EVString(long pNativeObject, String method);
	native protected void register_isParentItem_void(long pNativeObject, String method);
	native protected void register_setParentItem_ev_bool(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getFeatureSymbol_void(this.nativeObject.pointer, "getFeatureSymbol_void_callback");
			this.register_setFeatureSymbol_ISymbol(this.nativeObject.pointer, "setFeatureSymbol_ISymbol_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_setGeometryType_EVGeometryType(this.nativeObject.pointer, "setGeometryType_EVGeometryType_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_setDatasetName_EVString(this.nativeObject.pointer, "setDatasetName_EVString_callback");
			this.register_isParentItem_void(this.nativeObject.pointer, "isParentItem_void_callback");
			this.register_setParentItem_ev_bool(this.nativeObject.pointer, "setParentItem_ev_bool_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static LegendItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LegendItem obj = null;
 		if(baseObj instanceof LegendItem)
		{
			obj = (LegendItem)baseObj;
		} else {
			obj = new LegendItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLegendItem");
			obj.increaseCast();
		}

		return obj;
	}
}
