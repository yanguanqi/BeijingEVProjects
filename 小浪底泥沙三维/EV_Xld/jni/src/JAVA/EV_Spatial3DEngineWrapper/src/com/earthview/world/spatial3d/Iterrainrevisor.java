package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地形修改器虚类
 */
public class Iterrainrevisor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ITerrainRevisor", new IterrainrevisorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JITerrainRevisorProxy", new IterrainrevisorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Iterrainrevisor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JITerrainRevisorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.Iterrainrevisor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getKey_void_callback()
	{
		String returnValue = getKey();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getKey_void(long pNativeObject);
	/**
	 * 获取主键
	 * @param  
	 * @return 主键
	 */
	public String getKey()
	{
		String returnValue = getKey_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKey_void_NoVirtual(long pNativeObject);
	protected String getKey_NoVirtual()
	{
		String returnValue = getKey_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial3d.Iterrainrevisor returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 自我复制
	 * @param  
	 */
	public com.earthview.world.spatial3d.Iterrainrevisor ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Iterrainrevisor __returnValue = new com.earthview.world.spatial3d.Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate, "ITerrainRevisor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Iterrainrevisor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITerrainRevisor");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.Iterrainrevisor ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Iterrainrevisor __returnValue = new com.earthview.world.spatial3d.Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate, "ITerrainRevisor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Iterrainrevisor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITerrainRevisor");
		}
		return __returnValue;
	}

	protected  boolean modifyTerrain_CPoint_callback(long pt)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		boolean returnValue = modifyTerrain(ptParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean modifyTerrain_CPoint(long pNativeObject, long pt);
	/**
	 * 修改地形
	 * @param pt 位置
	 * @return 是否成功
	 */
	public boolean modifyTerrain(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		boolean returnValue = modifyTerrain_CPoint(this.nativeObject.pointer, ptParamValue);
		return returnValue;
	}
	native private boolean modifyTerrain_CPoint_NoVirtual(long pNativeObject, long pt);
	protected boolean modifyTerrain_NoVirtual(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		boolean returnValue = modifyTerrain_CPoint_NoVirtual(this.nativeObject.pointer, ptParamValue);
		return returnValue;
	}

	public Iterrainrevisor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iterrainrevisor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getKey_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_modifyTerrain_CPoint(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getKey_void(this.nativeObject.pointer, "getKey_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_modifyTerrain_CPoint(this.nativeObject.pointer, "modifyTerrain_CPoint_callback");
		}
	}
	
	public static Iterrainrevisor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iterrainrevisor obj = null;
 		if(baseObj instanceof Iterrainrevisor)
		{
			obj = (Iterrainrevisor)baseObj;
		} else {
			obj = new Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITerrainRevisor");
			obj.increaseCast();
		}

		return obj;
	}
}
