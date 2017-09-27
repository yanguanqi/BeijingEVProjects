package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

/**
 * EarthView模型数据集类
 */
public class Evmodeldataset extends com.earthview.world.spatial.Evbasemodeldataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelDataset", new EvmodeldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelDatasetProxy", new EvmodeldatasetClassFactory());
	}

	native private int getEntityObject_ev_int32_CServerEntityObject(long pNativeObject, int entityid, long entityObject);
	/**
	 * 获取实体对象
	 * @param entityid id
	 * @param entityObject 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getEntityObject(int entityid, com.earthview.world.spatial.ServerEntityObject entityObject)
	{
		int entityidParamValue = entityid;
		long entityObjectParamValue = entityObject.nativeObject.pointer;
		int returnValue = getEntityObject_ev_int32_CServerEntityObject(this.nativeObject.pointer, entityidParamValue, entityObjectParamValue);
		return returnValue;
	}
	native private int getEntityObject_ev_int32_CServerEntityObject_NoVirtual(long pNativeObject, int entityid, long entityObject);
	protected int getEntityObject_NoVirtual(int entityid, com.earthview.world.spatial.ServerEntityObject entityObject)
	{
		int entityidParamValue = entityid;
		long entityObjectParamValue = entityObject.nativeObject.pointer;
		int returnValue = getEntityObject_ev_int32_CServerEntityObject_NoVirtual(this.nativeObject.pointer, entityidParamValue, entityObjectParamValue);
		return returnValue;
	}

	native private int getMesh_ev_int32_CServerMeshObject(long pNativeObject, int entityid, long meshObject);
	/**
	 * 获取网格信息
	 * @param entityid id
	 * @param meshObject 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getMesh(int entityid, com.earthview.world.spatial.ServerMeshObject meshObject)
	{
		int entityidParamValue = entityid;
		long meshObjectParamValue = meshObject.nativeObject.pointer;
		int returnValue = getMesh_ev_int32_CServerMeshObject(this.nativeObject.pointer, entityidParamValue, meshObjectParamValue);
		return returnValue;
	}
	native private int getMesh_ev_int32_CServerMeshObject_NoVirtual(long pNativeObject, int entityid, long meshObject);
	protected int getMesh_NoVirtual(int entityid, com.earthview.world.spatial.ServerMeshObject meshObject)
	{
		int entityidParamValue = entityid;
		long meshObjectParamValue = meshObject.nativeObject.pointer;
		int returnValue = getMesh_ev_int32_CServerMeshObject_NoVirtual(this.nativeObject.pointer, entityidParamValue, meshObjectParamValue);
		return returnValue;
	}

	native private int getResource_ev_int32_ev_bool_CServerResourceObject(long pNativeObject, int entityid, boolean needorigtexture, long resourceObject);
	/**
	 * 获取资源
	 * @param entityid id
	 * @param needorigtexture ture表示需要纹理
	 * @param resourceObject 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getResource(int entityid, boolean needorigtexture, com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		int entityidParamValue = entityid;
		boolean needorigtextureParamValue = needorigtexture;
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResource_ev_int32_ev_bool_CServerResourceObject(this.nativeObject.pointer, entityidParamValue, needorigtextureParamValue, resourceObjectParamValue);
		return returnValue;
	}
	native private int getResource_ev_int32_ev_bool_CServerResourceObject_NoVirtual(long pNativeObject, int entityid, boolean needorigtexture, long resourceObject);
	protected int getResource_NoVirtual(int entityid, boolean needorigtexture, com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		int entityidParamValue = entityid;
		boolean needorigtextureParamValue = needorigtexture;
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResource_ev_int32_ev_bool_CServerResourceObject_NoVirtual(this.nativeObject.pointer, entityidParamValue, needorigtextureParamValue, resourceObjectParamValue);
		return returnValue;
	}

	native private int getResourceByID_ev_int32_ev_int32_CServerResourceObject(long pNativeObject, int entityid, int resid, long resourceObject);
	public int getResourceByID(int entityid, int resid, com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		int entityidParamValue = entityid;
		int residParamValue = resid;
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResourceByID_ev_int32_ev_int32_CServerResourceObject(this.nativeObject.pointer, entityidParamValue, residParamValue, resourceObjectParamValue);
		return returnValue;
	}
	native private int getResourceByID_ev_int32_ev_int32_CServerResourceObject_NoVirtual(long pNativeObject, int entityid, int resid, long resourceObject);
	protected int getResourceByID_NoVirtual(int entityid, int resid, com.earthview.world.spatial.ServerResourceObject resourceObject)
	{
		int entityidParamValue = entityid;
		int residParamValue = resid;
		long resourceObjectParamValue = resourceObject.nativeObject.pointer;
		int returnValue = getResourceByID_ev_int32_ev_int32_CServerResourceObject_NoVirtual(this.nativeObject.pointer, entityidParamValue, residParamValue, resourceObjectParamValue);
		return returnValue;
	}

	native private int getOrigTexture_ev_int32_CServerOrigTexture(long pNativeObject, int entityid, long origTexture);
	/**
	 * 获取纹理信息
	 * @param entityid id
	 * @param origTexture 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getOrigTexture(int entityid, com.earthview.world.spatial.ServerOrigTexture origTexture)
	{
		int entityidParamValue = entityid;
		long origTextureParamValue = origTexture.nativeObject.pointer;
		int returnValue = getOrigTexture_ev_int32_CServerOrigTexture(this.nativeObject.pointer, entityidParamValue, origTextureParamValue);
		return returnValue;
	}
	native private int getOrigTexture_ev_int32_CServerOrigTexture_NoVirtual(long pNativeObject, int entityid, long origTexture);
	protected int getOrigTexture_NoVirtual(int entityid, com.earthview.world.spatial.ServerOrigTexture origTexture)
	{
		int entityidParamValue = entityid;
		long origTextureParamValue = origTexture.nativeObject.pointer;
		int returnValue = getOrigTexture_ev_int32_CServerOrigTexture_NoVirtual(this.nativeObject.pointer, entityidParamValue, origTextureParamValue);
		return returnValue;
	}

	native private long getLayerInfoRef_void(long pNativeObject);
	/**
	 * 获取元数据信息
	 * @return 元数据对象指针
	 */
	public com.earthview.world.spatial.Evmodellayerinfo getLayerInfoRef()
	{
		long returnValue = getLayerInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evmodellayerinfo __returnValue = new com.earthview.world.spatial.Evmodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVModelLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evmodellayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVModelLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Evmodellayerinfo getLayerInfoRef_NoVirtual()
	{
		long returnValue = getLayerInfoRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evmodellayerinfo __returnValue = new com.earthview.world.spatial.Evmodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVModelLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evmodellayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVModelLayerInfo");
		}
		return __returnValue;
	}

	native private long getFeatureCount_EVString(long pNativeObject, String datasetTableName);
	/**
	 * 获取数据集属性个数
	 * @param  
	 */
	public long getFeatureCount(String datasetTableName)
	{
		String datasetTableNameParamValue = datasetTableName;
		long returnValue = getFeatureCount_EVString(this.nativeObject.pointer, datasetTableNameParamValue);
		return returnValue;
	}
	native private long getFeatureCount_EVString_NoVirtual(long pNativeObject, String datasetTableName);
	protected long getFeatureCount_NoVirtual(String datasetTableName)
	{
		String datasetTableNameParamValue = datasetTableName;
		long returnValue = getFeatureCount_EVString_NoVirtual(this.nativeObject.pointer, datasetTableNameParamValue);
		return returnValue;
	}

	native private long getAttrFeatureCount_EVString(long pNativeObject, String datasetTableName);
	/**
	 * 
	 * @param  
	 */
	public long getAttrFeatureCount(String datasetTableName)
	{
		String datasetTableNameParamValue = datasetTableName;
		long returnValue = getAttrFeatureCount_EVString(this.nativeObject.pointer, datasetTableNameParamValue);
		return returnValue;
	}
	native private long getAttrFeatureCount_EVString_NoVirtual(long pNativeObject, String datasetTableName);
	protected long getAttrFeatureCount_NoVirtual(String datasetTableName)
	{
		String datasetTableNameParamValue = datasetTableName;
		long returnValue = getAttrFeatureCount_EVString_NoVirtual(this.nativeObject.pointer, datasetTableNameParamValue);
		return returnValue;
	}

	native private long getFeatureID_ev_int32(long pNativeObject, int index);
	/**
	 * 
	 * @param  
	 */
	public long getFeatureID(int index)
	{
		int indexParamValue = index;
		long returnValue = getFeatureID_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getFeatureID_ev_int32_NoVirtual(long pNativeObject, int index);
	protected long getFeatureID_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getFeatureID_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void clearFeature_ev_uint32(long pNativeObject, long entID);
	/**
	 * 
	 * @param  
	 */
	public void clearFeature(long entID)
	{
		long entIDParamValue = entID;
		clearFeature_ev_uint32(this.nativeObject.pointer, entIDParamValue);
	}
	native private void clearFeature_ev_uint32_NoVirtual(long pNativeObject, long entID);
	protected void clearFeature_NoVirtual(long entID)
	{
		long entIDParamValue = entID;
		clearFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, entIDParamValue);
	}

	public Evmodeldataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evmodeldataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public int getTemplateEntityObject(int entityid, com.earthview.world.spatial.ServerTemplateEntityObject entityObject)
	{
		return super.getTemplateEntityObject_NoVirtual(entityid, entityObject);
	}
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		return super.hasSubDataset_NoVirtual();
	}
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		return super.getDataSourceRef_NoVirtual();
	}
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		return super.startEditing_NoVirtual(withUndo);
	}
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		return super.stopEditing_NoVirtual(isSave);
	}
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		return super.isBeginEditingOperation_NoVirtual();
	}
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		return super.beginEditingOperation_NoVirtual();
	}
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		return super.endEditingOperation_NoVirtual(isConfirm);
	}
	
	native protected void register_getEntityObject_ev_int32_CServerEntityObject(long pNativeObject, String method);
	native protected void register_getTemplateEntityObject_ev_int32_CServerTemplateEntityObject(long pNativeObject, String method);
	native protected void register_getMesh_ev_int32_CServerMeshObject(long pNativeObject, String method);
	native protected void register_getResource_ev_int32_ev_bool_CServerResourceObject(long pNativeObject, String method);
	native protected void register_getResourceByID_ev_int32_ev_int32_CServerResourceObject(long pNativeObject, String method);
	native protected void register_getOrigTexture_ev_int32_CServerOrigTexture(long pNativeObject, String method);
	native protected void register_getLayerInfoRef_void(long pNativeObject, String method);
	native protected void register_getFeatureCount_EVString(long pNativeObject, String method);
	native protected void register_getAttrFeatureCount_EVString(long pNativeObject, String method);
	native protected void register_getFeatureID_ev_int32(long pNativeObject, String method);
	native protected void register_clearFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_hasSubDataset_void(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isBeginEditingOperation_void(long pNativeObject, String method);
	native protected void register_beginEditingOperation_void(long pNativeObject, String method);
	native protected void register_endEditingOperation_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getEntityObject_ev_int32_CServerEntityObject(this.nativeObject.pointer, "getEntityObject_ev_int32_CServerEntityObject_callback");
			this.register_getTemplateEntityObject_ev_int32_CServerTemplateEntityObject(this.nativeObject.pointer, "getTemplateEntityObject_ev_int32_CServerTemplateEntityObject_callback");
			this.register_getMesh_ev_int32_CServerMeshObject(this.nativeObject.pointer, "getMesh_ev_int32_CServerMeshObject_callback");
			this.register_getResource_ev_int32_ev_bool_CServerResourceObject(this.nativeObject.pointer, "getResource_ev_int32_ev_bool_CServerResourceObject_callback");
			this.register_getResourceByID_ev_int32_ev_int32_CServerResourceObject(this.nativeObject.pointer, "getResourceByID_ev_int32_ev_int32_CServerResourceObject_callback");
			this.register_getOrigTexture_ev_int32_CServerOrigTexture(this.nativeObject.pointer, "getOrigTexture_ev_int32_CServerOrigTexture_callback");
			this.register_getLayerInfoRef_void(this.nativeObject.pointer, "getLayerInfoRef_void_callback");
			this.register_getFeatureCount_EVString(this.nativeObject.pointer, "getFeatureCount_EVString_callback");
			this.register_getAttrFeatureCount_EVString(this.nativeObject.pointer, "getAttrFeatureCount_EVString_callback");
			this.register_getFeatureID_ev_int32(this.nativeObject.pointer, "getFeatureID_ev_int32_callback");
			this.register_clearFeature_ev_uint32(this.nativeObject.pointer, "clearFeature_ev_uint32_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_hasSubDataset_void(this.nativeObject.pointer, "hasSubDataset_void_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_isBeginEditingOperation_void(this.nativeObject.pointer, "isBeginEditingOperation_void_callback");
			this.register_beginEditingOperation_void(this.nativeObject.pointer, "beginEditingOperation_void_callback");
			this.register_endEditingOperation_ev_bool(this.nativeObject.pointer, "endEditingOperation_ev_bool_callback");
		}
	}
	
	public static Evmodeldataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evmodeldataset obj = null;
 		if(baseObj instanceof Evmodeldataset)
		{
			obj = (Evmodeldataset)baseObj;
		} else {
			obj = new Evmodeldataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVModelDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
