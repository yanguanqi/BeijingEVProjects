package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodTreeExportXmlParser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser", new LodTreeExportXmlParserClassFactory());
	}

	public LodTreeExportXmlParser() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLodTreeExportXmlParser", null);
	}

	native private void setXmlFile_EVString(long pNativeObject, String file);
	public void setXmlFile(String file)
	{
		String fileParamValue = file;
		setXmlFile_EVString(this.nativeObject.pointer, fileParamValue);
	}
	native private String getXmlFile_void(long pNativeObject);
	public String getXmlFile()
	{
		String returnValue = getXmlFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSRS_void(long pNativeObject);
	public String getSRS()
	{
		String returnValue = getSRS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getWorldPos_ev_real64_ev_real64_ev_real64(long pNativeObject, long lat, long lon, long alt);
	public void getWorldPos(DoublePointer lat, DoublePointer lon, DoublePointer alt)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		getWorldPos_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}
	native private void getScale_ev_real64_ev_real64_ev_real64(long pNativeObject, long scaleX, long scaleY, long scaleZ);
	public void getScale(DoublePointer scaleX, DoublePointer scaleY, DoublePointer scaleZ)
	{
		long scaleXParamValue = scaleX.nativeObject.pointer;
		long scaleYParamValue = scaleY.nativeObject.pointer;
		long scaleZParamValue = scaleZ.nativeObject.pointer;
		getScale_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, scaleXParamValue, scaleYParamValue, scaleZParamValue);
	}
	native private void getRot_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long rotW, long rotX, long rotY, long rotZ);
	public void getRot(DoublePointer rotW, DoublePointer rotX, DoublePointer rotY, DoublePointer rotZ)
	{
		long rotWParamValue = rotW.nativeObject.pointer;
		long rotXParamValue = rotX.nativeObject.pointer;
		long rotYParamValue = rotY.nativeObject.pointer;
		long rotZParamValue = rotZ.nativeObject.pointer;
		getRot_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, rotWParamValue, rotXParamValue, rotYParamValue, rotZParamValue);
	}
	native private String getOriginMode_void(long pNativeObject);
	public String getOriginMode()
	{
		String returnValue = getOriginMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getVersion_void(long pNativeObject);
	public String getVersion()
	{
		String returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getTileArray_CStringArray_CStringArray(long pNativeObject, long tileNames, long tilePaths);
	public void getTileArray(com.earthview.world.core.StringArray tileNames, com.earthview.world.core.StringArray tilePaths)
	{
		long tileNamesParamValue = tileNames.nativeObject.pointer;
		long tilePathsParamValue = tilePaths.nativeObject.pointer;
		getTileArray_CStringArray_CStringArray(this.nativeObject.pointer, tileNamesParamValue, tilePathsParamValue);
	}
	native private int getDataType_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.OBQDataType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.modelmanager.OBQDataType.toEnum(returnValue);
	}
	public LodTreeExportXmlParser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodTreeExportXmlParser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodTreeExportXmlParser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodTreeExportXmlParser obj = null;
 		if(baseObj instanceof LodTreeExportXmlParser)
		{
			obj = (LodTreeExportXmlParser)baseObj;
		} else {
			obj = new LodTreeExportXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodTreeExportXmlParser");
			obj.increaseCast();
		}

		return obj;
	}
}
