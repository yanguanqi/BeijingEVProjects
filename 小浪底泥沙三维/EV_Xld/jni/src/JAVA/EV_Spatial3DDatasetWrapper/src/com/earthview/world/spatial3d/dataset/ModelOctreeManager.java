package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///class EV_Spatial3DDataset_DLL CModelOctreeNode : public EarthView::World::Spatial::Octree::CBaseOctreeNode
///{
///ev_private:
///	CModelOctreeNode(EarthView::World::Core::CNameValuePairList* pList);
///public:
///	CModelOctreeNode();
///	CModelOctreeNode(ev_uint32 objectID,  const EarthView::World::Spatial::Math::CAxisAlignedBox& box);
///	virtual ~CModelOctreeNode();
///	EarthView::World::Spatial::Octree::CBaseOctreeNode* clone();
///public:
///	EarthView::World::Spatial::Math::CAxisAlignedBox mInitAABBox;
///};
public class ModelOctreeManager extends com.earthview.world.spatial.octree.OctreeManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelOctreeManager", new ModelOctreeManagerClassFactory());
	}

	native private static long newDatasourceModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(long db, String datasourceName, long box, long maxDepth, boolean autoInit);
	/// 构造数据源八叉树管理对象
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasourceModelOctreeManager(com.earthview.world.core.database.SqlDatabase db, String datasourceName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, boolean autoInit)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasourceNameParamValue = datasourceName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasourceModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(dbParamValue, datasourceNameParamValue, boxParamValue, maxDepthParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasourceModelOctreeManagerWithCache_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(long db, String datasourceName, long box, long maxDepth, String cacheFolder, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasourceModelOctreeManagerWithCache(com.earthview.world.core.database.SqlDatabase db, String datasourceName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, String cacheFolder, boolean autoInit)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasourceNameParamValue = datasourceName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		String cacheFolderParamValue = cacheFolder;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasourceModelOctreeManagerWithCache_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(dbParamValue, datasourceNameParamValue, boxParamValue, maxDepthParamValue, cacheFolderParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasourceModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(String web, String datasourceName, long box, long maxDepth, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasourceModelOctreeManager(String web, String datasourceName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, boolean autoInit)
	{
		String webParamValue = web;
		String datasourceNameParamValue = datasourceName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasourceModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(webParamValue, datasourceNameParamValue, boxParamValue, maxDepthParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasourceModelOctreeManagerWithCache_EVString_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(String web, String datasourceName, long box, long maxDepth, String cacheFolder, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasourceModelOctreeManagerWithCache(String web, String datasourceName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, String cacheFolder, boolean autoInit)
	{
		String webParamValue = web;
		String datasourceNameParamValue = datasourceName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		String cacheFolderParamValue = cacheFolder;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasourceModelOctreeManagerWithCache_EVString_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(webParamValue, datasourceNameParamValue, boxParamValue, maxDepthParamValue, cacheFolderParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasetModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(long db, String datasetAliasName, long box, long maxDepth, boolean autoInit);
	/// 构造数据集八叉树管理对象
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasetModelOctreeManager(com.earthview.world.core.database.SqlDatabase db, String datasetAliasName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, boolean autoInit)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetAliasNameParamValue = datasetAliasName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasetModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(dbParamValue, datasetAliasNameParamValue, boxParamValue, maxDepthParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasetModelOctreeManagerWithCache_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(long db, String datasetAliasName, long box, long maxDepth, String cacheFolder, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasetModelOctreeManagerWithCache(com.earthview.world.core.database.SqlDatabase db, String datasetAliasName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, String cacheFolder, boolean autoInit)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetAliasNameParamValue = datasetAliasName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		String cacheFolderParamValue = cacheFolder;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasetModelOctreeManagerWithCache_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(dbParamValue, datasetAliasNameParamValue, boxParamValue, maxDepthParamValue, cacheFolderParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasetModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(String web, String datasetAliasName, long box, long maxDepth, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasetModelOctreeManager(String web, String datasetAliasName, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, boolean autoInit)
	{
		String webParamValue = web;
		String datasetAliasNameParamValue = datasetAliasName;
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasetModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(webParamValue, datasetAliasNameParamValue, boxParamValue, maxDepthParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasetModelOctreeManagerWithCache_EVString_CEVSpatialServer_CEVBaseModelDataset_CAxisAlignedBox_ev_uint32_EVString_ev_bool(String web, long pNetServer, long pNetDataset, long box, long maxDepth, String cacheFolder, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasetModelOctreeManagerWithCache(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, String cacheFolder, boolean autoInit)
	{
		String webParamValue = web;
		long pNetServerParamValue = (pNetServer == null ? 0L : pNetServer.nativeObject.pointer);
		long pNetDatasetParamValue = (pNetDataset == null ? 0L : pNetDataset.nativeObject.pointer);
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		String cacheFolderParamValue = cacheFolder;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasetModelOctreeManagerWithCache_EVString_CEVSpatialServer_CEVBaseModelDataset_CAxisAlignedBox_ev_uint32_EVString_ev_bool(webParamValue, pNetServerParamValue, pNetDatasetParamValue, boxParamValue, maxDepthParamValue, cacheFolderParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	native private static long newDatasetModelOctreeManagerWithCache_EVString_CEVSpatialServer_CEVBaseModelDataset_CEVBaseModelLayerInfo_CAxisAlignedBox_ev_uint32_EVString_ev_bool(String web, long pNetServer, long pNetDataset, long pNetDatasetInfo, long box, long maxDepth, String cacheFolder, boolean autoInit);
	public static com.earthview.world.spatial3d.dataset.ModelOctreeManager newDatasetModelOctreeManagerWithCache(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.Evbasemodellayerinfo pNetDatasetInfo, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth, String cacheFolder, boolean autoInit)
	{
		String webParamValue = web;
		long pNetServerParamValue = (pNetServer == null ? 0L : pNetServer.nativeObject.pointer);
		long pNetDatasetParamValue = (pNetDataset == null ? 0L : pNetDataset.nativeObject.pointer);
		long pNetDatasetInfoParamValue = (pNetDatasetInfo == null ? 0L : pNetDatasetInfo.nativeObject.pointer);
		long boxParamValue = box.nativeObject.pointer;
		long maxDepthParamValue = maxDepth;
		String cacheFolderParamValue = cacheFolder;
		boolean autoInitParamValue = autoInit;
		long returnValue = newDatasetModelOctreeManagerWithCache_EVString_CEVSpatialServer_CEVBaseModelDataset_CEVBaseModelLayerInfo_CAxisAlignedBox_ev_uint32_EVString_ev_bool(webParamValue, pNetServerParamValue, pNetDatasetParamValue, pNetDatasetInfoParamValue, boxParamValue, maxDepthParamValue, cacheFolderParamValue, autoInitParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelOctreeManager __returnValue = new com.earthview.world.spatial3d.dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelOctreeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelOctreeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelOctreeManager");
		}
		return __returnValue;
	}
	/**
	 * 
	 * @param  
	 */
	public ModelOctreeManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelOctreeManager", null);
	}

	/**
	 * 
	 * @param  
	 */
	public ModelOctreeManager(com.earthview.world.core.database.SqlDatabase db, String octreeTable, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		BasePointer octreeTablePtr = new BasePointer(octreeTable);
		list.add("octreeTable", octreeTablePtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CModelOctreeManager", list);
	}

	/**
	 * 
	 * @param  
	 */
	public ModelOctreeManager(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer webPtr = new BasePointer(web);
		list.add("web", webPtr.get());
		BasePointer pNetServerPtr = new BasePointer(pNetServer);
		list.add("pNetServer", pNetServerPtr.get());
		BasePointer pNetDatasetPtr = new BasePointer(pNetDataset);
		list.add("pNetDataset", pNetDatasetPtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CModelOctreeManager", list);
	}

	public ModelOctreeManager(String web, com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.Evbasemodeldataset pNetDataset, com.earthview.world.spatial.Evbasemodellayerinfo pNetDatasetInfo, com.earthview.world.spatial.math.AxisAlignedBox box, long maxDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer webPtr = new BasePointer(web);
		list.add("web", webPtr.get());
		BasePointer pNetServerPtr = new BasePointer(pNetServer);
		list.add("pNetServer", pNetServerPtr.get());
		BasePointer pNetDatasetPtr = new BasePointer(pNetDataset);
		list.add("pNetDataset", pNetDatasetPtr.get());
		BasePointer pNetDatasetInfoPtr = new BasePointer(pNetDatasetInfo);
		list.add("pNetDatasetInfo", pNetDatasetInfoPtr.get());
		BasePointer boxPtr = new BasePointer(box);
		list.add("box", boxPtr.get());
		BasePointer maxDepthPtr = new BasePointer(maxDepth);
		list.add("maxDepth", maxDepthPtr.get());
		Create("CModelOctreeManager", list);
	}

	public ModelOctreeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelOctreeManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelOctreeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelOctreeManager obj = null;
 		if(baseObj instanceof ModelOctreeManager)
		{
			obj = (ModelOctreeManager)baseObj;
		} else {
			obj = new ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelOctreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
