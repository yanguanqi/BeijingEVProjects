package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlDataSet extends com.earthview.world.spatial.geodataset.Idataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlDataSet", new KmlDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::JCKmlDataSetProxy", new KmlDataSetClassFactory());
	}

	///KmlDataset容器类
	public static class KmlDataSets extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets", new KmlDataSetsClassFactory());
		}

		public KmlDataSets() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CKmlDataSets", null);
		}

		native private void push_back_CKmlDataSet(long pNativeObject, long t);
		/**
		 * 在容器最后添加对象
		 * @param t 待增加的队像
		 */
		public void push_back(NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet> t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CKmlDataSet(this.nativeObject.pointer, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 移除容器指定位置的对象
		 * @param pos 对象的位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为null
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.kmlmanager.KmlDataSet>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public KmlDataSets(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public KmlDataSets(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static KmlDataSets fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			KmlDataSets obj = null;
 			if(baseObj instanceof KmlDataSets)
			{
				obj = (KmlDataSets)baseObj;
			} else {
				obj = new KmlDataSets(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CKmlDataSets");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class KmlDataSetsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			KmlDataSets emptyInstance = new KmlDataSets(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 */
	public KmlDataSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCKmlDataSetProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.kmlmanager.KmlDataSet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param  数据集的名字
	 */
	public KmlDataSet(String filename) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filenamePtr = new BasePointer(filename);
		list.add("filename", filenamePtr.get());
		Create("JCKmlDataSetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.kmlmanager.KmlDataSet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long get_mParentDataSets_void(long pNativeObject);
	public com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets get_mParentDataSets()
	{
		long jniValue = get_mParentDataSets_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlDataSets");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlDataSets");
		}
		return __returnValue;
	}
	
	native private void set_mParentDataSets_CKmlDataSets (long pNativeObject, long value);
	public void set_mParentDataSets(com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets mParentDataSets)
	{
		long mParentDataSetsParamValue = mParentDataSets.nativeObject.pointer;
		
		set_mParentDataSets_CKmlDataSets(this.nativeObject.pointer, mParentDataSetsParamValue);
	}
	
	native private long get_mSubDataSets_void(long pNativeObject);
	public com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets get_mSubDataSets()
	{
		long jniValue = get_mSubDataSets_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlDataSets");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlDataSets");
		}
		return __returnValue;
	}
	
	native private void set_mSubDataSets_CKmlDataSets (long pNativeObject, long value);
	public void set_mSubDataSets(com.earthview.world.spatial3d.kmlmanager.KmlDataSet.KmlDataSets mSubDataSets)
	{
		long mSubDataSetsParamValue = mSubDataSets.nativeObject.pointer;
		
		set_mSubDataSets_CKmlDataSets(this.nativeObject.pointer, mSubDataSetsParamValue);
	}
	
	native private boolean get_mIsDirty_void(long pNativeObject);
	public boolean get_mIsDirty()
	{
		boolean jniValue = get_mIsDirty_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsDirty_ev_bool (long pNativeObject, boolean value);
	public void set_mIsDirty(boolean mIsDirty)
	{
		boolean mIsDirtyParamValue = mIsDirty;
		
		set_mIsDirty_ev_bool(this.nativeObject.pointer, mIsDirtyParamValue);
	}
	
	native private boolean get_mIsAddGeoObject_void(long pNativeObject);
	public boolean get_mIsAddGeoObject()
	{
		boolean jniValue = get_mIsAddGeoObject_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsAddGeoObject_ev_bool (long pNativeObject, boolean value);
	public void set_mIsAddGeoObject(boolean mIsAddGeoObject)
	{
		boolean mIsAddGeoObjectParamValue = mIsAddGeoObject;
		
		set_mIsAddGeoObject_ev_bool(this.nativeObject.pointer, mIsAddGeoObjectParamValue);
	}
	
	native private boolean get_mIsDeRenderGeoObject_void(long pNativeObject);
	public boolean get_mIsDeRenderGeoObject()
	{
		boolean jniValue = get_mIsDeRenderGeoObject_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsDeRenderGeoObject_ev_bool (long pNativeObject, boolean value);
	public void set_mIsDeRenderGeoObject(boolean mIsDeRenderGeoObject)
	{
		boolean mIsDeRenderGeoObjectParamValue = mIsDeRenderGeoObject;
		
		set_mIsDeRenderGeoObject_ev_bool(this.nativeObject.pointer, mIsDeRenderGeoObjectParamValue);
	}
	
	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据集描述
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据集更新时间
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean hasSubDataset_void(long pNativeObject);
	/**
	 * 判断是否包含子数据集
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		boolean returnValue = hasSubDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSubDataset_void_NoVirtual(long pNativeObject);
	protected boolean hasSubDataset_NoVirtual()
	{
		boolean returnValue = hasSubDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 判断数据集是否具有编辑能力
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑状态
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_bool_NoVirtual(long pNativeObject, boolean withUndo);
	protected boolean startEditing_NoVirtual(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool_NoVirtual(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}

	native private boolean stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}
	native private boolean stopEditing_ev_bool_NoVirtual(long pNativeObject, boolean isSave);
	protected boolean stopEditing_NoVirtual(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool_NoVirtual(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}

	native private boolean isBeginEditingOperation_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		boolean returnValue = isBeginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBeginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean isBeginEditingOperation_NoVirtual()
	{
		boolean returnValue = isBeginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean beginEditingOperation_void(long pNativeObject);
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		boolean returnValue = beginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean beginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean beginEditingOperation_NoVirtual()
	{
		boolean returnValue = beginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean endEditingOperation_ev_bool(long pNativeObject, boolean isConfirm);
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}
	native private boolean endEditingOperation_ev_bool_NoVirtual(long pNativeObject, boolean isConfirm);
	protected boolean endEditingOperation_NoVirtual(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool_NoVirtual(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}

	native private void setDataSourceRef_CKmlDataSource(long pNativeObject, long ref_dataSource);
	/**
	 * 设置数据源
	 * @param dataSource kml数据源
	 */
	public void setDataSourceRef(com.earthview.world.spatial3d.kmlmanager.KmlDataSource ref_dataSource)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		setDataSourceRef_CKmlDataSource(this.nativeObject.pointer, ref_dataSourceParamValue);
	}
	native private void addFolder_CKmlDocument_CKmlDocument(long pNativeObject, long ref_kmlDocument, long ref_parent);
	/**
	 * 添加文件夹,图层
	 * @param kmlDocument kml文档
	 * @param parent kml父文档
	 */
	public void addFolder(com.earthview.world.spatial.kml.KmlDocument ref_kmlDocument, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_kmlDocumentParamValue = (ref_kmlDocument == null ? 0L : ref_kmlDocument.nativeObject.pointer);
		if(ref_kmlDocument != null)
		{
		ref_kmlDocument.setNoFree(true);
		}
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		addFolder_CKmlDocument_CKmlDocument(this.nativeObject.pointer, ref_kmlDocumentParamValue, ref_parentParamValue);
	}
	native private long addKmlFile_EVString_CKmlDocument(long pNativeObject, String filePath, long parent);
	/**
	 * 添加本地KML文件
	 * @param filePath kml文件
	 * @param parent kml父文档
	 * @return kml文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument addKmlFile(String filePath, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		String filePathParamValue = filePath;
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		long returnValue = addKmlFile_EVString_CKmlDocument(this.nativeObject.pointer, filePathParamValue, parentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private long addNetworkLink_CKmlNetworkLink_CKmlDocument(long pNativeObject, long ref_kmlNet, long parent);
	/**
	 * 添加KML网络链接
	 * @param kmlNet kml网络连接
	 * @param parent kml父文档
	 * @return kml文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument addNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink ref_kmlNet, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long ref_kmlNetParamValue = (ref_kmlNet == null ? 0L : ref_kmlNet.nativeObject.pointer);
		if(ref_kmlNet != null)
		{
		ref_kmlNet.setNoFree(true);
		}
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		long returnValue = addNetworkLink_CKmlNetworkLink_CKmlDocument(this.nativeObject.pointer, ref_kmlNetParamValue, parentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private void addKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long ref_geoObj, long ref_parent);
	/**
	 * 添加KML对象
	 * @param geoObj 地理对象
	 * @param parent kml父文档
	 */
	public void addKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObj, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_geoObjParamValue = (ref_geoObj == null ? 0L : ref_geoObj.nativeObject.pointer);
		if(ref_geoObj != null)
		{
		ref_geoObj.setNoFree(true);
		}
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		addKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, ref_geoObjParamValue, ref_parentParamValue);
	}
	native private void updateKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long ref_geoObj, long parent);
	/**
	 * 添加KML对象
	 * @param geoObj 地理对象
	 * @param parent kml父文档
	 */
	public void updateKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObj, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long ref_geoObjParamValue = (ref_geoObj == null ? 0L : ref_geoObj.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		updateKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, ref_geoObjParamValue, parentParamValue);
	}
	native private void addTour_CTour_CKmlDocument(long pNativeObject, long ref_tour, long ref_parent);
	/**
	 * 添加KML游览对象
	 * @param tour 游览对象
	 * @param parent kml父文档
	 */
	public void addTour(com.earthview.world.spatial.kml.Tour ref_tour, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_tourParamValue = (ref_tour == null ? 0L : ref_tour.nativeObject.pointer);
		if(ref_tour != null)
		{
		ref_tour.setNoFree(true);
		}
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		addTour_CTour_CKmlDocument(this.nativeObject.pointer, ref_tourParamValue, ref_parentParamValue);
	}
	native private boolean removeKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long ref_geoObj, long ref_parent);
	/**
	 * 删除KML对象
	 * @param geoObj 地理对象
	 * @param parent kml父文档
	 */
	public boolean removeKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObj, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_geoObjParamValue = (ref_geoObj == null ? 0L : ref_geoObj.nativeObject.pointer);
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean returnValue = removeKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, ref_geoObjParamValue, ref_parentParamValue);
		return returnValue;
	}
	native private boolean removeFolder_CKmlDocument(long pNativeObject, long ref_kmlDocument);
	/**
	 * 删除KML文件夹
	 * @param parent kml父文档
	 */
	public boolean removeFolder(com.earthview.world.spatial.kml.KmlDocument ref_kmlDocument)
	{
		long ref_kmlDocumentParamValue = (ref_kmlDocument == null ? 0L : ref_kmlDocument.nativeObject.pointer);
		boolean returnValue = removeFolder_CKmlDocument(this.nativeObject.pointer, ref_kmlDocumentParamValue);
		return returnValue;
	}
	native private boolean removeKmlNetworkLink_CKmlNetworkLink_CKmlDocument(long pNativeObject, long netLink, long parent);
	/**
	 * 删除KML网络连接
	 * @param netLink kml网络连接
	 * @param parent kml父文档
	 */
	public boolean removeKmlNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink netLink, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long netLinkParamValue = (netLink == null ? 0L : netLink.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		boolean returnValue = removeKmlNetworkLink_CKmlNetworkLink_CKmlDocument(this.nativeObject.pointer, netLinkParamValue, parentParamValue);
		return returnValue;
	}
	native private boolean removeTour_CTour_CKmlDocument(long pNativeObject, long ref_tour, long ref_parent);
	/**
	 * 删除KML游览对象
	 * @param tour 游览
	 * @param parent kml父文档
	 */
	public boolean removeTour(com.earthview.world.spatial.kml.Tour ref_tour, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_tourParamValue = (ref_tour == null ? 0L : ref_tour.nativeObject.pointer);
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean returnValue = removeTour_CTour_CKmlDocument(this.nativeObject.pointer, ref_tourParamValue, ref_parentParamValue);
		return returnValue;
	}
	native private boolean save_EVString(long pNativeObject, String savePath);
	/**
	 * 保存图层
	 * @param savePath 保存的路径
	 * @return 成功返回true，否则返回false
	 */
	public boolean save(String savePath)
	{
		String savePathParamValue = savePath;
		boolean returnValue = save_EVString(this.nativeObject.pointer, savePathParamValue);
		return returnValue;
	}
	native private boolean saveKmlObject_EVString_CGeoObjectExtension(long pNativeObject, String savePath, long geoObj);
	/**
	 * 保存kml对象
	 * @param savePath 保存的路径
	 * @param geoObj 地理对象
	 * @return 成功返回true，否则返回false
	 */
	public boolean saveKmlObject(String savePath, com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		String savePathParamValue = savePath;
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		boolean returnValue = saveKmlObject_EVString_CGeoObjectExtension(this.nativeObject.pointer, savePathParamValue, geoObjParamValue);
		return returnValue;
	}
	native private boolean saveKmlNetworkLink_EVString_CKmlNetworkLink(long pNativeObject, String savePath, long netLink);
	/**
	 * 保存kml网络连接对象
	 * @param savePath 保存的路径
	 * @param netLink 网络连接对象
	 * @return 成功返回true，否则返回false
	 */
	public boolean saveKmlNetworkLink(String savePath, com.earthview.world.spatial.kml.KmlNetworkLink netLink)
	{
		String savePathParamValue = savePath;
		long netLinkParamValue = (netLink == null ? 0L : netLink.nativeObject.pointer);
		boolean returnValue = saveKmlNetworkLink_EVString_CKmlNetworkLink(this.nativeObject.pointer, savePathParamValue, netLinkParamValue);
		return returnValue;
	}
	native private boolean saveFolder_EVString_CKmlDocument(long pNativeObject, String savePath, long ref_folder);
	/**
	 * 保存文件夹
	 * @param savePath 保存的路径
	 * @param folder kml文件夹
	 * @return 成功返回true，否则返回false
	 */
	public boolean saveFolder(String savePath, com.earthview.world.spatial.kml.KmlDocument ref_folder)
	{
		String savePathParamValue = savePath;
		long ref_folderParamValue = (ref_folder == null ? 0L : ref_folder.nativeObject.pointer);
		boolean returnValue = saveFolder_EVString_CKmlDocument(this.nativeObject.pointer, savePathParamValue, ref_folderParamValue);
		return returnValue;
	}
	native private boolean saveTour_EVString_CTour(long pNativeObject, String savePath, long tour);
	/**
	 * /保存路径游览/
	 * @param savePath 保存的路径
	 * @param tour 游览对象
	 * @return 成功返回true，否则返回false
	 */
	public boolean saveTour(String savePath, com.earthview.world.spatial.kml.Tour tour)
	{
		String savePathParamValue = savePath;
		long tourParamValue = (tour == null ? 0L : tour.nativeObject.pointer);
		boolean returnValue = saveTour_EVString_CTour(this.nativeObject.pointer, savePathParamValue, tourParamValue);
		return returnValue;
	}
	native private long getEnvelopeRef_ev_bool(long pNativeObject, long hasData);
	/**
	 * 获取包围盒
	 * @return 返回包围盒信息
	 */
	public com.earthview.world.spatial.geometry.Envelope getEnvelopeRef(BooleanPointer hasData)
	{
		long hasDataParamValue = hasData.nativeObject.pointer;
		long returnValue = getEnvelopeRef_ev_bool(this.nativeObject.pointer, hasDataParamValue);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private String get_mFilePath_void(long pNativeObject);
	public String get_mFilePath()
	{
		String jniValue = get_mFilePath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFilePath_EVString (long pNativeObject, String value);
	public void set_mFilePath(String mFilePath)
	{
		String mFilePathParamValue = mFilePath;
		
		set_mFilePath_EVString(this.nativeObject.pointer, mFilePathParamValue);
	}
	
	native private boolean get_misShare_void(long pNativeObject);
	public boolean get_misShare()
	{
		boolean jniValue = get_misShare_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misShare_ev_bool (long pNativeObject, boolean value);
	public void set_misShare(boolean misShare)
	{
		boolean misShareParamValue = misShare;
		
		set_misShare_ev_bool(this.nativeObject.pointer, misShareParamValue);
	}
	
	native private long get_mKmlDocument_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument get_mKmlDocument()
	{
		long jniValue = get_mKmlDocument_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	
	native private void set_mKmlDocument_CKmlDocument (long pNativeObject, long value);
	public void set_mKmlDocument(com.earthview.world.spatial.kml.KmlDocument mKmlDocument)
	{
		long mKmlDocumentParamValue = (mKmlDocument == null ? 0L : mKmlDocument.nativeObject.pointer);
		
		set_mKmlDocument_CKmlDocument(this.nativeObject.pointer, mKmlDocumentParamValue);
	}
	
	native private boolean removeFolder_CKmlDocument_CKmlDocument(long pNativeObject, long ref_kmlDocument, long ref_parent);
	/**
	 * 删除KML文件夹
	 * @param parent kml父文档
	 */
	public boolean removeFolder(com.earthview.world.spatial.kml.KmlDocument ref_kmlDocument, com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_kmlDocumentParamValue = (ref_kmlDocument == null ? 0L : ref_kmlDocument.nativeObject.pointer);
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean returnValue = removeFolder_CKmlDocument_CKmlDocument(this.nativeObject.pointer, ref_kmlDocumentParamValue, ref_parentParamValue);
		return returnValue;
	}
	public KmlDataSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlDataSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static KmlDataSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlDataSet obj = null;
 		if(baseObj instanceof KmlDataSet)
		{
			obj = (KmlDataSet)baseObj;
		} else {
			obj = new KmlDataSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlDataSet");
			obj.increaseCast();
		}

		return obj;
	}
}
