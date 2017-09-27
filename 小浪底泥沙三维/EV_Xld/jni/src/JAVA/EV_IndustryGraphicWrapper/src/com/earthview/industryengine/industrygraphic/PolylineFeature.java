package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线特征对象
 */
public class PolylineFeature extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature", new PolylineFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCPolylineFeatureProxy", new PolylineFeatureClassFactory());
	}

	/**
	 * 显示模式
	 */
	public enum EVDisplayMode implements INativeEnum<EVDisplayMode> {
		DM_POLYGON(EVDisplayModeHelper.ENUM_VALUES[0]),
		DM_LINE(EVDisplayModeHelper.ENUM_VALUES[1]),
		DM_POINT(EVDisplayModeHelper.ENUM_VALUES[2]);
		private int value;
		EVDisplayMode(int i) {
			this.value = i;
		}
		public EVDisplayMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVDisplayMode toEnum(int retval) {
			if(retval == DM_POLYGON.value){
				return DM_POLYGON;
			}
			else if(retval == DM_LINE.value){
				return DM_LINE;
			}
			else if(retval == DM_POINT.value){
				return DM_POINT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVDisplayModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 */
	public PolylineFeature() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPolylineFeatureProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.PolylineFeature".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param uniqueID 唯一标示
	 */
	public PolylineFeature(String name, int uniqueID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer uniqueIDPtr = new BasePointer(uniqueID);
		list.add("uniqueID", uniqueIDPtr.get());
		Create("JCPolylineFeatureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.PolylineFeature".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addPoint_CCoordinate_callback(long point)
	{
		com.earthview.world.spatial.geometry.Coordinate pointParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Coordinate)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		addPoint(pointParamValue);
	}

	native private void addPoint_CCoordinate(long pNativeObject, long point);
	/**
	 * 添加点
	 * @param point 点坐标
	 */
	public void addPoint(com.earthview.world.spatial.geometry.Coordinate point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addPoint_CCoordinate(this.nativeObject.pointer, pointParamValue);
	}
	native private void addPoint_CCoordinate_NoVirtual(long pNativeObject, long point);
	protected void addPoint_NoVirtual(com.earthview.world.spatial.geometry.Coordinate point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addPoint_CCoordinate_NoVirtual(this.nativeObject.pointer, pointParamValue);
	}

	protected  void setUniqueID_ev_int32_callback(int uniqueID)
	{
		int uniqueIDParamValue = uniqueID;
		setUniqueID(uniqueIDParamValue);
	}

	native private void setUniqueID_ev_int32(long pNativeObject, int uniqueID);
	/**
	 * 设置唯一标示
	 * @param uniqueID 唯一标示
	 */
	public void setUniqueID(int uniqueID)
	{
		int uniqueIDParamValue = uniqueID;
		setUniqueID_ev_int32(this.nativeObject.pointer, uniqueIDParamValue);
	}
	native private void setUniqueID_ev_int32_NoVirtual(long pNativeObject, int uniqueID);
	protected void setUniqueID_NoVirtual(int uniqueID)
	{
		int uniqueIDParamValue = uniqueID;
		setUniqueID_ev_int32_NoVirtual(this.nativeObject.pointer, uniqueIDParamValue);
	}

	protected  int getUniqueID_void_callback()
	{
		int returnValue = getUniqueID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getUniqueID_void(long pNativeObject);
	/**
	 * 获取唯一标示
	 * @return 唯一标示
	 */
	public int getUniqueID()
	{
		int returnValue = getUniqueID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getUniqueID_void_NoVirtual(long pNativeObject);
	protected int getUniqueID_NoVirtual()
	{
		int returnValue = getUniqueID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isShowAllPoints_void_callback()
	{
		boolean returnValue = isShowAllPoints();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isShowAllPoints_void(long pNativeObject);
	/**
	 * 是否显示所有点
	 * @return 是否显示所有点
	 */
	public boolean isShowAllPoints()
	{
		boolean returnValue = isShowAllPoints_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowAllPoints_void_NoVirtual(long pNativeObject);
	protected boolean isShowAllPoints_NoVirtual()
	{
		boolean returnValue = isShowAllPoints_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isValidIndex_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isValidIndex(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isValidIndex_ev_int32(long pNativeObject, int index);
	/**
	 * 是否为有效索引
	 * @param index 索引
	 * @return 是否有效
	 */
	public boolean isValidIndex(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isValidIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean isValidIndex_ev_int32_NoVirtual(long pNativeObject, int index);
	protected boolean isValidIndex_NoVirtual(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isValidIndex_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void setNeedUpdate_ev_bool_callback(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate(needUpdateParamValue);
	}

	native private void setNeedUpdate_ev_bool(long pNativeObject, boolean needUpdate);
	/**
	 * 设置更新状态
	 * @param needUpdate 是否需要更新
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

	protected  boolean getNeedUpdate_void_callback()
	{
		boolean returnValue = getNeedUpdate();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getNeedUpdate_void(long pNativeObject);
	/**
	 * 获取更新状态
	 * @return 更新状态
	 */
	public boolean getNeedUpdate()
	{
		boolean returnValue = getNeedUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getNeedUpdate_void_NoVirtual(long pNativeObject);
	protected boolean getNeedUpdate_NoVirtual()
	{
		boolean returnValue = getNeedUpdate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDisplayPointNum_ev_int32_callback(int displayNumber)
	{
		int displayNumberParamValue = displayNumber;
		setDisplayPointNum(displayNumberParamValue);
	}

	native private void setDisplayPointNum_ev_int32(long pNativeObject, int displayNumber);
	/**
	 * 设置显示的点数目
	 * @param displayNumber 点数目
	 */
	public void setDisplayPointNum(int displayNumber)
	{
		int displayNumberParamValue = displayNumber;
		setDisplayPointNum_ev_int32(this.nativeObject.pointer, displayNumberParamValue);
	}
	native private void setDisplayPointNum_ev_int32_NoVirtual(long pNativeObject, int displayNumber);
	protected void setDisplayPointNum_NoVirtual(int displayNumber)
	{
		int displayNumberParamValue = displayNumber;
		setDisplayPointNum_ev_int32_NoVirtual(this.nativeObject.pointer, displayNumberParamValue);
	}

	protected  void setDisplayMode_EVDisplayMode_callback(int displayMode)
	{
		com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayModeParamValue = com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(displayMode);
		setDisplayMode(displayModeParamValue);
	}

	native private void setDisplayMode_EVDisplayMode(long pNativeObject, int displayMode);
	/**
	 * 设置显示模式(要与风格匹配，即：DM_LINE对应线风格，DM_POINT对应点风格)
	 * @param displayMode 显示模式
	 */
	public void setDisplayMode(com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		int displayModeParamValue = displayMode.getValue();
		setDisplayMode_EVDisplayMode(this.nativeObject.pointer, displayModeParamValue);
	}
	native private void setDisplayMode_EVDisplayMode_NoVirtual(long pNativeObject, int displayMode);
	protected void setDisplayMode_NoVirtual(com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		int displayModeParamValue = displayMode.getValue();
		setDisplayMode_EVDisplayMode_NoVirtual(this.nativeObject.pointer, displayModeParamValue);
	}

	protected  int getDisplayMode_void_callback()
	{
		com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode returnValue = getDisplayMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDisplayMode_void(long pNativeObject);
	/**
	 * 获取显示模式
	 * @return 显示模式
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getDisplayMode()
	{
		int returnValue = getDisplayMode_void(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}
	native private int getDisplayMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getDisplayMode_NoVirtual()
	{
		int returnValue = getDisplayMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}

	protected  int getDisplayPointNum_void_callback()
	{
		int returnValue = getDisplayPointNum();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getDisplayPointNum_void(long pNativeObject);
	/**
	 * 获取显示的点数目
	 * @return 显示的点数目
	 */
	public int getDisplayPointNum()
	{
		int returnValue = getDisplayPointNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDisplayPointNum_void_NoVirtual(long pNativeObject);
	protected int getDisplayPointNum_NoVirtual()
	{
		int returnValue = getDisplayPointNum_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPolylineFeatureSymbol_ISymbol_callback(long polylineFeatureSymbol)
	{
		com.earthview.world.spatial.display.Isymbol polylineFeatureSymbolParamValue = (polylineFeatureSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(polylineFeatureSymbolParamValue != null)
		{
		polylineFeatureSymbolParamValue.setDelegate(true);
		polylineFeatureSymbolParamValue.setInstancePointer(new InstancePointer(polylineFeatureSymbol));
		IClassFactory polylineFeatureSymbolParamValueClassFactory = GlobalClassFactoryMap.get(polylineFeatureSymbolParamValue.getCppInstanceTypeName());
		if (polylineFeatureSymbolParamValueClassFactory != null)
		{
			polylineFeatureSymbolParamValue.setDelegate(true);
			polylineFeatureSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)polylineFeatureSymbolParamValueClassFactory.create();
			polylineFeatureSymbolParamValue.setDelegate(true);
			polylineFeatureSymbolParamValue.setInstancePointer(new InstancePointer(polylineFeatureSymbol));
		}
		}
		setPolylineFeatureSymbol(polylineFeatureSymbolParamValue);
	}

	native private void setPolylineFeatureSymbol_ISymbol(long pNativeObject, long polylineFeatureSymbol);
	/**
	 * 设置显示风格(要与显示模式匹配，即：DM_LINE对应线风格，DM_POINT对应点风格)
	 * @param polylineFeatureSymbol 风格(内部进行clone)
	 */
	public void setPolylineFeatureSymbol(com.earthview.world.spatial.display.Isymbol polylineFeatureSymbol)
	{
		long polylineFeatureSymbolParamValue = (polylineFeatureSymbol == null ? 0L : polylineFeatureSymbol.nativeObject.pointer);
		setPolylineFeatureSymbol_ISymbol(this.nativeObject.pointer, polylineFeatureSymbolParamValue);
	}
	native private void setPolylineFeatureSymbol_ISymbol_NoVirtual(long pNativeObject, long polylineFeatureSymbol);
	protected void setPolylineFeatureSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol polylineFeatureSymbol)
	{
		long polylineFeatureSymbolParamValue = (polylineFeatureSymbol == null ? 0L : polylineFeatureSymbol.nativeObject.pointer);
		setPolylineFeatureSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, polylineFeatureSymbolParamValue);
	}

	protected  long getPolylineFeatureSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getPolylineFeatureSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPolylineFeatureSymbol_void(long pNativeObject);
	/**
	 * 获取示风格
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getPolylineFeatureSymbol()
	{
		long returnValue = getPolylineFeatureSymbol_void(this.nativeObject.pointer);
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
	native private long getPolylineFeatureSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getPolylineFeatureSymbol_NoVirtual()
	{
		long returnValue = getPolylineFeatureSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 * @param name 名称
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

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
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

	protected  void setPolylineFeaturePath_CLineString_callback(long polylineFeaturePath)
	{
		com.earthview.world.spatial.geometry.LineString polylineFeaturePathParamValue = (polylineFeaturePath == 0L ? null : new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate));
		if(polylineFeaturePathParamValue != null)
		{
		polylineFeaturePathParamValue.setDelegate(true);
		polylineFeaturePathParamValue.setInstancePointer(new InstancePointer(polylineFeaturePath));
		IClassFactory polylineFeaturePathParamValueClassFactory = GlobalClassFactoryMap.get(polylineFeaturePathParamValue.getCppInstanceTypeName());
		if (polylineFeaturePathParamValueClassFactory != null)
		{
			polylineFeaturePathParamValue.setDelegate(true);
			polylineFeaturePathParamValue = (com.earthview.world.spatial.geometry.LineString)polylineFeaturePathParamValueClassFactory.create();
			polylineFeaturePathParamValue.setDelegate(true);
			polylineFeaturePathParamValue.setInstancePointer(new InstancePointer(polylineFeaturePath));
		}
		}
		setPolylineFeaturePath(polylineFeaturePathParamValue);
	}

	native private void setPolylineFeaturePath_CLineString(long pNativeObject, long polylineFeaturePath);
	/**
	 * 设置线路径
	 * @param ref_polylineFeaturePath 路径
	 */
	public void setPolylineFeaturePath(com.earthview.world.spatial.geometry.LineString polylineFeaturePath)
	{
		long polylineFeaturePathParamValue = (polylineFeaturePath == null ? 0L : polylineFeaturePath.nativeObject.pointer);
		setPolylineFeaturePath_CLineString(this.nativeObject.pointer, polylineFeaturePathParamValue);
	}
	native private void setPolylineFeaturePath_CLineString_NoVirtual(long pNativeObject, long polylineFeaturePath);
	protected void setPolylineFeaturePath_NoVirtual(com.earthview.world.spatial.geometry.LineString polylineFeaturePath)
	{
		long polylineFeaturePathParamValue = (polylineFeaturePath == null ? 0L : polylineFeaturePath.nativeObject.pointer);
		setPolylineFeaturePath_CLineString_NoVirtual(this.nativeObject.pointer, polylineFeaturePathParamValue);
	}

	protected  long getPolylineFeaturePath_void_callback()
	{
		com.earthview.world.spatial.geometry.LineString returnValue = getPolylineFeaturePath();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPolylineFeaturePath_void(long pNativeObject);
	/**
	 * 获取线路径
	 * @return 线路径
	 */
	public com.earthview.world.spatial.geometry.LineString getPolylineFeaturePath()
	{
		long returnValue = getPolylineFeaturePath_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long getPolylineFeaturePath_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.LineString getPolylineFeaturePath_NoVirtual()
	{
		long returnValue = getPolylineFeaturePath_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}

	protected  void removeAllPoints_void_callback()
	{
		removeAllPoints();
	}

	native private void removeAllPoints_void(long pNativeObject);
	/**
	 * 移除线路径中所有的点
	 */
	public void removeAllPoints()
	{
		removeAllPoints_void(this.nativeObject.pointer);
	}
	native private void removeAllPoints_void_NoVirtual(long pNativeObject);
	protected void removeAllPoints_NoVirtual()
	{
		removeAllPoints_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getISpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getISpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getISpatialReference_void(long pNativeObject);
	/**
	 * 获取空间参考
	 * @return 空间参考
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getISpatialReference()
	{
		long returnValue = getISpatialReference_void(this.nativeObject.pointer);
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
	native private long getISpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getISpatialReference_NoVirtual()
	{
		long returnValue = getISpatialReference_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setISpatialReference_ISpatialReference_callback(long ref_pSpatialReference)
	{
		com.earthview.world.spatial.geometry.Ispatialreference ref_pSpatialReferenceParamValue = (ref_pSpatialReference == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pSpatialReferenceParamValue != null)
		{
		ref_pSpatialReferenceParamValue.setDelegate(true);
		ref_pSpatialReferenceParamValue.setInstancePointer(new InstancePointer(ref_pSpatialReference));
		IClassFactory ref_pSpatialReferenceParamValueClassFactory = GlobalClassFactoryMap.get(ref_pSpatialReferenceParamValue.getCppInstanceTypeName());
		if (ref_pSpatialReferenceParamValueClassFactory != null)
		{
			ref_pSpatialReferenceParamValue.setDelegate(true);
			ref_pSpatialReferenceParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)ref_pSpatialReferenceParamValueClassFactory.create();
			ref_pSpatialReferenceParamValue.setDelegate(true);
			ref_pSpatialReferenceParamValue.setInstancePointer(new InstancePointer(ref_pSpatialReference));
		}
		}
		setISpatialReference(ref_pSpatialReferenceParamValue);
	}

	native private void setISpatialReference_ISpatialReference(long pNativeObject, long ref_pSpatialReference);
	/**
	 * 设置空间参考
	 * @param ref_pSpatialReference 空间参考(与线特征对象的生命周期保持一致)
	 */
	public void setISpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_pSpatialReference)
	{
		long ref_pSpatialReferenceParamValue = (ref_pSpatialReference == null ? 0L : ref_pSpatialReference.nativeObject.pointer);
		setISpatialReference_ISpatialReference(this.nativeObject.pointer, ref_pSpatialReferenceParamValue);
	}
	native private void setISpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long ref_pSpatialReference);
	protected void setISpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_pSpatialReference)
	{
		long ref_pSpatialReferenceParamValue = (ref_pSpatialReference == null ? 0L : ref_pSpatialReference.nativeObject.pointer);
		setISpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_pSpatialReferenceParamValue);
	}

	protected  void setVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setVisible(valueParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置显示状态
	 * @param value 是否可见
	 */
	public void setVisible(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取显示状态
	 * @return 是否可见
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDescription_EVString_callback(String description)
	{
		String descriptionParamValue = description;
		setDescription(descriptionParamValue);
	}

	native private void setDescription_EVString(long pNativeObject, String description);
	/**
	 * 设置描述信息
	 * @param description 描述信息
	 */
	public void setDescription(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String description);
	protected void setDescription_NoVirtual(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descriptionParamValue);
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取描述信息
	 * @return 描述信息
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

	protected  void refresh_void_callback()
	{
		refresh();
	}

	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void refresh_void_NoVirtual(long pNativeObject);
	protected void refresh_NoVirtual()
	{
		refresh_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setHighLineColorInfo_CRgbColor_CRgbColor_callback(long staticHighLineColor, long dynamicHighLineColor)
	{
		com.earthview.world.spatial.display.RgbColor staticHighLineColorParamValue = (staticHighLineColor == 0L ? null : new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate));
		if(staticHighLineColorParamValue != null)
		{
		staticHighLineColorParamValue.setDelegate(true);
		staticHighLineColorParamValue.setInstancePointer(new InstancePointer(staticHighLineColor));
		IClassFactory staticHighLineColorParamValueClassFactory = GlobalClassFactoryMap.get(staticHighLineColorParamValue.getCppInstanceTypeName());
		if (staticHighLineColorParamValueClassFactory != null)
		{
			staticHighLineColorParamValue.setDelegate(true);
			staticHighLineColorParamValue = (com.earthview.world.spatial.display.RgbColor)staticHighLineColorParamValueClassFactory.create();
			staticHighLineColorParamValue.setDelegate(true);
			staticHighLineColorParamValue.setInstancePointer(new InstancePointer(staticHighLineColor));
		}
		}
		com.earthview.world.spatial.display.RgbColor dynamicHighLineColorParamValue = (dynamicHighLineColor == 0L ? null : new com.earthview.world.spatial.display.RgbColor(CreatedWhenConstruct.CWC_NotToCreate));
		if(dynamicHighLineColorParamValue != null)
		{
		dynamicHighLineColorParamValue.setDelegate(true);
		dynamicHighLineColorParamValue.setInstancePointer(new InstancePointer(dynamicHighLineColor));
		IClassFactory dynamicHighLineColorParamValueClassFactory = GlobalClassFactoryMap.get(dynamicHighLineColorParamValue.getCppInstanceTypeName());
		if (dynamicHighLineColorParamValueClassFactory != null)
		{
			dynamicHighLineColorParamValue.setDelegate(true);
			dynamicHighLineColorParamValue = (com.earthview.world.spatial.display.RgbColor)dynamicHighLineColorParamValueClassFactory.create();
			dynamicHighLineColorParamValue.setDelegate(true);
			dynamicHighLineColorParamValue.setInstancePointer(new InstancePointer(dynamicHighLineColor));
		}
		}
		setHighLineColorInfo(staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}

	native private void setHighLineColorInfo_CRgbColor_CRgbColor(long pNativeObject, long staticHighLineColor, long dynamicHighLineColor);
	/**
	 * 设置视高线的延伸颜色信息（顶部线颜色由风格对象控制）
	 * @param staticHighLineColor 静态延伸颜色(内部进行clone)
	 * @param dynamicHighLineColor 动态延伸颜色(内部进行clone)
	 */
	public void setHighLineColorInfo(com.earthview.world.spatial.display.RgbColor staticHighLineColor, com.earthview.world.spatial.display.RgbColor dynamicHighLineColor)
	{
		long staticHighLineColorParamValue = (staticHighLineColor == null ? 0L : staticHighLineColor.nativeObject.pointer);
		long dynamicHighLineColorParamValue = (dynamicHighLineColor == null ? 0L : dynamicHighLineColor.nativeObject.pointer);
		setHighLineColorInfo_CRgbColor_CRgbColor(this.nativeObject.pointer, staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}
	native private void setHighLineColorInfo_CRgbColor_CRgbColor_NoVirtual(long pNativeObject, long staticHighLineColor, long dynamicHighLineColor);
	protected void setHighLineColorInfo_NoVirtual(com.earthview.world.spatial.display.RgbColor staticHighLineColor, com.earthview.world.spatial.display.RgbColor dynamicHighLineColor)
	{
		long staticHighLineColorParamValue = (staticHighLineColor == null ? 0L : staticHighLineColor.nativeObject.pointer);
		long dynamicHighLineColorParamValue = (dynamicHighLineColor == null ? 0L : dynamicHighLineColor.nativeObject.pointer);
		setHighLineColorInfo_CRgbColor_CRgbColor_NoVirtual(this.nativeObject.pointer, staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}

	protected  void setHighLineDistance_ev_real64_callback(double highLineDistance)
	{
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance(highLineDistanceParamValue);
	}

	native private void setHighLineDistance_ev_real64(long pNativeObject, double highLineDistance);
	/**
	 * 设置视高线之间的间距
	 * @param highLineDistance 视高线之间的间距
	 */
	public void setHighLineDistance(double highLineDistance)
	{
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance_ev_real64(this.nativeObject.pointer, highLineDistanceParamValue);
	}
	native private void setHighLineDistance_ev_real64_NoVirtual(long pNativeObject, double highLineDistance);
	protected void setHighLineDistance_NoVirtual(double highLineDistance)
	{
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance_ev_real64_NoVirtual(this.nativeObject.pointer, highLineDistanceParamValue);
	}

	protected  void setUseHighLineDistance_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setUseHighLineDistance(valueParamValue);
	}

	native private void setUseHighLineDistance_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否使用视高线距离模式(只能在线特征对象加入到线管理器之前使用)
	 * @param value 是否使用
	 */
	public void setUseHighLineDistance(boolean value)
	{
		boolean valueParamValue = value;
		setUseHighLineDistance_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setUseHighLineDistance_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setUseHighLineDistance_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setUseHighLineDistance_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getUseHighLineDistance_void_callback()
	{
		boolean returnValue = getUseHighLineDistance();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseHighLineDistance_void(long pNativeObject);
	public boolean getUseHighLineDistance()
	{
		boolean returnValue = getUseHighLineDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseHighLineDistance_void_NoVirtual(long pNativeObject);
	protected boolean getUseHighLineDistance_NoVirtual()
	{
		boolean returnValue = getUseHighLineDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getHighLineDistance_void_callback()
	{
		double returnValue = getHighLineDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getHighLineDistance_void(long pNativeObject);
	/**
	 * 获取视高线之间的间距
	 * @return 视高线之间的间距
	 */
	public double getHighLineDistance()
	{
		double returnValue = getHighLineDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHighLineDistance_void_NoVirtual(long pNativeObject);
	protected double getHighLineDistance_NoVirtual()
	{
		double returnValue = getHighLineDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setIsHighLine_ev_bool_callback(boolean isHighLine)
	{
		boolean isHighLineParamValue = isHighLine;
		setIsHighLine(isHighLineParamValue);
	}

	native private void setIsHighLine_ev_bool(long pNativeObject, boolean isHighLine);
	/**
	 * 设置是否为视高线
	 * @param isHighLine 是否为视高线
	 */
	public void setIsHighLine(boolean isHighLine)
	{
		boolean isHighLineParamValue = isHighLine;
		setIsHighLine_ev_bool(this.nativeObject.pointer, isHighLineParamValue);
	}
	native private void setIsHighLine_ev_bool_NoVirtual(long pNativeObject, boolean isHighLine);
	protected void setIsHighLine_NoVirtual(boolean isHighLine)
	{
		boolean isHighLineParamValue = isHighLine;
		setIsHighLine_ev_bool_NoVirtual(this.nativeObject.pointer, isHighLineParamValue);
	}

	protected  boolean getIsHighLine_void_callback()
	{
		boolean returnValue = getIsHighLine();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getIsHighLine_void(long pNativeObject);
	/**
	 * 获取是否为视高线
	 * @return 是否为视高线
	 */
	public boolean getIsHighLine()
	{
		boolean returnValue = getIsHighLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsHighLine_void_NoVirtual(long pNativeObject);
	protected boolean getIsHighLine_NoVirtual()
	{
		boolean returnValue = getIsHighLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setNeedClearUselessData_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setNeedClearUselessData(valueParamValue);
	}

	native private void setNeedClearUselessData_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否需要清除冗余数据
	 * @param value 是否需要清除冗余数据
	 */
	public void setNeedClearUselessData(boolean value)
	{
		boolean valueParamValue = value;
		setNeedClearUselessData_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setNeedClearUselessData_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setNeedClearUselessData_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setNeedClearUselessData_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getNeedClearUselessData_void_callback()
	{
		boolean returnValue = getNeedClearUselessData();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getNeedClearUselessData_void(long pNativeObject);
	/**
	 * 获取是否需要清除冗余数据
	 * @return 是否需要清除冗余数据
	 */
	public boolean getNeedClearUselessData()
	{
		boolean returnValue = getNeedClearUselessData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getNeedClearUselessData_void_NoVirtual(long pNativeObject);
	protected boolean getNeedClearUselessData_NoVirtual()
	{
		boolean returnValue = getNeedClearUselessData_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int clearUselessData_void_callback()
	{
		int returnValue = clearUselessData();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int clearUselessData_void(long pNativeObject);
	/**
	 * 清除冗余数据
	 * @return 清除冗余点数据个数
	 */
	public int clearUselessData()
	{
		int returnValue = clearUselessData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int clearUselessData_void_NoVirtual(long pNativeObject);
	protected int clearUselessData_NoVirtual()
	{
		int returnValue = clearUselessData_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMaxUselessDataCount_ev_int32_callback(int maxUselessDataCount)
	{
		int maxUselessDataCountParamValue = maxUselessDataCount;
		setMaxUselessDataCount(maxUselessDataCountParamValue);
	}

	native private void setMaxUselessDataCount_ev_int32(long pNativeObject, int maxUselessDataCount);
	/**
	 * 设置允许存在的冗余点个数
	 * @param maxUselessDataCount 允许存在的冗余点个数
	 */
	public void setMaxUselessDataCount(int maxUselessDataCount)
	{
		int maxUselessDataCountParamValue = maxUselessDataCount;
		setMaxUselessDataCount_ev_int32(this.nativeObject.pointer, maxUselessDataCountParamValue);
	}
	native private void setMaxUselessDataCount_ev_int32_NoVirtual(long pNativeObject, int maxUselessDataCount);
	protected void setMaxUselessDataCount_NoVirtual(int maxUselessDataCount)
	{
		int maxUselessDataCountParamValue = maxUselessDataCount;
		setMaxUselessDataCount_ev_int32_NoVirtual(this.nativeObject.pointer, maxUselessDataCountParamValue);
	}

	protected  int getMaxUselessDataCount_void_callback()
	{
		int returnValue = getMaxUselessDataCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxUselessDataCount_void(long pNativeObject);
	/**
	 * 获取允许存在的冗余点个数
	 * @return 冗余点数据个数
	 */
	public int getMaxUselessDataCount()
	{
		int returnValue = getMaxUselessDataCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxUselessDataCount_void_NoVirtual(long pNativeObject);
	protected int getMaxUselessDataCount_NoVirtual()
	{
		int returnValue = getMaxUselessDataCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getUseWallGradualColor_void_callback()
	{
		boolean returnValue = getUseWallGradualColor();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseWallGradualColor_void(long pNativeObject);
	public boolean getUseWallGradualColor()
	{
		boolean returnValue = getUseWallGradualColor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseWallGradualColor_void_NoVirtual(long pNativeObject);
	protected boolean getUseWallGradualColor_NoVirtual()
	{
		boolean returnValue = getUseWallGradualColor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUseWallGradualColor_ev_bool_callback(boolean useWallGradualColor)
	{
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor(useWallGradualColorParamValue);
	}

	native private void setUseWallGradualColor_ev_bool(long pNativeObject, boolean useWallGradualColor);
	public void setUseWallGradualColor(boolean useWallGradualColor)
	{
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor_ev_bool(this.nativeObject.pointer, useWallGradualColorParamValue);
	}
	native private void setUseWallGradualColor_ev_bool_NoVirtual(long pNativeObject, boolean useWallGradualColor);
	protected void setUseWallGradualColor_NoVirtual(boolean useWallGradualColor)
	{
		boolean useWallGradualColorParamValue = useWallGradualColor;
		setUseWallGradualColor_ev_bool_NoVirtual(this.nativeObject.pointer, useWallGradualColorParamValue);
	}

	protected  long getWallGradualColor_void_callback()
	{
		com.earthview.world.spatial.display.RgbColor returnValue = getWallGradualColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWallGradualColor_void(long pNativeObject);
	public com.earthview.world.spatial.display.RgbColor getWallGradualColor()
	{
		long returnValue = getWallGradualColor_void(this.nativeObject.pointer);
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
	native private long getWallGradualColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.RgbColor getWallGradualColor_NoVirtual()
	{
		long returnValue = getWallGradualColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setWallGradualColor_CRgbColor_callback(long pWallGradualColor)
	{
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
		setWallGradualColor(pWallGradualColorParamValue);
	}

	native private void setWallGradualColor_CRgbColor(long pNativeObject, long pWallGradualColor);
	public void setWallGradualColor(com.earthview.world.spatial.display.RgbColor pWallGradualColor)
	{
		long pWallGradualColorParamValue = (pWallGradualColor == null ? 0L : pWallGradualColor.nativeObject.pointer);
		setWallGradualColor_CRgbColor(this.nativeObject.pointer, pWallGradualColorParamValue);
	}
	native private void setWallGradualColor_CRgbColor_NoVirtual(long pNativeObject, long pWallGradualColor);
	protected void setWallGradualColor_NoVirtual(com.earthview.world.spatial.display.RgbColor pWallGradualColor)
	{
		long pWallGradualColorParamValue = (pWallGradualColor == null ? 0L : pWallGradualColor.nativeObject.pointer);
		setWallGradualColor_CRgbColor_NoVirtual(this.nativeObject.pointer, pWallGradualColorParamValue);
	}

	public PolylineFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PolylineFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addPoint_CCoordinate(long pNativeObject, String method);
	native protected void register_setUniqueID_ev_int32(long pNativeObject, String method);
	native protected void register_getUniqueID_void(long pNativeObject, String method);
	native protected void register_isShowAllPoints_void(long pNativeObject, String method);
	native protected void register_isValidIndex_ev_int32(long pNativeObject, String method);
	native protected void register_setNeedUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedUpdate_void(long pNativeObject, String method);
	native protected void register_setDisplayPointNum_ev_int32(long pNativeObject, String method);
	native protected void register_setDisplayMode_EVDisplayMode(long pNativeObject, String method);
	native protected void register_getDisplayMode_void(long pNativeObject, String method);
	native protected void register_getDisplayPointNum_void(long pNativeObject, String method);
	native protected void register_setPolylineFeatureSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getPolylineFeatureSymbol_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setPolylineFeaturePath_CLineString(long pNativeObject, String method);
	native protected void register_getPolylineFeaturePath_void(long pNativeObject, String method);
	native protected void register_removeAllPoints_void(long pNativeObject, String method);
	native protected void register_getISpatialReference_void(long pNativeObject, String method);
	native protected void register_setISpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_setHighLineColorInfo_CRgbColor_CRgbColor(long pNativeObject, String method);
	native protected void register_setHighLineDistance_ev_real64(long pNativeObject, String method);
	native protected void register_setUseHighLineDistance_ev_bool(long pNativeObject, String method);
	native protected void register_getUseHighLineDistance_void(long pNativeObject, String method);
	native protected void register_getHighLineDistance_void(long pNativeObject, String method);
	native protected void register_setIsHighLine_ev_bool(long pNativeObject, String method);
	native protected void register_getIsHighLine_void(long pNativeObject, String method);
	native protected void register_setNeedClearUselessData_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedClearUselessData_void(long pNativeObject, String method);
	native protected void register_clearUselessData_void(long pNativeObject, String method);
	native protected void register_setMaxUselessDataCount_ev_int32(long pNativeObject, String method);
	native protected void register_getMaxUselessDataCount_void(long pNativeObject, String method);
	native protected void register_getUseWallGradualColor_void(long pNativeObject, String method);
	native protected void register_setUseWallGradualColor_ev_bool(long pNativeObject, String method);
	native protected void register_getWallGradualColor_void(long pNativeObject, String method);
	native protected void register_setWallGradualColor_CRgbColor(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addPoint_CCoordinate(this.nativeObject.pointer, "addPoint_CCoordinate_callback");
			this.register_setUniqueID_ev_int32(this.nativeObject.pointer, "setUniqueID_ev_int32_callback");
			this.register_getUniqueID_void(this.nativeObject.pointer, "getUniqueID_void_callback");
			this.register_isShowAllPoints_void(this.nativeObject.pointer, "isShowAllPoints_void_callback");
			this.register_isValidIndex_ev_int32(this.nativeObject.pointer, "isValidIndex_ev_int32_callback");
			this.register_setNeedUpdate_ev_bool(this.nativeObject.pointer, "setNeedUpdate_ev_bool_callback");
			this.register_getNeedUpdate_void(this.nativeObject.pointer, "getNeedUpdate_void_callback");
			this.register_setDisplayPointNum_ev_int32(this.nativeObject.pointer, "setDisplayPointNum_ev_int32_callback");
			this.register_setDisplayMode_EVDisplayMode(this.nativeObject.pointer, "setDisplayMode_EVDisplayMode_callback");
			this.register_getDisplayMode_void(this.nativeObject.pointer, "getDisplayMode_void_callback");
			this.register_getDisplayPointNum_void(this.nativeObject.pointer, "getDisplayPointNum_void_callback");
			this.register_setPolylineFeatureSymbol_ISymbol(this.nativeObject.pointer, "setPolylineFeatureSymbol_ISymbol_callback");
			this.register_getPolylineFeatureSymbol_void(this.nativeObject.pointer, "getPolylineFeatureSymbol_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setPolylineFeaturePath_CLineString(this.nativeObject.pointer, "setPolylineFeaturePath_CLineString_callback");
			this.register_getPolylineFeaturePath_void(this.nativeObject.pointer, "getPolylineFeaturePath_void_callback");
			this.register_removeAllPoints_void(this.nativeObject.pointer, "removeAllPoints_void_callback");
			this.register_getISpatialReference_void(this.nativeObject.pointer, "getISpatialReference_void_callback");
			this.register_setISpatialReference_ISpatialReference(this.nativeObject.pointer, "setISpatialReference_ISpatialReference_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_setHighLineColorInfo_CRgbColor_CRgbColor(this.nativeObject.pointer, "setHighLineColorInfo_CRgbColor_CRgbColor_callback");
			this.register_setHighLineDistance_ev_real64(this.nativeObject.pointer, "setHighLineDistance_ev_real64_callback");
			this.register_setUseHighLineDistance_ev_bool(this.nativeObject.pointer, "setUseHighLineDistance_ev_bool_callback");
			this.register_getUseHighLineDistance_void(this.nativeObject.pointer, "getUseHighLineDistance_void_callback");
			this.register_getHighLineDistance_void(this.nativeObject.pointer, "getHighLineDistance_void_callback");
			this.register_setIsHighLine_ev_bool(this.nativeObject.pointer, "setIsHighLine_ev_bool_callback");
			this.register_getIsHighLine_void(this.nativeObject.pointer, "getIsHighLine_void_callback");
			this.register_setNeedClearUselessData_ev_bool(this.nativeObject.pointer, "setNeedClearUselessData_ev_bool_callback");
			this.register_getNeedClearUselessData_void(this.nativeObject.pointer, "getNeedClearUselessData_void_callback");
			this.register_clearUselessData_void(this.nativeObject.pointer, "clearUselessData_void_callback");
			this.register_setMaxUselessDataCount_ev_int32(this.nativeObject.pointer, "setMaxUselessDataCount_ev_int32_callback");
			this.register_getMaxUselessDataCount_void(this.nativeObject.pointer, "getMaxUselessDataCount_void_callback");
			this.register_getUseWallGradualColor_void(this.nativeObject.pointer, "getUseWallGradualColor_void_callback");
			this.register_setUseWallGradualColor_ev_bool(this.nativeObject.pointer, "setUseWallGradualColor_ev_bool_callback");
			this.register_getWallGradualColor_void(this.nativeObject.pointer, "getWallGradualColor_void_callback");
			this.register_setWallGradualColor_CRgbColor(this.nativeObject.pointer, "setWallGradualColor_CRgbColor_callback");
		}
	}
	
	public static PolylineFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PolylineFeature obj = null;
 		if(baseObj instanceof PolylineFeature)
		{
			obj = (PolylineFeature)baseObj;
		} else {
			obj = new PolylineFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPolylineFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
