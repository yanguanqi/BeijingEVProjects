package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RadarWave extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave", new RadarWaveClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param ref_sceneManager 地理场景管理器
	 */
	public RadarWave(String name, com.earthview.world.spatial3d.GeoSceneManager ref_sceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		Create("CRadarWave", list);
	}

	native private void addRadarWave_EVString_CVector3_CVector3_double(long pNativeObject, String texturePath, long topPos, long bottomPos, double raidus);
	/**
	 * 创建雷达波
	 * @param texturePath 纹理路径及名称
	 * @param topPos 顶面点位置
	 * @param bottomPos 底面点位置
	 * @param raidus 半径
	 */
	public void addRadarWave(String texturePath, com.earthview.world.spatial.math.Vector3 topPos, com.earthview.world.spatial.math.Vector3 bottomPos, double raidus)
	{
		String texturePathParamValue = texturePath;
		long topPosParamValue = topPos.nativeObject.pointer;
		long bottomPosParamValue = bottomPos.nativeObject.pointer;
		double raidusParamValue = raidus;
		addRadarWave_EVString_CVector3_CVector3_double(this.nativeObject.pointer, texturePathParamValue, topPosParamValue, bottomPosParamValue, raidusParamValue);
	}
	native private void setRadarWaveMaterial_EVString_EVString_double(long pNativeObject, String texturePath, String matName, double waveSpeed);
	/**
	 * 设置雷达波材质
	 * @param texturePath 纹理路径及名称
	 * @param matName 材质名
	 * @param waveSpeed 纹理流动速度
	 */
	public void setRadarWaveMaterial(String texturePath, String matName, double waveSpeed)
	{
		String texturePathParamValue = texturePath;
		String matNameParamValue = matName;
		double waveSpeedParamValue = waveSpeed;
		setRadarWaveMaterial_EVString_EVString_double(this.nativeObject.pointer, texturePathParamValue, matNameParamValue, waveSpeedParamValue);
	}
	native private void addAssignRadarWave_EVString_EVString_CVector3_CVector3_double(long pNativeObject, String name, String matName, long topPos, long bottomPos, double raidus);
	/**
	 * 创建雷达波
	 * @param name 雷达波名称
	 * @param matName 材质名称
	 * @param topPos 顶面点位置
	 * @param bottomPos 底面点位置
	 * @param raidus 半径
	 */
	public void addAssignRadarWave(String name, String matName, com.earthview.world.spatial.math.Vector3 topPos, com.earthview.world.spatial.math.Vector3 bottomPos, double raidus)
	{
		String nameParamValue = name;
		String matNameParamValue = matName;
		long topPosParamValue = topPos.nativeObject.pointer;
		long bottomPosParamValue = bottomPos.nativeObject.pointer;
		double raidusParamValue = raidus;
		addAssignRadarWave_EVString_EVString_CVector3_CVector3_double(this.nativeObject.pointer, nameParamValue, matNameParamValue, topPosParamValue, bottomPosParamValue, raidusParamValue);
	}
	native private void updateRadarWave_EVString_EVString_bool_CVector3_CVector3_double(long pNativeObject, String radarWaveName, String radarWaveMatName, boolean flag, long topPos, long bottomPos, double raidus);
	/**
	 * 动态更新雷达波
	 * @param radarWaveName 雷达波名称
	 * @param radarWaveMatName 材质名称
	 * @param flag 隐藏还是更新雷达波（true:更新，false:隐藏）
	 * @param topPos 顶面点位置
	 * @param bottomPos 底面点位置
	 * @param raidus 半径
	 */
	public void updateRadarWave(String radarWaveName, String radarWaveMatName, boolean flag, com.earthview.world.spatial.math.Vector3 topPos, com.earthview.world.spatial.math.Vector3 bottomPos, double raidus)
	{
		String radarWaveNameParamValue = radarWaveName;
		String radarWaveMatNameParamValue = radarWaveMatName;
		boolean flagParamValue = flag;
		long topPosParamValue = topPos.nativeObject.pointer;
		long bottomPosParamValue = bottomPos.nativeObject.pointer;
		double raidusParamValue = raidus;
		updateRadarWave_EVString_EVString_bool_CVector3_CVector3_double(this.nativeObject.pointer, radarWaveNameParamValue, radarWaveMatNameParamValue, flagParamValue, topPosParamValue, bottomPosParamValue, raidusParamValue);
	}
	public RadarWave(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RadarWave(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RadarWave fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RadarWave obj = null;
 		if(baseObj instanceof RadarWave)
		{
			obj = (RadarWave)baseObj;
		} else {
			obj = new RadarWave(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRadarWave");
			obj.increaseCast();
		}

		return obj;
	}
}
