package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 粒子分析类
 */
public class ParticleAnalyse extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::CParticleAnalyse", new ParticleAnalyseClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ParticleAnalyse() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParticleAnalyse", null);
	}

	native private void findParticles_EVString_CStringArray_CStringArray(long pNativeObject, String folder, long partilceFileNames, long particleNames);
	/**
	 * 查找粒子特效
	 * @param folder 文件路径
	 * @param partilceFileNames 文件名队列
	 * @param particleNames 特效名队列
	 */
	public void findParticles(String folder, com.earthview.world.core.StringArray partilceFileNames, com.earthview.world.core.StringArray particleNames)
	{
		String folderParamValue = folder;
		long partilceFileNamesParamValue = partilceFileNames.nativeObject.pointer;
		long particleNamesParamValue = particleNames.nativeObject.pointer;
		findParticles_EVString_CStringArray_CStringArray(this.nativeObject.pointer, folderParamValue, partilceFileNamesParamValue, particleNamesParamValue);
	}
	native private void analyseParticle_EVString_EVString_EVString_EVString_CStringArray_CStringArray_CStringArray_CStringArray(long pNativeObject, String folder, String particleFileName, String particleName, long materilname, long textures, long gpus, long progs, long errors);
	/**
	 * 解析粒子特效
	 * @param folder 文件路径
	 * @param particleFileName 粒子文件名称
	 * @param particleName 粒子名称
	 * @param materilname 材质名称
	 * @param textures 纹理
	 * @param gpus gpus脚本文件名
	 * @param progs progs脚本文件名
	 * @param errors 错误信息
	 */
	public void analyseParticle(String folder, String particleFileName, String particleName, StringPointer materilname, com.earthview.world.core.StringArray textures, com.earthview.world.core.StringArray gpus, com.earthview.world.core.StringArray progs, com.earthview.world.core.StringArray errors)
	{
		String folderParamValue = folder;
		String particleFileNameParamValue = particleFileName;
		String particleNameParamValue = particleName;
		long materilnameParamValue = materilname.nativeObject.pointer;
		long texturesParamValue = textures.nativeObject.pointer;
		long gpusParamValue = gpus.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		long errorsParamValue = errors.nativeObject.pointer;
		analyseParticle_EVString_EVString_EVString_EVString_CStringArray_CStringArray_CStringArray_CStringArray(this.nativeObject.pointer, folderParamValue, particleFileNameParamValue, particleNameParamValue, materilnameParamValue, texturesParamValue, gpusParamValue, progsParamValue, errorsParamValue);
	}
	native private String getFilename_EVString(long pNativeObject, String file);
	/**
	 * 获取文件名
	 * @param file 文件路径
	 * @return 文件名
	 */
	public String getFilename(String file)
	{
		String fileParamValue = file;
		String returnValue = getFilename_EVString(this.nativeObject.pointer, fileParamValue);
		return returnValue;
	}
	public ParticleAnalyse(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleAnalyse(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParticleAnalyse fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleAnalyse obj = null;
 		if(baseObj instanceof ParticleAnalyse)
		{
			obj = (ParticleAnalyse)baseObj;
		} else {
			obj = new ParticleAnalyse(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleAnalyse");
			obj.increaseCast();
		}

		return obj;
	}
}
