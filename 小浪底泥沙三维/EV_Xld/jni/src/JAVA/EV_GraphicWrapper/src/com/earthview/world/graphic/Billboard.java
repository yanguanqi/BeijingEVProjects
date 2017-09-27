package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 广告板类该类作用于一般动产并且总是面向摄像机定义广告板相关操作的类
 */
public class Billboard extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboard", new BillboardClassFactory());
	}

	native private long get_mPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mPosition()
	{
		long jniValue = get_mPosition_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mPosition_CVector3 (long pNativeObject, long value);
	public void set_mPosition(com.earthview.world.spatial.math.Vector3 mPosition)
	{
		long mPositionParamValue = mPosition.nativeObject.pointer;
		
		set_mPosition_CVector3(this.nativeObject.pointer, mPositionParamValue);
	}
	
	native private long get_mDirection_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mDirection()
	{
		long jniValue = get_mDirection_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mDirection_CVector3 (long pNativeObject, long value);
	public void set_mDirection(com.earthview.world.spatial.math.Vector3 mDirection)
	{
		long mDirectionParamValue = mDirection.nativeObject.pointer;
		
		set_mDirection_CVector3(this.nativeObject.pointer, mDirectionParamValue);
	}
	
	native private long get_mParentSet_void(long pNativeObject);
	public com.earthview.world.graphic.BillboardSet get_mParentSet()
	{
		long jniValue = get_mParentSet_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardSet __returnValue = new com.earthview.world.graphic.BillboardSet(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardSet");
		}
		return __returnValue;
	}
	
	native private void set_mParentSet_CBillboardSet (long pNativeObject, long value);
	public void set_mParentSet(com.earthview.world.graphic.BillboardSet mParentSet)
	{
		long mParentSetParamValue = (mParentSet == null ? 0L : mParentSet.nativeObject.pointer);
		
		set_mParentSet_CBillboardSet(this.nativeObject.pointer, mParentSetParamValue);
	}
	
	native private long get_mColour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mColour()
	{
		long jniValue = get_mColour_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mColour_CColourValue (long pNativeObject, long value);
	public void set_mColour(com.earthview.world.graphic.ColourValue mColour)
	{
		long mColourParamValue = mColour.nativeObject.pointer;
		
		set_mColour_CColourValue(this.nativeObject.pointer, mColourParamValue);
	}
	
	native private long get_mRotation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian get_mRotation()
	{
		long jniValue = get_mRotation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	
	native private void set_mRotation_CRadian (long pNativeObject, long value);
	public void set_mRotation(com.earthview.world.spatial.math.Radian mRotation)
	{
		long mRotationParamValue = mRotation.nativeObject.pointer;
		
		set_mRotation_CRadian(this.nativeObject.pointer, mRotationParamValue);
	}
	
	native private boolean get_mVisible_void(long pNativeObject);
	public boolean get_mVisible()
	{
		boolean jniValue = get_mVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mVisible_ev_bool (long pNativeObject, boolean value);
	public void set_mVisible(boolean mVisible)
	{
		boolean mVisibleParamValue = mVisible;
		
		set_mVisible_ev_bool(this.nativeObject.pointer, mVisibleParamValue);
	}
	
	native private boolean get_mBeyondDistance_void(long pNativeObject);
	public boolean get_mBeyondDistance()
	{
		boolean jniValue = get_mBeyondDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mBeyondDistance_ev_bool (long pNativeObject, boolean value);
	public void set_mBeyondDistance(boolean mBeyondDistance)
	{
		boolean mBeyondDistanceParamValue = mBeyondDistance;
		
		set_mBeyondDistance_ev_bool(this.nativeObject.pointer, mBeyondDistanceParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Billboard() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBillboard", null);
	}

	/**
	 * 构造函数
	 * @param position 三维向量位置
	 * @param owner 广告板的拥有者(广告板集)
	 * @param colour 设置的颜色
	 */
	public Billboard(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.graphic.BillboardSet ref_owner, com.earthview.world.graphic.ColourValue colour) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer positionPtr = new BasePointer(position);
		list.add("position", positionPtr.get());
		BasePointer ref_ownerPtr = new BasePointer(ref_owner);
		list.add("ref_owner", ref_ownerPtr.get());
		BasePointer colourPtr = new BasePointer(colour);
		list.add("colour", colourPtr.get());
		Create("CBillboard", list);
	}

	/**
	 * 构造函数
	 * @param position 三维向量位置
	 * @param owner 广告板的拥有者(广告板集)
	 */
	public Billboard(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.graphic.BillboardSet ref_owner) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer positionPtr = new BasePointer(position);
		list.add("position", positionPtr.get());
		BasePointer ref_ownerPtr = new BasePointer(ref_owner);
		list.add("ref_owner", ref_ownerPtr.get());
		Create("CBillboard", list);
	}

	native private long getRotation_void(long pNativeObject);
	/**
	 * 获得广告板的旋转弧度
	 * @param  
	 * @return 旋转弧度
	 */
	public com.earthview.world.spatial.math.Radian getRotation()
	{
		long returnValue = getRotation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private void setRotation_CRadian(long pNativeObject, long rotation);
	/**
	 * 设置广告板的旋转弧度
	 * @param rotation 所需设置的旋转弧度
	 */
	public void setRotation(com.earthview.world.spatial.math.Radian rotation)
	{
		long rotationParamValue = rotation.nativeObject.pointer;
		setRotation_CRadian(this.nativeObject.pointer, rotationParamValue);
	}
	native private void setPosition_CVector3(long pNativeObject, long position);
	/**
	 * 设置广告板的三维位置
	 * @param position 所需设置的三维位置
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	native private void setPosition_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置广告板的三维位置
	 * @param x x坐标
	 * @param y y坐标
	 * @param z z坐标
	 */
	public void setPosition(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private long getPosition_void(long pNativeObject);
	/**
	 * 获得广告板的三维位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 设置广告板的宽度和高度
	 * @param width 宽度
	 * @param height 高度
	 */
	public void setDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void resetDimensions_void(long pNativeObject);
	/**
	 * 重置广告板的宽度和高度(恢复为广告板集的宽高)
	 * @param  
	 */
	public void resetDimensions()
	{
		resetDimensions_void(this.nativeObject.pointer);
	}
	native private void setColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置广告板的颜色
	 * @param colour 
	 */
	public void setColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getColour_void(long pNativeObject);
	/**
	 * 获得广告板的颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColour()
	{
		long returnValue = getColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private boolean hasOwnDimensions_void(long pNativeObject);
	/**
	 * 判断广告板是否拥有自定义的宽高
	 * @param  
	 * @return 没有缺少维数返回true，否则false
	 */
	public boolean hasOwnDimensions()
	{
		boolean returnValue = hasOwnDimensions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOwnWidth_void(long pNativeObject);
	/**
	 * 获得广告板自身的宽度
	 * @param  
	 * @return 宽度值
	 */
	public double getOwnWidth()
	{
		double returnValue = getOwnWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOwnHeight_void(long pNativeObject);
	/// <summary>
	/// 获得广告板自身的高度
	/// </summary>
	/// <param name=""></param>
	/// <returns>高度值</returns
	public double getOwnHeight()
	{
		double returnValue = getOwnHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyOwner_CBillboardSet(long pNativeObject, long ref_owner);
	/**
	 * 自我通知拥有者是谁(内部使用)
	 * @param owner 
	 */
	public void _notifyOwner(com.earthview.world.graphic.BillboardSet ref_owner)
	{
		long ref_ownerParamValue = (ref_owner == null ? 0L : ref_owner.nativeObject.pointer);
		_notifyOwner_CBillboardSet(this.nativeObject.pointer, ref_ownerParamValue);
	}
	native private boolean isUseTexcoordRect_void(long pNativeObject);
	/**
	 * 判断广告板是否使用纹理坐标(范围)
	 * @param  
	 */
	public boolean isUseTexcoordRect()
	{
		boolean returnValue = isUseTexcoordRect_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTexcoordIndex_ev_uint16(long pNativeObject, int texcoordIndex);
	/**
	 * 设置广告板的纹理坐标索引
	 * @param texcoordIndex 索引值
	 */
	public void setTexcoordIndex(int texcoordIndex)
	{
		int texcoordIndexParamValue = texcoordIndex;
		setTexcoordIndex_ev_uint16(this.nativeObject.pointer, texcoordIndexParamValue);
	}
	native private int getTexcoordIndex_void(long pNativeObject);
	/**
	 * 获取广告板的纹理坐标索引
	 * @param  
	 * @return 索引值
	 */
	public int getTexcoordIndex()
	{
		int returnValue = getTexcoordIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTexcoordRect_FloatRect(long pNativeObject, long texcoordRect);
	/**
	 * 设置广告板的纹理坐标(范围)
	 * @param texcoordRect 材质矩阵
	 */
	public void setTexcoordRect(com.earthview.world.graphic.FloatRect texcoordRect)
	{
		long texcoordRectParamValue = texcoordRect.nativeObject.pointer;
		setTexcoordRect_FloatRect(this.nativeObject.pointer, texcoordRectParamValue);
	}
	native private void setTexcoordRect_Real_Real_Real_Real(long pNativeObject, double u0, double v0, double u1, double v1);
	/**
	 * 设置广告板的纹理坐标(范围)
	 * @param u0 u0的值
	 * @param v0 v0的值
	 * @param u1 u1的值
	 * @param v1 v1的值
	 */
	public void setTexcoordRect(double u0, double v0, double u1, double v1)
	{
		double u0ParamValue = u0;
		double v0ParamValue = v0;
		double u1ParamValue = u1;
		double v1ParamValue = v1;
		setTexcoordRect_Real_Real_Real_Real(this.nativeObject.pointer, u0ParamValue, v0ParamValue, u1ParamValue, v1ParamValue);
	}
	native private long getTexcoordRect_void(long pNativeObject);
	/**
	 * 获得广告板的纹理坐标(范围)
	 * @param  
	 */
	public com.earthview.world.graphic.FloatRect getTexcoordRect()
	{
		long returnValue = getTexcoordRect_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	public Billboard(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Billboard(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Billboard fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Billboard obj = null;
 		if(baseObj instanceof Billboard)
		{
			obj = (Billboard)baseObj;
		} else {
			obj = new Billboard(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboard");
			obj.increaseCast();
		}

		return obj;
	}
}
