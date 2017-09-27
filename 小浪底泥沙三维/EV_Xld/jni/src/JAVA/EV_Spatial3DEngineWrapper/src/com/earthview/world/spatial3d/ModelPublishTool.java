package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///跳过冲突数据
public class ModelPublishTool extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CModelPublishTool", new ModelPublishToolClassFactory());
	}

	public ModelPublishTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelPublishTool", null);
	}

	native private void setCModelPulishToolListener_CModelPublishToolListener(long pNativeObject, long ref_pListener);
	/**
	 * 设置发布侦听者
	 * @param EarthView::World::Spatial3D::CModelPublishToolListener 侦听者对象
	 */
	public void setCModelPulishToolListener(com.earthview.world.spatial3d.ModelPublishToolListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setCModelPulishToolListener_CModelPublishToolListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private void startPublish_void(long pNativeObject);
	/**
	 * 开始发布
	 * @param  
	 */
	public void startPublish()
	{
		startPublish_void(this.nativeObject.pointer);
	}
	native private void startPublish_IntVector_StringVector_CEffectInfoVector(long pNativeObject, long modelIDVec, long typeCodesVec, long effectInfoVec);
	/**
	 * 开始发布
	 * @param modelIDVec 需要发布的模型ID
	 * @param typeCodesVec 需要发布的模型分类
	 * @param effectInfoVec 需要发布的特效ID
	 */
	public void startPublish(com.earthview.world.core.IntVector modelIDVec, com.earthview.world.core.StringVector typeCodesVec, com.earthview.world.spatial3d.dataset.EffectInfoVector effectInfoVec)
	{
		long modelIDVecParamValue = modelIDVec.nativeObject.pointer;
		long typeCodesVecParamValue = typeCodesVec.nativeObject.pointer;
		long effectInfoVecParamValue = effectInfoVec.nativeObject.pointer;
		startPublish_IntVector_StringVector_CEffectInfoVector(this.nativeObject.pointer, modelIDVecParamValue, typeCodesVecParamValue, effectInfoVecParamValue);
	}
	native private void stopPublish_void(long pNativeObject);
	/**
	 * 停止发布
	 * @param  
	 */
	public void stopPublish()
	{
		stopPublish_void(this.nativeObject.pointer);
	}
	native private int getDesModelSourceAttrNameAndAttrStructVector_void(long pNativeObject);
	/**
	 * 获取目标数据源中属性表表名和字段结构列表
	 * @param  
	 * @return -1错误
	 */
	public int getDesModelSourceAttrNameAndAttrStructVector()
	{
		int returnValue = getDesModelSourceAttrNameAndAttrStructVector_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSrcModelSourceAttrNameAndAttrStructVector_void(long pNativeObject);
	/**
	 * 获取源数据源中属性表表名和字段结构列表
	 * @param  
	 * @return -1错误
	 */
	public int getSrcModelSourceAttrNameAndAttrStructVector()
	{
		int returnValue = getSrcModelSourceAttrNameAndAttrStructVector_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int processAttrTable_void(long pNativeObject);
	/**
	 * 处理属性表
	 * @param  
	 */
	public int processAttrTable()
	{
		int returnValue = processAttrTable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDesModelSourceNodecodeNameAndAttrNameVector_void(long pNativeObject);
	/**
	 * 获取目标数据源中节点名称和属性表表名列表
	 * @param  
	 * @return -1错误
	 */
	public int getDesModelSourceNodecodeNameAndAttrNameVector()
	{
		int returnValue = getDesModelSourceNodecodeNameAndAttrNameVector_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSrcModelSourceNodecodeNameAndAttrNameVector_void(long pNativeObject);
	/**
	 * 获取源数据源中节点名称和属性表表名列表
	 * @param  
	 * @return -1错误
	 */
	public int getSrcModelSourceNodecodeNameAndAttrNameVector()
	{
		int returnValue = getSrcModelSourceNodecodeNameAndAttrNameVector_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int processNodeCode_void(long pNativeObject);
	/**
	 * 处理nodecode
	 * @param  
	 */
	public int processNodeCode()
	{
		int returnValue = processNodeCode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int calcClashModel_void(long pNativeObject);
	/**
	 * 获取冲突模型数据
	 * @param  
	 */
	public int calcClashModel()
	{
		int returnValue = calcClashModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClashModelTreatWay_ClashModelTreatWay(long pNativeObject, int treatway);
	/**
	 * 设置冲突模型处理办法
	 * @param treatway 处理方法枚举值
	 */
	public void setClashModelTreatWay(com.earthview.world.spatial3d.ClashModelTreatWay treatway)
	{
		int treatwayParamValue = treatway.getValue();
		setClashModelTreatWay_ClashModelTreatWay(this.nativeObject.pointer, treatwayParamValue);
	}
	native private void setCompositorAllSubmesh_ev_bool(long pNativeObject, boolean b);
	public void setCompositorAllSubmesh(boolean b)
	{
		boolean bParamValue = b;
		setCompositorAllSubmesh_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private boolean getNewAttrTableNameAndNewNodecode_EVString_EVString_EVString_EVString(long pNativeObject, String modelname, String nodecode, long newattrtablename, long newnodecode);
	/**
	 * 获取模型导入时最新的属性表名称和nodecode
	 * @param modelname 模型名称
	 * @param nodecode 节点名称
	 * @param newattrtablename 新的属性表名称
	 * @param newnodecode 新的节点
	 * @return 获取成功返回true
	 */
	public boolean getNewAttrTableNameAndNewNodecode(String modelname, String nodecode, StringPointer newattrtablename, StringPointer newnodecode)
	{
		String modelnameParamValue = modelname;
		String nodecodeParamValue = nodecode;
		long newattrtablenameParamValue = newattrtablename.nativeObject.pointer;
		long newnodecodeParamValue = newnodecode.nativeObject.pointer;
		boolean returnValue = getNewAttrTableNameAndNewNodecode_EVString_EVString_EVString_EVString(this.nativeObject.pointer, modelnameParamValue, nodecodeParamValue, newattrtablenameParamValue, newnodecodeParamValue);
		return returnValue;
	}
	native private boolean getDesAttrTableNameAndFieldsByNodeCode_EVString_EVString_CFields(long pNativeObject, String nodecode, long attrtablename, long fields);
	/**
	 * 通过nodecode获取属性表名和字段属性
	 * @param nodecode 节点名称
	 * @param attrtablename 属性表名
	 * @param fields 属性表字段
	 * @return 获取成功返回true
	 */
	public boolean getDesAttrTableNameAndFieldsByNodeCode(String nodecode, StringPointer attrtablename, NativeObjectPointer<com.earthview.world.spatial.geodataset.Fields> fields)
	{
		String nodecodeParamValue = nodecode;
		long attrtablenameParamValue = attrtablename.nativeObject.pointer;
		long fieldsParamValue = fields.nativeObject.pointer;
		boolean returnValue = getDesAttrTableNameAndFieldsByNodeCode_EVString_EVString_CFields(this.nativeObject.pointer, nodecodeParamValue, attrtablenameParamValue, fieldsParamValue);
		return returnValue;
	}
	public ModelPublishTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelPublishTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelPublishTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelPublishTool obj = null;
 		if(baseObj instanceof ModelPublishTool)
		{
			obj = (ModelPublishTool)baseObj;
		} else {
			obj = new ModelPublishTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelPublishTool");
			obj.increaseCast();
		}

		return obj;
	}
}
