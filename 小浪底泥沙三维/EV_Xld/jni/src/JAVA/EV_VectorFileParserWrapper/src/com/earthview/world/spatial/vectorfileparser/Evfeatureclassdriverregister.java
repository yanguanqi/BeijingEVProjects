package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evfeatureclassdriverregister extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister", new EvfeatureclassdriverregisterClassFactory());
	}

	native private static long getRegisterDrivers_void();
	public static com.earthview.world.spatial.vectorfileparser.Evfeatureclassdriverregister getRegisterDrivers()
	{
		long returnValue = getRegisterDrivers_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorfileparser.Evfeatureclassdriverregister __returnValue = new com.earthview.world.spatial.vectorfileparser.Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate, "EVFeatureClassDriverRegister");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorfileparser.Evfeatureclassdriverregister)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EVFeatureClassDriverRegister");
		}
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
	native private void EVRegisterDriver_CFeatureClassDriver(long pNativeObject, long pDriver);
	public void EVRegisterDriver(com.earthview.world.spatial.vectorfileparser.FeatureClassDriver pDriver)
	{
		long pDriverParamValue = (pDriver == null ? 0L : pDriver.nativeObject.pointer);
		EVRegisterDriver_CFeatureClassDriver(this.nativeObject.pointer, pDriverParamValue);
	}
	native private long getDriverByName_EVString(long pNativeObject, String driverName);
	public com.earthview.world.spatial.vectorfileparser.FeatureClassDriver getDriverByName(String driverName)
	{
		String driverNameParamValue = driverName;
		long returnValue = getDriverByName_EVString(this.nativeObject.pointer, driverNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorfileparser.FeatureClassDriver __returnValue = new com.earthview.world.spatial.vectorfileparser.FeatureClassDriver(CreatedWhenConstruct.CWC_NotToCreate, "CFeatureClassDriver");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorfileparser.FeatureClassDriver)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFeatureClassDriver");
		}
		return __returnValue;
	}
	public Evfeatureclassdriverregister(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evfeatureclassdriverregister(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evfeatureclassdriverregister fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evfeatureclassdriverregister obj = null;
 		if(baseObj instanceof Evfeatureclassdriverregister)
		{
			obj = (Evfeatureclassdriverregister)baseObj;
		} else {
			obj = new Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVFeatureClassDriverRegister");
			obj.increaseCast();
		}

		return obj;
	}
}
