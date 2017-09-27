package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 错误码描述对象
 */
public class ModelDataSourceTool extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDataSourceTool", new ModelDataSourceToolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ModelDataSourceTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelDataSourceTool", null);
	}

	/**
	 * 操作类别
	 */
	public enum WorkType implements INativeEnum<WorkType> {
		WT_Export(WorkTypeHelper.ENUM_VALUES[0]),
		WT_Import(WorkTypeHelper.ENUM_VALUES[1]),
		WT_Copy(WorkTypeHelper.ENUM_VALUES[2]);
		private int value;
		WorkType(int i) {
			this.value = i;
		}
		public WorkType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final WorkType toEnum(int retval) {
			if(retval == WT_Export.value){
				return WT_Export;
			}
			else if(retval == WT_Import.value){
				return WT_Import;
			}
			else if(retval == WT_Copy.value){
				return WT_Copy;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class WorkTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private boolean initEnvironment_WorkType(long pNativeObject, int worktype);
	/**
	 * 初始工作环境
	 * @param  
	 * @return true初始化成功,false初始化失败
	 */
	public boolean initEnvironment(com.earthview.world.spatial3dproxy.ModelDataSourceTool.WorkType worktype)
	{
		int worktypeParamValue = worktype.getValue();
		boolean returnValue = initEnvironment_WorkType(this.nativeObject.pointer, worktypeParamValue);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置工作状态
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private boolean isRun_void(long pNativeObject);
	/**
	 * 是否正在工作
	 * @param  
	 * @return true正在工作,false停止工作
	 */
	public boolean isRun()
	{
		boolean returnValue = isRun_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRunable_ev_bool(long pNativeObject, boolean runable);
	/// <summary>
	///  设置是否工作
	/// </summary>
	/// <param name=""runable>true工作，false停止工作</param>
	/// <returns></returns>
	/// <memo></memo>
	public void setRunable(boolean runable)
	{
		boolean runableParamValue = runable;
		setRunable_ev_bool(this.nativeObject.pointer, runableParamValue);
	}
	native private boolean exportModelDataSet_EVString_EVString_EVString(long pNativeObject, String datasourceurl, String datasetname, String exportfolder);
	/**
	 * 导出模型数据集
	 * @param datasourceurl 数据源路径
	 * @param datasetname 数据集名称
	 * @param exportfolder 导出目录
	 * @return true成功，false失败
	 */
	public boolean exportModelDataSet(String datasourceurl, String datasetname, String exportfolder)
	{
		String datasourceurlParamValue = datasourceurl;
		String datasetnameParamValue = datasetname;
		String exportfolderParamValue = exportfolder;
		boolean returnValue = exportModelDataSet_EVString_EVString_EVString(this.nativeObject.pointer, datasourceurlParamValue, datasetnameParamValue, exportfolderParamValue);
		return returnValue;
	}
	native private int percentage_void(long pNativeObject);
	/**
	 * 百分比
	 * @return 返回当前百分比
	 */
	public int percentage()
	{
		int returnValue = percentage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPercentage_ev_int32(long pNativeObject, int percentage);
	/**
	 * 设置百分比
	 * @param percentage 百分比
	 */
	public void setPercentage(int percentage)
	{
		int percentageParamValue = percentage;
		setPercentage_ev_int32(this.nativeObject.pointer, percentageParamValue);
	}
	native private static String getLastError_void();
	/**
	 * 获取错误码
	 * @param  
	 * @return 返回错误描述
	 */
	public static String getLastError()
	{
		String returnValue = getLastError_void();
		return returnValue;
	}
	native private static void setLastErrorID_ev_int32(int errorid);
	/**
	 * 设置错误码
	 * @param errorid 设置错误号
	 */
	public static void setLastErrorID(int errorid)
	{
		int erroridParamValue = errorid;
		setLastErrorID_ev_int32(erroridParamValue);
	}
	public ModelDataSourceTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataSourceTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDataSourceTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataSourceTool obj = null;
 		if(baseObj instanceof ModelDataSourceTool)
		{
			obj = (ModelDataSourceTool)baseObj;
		} else {
			obj = new ModelDataSourceTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelDataSourceTool");
			obj.increaseCast();
		}

		return obj;
	}
}
