package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的网格对象类
 */
public class ServerTemplateMeshObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateMeshObject", new ServerTemplateMeshObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ServerTemplateMeshObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerTemplateMeshObject", null);
	}

	native private double getMaxDistance_void(long pNativeObject);
	public double getMaxDistance()
	{
		double returnValue = getMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinDistance_void(long pNativeObject);
	public double getMinDistance()
	{
		double returnValue = getMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationX_void(long pNativeObject);
	public double getRotationX()
	{
		double returnValue = getRotationX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationY_void(long pNativeObject);
	public double getRotationY()
	{
		double returnValue = getRotationY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationZ_void(long pNativeObject);
	public double getRotationZ()
	{
		double returnValue = getRotationZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotationW_void(long pNativeObject);
	public double getRotationW()
	{
		double returnValue = getRotationW_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScalX_void(long pNativeObject);
	public double getScalX()
	{
		double returnValue = getScalX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScalY_void(long pNativeObject);
	public double getScalY()
	{
		double returnValue = getScalY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScalZ_void(long pNativeObject);
	public double getScalZ()
	{
		double returnValue = getScalZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosX_void(long pNativeObject);
	public double getPosX()
	{
		double returnValue = getPosX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosY_void(long pNativeObject);
	public double getPosY()
	{
		double returnValue = getPosY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPosZ_void(long pNativeObject);
	public double getPosZ()
	{
		double returnValue = getPosZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getInstanceNum_void(long pNativeObject);
	public int getInstanceNum()
	{
		int returnValue = getInstanceNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMeshInstID_void(long pNativeObject);
	public int getMeshInstID()
	{
		int returnValue = getMeshInstID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMeshInstTmplID_void(long pNativeObject);
	public int getMeshInstTmplID()
	{
		int returnValue = getMeshInstTmplID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNodecode_void(long pNativeObject);
	public StringPointer getNodecode()
	{
		long returnValue = getNodecode_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAliasname_void(long pNativeObject);
	public StringPointer getAliasname()
	{
		long returnValue = getAliasname_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getRefCount_void(long pNativeObject);
	public int getRefCount()
	{
		int returnValue = getRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMeshTmplData_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr getMeshTmplData()
	{
		long returnValue = getMeshTmplData_void(this.nativeObject.pointer);
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
	native private long getFileName_void(long pNativeObject);
	public StringPointer getFileName()
	{
		long returnValue = getFileName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getname_void(long pNativeObject);
	public StringPointer getname()
	{
		long returnValue = getname_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getTmplId_void(long pNativeObject);
	public int getTmplId()
	{
		int returnValue = getTmplId_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerTemplateMeshObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerTemplateMeshObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerTemplateMeshObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerTemplateMeshObject obj = null;
 		if(baseObj instanceof ServerTemplateMeshObject)
		{
			obj = (ServerTemplateMeshObject)baseObj;
		} else {
			obj = new ServerTemplateMeshObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerTemplateMeshObject");
			obj.increaseCast();
		}

		return obj;
	}
}
