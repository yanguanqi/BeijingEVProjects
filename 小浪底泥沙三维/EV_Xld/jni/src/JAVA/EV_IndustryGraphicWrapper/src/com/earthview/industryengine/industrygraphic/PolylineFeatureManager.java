package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线特征管理类，用于管理与渲染不同风格的线特征对象
 */
public class PolylineFeatureManager extends com.earthview.industryengine.industrygraphic.BaseBandingObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager", new PolylineFeatureManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCPolylineFeatureManagerProxy", new PolylineFeatureManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param ref_pSceneManager 场景管理对象
	 */
	public PolylineFeatureManager(String name, com.earthview.world.graphic.SceneManager ref_pSceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_pSceneManagerPtr = new BasePointer(ref_pSceneManager);
		list.add("ref_pSceneManager", ref_pSceneManagerPtr.get());
		Create("JCPolylineFeatureManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.PolylineFeatureManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getPolylineFeature_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 线特征对象
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature getPolylineFeature(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long returnValue = getPolylineFeature_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.PolylineFeature __returnValue = new com.earthview.industryengine.industrygraphic.PolylineFeature(CreatedWhenConstruct.CWC_NotToCreate, "CPolylineFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.PolylineFeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolylineFeature");
		}
		return __returnValue;
	}
	native private void addPolylineFeature_CPolylineFeature_ev_bool(long pNativeObject, long ref_polylineFeature, boolean needUpdate);
	/**
	 * 添加线特征对象
	 * @param ref_polylineFeature 线特征对象(与线特征管理对象的生命周期保持一致)
	 * @param needUpdate 是否需要刷新
	 */
	public void addPolylineFeature(com.earthview.industryengine.industrygraphic.PolylineFeature ref_polylineFeature, boolean needUpdate)
	{
		long ref_polylineFeatureParamValue = (ref_polylineFeature == null ? 0L : ref_polylineFeature.nativeObject.pointer);
		boolean needUpdateParamValue = needUpdate;
		addPolylineFeature_CPolylineFeature_ev_bool(this.nativeObject.pointer, ref_polylineFeatureParamValue, needUpdateParamValue);
	}
	native private void removePolylineFeature_CPolylineFeature_ev_bool(long pNativeObject, long polylineFeature, boolean needUpdate);
	/**
	 * 移除线特征对象
	 * @param polylineFeature 线特征对象
	 * @param needUpdate 是否需要刷新
	 */
	public void removePolylineFeature(com.earthview.industryengine.industrygraphic.PolylineFeature polylineFeature, boolean needUpdate)
	{
		long polylineFeatureParamValue = (polylineFeature == null ? 0L : polylineFeature.nativeObject.pointer);
		boolean needUpdateParamValue = needUpdate;
		removePolylineFeature_CPolylineFeature_ev_bool(this.nativeObject.pointer, polylineFeatureParamValue, needUpdateParamValue);
	}
	native private void removePolylineFeaturePoints_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean needUpdate);
	/**
	 * 移除线特征对象中所有的点
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param needUpdate 是否需要刷新
	 */
	public void removePolylineFeaturePoints(int polylineFeatureUniqueID, boolean needUpdate)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean needUpdateParamValue = needUpdate;
		removePolylineFeaturePoints_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, needUpdateParamValue);
	}
	native private void removePolylineFeature_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean needUpdate);
	/**
	 * 移除线特征对象
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param needUpdate 是否需要刷新
	 */
	public void removePolylineFeature(int polylineFeatureUniqueID, boolean needUpdate)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean needUpdateParamValue = needUpdate;
		removePolylineFeature_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, needUpdateParamValue);
	}
	native private boolean contain_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 判断是否包含唯一标示的线特征对象
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 是否包含线特征对象
	 */
	public boolean contain(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = contain_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	protected  void setPolylineFeatureVisible_ev_int32_ev_bool_callback(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setPolylineFeatureVisible(polylineFeatureUniqueIDParamValue, valueParamValue);
	}

	native private void setPolylineFeatureVisible_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean value);
	/**
	 * 设置唯一标示的线特征对象的显示状态
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param value 是否可见
	 */
	public void setPolylineFeatureVisible(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setPolylineFeatureVisible_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, valueParamValue);
	}
	native private void setPolylineFeatureVisible_ev_int32_ev_bool_NoVirtual(long pNativeObject, int polylineFeatureUniqueID, boolean value);
	protected void setPolylineFeatureVisible_NoVirtual(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setPolylineFeatureVisible_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, valueParamValue);
	}

	native private boolean getPolylineFeatureVisible_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的显示状态
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 显示状态
	 */
	public boolean getPolylineFeatureVisible(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getPolylineFeatureVisible_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	protected  void setNeedClearUselessData_ev_int32_ev_bool_callback(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setNeedClearUselessData(polylineFeatureUniqueIDParamValue, valueParamValue);
	}

	native private void setNeedClearUselessData_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean value);
	/**
	 * 设置唯一标示的线特征对象是否清除冗余点
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param value 是否清除冗余点
	 */
	public void setNeedClearUselessData(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setNeedClearUselessData_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, valueParamValue);
	}
	native private void setNeedClearUselessData_ev_int32_ev_bool_NoVirtual(long pNativeObject, int polylineFeatureUniqueID, boolean value);
	protected void setNeedClearUselessData_NoVirtual(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setNeedClearUselessData_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, valueParamValue);
	}

	native private boolean getNeedClearUselessData_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的的是否清除冗余点
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 是否清除冗余点
	 */
	public boolean getNeedClearUselessData(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getNeedClearUselessData_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private void setDescription_ev_int32_EVString(long pNativeObject, int polylineFeatureUniqueID, String description);
	/**
	 * 设置唯一标示的线特征对象的描述信息
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param description 描述信息
	 */
	public void setDescription(int polylineFeatureUniqueID, String description)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		String descriptionParamValue = description;
		setDescription_ev_int32_EVString(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, descriptionParamValue);
	}
	native private void setUniformVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 统一设置线特征对象的显示状态
	 * @param value 是否可见
	 */
	public void setUniformVisible(boolean value)
	{
		boolean valueParamValue = value;
		setUniformVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setUniformPolylineFeatureSymbol_ISymbol_EVDisplayMode(long pNativeObject, long ref_uniformSymbol, int displayMode);
	/**
	 * 统一设置相应显示模式的线特征对象的显示风格
	 * @param ref_uniformSymbol 显示风格(与线特征管理对象的生命周期保持一致)
	 * @param displayMode 显示模式
	 */
	public void setUniformPolylineFeatureSymbol(com.earthview.world.spatial.display.Isymbol ref_uniformSymbol, com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		long ref_uniformSymbolParamValue = (ref_uniformSymbol == null ? 0L : ref_uniformSymbol.nativeObject.pointer);
		int displayModeParamValue = displayMode.getValue();
		setUniformPolylineFeatureSymbol_ISymbol_EVDisplayMode(this.nativeObject.pointer, ref_uniformSymbolParamValue, displayModeParamValue);
	}
	native private long getUniformPolylineFeatureSymbol_EVDisplayMode(long pNativeObject, int displayMode);
	/**
	 * 获取线特征对象的统一显示风格
	 * @param displayMode 显示模式
	 */
	public com.earthview.world.spatial.display.Isymbol getUniformPolylineFeatureSymbol(com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		int displayModeParamValue = displayMode.getValue();
		long returnValue = getUniformPolylineFeatureSymbol_EVDisplayMode(this.nativeObject.pointer, displayModeParamValue);
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
	native private void addPoint_ev_int32_CCoordinate_ev_bool(long pNativeObject, int polylineFeatureUniqueID, long point, boolean needUpdate);
	/**
	 * 为唯一标示的线特征对象添加点
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param point 点坐标
	 * @param needUpdate 是否需要更新
	 */
	public void addPoint(int polylineFeatureUniqueID, com.earthview.world.spatial.geometry.Coordinate point, boolean needUpdate)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long pointParamValue = point.nativeObject.pointer;
		boolean needUpdateParamValue = needUpdate;
		addPoint_ev_int32_CCoordinate_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, pointParamValue, needUpdateParamValue);
	}
	native private void setPolylineFeatureSymbol_ev_int32_ISymbol(long pNativeObject, int polylineFeatureUniqueID, long polylineFeatureSymbol);
	/**
	 * 设置唯一标示的线特征对象的显示风格
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param polylineFeatureSymbol 显示风格(内部进行clone)
	 */
	public void setPolylineFeatureSymbol(int polylineFeatureUniqueID, com.earthview.world.spatial.display.Isymbol polylineFeatureSymbol)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long polylineFeatureSymbolParamValue = (polylineFeatureSymbol == null ? 0L : polylineFeatureSymbol.nativeObject.pointer);
		setPolylineFeatureSymbol_ev_int32_ISymbol(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, polylineFeatureSymbolParamValue);
	}
	native private void setIsPolylineFeatureHighLine_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean value);
	/**
	 * 设置唯一标示的线特征对象的是否以视高线风格显示
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param value 是否为视高线
	 */
	public void setIsPolylineFeatureHighLine(int polylineFeatureUniqueID, boolean value)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean valueParamValue = value;
		setIsPolylineFeatureHighLine_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, valueParamValue);
	}
	native private boolean getIsPolylineFeatureHighLine_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的是否以视高线风格显示
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 是否为视高线
	 */
	public boolean getIsPolylineFeatureHighLine(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getIsPolylineFeatureHighLine_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private void setDisplayStrategyForPointMode_ev_int32(long pNativeObject, int strategyValue);
	/**
	 * 设置线特征对象以点模式显示(非图片方式显示的点)时的显示策略
	 * @param strategyValue 策略值
	 */
	public void setDisplayStrategyForPointMode(int strategyValue)
	{
		int strategyValueParamValue = strategyValue;
		setDisplayStrategyForPointMode_ev_int32(this.nativeObject.pointer, strategyValueParamValue);
	}
	native private int getDisplayStrategyForPointMode_void(long pNativeObject);
	/**
	 * 获取线特征对象以点模式显示(非图片方式显示的点)时的显示策略
	 * @return 策略值
	 */
	public int getDisplayStrategyForPointMode()
	{
		int returnValue = getDisplayStrategyForPointMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHighLineColorInfo_ev_int32_CRgbColor_CRgbColor(long pNativeObject, int polylineFeatureUniqueID, long staticHighLineColor, long dynamicHighLineColor);
	/**
	 * 设置唯一标示的线特征对象的视高线显示颜色
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param staticHighLineColor 静态部分的颜色
	 * @param dynamicHighLineColor 动态部分的颜色
	 */
	public void setHighLineColorInfo(int polylineFeatureUniqueID, com.earthview.world.spatial.display.RgbColor staticHighLineColor, com.earthview.world.spatial.display.RgbColor dynamicHighLineColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long staticHighLineColorParamValue = (staticHighLineColor == null ? 0L : staticHighLineColor.nativeObject.pointer);
		long dynamicHighLineColorParamValue = (dynamicHighLineColor == null ? 0L : dynamicHighLineColor.nativeObject.pointer);
		setHighLineColorInfo_ev_int32_CRgbColor_CRgbColor(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}
	native private void setHighLineDistance_ev_int32_ev_real64(long pNativeObject, int polylineFeatureUniqueID, double highLineDistance);
	/**
	 * 设置唯一标示的线特征对象的视高线间距
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param highLineDistance 间距
	 */
	public void setHighLineDistance(int polylineFeatureUniqueID, double highLineDistance)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance_ev_int32_ev_real64(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, highLineDistanceParamValue);
	}
	native private double getHighLineDistance_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的视高线间距
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 视高线间距
	 */
	public double getHighLineDistance(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		double returnValue = getHighLineDistance_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private long getPolylineFeatureSymbol_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的显示风格
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 显示风格
	 */
	public com.earthview.world.spatial.display.Isymbol getPolylineFeatureSymbol(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long returnValue = getPolylineFeatureSymbol_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
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
	native private void setUniformDisplayMode_EVDisplayMode_ISymbol(long pNativeObject, int displayMode, long uniformSymbol);
	/**
	 * 统一设置显示模式
	 * @param displayMode 显示模式
	 * @param uniformSymbol 与显示模式对应的风格(内部进行clone)
	 */
	public void setUniformDisplayMode(com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode, com.earthview.world.spatial.display.Isymbol uniformSymbol)
	{
		int displayModeParamValue = displayMode.getValue();
		long uniformSymbolParamValue = (uniformSymbol == null ? 0L : uniformSymbol.nativeObject.pointer);
		setUniformDisplayMode_EVDisplayMode_ISymbol(this.nativeObject.pointer, displayModeParamValue, uniformSymbolParamValue);
	}
	native private int getUniformDisplayMode_void(long pNativeObject);
	/**
	 * 获取统一的显示模式
	 * @return 显示模式
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getUniformDisplayMode()
	{
		int returnValue = getUniformDisplayMode_void(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}
	native private void setDisplayMode_ev_int32_EVDisplayMode(long pNativeObject, int polylineFeatureUniqueID, int displayMode);
	/**
	 * 设置唯一标示的线特征对象的显示模式
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param displayMode 显示模式
	 */
	public void setDisplayMode(int polylineFeatureUniqueID, com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		int displayModeParamValue = displayMode.getValue();
		setDisplayMode_ev_int32_EVDisplayMode(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, displayModeParamValue);
	}
	native private int getDisplayMode_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的显示模式
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 显示模式
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getDisplayMode(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		int returnValue = getDisplayMode_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}
	native private void setISpatialReference_ev_int32_ISpatialReference(long pNativeObject, int polylineFeatureUniqueID, long ref_iSpatialReference);
	/**
	 * 设置唯一标示的线特征对象的空间参考
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param ref_iSpatialReference 空间参考(与线特征管理对象的生命周期保持一致)
	 */
	public void setISpatialReference(int polylineFeatureUniqueID, com.earthview.world.spatial.geometry.Ispatialreference ref_iSpatialReference)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long ref_iSpatialReferenceParamValue = (ref_iSpatialReference == null ? 0L : ref_iSpatialReference.nativeObject.pointer);
		setISpatialReference_ev_int32_ISpatialReference(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, ref_iSpatialReferenceParamValue);
	}
	native private long getISpatialReference_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的空间参考
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 空间参考
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getISpatialReference(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long returnValue = getISpatialReference_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private void setUniformISpatialReference_ISpatialReference(long pNativeObject, long ref_uniformSpatialReference);
	/**
	 * 统一设置空间参考
	 * @param ref_uniformSpatialReference 空间参考(与线特征管理对象的生命周期保持一致)
	 */
	public void setUniformISpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_uniformSpatialReference)
	{
		long ref_uniformSpatialReferenceParamValue = (ref_uniformSpatialReference == null ? 0L : ref_uniformSpatialReference.nativeObject.pointer);
		setUniformISpatialReference_ISpatialReference(this.nativeObject.pointer, ref_uniformSpatialReferenceParamValue);
	}
	native private long getUniformISpatialReference_void(long pNativeObject);
	/**
	 * 获取统一的空间参考
	 * @return 空间参考
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getUniformISpatialReference()
	{
		long returnValue = getUniformISpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private void setDisplayPointNum_ev_int32_ev_int32(long pNativeObject, int polylineFeatureUniqueID, int displayPointNum);
	/**
	 * 设置唯一标示的线特征对象的点显示数目
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param displayPointNum 显示数目
	 */
	public void setDisplayPointNum(int polylineFeatureUniqueID, int displayPointNum)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		int displayPointNumParamValue = displayPointNum;
		setDisplayPointNum_ev_int32_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, displayPointNumParamValue);
	}
	native private int getDisplayPointNum_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取唯一标示的线特征对象的显示数目
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 线特征对象的显示数目
	 */
	public int getDisplayPointNum(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		int returnValue = getDisplayPointNum_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private void setUniformDisplayPointNum_ev_int32(long pNativeObject, int displayPointNum);
	/**
	 * 统一设置点显示数目
	 * @param displayPointNum 显示数目
	 */
	public void setUniformDisplayPointNum(int displayPointNum)
	{
		int displayPointNumParamValue = displayPointNum;
		setUniformDisplayPointNum_ev_int32(this.nativeObject.pointer, displayPointNumParamValue);
	}
	native private int getUniformDisplayPointNum_void(long pNativeObject);
	/**
	 * 获取统一的点显示数目
	 * @return 点显示数目
	 */
	public int getUniformDisplayPointNum()
	{
		int returnValue = getUniformDisplayPointNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPolylineFeatureCount_void(long pNativeObject);
	/**
	 * 获取当前线特征对象的数目
	 * @return 当前线特征对象的数目
	 */
	public int getPolylineFeatureCount()
	{
		int returnValue = getPolylineFeatureCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSegmentRenderParameter_ev_int32(long pNativeObject, int perSegmentVertexCount);
	/**
	 * 设置分段渲染参数，启用分段才有效
	 * @param perSegmentVertexCount 每个片段顶点个数(大于等于20)
	 */
	public void setSegmentRenderParameter(int perSegmentVertexCount)
	{
		int perSegmentVertexCountParamValue = perSegmentVertexCount;
		setSegmentRenderParameter_ev_int32(this.nativeObject.pointer, perSegmentVertexCountParamValue);
	}
	protected  boolean getUseWallGradualColor_ev_int32_callback(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getUseWallGradualColor(polylineFeatureUniqueIDParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseWallGradualColor_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 是否使用渐变颜色
	 */
	public boolean getUseWallGradualColor(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getUseWallGradualColor_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private boolean getUseWallGradualColor_ev_int32_NoVirtual(long pNativeObject, int polylineFeatureUniqueID);
	protected boolean getUseWallGradualColor_NoVirtual(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = getUseWallGradualColor_ev_int32_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}

	protected  void setUseWallGradualColor_ev_int32_ev_bool_callback(int polylineFeatureUniqueID, boolean useWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor(polylineFeatureUniqueIDParamValue, useWallGradualColorParamValue);
	}

	native private void setUseWallGradualColor_ev_int32_ev_bool(long pNativeObject, int polylineFeatureUniqueID, boolean useWallGradualColor);
	/**
	 * 设置当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param useWallGradualColor 否使用渐变颜色
	 */
	public void setUseWallGradualColor(int polylineFeatureUniqueID, boolean useWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor_ev_int32_ev_bool(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, useWallGradualColorParamValue);
	}
	native private void setUseWallGradualColor_ev_int32_ev_bool_NoVirtual(long pNativeObject, int polylineFeatureUniqueID, boolean useWallGradualColor);
	protected void setUseWallGradualColor_NoVirtual(int polylineFeatureUniqueID, boolean useWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, useWallGradualColorParamValue);
	}

	protected  long getWallGradualColor_ev_int32_callback(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		com.earthview.world.spatial.display.RgbColor returnValue = getWallGradualColor(polylineFeatureUniqueIDParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWallGradualColor_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 获取当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
	 * @param polylineFeatureUniqueID 唯一标示
	 * @return 渐变颜色
	 */
	public com.earthview.world.spatial.display.RgbColor getWallGradualColor(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long returnValue = getWallGradualColor_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.RgbColor __returnValue = new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate, "CRgbColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RgbColor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRgbColor");
		}
		return __returnValue;
	}
	native private long getWallGradualColor_ev_int32_NoVirtual(long pNativeObject, int polylineFeatureUniqueID);
	protected com.earthview.world.spatial.display.RgbColor getWallGradualColor_NoVirtual(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long returnValue = getWallGradualColor_ev_int32_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.RgbColor __returnValue = new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate, "CRgbColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RgbColor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRgbColor");
		}
		return __returnValue;
	}

	protected  void setWallGradualColor_ev_int32_CRgbColor_callback(int polylineFeatureUniqueID, long pWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		com.earthview.world.spatial.display.RgbColor pWallGradualColorParamValue = (pWallGradualColor == 0L ? null : new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pWallGradualColorParamValue != null)
		{
		pWallGradualColorParamValue.setDelegate(true);
		pWallGradualColorParamValue.setInstancePointer(new InstancePointer(pWallGradualColor));
		IClassFactory pWallGradualColorParamValueClassFactory = GlobalClassFactoryMap.get(pWallGradualColorParamValue.getCppInstanceTypeName());
		if (pWallGradualColorParamValueClassFactory != null)
		{
			pWallGradualColorParamValue.setDelegate(true);
			pWallGradualColorParamValue = (com.earthview.world.spatial.display.RgbColor)pWallGradualColorParamValueClassFactory.create();
			pWallGradualColorParamValue.setDelegate(true);
			pWallGradualColorParamValue.setInstancePointer(new InstancePointer(pWallGradualColor));
		}
		}
		setWallGradualColor(polylineFeatureUniqueIDParamValue, pWallGradualColorParamValue);
	}

	native private void setWallGradualColor_ev_int32_CRgbColor(long pNativeObject, int polylineFeatureUniqueID, long pWallGradualColor);
	/**
	 * 设置当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
	 * @param polylineFeatureUniqueID 唯一标示
	 * @param pWallGradualColor 渐变颜色
	 */
	public void setWallGradualColor(int polylineFeatureUniqueID, com.earthview.world.spatial.display.RgbColor pWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long pWallGradualColorParamValue = (pWallGradualColor == null ? 0L : pWallGradualColor.nativeObject.pointer);
		setWallGradualColor_ev_int32_CRgbColor(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, pWallGradualColorParamValue);
	}
	native private void setWallGradualColor_ev_int32_CRgbColor_NoVirtual(long pNativeObject, int polylineFeatureUniqueID, long pWallGradualColor);
	protected void setWallGradualColor_NoVirtual(int polylineFeatureUniqueID, com.earthview.world.spatial.display.RgbColor pWallGradualColor)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		long pWallGradualColorParamValue = (pWallGradualColor == null ? 0L : pWallGradualColor.nativeObject.pointer);
		setWallGradualColor_ev_int32_CRgbColor_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue, pWallGradualColorParamValue);
	}

	protected  boolean canReleaseResource_void_callback()
	{
		boolean returnValue = canReleaseResource();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canReleaseResource_void(long pNativeObject);
	/**
	 * 是否能够释放所有线特征对象资源
	 */
	public boolean canReleaseResource()
	{
		boolean returnValue = canReleaseResource_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canReleaseResource_void_NoVirtual(long pNativeObject);
	protected boolean canReleaseResource_NoVirtual()
	{
		boolean returnValue = canReleaseResource_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canReleaseResource_ev_int32_callback(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = canReleaseResource(polylineFeatureUniqueIDParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canReleaseResource_ev_int32(long pNativeObject, int polylineFeatureUniqueID);
	/**
	 * 是否能够释放唯一标识的线特征对象资源
	 */
	public boolean canReleaseResource(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = canReleaseResource_ev_int32(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}
	native private boolean canReleaseResource_ev_int32_NoVirtual(long pNativeObject, int polylineFeatureUniqueID);
	protected boolean canReleaseResource_NoVirtual(int polylineFeatureUniqueID)
	{
		int polylineFeatureUniqueIDParamValue = polylineFeatureUniqueID;
		boolean returnValue = canReleaseResource_ev_int32_NoVirtual(this.nativeObject.pointer, polylineFeatureUniqueIDParamValue);
		return returnValue;
	}

	native private void setNeedUpdate_ev_bool(long pNativeObject, boolean needUpdate);
	/**
	 * 设置是否需要更新
	 * @param needUpdate 更新状态
	 */
	public void setNeedUpdate(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool(this.nativeObject.pointer, needUpdateParamValue);
	}
	native private void setNeedUpdate_ev_bool_NoVirtual(long pNativeObject, boolean needUpdate);
	protected void setNeedUpdate_NoVirtual(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, needUpdateParamValue);
	}

	native private void update_void(long pNativeObject);
	/**
	 * 更新
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	public PolylineFeatureManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PolylineFeatureManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取是否能够交换buffer
	 * @return 是否能够交换buffer
	 */
	public boolean getCanSwapBuffer()
	{
		return super.getCanSwapBuffer_NoVirtual();
	}
	/**
	 * 设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 获取名称
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取是否需要更新
	 * @return 是否需要更新
	 */
	public boolean getNeedUpdate()
	{
		return super.getNeedUpdate_NoVirtual();
	}
	/**
	 * 获取绑定的节点
	 * @return 绑定的节点
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		return super.getNode_NoVirtual();
	}
	
	native protected void register_setPolylineFeatureVisible_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_setNeedClearUselessData_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_getUseWallGradualColor_ev_int32(long pNativeObject, String method);
	native protected void register_setUseWallGradualColor_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_getWallGradualColor_ev_int32(long pNativeObject, String method);
	native protected void register_setWallGradualColor_ev_int32_CRgbColor(long pNativeObject, String method);
	native protected void register_canReleaseResource_void(long pNativeObject, String method);
	native protected void register_canReleaseResource_ev_int32(long pNativeObject, String method);
	native protected void register_getCanSwapBuffer_void(long pNativeObject, String method);
	native protected void register_setName_EarthView_World_Core_ev_string(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setNeedUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedUpdate_void(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setPolylineFeatureVisible_ev_int32_ev_bool(this.nativeObject.pointer, "setPolylineFeatureVisible_ev_int32_ev_bool_callback");
			this.register_setNeedClearUselessData_ev_int32_ev_bool(this.nativeObject.pointer, "setNeedClearUselessData_ev_int32_ev_bool_callback");
			this.register_getUseWallGradualColor_ev_int32(this.nativeObject.pointer, "getUseWallGradualColor_ev_int32_callback");
			this.register_setUseWallGradualColor_ev_int32_ev_bool(this.nativeObject.pointer, "setUseWallGradualColor_ev_int32_ev_bool_callback");
			this.register_getWallGradualColor_ev_int32(this.nativeObject.pointer, "getWallGradualColor_ev_int32_callback");
			this.register_setWallGradualColor_ev_int32_CRgbColor(this.nativeObject.pointer, "setWallGradualColor_ev_int32_CRgbColor_callback");
			this.register_canReleaseResource_void(this.nativeObject.pointer, "canReleaseResource_void_callback");
			this.register_canReleaseResource_ev_int32(this.nativeObject.pointer, "canReleaseResource_ev_int32_callback");
			this.register_getCanSwapBuffer_void(this.nativeObject.pointer, "getCanSwapBuffer_void_callback");
			this.register_setName_EarthView_World_Core_ev_string(this.nativeObject.pointer, "setName_EarthView_World_Core_ev_string_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setNeedUpdate_ev_bool(this.nativeObject.pointer, "setNeedUpdate_ev_bool_callback");
			this.register_getNeedUpdate_void(this.nativeObject.pointer, "getNeedUpdate_void_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
		}
	}
	
	public static PolylineFeatureManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PolylineFeatureManager obj = null;
 		if(baseObj instanceof PolylineFeatureManager)
		{
			obj = (PolylineFeatureManager)baseObj;
		} else {
			obj = new PolylineFeatureManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPolylineFeatureManager");
			obj.increaseCast();
		}

		return obj;
	}
}
