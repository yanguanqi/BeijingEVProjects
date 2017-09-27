package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Component extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CComponent", new ComponentClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Component() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CComponent", null);
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 返回组件名字
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setName_EVString(long pNativeObject, String val);
	/**
	 * 设置组件名字
	 */
	public void setName(String val)
	{
		String valParamValue = val;
		setName_EVString(this.nativeObject.pointer, valParamValue);
	}
	native private long getSubComponents_void(long pNativeObject);
	/**
	 * 返回组件下的子组件
	 */
	public com.earthview.world.spatial3d.ComponentVector getSubComponents()
	{
		long returnValue = getSubComponents_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.ComponentVector __returnValue = new com.earthview.world.spatial3d.ComponentVector(CreatedWhenConstruct.CWC_NotToCreate, "CComponentVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ComponentVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CComponentVector");
		}
		return __returnValue;
	}
	native private long getComponentUnits_void(long pNativeObject);
	/**
	 * 返回组件下的组件单元集合
	 * @return 索引集合
	 */
	public com.earthview.world.spatial3d.ComponentUnits getComponentUnits()
	{
		long returnValue = getComponentUnits_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.ComponentUnits __returnValue = new com.earthview.world.spatial3d.ComponentUnits(CreatedWhenConstruct.CWC_NotToCreate, "ComponentUnits");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ComponentUnits)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ComponentUnits");
		}
		return __returnValue;
	}
	native private int getModelType_void(long pNativeObject);
	/**
	 * 返回组件下的模型的类型					
	 */
	public com.earthview.world.spatial3d.ModelType getModelType()
	{
		int returnValue = getModelType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelType.toEnum(returnValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除组件下的节点和subEntity
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getOffsetMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getOffsetMatrix()
	{
		long returnValue = getOffsetMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setOffsetMatrix_CMatrix4(long pNativeObject, long offsetMatrix);
	public void setOffsetMatrix(com.earthview.world.spatial.math.Matrix4 offsetMatrix)
	{
		long offsetMatrixParamValue = offsetMatrix.nativeObject.pointer;
		setOffsetMatrix_CMatrix4(this.nativeObject.pointer, offsetMatrixParamValue);
	}
	native private long getBounds_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getBounds()
	{
		long returnValue = getBounds_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getID_void(long pNativeObject);
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Component(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Component(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Component fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Component obj = null;
 		if(baseObj instanceof Component)
		{
			obj = (Component)baseObj;
		} else {
			obj = new Component(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CComponent");
			obj.increaseCast();
		}

		return obj;
	}
}
