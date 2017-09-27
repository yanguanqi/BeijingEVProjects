package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class ModelLODParam extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CModelLODParam", new ModelLODParamClassFactory());
	}

	public ModelLODParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelLODParam", null);
	}

	native private void setBuildQuadtree_ev_bool(long pNativeObject, boolean buildQuadTree);
	///公共参数
	///设置是否分割四叉树
	public void setBuildQuadtree(boolean buildQuadTree)
	{
		boolean buildQuadTreeParamValue = buildQuadTree;
		setBuildQuadtree_ev_bool(this.nativeObject.pointer, buildQuadTreeParamValue);
	}
	native private boolean getBuildQuadtree_void(long pNativeObject);
	///获取是否分割四叉树
	public boolean getBuildQuadtree()
	{
		boolean returnValue = getBuildQuadtree_void(this.nativeObject.pointer);
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
	native private void setUseInstance_ev_bool(long pNativeObject, boolean useInstance);
	///设置是否insance方式处理相同的模型
	public void setUseInstance(boolean useInstance)
	{
		boolean useInstanceParamValue = useInstance;
		setUseInstance_ev_bool(this.nativeObject.pointer, useInstanceParamValue);
	}
	native private boolean getUseInstance_void(long pNativeObject);
	///获取是否insance方式处理相同的模型
	public boolean getUseInstance()
	{
		boolean returnValue = getUseInstance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCombineSubmesh_ev_bool(long pNativeObject, boolean combineSubMesh);
	////设置是否重建三角面拓补关系
	//ev_void setTriReBuild(ev_bool triReBuild);
	////获取是否重建三角面拓补关系(不重建会影响简化效果，建议采用默认值)
	//ev_bool getTriReBuild();
	//设置是否按照四叉树分块合并mesh
	public void setCombineSubmesh(boolean combineSubMesh)
	{
		boolean combineSubMeshParamValue = combineSubMesh;
		setCombineSubmesh_ev_bool(this.nativeObject.pointer, combineSubMeshParamValue);
	}
	native private boolean getCombineSubmesh_void(long pNativeObject);
	///获取是否按照四叉树分块合并mesh
	public boolean getCombineSubmesh()
	{
		boolean returnValue = getCombineSubmesh_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setToDDS_ev_bool(long pNativeObject, boolean toDDS);
	///设置是否转换图片为dds
	public void setToDDS(boolean toDDS)
	{
		boolean toDDSParamValue = toDDS;
		setToDDS_ev_bool(this.nativeObject.pointer, toDDSParamValue);
	}
	native private boolean getToDDS_void(long pNativeObject);
	///获取是否转换图片为dds
	public boolean getToDDS()
	{
		boolean returnValue = getToDDS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEncode7z_ev_bool(long pNativeObject, boolean encode7z);
	///设置是否压缩7z
	public void setEncode7z(boolean encode7z)
	{
		boolean encode7zParamValue = encode7z;
		setEncode7z_ev_bool(this.nativeObject.pointer, encode7zParamValue);
	}
	native private boolean getEncode7z_void(long pNativeObject);
	///获取是否压缩7z,发布服务器以及需要合并的obq必须压缩7z
	public boolean getEncode7z()
	{
		boolean returnValue = getEncode7z_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseShareMaterial_ev_bool(long pNativeObject, boolean useshareMaterial);
	///设置是否使用公共材质(取某个submesh的材质对象值作为公共材质提高渲染效率)
	public void setUseShareMaterial(boolean useshareMaterial)
	{
		boolean useshareMaterialParamValue = useshareMaterial;
		setUseShareMaterial_ev_bool(this.nativeObject.pointer, useshareMaterialParamValue);
	}
	native private boolean getUseShareMaterial_void(long pNativeObject);
	///获取是否使用
	public boolean getUseShareMaterial()
	{
		boolean returnValue = getUseShareMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean existLODParam_ev_uint8_CMeshOptimizeParams(long pNativeObject, short level, long param);
	///
	///获取是否存在该级别LOD参数
	public boolean existLODParam(short level, com.earthview.meshoptimize.MeshOptimizeParams param)
	{
		short levelParamValue = level;
		long paramParamValue = param.nativeObject.pointer;
		boolean returnValue = existLODParam_ev_uint8_CMeshOptimizeParams(this.nativeObject.pointer, levelParamValue, paramParamValue);
		return returnValue;
	}
	native private void updateLODParam_ev_uint8_CMeshOptimizeParams(long pNativeObject, short level, long param);
	///更新该级别LODC参数
	public void updateLODParam(short level, com.earthview.meshoptimize.MeshOptimizeParams param)
	{
		short levelParamValue = level;
		long paramParamValue = param.nativeObject.pointer;
		updateLODParam_ev_uint8_CMeshOptimizeParams(this.nativeObject.pointer, levelParamValue, paramParamValue);
	}
	native private void addLODParam_ev_uint8_CMeshOptimizeParams(long pNativeObject, short level, long param);
	///添加该级别LOD参数
	public void addLODParam(short level, com.earthview.meshoptimize.MeshOptimizeParams param)
	{
		short levelParamValue = level;
		long paramParamValue = param.nativeObject.pointer;
		addLODParam_ev_uint8_CMeshOptimizeParams(this.nativeObject.pointer, levelParamValue, paramParamValue);
	}
	native private void removeLODParam_ev_uint8(long pNativeObject, short level);
	///移除该级别LOD参数
	public void removeLODParam(short level)
	{
		short levelParamValue = level;
		removeLODParam_ev_uint8(this.nativeObject.pointer, levelParamValue);
	}
	native private long getLODParam_ev_uint8(long pNativeObject, short level);
	///获取该级别LOD参数
	public com.earthview.meshoptimize.MeshOptimizeParams getLODParam(short level)
	{
		short levelParamValue = level;
		long returnValue = getLODParam_ev_uint8(this.nativeObject.pointer, levelParamValue);
		com.earthview.meshoptimize.MeshOptimizeParams __returnValue = new com.earthview.meshoptimize.MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshOptimizeParams");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.MeshOptimizeParams)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshOptimizeParams");
		}
		return __returnValue;
	}
	native private int getLODParamSize_void(long pNativeObject);
	///获取LOD级别总数
	public int getLODParamSize()
	{
		int returnValue = getLODParamSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clearLODParam_void(long pNativeObject);
	///清空参数容器
	public void clearLODParam()
	{
		clearLODParam_void(this.nativeObject.pointer);
	}
	native private void fromXml_EVString(long pNativeObject, String filePath);
	///解析参数
	public void fromXml(String filePath)
	{
		String filePathParamValue = filePath;
		fromXml_EVString(this.nativeObject.pointer, filePathParamValue);
	}
	native private void toXml_EVString(long pNativeObject, String filePath);
	///保存参数到xml文档
	public void toXml(String filePath)
	{
		String filePathParamValue = filePath;
		toXml_EVString(this.nativeObject.pointer, filePathParamValue);
	}
	native private void setLocation_ev_real64_ev_real64_ev_real64(long pNativeObject, double lat, double lon, double alt);
	///设置目标定位点
	public void setLocation(double lat, double lon, double alt)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		setLocation_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}
	native private void getLocation_ev_real64_ev_real64_ev_real64(long pNativeObject, long lat, long lon, long alt);
	///获取目标定位点
	public void getLocation(DoublePointer lat, DoublePointer lon, DoublePointer alt)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		getLocation_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}
	native private void setLocalTranform_CVector3_CVector3_CVector3(long pNativeObject, long scale, long rotate, long translate);
	///设置目标局部变换参数,缩放，旋转(角度值),平移
	public void setLocalTranform(com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate, com.earthview.world.spatial.math.Vector3 translate)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long translateParamValue = translate.nativeObject.pointer;
		setLocalTranform_CVector3_CVector3_CVector3(this.nativeObject.pointer, scaleParamValue, rotateParamValue, translateParamValue);
	}
	native private void getLocalTransform_CVector3_CVector3_CVector3(long pNativeObject, long scale, long rotate, long translate);
	///获取目标局部变换参数,缩放，旋转(角度值),平移
	public void getLocalTransform(com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate, com.earthview.world.spatial.math.Vector3 translate)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long translateParamValue = translate.nativeObject.pointer;
		getLocalTransform_CVector3_CVector3_CVector3(this.nativeObject.pointer, scaleParamValue, rotateParamValue, translateParamValue);
	}
	native private void setTextureQuality_ev_bool(long pNativeObject, boolean quality);
	///设置纹理质量为默认（精度高），还是一般（节省内存）
	public void setTextureQuality(boolean quality)
	{
		boolean qualityParamValue = quality;
		setTextureQuality_ev_bool(this.nativeObject.pointer, qualityParamValue);
	}
	native private boolean getTextureQuality_void(long pNativeObject);
	///获取纹理质量设置
	public boolean getTextureQuality()
	{
		boolean returnValue = getTextureQuality_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ModelLODParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelLODParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelLODParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelLODParam obj = null;
 		if(baseObj instanceof ModelLODParam)
		{
			obj = (ModelLODParam)baseObj;
		} else {
			obj = new ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelLODParam");
			obj.increaseCast();
		}

		return obj;
	}
}
