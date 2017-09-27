package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片大小类
 */
public class TilePixelSize extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePixelSize", new TilePixelSizeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TilePixelSize() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTilePixelSize", null);
	}

	native private long getWidth_void(long pNativeObject);
	/**
	 * 获取瓦片宽度
	 * @return 瓦片宽度
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void(long pNativeObject);
	/**
	 * 获取瓦片高度
	 * @return 瓦片高度
	 */
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWidth_ev_uint32(long pNativeObject, long dWidth);
	/**
	 * 设置瓦片宽度
	 * @param dWidth 瓦片宽度
	 */
	public void setWidth(long dWidth)
	{
		long dWidthParamValue = dWidth;
		setWidth_ev_uint32(this.nativeObject.pointer, dWidthParamValue);
	}
	native private void setHeight_ev_uint32(long pNativeObject, long dHeight);
	/**
	 * 设置瓦片高度
	 * @param dHeight 瓦片高度
	 */
	public void setHeight(long dHeight)
	{
		long dHeightParamValue = dHeight;
		setHeight_ev_uint32(this.nativeObject.pointer, dHeightParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @return 新对象指针
	 */
	public com.earthview.world.spatial.TilePixelSize ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePixelSize __returnValue = new com.earthview.world.spatial.TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate, "CTilePixelSize");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePixelSize)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTilePixelSize");
		}
		return __returnValue;
	}
	public TilePixelSize(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TilePixelSize(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TilePixelSize fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TilePixelSize obj = null;
 		if(baseObj instanceof TilePixelSize)
		{
			obj = (TilePixelSize)baseObj;
		} else {
			obj = new TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTilePixelSize");
			obj.increaseCast();
		}

		return obj;
	}
}
