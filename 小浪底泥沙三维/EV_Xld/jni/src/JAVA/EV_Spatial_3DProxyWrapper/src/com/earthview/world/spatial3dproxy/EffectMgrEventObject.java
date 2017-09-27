package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效窗口事件类
 */
public class EffectMgrEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectMgrEventObject", new EffectMgrEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCEffectMgrEventObjectProxy", new EffectMgrEventObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectMgrEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEffectMgrEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.EffectMgrEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void createUserType_EVString_EVString_EVString_callback(String datasourceName, String parentCode, String newUserTypeName)
	{
		String datasourceNameParamValue = datasourceName;
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType(datasourceNameParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}

	native private void createUserType_EVString_EVString_EVString(long pNativeObject, String datasourceName, String parentCode, String newUserTypeName);
	/**
	 * 创建用户自定义分类
	 * @param datasourceName 数据库名
	 * @param parentCode 父节点名
	 * @param newUserTypeName 新分类名
	 */
	public void createUserType(String datasourceName, String parentCode, String newUserTypeName)
	{
		String datasourceNameParamValue = datasourceName;
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}
	native private void createUserType_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String parentCode, String newUserTypeName);
	protected void createUserType_NoVirtual(String datasourceName, String parentCode, String newUserTypeName)
	{
		String datasourceNameParamValue = datasourceName;
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}

	protected  void createUserType_IDataSource_EVString_EVString_callback(long ds, String parentCode, String newUserTypeName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType(dsParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}

	native private void createUserType_IDataSource_EVString_EVString(long pNativeObject, long ds, String parentCode, String newUserTypeName);
	/**
	 * 创建用户自定义分类
	 * @param ds 数据库
	 * @param parentCode 父节点名
	 * @param newUserTypeName 新分类名
	 */
	public void createUserType(com.earthview.world.spatial.geodataset.Idatasource ds, String parentCode, String newUserTypeName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}
	native private void createUserType_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String parentCode, String newUserTypeName);
	protected void createUserType_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String parentCode, String newUserTypeName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		createUserType_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, parentCodeParamValue, newUserTypeNameParamValue);
	}

	protected  void onCreateUserType_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateUserType(eParamValue);
	}

	native private void onCreateUserType_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 创建用户自定义分类接收函数
	 * @param e 创建用户自定义分类事件
	 */
	public void onCreateUserType(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateUserType_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateUserType_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateUserType_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateUserType_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onImportFromTemplateDB_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onImportFromTemplateDB(eParamValue);
	}

	native private void onImportFromTemplateDB_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 从模板库导入事件接收函数
	 * @param e 从模板库导入事件
	 */
	public void onImportFromTemplateDB(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onImportFromTemplateDB_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onImportFromTemplateDB_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onImportFromTemplateDB_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onImportFromTemplateDB_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback(String dir, String userTypeCode, String destDatasourceName, long successScriptNames, long errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		String destDatasourceNameParamValue = destDatasourceName;
		com.earthview.world.core.StringArray successScriptNamesParamValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		successScriptNamesParamValue.setDelegate(true);
		successScriptNamesParamValue.setInstancePointer(new InstancePointer(successScriptNames));
		IClassFactory successScriptNamesParamValueClassFactory = GlobalClassFactoryMap.get(successScriptNamesParamValue.getCppInstanceTypeName());
		if (successScriptNamesParamValueClassFactory != null)
		{
			successScriptNamesParamValue.setDelegate(true);
			successScriptNamesParamValue = (com.earthview.world.core.StringArray)successScriptNamesParamValueClassFactory.create();
			successScriptNamesParamValue.setDelegate(true);
			successScriptNamesParamValue.setInstancePointer(new InstancePointer(successScriptNames));
		}
		com.earthview.world.core.StringArray errorArrayParamValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		errorArrayParamValue.setDelegate(true);
		errorArrayParamValue.setInstancePointer(new InstancePointer(errorArray));
		IClassFactory errorArrayParamValueClassFactory = GlobalClassFactoryMap.get(errorArrayParamValue.getCppInstanceTypeName());
		if (errorArrayParamValueClassFactory != null)
		{
			errorArrayParamValue.setDelegate(true);
			errorArrayParamValue = (com.earthview.world.core.StringArray)errorArrayParamValueClassFactory.create();
			errorArrayParamValue.setDelegate(true);
			errorArrayParamValue.setInstancePointer(new InstancePointer(errorArray));
		}
		importFromScript(dirParamValue, userTypeCodeParamValue, destDatasourceNameParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}

	native private void importFromScript_EVString_EVString_EVString_CStringArray_CStringArray(long pNativeObject, String dir, String userTypeCode, String destDatasourceName, long successScriptNames, long errorArray);
	/**
	 * 从文件导入
	 * @param dir 文件路径
	 * @param userTypeCode 用户分类号
	 * @param destDatasourceName 数据库名
	 * @param successScriptNames 成功信息
	 * @param errorArray 失败信息
	 */
	public void importFromScript(String dir, String userTypeCode, String destDatasourceName, com.earthview.world.core.StringArray successScriptNames, com.earthview.world.core.StringArray errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		String destDatasourceNameParamValue = destDatasourceName;
		long successScriptNamesParamValue = successScriptNames.nativeObject.pointer;
		long errorArrayParamValue = errorArray.nativeObject.pointer;
		importFromScript_EVString_EVString_EVString_CStringArray_CStringArray(this.nativeObject.pointer, dirParamValue, userTypeCodeParamValue, destDatasourceNameParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}
	native private void importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_NoVirtual(long pNativeObject, String dir, String userTypeCode, String destDatasourceName, long successScriptNames, long errorArray);
	protected void importFromScript_NoVirtual(String dir, String userTypeCode, String destDatasourceName, com.earthview.world.core.StringArray successScriptNames, com.earthview.world.core.StringArray errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		String destDatasourceNameParamValue = destDatasourceName;
		long successScriptNamesParamValue = successScriptNames.nativeObject.pointer;
		long errorArrayParamValue = errorArray.nativeObject.pointer;
		importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_NoVirtual(this.nativeObject.pointer, dirParamValue, userTypeCodeParamValue, destDatasourceNameParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}

	protected  void importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback(String dir, String userTypeCode, long ds, long successScriptNames, long errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		com.earthview.world.core.StringArray successScriptNamesParamValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		successScriptNamesParamValue.setDelegate(true);
		successScriptNamesParamValue.setInstancePointer(new InstancePointer(successScriptNames));
		IClassFactory successScriptNamesParamValueClassFactory = GlobalClassFactoryMap.get(successScriptNamesParamValue.getCppInstanceTypeName());
		if (successScriptNamesParamValueClassFactory != null)
		{
			successScriptNamesParamValue.setDelegate(true);
			successScriptNamesParamValue = (com.earthview.world.core.StringArray)successScriptNamesParamValueClassFactory.create();
			successScriptNamesParamValue.setDelegate(true);
			successScriptNamesParamValue.setInstancePointer(new InstancePointer(successScriptNames));
		}
		com.earthview.world.core.StringArray errorArrayParamValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		errorArrayParamValue.setDelegate(true);
		errorArrayParamValue.setInstancePointer(new InstancePointer(errorArray));
		IClassFactory errorArrayParamValueClassFactory = GlobalClassFactoryMap.get(errorArrayParamValue.getCppInstanceTypeName());
		if (errorArrayParamValueClassFactory != null)
		{
			errorArrayParamValue.setDelegate(true);
			errorArrayParamValue = (com.earthview.world.core.StringArray)errorArrayParamValueClassFactory.create();
			errorArrayParamValue.setDelegate(true);
			errorArrayParamValue.setInstancePointer(new InstancePointer(errorArray));
		}
		importFromScript(dirParamValue, userTypeCodeParamValue, dsParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}

	native private void importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray(long pNativeObject, String dir, String userTypeCode, long ds, long successScriptNames, long errorArray);
	/**
	 * 从文件导入
	 * @param dir 文件路径
	 * @param userTypeCode 用户分类号
	 * @param ds 数据库
	 * @param successScriptNames 成功信息
	 * @param errorArray 失败信息
	 */
	public void importFromScript(String dir, String userTypeCode, com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.core.StringArray successScriptNames, com.earthview.world.core.StringArray errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long successScriptNamesParamValue = successScriptNames.nativeObject.pointer;
		long errorArrayParamValue = errorArray.nativeObject.pointer;
		importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray(this.nativeObject.pointer, dirParamValue, userTypeCodeParamValue, dsParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}
	native private void importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_NoVirtual(long pNativeObject, String dir, String userTypeCode, long ds, long successScriptNames, long errorArray);
	protected void importFromScript_NoVirtual(String dir, String userTypeCode, com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.core.StringArray successScriptNames, com.earthview.world.core.StringArray errorArray)
	{
		String dirParamValue = dir;
		String userTypeCodeParamValue = userTypeCode;
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long successScriptNamesParamValue = successScriptNames.nativeObject.pointer;
		long errorArrayParamValue = errorArray.nativeObject.pointer;
		importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_NoVirtual(this.nativeObject.pointer, dirParamValue, userTypeCodeParamValue, dsParamValue, successScriptNamesParamValue, errorArrayParamValue);
	}

	protected  boolean exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback(long effectId, long effectDataSource, String exportPath, boolean overrideFile)
	{
		long effectIdParamValue = effectId;
		com.earthview.world.spatial3d.dataset.EffectDataSource effectDataSourceParamValue = (effectDataSource == 0L ? null : new com.earthview.world.spatial3d.dataset.EffectDataSource(CreatedWhenConstruct.CWC_NotToCreate));
		if(effectDataSourceParamValue != null)
		{
		effectDataSourceParamValue.setDelegate(true);
		effectDataSourceParamValue.setInstancePointer(new InstancePointer(effectDataSource));
		IClassFactory effectDataSourceParamValueClassFactory = GlobalClassFactoryMap.get(effectDataSourceParamValue.getCppInstanceTypeName());
		if (effectDataSourceParamValueClassFactory != null)
		{
			effectDataSourceParamValue.setDelegate(true);
			effectDataSourceParamValue = (com.earthview.world.spatial3d.dataset.EffectDataSource)effectDataSourceParamValueClassFactory.create();
			effectDataSourceParamValue.setDelegate(true);
			effectDataSourceParamValue.setInstancePointer(new InstancePointer(effectDataSource));
		}
		}
		String exportPathParamValue = exportPath;
		boolean overrideFileParamValue = overrideFile;
		boolean returnValue = exportEffectToLocal(effectIdParamValue, effectDataSourceParamValue, exportPathParamValue, overrideFileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool(long pNativeObject, long effectId, long effectDataSource, String exportPath, boolean overrideFile);
	/**
	 * 从文件导入
	 * @param effectId 要导出的特效ID
	 * @param effectDataSource 特效数据源
	 * @param exportPath 路径
	 * @param overrideFile 是否覆盖名称相同的文件
	 * @return bool，成功导出为TRUE,未成功导出为FALSE
	 */
	public boolean exportEffectToLocal(long effectId, com.earthview.world.spatial3d.dataset.EffectDataSource effectDataSource, String exportPath, boolean overrideFile)
	{
		long effectIdParamValue = effectId;
		long effectDataSourceParamValue = (effectDataSource == null ? 0L : effectDataSource.nativeObject.pointer);
		String exportPathParamValue = exportPath;
		boolean overrideFileParamValue = overrideFile;
		boolean returnValue = exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool(this.nativeObject.pointer, effectIdParamValue, effectDataSourceParamValue, exportPathParamValue, overrideFileParamValue);
		return returnValue;
	}
	native private boolean exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_NoVirtual(long pNativeObject, long effectId, long effectDataSource, String exportPath, boolean overrideFile);
	protected boolean exportEffectToLocal_NoVirtual(long effectId, com.earthview.world.spatial3d.dataset.EffectDataSource effectDataSource, String exportPath, boolean overrideFile)
	{
		long effectIdParamValue = effectId;
		long effectDataSourceParamValue = (effectDataSource == null ? 0L : effectDataSource.nativeObject.pointer);
		String exportPathParamValue = exportPath;
		boolean overrideFileParamValue = overrideFile;
		boolean returnValue = exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_NoVirtual(this.nativeObject.pointer, effectIdParamValue, effectDataSourceParamValue, exportPathParamValue, overrideFileParamValue);
		return returnValue;
	}

	native private void stopImportFromScript_ev_bool(long pNativeObject, boolean val);
	/**
	 * 停止从脚本文件导入
	 * @param val 是否停止导入
	 */
	public void stopImportFromScript(boolean val)
	{
		boolean valParamValue = val;
		stopImportFromScript_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	protected  void onImportFromScript_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onImportFromScript(eParamValue);
	}

	native private void onImportFromScript_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 从文件导入事件接收函数
	 * @param e 从文件导入事件
	 */
	public void onImportFromScript(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onImportFromScript_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onImportFromScript_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onImportFromScript_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onImportFromScript_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onExportToTemplateDB_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onExportToTemplateDB(eParamValue);
	}

	native private void onExportToTemplateDB_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 导出到模板库事件接收函数
	 * @param e 导出到模板库事件
	 */
	public void onExportToTemplateDB(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onExportToTemplateDB_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onExportToTemplateDB_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onExportToTemplateDB_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onExportToTemplateDB_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback(String datasourceName, String name, String userTypeCode, int type, long parentEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		com.earthview.world.spatial3d.dataset.EffectType typeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(type);
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect(datasourceNameParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}

	native private void createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32(long pNativeObject, String datasourceName, String name, String userTypeCode, int type, long parentEffectId);
	/**
	 * 创建新特效
	 * @param datasourceName 数据库名称
	 * @param name 特效名称
	 * @param userTypeCode 用户分类号
	 * @param type 特效类型
	 * @param parentEffectId 特效父节点ID
	 */
	public void createNewEffect(String datasourceName, String name, String userTypeCode, com.earthview.world.spatial3d.dataset.EffectType type, long parentEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		int typeParamValue = type.getValue();
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32(this.nativeObject.pointer, datasourceNameParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}
	native private void createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_NoVirtual(long pNativeObject, String datasourceName, String name, String userTypeCode, int type, long parentEffectId);
	protected void createNewEffect_NoVirtual(String datasourceName, String name, String userTypeCode, com.earthview.world.spatial3d.dataset.EffectType type, long parentEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		int typeParamValue = type.getValue();
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}

	protected  void createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback(long ds, String name, String userTypeCode, int type, long parentEffectId)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		com.earthview.world.spatial3d.dataset.EffectType typeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(type);
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect(dsParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}

	native private void createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32(long pNativeObject, long ds, String name, String userTypeCode, int type, long parentEffectId);
	/**
	 * 创建新特效
	 * @param ds 数据库
	 * @param name 特效名称
	 * @param userTypeCode 用户分类号
	 * @param type 特效类型
	 * @param parentEffectId 特效父节点ID
	 */
	public void createNewEffect(com.earthview.world.spatial.geodataset.Idatasource ds, String name, String userTypeCode, com.earthview.world.spatial3d.dataset.EffectType type, long parentEffectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		int typeParamValue = type.getValue();
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32(this.nativeObject.pointer, dsParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}
	native private void createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_NoVirtual(long pNativeObject, long ds, String name, String userTypeCode, int type, long parentEffectId);
	protected void createNewEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String name, String userTypeCode, com.earthview.world.spatial3d.dataset.EffectType type, long parentEffectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		int typeParamValue = type.getValue();
		long parentEffectIdParamValue = parentEffectId;
		createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_NoVirtual(this.nativeObject.pointer, dsParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
	}

	protected  void onCreateNewEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateNewEffect(eParamValue);
	}

	native private void onCreateNewEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 创建新特效事件接收函数
	 * @param e 创建新特效事件
	 */
	public void onCreateNewEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateNewEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateNewEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateNewEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateNewEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void renameUserType_EVString_EVString_EVString_callback(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType(datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameUserType_EVString_EVString_EVString(long pNativeObject, String datasourceName, String code, String newName);
	/**
	 * 用户分类重命名
	 * @param datasourceName 数据库名称
	 * @param code 用户分类号
	 * @param newName 新用户自定义类型名称
	 */
	public void renameUserType(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameUserType_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String code, String newName);
	protected void renameUserType_NoVirtual(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	protected  void renameUserType_IDataSource_EVString_EVString_callback(long ds, String code, String newName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType(dsParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameUserType_IDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 用户分类重命名
	 * @param ds 数据库
	 * @param code 用户分类号
	 * @param newName 新用户分类名称
	 */
	public void renameUserType(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameUserType_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String code, String newName);
	protected void renameUserType_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameUserType_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}

	protected  void onRenameUserType_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRenameUserType(eParamValue);
	}

	native private void onRenameUserType_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 重命名用户分类事件接收函数
	 * @param e 重命名用户分类事件
	 */
	public void onRenameUserType(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameUserType_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRenameUserType_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onRenameUserType_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameUserType_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void renameBlendEffect_EVString_EVString_EVString_callback(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect(datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameBlendEffect_EVString_EVString_EVString(long pNativeObject, String datasourceName, String code, String newName);
	/**
	 * 复合特效重命名
	 * @param datasourceName 数据库名
	 * @param code 复合特效ID
	 * @param newName 新复合特效名称
	 */
	public void renameBlendEffect(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameBlendEffect_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String code, String newName);
	protected void renameBlendEffect_NoVirtual(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	protected  void renameBlendEffect_IDataSource_EVString_EVString_callback(long ds, String code, String newName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect(dsParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameBlendEffect_IDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 复合特效重命名
	 * @param ds 数据库
	 * @param code 复合特效ID
	 * @param newName 新复合特效名称
	 */
	public void renameBlendEffect(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameBlendEffect_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String code, String newName);
	protected void renameBlendEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBlendEffect_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}

	protected  void onRenameBlendEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRenameBlendEffect(eParamValue);
	}

	native private void onRenameBlendEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 重命名复合特效事件接收函数
	 * @param e 重命名复合特效事件
	 */
	public void onRenameBlendEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameBlendEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRenameBlendEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onRenameBlendEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameBlendEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void renameSingleEffect_EVString_EVString_EVString_callback(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect(datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameSingleEffect_EVString_EVString_EVString(long pNativeObject, String datasourceName, String code, String newName);
	/**
	 * 独立特效重命名
	 * @param datasourceName 数据库名称
	 * @param code 独立特效ID
	 * @param newName 新独立特效名称
	 */
	public void renameSingleEffect(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameSingleEffect_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String code, String newName);
	protected void renameSingleEffect_NoVirtual(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	protected  void copyNewEffect_EVString_ev_uint32_EVString_callback(String datasourceName, long effectId, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect(datasourceNameParamValue, effectIdParamValue, newNameParamValue);
	}

	native private void copyNewEffect_EVString_ev_uint32_EVString(long pNativeObject, String datasourceName, long effectId, String newName);
	/**
	 * 从现有特效拷贝出新特效
	 * @param datasourceName 数据库名称
	 * @param code 特效ID
	 * @param newName 新名称
	 */
	public void copyNewEffect(String datasourceName, long effectId, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect_EVString_ev_uint32_EVString(this.nativeObject.pointer, datasourceNameParamValue, effectIdParamValue, newNameParamValue);
	}
	native private void copyNewEffect_EVString_ev_uint32_EVString_NoVirtual(long pNativeObject, String datasourceName, long effectId, String newName);
	protected void copyNewEffect_NoVirtual(String datasourceName, long effectId, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect_EVString_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, effectIdParamValue, newNameParamValue);
	}

	protected  void copyNewEffect_IDataSource_ev_uint32_EVString_callback(long ds, long effectId, String newName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect(dsParamValue, effectIdParamValue, newNameParamValue);
	}

	native private void copyNewEffect_IDataSource_ev_uint32_EVString(long pNativeObject, long ds, long effectId, String newName);
	/**
	 * 从现有特效拷贝出新特效
	 * @param datasourceName 数据库指针
	 * @param code 特效ID
	 * @param newName 新名称
	 */
	public void copyNewEffect(com.earthview.world.spatial.geodataset.Idatasource ds, long effectId, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect_IDataSource_ev_uint32_EVString(this.nativeObject.pointer, dsParamValue, effectIdParamValue, newNameParamValue);
	}
	native private void copyNewEffect_IDataSource_ev_uint32_EVString_NoVirtual(long pNativeObject, long ds, long effectId, String newName);
	protected void copyNewEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long effectId, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		copyNewEffect_IDataSource_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, effectIdParamValue, newNameParamValue);
	}

	protected  void renameSingleEffect_IDataSource_EVString_EVString_callback(long ds, String code, String newName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect(dsParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameSingleEffect_IDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 独立特效重命名
	 * @param ds 数据库
	 * @param code 独立特效ID
	 * @param newName 新独立特效名称
	 */
	public void renameSingleEffect(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameSingleEffect_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String code, String newName);
	protected void renameSingleEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameSingleEffect_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}

	protected  void onRenameSingleEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRenameSingleEffect(eParamValue);
	}

	native private void onRenameSingleEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 重命名独立特效事件接收函数
	 * @param e 重命名独立特效事件
	 */
	public void onRenameSingleEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameSingleEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRenameSingleEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onRenameSingleEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameSingleEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void renameBEChild_EVString_EVString_EVString_callback(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild(datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameBEChild_EVString_EVString_EVString(long pNativeObject, String datasourceName, String code, String newName);
	/**
	 * 复合特效子特效重命名
	 * @param datasourceName 数据库名称
	 * @param code 复合特效子特效ID
	 * @param newName 新复合特效子特效名称
	 */
	public void renameBEChild(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameBEChild_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String code, String newName);
	protected void renameBEChild_NoVirtual(String datasourceName, String code, String newName)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue, newNameParamValue);
	}

	protected  void renameBEChild_IDataSource_EVString_EVString_callback(long ds, String code, String newName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild(dsParamValue, codeParamValue, newNameParamValue);
	}

	native private void renameBEChild_IDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 复合特效子特效重命名
	 * @param ds 数据库
	 * @param code 复合特效子特效ID
	 * @param newName 新复合特效子特效名称
	 */
	public void renameBEChild(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}
	native private void renameBEChild_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String code, String newName);
	protected void renameBEChild_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		renameBEChild_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
	}

	protected  void onRenameBEChildEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRenameBEChildEffect(eParamValue);
	}

	native private void onRenameBEChildEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 重命名复合特效子特效事件接收函数
	 * @param e 重命名复合特效子特效事件
	 */
	public void onRenameBEChildEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameBEChildEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRenameBEChildEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onRenameBEChildEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRenameBEChildEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void deleteUserType_EVString_EVString_callback(String datasourceName, String code)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		deleteUserType(datasourceNameParamValue, codeParamValue);
	}

	native private void deleteUserType_EVString_EVString(long pNativeObject, String datasourceName, String code);
	/**
	 * /删除用户分类/
	 * @param datasourceName 数据库名称
	 * @param code 用户分类ID
	 */
	public void deleteUserType(String datasourceName, String code)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		deleteUserType_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue);
	}
	native private void deleteUserType_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String code);
	protected void deleteUserType_NoVirtual(String datasourceName, String code)
	{
		String datasourceNameParamValue = datasourceName;
		String codeParamValue = code;
		deleteUserType_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, codeParamValue);
	}

	protected  void deleteUserType_IDataSource_EVString_callback(long ds, String code)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String codeParamValue = code;
		deleteUserType(dsParamValue, codeParamValue);
	}

	native private void deleteUserType_IDataSource_EVString(long pNativeObject, long ds, String code);
	/**
	 * 删除用户分类
	 * @param ds 数据库
	 * @param code 用户分类ID
	 */
	public void deleteUserType(com.earthview.world.spatial.geodataset.Idatasource ds, String code)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		deleteUserType_IDataSource_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue);
	}
	native private void deleteUserType_IDataSource_EVString_NoVirtual(long pNativeObject, long ds, String code);
	protected void deleteUserType_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String code)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		deleteUserType_IDataSource_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, codeParamValue);
	}

	protected  void onDeleteUserType_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onDeleteUserType(eParamValue);
	}

	native private void onDeleteUserType_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 删除用户分类事件接收函数
	 * @param e 删除用户分类事件
	 */
	public void onDeleteUserType(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onDeleteUserType_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onDeleteUserType_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onDeleteUserType_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onDeleteUserType_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback(String datasourceName, long parentEffectId, long effectId, int type)
	{
		String datasourceNameParamValue = datasourceName;
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		com.earthview.world.spatial3d.dataset.EffectType typeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(type);
		deleteEffect(datasourceNameParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}

	native private void deleteEffect_EVString_ev_uint32_ev_uint32_EffectType(long pNativeObject, String datasourceName, long parentEffectId, long effectId, int type);
	/**
	 * 删除特效
	 * @param datasourceName 数据库名称
	 * @param parentEffectId 父节点ID
	 * @param effectId 特效ID
	 * @param type 特效类型
	 */
	public void deleteEffect(String datasourceName, long parentEffectId, long effectId, com.earthview.world.spatial3d.dataset.EffectType type)
	{
		String datasourceNameParamValue = datasourceName;
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		int typeParamValue = type.getValue();
		deleteEffect_EVString_ev_uint32_ev_uint32_EffectType(this.nativeObject.pointer, datasourceNameParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}
	native private void deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_NoVirtual(long pNativeObject, String datasourceName, long parentEffectId, long effectId, int type);
	protected void deleteEffect_NoVirtual(String datasourceName, long parentEffectId, long effectId, com.earthview.world.spatial3d.dataset.EffectType type)
	{
		String datasourceNameParamValue = datasourceName;
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		int typeParamValue = type.getValue();
		deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}

	protected  void deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback(long ds, long parentEffectId, long effectId, int type)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		com.earthview.world.spatial3d.dataset.EffectType typeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(type);
		deleteEffect(dsParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}

	native private void deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType(long pNativeObject, long ds, long parentEffectId, long effectId, int type);
	/**
	 * 删除特效
	 * @param ds 数据库
	 * @param parentEffectId 父节点ID
	 * @param effectId 特效ID
	 * @param type 特效类型
	 */
	public void deleteEffect(com.earthview.world.spatial.geodataset.Idatasource ds, long parentEffectId, long effectId, com.earthview.world.spatial3d.dataset.EffectType type)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		int typeParamValue = type.getValue();
		deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType(this.nativeObject.pointer, dsParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}
	native private void deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_NoVirtual(long pNativeObject, long ds, long parentEffectId, long effectId, int type);
	protected void deleteEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long parentEffectId, long effectId, com.earthview.world.spatial3d.dataset.EffectType type)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		int typeParamValue = type.getValue();
		deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_NoVirtual(this.nativeObject.pointer, dsParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
	}

	protected  void onDeleteEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onDeleteEffect(eParamValue);
	}

	native private void onDeleteEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 删除特效事件接收函数
	 * @param e 删除特效事件
	 */
	public void onDeleteEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onDeleteEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onDeleteEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onDeleteEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onDeleteEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback(String datasourceName, long editEffectId, long dragEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect(datasourceNameParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}

	native private void addEffectToBlendEffect_EVString_ev_uint32_ev_uint32(long pNativeObject, String datasourceName, long editEffectId, long dragEffectId);
	/**
	 * 添加特效到复合特效
	 * @param datasourceName 数据库名称
	 * @param editEffectId 复合特效ID
	 * @param dragEffectId 添加的特效的ID
	 */
	public void addEffectToBlendEffect(String datasourceName, long editEffectId, long dragEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect_EVString_ev_uint32_ev_uint32(this.nativeObject.pointer, datasourceNameParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}
	native private void addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, String datasourceName, long editEffectId, long dragEffectId);
	protected void addEffectToBlendEffect_NoVirtual(String datasourceName, long editEffectId, long dragEffectId)
	{
		String datasourceNameParamValue = datasourceName;
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}

	protected  void addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback(long ds, long editEffectId, long dragEffectId)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect(dsParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}

	native private void addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32(long pNativeObject, long ds, long editEffectId, long dragEffectId);
	/**
	 * 添加特效到复合特效
	 * @param ds 数据库
	 * @param editEffectId 复合特效ID
	 * @param dragEffectId 添加的特效的ID
	 */
	public void addEffectToBlendEffect(com.earthview.world.spatial.geodataset.Idatasource ds, long editEffectId, long dragEffectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32(this.nativeObject.pointer, dsParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}
	native private void addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long ds, long editEffectId, long dragEffectId);
	protected void addEffectToBlendEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long editEffectId, long dragEffectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, dsParamValue, editEffectIdParamValue, dragEffectIdParamValue);
	}

	protected  void onAddEffectToBlendEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onAddEffectToBlendEffect(eParamValue);
	}

	native private void onAddEffectToBlendEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 添加特效到复合特效事件接受函数
	 * @param e 添加特效到复合特效事件
	 */
	public void onAddEffectToBlendEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddEffectToBlendEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onAddEffectToBlendEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onAddEffectToBlendEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddEffectToBlendEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	native private long addEffectToBlendEffect_IDataSource_ev_uint32_CEffectInfo(long pNativeObject, long ds, long editEffectId, long info);
	/**
	 * 添加特效到复合特效
	 * @param ds 数据库
	 * @param editEffectId 复合特效ID
	 * @param dragEffectId 添加的特效的ID
	 * @param info 添加的特效的信息
	 * @return 新的复合特效信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo addEffectToBlendEffect(com.earthview.world.spatial.geodataset.Idatasource ds, long editEffectId, com.earthview.world.spatial3d.dataset.EffectInfo info)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long editEffectIdParamValue = editEffectId;
		long infoParamValue = info.nativeObject.pointer;
		long returnValue = addEffectToBlendEffect_IDataSource_ev_uint32_CEffectInfo(this.nativeObject.pointer, dsParamValue, editEffectIdParamValue, infoParamValue);
		com.earthview.world.spatial3d.dataset.EffectInfo __returnValue = new com.earthview.world.spatial3d.dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEffectInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEffectInfo");
		}
		return __returnValue;
	}
	protected  boolean isExistName_EVString_EVString_EVString_EffectType_EVString_callback(String dataSourceName, String effectName, String typeCode, int effectType, String blendeffectName)
	{
		String dataSourceNameParamValue = dataSourceName;
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		com.earthview.world.spatial3d.dataset.EffectType effectTypeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(effectType);
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName(dataSourceNameParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExistName_EVString_EVString_EVString_EffectType_EVString(long pNativeObject, String dataSourceName, String effectName, String typeCode, int effectType, String blendeffectName);
	/**
	 * 判断是否重名
	 * @param dataSourceName 数据库名称
	 * @param effectName 特效名称
	 * @param  effectType 特效类型
	 * @param blendeffectName 
	 * @return 重名返回true,不重名返回false
	 */
	public boolean isExistName(String dataSourceName, String effectName, String typeCode, com.earthview.world.spatial3d.dataset.EffectType effectType, String blendeffectName)
	{
		String dataSourceNameParamValue = dataSourceName;
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		int effectTypeParamValue = effectType.getValue();
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName_EVString_EVString_EVString_EffectType_EVString(this.nativeObject.pointer, dataSourceNameParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		return returnValue;
	}
	native private boolean isExistName_EVString_EVString_EVString_EffectType_EVString_NoVirtual(long pNativeObject, String dataSourceName, String effectName, String typeCode, int effectType, String blendeffectName);
	protected boolean isExistName_NoVirtual(String dataSourceName, String effectName, String typeCode, com.earthview.world.spatial3d.dataset.EffectType effectType, String blendeffectName)
	{
		String dataSourceNameParamValue = dataSourceName;
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		int effectTypeParamValue = effectType.getValue();
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName_EVString_EVString_EVString_EffectType_EVString_NoVirtual(this.nativeObject.pointer, dataSourceNameParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		return returnValue;
	}

	protected  boolean isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback(long ds, String effectName, String typeCode, int effectType, String blendeffectName)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		com.earthview.world.spatial3d.dataset.EffectType effectTypeParamValue = com.earthview.world.spatial3d.dataset.EffectType.toEnum(effectType);
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName(dsParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExistName_IDataSource_EVString_EVString_EffectType_EVString(long pNativeObject, long ds, String effectName, String typeCode, int effectType, String blendeffectName);
	/**
	 * 判断是否重名
	 * @param ds 数据库
	 * @param effectName 特效名称
	 * @param typeCode 用户分类类型
	 * @param  effectType 特效类型
	 * @param blendeffectName 
	 * @return 重名返回true,不重名返回false
	 */
	public boolean isExistName(com.earthview.world.spatial.geodataset.Idatasource ds, String effectName, String typeCode, com.earthview.world.spatial3d.dataset.EffectType effectType, String blendeffectName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		int effectTypeParamValue = effectType.getValue();
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName_IDataSource_EVString_EVString_EffectType_EVString(this.nativeObject.pointer, dsParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		return returnValue;
	}
	native private boolean isExistName_IDataSource_EVString_EVString_EffectType_EVString_NoVirtual(long pNativeObject, long ds, String effectName, String typeCode, int effectType, String blendeffectName);
	protected boolean isExistName_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String effectName, String typeCode, com.earthview.world.spatial3d.dataset.EffectType effectType, String blendeffectName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String effectNameParamValue = effectName;
		String typeCodeParamValue = typeCode;
		int effectTypeParamValue = effectType.getValue();
		String blendeffectNameParamValue = blendeffectName;
		boolean returnValue = isExistName_IDataSource_EVString_EVString_EffectType_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, effectNameParamValue, typeCodeParamValue, effectTypeParamValue, blendeffectNameParamValue);
		return returnValue;
	}

	protected  void addEffectToUserType_EVString_ev_uint32_EVString_callback(String datasourceName, long srcItemId, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType(datasourceNameParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}

	native private void addEffectToUserType_EVString_ev_uint32_EVString(long pNativeObject, String datasourceName, long srcItemId, String dstUserTypeCode);
	/**
	 * 添加特效到用户分类下
	 * @param datasourceName 数据库名称
	 * @param srcItemId 特效ID
	 * @param dstUserTypeCode 用户分类号
	 */
	public void addEffectToUserType(String datasourceName, long srcItemId, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType_EVString_ev_uint32_EVString(this.nativeObject.pointer, datasourceNameParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}
	native private void addEffectToUserType_EVString_ev_uint32_EVString_NoVirtual(long pNativeObject, String datasourceName, long srcItemId, String dstUserTypeCode);
	protected void addEffectToUserType_NoVirtual(String datasourceName, long srcItemId, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType_EVString_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}

	protected  void addEffectToUserType_IDataSource_ev_uint32_EVString_callback(long ds, long srcItemId, String dstUserTypeCode)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType(dsParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}

	native private void addEffectToUserType_IDataSource_ev_uint32_EVString(long pNativeObject, long ds, long srcItemId, String dstUserTypeCode);
	/**
	 * 添加特效到用户分类下
	 * @param ds 数据库
	 * @param srcItemId ID
	 * @param dstUserTypeCode 用户分类号
	 */
	public void addEffectToUserType(com.earthview.world.spatial.geodataset.Idatasource ds, long srcItemId, String dstUserTypeCode)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType_IDataSource_ev_uint32_EVString(this.nativeObject.pointer, dsParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}
	native private void addEffectToUserType_IDataSource_ev_uint32_EVString_NoVirtual(long pNativeObject, long ds, long srcItemId, String dstUserTypeCode);
	protected void addEffectToUserType_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long srcItemId, String dstUserTypeCode)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long srcItemIdParamValue = srcItemId;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addEffectToUserType_IDataSource_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, srcItemIdParamValue, dstUserTypeCodeParamValue);
	}

	protected  void onAddEffectToUserType_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onAddEffectToUserType(eParamValue);
	}

	native private void onAddEffectToUserType_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 添加特效到用户分类下事件处理
	 * @param e 添加特效到用户分类下事件
	 */
	public void onAddEffectToUserType(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddEffectToUserType_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onAddEffectToUserType_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onAddEffectToUserType_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddEffectToUserType_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void addUserTypeToUserType_EVString_EVString_EVString_callback(String datasourceName, String srcUserTypeCode, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType(datasourceNameParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}

	native private void addUserTypeToUserType_EVString_EVString_EVString(long pNativeObject, String datasourceName, String srcUserTypeCode, String dstUserTypeCode);
	/**
	 * 添加用户分类到用户分类下
	 * @param datasourceName 数据库名称
	 * @param srcUserTypeCode 添加的用户分类号
	 * @param dstUserTypeCode 目标用户分类号
	 */
	public void addUserTypeToUserType(String datasourceName, String srcUserTypeCode, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType_EVString_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}
	native private void addUserTypeToUserType_EVString_EVString_EVString_NoVirtual(long pNativeObject, String datasourceName, String srcUserTypeCode, String dstUserTypeCode);
	protected void addUserTypeToUserType_NoVirtual(String datasourceName, String srcUserTypeCode, String dstUserTypeCode)
	{
		String datasourceNameParamValue = datasourceName;
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}

	protected  void addUserTypeToUserType_IDataSource_EVString_EVString_callback(long ds, String srcUserTypeCode, String dstUserTypeCode)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType(dsParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}

	native private void addUserTypeToUserType_IDataSource_EVString_EVString(long pNativeObject, long ds, String srcUserTypeCode, String dstUserTypeCode);
	/**
	 * 添加用户分类到用户分类下
	 * @param ds 数据库
	 * @param srcUserTypeCode 添加的用户分类号
	 * @param dstUserTypeCode 目标用户分类号
	 */
	public void addUserTypeToUserType(com.earthview.world.spatial.geodataset.Idatasource ds, String srcUserTypeCode, String dstUserTypeCode)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}
	native private void addUserTypeToUserType_IDataSource_EVString_EVString_NoVirtual(long pNativeObject, long ds, String srcUserTypeCode, String dstUserTypeCode);
	protected void addUserTypeToUserType_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String srcUserTypeCode, String dstUserTypeCode)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String srcUserTypeCodeParamValue = srcUserTypeCode;
		String dstUserTypeCodeParamValue = dstUserTypeCode;
		addUserTypeToUserType_IDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, srcUserTypeCodeParamValue, dstUserTypeCodeParamValue);
	}

	protected  void onAddUserTypeToUserType_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onAddUserTypeToUserType(eParamValue);
	}

	native private void onAddUserTypeToUserType_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 添加用户分类到用户分类下事件处理函数
	 * @param e 添加用户分类到用户分类下事件
	 */
	public void onAddUserTypeToUserType(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddUserTypeToUserType_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onAddUserTypeToUserType_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onAddUserTypeToUserType_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onAddUserTypeToUserType_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void saveEffect_EVString_CEffect_callback(String datasourceName, long effect)
	{
		String datasourceNameParamValue = datasourceName;
		com.earthview.world.spatial3d.effectmanager.Effect effectParamValue = (effect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(effectParamValue != null)
		{
		effectParamValue.setDelegate(true);
		effectParamValue.setInstancePointer(new InstancePointer(effect));
		IClassFactory effectParamValueClassFactory = GlobalClassFactoryMap.get(effectParamValue.getCppInstanceTypeName());
		if (effectParamValueClassFactory != null)
		{
			effectParamValue.setDelegate(true);
			effectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)effectParamValueClassFactory.create();
			effectParamValue.setDelegate(true);
			effectParamValue.setInstancePointer(new InstancePointer(effect));
		}
		}
		saveEffect(datasourceNameParamValue, effectParamValue);
	}

	native private void saveEffect_EVString_CEffect(long pNativeObject, String datasourceName, long effect);
	/**
	 * /保存特效/
	 * @param datasourceName 数据库名称
	 * @param effect 特效
	 */
	public void saveEffect(String datasourceName, com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		String datasourceNameParamValue = datasourceName;
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		saveEffect_EVString_CEffect(this.nativeObject.pointer, datasourceNameParamValue, effectParamValue);
	}
	native private void saveEffect_EVString_CEffect_NoVirtual(long pNativeObject, String datasourceName, long effect);
	protected void saveEffect_NoVirtual(String datasourceName, com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		String datasourceNameParamValue = datasourceName;
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		saveEffect_EVString_CEffect_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, effectParamValue);
	}

	protected  void saveEffect_IDataSource_CEffect_callback(long ds, long effect)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		com.earthview.world.spatial3d.effectmanager.Effect effectParamValue = (effect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(effectParamValue != null)
		{
		effectParamValue.setDelegate(true);
		effectParamValue.setInstancePointer(new InstancePointer(effect));
		IClassFactory effectParamValueClassFactory = GlobalClassFactoryMap.get(effectParamValue.getCppInstanceTypeName());
		if (effectParamValueClassFactory != null)
		{
			effectParamValue.setDelegate(true);
			effectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)effectParamValueClassFactory.create();
			effectParamValue.setDelegate(true);
			effectParamValue.setInstancePointer(new InstancePointer(effect));
		}
		}
		saveEffect(dsParamValue, effectParamValue);
	}

	native private void saveEffect_IDataSource_CEffect(long pNativeObject, long ds, long effect);
	/**
	 * 保存特效
	 * @param ds 数据库
	 * @param effect 特效
	 */
	public void saveEffect(com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		saveEffect_IDataSource_CEffect(this.nativeObject.pointer, dsParamValue, effectParamValue);
	}
	native private void saveEffect_IDataSource_CEffect_NoVirtual(long pNativeObject, long ds, long effect);
	protected void saveEffect_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		saveEffect_IDataSource_CEffect_NoVirtual(this.nativeObject.pointer, dsParamValue, effectParamValue);
	}

	protected  void onSaveEffect_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSaveEffect(eParamValue);
	}

	native private void onSaveEffect_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 保存特效的事件接收
	 * @param e 保存特效事件
	 */
	public void onSaveEffect(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSaveEffect_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSaveEffect_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onSaveEffect_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSaveEffect_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void saveEffectMaterial_IDataSource_ev_uint32_callback(long ds, long effectID)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long effectIDParamValue = effectID;
		saveEffectMaterial(dsParamValue, effectIDParamValue);
	}

	native private void saveEffectMaterial_IDataSource_ev_uint32(long pNativeObject, long ds, long effectID);
	/**
	 * 保存特效资源
	 * @param ds 数据库名称
	 * @param effectID 特效ID
	 */
	public void saveEffectMaterial(com.earthview.world.spatial.geodataset.Idatasource ds, long effectID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIDParamValue = effectID;
		saveEffectMaterial_IDataSource_ev_uint32(this.nativeObject.pointer, dsParamValue, effectIDParamValue);
	}
	native private void saveEffectMaterial_IDataSource_ev_uint32_NoVirtual(long pNativeObject, long ds, long effectID);
	protected void saveEffectMaterial_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long effectID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIDParamValue = effectID;
		saveEffectMaterial_IDataSource_ev_uint32_NoVirtual(this.nativeObject.pointer, dsParamValue, effectIDParamValue);
	}

	protected  void saveEffectMaterial_EVString_ev_uint32_callback(String datasourceName, long effectID)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIDParamValue = effectID;
		saveEffectMaterial(datasourceNameParamValue, effectIDParamValue);
	}

	native private void saveEffectMaterial_EVString_ev_uint32(long pNativeObject, String datasourceName, long effectID);
	/**
	 * 保存特效资源
	 * @param datasourceName 数据库名称
	 * @param effectID 特效ID
	 */
	public void saveEffectMaterial(String datasourceName, long effectID)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIDParamValue = effectID;
		saveEffectMaterial_EVString_ev_uint32(this.nativeObject.pointer, datasourceNameParamValue, effectIDParamValue);
	}
	native private void saveEffectMaterial_EVString_ev_uint32_NoVirtual(long pNativeObject, String datasourceName, long effectID);
	protected void saveEffectMaterial_NoVirtual(String datasourceName, long effectID)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIDParamValue = effectID;
		saveEffectMaterial_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, effectIDParamValue);
	}

	protected  void onSaveEffectMaterial_CEffectTreeviewEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.EffectTreeviewEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.EffectTreeviewEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSaveEffectMaterial(eParamValue);
	}

	native private void onSaveEffectMaterial_CEffectTreeviewEvent(long pNativeObject, long e);
	/**
	 * 保存特效资源的事件接收
	 * @param e 保存特效资源的事件
	 */
	public void onSaveEffectMaterial(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSaveEffectMaterial_CEffectTreeviewEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSaveEffectMaterial_CEffectTreeviewEvent_NoVirtual(long pNativeObject, long e);
	protected void onSaveEffectMaterial_NoVirtual(com.earthview.world.spatial3dproxy.EffectTreeviewEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSaveEffectMaterial_CEffectTreeviewEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void loadTree_EVString_CEffectUserTypeTree_callback(String datasourceName, long tree)
	{
		String datasourceNameParamValue = datasourceName;
		com.earthview.world.spatial3d.dataset.EffectUserTypeTree treeParamValue = new com.earthview.world.spatial3d.dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
		treeParamValue.setDelegate(true);
		treeParamValue.setInstancePointer(new InstancePointer(tree));
		IClassFactory treeParamValueClassFactory = GlobalClassFactoryMap.get(treeParamValue.getCppInstanceTypeName());
		if (treeParamValueClassFactory != null)
		{
			treeParamValue.setDelegate(true);
			treeParamValue = (com.earthview.world.spatial3d.dataset.EffectUserTypeTree)treeParamValueClassFactory.create();
			treeParamValue.setDelegate(true);
			treeParamValue.setInstancePointer(new InstancePointer(tree));
		}
		loadTree(datasourceNameParamValue, treeParamValue);
	}

	native private void loadTree_EVString_CEffectUserTypeTree(long pNativeObject, String datasourceName, long tree);
	/**
	 * 加载特效树
	 * @param datasourceName 数据库名
	 */
	public void loadTree(String datasourceName, com.earthview.world.spatial3d.dataset.EffectUserTypeTree tree)
	{
		String datasourceNameParamValue = datasourceName;
		long treeParamValue = tree.nativeObject.pointer;
		loadTree_EVString_CEffectUserTypeTree(this.nativeObject.pointer, datasourceNameParamValue, treeParamValue);
	}
	native private void loadTree_EVString_CEffectUserTypeTree_NoVirtual(long pNativeObject, String datasourceName, long tree);
	protected void loadTree_NoVirtual(String datasourceName, com.earthview.world.spatial3d.dataset.EffectUserTypeTree tree)
	{
		String datasourceNameParamValue = datasourceName;
		long treeParamValue = tree.nativeObject.pointer;
		loadTree_EVString_CEffectUserTypeTree_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, treeParamValue);
	}

	protected  void loadTree_IDataSource_CEffectUserTypeTree_callback(long ds, long tree)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		com.earthview.world.spatial3d.dataset.EffectUserTypeTree treeParamValue = new com.earthview.world.spatial3d.dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
		treeParamValue.setDelegate(true);
		treeParamValue.setInstancePointer(new InstancePointer(tree));
		IClassFactory treeParamValueClassFactory = GlobalClassFactoryMap.get(treeParamValue.getCppInstanceTypeName());
		if (treeParamValueClassFactory != null)
		{
			treeParamValue.setDelegate(true);
			treeParamValue = (com.earthview.world.spatial3d.dataset.EffectUserTypeTree)treeParamValueClassFactory.create();
			treeParamValue.setDelegate(true);
			treeParamValue.setInstancePointer(new InstancePointer(tree));
		}
		loadTree(dsParamValue, treeParamValue);
	}

	native private void loadTree_IDataSource_CEffectUserTypeTree(long pNativeObject, long ds, long tree);
	/**
	 * 加载特效树
	 * @param datasourceName 数据库
	 */
	public void loadTree(com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.spatial3d.dataset.EffectUserTypeTree tree)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long treeParamValue = tree.nativeObject.pointer;
		loadTree_IDataSource_CEffectUserTypeTree(this.nativeObject.pointer, dsParamValue, treeParamValue);
	}
	native private void loadTree_IDataSource_CEffectUserTypeTree_NoVirtual(long pNativeObject, long ds, long tree);
	protected void loadTree_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, com.earthview.world.spatial3d.dataset.EffectUserTypeTree tree)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long treeParamValue = tree.nativeObject.pointer;
		loadTree_IDataSource_CEffectUserTypeTree_NoVirtual(this.nativeObject.pointer, dsParamValue, treeParamValue);
	}

	protected  void getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback(String datasourceName, long effectId, long vec)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		com.earthview.world.spatial3d.dataset.EffectInfoVector vecParamValue = new com.earthview.world.spatial3d.dataset.EffectInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial3d.dataset.EffectInfoVector)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		getBlendEffectInfos(datasourceNameParamValue, effectIdParamValue, vecParamValue);
	}

	native private void getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector(long pNativeObject, String datasourceName, long effectId, long vec);
	/**
	 * 获得复合特效信息
	 * @param datasourceName 数据库名
	 * @param effectId 复合特效ID
	 * @param vec 特效信息容器
	 */
	public void getBlendEffectInfos(String datasourceName, long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		long vecParamValue = vec.nativeObject.pointer;
		getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector(this.nativeObject.pointer, datasourceNameParamValue, effectIdParamValue, vecParamValue);
	}
	native private void getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_NoVirtual(long pNativeObject, String datasourceName, long effectId, long vec);
	protected void getBlendEffectInfos_NoVirtual(String datasourceName, long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		String datasourceNameParamValue = datasourceName;
		long effectIdParamValue = effectId;
		long vecParamValue = vec.nativeObject.pointer;
		getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_NoVirtual(this.nativeObject.pointer, datasourceNameParamValue, effectIdParamValue, vecParamValue);
	}

	protected  void getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback(long ds, long effectId, long vec)
	{
		com.earthview.world.spatial.geodataset.Idatasource dsParamValue = (ds == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(dsParamValue != null)
		{
		dsParamValue.setDelegate(true);
		dsParamValue.setInstancePointer(new InstancePointer(ds));
		IClassFactory dsParamValueClassFactory = GlobalClassFactoryMap.get(dsParamValue.getCppInstanceTypeName());
		if (dsParamValueClassFactory != null)
		{
			dsParamValue.setDelegate(true);
			dsParamValue = (com.earthview.world.spatial.geodataset.Idatasource)dsParamValueClassFactory.create();
			dsParamValue.setDelegate(true);
			dsParamValue.setInstancePointer(new InstancePointer(ds));
		}
		}
		long effectIdParamValue = effectId;
		com.earthview.world.spatial3d.dataset.EffectInfoVector vecParamValue = new com.earthview.world.spatial3d.dataset.EffectInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial3d.dataset.EffectInfoVector)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		getBlendEffectInfos(dsParamValue, effectIdParamValue, vecParamValue);
	}

	native private void getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector(long pNativeObject, long ds, long effectId, long vec);
	/**
	 * 获得复合特效信息
	 * @param ds 数据库
	 * @param effectId 复合特效ID
	 * @param vec 特效信息容器
	 */
	public void getBlendEffectInfos(com.earthview.world.spatial.geodataset.Idatasource ds, long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIdParamValue = effectId;
		long vecParamValue = vec.nativeObject.pointer;
		getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector(this.nativeObject.pointer, dsParamValue, effectIdParamValue, vecParamValue);
	}
	native private void getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_NoVirtual(long pNativeObject, long ds, long effectId, long vec);
	protected void getBlendEffectInfos_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIdParamValue = effectId;
		long vecParamValue = vec.nativeObject.pointer;
		getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_NoVirtual(this.nativeObject.pointer, dsParamValue, effectIdParamValue, vecParamValue);
	}

	native private void destoryScene_void(long pNativeObject);
	/**
	 * 销毁场景
	 * @param  
	 */
	public void destoryScene()
	{
		destoryScene_void(this.nativeObject.pointer);
	}
	native private void windowResized_void(long pNativeObject);
	/**
	 * /自动调整窗体内控件大小/
	 * @param  
	 */
	public void windowResized()
	{
		windowResized_void(this.nativeObject.pointer);
	}
	native private void mouseButtonPress_int_int_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 鼠标按下事件处理
	 * @param x 鼠标按下处在x轴上的位置
	 * @param y 鼠标按下处在y轴上的位置
	 * @param button 鼠标按钮标识
	 */
	public void mouseButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_int_int_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseDoubleButtonPress_int_int_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 鼠标双击事件处理
	 * @param x 鼠标双击处在x轴上的位置
	 * @param y 鼠标双击处在y轴上的位置
	 * @param button 鼠标按钮标识
	 */
	public void mouseDoubleButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseDoubleButtonPress_int_int_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseButtonRelease_int_int_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 鼠标弹起事件处理
	 * @param x 鼠标弹起处在x轴上的位置
	 * @param y 鼠标弹起处在y轴上的位置
	 * @param button 鼠标按钮标识
	 */
	public void mouseButtonRelease(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonRelease_int_int_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseMove_int_int(long pNativeObject, int x, int y);
	/**
	 * 鼠标移动事件处理
	 * @param x 当前鼠标在x轴上的位置
	 * @param y 当前鼠标在y轴上的位置
	 */
	public void mouseMove(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		mouseMove_int_int(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void mouseWheel_float(long pNativeObject, float delta);
	/**
	 * 鼠标滚轮滚动事件处理
	 * @param delta 滚动度量值
	 */
	public void mouseWheel(float delta)
	{
		float deltaParamValue = delta;
		mouseWheel_float(this.nativeObject.pointer, deltaParamValue);
	}
	native private String findDiscontinuousID_CEffectDataSource_EVString(long pNativeObject, long effectDatasource, String userTypeCode);
	/**
	 * /查找用户分类号断号/
	 * @param effectDatasource 数据库
	 * @param userTypeCode 父用户分类号
	 */
	public String findDiscontinuousID(com.earthview.world.spatial3d.dataset.EffectDataSource effectDatasource, String userTypeCode)
	{
		long effectDatasourceParamValue = (effectDatasource == null ? 0L : effectDatasource.nativeObject.pointer);
		String userTypeCodeParamValue = userTypeCode;
		String returnValue = findDiscontinuousID_CEffectDataSource_EVString(this.nativeObject.pointer, effectDatasourceParamValue, userTypeCodeParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件处理
	 * @param e 事件
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	public EffectMgrEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectMgrEventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_createUserType_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_createUserType_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onCreateUserType_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_onImportFromTemplateDB_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray(long pNativeObject, String method);
	native protected void register_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray(long pNativeObject, String method);
	native protected void register_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool(long pNativeObject, String method);
	native protected void register_onImportFromScript_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_onExportToTemplateDB_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32(long pNativeObject, String method);
	native protected void register_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32(long pNativeObject, String method);
	native protected void register_onCreateNewEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_renameUserType_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_renameUserType_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onRenameUserType_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_renameBlendEffect_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_renameBlendEffect_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onRenameBlendEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_renameSingleEffect_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_copyNewEffect_EVString_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_copyNewEffect_IDataSource_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_renameSingleEffect_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onRenameSingleEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_renameBEChild_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_renameBEChild_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onRenameBEChildEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_deleteUserType_EVString_EVString(long pNativeObject, String method);
	native protected void register_deleteUserType_IDataSource_EVString(long pNativeObject, String method);
	native protected void register_onDeleteUserType_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType(long pNativeObject, String method);
	native protected void register_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType(long pNativeObject, String method);
	native protected void register_onDeleteEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_onAddEffectToBlendEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_isExistName_EVString_EVString_EVString_EffectType_EVString(long pNativeObject, String method);
	native protected void register_isExistName_IDataSource_EVString_EVString_EffectType_EVString(long pNativeObject, String method);
	native protected void register_addEffectToUserType_EVString_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_addEffectToUserType_IDataSource_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_onAddEffectToUserType_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_addUserTypeToUserType_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_addUserTypeToUserType_IDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_onAddUserTypeToUserType_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_saveEffect_EVString_CEffect(long pNativeObject, String method);
	native protected void register_saveEffect_IDataSource_CEffect(long pNativeObject, String method);
	native protected void register_onSaveEffect_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_saveEffectMaterial_IDataSource_ev_uint32(long pNativeObject, String method);
	native protected void register_saveEffectMaterial_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_onSaveEffectMaterial_CEffectTreeviewEvent(long pNativeObject, String method);
	native protected void register_loadTree_EVString_CEffectUserTypeTree(long pNativeObject, String method);
	native protected void register_loadTree_IDataSource_CEffectUserTypeTree(long pNativeObject, String method);
	native protected void register_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector(long pNativeObject, String method);
	native protected void register_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createUserType_EVString_EVString_EVString(this.nativeObject.pointer, "createUserType_EVString_EVString_EVString_callback");
			this.register_createUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, "createUserType_IDataSource_EVString_EVString_callback");
			this.register_onCreateUserType_CEffectTreeviewEvent(this.nativeObject.pointer, "onCreateUserType_CEffectTreeviewEvent_callback");
			this.register_onImportFromTemplateDB_CEffectTreeviewEvent(this.nativeObject.pointer, "onImportFromTemplateDB_CEffectTreeviewEvent_callback");
			this.register_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray(this.nativeObject.pointer, "importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback");
			this.register_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray(this.nativeObject.pointer, "importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback");
			this.register_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool(this.nativeObject.pointer, "exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback");
			this.register_onImportFromScript_CEffectTreeviewEvent(this.nativeObject.pointer, "onImportFromScript_CEffectTreeviewEvent_callback");
			this.register_onExportToTemplateDB_CEffectTreeviewEvent(this.nativeObject.pointer, "onExportToTemplateDB_CEffectTreeviewEvent_callback");
			this.register_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32(this.nativeObject.pointer, "createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback");
			this.register_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32(this.nativeObject.pointer, "createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback");
			this.register_onCreateNewEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onCreateNewEffect_CEffectTreeviewEvent_callback");
			this.register_renameUserType_EVString_EVString_EVString(this.nativeObject.pointer, "renameUserType_EVString_EVString_EVString_callback");
			this.register_renameUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, "renameUserType_IDataSource_EVString_EVString_callback");
			this.register_onRenameUserType_CEffectTreeviewEvent(this.nativeObject.pointer, "onRenameUserType_CEffectTreeviewEvent_callback");
			this.register_renameBlendEffect_EVString_EVString_EVString(this.nativeObject.pointer, "renameBlendEffect_EVString_EVString_EVString_callback");
			this.register_renameBlendEffect_IDataSource_EVString_EVString(this.nativeObject.pointer, "renameBlendEffect_IDataSource_EVString_EVString_callback");
			this.register_onRenameBlendEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onRenameBlendEffect_CEffectTreeviewEvent_callback");
			this.register_renameSingleEffect_EVString_EVString_EVString(this.nativeObject.pointer, "renameSingleEffect_EVString_EVString_EVString_callback");
			this.register_copyNewEffect_EVString_ev_uint32_EVString(this.nativeObject.pointer, "copyNewEffect_EVString_ev_uint32_EVString_callback");
			this.register_copyNewEffect_IDataSource_ev_uint32_EVString(this.nativeObject.pointer, "copyNewEffect_IDataSource_ev_uint32_EVString_callback");
			this.register_renameSingleEffect_IDataSource_EVString_EVString(this.nativeObject.pointer, "renameSingleEffect_IDataSource_EVString_EVString_callback");
			this.register_onRenameSingleEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onRenameSingleEffect_CEffectTreeviewEvent_callback");
			this.register_renameBEChild_EVString_EVString_EVString(this.nativeObject.pointer, "renameBEChild_EVString_EVString_EVString_callback");
			this.register_renameBEChild_IDataSource_EVString_EVString(this.nativeObject.pointer, "renameBEChild_IDataSource_EVString_EVString_callback");
			this.register_onRenameBEChildEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onRenameBEChildEffect_CEffectTreeviewEvent_callback");
			this.register_deleteUserType_EVString_EVString(this.nativeObject.pointer, "deleteUserType_EVString_EVString_callback");
			this.register_deleteUserType_IDataSource_EVString(this.nativeObject.pointer, "deleteUserType_IDataSource_EVString_callback");
			this.register_onDeleteUserType_CEffectTreeviewEvent(this.nativeObject.pointer, "onDeleteUserType_CEffectTreeviewEvent_callback");
			this.register_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType(this.nativeObject.pointer, "deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback");
			this.register_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType(this.nativeObject.pointer, "deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback");
			this.register_onDeleteEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onDeleteEffect_CEffectTreeviewEvent_callback");
			this.register_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32(this.nativeObject.pointer, "addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback");
			this.register_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32(this.nativeObject.pointer, "addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback");
			this.register_onAddEffectToBlendEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onAddEffectToBlendEffect_CEffectTreeviewEvent_callback");
			this.register_isExistName_EVString_EVString_EVString_EffectType_EVString(this.nativeObject.pointer, "isExistName_EVString_EVString_EVString_EffectType_EVString_callback");
			this.register_isExistName_IDataSource_EVString_EVString_EffectType_EVString(this.nativeObject.pointer, "isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback");
			this.register_addEffectToUserType_EVString_ev_uint32_EVString(this.nativeObject.pointer, "addEffectToUserType_EVString_ev_uint32_EVString_callback");
			this.register_addEffectToUserType_IDataSource_ev_uint32_EVString(this.nativeObject.pointer, "addEffectToUserType_IDataSource_ev_uint32_EVString_callback");
			this.register_onAddEffectToUserType_CEffectTreeviewEvent(this.nativeObject.pointer, "onAddEffectToUserType_CEffectTreeviewEvent_callback");
			this.register_addUserTypeToUserType_EVString_EVString_EVString(this.nativeObject.pointer, "addUserTypeToUserType_EVString_EVString_EVString_callback");
			this.register_addUserTypeToUserType_IDataSource_EVString_EVString(this.nativeObject.pointer, "addUserTypeToUserType_IDataSource_EVString_EVString_callback");
			this.register_onAddUserTypeToUserType_CEffectTreeviewEvent(this.nativeObject.pointer, "onAddUserTypeToUserType_CEffectTreeviewEvent_callback");
			this.register_saveEffect_EVString_CEffect(this.nativeObject.pointer, "saveEffect_EVString_CEffect_callback");
			this.register_saveEffect_IDataSource_CEffect(this.nativeObject.pointer, "saveEffect_IDataSource_CEffect_callback");
			this.register_onSaveEffect_CEffectTreeviewEvent(this.nativeObject.pointer, "onSaveEffect_CEffectTreeviewEvent_callback");
			this.register_saveEffectMaterial_IDataSource_ev_uint32(this.nativeObject.pointer, "saveEffectMaterial_IDataSource_ev_uint32_callback");
			this.register_saveEffectMaterial_EVString_ev_uint32(this.nativeObject.pointer, "saveEffectMaterial_EVString_ev_uint32_callback");
			this.register_onSaveEffectMaterial_CEffectTreeviewEvent(this.nativeObject.pointer, "onSaveEffectMaterial_CEffectTreeviewEvent_callback");
			this.register_loadTree_EVString_CEffectUserTypeTree(this.nativeObject.pointer, "loadTree_EVString_CEffectUserTypeTree_callback");
			this.register_loadTree_IDataSource_CEffectUserTypeTree(this.nativeObject.pointer, "loadTree_IDataSource_CEffectUserTypeTree_callback");
			this.register_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector(this.nativeObject.pointer, "getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback");
			this.register_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector(this.nativeObject.pointer, "getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static EffectMgrEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectMgrEventObject obj = null;
 		if(baseObj instanceof EffectMgrEventObject)
		{
			obj = (EffectMgrEventObject)baseObj;
		} else {
			obj = new EffectMgrEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectMgrEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
