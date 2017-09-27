package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedEntity extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstancedEntity", new InstancedEntityClassFactory());
	}

	public InstancedEntity(com.earthview.world.graphic.InstanceBatch ref_batchOwner, long instanceID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_batchOwnerPtr = new BasePointer(ref_batchOwner);
		list.add("ref_batchOwner", ref_batchOwnerPtr.get());
		BasePointer instanceIDPtr = new BasePointer(instanceID);
		list.add("instanceID", instanceIDPtr.get());
		Create("CInstancedEntity", list);
	}

	native private long _getOwner_void(long pNativeObject);
	public com.earthview.world.graphic.InstanceBatch _getOwner()
	{
		long returnValue = _getOwner_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
		}
		return __returnValue;
	}
	native private boolean isInUse_void(long pNativeObject);
	public boolean isInUse()
	{
		boolean returnValue = isInUse_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInScene_void(long pNativeObject);
	public boolean isInScene()
	{
		boolean returnValue = isInScene_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInUse_ev_bool(long pNativeObject, boolean used);
	public void setInUse(boolean used)
	{
		boolean usedParamValue = used;
		setInUse_ev_bool(this.nativeObject.pointer, usedParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private int getIndex_void(long pNativeObject);
	/// <summary>
	/// 获取对象在CInstanceBatch中的序号				
	/// <param name=""></param>				
	/// <returns></returns>
	public int getIndex()
	{
		int returnValue = getIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getInstanceIndex_void(long pNativeObject);
	public long getInstanceIndex()
	{
		long returnValue = getInstanceIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubMeshInstanceIndex_void(long pNativeObject);
	/// <summary>
	/// 获取对象在submesh中的instance序号				
	/// <param name=""></param>				
	/// <returns></returns>
	public long getSubMeshInstanceIndex()
	{
		long returnValue = getSubMeshInstanceIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInternalInstance_void(long pNativeObject);
	/// <summary>
	/// 询问是否为内部instance对象				
	/// <param name=""></param>				
	/// <returns></returns>
	public boolean isInternalInstance()
	{
		boolean returnValue = isInternalInstance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubMeshInstanceMatrix_void(long pNativeObject);
	/// <summary>
	/// 获取SubMesh中的instance矩阵				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.spatial.math.Matrix4 getSubMeshInstanceMatrix()
	{
		long returnValue = getSubMeshInstanceMatrix_void(this.nativeObject.pointer);
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
	native private void setUserColour_CColourValue(long pNativeObject, long color);
	public void setUserColour(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setUserColour_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private long getUserColour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getUserColour()
	{
		long returnValue = getUserColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private long getSelected_void(long pNativeObject);
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		long returnValue = getSelected_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getSelectionColour_void(long pNativeObject);
	/// <summary>
	/// 获得选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setSelectionColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	public InstancedEntity(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstancedEntity(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InstancedEntity fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstancedEntity obj = null;
 		if(baseObj instanceof InstancedEntity)
		{
			obj = (InstancedEntity)baseObj;
		} else {
			obj = new InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstancedEntity");
			obj.increaseCast();
		}

		return obj;
	}
}
