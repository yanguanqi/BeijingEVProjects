package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evvector3dmetainfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVVector3DMetaInfo", new Evvector3dmetainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVVector3DMetaInfoProxy", new Evvector3dmetainfoClassFactory());
	}

	public Evvector3dmetainfo(String name, com.earthview.world.spatial.geodataset.EVDatasetType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCEVVector3DMetaInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evvector3dmetainfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
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

	native private String getName_void(long pNativeObject);
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

	native private long getEnvelopeRef_void(long pNativeObject);
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

	native private long getSpatialReference_void(long pNativeObject);
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

	protected  int getSrid_void_callback()
	{
		int returnValue = getSrid();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSrid_void(long pNativeObject);
	public int getSrid()
	{
		int returnValue = getSrid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSrid_void_NoVirtual(long pNativeObject);
	protected int getSrid_NoVirtual()
	{
		int returnValue = getSrid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVersion_ev_int32_callback(int version)
	{
		int versionParamValue = version;
		setVersion(versionParamValue);
	}

	native private void setVersion_ev_int32(long pNativeObject, int version);
	public void setVersion(int version)
	{
		int versionParamValue = version;
		setVersion_ev_int32(this.nativeObject.pointer, versionParamValue);
	}
	native private void setVersion_ev_int32_NoVirtual(long pNativeObject, int version);
	protected void setVersion_NoVirtual(int version)
	{
		int versionParamValue = version;
		setVersion_ev_int32_NoVirtual(this.nativeObject.pointer, versionParamValue);
	}

	protected  int getVersion_void_callback()
	{
		int returnValue = getVersion();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getVersion_void(long pNativeObject);
	public int getVersion()
	{
		int returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVersion_void_NoVirtual(long pNativeObject);
	protected int getVersion_NoVirtual()
	{
		int returnValue = getVersion_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	protected  void setGeometryType_EVGeometryType_callback(int type)
	{
		com.earthview.world.spatial.geometry.EVGeometryType typeParamValue = com.earthview.world.spatial.geometry.EVGeometryType.toEnum(type);
		setGeometryType(typeParamValue);
	}

	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	public void setGeometryType(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setGeometryType_EVGeometryType_NoVirtual(long pNativeObject, int type);
	protected void setGeometryType_NoVirtual(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  int getLayerType_void_callback()
	{
		com.earthview.world.spatial.atlas.EVLayerType returnValue = getLayerType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getLayerType_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.EVLayerType getLayerType()
	{
		int returnValue = getLayerType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getLayerType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getLayerType_NoVirtual()
	{
		int returnValue = getLayerType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	protected  void setLayerType_EVLayerType_callback(int type)
	{
		com.earthview.world.spatial.atlas.EVLayerType typeParamValue = com.earthview.world.spatial.atlas.EVLayerType.toEnum(type);
		setLayerType(typeParamValue);
	}

	native private void setLayerType_EVLayerType(long pNativeObject, int type);
	public void setLayerType(com.earthview.world.spatial.atlas.EVLayerType type)
	{
		int typeParamValue = type.getValue();
		setLayerType_EVLayerType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setLayerType_EVLayerType_NoVirtual(long pNativeObject, int type);
	protected void setLayerType_NoVirtual(com.earthview.world.spatial.atlas.EVLayerType type)
	{
		int typeParamValue = type.getValue();
		setLayerType_EVLayerType_NoVirtual(this.nativeObject.pointer, typeParamValue);
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

	protected  void ev_clone_IDataMetaInfo_callback(long pOther)
	{
		com.earthview.world.spatial.geodataset.Idatametainfo pOtherParamValue = (pOther == 0L ? null : new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOtherParamValue != null)
		{
		pOtherParamValue.setDelegate(true);
		pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		IClassFactory pOtherParamValueClassFactory = GlobalClassFactoryMap.get(pOtherParamValue.getCppInstanceTypeName());
		if (pOtherParamValueClassFactory != null)
		{
			pOtherParamValue.setDelegate(true);
			pOtherParamValue = (com.earthview.world.spatial.geodataset.Idatametainfo)pOtherParamValueClassFactory.create();
			pOtherParamValue.setDelegate(true);
			pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		}
		}
		ev_clone(pOtherParamValue);
	}

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo(this.nativeObject.pointer, pOtherParamValue);
	}
	native private void ev_clone_IDataMetaInfo_NoVirtual(long pNativeObject, long pOther);
	protected void ev_clone_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, pOtherParamValue);
	}

	public Evvector3dmetainfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evvector3dmetainfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSrid_void(long pNativeObject, String method);
	native protected void register_setVersion_ev_int32(long pNativeObject, String method);
	native protected void register_getVersion_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_setGeometryType_EVGeometryType(long pNativeObject, String method);
	native protected void register_getLayerType_void(long pNativeObject, String method);
	native protected void register_setLayerType_EVLayerType(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSrid_void(this.nativeObject.pointer, "getSrid_void_callback");
			this.register_setVersion_ev_int32(this.nativeObject.pointer, "setVersion_ev_int32_callback");
			this.register_getVersion_void(this.nativeObject.pointer, "getVersion_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_setGeometryType_EVGeometryType(this.nativeObject.pointer, "setGeometryType_EVGeometryType_callback");
			this.register_getLayerType_void(this.nativeObject.pointer, "getLayerType_void_callback");
			this.register_setLayerType_EVLayerType(this.nativeObject.pointer, "setLayerType_EVLayerType_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evvector3dmetainfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evvector3dmetainfo obj = null;
 		if(baseObj instanceof Evvector3dmetainfo)
		{
			obj = (Evvector3dmetainfo)baseObj;
		} else {
			obj = new Evvector3dmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVVector3DMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
