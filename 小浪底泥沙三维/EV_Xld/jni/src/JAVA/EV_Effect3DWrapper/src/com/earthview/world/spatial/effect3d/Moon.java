package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 月亮控制类
 */
public class Moon extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CMoon", new MoonClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Moon() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMoon", null);
	}

	/// <summary>
	/// 构造函数
	/// </summary>
	///<param "moonTextureName">材质名称</param>
	///<returns></returns>
	public Moon(String moonTextureName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer moonTextureNamePtr = new BasePointer(moonTextureName);
		list.add("moonTextureName", moonTextureNamePtr.get());
		Create("CMoon", list);
	}

	/// <summary>
	/// 构造函数
	/// </summary>
	///<param "moonTextureName">材质名称</param>
	///<param "angularSize">角度</param>
	///<returns></returns>
	public Moon(String moonTextureName, com.earthview.world.spatial.math.Degree angularSize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer moonTextureNamePtr = new BasePointer(moonTextureName);
		list.add("moonTextureName", moonTextureNamePtr.get());
		BasePointer angularSizePtr = new BasePointer(angularSize);
		list.add("angularSize", angularSizePtr.get());
		Create("CMoon", list);
	}

	native private String getResourceName_void(long pNativeObject);
	/**
	 * 获取资源名称
	 */
	public String getResourceName()
	{
		String returnValue = getResourceName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScale_ev_real32(long pNativeObject, float scale);
	/// <summary>
	/// 对月亮进行缩放
	/// </summary>
	///<param "scale">缩放系数</param>
	///<returns></returns>
	public void setScale(float scale)
	{
		float scaleParamValue = scale;
		setScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private float getScale_void(long pNativeObject);
	/**
	 * 获取月亮缩放系数
	 * @return 缩放系数
	 */
	public float getScale()
	{
		float returnValue = getScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMoonTextureAngularSize_void(long pNativeObject);
	/**
	 * 获取月亮大小，以视域角度为单位
	 * @return 视域角度
	 */
	public com.earthview.world.spatial.math.Degree getMoonTextureAngularSize()
	{
		long returnValue = getMoonTextureAngularSize_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	///Graphic::CColourValue getBodyColour();
	///void setBodyColour (const Graphic::CColourValue &colour);
	//// <summary>
	//// 可见性设置
	//// </summary>
	////<param "visible">是否可见</param>
	////<returns></returns>
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取可见性
	 * @return 可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_CMoon(long pNativeObject, long other);
	/**
	 * 重载==
	 * @return 比较
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.effect3d.Moon other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CMoon(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CMoon(long pNativeObject, long other);
	/**
	 * 重载!=
	 * @return 比较结果
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.effect3d.Moon other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CMoon(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	public Moon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Moon(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Moon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Moon obj = null;
 		if(baseObj instanceof Moon)
		{
			obj = (Moon)baseObj;
		} else {
			obj = new Moon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMoon");
			obj.increaseCast();
		}

		return obj;
	}
}
