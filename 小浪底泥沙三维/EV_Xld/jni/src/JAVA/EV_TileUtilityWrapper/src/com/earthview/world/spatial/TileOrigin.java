package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片起点信息类
 */
public class TileOrigin extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileOrigin", new TileOriginClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TileOrigin() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileOrigin", null);
	}

	native private double getX_void(long pNativeObject);
	/**
	 * 获取角点X值
	 * @return 角点X值
	 */
	public double getX()
	{
		double returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getY_void(long pNativeObject);
	/**
	 * 获取角点Y值
	 * @return 角点Y值
	 */
	public double getY()
	{
		double returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWidth_void(long pNativeObject);
	/**
	 * 获取有效宽度
	 * @return 有效宽度
	 */
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHeight_void(long pNativeObject);
	/**
	 * 获取有效高度
	 * @return 有效高度
	 */
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getOriginPosition_void(long pNativeObject);
	/**
	 * 获取角点位置
	 * @return 角点位置
	 */
	public com.earthview.world.spatial.EVOriginPositionType getOriginPosition()
	{
		int returnValue = getOriginPosition_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVOriginPositionType.toEnum(returnValue);
	}
	native private void setX_ev_real64(long pNativeObject, double dValue);
	/**
	 * 设置角点X值
	 * @param dValue 角点X值
	 */
	public void setX(double dValue)
	{
		double dValueParamValue = dValue;
		setX_ev_real64(this.nativeObject.pointer, dValueParamValue);
	}
	native private void setY_ev_real64(long pNativeObject, double dValue);
	/**
	 * 设置角点Y值
	 * @param dValue 角点Y值
	 */
	public void setY(double dValue)
	{
		double dValueParamValue = dValue;
		setY_ev_real64(this.nativeObject.pointer, dValueParamValue);
	}
	native private void setWidth_ev_real64(long pNativeObject, double dWidth);
	/**
	 * 设置有效宽度
	 * @param dWidth 有效宽度
	 */
	public void setWidth(double dWidth)
	{
		double dWidthParamValue = dWidth;
		setWidth_ev_real64(this.nativeObject.pointer, dWidthParamValue);
	}
	native private void setHeight_ev_real64(long pNativeObject, double dHeight);
	/**
	 * 设置有效高度
	 * @param dHeight 有效高度
	 */
	public void setHeight(double dHeight)
	{
		double dHeightParamValue = dHeight;
		setHeight_ev_real64(this.nativeObject.pointer, dHeightParamValue);
	}
	native private void setOriginPosition_EVOriginPositionType(long pNativeObject, int type);
	/**
	 * 设置角点位置
	 * @param type 角点位置
	 */
	public void setOriginPosition(com.earthview.world.spatial.EVOriginPositionType type)
	{
		int typeParamValue = type.getValue();
		setOriginPosition_EVOriginPositionType(this.nativeObject.pointer, typeParamValue);
	}
	native private void getGeographicExtent_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long left, long top, long right, long bottom);
	/**
	 * 获取地理范围
	 * @param left 左边界
	 * @param top 上边界
	 * @param right 右边界
	 * @param bottom 下边界
	 */
	public void getGeographicExtent(DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long leftParamValue = left.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		getGeographicExtent_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @return 新对象指针
	 */
	public com.earthview.world.spatial.TileOrigin ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileOrigin __returnValue = new com.earthview.world.spatial.TileOrigin(CreatedWhenConstruct.CWC_NotToCreate, "CTileOrigin");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileOrigin)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileOrigin");
		}
		return __returnValue;
	}
	public TileOrigin(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileOrigin(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileOrigin fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileOrigin obj = null;
 		if(baseObj instanceof TileOrigin)
		{
			obj = (TileOrigin)baseObj;
		} else {
			obj = new TileOrigin(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileOrigin");
			obj.increaseCast();
		}

		return obj;
	}
}
