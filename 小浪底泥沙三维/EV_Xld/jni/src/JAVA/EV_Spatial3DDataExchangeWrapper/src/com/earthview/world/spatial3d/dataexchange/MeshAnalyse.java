package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型分析类，负责分析出模型相关的资源文件。被分析的模型应该先通过CMeshFileLoader加载到资源管理器中
 */
public class MeshAnalyse extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshAnalyse", new MeshAnalyseClassFactory());
	}

	public MeshAnalyse(com.earthview.world.graphic.SceneManager ref_SceneMnger) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_SceneMngerPtr = new BasePointer(ref_SceneMnger);
		list.add("ref_SceneMnger", ref_SceneMngerPtr.get());
		Create("CMeshAnalyse", list);
	}

	native private boolean open_EVString_EVString(long pNativeObject, String meshName, String resourceGroup);
	/**
	 * 打开需要分析的模型文件
	 * @param meshName 模型名称，此时该名称的模型应该被加载到资源管理器中
	 * @return ev_bool
	 */
	public boolean open(String meshName, String resourceGroup)
	{
		String meshNameParamValue = meshName;
		String resourceGroupParamValue = resourceGroup;
		boolean returnValue = open_EVString_EVString(this.nativeObject.pointer, meshNameParamValue, resourceGroupParamValue);
		return returnValue;
	}
	native private boolean open_EVString_EVString_EVString(long pNativeObject, String meshName, String resourcePath, String resourceGroup);
	public boolean open(String meshName, String resourcePath, String resourceGroup)
	{
		String meshNameParamValue = meshName;
		String resourcePathParamValue = resourcePath;
		String resourceGroupParamValue = resourceGroup;
		boolean returnValue = open_EVString_EVString_EVString(this.nativeObject.pointer, meshNameParamValue, resourcePathParamValue, resourceGroupParamValue);
		return returnValue;
	}
	native private void close_void(long pNativeObject);
	/**
	 * 关闭当前分析的模型文件
	 * @return ev_bool
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private boolean isExistGPU_void(long pNativeObject);
	/**
	 * 判断是否存在GPU
	 * @return 存在返回true，失败返回fal
	 */
	public boolean isExistGPU()
	{
		boolean returnValue = isExistGPU_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSkeleton_void(long pNativeObject);
	/**
	 * 获取当前模型的骨骼资源文件名
	 * @return EVString
	 */
	public String getSkeleton()
	{
		String returnValue = getSkeleton_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getMaterials_CStringArray(long pNativeObject, long materials);
	/**
	 * 获取当前模型的材质资源文件名集合
	 * @param materials 材质文件名称集
	 * @return void
	 */
	public void getMaterials(com.earthview.world.core.StringArray materials)
	{
		long materialsParamValue = materials.nativeObject.pointer;
		getMaterials_CStringArray(this.nativeObject.pointer, materialsParamValue);
	}
	native private void getTextures_CStringArray(long pNativeObject, long textures);
	/**
	 * 获取当前模型的纹理资源文件名集合
	 * @param textures 纹理文件名称集合
	 * @return void
	 */
	public void getTextures(com.earthview.world.core.StringArray textures)
	{
		long texturesParamValue = textures.nativeObject.pointer;
		getTextures_CStringArray(this.nativeObject.pointer, texturesParamValue);
	}
	native private void getGpus_CStringArray_CStringArray(long pNativeObject, long gpus, long progs);
	/**
	 * 获取当前模型的纹理资源文件名集合
	 * @param gpus GPU文件名称集合
	 * @param progs PROGRAM文件名径集合
	 * @return void
	 */
	public void getGpus(com.earthview.world.core.StringArray gpus, com.earthview.world.core.StringArray progs)
	{
		long gpusParamValue = gpus.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		getGpus_CStringArray_CStringArray(this.nativeObject.pointer, gpusParamValue, progsParamValue);
	}
	native private void getBoundingBox_CAxisAlignedBox(long pNativeObject, long boundingbox);
	/**
	 * 获取模型包围盒
	 * @param  
	 */
	public void getBoundingBox(com.earthview.world.spatial.math.AxisAlignedBox boundingbox)
	{
		long boundingboxParamValue = boundingbox.nativeObject.pointer;
		getBoundingBox_CAxisAlignedBox(this.nativeObject.pointer, boundingboxParamValue);
	}
	public MeshAnalyse(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshAnalyse(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshAnalyse fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshAnalyse obj = null;
 		if(baseObj instanceof MeshAnalyse)
		{
			obj = (MeshAnalyse)baseObj;
		} else {
			obj = new MeshAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshAnalyse");
			obj.increaseCast();
		}

		return obj;
	}
}
