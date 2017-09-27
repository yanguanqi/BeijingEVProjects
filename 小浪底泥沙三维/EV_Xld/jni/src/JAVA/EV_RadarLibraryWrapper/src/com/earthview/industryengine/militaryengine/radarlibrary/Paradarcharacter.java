package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 相控阵雷达特征
 */
public class Paradarcharacter extends com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter", new ParadarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCPARadarCharacterProxy", new ParadarcharacterClassFactory());
	}

	public Paradarcharacter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPARadarCharacterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.Paradarcharacter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long createRadarSection_CDegree_ev_int32_ev_real64(long verticalAngleSpan, int verticalNum, double overaweDistance);
	/**
	 * 创建相控阵雷达垂直威力面
	 * @param verticalSpan 垂直方向跨度
	 * @param verticalNum 垂直方向威力数据分布
	 * @param overaweDistance 雷达威力范围
	 * @return 相控阵雷达垂直威力面
	 */
	public static com.earthview.industryengine.militaryengine.radarlibrary.RadarSection createRadarSection(com.earthview.world.spatial.math.Degree verticalAngleSpan, int verticalNum, double overaweDistance)
	{
		long verticalAngleSpanParamValue = verticalAngleSpan.nativeObject.pointer;
		int verticalNumParamValue = verticalNum;
		double overaweDistanceParamValue = overaweDistance;
		long returnValue = createRadarSection_CDegree_ev_int32_ev_real64(verticalAngleSpanParamValue, verticalNumParamValue, overaweDistanceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate, "CRadarSection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarSection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarSection");
		}
		return __returnValue;
	}
	native private static long createRadarSection_CDegree_CDegree_ev_real64(long verticalAngleSpan, long verticalAngleDelta, double overaweDistance);
	/**
	 * 创建相控阵雷达垂直威力面
	 * @param verticalSpan 垂直方向跨度
	 * @param verticalAngleDelta 垂直方向威力数据角度分布
	 * @param overaweDistance 雷达威力范围
	 * @return 相控阵雷达垂直威力面
	 */
	public static com.earthview.industryengine.militaryengine.radarlibrary.RadarSection createRadarSection(com.earthview.world.spatial.math.Degree verticalAngleSpan, com.earthview.world.spatial.math.Degree verticalAngleDelta, double overaweDistance)
	{
		long verticalAngleSpanParamValue = verticalAngleSpan.nativeObject.pointer;
		long verticalAngleDeltaParamValue = verticalAngleDelta.nativeObject.pointer;
		double overaweDistanceParamValue = overaweDistance;
		long returnValue = createRadarSection_CDegree_CDegree_ev_real64(verticalAngleSpanParamValue, verticalAngleDeltaParamValue, overaweDistanceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate, "CRadarSection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarSection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarSection");
		}
		return __returnValue;
	}
	native private int getVerticalNum_void(long pNativeObject);
	/**
	 * 获取相控阵雷达垂直方向分布数目
	 * @return 相控阵雷达垂直方向分布数目
	 */
	public int getVerticalNum()
	{
		int returnValue = getVerticalNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVerticalNum_ev_int32(long pNativeObject, int verticalNum);
	/**
	 * 设置相控阵雷达垂直方向分布数目
	 * @param value 相控阵雷达垂直方向分布数目
	 */
	public void setVerticalNum(int verticalNum)
	{
		int verticalNumParamValue = verticalNum;
		setVerticalNum_ev_int32(this.nativeObject.pointer, verticalNumParamValue);
	}
	native private long getVerticalAngleSpan_void(long pNativeObject);
	/**
	 * 获取相控阵雷达垂直方向威力范围
	 * @return 相控阵雷达垂直方向威力范围（角度值）
	 */
	public com.earthview.world.spatial.math.Degree getVerticalAngleSpan()
	{
		long returnValue = getVerticalAngleSpan_void(this.nativeObject.pointer);
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
	native private void setVerticalAngleSpan_CDegree(long pNativeObject, long value);
	/**
	 * 设置相控阵雷达垂直方向威力范围
	 * @param value 相控阵雷达垂直方向威力范围（角度值）
	 */
	public void setVerticalAngleSpan(com.earthview.world.spatial.math.Degree value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setVerticalAngleSpan_CDegree(this.nativeObject.pointer, valueParamValue);
	}
	native private long getVerticalAngleDelta_void(long pNativeObject);
	/**
	 * 获取相控阵雷达垂直方向威力间隔
	 * @return 相控阵雷达垂直方向威力间隔（角度值）
	 */
	public com.earthview.world.spatial.math.Degree getVerticalAngleDelta()
	{
		long returnValue = getVerticalAngleDelta_void(this.nativeObject.pointer);
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
	native private void setVerticalAngleDelta_CDegree(long pNativeObject, long value);
	/**
	 * 设置相控阵雷达垂直方向威力间隔，只有设置了垂直威力范围后才有效
	 * @param value 相控阵雷达垂直方向威力间隔（角度值）
	 */
	public void setVerticalAngleDelta(com.earthview.world.spatial.math.Degree value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setVerticalAngleDelta_CDegree(this.nativeObject.pointer, valueParamValue);
	}
	native private double getOveraweDistance_void(long pNativeObject);
	/**
	 * 获取相控阵雷达威力范围
	 * @return 相控阵雷达威力范围
	 */
	public double getOveraweDistance()
	{
		double returnValue = getOveraweDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOveraweDistance_ev_real64(long pNativeObject, double overaweDistance);
	/**
	 * 设置相控阵雷达威力范围
	 * @param value 相控阵雷达威力范围
	 */
	public void setOveraweDistance(double overaweDistance)
	{
		double overaweDistanceParamValue = overaweDistance;
		setOveraweDistance_ev_real64(this.nativeObject.pointer, overaweDistanceParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 相控阵雷达特征
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

	public Paradarcharacter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Paradarcharacter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取截面线串
	 * @return 截面线串
	 */
	public com.earthview.world.spatial.geometry.LineString getSectionCurve()
	{
		return super.getSectionCurve_NoVirtual();
	}
	
	native protected void register_getSectionCurve_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSectionCurve_void(this.nativeObject.pointer, "getSectionCurve_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Paradarcharacter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Paradarcharacter obj = null;
 		if(baseObj instanceof Paradarcharacter)
		{
			obj = (Paradarcharacter)baseObj;
		} else {
			obj = new Paradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPARadarCharacter");
			obj.increaseCast();
		}

		return obj;
	}
}
