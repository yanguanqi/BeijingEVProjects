package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasOptimizeParams extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams", new LasOptimizeParamsClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LasOptimizeParams() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLasOptimizeParams", null);
	}

	native private void OperatorAssign_CLasOptimizeParams(long pNativeObject, long params);
	public void OperatorAssign(com.earthview.world.spatiallasconvertproxy.LasOptimizeParams params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		OperatorAssign_CLasOptimizeParams(this.nativeObject.pointer, paramsParamValue);
	}
	public enum EVLasOptimizeMethod implements INativeEnum<EVLasOptimizeMethod> {
		LOM_Proportion(EVLasOptimizeMethodHelper.ENUM_VALUES[0]),
		LOM_PointNum(EVLasOptimizeMethodHelper.ENUM_VALUES[1]);
		private int value;
		EVLasOptimizeMethod(int i) {
			this.value = i;
		}
		public EVLasOptimizeMethod getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVLasOptimizeMethod toEnum(int retval) {
			if(retval == LOM_Proportion.value){
				return LOM_Proportion;
			}
			else if(retval == LOM_PointNum.value){
				return LOM_PointNum;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVLasOptimizeMethodHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setLasOptimizeMethod_EVLasOptimizeMethod(long pNativeObject, int lasOptimizeMethod);
	///设置点云优化方式,目前只开启百分比优化
	public void setLasOptimizeMethod(com.earthview.world.spatiallasconvertproxy.LasOptimizeParams.EVLasOptimizeMethod lasOptimizeMethod)
	{
		int lasOptimizeMethodParamValue = lasOptimizeMethod.getValue();
		setLasOptimizeMethod_EVLasOptimizeMethod(this.nativeObject.pointer, lasOptimizeMethodParamValue);
	}
	native private int getLasOptimizeMethod_void(long pNativeObject);
	///获取点云优化方式
	public com.earthview.world.spatiallasconvertproxy.LasOptimizeParams.EVLasOptimizeMethod getLasOptimizeMethod()
	{
		int returnValue = getLasOptimizeMethod_void(this.nativeObject.pointer);
		return com.earthview.world.spatiallasconvertproxy.LasOptimizeParams.EVLasOptimizeMethod.toEnum(returnValue);
	}
	native private void setLasOptimizePersent_ev_real32(long pNativeObject, float lasOptimizePersent);
	///设置点云简化比例
	public void setLasOptimizePersent(float lasOptimizePersent)
	{
		float lasOptimizePersentParamValue = lasOptimizePersent;
		setLasOptimizePersent_ev_real32(this.nativeObject.pointer, lasOptimizePersentParamValue);
	}
	native private float getLasOptimizePersent_void(long pNativeObject);
	///获取点云简化比例
	public float getLasOptimizePersent()
	{
		float returnValue = getLasOptimizePersent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLasCountLowerLimit_ev_uint32(long pNativeObject, long lasCountLowerLimit);
	///设置剩余点数目的下限，少于该数目按最小数目简化
	public void setLasCountLowerLimit(long lasCountLowerLimit)
	{
		long lasCountLowerLimitParamValue = lasCountLowerLimit;
		setLasCountLowerLimit_ev_uint32(this.nativeObject.pointer, lasCountLowerLimitParamValue);
	}
	native private long getLasCountLowerLimit_void(long pNativeObject);
	///获取剩余点数目的下限
	public long getLasCountLowerLimit()
	{
		long returnValue = getLasCountLowerLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTileVisibleMultiplier_ev_real32(long pNativeObject, float multiplier);
	///设置最小像素范围系数
	public void setTileVisibleMultiplier(float multiplier)
	{
		float multiplierParamValue = multiplier;
		setTileVisibleMultiplier_ev_real32(this.nativeObject.pointer, multiplierParamValue);
	}
	native private float getTileVisibleMultiplier_void(long pNativeObject);
	///获取最小像素范围系数
	public float getTileVisibleMultiplier()
	{
		float returnValue = getTileVisibleMultiplier_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setConvertToDDS_ev_bool(long pNativeObject, boolean convertToDDS);
	///设置是否转换图片为DDS
	public void setConvertToDDS(boolean convertToDDS)
	{
		boolean convertToDDSParamValue = convertToDDS;
		setConvertToDDS_ev_bool(this.nativeObject.pointer, convertToDDSParamValue);
	}
	native private boolean getConvertToDDS_void(long pNativeObject);
	///获取是否转换图片为DDS
	public boolean getConvertToDDS()
	{
		boolean returnValue = getConvertToDDS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBuildQuadtree_ev_bool(long pNativeObject, boolean buildQuadTree);
	///设置是否分块
	public void setBuildQuadtree(boolean buildQuadTree)
	{
		boolean buildQuadTreeParamValue = buildQuadTree;
		setBuildQuadtree_ev_bool(this.nativeObject.pointer, buildQuadTreeParamValue);
	}
	native private boolean getBuildQuadtree_void(long pNativeObject);
	///获取是否分块
	public boolean getBuildQuadtree()
	{
		boolean returnValue = getBuildQuadtree_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCombineSubMesh_ev_bool(long pNativeObject, boolean combineSubMesh);
	///设置是否按块合并submesh
	public void setCombineSubMesh(boolean combineSubMesh)
	{
		boolean combineSubMeshParamValue = combineSubMesh;
		setCombineSubMesh_ev_bool(this.nativeObject.pointer, combineSubMeshParamValue);
	}
	native private boolean getCombineSubMesh_void(long pNativeObject);
	///获取是否按块合并submesh
	public boolean getCombineSubMesh()
	{
		boolean returnValue = getCombineSubMesh_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseDoubleSideLight_ev_bool(long pNativeObject, boolean useDoubleSideLight);
	///设置是否使用双面光照
	public void setUseDoubleSideLight(boolean useDoubleSideLight)
	{
		boolean useDoubleSideLightParamValue = useDoubleSideLight;
		setUseDoubleSideLight_ev_bool(this.nativeObject.pointer, useDoubleSideLightParamValue);
	}
	native private boolean getUseDoubleSideLight_void(long pNativeObject);
	///获取是否使用双面光照
	public boolean getUseDoubleSideLight()
	{
		boolean returnValue = getUseDoubleSideLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEncodeTo7z_ev_bool(long pNativeObject, boolean encodeTo7z);
	///设置是否压缩7z，数据发布必须设置为压缩，通过CLasLODGenerator可以设置
	public void setEncodeTo7z(boolean encodeTo7z)
	{
		boolean encodeTo7zParamValue = encodeTo7z;
		setEncodeTo7z_ev_bool(this.nativeObject.pointer, encodeTo7zParamValue);
	}
	native private boolean getEncodeTo7z_void(long pNativeObject);
	///获取是否压缩7z
	public boolean getEncodeTo7z()
	{
		boolean returnValue = getEncodeTo7z_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseShareMaterial_ev_bool(long pNativeObject, boolean useShareMat);
	///设置是否使用公共材质，通过CLasLODGenerator可以直接设置
	public void setUseShareMaterial(boolean useShareMat)
	{
		boolean useShareMatParamValue = useShareMat;
		setUseShareMaterial_ev_bool(this.nativeObject.pointer, useShareMatParamValue);
	}
	native private boolean getUseShareMaterial_void(long pNativeObject);
	///获取是否使用公共材质
	public boolean getUseShareMaterial()
	{
		boolean returnValue = getUseShareMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void toXml_CXmlElement(long pNativeObject, long paramElement);
	///序列化参数
	public void toXml(com.earthview.world.core.XmlElement paramElement)
	{
		long paramElementParamValue = paramElement.nativeObject.pointer;
		toXml_CXmlElement(this.nativeObject.pointer, paramElementParamValue);
	}
	native private void fromXml_CXmlElement(long pNativeObject, long element);
	///序列化参数
	public void fromXml(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXml_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	public LasOptimizeParams(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasOptimizeParams(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LasOptimizeParams fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasOptimizeParams obj = null;
 		if(baseObj instanceof LasOptimizeParams)
		{
			obj = (LasOptimizeParams)baseObj;
		} else {
			obj = new LasOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasOptimizeParams");
			obj.increaseCast();
		}

		return obj;
	}
}
