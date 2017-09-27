package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型资源映射表，避免某一批模型导入时导入相同资源
 */
public class MeshResourceMap extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshResourceMap", new MeshResourceMapClassFactory());
	}

	public MeshResourceMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshResourceMap", null);
	}

	native private void getMeshNames_CStringArray(long pNativeObject, long meshNames);
	/**
	 * 获取映射表中模型名称集
	 * @return void
	 */
	public void getMeshNames(com.earthview.world.core.StringArray meshNames)
	{
		long meshNamesParamValue = meshNames.nativeObject.pointer;
		getMeshNames_CStringArray(this.nativeObject.pointer, meshNamesParamValue);
	}
	native private boolean addResItem_EVString_CMeshResourceItem(long pNativeObject, String meshName, long res);
	/**
	 * 添加某个模型的资源
	 * @return ev_bool
	 */
	public boolean addResItem(String meshName, com.earthview.world.spatial3d.dataexchange.MeshResourceItem res)
	{
		String meshNameParamValue = meshName;
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		boolean returnValue = addResItem_EVString_CMeshResourceItem(this.nativeObject.pointer, meshNameParamValue, resParamValue);
		return returnValue;
	}
	native private boolean deleteResItem_EVString_CMeshResourceItem(long pNativeObject, String meshName, long res);
	/**
	 * 删除某个模型的资源
	 * @return ev_bool
	 */
	public boolean deleteResItem(String meshName, com.earthview.world.spatial3d.dataexchange.MeshResourceItem res)
	{
		String meshNameParamValue = meshName;
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		boolean returnValue = deleteResItem_EVString_CMeshResourceItem(this.nativeObject.pointer, meshNameParamValue, resParamValue);
		return returnValue;
	}
	native private long getResNum_EVString(long pNativeObject, String meshName);
	/**
	 * 获取某个模型资源数
	 * @return ev_uint32
	 */
	public long getResNum(String meshName)
	{
		String meshNameParamValue = meshName;
		long returnValue = getResNum_EVString(this.nativeObject.pointer, meshNameParamValue);
		return returnValue;
	}
	native private boolean getResItem_EVString_ev_uint32_CMeshResourceItem(long pNativeObject, String meshName, long index, long res);
	/**
	 * 获取某个模型的某个资源
	 * @return ev_bool
	 */
	public boolean getResItem(String meshName, long index, com.earthview.world.spatial3d.dataexchange.MeshResourceItem res)
	{
		String meshNameParamValue = meshName;
		long indexParamValue = index;
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		boolean returnValue = getResItem_EVString_ev_uint32_CMeshResourceItem(this.nativeObject.pointer, meshNameParamValue, indexParamValue, resParamValue);
		return returnValue;
	}
	public MeshResourceMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshResourceMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshResourceMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshResourceMap obj = null;
 		if(baseObj instanceof MeshResourceMap)
		{
			obj = (MeshResourceMap)baseObj;
		} else {
			obj = new MeshResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshResourceMap");
			obj.increaseCast();
		}

		return obj;
	}
}
