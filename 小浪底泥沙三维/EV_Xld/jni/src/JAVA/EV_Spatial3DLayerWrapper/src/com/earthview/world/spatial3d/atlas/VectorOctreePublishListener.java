package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 				矢量缓存发布进度监听类
 */
public class VectorOctreePublishListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener", new VectorOctreePublishListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCVectorOctreePublishListenerProxy", new VectorOctreePublishListenerClassFactory());
	}

	public VectorOctreePublishListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVectorOctreePublishListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.VectorOctreePublishListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setInformation_EVString_ev_int32_callback(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation(infoParamValue, percentParamValue);
	}

	native private void setInformation_EVString_ev_int32(long pNativeObject, String info, int percent);
	/**
	 * 消息接收
	 * @param info 消息内容
	 * @param percent 进程
	 */
	public void setInformation(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation_EVString_ev_int32(this.nativeObject.pointer, infoParamValue, percentParamValue);
	}
	native private void setInformation_EVString_ev_int32_NoVirtual(long pNativeObject, String info, int percent);
	protected void setInformation_NoVirtual(String info, int percent)
	{
		String infoParamValue = info;
		int percentParamValue = percent;
		setInformation_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, infoParamValue, percentParamValue);
	}

	public VectorOctreePublishListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreePublishListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setInformation_EVString_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setInformation_EVString_ev_int32(this.nativeObject.pointer, "setInformation_EVString_ev_int32_callback");
		}
	}
	
	public static VectorOctreePublishListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreePublishListener obj = null;
 		if(baseObj instanceof VectorOctreePublishListener)
		{
			obj = (VectorOctreePublishListener)baseObj;
		} else {
			obj = new VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreePublishListener");
			obj.increaseCast();
		}

		return obj;
	}
}
