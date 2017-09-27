package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageItem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ImageItem", new ImageItemClassFactory());
	}

	public ImageItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ImageItem", null);
	}

	native private long get_mIndex_void(long pNativeObject);
	public long get_mIndex()
	{
		long jniValue = get_mIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndex_ev_uint32 (long pNativeObject, long value);
	public void set_mIndex(long mIndex)
	{
		long mIndexParamValue = mIndex;
		
		set_mIndex_ev_uint32(this.nativeObject.pointer, mIndexParamValue);
	}
	
	native private long get_mpImg_void(long pNativeObject);
	public com.earthview.world.graphic.Image get_mpImg()
	{
		long jniValue = get_mpImg_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Image __returnValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate, "CImage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Image)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImage");
		}
		return __returnValue;
	}
	
	native private void set_mpImg_CImage (long pNativeObject, long value);
	public void set_mpImg(com.earthview.world.graphic.Image mpImg)
	{
		long mpImgParamValue = (mpImg == null ? 0L : mpImg.nativeObject.pointer);
		
		set_mpImg_CImage(this.nativeObject.pointer, mpImgParamValue);
	}
	
	public ImageItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ImageItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageItem obj = null;
 		if(baseObj instanceof ImageItem)
		{
			obj = (ImageItem)baseObj;
		} else {
			obj = new ImageItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ImageItem");
			obj.increaseCast();
		}

		return obj;
	}
}
