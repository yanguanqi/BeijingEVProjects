package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////
//EarthView::World::Spatial2D::SpatialIndex::IDVistor
////////////////////////////////////////////////////////////////
public class Idvistor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::IDVistor", new IdvistorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Idvistor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IDVistor", null);
	}

	/**
	 * 变换到流
	 * @param size data中id_type元素个数
	 * @param data 数据
	 */
	public Idvistor(long size, UIntegerPointer data) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer dataPtr = new BasePointer(data);
		list.add("data", dataPtr.get());
		Create("IDVistor", list);
	}

	/**
	 * 构造函数
	 */
	public Idvistor(com.earthview.world.spatial2d.spatialindex.Idvistor other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("IDVistor", list);
	}

	native private long OperatorAssign_IDVistor(long pNativeObject, long other);
	/**
	 * 赋值构造函数
	 */
	public com.earthview.world.spatial2d.spatialindex.Idvistor OperatorAssign(com.earthview.world.spatial2d.spatialindex.Idvistor other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_IDVistor(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial2d.spatialindex.Idvistor __returnValue = new com.earthview.world.spatial2d.spatialindex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate, "IDVistor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.spatialindex.Idvistor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDVistor");
		}
		return __returnValue;
	}
	native private long getSize_void(long pNativeObject);
	/**
	 * 获取个数
	 * @return 个数
	 */
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_size_t(long pNativeObject, long index);
	/**
	 * 获取指定系数的值
	 * @return ID值
	 */
	public UIntegerPointer OperatorIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = OperatorIndex_size_t(this.nativeObject.pointer, indexParamValue);
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public Idvistor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idvistor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Idvistor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idvistor obj = null;
 		if(baseObj instanceof Idvistor)
		{
			obj = (Idvistor)baseObj;
		} else {
			obj = new Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDVistor");
			obj.increaseCast();
		}

		return obj;
	}
}
