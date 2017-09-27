package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeParams extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeParams", new MeshOptimizeParamsClassFactory());
	}

	public MeshOptimizeParams() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshOptimizeParams", null);
	}

	native private void OperatorAssign_CMeshOptimizeParams(long pNativeObject, long params);
	public void OperatorAssign(com.earthview.meshoptimize.MeshOptimizeParams params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		OperatorAssign_CMeshOptimizeParams(this.nativeObject.pointer, paramsParamValue);
	}
	public enum EVTriangleOptimizeType implements INativeEnum<EVTriangleOptimizeType> {
		TOT_EdgeOptimize(EVTriangleOptimizeTypeHelper.ENUM_VALUES[0]),
		TOT_FaceOptimize(EVTriangleOptimizeTypeHelper.ENUM_VALUES[1]);
		private int value;
		EVTriangleOptimizeType(int i) {
			this.value = i;
		}
		public EVTriangleOptimizeType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVTriangleOptimizeType toEnum(int retval) {
			if(retval == TOT_EdgeOptimize.value){
				return TOT_EdgeOptimize;
			}
			else if(retval == TOT_FaceOptimize.value){
				return TOT_FaceOptimize;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVTriangleOptimizeTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///暂时只开启边列表优化
	public enum EVTriangleOptimizeMethod implements INativeEnum<EVTriangleOptimizeMethod> {
		TOM_Proportion(EVTriangleOptimizeMethodHelper.ENUM_VALUES[0]),
		TOM_TriangleNum(EVTriangleOptimizeMethodHelper.ENUM_VALUES[1]);
		private int value;
		EVTriangleOptimizeMethod(int i) {
			this.value = i;
		}
		public EVTriangleOptimizeMethod getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVTriangleOptimizeMethod toEnum(int retval) {
			if(retval == TOM_Proportion.value){
				return TOM_Proportion;
			}
			else if(retval == TOM_TriangleNum.value){
				return TOM_TriangleNum;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVTriangleOptimizeMethodHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///包围盒大小以及简化比例结构体
	public static final class BoxSizeWithProportion extends RemoteNativeObject {
	
		public BoxSizeWithProportion(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public BoxSizeWithProportion(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public BoxSizeWithProportion() {
			super(new InstancePointer(Create()),false);
		}
		native private float get_triangleCountBoundary_void(long pNativeObject);
		public float get_triangleCountBoundary()
		{
			float jniValue = get_triangleCountBoundary_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_triangleCountBoundary_ev_real32 (long pNativeObject, float value);
		public void set_triangleCountBoundary(float triangleCountBoundary)
		{
			float triangleCountBoundaryParamValue = triangleCountBoundary;
			
			set_triangleCountBoundary_ev_real32(this.nativeObject.pointer, triangleCountBoundaryParamValue);
		}
		
		native private float get_optimizePersentLimit_void(long pNativeObject);
		public float get_optimizePersentLimit()
		{
			float jniValue = get_optimizePersentLimit_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_optimizePersentLimit_ev_real32 (long pNativeObject, float value);
		public void set_optimizePersentLimit(float optimizePersentLimit)
		{
			float optimizePersentLimitParamValue = optimizePersentLimit;
			
			set_optimizePersentLimit_ev_real32(this.nativeObject.pointer, optimizePersentLimitParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	native private void setTriangleOptimizeType_EVTriangleOptimizeType(long pNativeObject, int triOptimizeType);
	///设置三角面优化类型
	public void setTriangleOptimizeType(com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeType triOptimizeType)
	{
		int triOptimizeTypeParamValue = triOptimizeType.getValue();
		setTriangleOptimizeType_EVTriangleOptimizeType(this.nativeObject.pointer, triOptimizeTypeParamValue);
	}
	native private int getTriangleOptimizeType_void(long pNativeObject);
	///获取三角面优化类型
	public com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeType getTriangleOptimizeType()
	{
		int returnValue = getTriangleOptimizeType_void(this.nativeObject.pointer);
		return com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeType.toEnum(returnValue);
	}
	native private void setTriangleOptimizeMethod_EVTriangleOptimizeMethod(long pNativeObject, int triOptimizeMethod);
	///设置三角面优化方式,目前只开启百分比优化
	public void setTriangleOptimizeMethod(com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeMethod triOptimizeMethod)
	{
		int triOptimizeMethodParamValue = triOptimizeMethod.getValue();
		setTriangleOptimizeMethod_EVTriangleOptimizeMethod(this.nativeObject.pointer, triOptimizeMethodParamValue);
	}
	native private int getTriangleOptimizeMethod_void(long pNativeObject);
	///获取三角面优化方式
	public com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeMethod getTriangleOptimizeMethod()
	{
		int returnValue = getTriangleOptimizeMethod_void(this.nativeObject.pointer);
		return com.earthview.meshoptimize.MeshOptimizeParams.EVTriangleOptimizeMethod.toEnum(returnValue);
	}
	native private void setDefaultOptimizePersent_ev_real32(long pNativeObject, float defaultOptimizePersent);
	///设置目标三角面简化比例
	public void setDefaultOptimizePersent(float defaultOptimizePersent)
	{
		float defaultOptimizePersentParamValue = defaultOptimizePersent;
		setDefaultOptimizePersent_ev_real32(this.nativeObject.pointer, defaultOptimizePersentParamValue);
	}
	native private float getDefaultOptimizePersent_void(long pNativeObject);
	///获取目标三角面简化比例
	public float getDefaultOptimizePersent()
	{
		float returnValue = getDefaultOptimizePersent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLineOptimizePersent_ev_real32(long pNativeObject, float lineOptimizePersent);
	///设置目标线简化比例
	public void setLineOptimizePersent(float lineOptimizePersent)
	{
		float lineOptimizePersentParamValue = lineOptimizePersent;
		setLineOptimizePersent_ev_real32(this.nativeObject.pointer, lineOptimizePersentParamValue);
	}
	native private float getLineOptimizePersent_void(long pNativeObject);
	///获取目标线简化比例
	public float getLineOptimizePersent()
	{
		float returnValue = getLineOptimizePersent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSubmeshTrangleCountLowerLimit_ev_uint32(long pNativeObject, long submeshTrangleCountLowerLimit);
	///设置剩余最少三角面数目，少于该数目按最小数目简化
	public void setSubmeshTrangleCountLowerLimit(long submeshTrangleCountLowerLimit)
	{
		long submeshTrangleCountLowerLimitParamValue = submeshTrangleCountLowerLimit;
		setSubmeshTrangleCountLowerLimit_ev_uint32(this.nativeObject.pointer, submeshTrangleCountLowerLimitParamValue);
	}
	native private long getSubmeshTrangleCountLowerLimit_void(long pNativeObject);
	///获取剩余最少三角面数目
	public long getSubmeshTrangleCountLowerLimit()
	{
		long returnValue = getSubmeshTrangleCountLowerLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTriangleRelationshipRebulid_ev_bool(long pNativeObject, boolean triRelationshipRebulid);
	///设置是否重建三角面拓补关系
	public void setTriangleRelationshipRebulid(boolean triRelationshipRebulid)
	{
		boolean triRelationshipRebulidParamValue = triRelationshipRebulid;
		setTriangleRelationshipRebulid_ev_bool(this.nativeObject.pointer, triRelationshipRebulidParamValue);
	}
	native private boolean getTriangleRelationshipRebulid_void(long pNativeObject);
	///获取是是否重建三角面拓补关系
	public boolean getTriangleRelationshipRebulid()
	{
		boolean returnValue = getTriangleRelationshipRebulid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setConvertToDDS_ev_bool(long pNativeObject, boolean toDDS);
	///获取或设置是否转换图片为DDS
	public void setConvertToDDS(boolean toDDS)
	{
		boolean toDDSParamValue = toDDS;
		setConvertToDDS_ev_bool(this.nativeObject.pointer, toDDSParamValue);
	}
	native private boolean getConvertToDDS_void(long pNativeObject);
	public boolean getConvertToDDS()
	{
		boolean returnValue = getConvertToDDS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBuildQuadtree_ev_bool(long pNativeObject, boolean buildQuadTree);
	///获取或设置是否分块
	public void setBuildQuadtree(boolean buildQuadTree)
	{
		boolean buildQuadTreeParamValue = buildQuadTree;
		setBuildQuadtree_ev_bool(this.nativeObject.pointer, buildQuadTreeParamValue);
	}
	native private boolean getBuildQuadtree_void(long pNativeObject);
	public boolean getBuildQuadtree()
	{
		boolean returnValue = getBuildQuadtree_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCombineSubMesh_ev_bool(long pNativeObject, boolean combineSubMesh);
	///获取或设置是否按块合并submesh
	public void setCombineSubMesh(boolean combineSubMesh)
	{
		boolean combineSubMeshParamValue = combineSubMesh;
		setCombineSubMesh_ev_bool(this.nativeObject.pointer, combineSubMeshParamValue);
	}
	native private boolean getCombineSubMesh_void(long pNativeObject);
	public boolean getCombineSubMesh()
	{
		boolean returnValue = getCombineSubMesh_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseDoubleSideLight_ev_bool(long pNativeObject, boolean useDoubleSideLight);
	///获取或设置是否使用双面光照
	public void setUseDoubleSideLight(boolean useDoubleSideLight)
	{
		boolean useDoubleSideLightParamValue = useDoubleSideLight;
		setUseDoubleSideLight_ev_bool(this.nativeObject.pointer, useDoubleSideLightParamValue);
	}
	native private boolean getUseDoubleSideLight_void(long pNativeObject);
	public boolean getUseDoubleSideLight()
	{
		boolean returnValue = getUseDoubleSideLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxVertexCombineNormalAngle_ev_real32(long pNativeObject, float maxNormalAngle);
	///获取或设置三角面法线合并角度值，小于等于该值的合并
	public void setMaxVertexCombineNormalAngle(float maxNormalAngle)
	{
		float maxNormalAngleParamValue = maxNormalAngle;
		setMaxVertexCombineNormalAngle_ev_real32(this.nativeObject.pointer, maxNormalAngleParamValue);
	}
	native private float getMaxVertexCombineNormalAngle_void(long pNativeObject);
	public float getMaxVertexCombineNormalAngle()
	{
		float returnValue = getMaxVertexCombineNormalAngle_void(this.nativeObject.pointer);
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
	public void fromXml(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXml_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void setEncodeTo7z_ev_bool(long pNativeObject, boolean encodeTo7z);
	///获取或设置压缩7z，数据发布必须设置为压缩，通过CModelLODGenerator可以设置
	public void setEncodeTo7z(boolean encodeTo7z)
	{
		boolean encodeTo7zParamValue = encodeTo7z;
		setEncodeTo7z_ev_bool(this.nativeObject.pointer, encodeTo7zParamValue);
	}
	native private boolean getEncodeTo7z_void(long pNativeObject);
	public boolean getEncodeTo7z()
	{
		boolean returnValue = getEncodeTo7z_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSubmeshCountUpperLimit_ev_uint32(long pNativeObject, long submeshCountUpperLimit);
	////获取或设置包围盒丢弃大小，小于等于该值的会被丢弃
	//ev_void setDiscardBoxSize(ev_real32 discardBoxSize);
	//ev_real32 getDiscardBoxSize();
	//获取或设置最大拆分几何实例数目，小于等于该值的会被拆开合并
	public void setSubmeshCountUpperLimit(long submeshCountUpperLimit)
	{
		long submeshCountUpperLimitParamValue = submeshCountUpperLimit;
		setSubmeshCountUpperLimit_ev_uint32(this.nativeObject.pointer, submeshCountUpperLimitParamValue);
	}
	native private long getSubmeshCountUpperLimit_void(long pNativeObject);
	public long getSubmeshCountUpperLimit()
	{
		long returnValue = getSubmeshCountUpperLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDiscardTrangleCountLowerLimit_ev_real32(long pNativeObject, float discardTrangleCountLowerLimit);
	///获取或设置最大拆分几何实例数目，小于等于该值的会被拆开合并
	public void setDiscardTrangleCountLowerLimit(float discardTrangleCountLowerLimit)
	{
		float discardTrangleCountLowerLimitParamValue = discardTrangleCountLowerLimit;
		setDiscardTrangleCountLowerLimit_ev_real32(this.nativeObject.pointer, discardTrangleCountLowerLimitParamValue);
	}
	native private float getDiscardTrangleCountLowerLimit_void(long pNativeObject);
	public float getDiscardTrangleCountLowerLimit()
	{
		float returnValue = getDiscardTrangleCountLowerLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOptimizeParamLimit_BoxSizeWithProportion(long pNativeObject, long bigSubmeshOptimizeParam);
	///获取或设置上限包围盒大小以及简化比例
	public void setOptimizeParamLimit(com.earthview.meshoptimize.MeshOptimizeParams.BoxSizeWithProportion bigSubmeshOptimizeParam)
	{
		long bigSubmeshOptimizeParamParamValue = bigSubmeshOptimizeParam.nativeObject.pointer;
		setOptimizeParamLimit_BoxSizeWithProportion(this.nativeObject.pointer, bigSubmeshOptimizeParamParamValue);
	}
	native private long getOptimizeParamLimit_void(long pNativeObject);
	public com.earthview.meshoptimize.MeshOptimizeParams.BoxSizeWithProportion getOptimizeParamLimit()
	{
		long returnValue = getOptimizeParamLimit_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.MeshOptimizeParams.BoxSizeWithProportion __returnValue = new com.earthview.meshoptimize.MeshOptimizeParams.BoxSizeWithProportion(new InstancePointer(returnValue), false);
		return __returnValue;
	}
	native private void setTileVisibleMultiplier_ev_real32(long pNativeObject, float multiplier);
	////获取或设置下限包围盒大小以及简化比例
	//ev_void setSmallSubmeshOptimizeParam(CMeshOptimizeParams::BoxSizeWithProportion smallSubmeshOptimizeParam);
	//CMeshOptimizeParams::BoxSizeWithProportion getSmallSubmeshOptimizeParam();
	//获取或设置最小像素范围系数
	public void setTileVisibleMultiplier(float multiplier)
	{
		float multiplierParamValue = multiplier;
		setTileVisibleMultiplier_ev_real32(this.nativeObject.pointer, multiplierParamValue);
	}
	native private float getTileVisibleMultiplier_void(long pNativeObject);
	public float getTileVisibleMultiplier()
	{
		float returnValue = getTileVisibleMultiplier_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseShareMaterial_ev_bool(long pNativeObject, boolean useShareMat);
	///获取或设置是否使用公共材质，通过CModelLODGenerator可以直接设置
	public void setUseShareMaterial(boolean useShareMat)
	{
		boolean useShareMatParamValue = useShareMat;
		setUseShareMaterial_ev_bool(this.nativeObject.pointer, useShareMatParamValue);
	}
	native private boolean getUseShareMaterial_void(long pNativeObject);
	public boolean getUseShareMaterial()
	{
		boolean returnValue = getUseShareMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	public MeshOptimizeParams(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshOptimizeParams(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshOptimizeParams fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshOptimizeParams obj = null;
 		if(baseObj instanceof MeshOptimizeParams)
		{
			obj = (MeshOptimizeParams)baseObj;
		} else {
			obj = new MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshOptimizeParams");
			obj.increaseCast();
		}

		return obj;
	}
}
