package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型文件加载器，加载目录下所有模型和相关资源
 */
public class MeshFileLoader extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshFileLoader", new MeshFileLoaderClassFactory());
	}

	public MeshFileLoader(com.earthview.world.graphic.SceneManager ref_SceneMnger) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_SceneMngerPtr = new BasePointer(ref_SceneMnger);
		list.add("ref_SceneMnger", ref_SceneMngerPtr.get());
		Create("CMeshFileLoader", list);
	}

	native private boolean loadFiles_EVString(long pNativeObject, String folder);
	/**
	 * 加载需要进行模型分析的目录
	 * @param folder 目录路径
	 * @return ev_bool
	 */
	public boolean loadFiles(String folder)
	{
		String folderParamValue = folder;
		boolean returnValue = loadFiles_EVString(this.nativeObject.pointer, folderParamValue);
		return returnValue;
	}
	native private boolean unloadFiles_void(long pNativeObject);
	/**
	 * 卸载模型分析资源
	 * @param  
	 * @return void
	 */
	public boolean unloadFiles()
	{
		boolean returnValue = unloadFiles_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getMeshFiles_CStringArray(long pNativeObject, long files);
	/**
	 * 获取mesh文件集
	 * @param files 文件路径集
	 * @return ev_bool
	 */
	public void getMeshFiles(com.earthview.world.core.StringArray files)
	{
		long filesParamValue = files.nativeObject.pointer;
		getMeshFiles_CStringArray(this.nativeObject.pointer, filesParamValue);
	}
	native private boolean findFile_EVString_CStringArray(long pNativeObject, String filename, long files);
	/**
	 * 根据文件名查找分析目录下的文件
	 * @param filename 文件名
	 * @param files 文件路径集
	 * @return ev_bool
	 */
	public boolean findFile(String filename, com.earthview.world.core.StringArray files)
	{
		String filenameParamValue = filename;
		long filesParamValue = files.nativeObject.pointer;
		boolean returnValue = findFile_EVString_CStringArray(this.nativeObject.pointer, filenameParamValue, filesParamValue);
		return returnValue;
	}
	native private static String getFilename_EVString(String file);
	/**
	 * 根据文件路径获取文件名
	 * @param file 文件路径
	 * @return EVString
	 */
	public static String getFilename(String file)
	{
		String fileParamValue = file;
		String returnValue = getFilename_EVString(fileParamValue);
		return returnValue;
	}
	native private void getErrors_CStringArray(long pNativeObject, long errors);
	/**
	 * 获取解析相关资源文件时的错误
	 * @param errors 错误集
	 * @return void
	 */
	public void getErrors(com.earthview.world.core.StringArray errors)
	{
		long errorsParamValue = errors.nativeObject.pointer;
		getErrors_CStringArray(this.nativeObject.pointer, errorsParamValue);
	}
	public MeshFileLoader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshFileLoader(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshFileLoader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshFileLoader obj = null;
 		if(baseObj instanceof MeshFileLoader)
		{
			obj = (MeshFileLoader)baseObj;
		} else {
			obj = new MeshFileLoader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshFileLoader");
			obj.increaseCast();
		}

		return obj;
	}
}
