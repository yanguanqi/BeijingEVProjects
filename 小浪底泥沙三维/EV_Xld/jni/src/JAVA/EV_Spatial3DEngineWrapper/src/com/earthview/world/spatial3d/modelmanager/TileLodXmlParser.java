package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileLodXmlParser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser", new TileLodXmlParserClassFactory());
	}

	public TileLodXmlParser() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileLodXmlParser", null);
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
	native private String getTileName_void(long pNativeObject);
	public String getTileName()
	{
		String returnValue = getTileName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getVersion_void(long pNativeObject);
	public String getVersion()
	{
		String returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRootNode_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.LodIndex getRootNode()
	{
		long returnValue = getRootNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodIndex __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndex(CreatedWhenConstruct.CWC_NotToCreate, "LodIndex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LodIndex");
		}
		return __returnValue;
	}
	native private int get_mMaxLevel_void(long pNativeObject);
	public int get_mMaxLevel()
	{
		int jniValue = get_mMaxLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxLevel_ev_int32 (long pNativeObject, int value);
	public void set_mMaxLevel(int mMaxLevel)
	{
		int mMaxLevelParamValue = mMaxLevel;
		
		set_mMaxLevel_ev_int32(this.nativeObject.pointer, mMaxLevelParamValue);
	}
	
	native private int get_mStartQuadLevel_void(long pNativeObject);
	public int get_mStartQuadLevel()
	{
		int jniValue = get_mStartQuadLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartQuadLevel_ev_int32 (long pNativeObject, int value);
	public void set_mStartQuadLevel(int mStartQuadLevel)
	{
		int mStartQuadLevelParamValue = mStartQuadLevel;
		
		set_mStartQuadLevel_ev_int32(this.nativeObject.pointer, mStartQuadLevelParamValue);
	}
	
	public TileLodXmlParser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileLodXmlParser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileLodXmlParser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileLodXmlParser obj = null;
 		if(baseObj instanceof TileLodXmlParser)
		{
			obj = (TileLodXmlParser)baseObj;
		} else {
			obj = new TileLodXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileLodXmlParser");
			obj.increaseCast();
		}

		return obj;
	}
}
