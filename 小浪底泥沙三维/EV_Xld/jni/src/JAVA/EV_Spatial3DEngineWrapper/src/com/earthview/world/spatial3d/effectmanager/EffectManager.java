package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效管理析类
 */
public class EffectManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::CEffectManager", new EffectManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回单例的数据源工厂句柄
	 * @return CModelDataSourceFactory，失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.effectmanager.EffectManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.EffectManager __returnValue = new com.earthview.world.spatial3d.effectmanager.EffectManager(CreatedWhenConstruct.CWC_NotToCreate, "CEffectManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.EffectManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectManager");
		}
		return __returnValue;
	}
	native private boolean clearEffectAll_CSqlDatabase(long pNativeObject, long db);
	/**
	 * 清除所有特效
	 * @param EarthView::World::Core::Database::CSqlDatabase 数据库连接
	 * @return 是否清除成功
	 */
	public boolean clearEffectAll(com.earthview.world.core.database.SqlDatabase db)
	{
		long dbParamValue = db.nativeObject.pointer;
		boolean returnValue = clearEffectAll_CSqlDatabase(this.nativeObject.pointer, dbParamValue);
		return returnValue;
	}
	native private boolean existEffect_CEffectDataSource_EVString_ev_uint32(long pNativeObject, long src, String effectName, long effectId);
	/**
	 * 判断特效是否存在
	 * @param src 数据源指针
	 * @param effectName 特效名称
	 * @param effectId 要判断的特效ID
	 * @return 特效是否存在
	 */
	public boolean existEffect(com.earthview.world.spatial3d.dataset.EffectDataSource src, String effectName, UIntegerPointer effectId)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		String effectNameParamValue = effectName;
		long effectIdParamValue = effectId.nativeObject.pointer;
		boolean returnValue = existEffect_CEffectDataSource_EVString_ev_uint32(this.nativeObject.pointer, srcParamValue, effectNameParamValue, effectIdParamValue);
		return returnValue;
	}
	native private int ev_import_CEffectInfo_CEffectDataSource_CEffectDataSource_ev_bool_CModelPublishToolListener(long pNativeObject, long info, long src, long dest, boolean isOverwrite, long listener);
	/**
	 * 将一条特效从一个数据源，导到另外一个数据源
	 * @param info 特效信息
	 * @param src 源数据源指针
	 * @param dest 目标数据源指针
	 * @param isOverwrite 是否覆盖同名特效
	 * @param listener 导入的监听
	 * @return 返回导入的新特效ID，没导入成功返回0
	 */
	public int ev_import(com.earthview.world.spatial3d.dataset.EffectInfo info, com.earthview.world.spatial3d.dataset.EffectDataSource src, com.earthview.world.spatial3d.dataset.EffectDataSource dest, boolean isOverwrite, com.earthview.world.spatial3d.ModelPublishToolListener listener)
	{
		long infoParamValue = info.nativeObject.pointer;
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		boolean isOverwriteParamValue = isOverwrite;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		int returnValue = ev_import_CEffectInfo_CEffectDataSource_CEffectDataSource_ev_bool_CModelPublishToolListener(this.nativeObject.pointer, infoParamValue, srcParamValue, destParamValue, isOverwriteParamValue, listenerParamValue);
		return returnValue;
	}
	native private long copyNewEffect_CEffectDataSource_ev_uint32_EVString(long pNativeObject, long datasource, long effectId, String newName);
	/**
	 * 将现有特效和资源全部拷贝一份为新的
	 * @param datasource 数据源指针
	 * @param effectId 要拷贝的特效ID
	 * @param newName 特效新名称
	 * @return 返回新的EarthView::World::Spatial3D::Dataset::CEffectInfo，失败则返回NULL
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo copyNewEffect(com.earthview.world.spatial3d.dataset.EffectDataSource datasource, long effectId, String newName)
	{
		long datasourceParamValue = (datasource == null ? 0L : datasource.nativeObject.pointer);
		long effectIdParamValue = effectId;
		String newNameParamValue = newName;
		long returnValue = copyNewEffect_CEffectDataSource_ev_uint32_EVString(this.nativeObject.pointer, datasourceParamValue, effectIdParamValue, newNameParamValue);
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
	native private long createUserType_CEffectDataSource_EVString_EVString(long pNativeObject, long datasource, String parentCode, String newUserTypeName);
	/**
	 * 创建用户分类
	 * @param datasource 数据源指针
	 * @param parentCode 父节点编码
	 * @param newUserTypeName 新创建用户分类名称
	 * @return 新创建用户分类对象
	 */
	public com.earthview.world.spatial3d.dataset.EffectUserTypeInfo createUserType(com.earthview.world.spatial3d.dataset.EffectDataSource datasource, String parentCode, String newUserTypeName)
	{
		long datasourceParamValue = (datasource == null ? 0L : datasource.nativeObject.pointer);
		String parentCodeParamValue = parentCode;
		String newUserTypeNameParamValue = newUserTypeName;
		long returnValue = createUserType_CEffectDataSource_EVString_EVString(this.nativeObject.pointer, datasourceParamValue, parentCodeParamValue, newUserTypeNameParamValue);
		com.earthview.world.spatial3d.dataset.EffectUserTypeInfo __returnValue = new com.earthview.world.spatial3d.dataset.EffectUserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEffectUserTypeInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectUserTypeInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEffectUserTypeInfo");
		}
		return __returnValue;
	}
	native private boolean importFromScript_CEffectDataSource_EVString_EVString_CStringArray_CStringArray(long pNativeObject, long ds, String userTypeCode, String folder, long successScriptNames, long errorArray);
	/**
	 * 从脚本导入
	 * @param ds 数据源
	 * @param userTypeCode 用户自定义特效分类编码
	 * @param folder 文件路径
	 * @param successScriptNames 成功导入的脚本名字
	 * @param errorArray 错误信息队列
	 * @return 成功导入返回true
	 */
	public boolean importFromScript(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String userTypeCode, String folder, com.earthview.world.core.StringArray successScriptNames, com.earthview.world.core.StringArray errorArray)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String userTypeCodeParamValue = userTypeCode;
		String folderParamValue = folder;
		long successScriptNamesParamValue = successScriptNames.nativeObject.pointer;
		long errorArrayParamValue = errorArray.nativeObject.pointer;
		boolean returnValue = importFromScript_CEffectDataSource_EVString_EVString_CStringArray_CStringArray(this.nativeObject.pointer, dsParamValue, userTypeCodeParamValue, folderParamValue, successScriptNamesParamValue, errorArrayParamValue);
		return returnValue;
	}
	native private String renameParticleScript_EVString_EVString_EVString(long pNativeObject, String script, String oldName, String newName);
	/**
	 * 将粒子脚本的名字进行更换
	 * @param script 脚本内容
	 * @param oldName 旧粒子系统名字
	 * @param newName 新粒子系统名字
	 * @return 替换后脚本内容
	 */
	public String renameParticleScript(String script, String oldName, String newName)
	{
		String scriptParamValue = script;
		String oldNameParamValue = oldName;
		String newNameParamValue = newName;
		String returnValue = renameParticleScript_EVString_EVString_EVString(this.nativeObject.pointer, scriptParamValue, oldNameParamValue, newNameParamValue);
		return returnValue;
	}
	native private long createNewEffect_CEffectDataSource_EVString_EVString_EffectType_ev_uint32(long pNativeObject, long datasource, String name, String userTypeCode, int type, long parentEffectId);
	/**
	 * 创建特效
	 * @param datasource 数据源
	 * @param name 用户自定义特效分类名称
	 * @param userTypeCode 用户自定义特效分类编码
	 * @param type 特效类型
	 * @param parentEffectId 父特效ID(在新建非复合特效的时候该参数可为任意值)
	 * @return 特效信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo createNewEffect(com.earthview.world.spatial3d.dataset.EffectDataSource datasource, String name, String userTypeCode, com.earthview.world.spatial3d.dataset.EffectType type, long parentEffectId)
	{
		long datasourceParamValue = (datasource == null ? 0L : datasource.nativeObject.pointer);
		String nameParamValue = name;
		String userTypeCodeParamValue = userTypeCode;
		int typeParamValue = type.getValue();
		long parentEffectIdParamValue = parentEffectId;
		long returnValue = createNewEffect_CEffectDataSource_EVString_EVString_EffectType_ev_uint32(this.nativeObject.pointer, datasourceParamValue, nameParamValue, userTypeCodeParamValue, typeParamValue, parentEffectIdParamValue);
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
	native private boolean renameUserType_CEffectDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 修改特效分类编码
	 * @param ds 数据源
	 * @param code 用户自定义特效分类编码
	 * @param fileName 用户自定义特效分类名称
	 * @return 成功修改返回true
	 */
	public boolean renameUserType(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		boolean returnValue = renameUserType_CEffectDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
		return returnValue;
	}
	native private boolean renameBlendEffect_CEffectDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 修改混合特效名称
	 * @param ds 数据源
	 * @param code 用户自定义特效分类编码
	 * @param newName 新混合特效名称
	 * @return 成功修改返回true
	 */
	public boolean renameBlendEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		boolean returnValue = renameBlendEffect_CEffectDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
		return returnValue;
	}
	native private boolean renameBEChild_CEffectDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 修改混合特效中子特效名称
	 * @param ds 数据源
	 * @param code 用户自定义特效分类编码
	 * @param newName 新子特效名称
	 * @return 成功修改返回true
	 */
	public boolean renameBEChild(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		boolean returnValue = renameBEChild_CEffectDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
		return returnValue;
	}
	native private boolean renameSingleEffect_CEffectDataSource_EVString_EVString(long pNativeObject, long ds, String code, String newName);
	/**
	 * 修改单粒子特效名称
	 * @param ds 数据源
	 * @param code 用户自定义特效分类编码
	 * @param newName 新特效名称
	 * @return 成功修改返回true
	 */
	public boolean renameSingleEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String code, String newName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		String newNameParamValue = newName;
		boolean returnValue = renameSingleEffect_CEffectDataSource_EVString_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue, newNameParamValue);
		return returnValue;
	}
	native private boolean deleteUserType_CEffectDataSource_EVString(long pNativeObject, long ds, String code);
	/**
	 * 删除用户自定义特效分类编码
	 * @param ds 数据源
	 * @param code 用户自定义特效分类编码
	 * @return 成功删除返回true
	 */
	public boolean deleteUserType(com.earthview.world.spatial3d.dataset.EffectDataSource ds, String code)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String codeParamValue = code;
		boolean returnValue = deleteUserType_CEffectDataSource_EVString(this.nativeObject.pointer, dsParamValue, codeParamValue);
		return returnValue;
	}
	native private boolean deleteEffect_CEffectDataSource_ev_uint32_ev_uint32_EffectType(long pNativeObject, long ds, long parentEffectId, long effectId, int type);
	/**
	 * 删除特效
	 * @param ds 数据源
	 * @param parentEffectId 父特效ID
	 * @param effectId 特效ID
	 * @param type 特效类型
	 * @return 成功删除返回true
	 */
	public boolean deleteEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, long parentEffectId, long effectId, com.earthview.world.spatial3d.dataset.EffectType type)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long parentEffectIdParamValue = parentEffectId;
		long effectIdParamValue = effectId;
		int typeParamValue = type.getValue();
		boolean returnValue = deleteEffect_CEffectDataSource_ev_uint32_ev_uint32_EffectType(this.nativeObject.pointer, dsParamValue, parentEffectIdParamValue, effectIdParamValue, typeParamValue);
		return returnValue;
	}
	native private long addEffectToBlendEffect_CEffectDataSource_ev_uint32_ev_uint32(long pNativeObject, long ds, long editEffectId, long dragEffectId);
	/**
	 * 添加普通特效到混合特效中
	 * @param ds 数据源
	 * @param editEffectId 混合特效ID
	 * @param dragEffectId 普通特效ID
	 * @return 特效信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo addEffectToBlendEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, long editEffectId, long dragEffectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long editEffectIdParamValue = editEffectId;
		long dragEffectIdParamValue = dragEffectId;
		long returnValue = addEffectToBlendEffect_CEffectDataSource_ev_uint32_ev_uint32(this.nativeObject.pointer, dsParamValue, editEffectIdParamValue, dragEffectIdParamValue);
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
	native private long addEffectToBlendEffect_CEffectDataSource_ev_uint32_CEffectInfo(long pNativeObject, long ds, long editEffectId, long effectInfo);
	/**
	 * 添加普通特效到混合特效中
	 * @param ds 数据源
	 * @param editEffectId 混合特效ID
	 * @param effectInfo 特效信息
	 * @return 特效信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo addEffectToBlendEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, long editEffectId, com.earthview.world.spatial3d.dataset.EffectInfo effectInfo)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long editEffectIdParamValue = editEffectId;
		long effectInfoParamValue = effectInfo.nativeObject.pointer;
		long returnValue = addEffectToBlendEffect_CEffectDataSource_ev_uint32_CEffectInfo(this.nativeObject.pointer, dsParamValue, editEffectIdParamValue, effectInfoParamValue);
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
	native private boolean saveEffect_CEffectDataSource_CEffect(long pNativeObject, long ds, long effect);
	/**
	 * 保存特效
	 * @param ds 数据源
	 * @param effect 特效指针
	 * @return 成功保存返回true
	 */
	public boolean saveEffect(com.earthview.world.spatial3d.dataset.EffectDataSource ds, com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		boolean returnValue = saveEffect_CEffectDataSource_CEffect(this.nativeObject.pointer, dsParamValue, effectParamValue);
		return returnValue;
	}
	native private boolean saveEffectMaterial_CEffectDataSource_ev_uint32(long pNativeObject, long ds, long effectId);
	/**
	 * 保存特效材质
	 * @param ds 数据源
	 * @param effectId 特效ID
	 * @return 成功保存返回true
	 */
	public boolean saveEffectMaterial(com.earthview.world.spatial3d.dataset.EffectDataSource ds, long effectId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long effectIdParamValue = effectId;
		boolean returnValue = saveEffectMaterial_CEffectDataSource_ev_uint32(this.nativeObject.pointer, dsParamValue, effectIdParamValue);
		return returnValue;
	}
	native private boolean saveEffectMaterial_CEffectDataSource_CMaterialPtr_ev_uint32(long pNativeObject, long ds, long matPtr, long resourceId);
	/**
	 * 保存特效材质
	 * @param ds 数据源
	 * @param matPtr 材质Ptr
	 * @param resourceId 资源ID
	 * @return 成功保存返回true
	 */
	public boolean saveEffectMaterial(com.earthview.world.spatial3d.dataset.EffectDataSource ds, com.earthview.world.graphic.MaterialPtr matPtr, long resourceId)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long matPtrParamValue = matPtr.nativeObject.pointer;
		long resourceIdParamValue = resourceId;
		boolean returnValue = saveEffectMaterial_CEffectDataSource_CMaterialPtr_ev_uint32(this.nativeObject.pointer, dsParamValue, matPtrParamValue, resourceIdParamValue);
		return returnValue;
	}
	native private String findDiscontinuousID_CEffectDataSource_EVString(long pNativeObject, long effectDatasource, String userTypeCode);
	/**
	 * 查找用户自定义特效分类编码断号
	 * @param effectDatasource 特效数据源
	 * @param userTypeCode 父用户自定义特效分类编码
	 * @return 返回用户自定义特效分类编码断号
	 */
	public String findDiscontinuousID(com.earthview.world.spatial3d.dataset.EffectDataSource effectDatasource, String userTypeCode)
	{
		long effectDatasourceParamValue = (effectDatasource == null ? 0L : effectDatasource.nativeObject.pointer);
		String userTypeCodeParamValue = userTypeCode;
		String returnValue = findDiscontinuousID_CEffectDataSource_EVString(this.nativeObject.pointer, effectDatasourceParamValue, userTypeCodeParamValue);
		return returnValue;
	}
	native private void bulidUserTypeTree_CEffectDataSource_CEffectUserTypeTree(long pNativeObject, long ds, long tree);
	/**
	 * 创建用户类别树
	 * @param ds 特效数据源
	 * @param tree 用户类别树指针
	 */
	public void bulidUserTypeTree(com.earthview.world.spatial3d.dataset.EffectDataSource ds, com.earthview.world.spatial3d.dataset.EffectUserTypeTree tree)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long treeParamValue = tree.nativeObject.pointer;
		bulidUserTypeTree_CEffectDataSource_CEffectUserTypeTree(this.nativeObject.pointer, dsParamValue, treeParamValue);
	}
	native private String serialize_CParticleSystem_EVString(long pNativeObject, long ps, String psName);
	/**
	 * 序列化
	 * @param ps 粒子系统指针
	 * @param psName 粒子系统
	 * @return EVString,粒子脚本
	 */
	public String serialize(com.earthview.world.graphic.ParticleSystem ps, String psName)
	{
		long psParamValue = (ps == null ? 0L : ps.nativeObject.pointer);
		String psNameParamValue = psName;
		String returnValue = serialize_CParticleSystem_EVString(this.nativeObject.pointer, psParamValue, psNameParamValue);
		return returnValue;
	}
	public EffectManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectManager obj = null;
 		if(baseObj instanceof EffectManager)
		{
			obj = (EffectManager)baseObj;
		} else {
			obj = new EffectManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectManager");
			obj.increaseCast();
		}

		return obj;
	}
}
