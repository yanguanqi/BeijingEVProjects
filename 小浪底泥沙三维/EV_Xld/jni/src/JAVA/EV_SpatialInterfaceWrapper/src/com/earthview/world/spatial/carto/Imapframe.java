package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Imapframe extends com.earthview.world.spatial.carto.Ielement {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::IMapFrame", new ImapframeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JIMapFrameProxy", new ImapframeClassFactory());
	}

	native private int getElementType_void(long pNativeObject);
	/**
	 * 获取元素类型
	 * @param  
	 * @return 元素类型
	 */
	public com.earthview.world.spatial.carto.EVElementType getElementType()
	{
		int returnValue = getElementType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVElementType.toEnum(returnValue);
	}
	native private int getElementType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVElementType getElementType_NoVirtual()
	{
		int returnValue = getElementType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVElementType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取地图框架名称
	 * @param  
	 * @return 地图框架名称
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

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置地图框架名称
	 * @param name 地图框架名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取关于地图框架的描述
	 * @param  
	 * @return 地图框架的描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDescription_EVString_callback(String desc)
	{
		String descParamValue = desc;
		setDescription(descParamValue);
	}

	native private void setDescription_EVString(long pNativeObject, String desc);
	/**
	 * 设置关于地图框架的描述
	 * @param desc 地图框架的描述
	 */
	public void setDescription(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString(this.nativeObject.pointer, descParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String desc);
	protected void setDescription_NoVirtual(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descParamValue);
	}

	protected  long getSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取地图边框风格
	 * @param symbol 
	 * @return 地图边框风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
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
	native private long getSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getSymbol_NoVirtual()
	{
		long returnValue = getSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setSymbol_ISymbol_callback(long pSymbol)
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
		setSymbol(pSymbolParamValue);
	}

	native private void setSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置地图边框风格
	 * @param symbol 地图标题的风格
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	protected  long getShadowColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getShadowColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowColor_void(long pNativeObject);
	/**
	 * 获取阴影颜色
	 * @param symbol 
	 * @return 阴影颜色
	 */
	public com.earthview.world.spatial.display.Icolor getShadowColor()
	{
		long returnValue = getShadowColor_void(this.nativeObject.pointer);
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
	native private long getShadowColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getShadowColor_NoVirtual()
	{
		long returnValue = getShadowColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setShadowColor_IColor_callback(long pColor)
	{
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		setShadowColor(pColorParamValue);
	}

	native private void setShadowColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置阴影颜色
	 * @param pColor 阴影颜色
	 */
	public void setShadowColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setShadowColor_IColor(this.nativeObject.pointer, pColorParamValue);
	}
	native private void setShadowColor_IColor_NoVirtual(long pNativeObject, long pColor);
	protected void setShadowColor_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setShadowColor_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
	}

	protected  long getBackColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getBackColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBackColor_void(long pNativeObject);
	/**
	 * 获取背景颜色
	 * @param symbol 
	 * @return 背景颜色
	 */
	public com.earthview.world.spatial.display.Icolor getBackColor()
	{
		long returnValue = getBackColor_void(this.nativeObject.pointer);
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
	native private long getBackColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getBackColor_NoVirtual()
	{
		long returnValue = getBackColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setBackColor_IColor_callback(long pColor)
	{
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		setBackColor(pColorParamValue);
	}

	native private void setBackColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置背景颜色
	 * @param pColor 背景颜色
	 */
	public void setBackColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setBackColor_IColor(this.nativeObject.pointer, pColorParamValue);
	}
	native private void setBackColor_IColor_NoVirtual(long pNativeObject, long pColor);
	protected void setBackColor_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setBackColor_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
	}

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取数据框范围（即通过纸张坐标设置数据框大小）
	 * @param symbol 
	 * @return 数据框框范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelope_NoVirtual()
	{
		long returnValue = getEnvelope_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private void setEnvelope_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 获取数据框范围
	 * @param pEnvelope 数据框范围
	 */
	public void setEnvelope(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setEnvelope_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
	}
	native private void setEnvelope_IEnvelope_NoVirtual(long pNativeObject, long pEnvelope);
	protected void setEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvelopeParamValue);
	}

	protected  void setMapExtent_IEnvelope_callback(long pEnvelope)
	{
		com.earthview.world.spatial.geometry.Ienvelope pEnvelopeParamValue = (pEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvelopeParamValue != null)
		{
		pEnvelopeParamValue.setDelegate(true);
		pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		IClassFactory pEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(pEnvelopeParamValue.getCppInstanceTypeName());
		if (pEnvelopeParamValueClassFactory != null)
		{
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvelopeParamValueClassFactory.create();
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		}
		}
		setMapExtent(pEnvelopeParamValue);
	}

	native private void setMapExtent_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 设置数据框中地图的显示范围（即通大地坐标或地理坐标设置地图的显示范围）
	 * @param pEnvelope 数据框中地图的显示范围
	 */
	public void setMapExtent(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setMapExtent_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
	}
	native private void setMapExtent_IEnvelope_NoVirtual(long pNativeObject, long pEnvelope);
	protected void setMapExtent_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setMapExtent_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvelopeParamValue);
	}

	protected  long getMapExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getMapExtent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMapExtent_void(long pNativeObject);
	/**
	 * 获取数据框中地图的数据范围
	 * @param symbol 
	 * @return 数据框中地图的显示范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getMapExtent()
	{
		long returnValue = getMapExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getMapExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getMapExtent_NoVirtual()
	{
		long returnValue = getMapExtent_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  long getMapDisplay_void_callback()
	{
		com.earthview.world.spatial.display.Ispatialdisplay returnValue = getMapDisplay();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMapDisplay_void(long pNativeObject);
	/**
	 * 获取地图的显示设备
	 * @param symbol 
	 * @return 地图的显示设备
	 */
	public com.earthview.world.spatial.display.Ispatialdisplay getMapDisplay()
	{
		long returnValue = getMapDisplay_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	native private long getMapDisplay_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ispatialdisplay getMapDisplay_NoVirtual()
	{
		long returnValue = getMapDisplay_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}

	protected  long getMap_void_callback()
	{
		com.earthview.world.spatial.atlas.Imap returnValue = getMap();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMap_void(long pNativeObject);
	/**
	 * 获取地图对象
	 * @param  
	 * @return 地图对象
	 */
	public com.earthview.world.spatial.atlas.Imap getMap()
	{
		long returnValue = getMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long getMap_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Imap getMap_NoVirtual()
	{
		long returnValue = getMap_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  long getMapCanvas_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = getMapCanvas();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMapCanvas_void(long pNativeObject);
	/**
	 * 获取地图画布
	 * @param  
	 * @return 地图画布
	 */
	public com.earthview.world.display.Ibitmap getMapCanvas()
	{
		long returnValue = getMapCanvas_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getMapCanvas_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getMapCanvas_NoVirtual()
	{
		long returnValue = getMapCanvas_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	protected  void setMap_IMap_callback(long pMap)
	{
		com.earthview.world.spatial.atlas.Imap pMapParamValue = (pMap == 0L ? null : new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate));
		if(pMapParamValue != null)
		{
		pMapParamValue.setDelegate(true);
		pMapParamValue.setInstancePointer(new InstancePointer(pMap));
		IClassFactory pMapParamValueClassFactory = GlobalClassFactoryMap.get(pMapParamValue.getCppInstanceTypeName());
		if (pMapParamValueClassFactory != null)
		{
			pMapParamValue.setDelegate(true);
			pMapParamValue = (com.earthview.world.spatial.atlas.Imap)pMapParamValueClassFactory.create();
			pMapParamValue.setDelegate(true);
			pMapParamValue.setInstancePointer(new InstancePointer(pMap));
		}
		}
		setMap(pMapParamValue);
	}

	native private void setMap_IMap(long pNativeObject, long pMap);
	/**
	 * 设置地图中加载的地图
	 * @param map 地图对象
	 */
	public void setMap(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		setMap_IMap(this.nativeObject.pointer, pMapParamValue);
	}
	native private void setMap_IMap_NoVirtual(long pNativeObject, long pMap);
	protected void setMap_NoVirtual(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		setMap_IMap_NoVirtual(this.nativeObject.pointer, pMapParamValue);
	}

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 获取元素是否被选中
	 * @param  
	 * @return 是否被选中
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelected_void_NoVirtual(long pNativeObject);
	protected boolean isSelected_NoVirtual()
	{
		boolean returnValue = isSelected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean bSelected);
	/**
	 * 设置元素是否被选中
	 * @param bSelected 是否被选中
	 */
	public void setSelected(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setSelected_ev_bool(this.nativeObject.pointer, bSelectedParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean bSelected);
	protected void setSelected_NoVirtual(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, bSelectedParamValue);
	}

	protected  boolean isDrawShadow_void_callback()
	{
		boolean returnValue = isDrawShadow();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawShadow_void(long pNativeObject);
	/**
	 * 获取是否绘制阴影
	 * @param  
	 * @return 否绘制阴影
	 */
	public boolean isDrawShadow()
	{
		boolean returnValue = isDrawShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawShadow_void_NoVirtual(long pNativeObject);
	protected boolean isDrawShadow_NoVirtual()
	{
		boolean returnValue = isDrawShadow_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDrawShadow_ev_bool_callback(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawShadow(bDrawedParamValue);
	}

	native private void setDrawShadow_ev_bool(long pNativeObject, boolean bDrawed);
	/**
	 * 设置否绘制阴影
	 * @param bDrawed 否绘制阴影
	 */
	public void setDrawShadow(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawShadow_ev_bool(this.nativeObject.pointer, bDrawedParamValue);
	}
	native private void setDrawShadow_ev_bool_NoVirtual(long pNativeObject, boolean bDrawed);
	protected void setDrawShadow_NoVirtual(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawShadow_ev_bool_NoVirtual(this.nativeObject.pointer, bDrawedParamValue);
	}

	protected  boolean isDrawFrame_void_callback()
	{
		boolean returnValue = isDrawFrame();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawFrame_void(long pNativeObject);
	/**
	 * 获取是否绘制框架
	 * @param  
	 * @return 是否绘制框架
	 */
	public boolean isDrawFrame()
	{
		boolean returnValue = isDrawFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawFrame_void_NoVirtual(long pNativeObject);
	protected boolean isDrawFrame_NoVirtual()
	{
		boolean returnValue = isDrawFrame_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDrawFrame_ev_bool_callback(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawFrame(bDrawedParamValue);
	}

	native private void setDrawFrame_ev_bool(long pNativeObject, boolean bDrawed);
	/**
	 * 设置是否绘制框架
	 * @param bDrawed 是否绘制框架
	 */
	public void setDrawFrame(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawFrame_ev_bool(this.nativeObject.pointer, bDrawedParamValue);
	}
	native private void setDrawFrame_ev_bool_NoVirtual(long pNativeObject, boolean bDrawed);
	protected void setDrawFrame_NoVirtual(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawFrame_ev_bool_NoVirtual(this.nativeObject.pointer, bDrawedParamValue);
	}

	protected  boolean isDrawBackground_void_callback()
	{
		boolean returnValue = isDrawBackground();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawBackground_void(long pNativeObject);
	/**
	 * 获取是否绘制背景
	 * @param  
	 * @return 是否绘架背景
	 */
	public boolean isDrawBackground()
	{
		boolean returnValue = isDrawBackground_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawBackground_void_NoVirtual(long pNativeObject);
	protected boolean isDrawBackground_NoVirtual()
	{
		boolean returnValue = isDrawBackground_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDrawBackground_ev_bool_callback(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawBackground(bDrawedParamValue);
	}

	native private void setDrawBackground_ev_bool(long pNativeObject, boolean bDrawed);
	/**
	 * 设置是否绘制背景
	 * @param bDrawed 是否绘制架背景
	 */
	public void setDrawBackground(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawBackground_ev_bool(this.nativeObject.pointer, bDrawedParamValue);
	}
	native private void setDrawBackground_ev_bool_NoVirtual(long pNativeObject, boolean bDrawed);
	protected void setDrawBackground_NoVirtual(boolean bDrawed)
	{
		boolean bDrawedParamValue = bDrawed;
		setDrawBackground_ev_bool_NoVirtual(this.nativeObject.pointer, bDrawedParamValue);
	}

	protected  boolean isAccordingPageSize_void_callback()
	{
		boolean returnValue = isAccordingPageSize();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAccordingPageSize_void(long pNativeObject);
	/**
	 * 判断框架大小与位置是否按纸张尺寸设置
	 * @param  
	 * @return 如果按纸张尺寸设置,返回true,否则返回false
	 */
	public boolean isAccordingPageSize()
	{
		boolean returnValue = isAccordingPageSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAccordingPageSize_void_NoVirtual(long pNativeObject);
	protected boolean isAccordingPageSize_NoVirtual()
	{
		boolean returnValue = isAccordingPageSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAccordingPageSize_ev_bool_callback(boolean bAccording)
	{
		boolean bAccordingParamValue = bAccording;
		setAccordingPageSize(bAccordingParamValue);
	}

	native private void setAccordingPageSize_ev_bool(long pNativeObject, boolean bAccording);
	/**
	 * 设置框架大小与位置是否按纸张尺寸设置
	 * @param bAccording 框架大小是否按纸张尺寸设置
	 */
	public void setAccordingPageSize(boolean bAccording)
	{
		boolean bAccordingParamValue = bAccording;
		setAccordingPageSize_ev_bool(this.nativeObject.pointer, bAccordingParamValue);
	}
	native private void setAccordingPageSize_ev_bool_NoVirtual(long pNativeObject, boolean bAccording);
	protected void setAccordingPageSize_NoVirtual(boolean bAccording)
	{
		boolean bAccordingParamValue = bAccording;
		setAccordingPageSize_ev_bool_NoVirtual(this.nativeObject.pointer, bAccordingParamValue);
	}

	protected  long getRenderingLayerCache_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = getRenderingLayerCache();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderingLayerCache_void(long pNativeObject);
	/**
	 * 获取正在绘制的图层缓存
	 * @param  
	 */
	public com.earthview.world.display.Ibitmap getRenderingLayerCache()
	{
		long returnValue = getRenderingLayerCache_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getRenderingLayerCache_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getRenderingLayerCache_NoVirtual()
	{
		long returnValue = getRenderingLayerCache_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	native private boolean drawPrepare_ISpatialDisplay(long pNativeObject, long pDisplay);
	/**
	 * 绘制元素准备
	 * @param pDisplay 指定设备
	 */
	public boolean drawPrepare(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}
	native private boolean drawPrepare_ISpatialDisplay_NoVirtual(long pNativeObject, long pDisplay);
	protected boolean drawPrepare_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}

	native private void draw_void(long pNativeObject);
	/**
	 * 绘制元素
	 * @param  
	 */
	public void draw()
	{
		draw_void(this.nativeObject.pointer);
	}
	native private void draw_void_NoVirtual(long pNativeObject);
	protected void draw_NoVirtual()
	{
		draw_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void drawOver_void(long pNativeObject);
	/**
	 * 绘制结束后续处理
	 * @param  
	 */
	public void drawOver()
	{
		drawOver_void(this.nativeObject.pointer);
	}
	native private void drawOver_void_NoVirtual(long pNativeObject);
	protected void drawOver_NoVirtual()
	{
		drawOver_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void drawBorder_ISpatialDisplay_callback(long pPageDisplay)
	{
		com.earthview.world.spatial.display.Ispatialdisplay pPageDisplayParamValue = (pPageDisplay == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPageDisplayParamValue != null)
		{
		pPageDisplayParamValue.setDelegate(true);
		pPageDisplayParamValue.setInstancePointer(new InstancePointer(pPageDisplay));
		IClassFactory pPageDisplayParamValueClassFactory = GlobalClassFactoryMap.get(pPageDisplayParamValue.getCppInstanceTypeName());
		if (pPageDisplayParamValueClassFactory != null)
		{
			pPageDisplayParamValue.setDelegate(true);
			pPageDisplayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)pPageDisplayParamValueClassFactory.create();
			pPageDisplayParamValue.setDelegate(true);
			pPageDisplayParamValue.setInstancePointer(new InstancePointer(pPageDisplay));
		}
		}
		drawBorder(pPageDisplayParamValue);
	}

	native private void drawBorder_ISpatialDisplay(long pNativeObject, long pPageDisplay);
	/**
	 * 绘制边框
	 * @param display 纸张绘制显示设备
	 */
	public void drawBorder(com.earthview.world.spatial.display.Ispatialdisplay pPageDisplay)
	{
		long pPageDisplayParamValue = (pPageDisplay == null ? 0L : pPageDisplay.nativeObject.pointer);
		drawBorder_ISpatialDisplay(this.nativeObject.pointer, pPageDisplayParamValue);
	}
	native private void drawBorder_ISpatialDisplay_NoVirtual(long pNativeObject, long pPageDisplay);
	protected void drawBorder_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pPageDisplay)
	{
		long pPageDisplayParamValue = (pPageDisplay == null ? 0L : pPageDisplay.nativeObject.pointer);
		drawBorder_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, pPageDisplayParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆元素
	 * @param  
	 * @return 地图元素
	 */
	public com.earthview.world.spatial.carto.Ielement ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ielement __returnValue = new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ielement ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ielement __returnValue = new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将地图的配置以流的方式导出
	 * @param stream 导出的流
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 将地图的配置以XML的方式导出
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素中恢复指北针的配置
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把比例尺的配置保存到xml元素中
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
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

	public Imapframe(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imapframe(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_getSymbol_void(long pNativeObject, String method);
	native protected void register_setSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getShadowColor_void(long pNativeObject, String method);
	native protected void register_setShadowColor_IColor(long pNativeObject, String method);
	native protected void register_getBackColor_void(long pNativeObject, String method);
	native protected void register_setBackColor_IColor(long pNativeObject, String method);
	native protected void register_setMapExtent_IEnvelope(long pNativeObject, String method);
	native protected void register_getMapExtent_void(long pNativeObject, String method);
	native protected void register_getMapDisplay_void(long pNativeObject, String method);
	native protected void register_getMap_void(long pNativeObject, String method);
	native protected void register_getMapCanvas_void(long pNativeObject, String method);
	native protected void register_setMap_IMap(long pNativeObject, String method);
	native protected void register_isDrawShadow_void(long pNativeObject, String method);
	native protected void register_setDrawShadow_ev_bool(long pNativeObject, String method);
	native protected void register_isDrawFrame_void(long pNativeObject, String method);
	native protected void register_setDrawFrame_ev_bool(long pNativeObject, String method);
	native protected void register_isDrawBackground_void(long pNativeObject, String method);
	native protected void register_setDrawBackground_ev_bool(long pNativeObject, String method);
	native protected void register_isAccordingPageSize_void(long pNativeObject, String method);
	native protected void register_setAccordingPageSize_ev_bool(long pNativeObject, String method);
	native protected void register_getRenderingLayerCache_void(long pNativeObject, String method);
	native protected void register_drawBorder_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_getElementType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getEnvelope_void(long pNativeObject, String method);
	native protected void register_setEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_drawPrepare_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_draw_void(long pNativeObject, String method);
	native protected void register_drawOver_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_getSymbol_void(this.nativeObject.pointer, "getSymbol_void_callback");
			this.register_setSymbol_ISymbol(this.nativeObject.pointer, "setSymbol_ISymbol_callback");
			this.register_getShadowColor_void(this.nativeObject.pointer, "getShadowColor_void_callback");
			this.register_setShadowColor_IColor(this.nativeObject.pointer, "setShadowColor_IColor_callback");
			this.register_getBackColor_void(this.nativeObject.pointer, "getBackColor_void_callback");
			this.register_setBackColor_IColor(this.nativeObject.pointer, "setBackColor_IColor_callback");
			this.register_setMapExtent_IEnvelope(this.nativeObject.pointer, "setMapExtent_IEnvelope_callback");
			this.register_getMapExtent_void(this.nativeObject.pointer, "getMapExtent_void_callback");
			this.register_getMapDisplay_void(this.nativeObject.pointer, "getMapDisplay_void_callback");
			this.register_getMap_void(this.nativeObject.pointer, "getMap_void_callback");
			this.register_getMapCanvas_void(this.nativeObject.pointer, "getMapCanvas_void_callback");
			this.register_setMap_IMap(this.nativeObject.pointer, "setMap_IMap_callback");
			this.register_isDrawShadow_void(this.nativeObject.pointer, "isDrawShadow_void_callback");
			this.register_setDrawShadow_ev_bool(this.nativeObject.pointer, "setDrawShadow_ev_bool_callback");
			this.register_isDrawFrame_void(this.nativeObject.pointer, "isDrawFrame_void_callback");
			this.register_setDrawFrame_ev_bool(this.nativeObject.pointer, "setDrawFrame_ev_bool_callback");
			this.register_isDrawBackground_void(this.nativeObject.pointer, "isDrawBackground_void_callback");
			this.register_setDrawBackground_ev_bool(this.nativeObject.pointer, "setDrawBackground_ev_bool_callback");
			this.register_isAccordingPageSize_void(this.nativeObject.pointer, "isAccordingPageSize_void_callback");
			this.register_setAccordingPageSize_ev_bool(this.nativeObject.pointer, "setAccordingPageSize_ev_bool_callback");
			this.register_getRenderingLayerCache_void(this.nativeObject.pointer, "getRenderingLayerCache_void_callback");
			this.register_drawBorder_ISpatialDisplay(this.nativeObject.pointer, "drawBorder_ISpatialDisplay_callback");
			this.register_getElementType_void(this.nativeObject.pointer, "getElementType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getEnvelope_void(this.nativeObject.pointer, "getEnvelope_void_callback");
			this.register_setEnvelope_IEnvelope(this.nativeObject.pointer, "setEnvelope_IEnvelope_callback");
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_drawPrepare_ISpatialDisplay(this.nativeObject.pointer, "drawPrepare_ISpatialDisplay_callback");
			this.register_draw_void(this.nativeObject.pointer, "draw_void_callback");
			this.register_drawOver_void(this.nativeObject.pointer, "drawOver_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Imapframe fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imapframe obj = null;
 		if(baseObj instanceof Imapframe)
		{
			obj = (Imapframe)baseObj;
		} else {
			obj = new Imapframe(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMapFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
