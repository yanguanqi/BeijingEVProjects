package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CAffineTransform仿射变换信息
 */
public class AffineTransform extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CAffineTransform", new AffineTransformClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public AffineTransform() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAffineTransform", null);
	}

	/**
	 * 赋值构造函数
	 * @param dfUpLeftX 左上角起点坐标
	 * @param dfResolutionX X方向分辨率
	 * @param dfRotateX X轴方向旋转量
	 * @param dfUpLeftY 左上角起点Y坐标
	 * @param dfRotateY Y轴方向旋转量
	 * @param dfResolutionY Y方向分辨率
	 */
	public AffineTransform(double dfUpLeftX, double dfResolutionX, double dfRotateX, double dfUpLeftY, double dfRotateY, double dfResolutionY) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfUpLeftXPtr = new BasePointer(dfUpLeftX);
		list.add("dfUpLeftX", dfUpLeftXPtr.get());
		BasePointer dfResolutionXPtr = new BasePointer(dfResolutionX);
		list.add("dfResolutionX", dfResolutionXPtr.get());
		BasePointer dfRotateXPtr = new BasePointer(dfRotateX);
		list.add("dfRotateX", dfRotateXPtr.get());
		BasePointer dfUpLeftYPtr = new BasePointer(dfUpLeftY);
		list.add("dfUpLeftY", dfUpLeftYPtr.get());
		BasePointer dfRotateYPtr = new BasePointer(dfRotateY);
		list.add("dfRotateY", dfRotateYPtr.get());
		BasePointer dfResolutionYPtr = new BasePointer(dfResolutionY);
		list.add("dfResolutionY", dfResolutionYPtr.get());
		Create("CAffineTransform", list);
	}

	/**
	 * 赋值构造函数
	 */
	public AffineTransform(NativeDoubleBuffer dfGeoTransform) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfGeoTransformPtr = new BasePointer(dfGeoTransform);
		list.add("dfGeoTransform", dfGeoTransformPtr.get());
		Create("CAffineTransform", list);
	}

	native private double getUpLeftX_void(long pNativeObject);
	/**
	 * 获取左上角X坐标
	 * @return 左上角X坐标
	 */
	public double getUpLeftX()
	{
		double returnValue = getUpLeftX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUpLeftY_void(long pNativeObject);
	///<summary>
	///获取左上角Y坐标
	///</summary>
	///<returns>左上角Y坐标</returns>
	///</summary>
	public double getUpLeftY()
	{
		double returnValue = getUpLeftY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateX_void(long pNativeObject);
	/**
	 * 获取X方向旋转量
	 * @return X方向旋转量
	 */
	public double getRotateX()
	{
		double returnValue = getRotateX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRotateY_void(long pNativeObject);
	/**
	 * 获取Y方向旋转量
	 * @return Y方向旋转量
	 */
	public double getRotateY()
	{
		double returnValue = getRotateY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getResolutionX_void(long pNativeObject);
	/**
	 * 获取X方向分辨率
	 * @return X方向分辨率
	 */
	public double getResolutionX()
	{
		double returnValue = getResolutionX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getResolutionY_void(long pNativeObject);
	/**
	 * 获取Y方向分辨率
	 * @return Y方向分辨率
	 */
	public double getResolutionY()
	{
		double returnValue = getResolutionY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getGeoTransFormParameter_void(long pNativeObject);
	/**
	 * 获取仿射变换参数指针
	 * @return 参数指针,不能在外部释放
	 */
	public DoublePointer getGeoTransFormParameter()
	{
		long returnValue = getGeoTransFormParameter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long OperatorAssign_CAffineTransform(long pNativeObject, long objAffine);
	/**
	 * 赋值操作符
	 */
	public com.earthview.world.spatial2d.raster.AffineTransform OperatorAssign(com.earthview.world.spatial2d.raster.AffineTransform objAffine)
	{
		long objAffineParamValue = objAffine.nativeObject.pointer;
		long returnValue = OperatorAssign_CAffineTransform(this.nativeObject.pointer, objAffineParamValue);
		com.earthview.world.spatial2d.raster.AffineTransform __returnValue = new com.earthview.world.spatial2d.raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate, "CAffineTransform");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.AffineTransform)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAffineTransform");
		}
		return __returnValue;
	}
	/**
	 * 拷贝构造函数
	 */
	public AffineTransform(com.earthview.world.spatial2d.raster.AffineTransform objAffine) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objAffinePtr = new BasePointer(objAffine);
		list.add("objAffine", objAffinePtr.get());
		Create("CAffineTransform", list);
	}

	native private void geoToPixel_ev_real64_ev_real64(long pNativeObject, long dfX, long dfY);
	/**
	 * 坐标变换，地理坐标到图像坐标
	 * @param dfX 输入地理坐标X，返回图像坐标X
	 * @param dfY 输入地理坐标Y，返回图像坐标Y
	 */
	public void geoToPixel(DoublePointer dfX, DoublePointer dfY)
	{
		long dfXParamValue = dfX.nativeObject.pointer;
		long dfYParamValue = dfY.nativeObject.pointer;
		geoToPixel_ev_real64_ev_real64(this.nativeObject.pointer, dfXParamValue, dfYParamValue);
	}
	native private void pixelToGeo_ev_real64_ev_real64(long pNativeObject, long dfX, long dfY);
	/**
	 * 坐标变换，图像坐标到地理坐标
	 * @param dfX 输入图像坐标X，返回地理坐标X
	 * @param dfY 输入图像坐标Y，返回地理坐标Y
	 */
	public void pixelToGeo(DoublePointer dfX, DoublePointer dfY)
	{
		long dfXParamValue = dfX.nativeObject.pointer;
		long dfYParamValue = dfY.nativeObject.pointer;
		pixelToGeo_ev_real64_ev_real64(this.nativeObject.pointer, dfXParamValue, dfYParamValue);
	}
	public AffineTransform(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AffineTransform(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AffineTransform fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AffineTransform obj = null;
 		if(baseObj instanceof AffineTransform)
		{
			obj = (AffineTransform)baseObj;
		} else {
			obj = new AffineTransform(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAffineTransform");
			obj.increaseCast();
		}

		return obj;
	}
}
