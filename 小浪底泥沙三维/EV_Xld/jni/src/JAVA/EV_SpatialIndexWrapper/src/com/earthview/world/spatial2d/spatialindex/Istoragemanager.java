package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex
///////////////////////////////////////////////////////////////////////////
///IStorageManager
//////////////////////////////////////////////////////////////////////
public class Istoragemanager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::IStorageManager", new IstoragemanagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JIStorageManagerProxy", new IstoragemanagerClassFactory());
	}

	protected  long load_ev_char_callback(long pFullpath)
	{
		BytePointer pFullpathParamValue = (pFullpath == 0L ? null : new BytePointer(new InstancePointer(pFullpath)));
		com.earthview.world.spatial2d.spatialindex.Ispatialindex returnValue = load(pFullpathParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_ev_char(long pNativeObject, long pFullpath);
	/**
	 * 将空间索引文件导成内存空间索引
	 * @param pFullpath 指定文件路径
	 * @return 空间索引句柄
	 */
	public com.earthview.world.spatial2d.spatialindex.Ispatialindex load(BytePointer pFullpath)
	{
		long pFullpathParamValue = (pFullpath == null ? 0L : pFullpath.nativeObject.pointer);
		long returnValue = load_ev_char(this.nativeObject.pointer, pFullpathParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Ispatialindex __returnValue = new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndex");
		}
		return __returnValue;
	}
	native private long load_ev_char_NoVirtual(long pNativeObject, long pFullpath);
	protected com.earthview.world.spatial2d.spatialindex.Ispatialindex load_NoVirtual(BytePointer pFullpath)
	{
		long pFullpathParamValue = (pFullpath == null ? 0L : pFullpath.nativeObject.pointer);
		long returnValue = load_ev_char_NoVirtual(this.nativeObject.pointer, pFullpathParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Ispatialindex __returnValue = new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndex");
		}
		return __returnValue;
	}

	protected  boolean save_ISpatialIndex_ev_char_callback(long hSpatialIndex, long pFilepath)
	{
		com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndexParamValue = (hSpatialIndex == 0L ? null : new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate));
		if(hSpatialIndexParamValue != null)
		{
		hSpatialIndexParamValue.setDelegate(true);
		hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		IClassFactory hSpatialIndexParamValueClassFactory = GlobalClassFactoryMap.get(hSpatialIndexParamValue.getCppInstanceTypeName());
		if (hSpatialIndexParamValueClassFactory != null)
		{
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)hSpatialIndexParamValueClassFactory.create();
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		}
		}
		BytePointer pFilepathParamValue = (pFilepath == 0L ? null : new BytePointer(new InstancePointer(pFilepath)));
		boolean returnValue = save(hSpatialIndexParamValue, pFilepathParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean save_ISpatialIndex_ev_char(long pNativeObject, long hSpatialIndex, long pFilepath);
	/**
	 * 将空间索引文件导成内存空间索引
	 * @param pFullpath 指定文件路径
	 * @return 0,保存成功，1保存失败
	 */
	public boolean save(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, BytePointer pFilepath)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long pFilepathParamValue = (pFilepath == null ? 0L : pFilepath.nativeObject.pointer);
		boolean returnValue = save_ISpatialIndex_ev_char(this.nativeObject.pointer, hSpatialIndexParamValue, pFilepathParamValue);
		return returnValue;
	}
	native private boolean save_ISpatialIndex_ev_char_NoVirtual(long pNativeObject, long hSpatialIndex, long pFilepath);
	protected boolean save_NoVirtual(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, BytePointer pFilepath)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long pFilepathParamValue = (pFilepath == null ? 0L : pFilepath.nativeObject.pointer);
		boolean returnValue = save_ISpatialIndex_ev_char_NoVirtual(this.nativeObject.pointer, hSpatialIndexParamValue, pFilepathParamValue);
		return returnValue;
	}

	protected  long load_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		com.earthview.world.spatial2d.spatialindex.Ispatialindex returnValue = load(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_CDataStream(long pNativeObject, long stream);
	/**
	 * 从内存流创建空间索引
	 * @param stream 流引用
	 * @return 空间索引句柄
	 */
	public com.earthview.world.spatial2d.spatialindex.Ispatialindex load(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = load_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Ispatialindex __returnValue = new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndex");
		}
		return __returnValue;
	}
	native private long load_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial2d.spatialindex.Ispatialindex load_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = load_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.spatialindex.Ispatialindex __returnValue = new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndex");
		}
		return __returnValue;
	}

	protected  boolean save_ISpatialIndex_CDataStream_callback(long hSpatialIndex, long stream)
	{
		com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndexParamValue = (hSpatialIndex == 0L ? null : new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate));
		if(hSpatialIndexParamValue != null)
		{
		hSpatialIndexParamValue.setDelegate(true);
		hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		IClassFactory hSpatialIndexParamValueClassFactory = GlobalClassFactoryMap.get(hSpatialIndexParamValue.getCppInstanceTypeName());
		if (hSpatialIndexParamValueClassFactory != null)
		{
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)hSpatialIndexParamValueClassFactory.create();
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		}
		}
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean returnValue = save(hSpatialIndexParamValue, streamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean save_ISpatialIndex_CDataStream(long pNativeObject, long hSpatialIndex, long stream);
	/**
	 * 将空间索引导成流
	 * @param stream 流引用
	 * @return 0,保存成功，1保存失败
	 */
	public boolean save(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, com.earthview.world.core.DataStream stream)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = save_ISpatialIndex_CDataStream(this.nativeObject.pointer, hSpatialIndexParamValue, streamParamValue);
		return returnValue;
	}
	native private boolean save_ISpatialIndex_CDataStream_NoVirtual(long pNativeObject, long hSpatialIndex, long stream);
	protected boolean save_NoVirtual(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, com.earthview.world.core.DataStream stream)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = save_ISpatialIndex_CDataStream_NoVirtual(this.nativeObject.pointer, hSpatialIndexParamValue, streamParamValue);
		return returnValue;
	}

	protected  boolean saveAllNodes_ISpatialIndex_CDataStream_callback(long hSpatialIndex, long stream)
	{
		com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndexParamValue = (hSpatialIndex == 0L ? null : new com.earthview.world.spatial2d.spatialindex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate));
		if(hSpatialIndexParamValue != null)
		{
		hSpatialIndexParamValue.setDelegate(true);
		hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		IClassFactory hSpatialIndexParamValueClassFactory = GlobalClassFactoryMap.get(hSpatialIndexParamValue.getCppInstanceTypeName());
		if (hSpatialIndexParamValueClassFactory != null)
		{
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue = (com.earthview.world.spatial2d.spatialindex.Ispatialindex)hSpatialIndexParamValueClassFactory.create();
			hSpatialIndexParamValue.setDelegate(true);
			hSpatialIndexParamValue.setInstancePointer(new InstancePointer(hSpatialIndex));
		}
		}
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean returnValue = saveAllNodes(hSpatialIndexParamValue, streamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean saveAllNodes_ISpatialIndex_CDataStream(long pNativeObject, long hSpatialIndex, long stream);
	///<summary>
	///保存所有的节点信息
	///</summary>
	///<param name="hSpatialIndex">空间索引对象</param>
	///<returns>保存成功，返回true，失败，返回false
	public boolean saveAllNodes(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, com.earthview.world.core.DataStream stream)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = saveAllNodes_ISpatialIndex_CDataStream(this.nativeObject.pointer, hSpatialIndexParamValue, streamParamValue);
		return returnValue;
	}
	native private boolean saveAllNodes_ISpatialIndex_CDataStream_NoVirtual(long pNativeObject, long hSpatialIndex, long stream);
	protected boolean saveAllNodes_NoVirtual(com.earthview.world.spatial2d.spatialindex.Ispatialindex hSpatialIndex, com.earthview.world.core.DataStream stream)
	{
		long hSpatialIndexParamValue = (hSpatialIndex == null ? 0L : hSpatialIndex.nativeObject.pointer);
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = saveAllNodes_ISpatialIndex_CDataStream_NoVirtual(this.nativeObject.pointer, hSpatialIndexParamValue, streamParamValue);
		return returnValue;
	}

	protected  int getDriverType_void_callback()
	{
		com.earthview.world.spatial2d.spatialindex.DRIVERTYPE returnValue = getDriverType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDriverType_void(long pNativeObject);
	/**
	 * 存储类型
	 * @return 0,文件，1内存流
	 */
	public com.earthview.world.spatial2d.spatialindex.DRIVERTYPE getDriverType()
	{
		int returnValue = getDriverType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.spatialindex.DRIVERTYPE.toEnum(returnValue);
	}
	native private int getDriverType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.spatialindex.DRIVERTYPE getDriverType_NoVirtual()
	{
		int returnValue = getDriverType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.spatialindex.DRIVERTYPE.toEnum(returnValue);
	}

	public Istoragemanager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Istoragemanager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_load_ev_char(long pNativeObject, String method);
	native protected void register_save_ISpatialIndex_ev_char(long pNativeObject, String method);
	native protected void register_load_CDataStream(long pNativeObject, String method);
	native protected void register_save_ISpatialIndex_CDataStream(long pNativeObject, String method);
	native protected void register_saveAllNodes_ISpatialIndex_CDataStream(long pNativeObject, String method);
	native protected void register_getDriverType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_load_ev_char(this.nativeObject.pointer, "load_ev_char_callback");
			this.register_save_ISpatialIndex_ev_char(this.nativeObject.pointer, "save_ISpatialIndex_ev_char_callback");
			this.register_load_CDataStream(this.nativeObject.pointer, "load_CDataStream_callback");
			this.register_save_ISpatialIndex_CDataStream(this.nativeObject.pointer, "save_ISpatialIndex_CDataStream_callback");
			this.register_saveAllNodes_ISpatialIndex_CDataStream(this.nativeObject.pointer, "saveAllNodes_ISpatialIndex_CDataStream_callback");
			this.register_getDriverType_void(this.nativeObject.pointer, "getDriverType_void_callback");
		}
	}
	
	public static Istoragemanager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Istoragemanager obj = null;
 		if(baseObj instanceof Istoragemanager)
		{
			obj = (Istoragemanager)baseObj;
		} else {
			obj = new Istoragemanager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IStorageManager");
			obj.increaseCast();
		}

		return obj;
	}
}
