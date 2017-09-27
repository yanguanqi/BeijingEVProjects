package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureClassDriver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver", new FeatureClassDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JCFeatureClassDriverProxy", new FeatureClassDriverClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  long openDataset_IFileDataSource_EVString_callback(long pDataSource, String name)
	{
		com.earthview.world.spatial.geodataset.Ifiledatasource pDataSourceParamValue = (pDataSource == 0L ? null : new com.earthview.world.spatial.geodataset.Ifiledatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDataSourceParamValue != null)
		{
		pDataSourceParamValue.setDelegate(true);
		pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		IClassFactory pDataSourceParamValueClassFactory = GlobalClassFactoryMap.get(pDataSourceParamValue.getCppInstanceTypeName());
		if (pDataSourceParamValueClassFactory != null)
		{
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue = (com.earthview.world.spatial.geodataset.Ifiledatasource)pDataSourceParamValueClassFactory.create();
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		}
		}
		String nameParamValue = name;
		com.earthview.world.spatial.geodataset.Idataset returnValue = openDataset(pDataSourceParamValue, nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long openDataset_IFileDataSource_EVString(long pNativeObject, long pDataSource, String name);
	public com.earthview.world.spatial.geodataset.Idataset openDataset(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String name)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = openDataset_IFileDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long openDataset_IFileDataSource_EVString_NoVirtual(long pNativeObject, long pDataSource, String name);
	protected com.earthview.world.spatial.geodataset.Idataset openDataset_NoVirtual(com.earthview.world.spatial.geodataset.Ifiledatasource pDataSource, String name)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = openDataset_IFileDataSource_EVString_NoVirtual(this.nativeObject.pointer, pDataSourceParamValue, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	public FeatureClassDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureClassDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_openDataset_IFileDataSource_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_openDataset_IFileDataSource_EVString(this.nativeObject.pointer, "openDataset_IFileDataSource_EVString_callback");
		}
	}
	
	public static FeatureClassDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureClassDriver obj = null;
 		if(baseObj instanceof FeatureClassDriver)
		{
			obj = (FeatureClassDriver)baseObj;
		} else {
			obj = new FeatureClassDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureClassDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
