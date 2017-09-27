package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 经纬网类
 */
public class Graticales extends com.earthview.world.spatial.carto.SquareGrid {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CGraticales", new GraticalesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCGraticalesProxy", new GraticalesClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Graticales() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGraticalesProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.Graticales".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取方格网类型
	 * @param  
	 * @return 方格网类型
	 */
	public com.earthview.world.spatial.carto.EVSquareGridType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVSquareGridType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVSquareGridType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVSquareGridType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取元素名称
	 * @param  
	 * @return 元素名称
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
	 * 设置元素名称
	 * @param name 元素名称
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

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取元素边框范围
	 * @param symbol 
	 * @return 元素边框范围
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
	 * 设置元素边框范围
	 * @param pEnvelope 元素边框范围
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

	native private void setMapFrame_IMapFrame(long pNativeObject, long pMapFrame);
	/**
	 * 设置方格网对应的数据框
	 * @param pMapFrame 方格网对应的数据框
	 */
	public void setMapFrame(com.earthview.world.spatial.carto.Imapframe pMapFrame)
	{
		long pMapFrameParamValue = (pMapFrame == null ? 0L : pMapFrame.nativeObject.pointer);
		setMapFrame_IMapFrame(this.nativeObject.pointer, pMapFrameParamValue);
	}
	native private void setMapFrame_IMapFrame_NoVirtual(long pNativeObject, long pMapFrame);
	protected void setMapFrame_NoVirtual(com.earthview.world.spatial.carto.Imapframe pMapFrame)
	{
		long pMapFrameParamValue = (pMapFrame == null ? 0L : pMapFrame.nativeObject.pointer);
		setMapFrame_IMapFrame_NoVirtual(this.nativeObject.pointer, pMapFrameParamValue);
	}

	protected  void setHorizontalGap_ev_real64_callback(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap(horizontalGapParamValue);
	}

	native private void setHorizontalGap_ev_real64(long pNativeObject, double horizontalGap);
	/**
	 * 设置横向间隔
	 * @param horizontalGap 横向间隔
	 */
	public void setHorizontalGap(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap_ev_real64(this.nativeObject.pointer, horizontalGapParamValue);
	}
	native private void setHorizontalGap_ev_real64_NoVirtual(long pNativeObject, double horizontalGap);
	protected void setHorizontalGap_NoVirtual(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap_ev_real64_NoVirtual(this.nativeObject.pointer, horizontalGapParamValue);
	}

	protected  double getHorizontalGap_void_callback()
	{
		double returnValue = getHorizontalGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getHorizontalGap_void(long pNativeObject);
	/**
	 * 获取横向间隔
	 * @param  
	 * @return 横向间隔
	 */
	public double getHorizontalGap()
	{
		double returnValue = getHorizontalGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHorizontalGap_void_NoVirtual(long pNativeObject);
	protected double getHorizontalGap_NoVirtual()
	{
		double returnValue = getHorizontalGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVerticalGap_ev_real64_callback(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap(verticalGapParamValue);
	}

	native private void setVerticalGap_ev_real64(long pNativeObject, double verticalGap);
	/**
	 * 设置纵向间隔
	 * @param verticalGap 纵向间隔
	 */
	public void setVerticalGap(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap_ev_real64(this.nativeObject.pointer, verticalGapParamValue);
	}
	native private void setVerticalGap_ev_real64_NoVirtual(long pNativeObject, double verticalGap);
	protected void setVerticalGap_NoVirtual(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap_ev_real64_NoVirtual(this.nativeObject.pointer, verticalGapParamValue);
	}

	protected  double getVerticalGap_void_callback()
	{
		double returnValue = getVerticalGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVerticalGap_void(long pNativeObject);
	/**
	 * 获取纵向间隔
	 * @param  
	 * @return 纵向间隔
	 */
	public double getVerticalGap()
	{
		double returnValue = getVerticalGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getVerticalGap_void_NoVirtual(long pNativeObject);
	protected double getVerticalGap_NoVirtual()
	{
		double returnValue = getVerticalGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLabelType_GraticalesLabelType_callback(int labelType)
	{
		GraticalesLabelType labelTypeParamValue = GraticalesLabelType.toEnum(labelType);
		setLabelType(labelTypeParamValue);
	}

	native private void setLabelType_GraticalesLabelType(long pNativeObject, int labelType);
	/**
	 * 设置数据标注类型
	 * @param verticalGap 数据标注类型
	 */
	public void setLabelType(GraticalesLabelType labelType)
	{
		int labelTypeParamValue = labelType.getValue();
		setLabelType_GraticalesLabelType(this.nativeObject.pointer, labelTypeParamValue);
	}
	native private void setLabelType_GraticalesLabelType_NoVirtual(long pNativeObject, int labelType);
	protected void setLabelType_NoVirtual(GraticalesLabelType labelType)
	{
		int labelTypeParamValue = labelType.getValue();
		setLabelType_GraticalesLabelType_NoVirtual(this.nativeObject.pointer, labelTypeParamValue);
	}

	protected  int getLabelType_void_callback()
	{
		GraticalesLabelType returnValue = getLabelType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getLabelType_void(long pNativeObject);
	/**
	 * 获取数据标注类型
	 * @param  
	 * @return 数据标注类型
	 */
	public GraticalesLabelType getLabelType()
	{
		int returnValue = getLabelType_void(this.nativeObject.pointer);
		return GraticalesLabelType.toEnum(returnValue);
	}
	native private int getLabelType_void_NoVirtual(long pNativeObject);
	protected GraticalesLabelType getLabelType_NoVirtual()
	{
		int returnValue = getLabelType_void_NoVirtual(this.nativeObject.pointer);
		return GraticalesLabelType.toEnum(returnValue);
	}

	protected  long getDivisionSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getDivisionSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDivisionSymbol_void(long pNativeObject);
	/**
	 * 获取格网刻度风格
	 * @param symbol 
	 * @return 格网刻度风格
	 */
	public com.earthview.world.spatial.display.Isymbol getDivisionSymbol()
	{
		long returnValue = getDivisionSymbol_void(this.nativeObject.pointer);
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
	native private long getDivisionSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getDivisionSymbol_NoVirtual()
	{
		long returnValue = getDivisionSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setDivisionSymbol_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setDivisionSymbol(symbolParamValue);
	}

	native private void setDivisionSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置格网刻度风格
	 * @param symbol 格网刻度风格
	 */
	public void setDivisionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDivisionSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setDivisionSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setDivisionSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDivisionSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
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

	native private boolean isDrawGridline_void(long pNativeObject);
	/**
	 * 获取是否绘制网格
	 * @param  
	 * @return 是否绘制网格
	 */
	public boolean isDrawGridline()
	{
		boolean returnValue = isDrawGridline_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawGridline_void_NoVirtual(long pNativeObject);
	protected boolean isDrawGridline_NoVirtual()
	{
		boolean returnValue = isDrawGridline_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDrawGridline_ev_bool(long pNativeObject, boolean bSelected);
	/**
	 * 设置是否绘制网格
	 * @param bSelected 是否绘制网格
	 */
	public void setDrawGridline(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setDrawGridline_ev_bool(this.nativeObject.pointer, bSelectedParamValue);
	}
	native private void setDrawGridline_ev_bool_NoVirtual(long pNativeObject, boolean bSelected);
	protected void setDrawGridline_NoVirtual(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setDrawGridline_ev_bool_NoVirtual(this.nativeObject.pointer, bSelectedParamValue);
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 创建比例尺的克隆体
	 * @param  
	 * @return 比例尺的克隆体
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

	public Graticales(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Graticales(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取元素类型
	 * @param  
	 * @return 元素类型
	 */
	public com.earthview.world.spatial.carto.EVElementType getElementType()
	{
		return super.getElementType_NoVirtual();
	}
	/**
	 * 获取是否处于激活状态
	 * @param  
	 * @return 是否处于激活状态
	 */
	public boolean isActive()
	{
		return super.isActive_NoVirtual();
	}
	/**
	 * 设置是否处于激活状态
	 * @param bSelected 是否处于激活状态
	 */
	public void setActive(boolean bActive)
	{
		super.setActive_NoVirtual(bActive);
	}
	/**
	 * 获取地图格网风格
	 * @param symbol 
	 * @return 地图格网风格
	 */
	public com.earthview.world.spatial.display.Isymbol getGridlineSymbol()
	{
		return super.getGridlineSymbol_NoVirtual();
	}
	/**
	 * 设置地图格网风格
	 * @param symbol 地图格网风格
	 */
	public void setGridlineSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setGridlineSymbol_NoVirtual(symbol);
	}
	/**
	 * 获取文本风格
	 * @param symbol 
	 * @return 文本风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTextSymbol()
	{
		return super.getTextSymbol_NoVirtual();
	}
	/**
	 * 设置文本风格
	 * @param symbol 文本风格
	 */
	public void setTextSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setTextSymbol_NoVirtual(symbol);
	}
	
	native protected void register_setHorizontalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getHorizontalGap_void(long pNativeObject, String method);
	native protected void register_setVerticalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getVerticalGap_void(long pNativeObject, String method);
	native protected void register_setLabelType_GraticalesLabelType(long pNativeObject, String method);
	native protected void register_getLabelType_void(long pNativeObject, String method);
	native protected void register_getDivisionSymbol_void(long pNativeObject, String method);
	native protected void register_setDivisionSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getElementType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getEnvelope_void(long pNativeObject, String method);
	native protected void register_setEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_setMapFrame_IMapFrame(long pNativeObject, String method);
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_isDrawGridline_void(long pNativeObject, String method);
	native protected void register_setDrawGridline_ev_bool(long pNativeObject, String method);
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_getGridlineSymbol_void(long pNativeObject, String method);
	native protected void register_setGridlineSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getTextSymbol_void(long pNativeObject, String method);
	native protected void register_setTextSymbol_ISymbol(long pNativeObject, String method);
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
			this.register_setHorizontalGap_ev_real64(this.nativeObject.pointer, "setHorizontalGap_ev_real64_callback");
			this.register_getHorizontalGap_void(this.nativeObject.pointer, "getHorizontalGap_void_callback");
			this.register_setVerticalGap_ev_real64(this.nativeObject.pointer, "setVerticalGap_ev_real64_callback");
			this.register_getVerticalGap_void(this.nativeObject.pointer, "getVerticalGap_void_callback");
			this.register_setLabelType_GraticalesLabelType(this.nativeObject.pointer, "setLabelType_GraticalesLabelType_callback");
			this.register_getLabelType_void(this.nativeObject.pointer, "getLabelType_void_callback");
			this.register_getDivisionSymbol_void(this.nativeObject.pointer, "getDivisionSymbol_void_callback");
			this.register_setDivisionSymbol_ISymbol(this.nativeObject.pointer, "setDivisionSymbol_ISymbol_callback");
			this.register_getElementType_void(this.nativeObject.pointer, "getElementType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getEnvelope_void(this.nativeObject.pointer, "getEnvelope_void_callback");
			this.register_setEnvelope_IEnvelope(this.nativeObject.pointer, "setEnvelope_IEnvelope_callback");
			this.register_setMapFrame_IMapFrame(this.nativeObject.pointer, "setMapFrame_IMapFrame_callback");
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_isDrawGridline_void(this.nativeObject.pointer, "isDrawGridline_void_callback");
			this.register_setDrawGridline_ev_bool(this.nativeObject.pointer, "setDrawGridline_ev_bool_callback");
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_getGridlineSymbol_void(this.nativeObject.pointer, "getGridlineSymbol_void_callback");
			this.register_setGridlineSymbol_ISymbol(this.nativeObject.pointer, "setGridlineSymbol_ISymbol_callback");
			this.register_getTextSymbol_void(this.nativeObject.pointer, "getTextSymbol_void_callback");
			this.register_setTextSymbol_ISymbol(this.nativeObject.pointer, "setTextSymbol_ISymbol_callback");
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
	
	public static Graticales fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Graticales obj = null;
 		if(baseObj instanceof Graticales)
		{
			obj = (Graticales)baseObj;
		} else {
			obj = new Graticales(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGraticales");
			obj.increaseCast();
		}

		return obj;
	}
}
