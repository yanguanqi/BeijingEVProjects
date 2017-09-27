package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型入库合并的工具类
 */
public class MeshUtility extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshUtility", new MeshUtilityClassFactory());
	}

	/**
	 * 构造函数
	 * @param sceManger 场景管理器
	 */
	public MeshUtility(com.earthview.world.graphic.SceneManager ref_sceManger) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceMangerPtr = new BasePointer(ref_sceManger);
		list.add("ref_sceManger", ref_sceMangerPtr.get());
		Create("CMeshUtility", list);
	}

	native private static long composeWorldMartix_CVector3_CVector3_CVector3(long pos, long scale, long ros);
	/**
	 * 计算世界矩阵
	 * @param pos 世界坐标
	 * @param scale 缩放比例
	 * @param ros x,y,z轴旋转角度
	 * @return 世界矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 composeWorldMartix(com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 ros)
	{
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rosParamValue = ros.nativeObject.pointer;
		long returnValue = composeWorldMartix_CVector3_CVector3_CVector3(posParamValue, scaleParamValue, rosParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static long composeWorldMartix_ev_real32_ev_real32_ev_real32(float lat, float lon, float ati);
	/**
	 * 计算世界矩阵
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高程
	 * @return 世界矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 composeWorldMartix(float lat, float lon, float ati)
	{
		float latParamValue = lat;
		float lonParamValue = lon;
		float atiParamValue = ati;
		long returnValue = composeWorldMartix_ev_real32_ev_real32_ev_real32(latParamValue, lonParamValue, atiParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static void decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long worldMatrix, long lat, long lon, long alt, long scaleInLocal, long orientInLocal);
	/**
	 * 分解计算世界矩阵
	 * @param worldMatrix 世界矩阵
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高程
	 * @param scaleInLocal 局部缩放
	 * @param orientInLocal 局部旋转
	 */
	public static void decomposeWorldMatrix(com.earthview.world.spatial.math.Matrix4 worldMatrix, DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal)
	{
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(worldMatrixParamValue, latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue);
	}
	native private static void decomposeMatrixToPosition_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long worldMatrix, long lat, long lon, long alt, long scaleInLocal, long orientInLocal);
	/**
	 * 分解计算世界矩阵,只分解并转为经纬度，不做旋转处理，只用于3dmax插件
	 * @param worldMatrix 世界矩阵
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高程
	 * @param scaleInLocal 局部缩放
	 * @param orientInLocal 局部旋转
	 */
	public static void decomposeMatrixToPosition(com.earthview.world.spatial.math.Matrix4 worldMatrix, DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal)
	{
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		decomposeMatrixToPosition_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(worldMatrixParamValue, latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue);
	}
	native private boolean exportToModelBase_CMeshData_EVString(long pNativeObject, long meshdata, String resourcePath);
	/**
	 * 导出到模型库
	 * @param meshPath 模型数据
	 * @param resourcePath 模型资源路径
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelBase(com.earthview.world.spatial3d.dataexchange.MeshData meshdata, String resourcePath)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		String resourcePathParamValue = resourcePath;
		boolean returnValue = exportToModelBase_CMeshData_EVString(this.nativeObject.pointer, meshdataParamValue, resourcePathParamValue);
		return returnValue;
	}
	native private boolean exportToModelBase_CMeshData_EVString_EVString_EVString(long pNativeObject, long meshdata, String resourcePath, String attrtablename, String nodecode);
	/**
	 * 导出到模型库
	 * @param meshPath 模型数据
	 * @param resourcePath 模型资源路径
	 * @param attrtablename 模板库分类名称
	 * @param nodecode 模板库分类编码
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelBase(com.earthview.world.spatial3d.dataexchange.MeshData meshdata, String resourcePath, String attrtablename, String nodecode)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		String resourcePathParamValue = resourcePath;
		String attrtablenameParamValue = attrtablename;
		String nodecodeParamValue = nodecode;
		boolean returnValue = exportToModelBase_CMeshData_EVString_EVString_EVString(this.nativeObject.pointer, meshdataParamValue, resourcePathParamValue, attrtablenameParamValue, nodecodeParamValue);
		return returnValue;
	}
	native private boolean exportToModelDataset_CMeshData_EVString(long pNativeObject, long meshdata, String resourcePath);
	/**
	 * 导出到数据集
	 * @param meshPath 模型数据
	 * @param resourcePath 模型资源路径
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelDataset(com.earthview.world.spatial3d.dataexchange.MeshData meshdata, String resourcePath)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		String resourcePathParamValue = resourcePath;
		boolean returnValue = exportToModelDataset_CMeshData_EVString(this.nativeObject.pointer, meshdataParamValue, resourcePathParamValue);
		return returnValue;
	}
	native private boolean exportToModelBase_CMeshData(long pNativeObject, long meshdata);
	/**
	 * 导出到模型库
	 * @param meshdata 模型数据
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelBase(com.earthview.world.spatial3d.dataexchange.MeshData meshdata)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		boolean returnValue = exportToModelBase_CMeshData(this.nativeObject.pointer, meshdataParamValue);
		return returnValue;
	}
	native private boolean exportToModelBase_CMeshData_EVString_EVString(long pNativeObject, long meshdata, String attrtablename, String nodecode);
	/**
	 * 导出到模型库
	 * @param meshdata 模型数据
	 * @param attrtablename 模板库分类名称
	 * @param nodecode 模板库分类编码
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelBase(com.earthview.world.spatial3d.dataexchange.MeshData meshdata, String attrtablename, String nodecode)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		String attrtablenameParamValue = attrtablename;
		String nodecodeParamValue = nodecode;
		boolean returnValue = exportToModelBase_CMeshData_EVString_EVString(this.nativeObject.pointer, meshdataParamValue, attrtablenameParamValue, nodecodeParamValue);
		return returnValue;
	}
	native private boolean exportToModelDataset_CMeshData(long pNativeObject, long meshdata);
	/**
	 * 导出到数据集
	 * @param meshdata 模型数据
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToModelDataset(com.earthview.world.spatial3d.dataexchange.MeshData meshdata)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		boolean returnValue = exportToModelDataset_CMeshData(this.nativeObject.pointer, meshdataParamValue);
		return returnValue;
	}
	native private boolean exportToLocal_CMeshData_EVString(long pNativeObject, long meshdata, String path);
	/**
	 * 导出到本地
	 * @param meshdata 模型数据
	 * @param path 导出目录
	 * @return 成功返回true，否则返回false
	 */
	public boolean exportToLocal(com.earthview.world.spatial3d.dataexchange.MeshData meshdata, String path)
	{
		long meshdataParamValue = meshdata.nativeObject.pointer;
		String pathParamValue = path;
		boolean returnValue = exportToLocal_CMeshData_EVString(this.nativeObject.pointer, meshdataParamValue, pathParamValue);
		return returnValue;
	}
	native private void setParams_CMeshParams(long pNativeObject, long params);
	/**
	 * 设置模型导出入库的参数
	 * @param params 参数设置
	 */
	public void setParams(com.earthview.world.spatial3d.dataexchange.MeshParams params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setParams_CMeshParams(this.nativeObject.pointer, paramsParamValue);
	}
	native private long getParams_void(long pNativeObject);
	/**
	 * 获取模型导出入库的参数
	 * @return 返回参数设置
	 */
	public com.earthview.world.spatial3d.dataexchange.MeshParams getParams()
	{
		long returnValue = getParams_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataexchange.MeshParams __returnValue = new com.earthview.world.spatial3d.dataexchange.MeshParams(CreatedWhenConstruct.CWC_NotToCreate, "CMeshParams");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.MeshParams)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshParams");
		}
		return __returnValue;
	}
	native private long getDatasourceHelper_void(long pNativeObject);
	/**
	 * 获取模型数据源辅助类
	 * @return 返回辅助类
	 */
	public com.earthview.world.spatial3d.dataexchange.DatasourceHelper getDatasourceHelper()
	{
		long returnValue = getDatasourceHelper_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataexchange.DatasourceHelper __returnValue = new com.earthview.world.spatial3d.dataexchange.DatasourceHelper(CreatedWhenConstruct.CWC_NotToCreate, "CDatasourceHelper");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.DatasourceHelper)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDatasourceHelper");
		}
		return __returnValue;
	}
	native private void publishUserType_void(long pNativeObject);
	/**
	 * 这两个函数的作用是模型文件入库后，生成usetype表里面的信息
	 */
	public void publishUserType()
	{
		publishUserType_void(this.nativeObject.pointer);
	}
	native private boolean readWorldTransformTxt_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CVector3(long pNativeObject, long matrix, long lontitude, long latitude, long atitu, long scale, long rotate);
	/**
	 * 读取本地的坐标文件，构建世界矩阵
	 * @param matrix 世界矩阵
	 * @param lontitude 经度
	 * @param latitude 纬度
	 * @param latitude 高度
	 * @param latitude 缩放
	 * @param latitude 旋转
	 * @return 成功返回true，否则返回false
	 */
	public boolean readWorldTransformTxt(com.earthview.world.spatial.math.Matrix4 matrix, DoublePointer lontitude, DoublePointer latitude, DoublePointer atitu, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		long lontitudeParamValue = lontitude.nativeObject.pointer;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long atituParamValue = atitu.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		boolean returnValue = readWorldTransformTxt_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CVector3(this.nativeObject.pointer, matrixParamValue, lontitudeParamValue, latitudeParamValue, atituParamValue, scaleParamValue, rotateParamValue);
		return returnValue;
	}
	native private long loadFile_EVString(long pNativeObject, String file);
	/**
	 * 加载磁盘文件
	 * @param file 文件目录
	 * @return 磁盘文件数据
	 */
	public com.earthview.world.core.MemoryDataStreamPtr loadFile(String file)
	{
		String fileParamValue = file;
		long returnValue = loadFile_EVString(this.nativeObject.pointer, fileParamValue);
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
	native private long loadAniFile_EVString(long pNativeObject, String file);
	public com.earthview.world.core.MemoryDataStreamPtr loadAniFile(String file)
	{
		String fileParamValue = file;
		long returnValue = loadAniFile_EVString(this.nativeObject.pointer, fileParamValue);
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
	public MeshUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshUtility obj = null;
 		if(baseObj instanceof MeshUtility)
		{
			obj = (MeshUtility)baseObj;
		} else {
			obj = new MeshUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
