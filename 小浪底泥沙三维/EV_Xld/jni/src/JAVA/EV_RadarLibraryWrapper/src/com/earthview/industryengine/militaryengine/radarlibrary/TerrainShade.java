package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainShade extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade", new TerrainShadeClassFactory());
	}

	/**
	 * 构造函数
	 * @param nodeName 节点名称
	 * @param ref_pGeoSceneMgr 地理场景管理器
	 * @param pSectionPoints 截面点集合
	 * @param horizontalnum 水平分段数
	 */
	public TerrainShade(String nodeName, com.earthview.world.spatial3d.GeoSceneManager ref_pGeoSceneMgr, com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints pSectionPoints, long horizontalnum) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer nodeNamePtr = new BasePointer(nodeName);
		list.add("nodeName", nodeNamePtr.get());
		BasePointer ref_pGeoSceneMgrPtr = new BasePointer(ref_pGeoSceneMgr);
		list.add("ref_pGeoSceneMgr", ref_pGeoSceneMgrPtr.get());
		BasePointer pSectionPointsPtr = new BasePointer(pSectionPoints);
		list.add("pSectionPoints", pSectionPointsPtr.get());
		BasePointer horizontalnumPtr = new BasePointer(horizontalnum);
		list.add("horizontalnum", horizontalnumPtr.get());
		Create("CTerrainShade", list);
	}

	native private void shadeAnalysistCalculateOnlyTerrain_CVertexVector_ev_uint32(long pNativeObject, long vertexVector, long splitNum);
	/**
	 * 计算遮蔽信息只考虑EV-Globe地形对遮蔽的影响
	 * @param vertexVector 包络实体点集合
	 * @param splitNum 插分线段数
	 */
	public void shadeAnalysistCalculateOnlyTerrain(com.earthview.world.geometry3d.VertexVector vertexVector, long splitNum)
	{
		long vertexVectorParamValue = vertexVector.nativeObject.pointer;
		long splitNumParamValue = splitNum;
		shadeAnalysistCalculateOnlyTerrain_CVertexVector_ev_uint32(this.nativeObject.pointer, vertexVectorParamValue, splitNumParamValue);
	}
	native private void shadeAnalysistCalculateOnlyNearAngle_CVertexVector_ev_uint32_CShadeAngleDatas(long pNativeObject, long vertexVector, long splitNum, long ref_shadeDataList);
	/**
	 * 计算遮蔽信息不考虑EV-Globe地形对遮蔽的影响，只是考虑近山遮蔽数据。如果不存在近山遮蔽数据则返回数据无遮蔽效果
	 * @param vertexVector 包络实体点集合
	 * @param splitNum 插分线段数
	 * @param ref_shadeDataList 近山遮蔽数据列表
	 */
	public void shadeAnalysistCalculateOnlyNearAngle(com.earthview.world.geometry3d.VertexVector vertexVector, long splitNum, com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas ref_shadeDataList)
	{
		long vertexVectorParamValue = vertexVector.nativeObject.pointer;
		long splitNumParamValue = splitNum;
		long ref_shadeDataListParamValue = (ref_shadeDataList == null ? 0L : ref_shadeDataList.nativeObject.pointer);
		shadeAnalysistCalculateOnlyNearAngle_CVertexVector_ev_uint32_CShadeAngleDatas(this.nativeObject.pointer, vertexVectorParamValue, splitNumParamValue, ref_shadeDataListParamValue);
	}
	native private void shadeAnalysistCalculateWithTerrainNearAngle_CVertexVector_ev_uint32_CShadeAngleDatas(long pNativeObject, long vertexVector, long splitNum, long ref_shadeDataList);
	/**
	 * 计算遮蔽信息考虑ev-Globe地形对遮蔽的影响，先考虑近山遮蔽，再考虑地形数据，如无近山遮蔽数据则只考虑地形
	 * @param vertexVector 包络实体点集合
	 * @param splitNum 插分线段数
	 * @param ref_shadeDataList 近山遮蔽数据列表
	 */
	public void shadeAnalysistCalculateWithTerrainNearAngle(com.earthview.world.geometry3d.VertexVector vertexVector, long splitNum, com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas ref_shadeDataList)
	{
		long vertexVectorParamValue = vertexVector.nativeObject.pointer;
		long splitNumParamValue = splitNum;
		long ref_shadeDataListParamValue = (ref_shadeDataList == null ? 0L : ref_shadeDataList.nativeObject.pointer);
		shadeAnalysistCalculateWithTerrainNearAngle_CVertexVector_ev_uint32_CShadeAngleDatas(this.nativeObject.pointer, vertexVectorParamValue, splitNumParamValue, ref_shadeDataListParamValue);
	}
	native private long getScaleVectorList_void(long pNativeObject);
	/**
	 * 获取威力系数列表
	 * @return 威力系数列表
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorList getScaleVectorList()
	{
		long returnValue = getScaleVectorList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorList __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate, "CScaleVectorList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScaleVectorList");
		}
		return __returnValue;
	}
	public TerrainShade(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TerrainShade(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TerrainShade fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TerrainShade obj = null;
 		if(baseObj instanceof TerrainShade)
		{
			obj = (TerrainShade)baseObj;
		} else {
			obj = new TerrainShade(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTerrainShade");
			obj.increaseCast();
		}

		return obj;
	}
}
