package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 太阳控制类
 */
public class Sun extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CSun", new SunClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Sun() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSun", null);
	}

	/// <summary>
	/// 构造函数
	/// </summary>
	///<param "textureName">纹理名称</param>
	public Sun(String textureName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer textureNamePtr = new BasePointer(textureName);
		list.add("textureName", textureNamePtr.get());
		Create("CSun", list);
	}

	/// <summary>
	/// 构造函数
	/// </summary>
	///<param "textureName">纹理名称</param>
	///<param "textureName">角度大小</param>
	public Sun(String textureName, com.earthview.world.spatial.math.Degree sunTextureAngularSize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer textureNamePtr = new BasePointer(textureName);
		list.add("textureName", textureNamePtr.get());
		BasePointer sunTextureAngularSizePtr = new BasePointer(sunTextureAngularSize);
		list.add("sunTextureAngularSize", sunTextureAngularSizePtr.get());
		Create("CSun", list);
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
	/// 对太阳进行缩放
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
	 * 获取太阳缩放系数
	 * @return 缩放系数
	 */
	public float getScale()
	{
		float returnValue = getScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSunTextureAngularSize_void(long pNativeObject);
	/**
	 * 获取太阳大小，以视域角度为单位
	 * @return 太阳大小，以视域角度为单位
	 */
	public com.earthview.world.spatial.math.Degree getSunTextureAngularSize()
	{
		long returnValue = getSunTextureAngularSize_void(this.nativeObject.pointer);
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
	/**
	 * 设置可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_CSun(long pNativeObject, long other);
	/**
	 * 重载==
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.effect3d.Sun other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CSun(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CSun(long pNativeObject, long other);
	/**
	 * 重载!=
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.effect3d.Sun other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CSun(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	public Sun(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sun(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Sun fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sun obj = null;
 		if(baseObj instanceof Sun)
		{
			obj = (Sun)baseObj;
		} else {
			obj = new Sun(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSun");
			obj.increaseCast();
		}

		return obj;
	}
}
