package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型命令
 */
public class ModelCommand extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::ModelCommand", new ModelCommandClassFactory());
	}

	public ModelCommand(int modelID, com.earthview.world.spatial3d.ModelCommandType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer modelIDPtr = new BasePointer(modelID);
		list.add("modelID", modelIDPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("ModelCommand", list);
	}

	native private int modelID_void(long pNativeObject);
	public int modelID()
	{
		int returnValue = modelID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int commandType_void(long pNativeObject);
	public com.earthview.world.spatial3d.ModelCommandType commandType()
	{
		int returnValue = commandType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelCommandType.toEnum(returnValue);
	}
	native private void setSubIndexs_Int3Vector(long pNativeObject, long subIndexs);
	public void setSubIndexs(com.earthview.world.core.Int3Vector subIndexs)
	{
		long subIndexsParamValue = subIndexs.nativeObject.pointer;
		setSubIndexs_Int3Vector(this.nativeObject.pointer, subIndexsParamValue);
	}
	native private long getSubIndexs_void(long pNativeObject);
	public com.earthview.world.core.Int3Vector getSubIndexs()
	{
		long returnValue = getSubIndexs_void(this.nativeObject.pointer);
		com.earthview.world.core.Int3Vector __returnValue = new com.earthview.world.core.Int3Vector(CreatedWhenConstruct.CWC_NotToCreate, "Int3Vector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Int3Vector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Int3Vector");
		}
		return __returnValue;
	}
	public ModelCommand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelCommand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelCommand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelCommand obj = null;
 		if(baseObj instanceof ModelCommand)
		{
			obj = (ModelCommand)baseObj;
		} else {
			obj = new ModelCommand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelCommand");
			obj.increaseCast();
		}

		return obj;
	}
}
