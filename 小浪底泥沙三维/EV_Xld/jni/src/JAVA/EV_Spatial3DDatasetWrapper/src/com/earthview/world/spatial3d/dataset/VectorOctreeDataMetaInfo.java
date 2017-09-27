package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataMetaInfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo", new VectorOctreeDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataMetaInfoProxy", new VectorOctreeDataMetaInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public VectorOctreeDataMetaInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVectorOctreeDataMetaInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataset.VectorOctreeDataMetaInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	protected  void setDatasetType_EVDatasetType_callback(int type)
	{
		com.earthview.world.spatial.geodataset.EVDatasetType typeParamValue = com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(type);
		setDatasetType(typeParamValue);
	}

	native private void setDatasetType_EVDatasetType(long pNativeObject, int type);
	/**
	 * 设置数据集类型
	 * @param type 数据集类型
	 */
	public void setDatasetType(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		setDatasetType_EVDatasetType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setDatasetType_EVDatasetType_NoVirtual(long pNativeObject, int type);
	protected void setDatasetType_NoVirtual(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		setDatasetType_EVDatasetType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
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

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置数据集名
	 * @param name 数据集名
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  void setEnvelope_IEnvelope_callback(long pEnv)
	{
		com.earthview.world.spatial.geometry.Ienvelope pEnvParamValue = (pEnv == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvParamValue != null)
		{
		pEnvParamValue.setDelegate(true);
		pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		IClassFactory pEnvParamValueClassFactory = GlobalClassFactoryMap.get(pEnvParamValue.getCppInstanceTypeName());
		if (pEnvParamValueClassFactory != null)
		{
			pEnvParamValue.setDelegate(true);
			pEnvParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvParamValueClassFactory.create();
			pEnvParamValue.setDelegate(true);
			pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		}
		}
		setEnvelope(pEnvParamValue);
	}

	native private void setEnvelope_IEnvelope(long pNativeObject, long pEnv);
	/**
	 * 设置数据集的范围
	 * @param pEnv 范围对象
	 */
	public void setEnvelope(com.earthview.world.spatial.geometry.Ienvelope pEnv)
	{
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		setEnvelope_IEnvelope(this.nativeObject.pointer, pEnvParamValue);
	}
	native private void setEnvelope_IEnvelope_NoVirtual(long pNativeObject, long pEnv);
	protected void setEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnv)
	{
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		setEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvParamValue);
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  void setSpatialReference_ISpatialReference_callback(long sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		setSpatialReference(srParamValue);
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, srParamValue);
	}

	protected  void setVersion_ev_uint32_callback(long version)
	{
		long versionParamValue = version;
		setVersion(versionParamValue);
	}

	native private void setVersion_ev_uint32(long pNativeObject, long version);
	/**
	 * 设置版本号
	 * @param version 版本号
	 */
	public void setVersion(long version)
	{
		long versionParamValue = version;
		setVersion_ev_uint32(this.nativeObject.pointer, versionParamValue);
	}
	native private void setVersion_ev_uint32_NoVirtual(long pNativeObject, long version);
	protected void setVersion_NoVirtual(long version)
	{
		long versionParamValue = version;
		setVersion_ev_uint32_NoVirtual(this.nativeObject.pointer, versionParamValue);
	}

	protected  long getVersion_void_callback()
	{
		long returnValue = getVersion();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getVersion_void(long pNativeObject);
	/**
	 * 获取版本号
	 * @return 版本号
	 */
	public long getVersion()
	{
		long returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVersion_void_NoVirtual(long pNativeObject);
	protected long getVersion_NoVirtual()
	{
		long returnValue = getVersion_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getID_void_callback()
	{
		long returnValue = getID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取数据集id
	 * @return 数据集的id
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setID_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		setID(idParamValue);
	}

	native private void setID_ev_uint32(long pNativeObject, long id);
	/**
	 * 设置数据集的id
	 * @param id id
	 */
	public void setID(long id)
	{
		long idParamValue = id;
		setID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void setID_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected void setID_NoVirtual(long id)
	{
		long idParamValue = id;
		setID_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取几何体类型
	 * @return 几何体类型枚举
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	public void setGeometryType(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getLayerType_void(long pNativeObject);
	/**
	 * 获取对应图层的类型
	 * @param  
	 * @return 图层的类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getLayerType()
	{
		int returnValue = getLayerType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private void setLayerType_EVLayerType(long pNativeObject, int type);
	public void setLayerType(com.earthview.world.spatial.atlas.EVLayerType type)
	{
		int typeParamValue = type.getValue();
		setLayerType_EVLayerType(this.nativeObject.pointer, typeParamValue);
	}
	protected  void toStream_CDataStream_callback(long objStream)
	{
		com.earthview.world.core.DataStream objStreamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		objStreamParamValue.setDelegate(true);
		objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		IClassFactory objStreamParamValueClassFactory = GlobalClassFactoryMap.get(objStreamParamValue.getCppInstanceTypeName());
		if (objStreamParamValueClassFactory != null)
		{
			objStreamParamValue.setDelegate(true);
			objStreamParamValue = (com.earthview.world.core.DataStream)objStreamParamValueClassFactory.create();
			objStreamParamValue.setDelegate(true);
			objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		}
		toStream(objStreamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long objStream);
	public void toStream(com.earthview.world.core.DataStream objStream)
	{
		long objStreamParamValue = objStream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, objStreamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long objStream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream objStream)
	{
		long objStreamParamValue = objStream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, objStreamParamValue);
	}

	protected  void fromStream_CDataStream_callback(long objStream)
	{
		com.earthview.world.core.DataStream objStreamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		objStreamParamValue.setDelegate(true);
		objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		IClassFactory objStreamParamValueClassFactory = GlobalClassFactoryMap.get(objStreamParamValue.getCppInstanceTypeName());
		if (objStreamParamValueClassFactory != null)
		{
			objStreamParamValue.setDelegate(true);
			objStreamParamValue = (com.earthview.world.core.DataStream)objStreamParamValueClassFactory.create();
			objStreamParamValue.setDelegate(true);
			objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		}
		fromStream(objStreamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long objStream);
	public void fromStream(com.earthview.world.core.DataStream objStream)
	{
		long objStreamParamValue = objStream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, objStreamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long objStream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream objStream)
	{
		long objStreamParamValue = objStream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, objStreamParamValue);
	}

	public VectorOctreeDataMetaInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreeDataMetaInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setDatasetType_EVDatasetType(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_setEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setVersion_ev_uint32(long pNativeObject, String method);
	native protected void register_getVersion_void(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_setID_ev_uint32(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setDatasetType_EVDatasetType(this.nativeObject.pointer, "setDatasetType_EVDatasetType_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_setEnvelope_IEnvelope(this.nativeObject.pointer, "setEnvelope_IEnvelope_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setVersion_ev_uint32(this.nativeObject.pointer, "setVersion_ev_uint32_callback");
			this.register_getVersion_void(this.nativeObject.pointer, "getVersion_void_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_setID_ev_uint32(this.nativeObject.pointer, "setID_ev_uint32_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static VectorOctreeDataMetaInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreeDataMetaInfo obj = null;
 		if(baseObj instanceof VectorOctreeDataMetaInfo)
		{
			obj = (VectorOctreeDataMetaInfo)baseObj;
		} else {
			obj = new VectorOctreeDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreeDataMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
