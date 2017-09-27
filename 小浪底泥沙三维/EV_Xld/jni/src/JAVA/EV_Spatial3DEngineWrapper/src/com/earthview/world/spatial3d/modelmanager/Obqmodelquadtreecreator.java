package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class Obqmodelquadtreecreator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator", new ObqmodelquadtreecreatorClassFactory());
	}

	public static class InfoListener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener", new InfoListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::JInfoListenerProxy", new InfoListenerClassFactory());
		}

		public InfoListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JInfoListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.spatial3d.modelmanager.Obqmodelquadtreecreator$InfoListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void printInfo_EVString_callback(String info)
		{
			String infoParamValue = info;
			printInfo(infoParamValue);
		}

		native private void printInfo_EVString(long pNativeObject, String info);
		public void printInfo(String info)
		{
			String infoParamValue = info;
			printInfo_EVString(this.nativeObject.pointer, infoParamValue);
		}
		native private void printInfo_EVString_NoVirtual(long pNativeObject, String info);
		protected void printInfo_NoVirtual(String info)
		{
			String infoParamValue = info;
			printInfo_EVString_NoVirtual(this.nativeObject.pointer, infoParamValue);
		}

		protected  void printProcess_ev_int32_callback(int process)
		{
			int processParamValue = process;
			printProcess(processParamValue);
		}

		native private void printProcess_ev_int32(long pNativeObject, int process);
		public void printProcess(int process)
		{
			int processParamValue = process;
			printProcess_ev_int32(this.nativeObject.pointer, processParamValue);
		}
		native private void printProcess_ev_int32_NoVirtual(long pNativeObject, int process);
		protected void printProcess_NoVirtual(int process)
		{
			int processParamValue = process;
			printProcess_ev_int32_NoVirtual(this.nativeObject.pointer, processParamValue);
		}

		protected  void setRange_int_int_callback(int min, int max)
		{
			int minParamValue = min;
			int maxParamValue = max;
			setRange(minParamValue, maxParamValue);
		}

		native private void setRange_int_int(long pNativeObject, int min, int max);
		public void setRange(int min, int max)
		{
			int minParamValue = min;
			int maxParamValue = max;
			setRange_int_int(this.nativeObject.pointer, minParamValue, maxParamValue);
		}
		native private void setRange_int_int_NoVirtual(long pNativeObject, int min, int max);
		protected void setRange_NoVirtual(int min, int max)
		{
			int minParamValue = min;
			int maxParamValue = max;
			setRange_int_int_NoVirtual(this.nativeObject.pointer, minParamValue, maxParamValue);
		}

		protected  void renderSystemError_void_callback()
		{
			renderSystemError();
		}

		native private void renderSystemError_void(long pNativeObject);
		public void renderSystemError()
		{
			renderSystemError_void(this.nativeObject.pointer);
		}
		native private void renderSystemError_void_NoVirtual(long pNativeObject);
		protected void renderSystemError_NoVirtual()
		{
			renderSystemError_void_NoVirtual(this.nativeObject.pointer);
		}

		public InfoListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InfoListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_printInfo_EVString(long pNativeObject, String method);
		native protected void register_printProcess_ev_int32(long pNativeObject, String method);
		native protected void register_setRange_int_int(long pNativeObject, String method);
		native protected void register_renderSystemError_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_printInfo_EVString(this.nativeObject.pointer, "printInfo_EVString_callback");
				this.register_printProcess_ev_int32(this.nativeObject.pointer, "printProcess_ev_int32_callback");
				this.register_setRange_int_int(this.nativeObject.pointer, "setRange_int_int_callback");
				this.register_renderSystemError_void(this.nativeObject.pointer, "renderSystemError_void_callback");
			}
		}
		
		public static InfoListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InfoListener obj = null;
 			if(baseObj instanceof InfoListener)
			{
				obj = (InfoListener)baseObj;
			} else {
				obj = new InfoListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InfoListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InfoListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InfoListener emptyInstance = new InfoListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 
	 * @param  
	 */
	public Obqmodelquadtreecreator(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbUtilityPtr = new BasePointer(dbUtility);
		list.add("dbUtility", dbUtilityPtr.get());
		Create("OBQModelQuadTreeCreator", list);
	}

	native private boolean convertObqXmlToIndexDB_EVString(long pNativeObject, String strTileXml);
	/**
	 * 
	 * @param  
	 */
	public boolean convertObqXmlToIndexDB(String strTileXml)
	{
		String strTileXmlParamValue = strTileXml;
		boolean returnValue = convertObqXmlToIndexDB_EVString(this.nativeObject.pointer, strTileXmlParamValue);
		return returnValue;
	}
	native private long queryMeshFilesByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, int level, double minLon, double minLat, double maxLon, double maxLat);
	public com.earthview.world.core.StringVector queryMeshFilesByRegion(int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		long returnValue = queryMeshFilesByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long queryCpdStreamByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, int level, double minLon, double minLat, double maxLon, double maxLat);
	public com.earthview.world.core.MemoryDataStreamPtr queryCpdStreamByRegion(int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		long returnValue = queryCpdStreamByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private String getCpdFileByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, int level, double minLon, double minLat, double maxLon, double maxLat);
	public String getCpdFileByRegion(int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		String returnValue = getCpdFileByRegion_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		return returnValue;
	}
	native private void cpd2mesh_EVString_EVString(long pNativeObject, String cpdFilePath, String meshPath);
	public void cpd2mesh(String cpdFilePath, String meshPath)
	{
		String cpdFilePathParamValue = cpdFilePath;
		String meshPathParamValue = meshPath;
		cpd2mesh_EVString_EVString(this.nativeObject.pointer, cpdFilePathParamValue, meshPathParamValue);
	}
	native private boolean getLevelRange_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long minLevel, long maxLevel, long minLon, long minLat, long maxLon, long maxLat);
	/**
	 * 查询此数据集中，最小级别，最大级别，以及数据集的经纬度范围
	 * @return 是否成功
	 */
	public boolean getLevelRange(IntegerPointer minLevel, IntegerPointer maxLevel, DoublePointer minLon, DoublePointer minLat, DoublePointer maxLon, DoublePointer maxLat)
	{
		long minLevelParamValue = minLevel.nativeObject.pointer;
		long maxLevelParamValue = maxLevel.nativeObject.pointer;
		long minLonParamValue = minLon.nativeObject.pointer;
		long minLatParamValue = minLat.nativeObject.pointer;
		long maxLonParamValue = maxLon.nativeObject.pointer;
		long maxLatParamValue = maxLat.nativeObject.pointer;
		boolean returnValue = getLevelRange_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, minLevelParamValue, maxLevelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		return returnValue;
	}
	native private void addInfoListener_InfoListener(long pNativeObject, long pListener);
	/**
	 * 
	 * @param  
	 */
	public void addInfoListener(com.earthview.world.spatial3d.modelmanager.Obqmodelquadtreecreator.InfoListener pListener)
	{
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		addInfoListener_InfoListener(this.nativeObject.pointer, pListenerParamValue);
	}
	native private void removeInfoListener_InfoListener(long pNativeObject, long pListener);
	/**
	 * 
	 * @param  
	 */
	public void removeInfoListener(com.earthview.world.spatial3d.modelmanager.Obqmodelquadtreecreator.InfoListener pListener)
	{
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		removeInfoListener_InfoListener(this.nativeObject.pointer, pListenerParamValue);
	}
	native private boolean initFromXMLSource_EVString_OBQModelQuadRootTree(long pNativeObject, String xmlSourcePath, long tree);
	/**
	 * 从倾斜摄影原始文件初始化一个四叉树
	 * @param  
	 */
	public boolean initFromXMLSource(String xmlSourcePath, com.earthview.world.spatial3d.modelmanager.Obqmodelquadroottree tree)
	{
		String xmlSourcePathParamValue = xmlSourcePath;
		long treeParamValue = tree.nativeObject.pointer;
		boolean returnValue = initFromXMLSource_EVString_OBQModelQuadRootTree(this.nativeObject.pointer, xmlSourcePathParamValue, treeParamValue);
		return returnValue;
	}
	native private boolean initFromQueryIndexDB_OBQModelQuadRootTree(long pNativeObject, long tree);
	/**
	 * 从一个四叉树数据库文件中初始化一个四叉树
	 * @param  
	 */
	public boolean initFromQueryIndexDB(com.earthview.world.spatial3d.modelmanager.Obqmodelquadroottree tree)
	{
		long treeParamValue = tree.nativeObject.pointer;
		boolean returnValue = initFromQueryIndexDB_OBQModelQuadRootTree(this.nativeObject.pointer, treeParamValue);
		return returnValue;
	}
	native private boolean saveToQueryIndexDB_OBQModelQuadRootTree(long pNativeObject, long tree);
	/**
	 * 将一个四叉树写入到一个四叉树数据库文件中
	 * @param  
	 */
	public boolean saveToQueryIndexDB(com.earthview.world.spatial3d.modelmanager.Obqmodelquadroottree tree)
	{
		long treeParamValue = tree.nativeObject.pointer;
		boolean returnValue = saveToQueryIndexDB_OBQModelQuadRootTree(this.nativeObject.pointer, treeParamValue);
		return returnValue;
	}
	native private int dae2mesh_EVString_EVString_ev_bool(long pNativeObject, String srcFolder, String desFolder, boolean coverExistentMesh);
	/**
	 * 转换模型及纹理
	 * @param srcFolder 
	 * @param desFolder 
	 * @param texture2dds 是否需要将纹理转换成dds格式
	 */
	public int dae2mesh(String srcFolder, String desFolder, boolean coverExistentMesh)
	{
		String srcFolderParamValue = srcFolder;
		String desFolderParamValue = desFolder;
		boolean coverExistentMeshParamValue = coverExistentMesh;
		int returnValue = dae2mesh_EVString_EVString_ev_bool(this.nativeObject.pointer, srcFolderParamValue, desFolderParamValue, coverExistentMeshParamValue);
		return returnValue;
	}
	native private void createDEM_EVString_EVString(long pNativeObject, String srcFolder, String desFolder);
	/**
	 * 创建DEM
	 * @param srcFolder 
	 * @param desFolder 
	 */
	public void createDEM(String srcFolder, String desFolder)
	{
		String srcFolderParamValue = srcFolder;
		String desFolderParamValue = desFolder;
		createDEM_EVString_EVString(this.nativeObject.pointer, srcFolderParamValue, desFolderParamValue);
	}
	native private void initDae2MeshThread_EVString_EVString_ev_bool(long pNativeObject, String srcFolder, String desFolder, boolean coverExistentMesh);
	/**
	 * 
	 * @param  
	 */
	public void initDae2MeshThread(String srcFolder, String desFolder, boolean coverExistentMesh)
	{
		String srcFolderParamValue = srcFolder;
		String desFolderParamValue = desFolder;
		boolean coverExistentMeshParamValue = coverExistentMesh;
		initDae2MeshThread_EVString_EVString_ev_bool(this.nativeObject.pointer, srcFolderParamValue, desFolderParamValue, coverExistentMeshParamValue);
	}
	native private void startCreateQueryIndex_EVString_EVString_ev_bool(long pNativeObject, String srcFolder, String desFolder, boolean coverExistentMesh);
	/**
	 * 
	 * @param  
	 */
	public void startCreateQueryIndex(String srcFolder, String desFolder, boolean coverExistentMesh)
	{
		String srcFolderParamValue = srcFolder;
		String desFolderParamValue = desFolder;
		boolean coverExistentMeshParamValue = coverExistentMesh;
		startCreateQueryIndex_EVString_EVString_ev_bool(this.nativeObject.pointer, srcFolderParamValue, desFolderParamValue, coverExistentMeshParamValue);
	}
	native private void stopCreateQueryIndex_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void stopCreateQueryIndex()
	{
		stopCreateQueryIndex_void(this.nativeObject.pointer);
	}
	native private void printInfo_EVString(long pNativeObject, String info);
	/**
	 * 
	 * @param  
	 */
	public void printInfo(String info)
	{
		String infoParamValue = info;
		printInfo_EVString(this.nativeObject.pointer, infoParamValue);
	}
	native private void printProcess_ev_int32(long pNativeObject, int process);
	/**
	 * 
	 * @param  
	 */
	public void printProcess(int process)
	{
		int processParamValue = process;
		printProcess_ev_int32(this.nativeObject.pointer, processParamValue);
	}
	native private void setRange_int_int(long pNativeObject, int min, int max);
	public void setRange(int min, int max)
	{
		int minParamValue = min;
		int maxParamValue = max;
		setRange_int_int(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void renderSystemError_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void renderSystemError()
	{
		renderSystemError_void(this.nativeObject.pointer);
	}
	native private boolean dae2meshSdate_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean dae2meshSdate()
	{
		boolean returnValue = dae2meshSdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLocalMatrix_CMatrix4_ev_bool(long pNativeObject, long localMatrix, boolean available);
	/**
	 * 
	 * @param  
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 localMatrix, boolean available)
	{
		long localMatrixParamValue = localMatrix.nativeObject.pointer;
		boolean availableParamValue = available;
		setLocalMatrix_CMatrix4_ev_bool(this.nativeObject.pointer, localMatrixParamValue, availableParamValue);
	}
	public Obqmodelquadtreecreator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmodelquadtreecreator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqmodelquadtreecreator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmodelquadtreecreator obj = null;
 		if(baseObj instanceof Obqmodelquadtreecreator)
		{
			obj = (Obqmodelquadtreecreator)baseObj;
		} else {
			obj = new Obqmodelquadtreecreator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQModelQuadTreeCreator");
			obj.increaseCast();
		}

		return obj;
	}
}
