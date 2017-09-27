package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceObject", new InstanceObjectClassFactory());
	}

	public InstanceObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CInstanceObject", null);
	}

	native private int getNumInstanceEntities_void(long pNativeObject);
	/// <summary>
	/// 获得InstanceEntity的数量				
	/// <param name=""></param>				
	/// <returns></returns>
	public int getNumInstanceEntities()
	{
		int returnValue = getNumInstanceEntities_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getInstancedEntity_ev_uint16(long pNativeObject, int index);
	/// <summary>
	/// 获得指定序号的InstanceEntity				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.InstancedEntity getInstancedEntity(int index)
	{
		int indexParamValue = index;
		long returnValue = getInstancedEntity_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstancedEntity __returnValue = new com.earthview.world.graphic.InstancedEntity(CreatedWhenConstruct.CWC_NotToCreate, "CInstancedEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstancedEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstancedEntity");
		}
		return __returnValue;
	}
	native private boolean attachToNode_CNode(long pNativeObject, long ref_node);
	/// <summary>
	/// 挂接到节点				
	/// <param name=""></param>				
	/// <returns></returns>
	public boolean attachToNode(com.earthview.world.graphic.Node ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode(this.nativeObject.pointer, ref_nodeParamValue);
		return returnValue;
	}
	native private long detachFromNode_void(long pNativeObject);
	/// <summary>
	/// 从节点上反挂接				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getParentNode_void(long pNativeObject);
	/// <summary>
	/// 获取节点				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.Node getParentNode()
	{
		long returnValue = getParentNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getCreator_void(long pNativeObject);
	/// <summary>
	/// 获取creator				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.InstanceObjectCreator getCreator()
	{
		long returnValue = getCreator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceObjectCreator __returnValue = new com.earthview.world.graphic.InstanceObjectCreator(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceObjectCreator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceObjectCreator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceObjectCreator");
		}
		return __returnValue;
	}
	native private void setSelected_ev_bool(long pNativeObject, boolean selected);
	/// <summary>
	/// 设置是否被选中				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelected(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelected_ev_bool(this.nativeObject.pointer, selectedParamValue);
	}
	native private boolean getSelected_void(long pNativeObject);
	/// <summary>
	/// 获取是否被选中				
	/// <param name=""></param>				
	/// <returns></returns>
	public boolean getSelected()
	{
		boolean returnValue = getSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	public InstanceObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InstanceObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceObject obj = null;
 		if(baseObj instanceof InstanceObject)
		{
			obj = (InstanceObject)baseObj;
		} else {
			obj = new InstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceObject");
			obj.increaseCast();
		}

		return obj;
	}
}
