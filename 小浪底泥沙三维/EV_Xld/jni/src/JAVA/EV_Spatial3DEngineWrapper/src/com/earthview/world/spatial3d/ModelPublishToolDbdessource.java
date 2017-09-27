package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 目标数据源是数据库类型的
 */
public class ModelPublishToolDbdessource extends com.earthview.world.spatial3d.ModelPublishTool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CModelPublishTool_DBDesSource", new ModelPublishToolDbdessourceClassFactory());
	}

	public ModelPublishToolDbdessource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelPublishTool_DBDesSource", null);
	}

	native private void setDesDataSourcePtr_CModelDataSource(long pNativeObject, long ref_desdatasourceptr);
	/**
	 * 设置目标数据源句柄
	 * @param  
	 */
	public void setDesDataSourcePtr(com.earthview.world.spatial3d.dataset.ModelDataSource ref_desdatasourceptr)
	{
		long ref_desdatasourceptrParamValue = (ref_desdatasourceptr == null ? 0L : ref_desdatasourceptr.nativeObject.pointer);
		setDesDataSourcePtr_CModelDataSource(this.nativeObject.pointer, ref_desdatasourceptrParamValue);
	}
	native private void setDesNodecode_EVString(long pNativeObject, String desnodecode);
	/**
	 * 设置挂载nodecode节点
	 * @param  
	 */
	public void setDesNodecode(String desnodecode)
	{
		String desnodecodeParamValue = desnodecode;
		setDesNodecode_EVString(this.nativeObject.pointer, desnodecodeParamValue);
	}
	public ModelPublishToolDbdessource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelPublishToolDbdessource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelPublishToolDbdessource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelPublishToolDbdessource obj = null;
 		if(baseObj instanceof ModelPublishToolDbdessource)
		{
			obj = (ModelPublishToolDbdessource)baseObj;
		} else {
			obj = new ModelPublishToolDbdessource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelPublishTool_DBDesSource");
			obj.increaseCast();
		}

		return obj;
	}
}
