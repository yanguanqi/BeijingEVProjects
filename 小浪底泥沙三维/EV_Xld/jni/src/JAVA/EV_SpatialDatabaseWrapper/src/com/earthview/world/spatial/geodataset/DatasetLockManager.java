package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集锁管理类提供数据集锁查询，锁，破锁功能
 */
public class DatasetLockManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetLockManager", new DatasetLockManagerClassFactory());
	}

	native private static long getSingleton_void();
	/**
	 * 获取单例
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static com.earthview.world.spatial.geodataset.DatasetLockManager getSingleton()
	{
		long returnValue = getSingleton_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.DatasetLockManager __returnValue = new com.earthview.world.spatial.geodataset.DatasetLockManager(CreatedWhenConstruct.CWC_NotToCreate, "CDatasetLockManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.DatasetLockManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDatasetLockManager");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 析构单例
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private boolean lockDataset_CSqlDatabase_EVString(long pNativeObject, long db, String datasetname);
	/**
	 * 给数据集加锁
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean lockDataset(com.earthview.world.core.database.SqlDatabase db, String datasetname)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetnameParamValue = datasetname;
		boolean returnValue = lockDataset_CSqlDatabase_EVString(this.nativeObject.pointer, dbParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean lockDataset_IFileDataSource_EVString(long pNativeObject, long pDataSource, String datasetName);
	public boolean lockDataset(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String datasetName)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		boolean returnValue = lockDataset_IFileDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private boolean unlockDataset_CSqlDatabase_EVString(long pNativeObject, long db, String datasetname);
	/**
	 * 给数据集解锁
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean unlockDataset(com.earthview.world.core.database.SqlDatabase db, String datasetname)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetnameParamValue = datasetname;
		boolean returnValue = unlockDataset_CSqlDatabase_EVString(this.nativeObject.pointer, dbParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean unlockDataset_CSqlDatabase(long pNativeObject, long db);
	public boolean unlockDataset(com.earthview.world.core.database.SqlDatabase db)
	{
		long dbParamValue = db.nativeObject.pointer;
		boolean returnValue = unlockDataset_CSqlDatabase(this.nativeObject.pointer, dbParamValue);
		return returnValue;
	}
	native private boolean unlockDataset_IFileDataSource_EVString(long pNativeObject, long pDataSource, String datasetName);
	public boolean unlockDataset(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String datasetName)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		boolean returnValue = unlockDataset_IFileDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private boolean breakDatasetLock_CSqlDatabase_EVString(long pNativeObject, long db, String datasetname);
	/**
	 * 强制解锁
	 * @param  
	 */
	public boolean breakDatasetLock(com.earthview.world.core.database.SqlDatabase db, String datasetname)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetnameParamValue = datasetname;
		boolean returnValue = breakDatasetLock_CSqlDatabase_EVString(this.nativeObject.pointer, dbParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean isDatasetLocked_CSqlDatabase_EVString(long pNativeObject, long db, String datasetname);
	/**
	 * 检查数据集是否被锁
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isDatasetLocked(com.earthview.world.core.database.SqlDatabase db, String datasetname)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetnameParamValue = datasetname;
		boolean returnValue = isDatasetLocked_CSqlDatabase_EVString(this.nativeObject.pointer, dbParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean isDatasetLocked_IFileDataSource_EVString(long pNativeObject, long pDataSource, String datasetname);
	public boolean isDatasetLocked(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String datasetname)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetnameParamValue = datasetname;
		boolean returnValue = isDatasetLocked_IFileDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean isDatasetLockedBySelf_CSqlDatabase_EVString(long pNativeObject, long db, String datasetname);
	/**
	 * 判断数据集是否已经被自己锁定
	 * @param  
	 */
	public boolean isDatasetLockedBySelf(com.earthview.world.core.database.SqlDatabase db, String datasetname)
	{
		long dbParamValue = db.nativeObject.pointer;
		String datasetnameParamValue = datasetname;
		boolean returnValue = isDatasetLockedBySelf_CSqlDatabase_EVString(this.nativeObject.pointer, dbParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private boolean isDatasetLockedBySelf_IFileDataSource_EVString(long pNativeObject, long pDataSource, String datasetname);
	public boolean isDatasetLockedBySelf(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String datasetname)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetnameParamValue = datasetname;
		boolean returnValue = isDatasetLockedBySelf_IFileDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetnameParamValue);
		return returnValue;
	}
	native private long queryAllLockInfo_CSqlDatabase(long pNativeObject, long db);
	/**
	 * 查询所有数据集锁状态
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public com.earthview.world.spatial.geodataset.DatasetLockInfoVector queryAllLockInfo(com.earthview.world.core.database.SqlDatabase db)
	{
		long dbParamValue = db.nativeObject.pointer;
		long returnValue = queryAllLockInfo_CSqlDatabase(this.nativeObject.pointer, dbParamValue);
		com.earthview.world.spatial.geodataset.DatasetLockInfoVector __returnValue = new com.earthview.world.spatial.geodataset.DatasetLockInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDatasetLockInfoVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.DatasetLockInfoVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDatasetLockInfoVector");
		}
		return __returnValue;
	}
	native private long lockerName_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer lockerName()
	{
		long returnValue = lockerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public DatasetLockManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetLockManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetLockManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetLockManager obj = null;
 		if(baseObj instanceof DatasetLockManager)
		{
			obj = (DatasetLockManager)baseObj;
		} else {
			obj = new DatasetLockManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasetLockManager");
			obj.increaseCast();
		}

		return obj;
	}
}
