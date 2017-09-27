package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///private:
///	C_DISABLE_COPY(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints);
public class RadarCharacter extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter", new RadarCharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarCharacterProxy", new RadarCharacterClassFactory());
	}

	native private void setScanSpeed_float(long pNativeObject, float value);
	/**
	 * 设置扫描速度
	 * @param value 速度值
	 */
	public void setScanSpeed(float value)
	{
		float valueParamValue = value;
		setScanSpeed_float(this.nativeObject.pointer, valueParamValue);
	}
	native private float getScanSpeed_void(long pNativeObject);
	/**
	 * 获取扫描速度
	 * @return 扫描速度
	 */
	public float getScanSpeed()
	{
		float returnValue = getScanSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHorizontalAngleSpan_CDegree(long pNativeObject, long scannerHorizontalSpan);
	/**
	 * 设置水平角度范围
	 * @param scannerHorizontalSpan 水平角度范围
	 */
	public void setHorizontalAngleSpan(com.earthview.world.spatial.math.Degree scannerHorizontalSpan)
	{
		long scannerHorizontalSpanParamValue = scannerHorizontalSpan.nativeObject.pointer;
		setHorizontalAngleSpan_CDegree(this.nativeObject.pointer, scannerHorizontalSpanParamValue);
	}
	native private long getHorizontalAngleSpan_void(long pNativeObject);
	/**
	 * 获取水平角度范围
	 * @return 水平角度范围
	 */
	public com.earthview.world.spatial.math.Degree getHorizontalAngleSpan()
	{
		long returnValue = getHorizontalAngleSpan_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private int getHorizontalNum_void(long pNativeObject);
	/**
	 * 获取水平分段数
	 * @return 水平分段数
	 */
	public int getHorizontalNum()
	{
		int returnValue = getHorizontalNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHorizontalAngleDelta_CDegree(long pNativeObject, long value);
	/**
	 * 设置水平分段间隔角度，只有设置完水平跨度之后才有效
	 * @param value 水平分段间隔角度
	 */
	public void setHorizontalAngleDelta(com.earthview.world.spatial.math.Degree value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setHorizontalAngleDelta_CDegree(this.nativeObject.pointer, valueParamValue);
	}
	native private long getHorizontalAngleDelta_void(long pNativeObject);
	/**
	 * 获取水平分段间隔角度
	 * @return 水平分段间隔角度
	 */
	public com.earthview.world.spatial.math.Degree getHorizontalAngleDelta()
	{
		long returnValue = getHorizontalAngleDelta_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setInterferedDistance_float(long pNativeObject, float interferedDistance);
	/**
	 * 设置威力距离
	 * @param interferedDistance 威力距离
	 */
	public void setInterferedDistance(float interferedDistance)
	{
		float interferedDistanceParamValue = interferedDistance;
		setInterferedDistance_float(this.nativeObject.pointer, interferedDistanceParamValue);
	}
	native private float getInterferedDistance_void(long pNativeObject);
	/**
	 * 获取威力距离
	 * @return 威力距离
	 */
	public float getInterferedDistance()
	{
		float returnValue = getInterferedDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getHeight_void(long pNativeObject);
	/**
	 * 获取高度
	 * @return 高度
	 */
	public float getHeight()
	{
		float returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long getSectionCurve_void_callback()
	{
		com.earthview.world.spatial.geometry.LineString returnValue = getSectionCurve();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSectionCurve_void(long pNativeObject);
	/**
	 * 获取截面线串
	 * @return 截面线串
	 */
	public com.earthview.world.spatial.geometry.LineString getSectionCurve()
	{
		long returnValue = getSectionCurve_void(this.nativeObject.pointer);
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
	native private long getSectionCurve_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.LineString getSectionCurve_NoVirtual()
	{
		long returnValue = getSectionCurve_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setEnvelopSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue, short alpha);
	/**
	 * 设置包络实体颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void setEnvelopSolidColor(short red, short green, short blue, short alpha)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		short alphaParamValue = alpha;
		setEnvelopSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setScannerSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue, short alpha);
	/**
	 * 设置扫描实体颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void setScannerSolidColor(short red, short green, short blue, short alpha)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		short alphaParamValue = alpha;
		setScannerSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void getScannerFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue, long alpha);
	/**
	 * 获取扫描网格颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void getScannerFrameColor(UBytePointer red, UBytePointer green, UBytePointer blue, UBytePointer alpha)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		getScannerFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setScannerFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue, short alpha);
	/**
	 * 设置扫描网格颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void setScannerFrameColor(short red, short green, short blue, short alpha)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		short alphaParamValue = alpha;
		setScannerFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private long getRadarSection_void(long pNativeObject);
	/**
	 * 获取雷达截面
	 * @return 雷达截面
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarSection getRadarSection()
	{
		long returnValue = getRadarSection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate, "CRadarSection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarSection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadarSection");
		}
		return __returnValue;
	}
	native private void getEnvelopSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue, long alpha);
	/**
	 * 获取包络实体颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void getEnvelopSolidColor(UBytePointer red, UBytePointer green, UBytePointer blue, UBytePointer alpha)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		getEnvelopSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setEnvelopFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue, short alpha);
	/**
	 * 设置包络网格颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void setEnvelopFrameColor(short red, short green, short blue, short alpha)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		short alphaParamValue = alpha;
		setEnvelopFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void getEnvelopFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue, long alpha);
	/**
	 * 获取包络网格颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void getEnvelopFrameColor(UBytePointer red, UBytePointer green, UBytePointer blue, UBytePointer alpha)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		getEnvelopFrameColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void getScannerSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue, long alpha);
	/**
	 * 获取扫描实体颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 透明度
	 */
	public void getScannerSolidColor(UBytePointer red, UBytePointer green, UBytePointer blue, UBytePointer alpha)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		long alphaParamValue = alpha.nativeObject.pointer;
		getScannerSolidColor_ev_uint8_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setHeight_float(long pNativeObject, float value);
	/**
	 * 设置高度
	 * @param value 高度
	 */
	public void setHeight(float value)
	{
		float valueParamValue = value;
		setHeight_float(this.nativeObject.pointer, valueParamValue);
	}
	native private void setRadarSection_CRadarSection(long pNativeObject, long radarSection);
	/**
	 * 设置雷达截面
	 * @param radarSection 雷达截面
	 */
	public void setRadarSection(com.earthview.industryengine.militaryengine.radarlibrary.RadarSection radarSection)
	{
		long radarSectionParamValue = (radarSection == null ? 0L : radarSection.nativeObject.pointer);
		setRadarSection_CRadarSection(this.nativeObject.pointer, radarSectionParamValue);
	}
	native private long getUpVector_void(long pNativeObject);
	/**
	 * 获取法线向量
	 * @return 法线向量
	 */
	public com.earthview.world.spatial.math.Vector3 getUpVector()
	{
		long returnValue = getUpVector_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setUpVector_CVector3(long pNativeObject, long value);
	/**
	 * 设置法线向量
	 * @param radarSection 法线向量
	 */
	public void setUpVector(com.earthview.world.spatial.math.Vector3 value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setUpVector_CVector3(this.nativeObject.pointer, valueParamValue);
	}
	native private int getShadeTypeId_void(long pNativeObject);
	/**
	 * 获取遮蔽类型
	 * @return 遮蔽类型
	 */
	public int getShadeTypeId()
	{
		int returnValue = getShadeTypeId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getShadeSplitNum_void(long pNativeObject);
	/**
	 * 获取遮蔽线插分段数
	 * @return 遮蔽线插分段数
	 */
	public int getShadeSplitNum()
	{
		int returnValue = getShadeSplitNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadeTypeId_int(long pNativeObject, int value);
	/**
	 * 获取遮蔽类型
	 * @param value 遮蔽类型(0:只考虑地形；1:只考虑近山遮蔽角；2:考虑地形和近山遮蔽角)
	 */
	public void setShadeTypeId(int value)
	{
		int valueParamValue = value;
		setShadeTypeId_int(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShadeSplitNum_int(long pNativeObject, int value);
	/**
	 * 设置遮蔽线插分段数
	 * @param value 插分段数
	 */
	public void setShadeSplitNum(int value)
	{
		int valueParamValue = value;
		setShadeSplitNum_int(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShadeAngleDatas_CShadeAngleDatas(long pNativeObject, long shadeAngleDatas);
	/**
	 * 设置遮蔽角数据
	 */
	public void setShadeAngleDatas(com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas shadeAngleDatas)
	{
		long shadeAngleDatasParamValue = (shadeAngleDatas == null ? 0L : shadeAngleDatas.nativeObject.pointer);
		setShadeAngleDatas_CShadeAngleDatas(this.nativeObject.pointer, shadeAngleDatasParamValue);
	}
	native private void setTerrainShadeState_bool(long pNativeObject, boolean value);
	/**
	 * 设置地形遮蔽状态
	 */
	public void setTerrainShadeState(boolean value)
	{
		boolean valueParamValue = value;
		setTerrainShadeState_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getTerrainShadeState_void(long pNativeObject);
	/**
	 * 获取地形遮蔽状态
	 * @return 地形遮蔽状态
	 */
	public boolean getTerrainShadeState()
	{
		boolean returnValue = getTerrainShadeState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getShadeAngleDatas_void(long pNativeObject);
	/**
	 * 获取遮蔽角数据集合
	 * @return 遮蔽角数据集合
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas getShadeAngleDatas()
	{
		long returnValue = getShadeAngleDatas_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleDatas");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleDatas");
		}
		return __returnValue;
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制雷达特征
	 * @return 雷达特征
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate, "CRadarCharacter");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarCharacter");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate, "CRadarCharacter");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarCharacter");
		}
		return __returnValue;
	}

	public RadarCharacter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RadarCharacter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSectionCurve_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSectionCurve_void(this.nativeObject.pointer, "getSectionCurve_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static RadarCharacter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RadarCharacter obj = null;
 		if(baseObj instanceof RadarCharacter)
		{
			obj = (RadarCharacter)baseObj;
		} else {
			obj = new RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRadarCharacter");
			obj.increaseCast();
		}

		return obj;
	}
}
