package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 绘制标绘的基础信息
public class ArrowBaseInfo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CArrowBaseInfo", new ArrowBaseInfoClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ArrowBaseInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CArrowBaseInfo", null);
	}

	/**
	 * 拷贝构造函数
	 * @param arrowInfo 拷贝的对象
	 */
	public ArrowBaseInfo(com.earthview.world.geometry3d.ArrowBaseInfo arrowInfo) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer arrowInfoPtr = new BasePointer(arrowInfo);
		list.add("arrowInfo", arrowInfoPtr.get());
		Create("CArrowBaseInfo", list);
	}

	native private long OperatorAssign_CArrowBaseInfo(long pNativeObject, long arrowInfo);
	/**
	 * 重载赋值运算
	 * @param arrowInfo 赋值对象
	 */
	public com.earthview.world.geometry3d.ArrowBaseInfo OperatorAssign(com.earthview.world.geometry3d.ArrowBaseInfo arrowInfo)
	{
		long arrowInfoParamValue = arrowInfo.nativeObject.pointer;
		long returnValue = OperatorAssign_CArrowBaseInfo(this.nativeObject.pointer, arrowInfoParamValue);
		com.earthview.world.geometry3d.ArrowBaseInfo __returnValue = new com.earthview.world.geometry3d.ArrowBaseInfo(CreatedWhenConstruct.CWC_NotToCreate, "CArrowBaseInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.ArrowBaseInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArrowBaseInfo");
		}
		return __returnValue;
	}
	native private boolean isEqual_CArrowBaseInfo(long pNativeObject, long arrowInfo);
	/**
	 * 判断是否相等
	 * @param arrowInfo 
	 */
	public boolean isEqual(com.earthview.world.geometry3d.ArrowBaseInfo arrowInfo)
	{
		long arrowInfoParamValue = arrowInfo.nativeObject.pointer;
		boolean returnValue = isEqual_CArrowBaseInfo(this.nativeObject.pointer, arrowInfoParamValue);
		return returnValue;
	}
	native private void setColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setArrowType_ArrowType(long pNativeObject, int type);
	/**
	 * 设置标绘的类型
	 * @param type 类型
	 */
	public void setArrowType(com.earthview.world.spatial.kml.ArrowType type)
	{
		int typeParamValue = type.getValue();
		setArrowType_ArrowType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setStartAltitude_ev_real32(long pNativeObject, float atitudeValue);
	/**
	 * 设置起始高度
	 * @param atitudeValue 起始高度
	 */
	public void setStartAltitude(float atitudeValue)
	{
		float atitudeValueParamValue = atitudeValue;
		setStartAltitude_ev_real32(this.nativeObject.pointer, atitudeValueParamValue);
	}
	native private void setEndAltitude_ev_real32(long pNativeObject, float atitudeValue);
	/**
	 * 设置终止高度
	 * @param atitudeValue 终止高度
	 */
	public void setEndAltitude(float atitudeValue)
	{
		float atitudeValueParamValue = atitudeValue;
		setEndAltitude_ev_real32(this.nativeObject.pointer, atitudeValueParamValue);
	}
	native private void addKeyPoint_CVector3(long pNativeObject, long t);
	/**
	 * 添加关键点
	 * @param t 关键点
	 */
	public void addKeyPoint(com.earthview.world.spatial.math.Vector3 t)
	{
		long tParamValue = t.nativeObject.pointer;
		addKeyPoint_CVector3(this.nativeObject.pointer, tParamValue);
	}
	native private void reMoveAllPoints_void(long pNativeObject);
	/**
	 * 删除所有关键点
	 */
	public void reMoveAllPoints()
	{
		reMoveAllPoints_void(this.nativeObject.pointer);
	}
	native private long getColor_void(long pNativeObject);
	/**
	 * 获取颜色
	 */
	public com.earthview.world.graphic.ColourValue getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
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
	native private int getType_void(long pNativeObject);
	/**
	 * 获取标绘的类型
	 */
	public com.earthview.world.spatial.kml.ArrowType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.ArrowType.toEnum(returnValue);
	}
	native private float getStartAltitude_void(long pNativeObject);
	/**
	 * 获取起始的高度
	 */
	public float getStartAltitude()
	{
		float returnValue = getStartAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getEndAltitude_void(long pNativeObject);
	/**
	 * 获取终止的高度
	 */
	public float getEndAltitude()
	{
		float returnValue = getEndAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getKeyPoints_void(long pNativeObject);
	/**
	 * 获取所有的关键点
	 */
	public com.earthview.world.spatial.math.VertexList getKeyPoints()
	{
		long returnValue = getKeyPoints_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private long getKeyPointByIndex_ev_int32(long pNativeObject, int index);
	/**
	 * 根据索引获取关键点
	 * @param index 关键点索引
	 */
	public com.earthview.world.spatial.math.Vector3 getKeyPointByIndex(int index)
	{
		int indexParamValue = index;
		long returnValue = getKeyPointByIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	public ArrowBaseInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ArrowBaseInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ArrowBaseInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ArrowBaseInfo obj = null;
 		if(baseObj instanceof ArrowBaseInfo)
		{
			obj = (ArrowBaseInfo)baseObj;
		} else {
			obj = new ArrowBaseInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CArrowBaseInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
