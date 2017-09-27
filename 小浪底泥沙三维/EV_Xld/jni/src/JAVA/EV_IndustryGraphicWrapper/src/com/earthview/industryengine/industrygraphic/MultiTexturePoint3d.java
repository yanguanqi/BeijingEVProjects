package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 多点对象
 */
public class MultiTexturePoint3d extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d", new MultiTexturePoint3dClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param ref_pGlobeCtrl 三维控件
	 */
	public MultiTexturePoint3d(String name, com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeCtrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_pGlobeCtrlPtr = new BasePointer(ref_pGlobeCtrl);
		list.add("ref_pGlobeCtrl", ref_pGlobeCtrlPtr.get());
		Create("CMultiTexturePoint3d", list);
	}

	native private void addPoint3d_EVString_CVector3_CDegree_EVString_float_bool_bool(long pNativeObject, String ptName, long worldPos, long heading, String iconPath, float size, boolean faceToCamera, boolean showAsPixel);
	/**
	 * 添加单点
	 * @param ptName 单点名称
	 * @param worldPos 单点世界坐标
	 * @param heading 偏北角（以局部坐标系下Z轴代表地球表面正北方向
	 * @param iconPath 图标文件路径
	 * @param size 单点像素大小
	 * @param faceToCamera 是否始终朝向相机显示
	 * @param showAsPixel 是否以像素模式显示，显示大小不跟随镜头发生变化
	 */
	public void addPoint3d(String ptName, com.earthview.world.spatial.math.Vector3 worldPos, com.earthview.world.spatial.math.Degree heading, String iconPath, float size, boolean faceToCamera, boolean showAsPixel)
	{
		String ptNameParamValue = ptName;
		long worldPosParamValue = worldPos.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		String iconPathParamValue = iconPath;
		float sizeParamValue = size;
		boolean faceToCameraParamValue = faceToCamera;
		boolean showAsPixelParamValue = showAsPixel;
		addPoint3d_EVString_CVector3_CDegree_EVString_float_bool_bool(this.nativeObject.pointer, ptNameParamValue, worldPosParamValue, headingParamValue, iconPathParamValue, sizeParamValue, faceToCameraParamValue, showAsPixelParamValue);
	}
	native private void removePoint3d_EVString(long pNativeObject, String ptName);
	/**
	 * 根据名称移除点
	 * @param ptName 单点名称
	 */
	public void removePoint3d(String ptName)
	{
		String ptNameParamValue = ptName;
		removePoint3d_EVString(this.nativeObject.pointer, ptNameParamValue);
	}
	native private void setVisible_EVString_bool(long pNativeObject, String ptName, boolean value);
	/**
	 * 根据名称设置可见性
	 * @param ptName 单点名称
	 * @param value 可见性
	 */
	public void setVisible(String ptName, boolean value)
	{
		String ptNameParamValue = ptName;
		boolean valueParamValue = value;
		setVisible_EVString_bool(this.nativeObject.pointer, ptNameParamValue, valueParamValue);
	}
	native private boolean getVisible_EVString(long pNativeObject, String ptName);
	/**
	 * 根据名称获取可见性
	 * @param ptName 单点名称
	 */
	public boolean getVisible(String ptName)
	{
		String ptNameParamValue = ptName;
		boolean returnValue = getVisible_EVString(this.nativeObject.pointer, ptNameParamValue);
		return returnValue;
	}
	native private void setStatus_EVString_CVector3_CDegree(long pNativeObject, String ptName, long worldPos, long heading);
	/**
	 * 根据名称设置状态
	 * @param ptName 单点名称
	 * @param worldPos 单点世界坐标
	 * @param heading 单点偏北角
	 */
	public void setStatus(String ptName, com.earthview.world.spatial.math.Vector3 worldPos, com.earthview.world.spatial.math.Degree heading)
	{
		String ptNameParamValue = ptName;
		long worldPosParamValue = worldPos.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		setStatus_EVString_CVector3_CDegree(this.nativeObject.pointer, ptNameParamValue, worldPosParamValue, headingParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取当前多点对象名称
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getPtIconPath_EVString(long pNativeObject, String ptName);
	/**
	 * 根据名称获取单点对象的图标文件路径
	 * @param ptName 单点名称
	 * @return 图标文件路径
	 */
	public String getPtIconPath(String ptName)
	{
		String ptNameParamValue = ptName;
		String returnValue = getPtIconPath_EVString(this.nativeObject.pointer, ptNameParamValue);
		return returnValue;
	}
	native private void attachToScene_void(long pNativeObject);
	/**
	 * 将多点对象挂接到场景中，只需要挂接一次
	 */
	public void attachToScene()
	{
		attachToScene_void(this.nativeObject.pointer);
	}
	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除所有单点对象
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void setMaxVisibleDistance_EVString_Real(long pNativeObject, String ptName, double value);
	/**
	 * 根据名称设置单点对象的最大可见距离
	 * @param ptName 单点名称
	 * @param value 最大可见距离
	 */
	public void setMaxVisibleDistance(String ptName, double value)
	{
		String ptNameParamValue = ptName;
		double valueParamValue = value;
		setMaxVisibleDistance_EVString_Real(this.nativeObject.pointer, ptNameParamValue, valueParamValue);
	}
	native private void setMinVisibleDistance_EVString_Real(long pNativeObject, String ptName, double value);
	/**
	 * 根据名称设置单点对象的最小可见距离
	 * @param ptName 单点名称
	 * @param value 可最小见距离
	 */
	public void setMinVisibleDistance(String ptName, double value)
	{
		String ptNameParamValue = ptName;
		double valueParamValue = value;
		setMinVisibleDistance_EVString_Real(this.nativeObject.pointer, ptNameParamValue, valueParamValue);
	}
	native private double getMaxVisibleDistance_EVString(long pNativeObject, String ptName);
	/**
	 * 根据名称获取单点对象的最大可见距离
	 * @param ptName 单点名称
	 * @return 最大可见距离
	 */
	public double getMaxVisibleDistance(String ptName)
	{
		String ptNameParamValue = ptName;
		double returnValue = getMaxVisibleDistance_EVString(this.nativeObject.pointer, ptNameParamValue);
		return returnValue;
	}
	native private double getMinVisibleDistance_EVString(long pNativeObject, String ptName);
	/**
	 * 根据名称获取单点对象的最小可见距离
	 * @param ptName 单点名称
	 * @return 可最小见距离
	 */
	public double getMinVisibleDistance(String ptName)
	{
		String ptNameParamValue = ptName;
		double returnValue = getMinVisibleDistance_EVString(this.nativeObject.pointer, ptNameParamValue);
		return returnValue;
	}
	native private void setSize_EVString_float(long pNativeObject, String ptName, float value);
	/**
	 * 根据名称设置单点对象的边长大小
	 * @param ptName 单点名称
	 * @param value 边长大小
	 */
	public void setSize(String ptName, float value)
	{
		String ptNameParamValue = ptName;
		float valueParamValue = value;
		setSize_EVString_float(this.nativeObject.pointer, ptNameParamValue, valueParamValue);
	}
	public MultiTexturePoint3d(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MultiTexturePoint3d(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MultiTexturePoint3d fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MultiTexturePoint3d obj = null;
 		if(baseObj instanceof MultiTexturePoint3d)
		{
			obj = (MultiTexturePoint3d)baseObj;
		} else {
			obj = new MultiTexturePoint3d(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMultiTexturePoint3d");
			obj.increaseCast();
		}

		return obj;
	}
}
