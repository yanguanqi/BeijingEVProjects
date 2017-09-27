package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 工程文件管理单体类
 */
public class ProjectManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager", new ProjectManagerClassFactory());
	}

	public static class Iprojectmanagerlistener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener", new IprojectmanagerlistenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager::JIProjectManagerListenerProxy", new IprojectmanagerlistenerClassFactory());
		}

		public Iprojectmanagerlistener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JIProjectManagerListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.spatial.utility.ProjectManager$Iprojectmanagerlistener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void onProjectFilePreLoaded_void_callback()
		{
			onProjectFilePreLoaded();
		}

		native private void onProjectFilePreLoaded_void(long pNativeObject);
		public void onProjectFilePreLoaded()
		{
			onProjectFilePreLoaded_void(this.nativeObject.pointer);
		}
		native private void onProjectFilePreLoaded_void_NoVirtual(long pNativeObject);
		protected void onProjectFilePreLoaded_NoVirtual()
		{
			onProjectFilePreLoaded_void_NoVirtual(this.nativeObject.pointer);
		}

		protected  void onProjectFileLoaded_void_callback()
		{
			onProjectFileLoaded();
		}

		native private void onProjectFileLoaded_void(long pNativeObject);
		public void onProjectFileLoaded()
		{
			onProjectFileLoaded_void(this.nativeObject.pointer);
		}
		native private void onProjectFileLoaded_void_NoVirtual(long pNativeObject);
		protected void onProjectFileLoaded_NoVirtual()
		{
			onProjectFileLoaded_void_NoVirtual(this.nativeObject.pointer);
		}

		protected  boolean isProjectFileCanLoad_void_callback()
		{
			boolean returnValue = isProjectFileCanLoad();
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean isProjectFileCanLoad_void(long pNativeObject);
		public boolean isProjectFileCanLoad()
		{
			boolean returnValue = isProjectFileCanLoad_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private boolean isProjectFileCanLoad_void_NoVirtual(long pNativeObject);
		protected boolean isProjectFileCanLoad_NoVirtual()
		{
			boolean returnValue = isProjectFileCanLoad_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		protected  void onProjectLoadingProcessChanged_EVString_ev_uint8_callback(String tips, short percent)
		{
			String tipsParamValue = tips;
			short percentParamValue = percent;
			onProjectLoadingProcessChanged(tipsParamValue, percentParamValue);
		}

		native private void onProjectLoadingProcessChanged_EVString_ev_uint8(long pNativeObject, String tips, short percent);
		public void onProjectLoadingProcessChanged(String tips, short percent)
		{
			String tipsParamValue = tips;
			short percentParamValue = percent;
			onProjectLoadingProcessChanged_EVString_ev_uint8(this.nativeObject.pointer, tipsParamValue, percentParamValue);
		}
		native private void onProjectLoadingProcessChanged_EVString_ev_uint8_NoVirtual(long pNativeObject, String tips, short percent);
		protected void onProjectLoadingProcessChanged_NoVirtual(String tips, short percent)
		{
			String tipsParamValue = tips;
			short percentParamValue = percent;
			onProjectLoadingProcessChanged_EVString_ev_uint8_NoVirtual(this.nativeObject.pointer, tipsParamValue, percentParamValue);
		}

		public Iprojectmanagerlistener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Iprojectmanagerlistener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_onProjectFilePreLoaded_void(long pNativeObject, String method);
		native protected void register_onProjectFileLoaded_void(long pNativeObject, String method);
		native protected void register_isProjectFileCanLoad_void(long pNativeObject, String method);
		native protected void register_onProjectLoadingProcessChanged_EVString_ev_uint8(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_onProjectFilePreLoaded_void(this.nativeObject.pointer, "onProjectFilePreLoaded_void_callback");
				this.register_onProjectFileLoaded_void(this.nativeObject.pointer, "onProjectFileLoaded_void_callback");
				this.register_isProjectFileCanLoad_void(this.nativeObject.pointer, "isProjectFileCanLoad_void_callback");
				this.register_onProjectLoadingProcessChanged_EVString_ev_uint8(this.nativeObject.pointer, "onProjectLoadingProcessChanged_EVString_ev_uint8_callback");
			}
		}
		
		public static Iprojectmanagerlistener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Iprojectmanagerlistener obj = null;
 			if(baseObj instanceof Iprojectmanagerlistener)
			{
				obj = (Iprojectmanagerlistener)baseObj;
			} else {
				obj = new Iprojectmanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "IProjectManagerListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IprojectmanagerlistenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Iprojectmanagerlistener emptyInstance = new Iprojectmanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ProjectManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CProjectManager", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.spatial.utility.ProjectManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial.utility.ProjectManager __returnValue = new com.earthview.world.spatial.utility.ProjectManager(CreatedWhenConstruct.CWC_NotToCreate, "CProjectManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.ProjectManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProjectManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.spatial.utility.ProjectManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.ProjectManager __returnValue = new com.earthview.world.spatial.utility.ProjectManager(CreatedWhenConstruct.CWC_NotToCreate, "CProjectManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.ProjectManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProjectManager");
		}
		return __returnValue;
	}
	native private void setSymbolListener_ISymbolListener(long pNativeObject, long ref_pListener);
	/**
	 * 设置符号解析监听者该监听者负责自定义符号的解译
	 * @param pListener 监听者
	 */
	public void setSymbolListener(com.earthview.world.spatial.display.Isymbollistener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setSymbolListener_ISymbolListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private long getSymbolListener_void(long pNativeObject);
	/**
	 * 获得符号解析监听者
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbollistener getSymbolListener()
	{
		long returnValue = getSymbolListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbollistener __returnValue = new com.earthview.world.spatial.display.Isymbollistener(CreatedWhenConstruct.CWC_NotToCreate, "ISymbolListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbollistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbolListener");
		}
		return __returnValue;
	}
	native private void setMapFactory_IMapFactory(long pNativeObject, long ref_pFactory);
	/**
	 * 设置地图工厂
	 * @param pFactory 地图工厂
	 */
	public void setMapFactory(com.earthview.world.spatial.atlas.Imapfactory ref_pFactory)
	{
		long ref_pFactoryParamValue = (ref_pFactory == null ? 0L : ref_pFactory.nativeObject.pointer);
		setMapFactory_IMapFactory(this.nativeObject.pointer, ref_pFactoryParamValue);
	}
	native private long getMapFactory_void(long pNativeObject);
	/**
	 * 获取地图参数解析对象
	 * @param  
	 */
	public com.earthview.world.spatial.atlas.Imapfactory getMapFactory()
	{
		long returnValue = getMapFactory_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imapfactory __returnValue = new com.earthview.world.spatial.atlas.Imapfactory(CreatedWhenConstruct.CWC_NotToCreate, "IMapFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imapfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMapFactory");
		}
		return __returnValue;
	}
	native private void setSceneFactory_ISceneFactory(long pNativeObject, long ref_pFactory);
	/**
	 * 设置场景参数解析对象
	 * @param pFactory 场景工厂
	 */
	public void setSceneFactory(com.earthview.world.spatial.atlas.Iscenefactory ref_pFactory)
	{
		long ref_pFactoryParamValue = (ref_pFactory == null ? 0L : ref_pFactory.nativeObject.pointer);
		setSceneFactory_ISceneFactory(this.nativeObject.pointer, ref_pFactoryParamValue);
	}
	native private long getSceneFactory_void(long pNativeObject);
	/**
	 * 获取场景工厂
	 * @param  
	 */
	public com.earthview.world.spatial.atlas.Iscenefactory getSceneFactory()
	{
		long returnValue = getSceneFactory_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscenefactory __returnValue = new com.earthview.world.spatial.atlas.Iscenefactory(CreatedWhenConstruct.CWC_NotToCreate, "ISceneFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscenefactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISceneFactory");
		}
		return __returnValue;
	}
	native private int load_EVString(long pNativeObject, String strPrjFilePath);
	/**
	 * 加载工程文件，并进行解译
	 * @param strPrjFilePath 工程文件路径
	 * @return -1:文件未找到;0:加载成功;1:自定义符号未解译;2:地图参数未解译;3:自定义符号和地图参数未解译;4:场景参数为解译;5:自定义符号和参数未解译;6:地图参数和场景参数未解译;7:自定义符号、地图参数和场景参数未解译;100:未找到数据源;1000:其它错误
	 */
	public int load(String strPrjFilePath)
	{
		String strPrjFilePathParamValue = strPrjFilePath;
		int returnValue = load_EVString(this.nativeObject.pointer, strPrjFilePathParamValue);
		return returnValue;
	}
	native private int autoLoad_EVString_ev_bool(long pNativeObject, String strPrjFilePath, boolean isDefaultPro);
	public int autoLoad(String strPrjFilePath, boolean isDefaultPro)
	{
		String strPrjFilePathParamValue = strPrjFilePath;
		boolean isDefaultProParamValue = isDefaultPro;
		int returnValue = autoLoad_EVString_ev_bool(this.nativeObject.pointer, strPrjFilePathParamValue, isDefaultProParamValue);
		return returnValue;
	}
	native private boolean isLoading_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean isLoading()
	{
		boolean returnValue = isLoading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canRenew_void(long pNativeObject);
	/**
	 * 返回是否可以重新打工程文件
	 * @param  
	 */
	public boolean canRenew()
	{
		boolean returnValue = canRenew_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void renew_void(long pNativeObject);
	/**
	 * 创建新的工程文件调用此函数，将重新初始化
	 * @param  
	 */
	public void renew()
	{
		renew_void(this.nativeObject.pointer);
	}
	native private boolean save_void(long pNativeObject);
	/**
	 * 保存工程文件当调用load加载后，可调用此函数就地保存
	 * @param  
	 */
	public boolean save()
	{
		boolean returnValue = save_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean autoSave_EVString(long pNativeObject, String strPrjFilePath);
	public boolean autoSave(String strPrjFilePath)
	{
		String strPrjFilePathParamValue = strPrjFilePath;
		boolean returnValue = autoSave_EVString(this.nativeObject.pointer, strPrjFilePathParamValue);
		return returnValue;
	}
	native private boolean saveAs_EVString(long pNativeObject, String strPrjFilePath);
	/**
	 * 另存为工程文件当调用new创建或load加载后，可调用此函数进行保存
	 * @param strPrjFilePath 工程文件另存
	 */
	public boolean saveAs(String strPrjFilePath)
	{
		String strPrjFilePathParamValue = strPrjFilePath;
		boolean returnValue = saveAs_EVString(this.nativeObject.pointer, strPrjFilePathParamValue);
		return returnValue;
	}
	native private boolean isProjectChanged_void(long pNativeObject);
	/**
	 * 询问工程配置是否发生改变					
	 * @param  
	 */
	public boolean isProjectChanged()
	{
		boolean returnValue = isProjectChanged_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setProjectChanged_void(long pNativeObject);
	/**
	 * 设置工程配置为已改变。			
	 * @param  
	 */
	public void setProjectChanged()
	{
		setProjectChanged_void(this.nativeObject.pointer);
	}
	native private long getDataSourceCount_void(long pNativeObject);
	/**
	 * 获得数据源的个数					
	 * @param  
	 */
	public long getDataSourceCount()
	{
		long returnValue = getDataSourceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addDataSource_EVString_IDataSource(long pNativeObject, String strName, long ref_ds);
	/**
	 * 添加数据源到工程配置中					
	 * @param strName 数据源名称主键
	 * @param ds 数据源对象
	 */
	public boolean addDataSource(String strName, com.earthview.world.spatial.geodataset.Idatasource ref_ds)
	{
		String strNameParamValue = strName;
		long ref_dsParamValue = (ref_ds == null ? 0L : ref_ds.nativeObject.pointer);
		boolean returnValue = addDataSource_EVString_IDataSource(this.nativeObject.pointer, strNameParamValue, ref_dsParamValue);
		return returnValue;
	}
	native private boolean existDataSource_EVString(long pNativeObject, String strName);
	/**
	 * 询问数据源是否存在					
	 * @param strName 数据源名称主键
	 */
	public boolean existDataSource(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = existDataSource_EVString(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private long getDataSource_EVString(long pNativeObject, String strName);
	/**
	 * 获得数据源对象					
	 * @param strName 数据源名称主键
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource(String strName)
	{
		String strNameParamValue = strName;
		long returnValue = getDataSource_EVString(this.nativeObject.pointer, strNameParamValue);
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
	native private long getDataSource_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得数据源对象						
	 * @param index 数据源序号
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource(long index)
	{
		long indexParamValue = index;
		long returnValue = getDataSource_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private boolean setDataSource_EVString_IDataSource(long pNativeObject, String strName, long ref_ds);
	/**
	 * 设置新的数据源对象			如果名称已经存在，则覆盖；如果不存在，则添加。
	 * @param strName 数据源名称主键
	 * @param ds 数据源对象
	 */
	public boolean setDataSource(String strName, com.earthview.world.spatial.geodataset.Idatasource ref_ds)
	{
		String strNameParamValue = strName;
		long ref_dsParamValue = (ref_ds == null ? 0L : ref_ds.nativeObject.pointer);
		boolean returnValue = setDataSource_EVString_IDataSource(this.nativeObject.pointer, strNameParamValue, ref_dsParamValue);
		return returnValue;
	}
	native private boolean removeDataSource_EVString(long pNativeObject, String strName);
	/**
	 * 移除数据源对象					
	 * @param strName 数据源名称主键
	 */
	public boolean removeDataSource(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = removeDataSource_EVString(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private boolean clearDataSource_void(long pNativeObject);
	/**
	 * 清空所有数据源					
	 * @param  
	 */
	public boolean clearDataSource()
	{
		boolean returnValue = clearDataSource_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataSourceChanged_void(long pNativeObject);
	public void setDataSourceChanged()
	{
		setDataSourceChanged_void(this.nativeObject.pointer);
	}
	native private void setSymbolFactory_ISymbolFactory(long pNativeObject, long pFactory);
	/**
	 * 设置符号工厂符号工厂负责对符号进行序列化和反序列化
	 * @param pFactory 工厂
	 */
	public void setSymbolFactory(com.earthview.world.spatial.display.Isymbolfactory pFactory)
	{
		long pFactoryParamValue = (pFactory == null ? 0L : pFactory.nativeObject.pointer);
		setSymbolFactory_ISymbolFactory(this.nativeObject.pointer, pFactoryParamValue);
	}
	native private long getSymbolFactory_void(long pNativeObject);
	/**
	 * 获得符号工厂					
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbolfactory getSymbolFactory()
	{
		long returnValue = getSymbolFactory_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbolfactory __returnValue = new com.earthview.world.spatial.display.Isymbolfactory(CreatedWhenConstruct.CWC_NotToCreate, "ISymbolFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbolfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbolFactory");
		}
		return __returnValue;
	}
	native private long getSymbolCount_void(long pNativeObject);
	/**
	 * 获得符号个数					
	 * @param  
	 */
	public long getSymbolCount()
	{
		long returnValue = getSymbolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addSymbol_EVString_ISymbol(long pNativeObject, String strID, long sym);
	/**
	 * 添加符号					
	 * @param strID 名称主键
	 * @param sym 符号对象
	 */
	public boolean addSymbol(String strID, com.earthview.world.spatial.display.Isymbol sym)
	{
		String strIDParamValue = strID;
		long symParamValue = (sym == null ? 0L : sym.nativeObject.pointer);
		boolean returnValue = addSymbol_EVString_ISymbol(this.nativeObject.pointer, strIDParamValue, symParamValue);
		return returnValue;
	}
	native private boolean existSymbol_EVString(long pNativeObject, String strID);
	/**
	 * 询问是否存在该符号					
	 * @param strID 名称主键
	 */
	public boolean existSymbol(String strID)
	{
		String strIDParamValue = strID;
		boolean returnValue = existSymbol_EVString(this.nativeObject.pointer, strIDParamValue);
		return returnValue;
	}
	native private boolean existImageInAnySymbol_EVString(long pNativeObject, String strImageID);
	/**
	 * 询问图片是否存在于某个符号中					
	 * @param strImageID 名称主键
	 */
	public boolean existImageInAnySymbol(String strImageID)
	{
		String strImageIDParamValue = strImageID;
		boolean returnValue = existImageInAnySymbol_EVString(this.nativeObject.pointer, strImageIDParamValue);
		return returnValue;
	}
	native private long getSymbol_EVString(long pNativeObject, String strID);
	/**
	 * 获取符号					
	 * @param strID 名称主键
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(String strID)
	{
		String strIDParamValue = strID;
		long returnValue = getSymbol_EVString(this.nativeObject.pointer, strIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long getSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取符号					
	 * @param index 序号
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(long index)
	{
		long indexParamValue = index;
		long returnValue = getSymbol_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private boolean setSymbol_EVString_ISymbol(long pNativeObject, String strID, long sym);
	/**
	 * 设置符号			如果该名称已经存在，则替换符号；如果不存在，则添加。
	 * @param strID 名称主键
	 * @param sym 符号对象
	 */
	public boolean setSymbol(String strID, com.earthview.world.spatial.display.Isymbol sym)
	{
		String strIDParamValue = strID;
		long symParamValue = (sym == null ? 0L : sym.nativeObject.pointer);
		boolean returnValue = setSymbol_EVString_ISymbol(this.nativeObject.pointer, strIDParamValue, symParamValue);
		return returnValue;
	}
	native private boolean removeSymbol_EVString(long pNativeObject, String strID);
	/**
	 * 移除符号					
	 * @param strID 名称主键
	 */
	public boolean removeSymbol(String strID)
	{
		String strIDParamValue = strID;
		boolean returnValue = removeSymbol_EVString(this.nativeObject.pointer, strIDParamValue);
		return returnValue;
	}
	native private boolean clearSymbol_void(long pNativeObject);
	/**
	 * 清空符号					
	 * @param  
	 */
	public boolean clearSymbol()
	{
		boolean returnValue = clearSymbol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMapCount_void(long pNativeObject);
	/**
	 * 获得地图的个数					
	 * @param  
	 */
	public long getMapCount()
	{
		long returnValue = getMapCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addMap_IMap(long pNativeObject, long ref_pMap);
	/**
	 * 添加地图			如果同名的地图已经存在，则返回false；添加成功即返回true
	 * @param pMap 地图对象
	 */
	public boolean addMap(com.earthview.world.spatial.atlas.Imap ref_pMap)
	{
		long ref_pMapParamValue = (ref_pMap == null ? 0L : ref_pMap.nativeObject.pointer);
		boolean returnValue = addMap_IMap(this.nativeObject.pointer, ref_pMapParamValue);
		return returnValue;
	}
	native private long getMap_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得地图对象		
	 * @param index 序号
	 */
	public com.earthview.world.spatial.atlas.Imap getMap(long index)
	{
		long indexParamValue = index;
		long returnValue = getMap_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long getMap_EVString(long pNativeObject, String strMapName);
	/**
	 * 获得地图对象		
	 * @param strMapName 名称
	 */
	public com.earthview.world.spatial.atlas.Imap getMap(String strMapName)
	{
		String strMapNameParamValue = strMapName;
		long returnValue = getMap_EVString(this.nativeObject.pointer, strMapNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private void renameMap_IMap_EVString(long pNativeObject, long pMap, String newName);
	/**
	 * 重命名地图		
	 * @param pMap 地图对象
	 * @param newName 新名称
	 */
	public void renameMap(com.earthview.world.spatial.atlas.Imap pMap, String newName)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		String newNameParamValue = newName;
		renameMap_IMap_EVString(this.nativeObject.pointer, pMapParamValue, newNameParamValue);
	}
	native private boolean existMap_EVString(long pNativeObject, String strMapName);
	/**
	 * 询问地图是否存在		
	 * @param strMapName 名称
	 */
	public boolean existMap(String strMapName)
	{
		String strMapNameParamValue = strMapName;
		boolean returnValue = existMap_EVString(this.nativeObject.pointer, strMapNameParamValue);
		return returnValue;
	}
	native private boolean removeMap_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除地图对象		
	 * @param index 序号
	 */
	public boolean removeMap(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeMap_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeMap_EVString(long pNativeObject, String strMapName);
	/**
	 * 移除地图对象		
	 * @param strMapName 名称
	 */
	public boolean removeMap(String strMapName)
	{
		String strMapNameParamValue = strMapName;
		boolean returnValue = removeMap_EVString(this.nativeObject.pointer, strMapNameParamValue);
		return returnValue;
	}
	native private void clearMap_void(long pNativeObject);
	/**
	 * 清空地图对象		
	 * @param  
	 */
	public void clearMap()
	{
		clearMap_void(this.nativeObject.pointer);
	}
	native private boolean setCurrentMap_EVString(long pNativeObject, String strMapName);
	/**
	 * 设置为当前地图对象		如果该名称不存在，则返回false；否则，返回true。
	 * @param strMapName 名称
	 */
	public boolean setCurrentMap(String strMapName)
	{
		String strMapNameParamValue = strMapName;
		boolean returnValue = setCurrentMap_EVString(this.nativeObject.pointer, strMapNameParamValue);
		return returnValue;
	}
	native private long getCurrentMap_void(long pNativeObject);
	/**
	 * 获得当前地图对象的名称		
	 * @param  
	 */
	public StringPointer getCurrentMap()
	{
		long returnValue = getCurrentMap_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setMapChanged_void(long pNativeObject);
	/**
	 * 标记地图发生改变
	 * @param  
	 */
	public void setMapChanged()
	{
		setMapChanged_void(this.nativeObject.pointer);
	}
	native private void setSceneChanged_void(long pNativeObject);
	/**
	 * 标记场景发生改变
	 * @param  
	 */
	public void setSceneChanged()
	{
		setSceneChanged_void(this.nativeObject.pointer);
	}
	native private long getSceneCount_void(long pNativeObject);
	/**
	 * 获得场景的个数					
	 * @param  
	 */
	public long getSceneCount()
	{
		long returnValue = getSceneCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean addScene_IScene(long pNativeObject, long ref_pScene);
	/**
	 * 添加场景	如果同名的场景已经存在，则返回false；添加成功即返回true
	 * @param pScene 场景对象
	 */
	public boolean addScene(com.earthview.world.spatial.atlas.Iscene ref_pScene)
	{
		long ref_pSceneParamValue = (ref_pScene == null ? 0L : ref_pScene.nativeObject.pointer);
		boolean returnValue = addScene_IScene(this.nativeObject.pointer, ref_pSceneParamValue);
		return returnValue;
	}
	native private long getScene_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得场景对象				
	 * @param index 场景序号
	 */
	public com.earthview.world.spatial.atlas.Iscene getScene(long index)
	{
		long indexParamValue = index;
		long returnValue = getScene_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private long getScene_EVString(long pNativeObject, String strSceneName);
	/**
	 * 获得场景对象					
	 * @param strSceneName 场景名称
	 */
	public com.earthview.world.spatial.atlas.Iscene getScene(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		long returnValue = getScene_EVString(this.nativeObject.pointer, strSceneNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private boolean existScene_EVString(long pNativeObject, String strSceneName);
	/**
	 * 询问是否存在某个场景					
	 * @param strSceneName 场景名称
	 */
	public boolean existScene(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		boolean returnValue = existScene_EVString(this.nativeObject.pointer, strSceneNameParamValue);
		return returnValue;
	}
	native private boolean removeScene_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除场景对象				
	 * @param index 场景序号
	 */
	public boolean removeScene(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeScene_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeScene_EVString(long pNativeObject, String strSceneName);
	/**
	 * 移除场景对象					
	 * @param strSceneName 场景名称
	 */
	public boolean removeScene(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		boolean returnValue = removeScene_EVString(this.nativeObject.pointer, strSceneNameParamValue);
		return returnValue;
	}
	native private void clearScene_void(long pNativeObject);
	/**
	 * 清空所有场景对象				
	 * @param  
	 */
	public void clearScene()
	{
		clearScene_void(this.nativeObject.pointer);
	}
	native private boolean addLayout_IPageLayout(long pNativeObject, long ref_layout);
	/**
	 * 添加布局,如果布局名称相同则返回false					
	 * @param layout 布局对象
	 */
	public boolean addLayout(com.earthview.world.spatial.carto.Ipagelayout ref_layout)
	{
		long ref_layoutParamValue = (ref_layout == null ? 0L : ref_layout.nativeObject.pointer);
		boolean returnValue = addLayout_IPageLayout(this.nativeObject.pointer, ref_layoutParamValue);
		return returnValue;
	}
	native private long getLayoutCount_void(long pNativeObject);
	/**
	 * 获得布局的个数					
	 * @param  
	 * @return 布局的个数
	 */
	public long getLayoutCount()
	{
		long returnValue = getLayoutCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayout_ev_uint32(long pNativeObject, long index);
	/**
	 * 通过索引获得布局对象		
	 * @param index 序号
	 */
	public com.earthview.world.spatial.carto.Ipagelayout getLayout(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayout_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private long getLayout_EVString(long pNativeObject, String strLayoutName);
	/**
	 * 通过布局名称获得布局对象		
	 * @param strLayoutName 名称
	 */
	public com.earthview.world.spatial.carto.Ipagelayout getLayout(String strLayoutName)
	{
		String strLayoutNameParamValue = strLayoutName;
		long returnValue = getLayout_EVString(this.nativeObject.pointer, strLayoutNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private void renameLayout_IPageLayout_EVString(long pNativeObject, long pLayout, String newName);
	/**
	 * 重命名布局		
	 * @param pLayout 布局对象
	 * @param newName 新名称
	 */
	public void renameLayout(com.earthview.world.spatial.carto.Ipagelayout pLayout, String newName)
	{
		long pLayoutParamValue = (pLayout == null ? 0L : pLayout.nativeObject.pointer);
		String newNameParamValue = newName;
		renameLayout_IPageLayout_EVString(this.nativeObject.pointer, pLayoutParamValue, newNameParamValue);
	}
	native private boolean existLayout_EVString(long pNativeObject, String strLayoutName);
	/**
	 * 询问布局是否存在		
	 * @param strLayoutName 名称
	 */
	public boolean existLayout(String strLayoutName)
	{
		String strLayoutNameParamValue = strLayoutName;
		boolean returnValue = existLayout_EVString(this.nativeObject.pointer, strLayoutNameParamValue);
		return returnValue;
	}
	native private boolean removeLayout_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除布局对象		
	 * @param index 序号
	 */
	public boolean removeLayout(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayout_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeLayout_EVString(long pNativeObject, String strLayoutName);
	/**
	 * 移除布局对象		
	 * @param strMapName 名称
	 */
	public boolean removeLayout(String strLayoutName)
	{
		String strLayoutNameParamValue = strLayoutName;
		boolean returnValue = removeLayout_EVString(this.nativeObject.pointer, strLayoutNameParamValue);
		return returnValue;
	}
	native private void clearLayout_void(long pNativeObject);
	/**
	 * 清空布局对象		
	 * @param  
	 */
	public void clearLayout()
	{
		clearLayout_void(this.nativeObject.pointer);
	}
	native private boolean setCurrentLayout_EVString(long pNativeObject, String strLayoutName);
	/**
	 * 设置为当前布局对象		如果该名称不存在，则返回false；否则，返回true。
	 * @param strMapName 名称
	 */
	public boolean setCurrentLayout(String strLayoutName)
	{
		String strLayoutNameParamValue = strLayoutName;
		boolean returnValue = setCurrentLayout_EVString(this.nativeObject.pointer, strLayoutNameParamValue);
		return returnValue;
	}
	native private long getCurrentLayout_void(long pNativeObject);
	/**
	 * 获得当前布局对象的名称		
	 * @param  
	 * @return 当前布局对象名称
	 */
	public StringPointer getCurrentLayout()
	{
		long returnValue = getCurrentLayout_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean setCurrentScene_EVString(long pNativeObject, String strSceneName);
	/**
	 * 设置为当前场景对象		如果该名称不存在，则返回false；否则，返回true。
	 * @param strSceneName 场景名称
	 */
	public boolean setCurrentScene(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		boolean returnValue = setCurrentScene_EVString(this.nativeObject.pointer, strSceneNameParamValue);
		return returnValue;
	}
	native private long getCurrentScene_void(long pNativeObject);
	/**
	 * 获得当前场景对象					
	 * @param  
	 */
	public StringPointer getCurrentScene()
	{
		long returnValue = getCurrentScene_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setExtension_EVString(long pNativeObject, String NodeTxt);
	/**
	 * 设置用户扩展节点
	 * @param  
	 */
	public void setExtension(String NodeTxt)
	{
		String NodeTxtParamValue = NodeTxt;
		setExtension_EVString(this.nativeObject.pointer, NodeTxtParamValue);
	}
	native private long getExtension_void(long pNativeObject);
	/**
	 * 获得用户扩展节点
	 * @param  
	 */
	public StringPointer getExtension()
	{
		long returnValue = getExtension_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getProjectFilePath_void(long pNativeObject);
	/**
	 * 获得工程文件的路径
	 * @param  
	 */
	public StringPointer getProjectFilePath()
	{
		long returnValue = getProjectFilePath_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean getRelativePathReferToProjectPath_EVString_EVString(long pNativeObject, String fullpath, long relpath);
	/**
	 * 获得某个绝对路径相对于工程文件路径的相对路径
	 * @param fullpath 绝对路径
	 * @param relpath 相对路径
	 */
	public boolean getRelativePathReferToProjectPath(String fullpath, StringPointer relpath)
	{
		String fullpathParamValue = fullpath;
		long relpathParamValue = relpath.nativeObject.pointer;
		boolean returnValue = getRelativePathReferToProjectPath_EVString_EVString(this.nativeObject.pointer, fullpathParamValue, relpathParamValue);
		return returnValue;
	}
	native private String getFullPathReferToProjectPath_EVString(long pNativeObject, String relpath);
	/**
	 * 获得相对于工程文件路径的相对路径对应的绝对路径
	 * @param relpath 相对路径
	 */
	public String getFullPathReferToProjectPath(String relpath)
	{
		String relpathParamValue = relpath;
		String returnValue = getFullPathReferToProjectPath_EVString(this.nativeObject.pointer, relpathParamValue);
		return returnValue;
	}
	native private boolean addListener_IProjectManagerListener(long pNativeObject, long ref_listener);
	/**
	 * 添加侦听对象
	 * @param listener 监听者对象
	 */
	public boolean addListener(com.earthview.world.spatial.utility.ProjectManager.Iprojectmanagerlistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		boolean returnValue = addListener_IProjectManagerListener(this.nativeObject.pointer, ref_listenerParamValue);
		return returnValue;
	}
	native private boolean removeListener_IProjectManagerListener(long pNativeObject, long listener);
	/**
	 * 移除侦听对象
	 * @param listener 监听者对象
	 */
	public boolean removeListener(com.earthview.world.spatial.utility.ProjectManager.Iprojectmanagerlistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = removeListener_IProjectManagerListener(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}
	public ProjectManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProjectManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProjectManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProjectManager obj = null;
 		if(baseObj instanceof ProjectManager)
		{
			obj = (ProjectManager)baseObj;
		} else {
			obj = new ProjectManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProjectManager");
			obj.increaseCast();
		}

		return obj;
	}
}
