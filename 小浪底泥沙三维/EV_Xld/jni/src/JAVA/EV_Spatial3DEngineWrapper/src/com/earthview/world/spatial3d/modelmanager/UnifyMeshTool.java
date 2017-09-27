package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UnifyMeshTool extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool", new UnifyMeshToolClassFactory());
	}

	public UnifyMeshTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUnifyMeshTool", null);
	}

	native private void setWorkParam_IObqDataset_TerrainRevisorVector(long pNativeObject, long pDataset, long terrainRevisors);
	/**
	 * 设置初始化参数
	 * @param pDataset 数据集，只支持本地7z
	 * @param terrainRevisors 推平参数
	 */
	public void setWorkParam(com.earthview.world.spatial3d.modelmanager.Iobqdataset pDataset, com.earthview.world.spatial3d.TerrainRevisorVector terrainRevisors)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		long terrainRevisorsParamValue = terrainRevisors.nativeObject.pointer;
		setWorkParam_IObqDataset_TerrainRevisorVector(this.nativeObject.pointer, pDatasetParamValue, terrainRevisorsParamValue);
	}
	native private void getIntersectTopTile_CStringArray_LodIndexVector(long pNativeObject, long outTileNames, long topLodIndexVec);
	/**
	 * 与所有顶级瓦块求交，获取求交的瓦块名字
	 * @param outTileNames 求交成功的瓦块名字
	 */
	public void getIntersectTopTile(com.earthview.world.core.StringArray outTileNames, com.earthview.world.spatial3d.modelmanager.LodIndexVector topLodIndexVec)
	{
		long outTileNamesParamValue = outTileNames.nativeObject.pointer;
		long topLodIndexVecParamValue = topLodIndexVec.nativeObject.pointer;
		getIntersectTopTile_CStringArray_LodIndexVector(this.nativeObject.pointer, outTileNamesParamValue, topLodIndexVecParamValue);
	}
	native private void unifyAllMeshInTile_EVString_LodIndex(long pNativeObject, String tileName, long pTopLodIndex);
	/**
	 * 推平当前瓦块目录下所有需要推平的mesh
	 * @param tileName 瓦块名
	 */
	public void unifyAllMeshInTile(String tileName, com.earthview.world.spatial3d.modelmanager.LodIndex pTopLodIndex)
	{
		String tileNameParamValue = tileName;
		long pTopLodIndexParamValue = (pTopLodIndex == null ? 0L : pTopLodIndex.nativeObject.pointer);
		unifyAllMeshInTile_EVString_LodIndex(this.nativeObject.pointer, tileNameParamValue, pTopLodIndexParamValue);
	}
	public UnifyMeshTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UnifyMeshTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UnifyMeshTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UnifyMeshTool obj = null;
 		if(baseObj instanceof UnifyMeshTool)
		{
			obj = (UnifyMeshTool)baseObj;
		} else {
			obj = new UnifyMeshTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUnifyMeshTool");
			obj.increaseCast();
		}

		return obj;
	}
}
