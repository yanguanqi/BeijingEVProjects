package com.earthview.world.spatial2d.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图层label页的属性类提供label页属性的设置和描述的方法
 */
public class LayerLabelProperty extends com.earthview.world.spatial.display.Ilabelproperty {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Display::CLayerLabelProperty", new LayerLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Display::JCLayerLabelPropertyProxy", new LayerLabelPropertyClassFactory());
	}

	public LayerLabelProperty() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayerLabelPropertyProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.display.LayerLabelProperty".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @param  
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String strName);
	/**
	 * 设置名称
	 * @param strName 名称
	 */
	public void setName(String strName)
	{
		String strNameParamValue = strName;
		setName_EVString(this.nativeObject.pointer, strNameParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 图层注记是否可见
	 * @param  
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

	native private void setVisible_ev_bool(long pNativeObject, boolean bVisible);
	/**
	 * 设置图层注记是否可见
	 * @param bVisible 是否可见
	 */
	public void setVisible(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setVisible_ev_bool(this.nativeObject.pointer, bVisibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean bVisible);
	protected void setVisible_NoVirtual(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, bVisibleParamValue);
	}

	native private boolean ignoreScale_void(long pNativeObject);
	/**
	 * 是否按比例尺显示
	 * @param  
	 */
	public boolean ignoreScale()
	{
		boolean returnValue = ignoreScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean ignoreScale_void_NoVirtual(long pNativeObject);
	protected boolean ignoreScale_NoVirtual()
	{
		boolean returnValue = ignoreScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setIgnoreScale_ev_bool(long pNativeObject, boolean bIgnore);
	/**
	 * 设置是否按比例尺显示
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool(this.nativeObject.pointer, bIgnoreParamValue);
	}
	native private void setIgnoreScale_ev_bool_NoVirtual(long pNativeObject, boolean bIgnore);
	protected void setIgnoreScale_NoVirtual(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool_NoVirtual(this.nativeObject.pointer, bIgnoreParamValue);
	}

	native private double getMinScale_void(long pNativeObject);
	/**
	 * 获取最小比例尺
	 * @param  
	 */
	public double getMinScale()
	{
		double returnValue = getMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinScale_void_NoVirtual(long pNativeObject);
	protected double getMinScale_NoVirtual()
	{
		double returnValue = getMinScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMinScale_ev_real64(long pNativeObject, double dMinScale);
	/**
	 * 设置最小比例尺
	 * @param dMinScale 最小比例尺
	 */
	public void setMinScale(double dMinScale)
	{
		double dMinScaleParamValue = dMinScale;
		setMinScale_ev_real64(this.nativeObject.pointer, dMinScaleParamValue);
	}
	native private void setMinScale_ev_real64_NoVirtual(long pNativeObject, double dMinScale);
	protected void setMinScale_NoVirtual(double dMinScale)
	{
		double dMinScaleParamValue = dMinScale;
		setMinScale_ev_real64_NoVirtual(this.nativeObject.pointer, dMinScaleParamValue);
	}

	native private double getMaxScale_void(long pNativeObject);
	/**
	 * 获取最大比例尺
	 * @param  
	 */
	public double getMaxScale()
	{
		double returnValue = getMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxScale_void_NoVirtual(long pNativeObject);
	protected double getMaxScale_NoVirtual()
	{
		double returnValue = getMaxScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMaxScale_ev_real64(long pNativeObject, double dMaxScale);
	/**
	 * 设置最大比例尺
	 * @param dMaxScale 最大比例尺
	 */
	public void setMaxScale(double dMaxScale)
	{
		double dMaxScaleParamValue = dMaxScale;
		setMaxScale_ev_real64(this.nativeObject.pointer, dMaxScaleParamValue);
	}
	native private void setMaxScale_ev_real64_NoVirtual(long pNativeObject, double dMaxScale);
	protected void setMaxScale_NoVirtual(double dMaxScale)
	{
		double dMaxScaleParamValue = dMaxScale;
		setMaxScale_ev_real64_NoVirtual(this.nativeObject.pointer, dMaxScaleParamValue);
	}

	native private boolean isOnTopOfFeature_void(long pNativeObject);
	/**
	 * 检测标注是否在要素的上面
	 * @param  
	 * @return 如果在要素上面返回true,反之则否
	 */
	public boolean isOnTopOfFeature()
	{
		boolean returnValue = isOnTopOfFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isOnTopOfFeature_void_NoVirtual(long pNativeObject);
	protected boolean isOnTopOfFeature_NoVirtual()
	{
		boolean returnValue = isOnTopOfFeature_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setOnTopOfFeature_ev_bool(long pNativeObject, boolean bOnTop);
	/**
	 * 设置标注是否在要素之上
	 * @param bOnTop 如果为true,则在要素的上面,反之则否
	 */
	public void setOnTopOfFeature(boolean bOnTop)
	{
		boolean bOnTopParamValue = bOnTop;
		setOnTopOfFeature_ev_bool(this.nativeObject.pointer, bOnTopParamValue);
	}
	native private void setOnTopOfFeature_ev_bool_NoVirtual(long pNativeObject, boolean bOnTop);
	protected void setOnTopOfFeature_NoVirtual(boolean bOnTop)
	{
		boolean bOnTopParamValue = bOnTop;
		setOnTopOfFeature_ev_bool_NoVirtual(this.nativeObject.pointer, bOnTopParamValue);
	}

	native private String getPointLabelPositionPriority_void(long pNativeObject);
	/**
	 * 获取点标注的位置及其相应的优先级（围绕点要素标注时）
	 * @return 点标注的位置及其优先级
	 */
	public String getPointLabelPositionPriority()
	{
		String returnValue = getPointLabelPositionPriority_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPointLabelPositionPriority_EVString(long pNativeObject, String positionPriority);
	/**
	 * 设置点标注的位置及其相应的优先级
	 * @param  
	 */
	public void setPointLabelPositionPriority(String positionPriority)
	{
		String positionPriorityParamValue = positionPriority;
		setPointLabelPositionPriority_EVString(this.nativeObject.pointer, positionPriorityParamValue);
	}
	native private boolean isParallelToLineAlways_void(long pNativeObject);
	/**
	 * 判断标注是否一直平行于线
	 * @param  
	 * @return 如果一直平行与线则返回true,反之则否
	 */
	public boolean isParallelToLineAlways()
	{
		boolean returnValue = isParallelToLineAlways_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isParallelToLineAlways_void_NoVirtual(long pNativeObject);
	protected boolean isParallelToLineAlways_NoVirtual()
	{
		boolean returnValue = isParallelToLineAlways_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setParallelToLineAlways_ev_bool(long pNativeObject, boolean bParallel);
	/**
	 * 设置标注是否一直平行于线
	 * @param bParalle 如果为true,则标注一直平行于线,反之则否
	 */
	public void setParallelToLineAlways(boolean bParallel)
	{
		boolean bParallelParamValue = bParallel;
		setParallelToLineAlways_ev_bool(this.nativeObject.pointer, bParallelParamValue);
	}
	native private void setParallelToLineAlways_ev_bool_NoVirtual(long pNativeObject, boolean bParallel);
	protected void setParallelToLineAlways_NoVirtual(boolean bParallel)
	{
		boolean bParallelParamValue = bParallel;
		setParallelToLineAlways_ev_bool_NoVirtual(this.nativeObject.pointer, bParallelParamValue);
	}

	native private boolean isSegmentLabelLine_void(long pNativeObject);
	/**
	 * /判断是否分段标注线/
	 * @param  
	 * @return 如果分段标注线则返回true,反之则否
	 */
	public boolean isSegmentLabelLine()
	{
		boolean returnValue = isSegmentLabelLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSegmentLabelLine_ev_bool(long pNativeObject, boolean bSegmentLabel);
	/**
	 * 设置是否分段标注线
	 * @param bHorizontal 如果为true,则分段标注线,反之则否
	 */
	public void setSegmentLabelLine(boolean bSegmentLabel)
	{
		boolean bSegmentLabelParamValue = bSegmentLabel;
		setSegmentLabelLine_ev_bool(this.nativeObject.pointer, bSegmentLabelParamValue);
	}
	native private boolean isHorizontalAlways_void(long pNativeObject);
	/**
	 * 判断标注是否一直保持水平
	 * @param  
	 * @return 如果始终保持水平,则返回true,反之则否
	 */
	public boolean isHorizontalAlways()
	{
		boolean returnValue = isHorizontalAlways_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isHorizontalAlways_void_NoVirtual(long pNativeObject);
	protected boolean isHorizontalAlways_NoVirtual()
	{
		boolean returnValue = isHorizontalAlways_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setHorizontalAlways_ev_bool(long pNativeObject, boolean bHorizontal);
	/**
	 * 设置标注是否保持水平
	 * @param bHorizontal 如果为true,则标注保持水平,反之则否
	 */
	public void setHorizontalAlways(boolean bHorizontal)
	{
		boolean bHorizontalParamValue = bHorizontal;
		setHorizontalAlways_ev_bool(this.nativeObject.pointer, bHorizontalParamValue);
	}
	native private void setHorizontalAlways_ev_bool_NoVirtual(long pNativeObject, boolean bHorizontal);
	protected void setHorizontalAlways_NoVirtual(boolean bHorizontal)
	{
		boolean bHorizontalParamValue = bHorizontal;
		setHorizontalAlways_ev_bool_NoVirtual(this.nativeObject.pointer, bHorizontalParamValue);
	}

	native private boolean isInPolygon_void(long pNativeObject);
	/**
	 * 判断标注是否一直在面的内部
	 * @param  
	 * @return 如果标注一直在面的内部则返回true,反之则否
	 */
	public boolean isInPolygon()
	{
		boolean returnValue = isInPolygon_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInPolygon_void_NoVirtual(long pNativeObject);
	protected boolean isInPolygon_NoVirtual()
	{
		boolean returnValue = isInPolygon_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setInPolygon_ev_bool(long pNativeObject, boolean bIn);
	/**
	 * 设置标注是否一直面内部
	 * @param bIn 如果为true,则保持标注一直在面的内部,反之则否
	 */
	public void setInPolygon(boolean bIn)
	{
		boolean bInParamValue = bIn;
		setInPolygon_ev_bool(this.nativeObject.pointer, bInParamValue);
	}
	native private void setInPolygon_ev_bool_NoVirtual(long pNativeObject, boolean bIn);
	protected void setInPolygon_NoVirtual(boolean bIn)
	{
		boolean bInParamValue = bIn;
		setInPolygon_ev_bool_NoVirtual(this.nativeObject.pointer, bInParamValue);
	}

	protected  long getDuplicateFlag_void_callback()
	{
		EarthView::World::Spatial::Display::EVLabelDuplicateFlag returnValue = getDuplicateFlag();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDuplicateFlag_void(long pNativeObject);
	/**
	 * 获取图层标注是否去除重复的注记
	 * @param  
	 */
	public EarthView::World::Spatial::Display::EVLabelDuplicateFlag getDuplicateFlag()
	{
		long returnValue = getDuplicateFlag_void(this.nativeObject.pointer);
		EarthView::World::Spatial::Display::EVLabelDuplicateFlag __returnValue = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Display::EVLabelDuplicateFlag");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EarthView::World::Spatial::Display::EVLabelDuplicateFlag)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Display::EVLabelDuplicateFlag");
		}
		return __returnValue;
	}
	native private long getDuplicateFlag_void_NoVirtual(long pNativeObject);
	protected EarthView::World::Spatial::Display::EVLabelDuplicateFlag getDuplicateFlag_NoVirtual()
	{
		long returnValue = getDuplicateFlag_void_NoVirtual(this.nativeObject.pointer);
		EarthView::World::Spatial::Display::EVLabelDuplicateFlag __returnValue = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Display::EVLabelDuplicateFlag");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (EarthView::World::Spatial::Display::EVLabelDuplicateFlag)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EarthView::World::Spatial::Display::EVLabelDuplicateFlag");
		}
		return __returnValue;
	}

	protected  void setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_callback(long flag)
	{
		EarthView::World::Spatial::Display::EVLabelDuplicateFlag flagParamValue = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(CreatedWhenConstruct.CWC_NotToCreate);
		flagParamValue.setDelegate(true);
		flagParamValue.setInstancePointer(new InstancePointer(flag));
		IClassFactory flagParamValueClassFactory = GlobalClassFactoryMap.get(flagParamValue.getCppInstanceTypeName());
		if (flagParamValueClassFactory != null)
		{
			flagParamValue.setDelegate(true);
			flagParamValue = (EarthView::World::Spatial::Display::EVLabelDuplicateFlag)flagParamValueClassFactory.create();
			flagParamValue.setDelegate(true);
			flagParamValue.setInstancePointer(new InstancePointer(flag));
		}
		setDuplicateFlag(flagParamValue);
	}

	native private void setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(long pNativeObject, long flag);
	/**
	 * 设置图层标注是否去除重复的注记
	 * @param  
	 */
	public void setDuplicateFlag(EarthView::World::Spatial::Display::EVLabelDuplicateFlag flag)
	{
		long flagParamValue = flag.nativeObject.pointer;
		setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(this.nativeObject.pointer, flagParamValue);
	}
	native private void setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_NoVirtual(long pNativeObject, long flag);
	protected void setDuplicateFlag_NoVirtual(EarthView::World::Spatial::Display::EVLabelDuplicateFlag flag)
	{
		long flagParamValue = flag.nativeObject.pointer;
		setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private int getRelationOfFontAndAxis_void(long pNativeObject);
	/**
	 * 获取标注与轴的关系
	 * @param  
	 * @return 字体与轴的关系
	 */
	public com.earthview.world.spatial.display.EVFontAndAxisRelationType getRelationOfFontAndAxis()
	{
		int returnValue = getRelationOfFontAndAxis_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVFontAndAxisRelationType.toEnum(returnValue);
	}
	native private int getRelationOfFontAndAxis_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVFontAndAxisRelationType getRelationOfFontAndAxis_NoVirtual()
	{
		int returnValue = getRelationOfFontAndAxis_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVFontAndAxisRelationType.toEnum(returnValue);
	}

	native private void setRelationOfFontAndAxis_EVFontAndAxisRelationType(long pNativeObject, int type);
	/**
	 * 设置字体与轴的关系
	 * @param type 字体与轴的关系类型
	 */
	public void setRelationOfFontAndAxis(com.earthview.world.spatial.display.EVFontAndAxisRelationType type)
	{
		int typeParamValue = type.getValue();
		setRelationOfFontAndAxis_EVFontAndAxisRelationType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(long pNativeObject, int type);
	protected void setRelationOfFontAndAxis_NoVirtual(com.earthview.world.spatial.display.EVFontAndAxisRelationType type)
	{
		int typeParamValue = type.getValue();
		setRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  void setFeatureWeightEnable_ev_bool_callback(boolean b)
	{
		boolean bParamValue = b;
		setFeatureWeightEnable(bParamValue);
	}

	native private void setFeatureWeightEnable_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否允许注记压盖要素
	 * @param b 是否允许注记压盖要素
	 */
	public void setFeatureWeightEnable(boolean b)
	{
		boolean bParamValue = b;
		setFeatureWeightEnable_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setFeatureWeightEnable_ev_bool_NoVirtual(long pNativeObject, boolean b);
	protected void setFeatureWeightEnable_NoVirtual(boolean b)
	{
		boolean bParamValue = b;
		setFeatureWeightEnable_ev_bool_NoVirtual(this.nativeObject.pointer, bParamValue);
	}

	protected  boolean getFeatureWeightEnable_void_callback()
	{
		boolean returnValue = getFeatureWeightEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFeatureWeightEnable_void(long pNativeObject);
	/**
	 * 是否允许注记压盖要素
	 * @param  
	 * @return 若允许注记压盖要素返回true,否则返回false
	 */
	public boolean getFeatureWeightEnable()
	{
		boolean returnValue = getFeatureWeightEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getFeatureWeightEnable_void_NoVirtual(long pNativeObject);
	protected boolean getFeatureWeightEnable_NoVirtual()
	{
		boolean returnValue = getFeatureWeightEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTextSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置文本风格
	 * @param pSymbol 文本风格
	 */
	public void setTextSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTextSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setTextSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setTextSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTextSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	native private long getTextSymbol_void(long pNativeObject);
	/**
	 * 获取文本风格
	 * @param  
	 * @return 文本风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTextSymbol()
	{
		long returnValue = getTextSymbol_void(this.nativeObject.pointer);
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
	native private long getTextSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getTextSymbol_NoVirtual()
	{
		long returnValue = getTextSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setField_EVString(long pNativeObject, String field);
	/**
	 * 设置标注的字段
	 * @param field 字段名称
	 */
	public void setField(String field)
	{
		String fieldParamValue = field;
		setField_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void setField_EVString_NoVirtual(long pNativeObject, String field);
	protected void setField_NoVirtual(String field)
	{
		String fieldParamValue = field;
		setField_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	native private String getField_void(long pNativeObject);
	/**
	 * 获取标注的字段
	 * @param  
	 * @return 字段名称
	 */
	public String getField()
	{
		String returnValue = getField_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getField_void_NoVirtual(long pNativeObject);
	protected String getField_NoVirtual()
	{
		String returnValue = getField_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createSubLabelProperty_void(long pNativeObject);
	/**
	 * 创建子标注
	 * @param  
	 */
	public com.earthview.world.spatial.display.Ilabelproperty createSubLabelProperty()
	{
		long returnValue = createSubLabelProperty_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}
	native private void addSubLabelProperty_ILabelProperty(long pNativeObject, long pLProperty);
	/**
	 * 添加子标注
	 * @param  标注属性
	 */
	public void addSubLabelProperty(com.earthview.world.spatial.display.Ilabelproperty pLProperty)
	{
		long pLPropertyParamValue = (pLProperty == null ? 0L : pLProperty.nativeObject.pointer);
		addSubLabelProperty_ILabelProperty(this.nativeObject.pointer, pLPropertyParamValue);
	}
	native private void removeSubLabelProperty_ILabelProperty(long pNativeObject, long pLProperty);
	/**
	 * 移除子标注
	 * @param  标注属性
	 */
	public void removeSubLabelProperty(com.earthview.world.spatial.display.Ilabelproperty pLProperty)
	{
		long pLPropertyParamValue = (pLProperty == null ? 0L : pLProperty.nativeObject.pointer);
		removeSubLabelProperty_ILabelProperty(this.nativeObject.pointer, pLPropertyParamValue);
	}
	native private int getSubLabelPropertyCount_void(long pNativeObject);
	/**
	 * 获取子标注个数
	 * @param  
	 * @return 子标注个数
	 */
	public int getSubLabelPropertyCount()
	{
		int returnValue = getSubLabelPropertyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubLabelProperty_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 获取子标注
	 * @param  子标注索引
	 */
	public com.earthview.world.spatial.display.Ilabelproperty getSubLabelProperty(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getSubLabelProperty_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}
	native private boolean isClassify_void(long pNativeObject);
	/**
	 * 是否分类显示注记
	 * @param  
	 * @return 若分类显示，则返回true,否则返回false
	 */
	public boolean isClassify()
	{
		boolean returnValue = isClassify_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClassify_ev_bool(long pNativeObject, boolean bClassify);
	/**
	 * 设置是否分类显示注记
	 * @param  
	 * @return 标注属性
	 */
	public void setClassify(boolean bClassify)
	{
		boolean bClassifyParamValue = bClassify;
		setClassify_ev_bool(this.nativeObject.pointer, bClassifyParamValue);
	}
	native private boolean isSubLabelProperty_void(long pNativeObject);
	/**
	 * 判断是不是子标注
	 * @param  
	 * @return 若分类显示，则返回true,否则返回false
	 */
	public boolean isSubLabelProperty()
	{
		boolean returnValue = isSubLabelProperty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDisplayFilter_EVString(long pNativeObject, String filter);
	/**
	 * 设置注记显示过滤条件
	 * @param filter 过滤条件
	 */
	public void setDisplayFilter(String filter)
	{
		String filterParamValue = filter;
		setDisplayFilter_EVString(this.nativeObject.pointer, filterParamValue);
	}
	native private String getDisplayFilter_void(long pNativeObject);
	/**
	 * 获取注记显示过滤条件
	 * @param  
	 * @return 返回过滤条件
	 */
	public String getDisplayFilter()
	{
		String returnValue = getDisplayFilter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLabelConflictBuffer_void(long pNativeObject);
	/**
	 * 获取注记占位扩展缓冲区（像素）
	 * @param  
	 * @return 返回缓冲区大小
	 */
	public long getLabelConflictBuffer()
	{
		long returnValue = getLabelConflictBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLabelConflictBuffer_ev_uint32(long pNativeObject, long labelBuffer);
	/**
	 * 设置注记占位扩展缓冲区（像素）
	 * @param  
	 */
	public void setLabelConflictBuffer(long labelBuffer)
	{
		long labelBufferParamValue = labelBuffer;
		setLabelConflictBuffer_ev_uint32(this.nativeObject.pointer, labelBufferParamValue);
	}
	native private void clearSubLabelProperty_void(long pNativeObject);
	/**
	 * 清空子标注
	 * @param  
	 */
	public void clearSubLabelProperty()
	{
		clearSubLabelProperty_void(this.nativeObject.pointer);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @param  
	 * @return 标注属性
	 */
	public com.earthview.world.spatial.display.Ilabelproperty ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ilabelproperty ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml中恢复标注属性
	 * @param  
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
	 * 把标注属性保存成xml要素
	 * @param  
	 * @return xml要素
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 把标注属性保存到流中
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

	public LayerLabelProperty(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerLabelProperty(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///分数注记
	public void setFractionLabel(boolean fraction)
	{
		super.setFractionLabel_NoVirtual(fraction);
	}
	public boolean getIsFractionLabel()
	{
		return super.getIsFractionLabel_NoVirtual();
	}
	public void setNumeratorField(String field)
	{
		super.setNumeratorField_NoVirtual(field);
	}
	public String getNumeratorField()
	{
		return super.getNumeratorField_NoVirtual();
	}
	
	native protected void register_getDuplicateFlag_void(long pNativeObject, String method);
	native protected void register_setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(long pNativeObject, String method);
	native protected void register_setFeatureWeightEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getFeatureWeightEnable_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getMinScale_void(long pNativeObject, String method);
	native protected void register_setMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getMaxScale_void(long pNativeObject, String method);
	native protected void register_setMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_isOnTopOfFeature_void(long pNativeObject, String method);
	native protected void register_setOnTopOfFeature_ev_bool(long pNativeObject, String method);
	native protected void register_isParallelToLineAlways_void(long pNativeObject, String method);
	native protected void register_setParallelToLineAlways_ev_bool(long pNativeObject, String method);
	native protected void register_isHorizontalAlways_void(long pNativeObject, String method);
	native protected void register_setHorizontalAlways_ev_bool(long pNativeObject, String method);
	native protected void register_isInPolygon_void(long pNativeObject, String method);
	native protected void register_setInPolygon_ev_bool(long pNativeObject, String method);
	native protected void register_getRelationOfFontAndAxis_void(long pNativeObject, String method);
	native protected void register_setRelationOfFontAndAxis_EVFontAndAxisRelationType(long pNativeObject, String method);
	native protected void register_setTextSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getTextSymbol_void(long pNativeObject, String method);
	native protected void register_setField_EVString(long pNativeObject, String method);
	native protected void register_getField_void(long pNativeObject, String method);
	native protected void register_setFractionLabel_ev_bool(long pNativeObject, String method);
	native protected void register_getIsFractionLabel_void(long pNativeObject, String method);
	native protected void register_setNumeratorField_EVString(long pNativeObject, String method);
	native protected void register_getNumeratorField_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDuplicateFlag_void(this.nativeObject.pointer, "getDuplicateFlag_void_callback");
			this.register_setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(this.nativeObject.pointer, "setDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_callback");
			this.register_setFeatureWeightEnable_ev_bool(this.nativeObject.pointer, "setFeatureWeightEnable_ev_bool_callback");
			this.register_getFeatureWeightEnable_void(this.nativeObject.pointer, "getFeatureWeightEnable_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getMinScale_void(this.nativeObject.pointer, "getMinScale_void_callback");
			this.register_setMinScale_ev_real64(this.nativeObject.pointer, "setMinScale_ev_real64_callback");
			this.register_getMaxScale_void(this.nativeObject.pointer, "getMaxScale_void_callback");
			this.register_setMaxScale_ev_real64(this.nativeObject.pointer, "setMaxScale_ev_real64_callback");
			this.register_isOnTopOfFeature_void(this.nativeObject.pointer, "isOnTopOfFeature_void_callback");
			this.register_setOnTopOfFeature_ev_bool(this.nativeObject.pointer, "setOnTopOfFeature_ev_bool_callback");
			this.register_isParallelToLineAlways_void(this.nativeObject.pointer, "isParallelToLineAlways_void_callback");
			this.register_setParallelToLineAlways_ev_bool(this.nativeObject.pointer, "setParallelToLineAlways_ev_bool_callback");
			this.register_isHorizontalAlways_void(this.nativeObject.pointer, "isHorizontalAlways_void_callback");
			this.register_setHorizontalAlways_ev_bool(this.nativeObject.pointer, "setHorizontalAlways_ev_bool_callback");
			this.register_isInPolygon_void(this.nativeObject.pointer, "isInPolygon_void_callback");
			this.register_setInPolygon_ev_bool(this.nativeObject.pointer, "setInPolygon_ev_bool_callback");
			this.register_getRelationOfFontAndAxis_void(this.nativeObject.pointer, "getRelationOfFontAndAxis_void_callback");
			this.register_setRelationOfFontAndAxis_EVFontAndAxisRelationType(this.nativeObject.pointer, "setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback");
			this.register_setTextSymbol_ISymbol(this.nativeObject.pointer, "setTextSymbol_ISymbol_callback");
			this.register_getTextSymbol_void(this.nativeObject.pointer, "getTextSymbol_void_callback");
			this.register_setField_EVString(this.nativeObject.pointer, "setField_EVString_callback");
			this.register_getField_void(this.nativeObject.pointer, "getField_void_callback");
			this.register_setFractionLabel_ev_bool(this.nativeObject.pointer, "setFractionLabel_ev_bool_callback");
			this.register_getIsFractionLabel_void(this.nativeObject.pointer, "getIsFractionLabel_void_callback");
			this.register_setNumeratorField_EVString(this.nativeObject.pointer, "setNumeratorField_EVString_callback");
			this.register_getNumeratorField_void(this.nativeObject.pointer, "getNumeratorField_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static LayerLabelProperty fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerLabelProperty obj = null;
 		if(baseObj instanceof LayerLabelProperty)
		{
			obj = (LayerLabelProperty)baseObj;
		} else {
			obj = new LayerLabelProperty(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerLabelProperty");
			obj.increaseCast();
		}

		return obj;
	}
}
