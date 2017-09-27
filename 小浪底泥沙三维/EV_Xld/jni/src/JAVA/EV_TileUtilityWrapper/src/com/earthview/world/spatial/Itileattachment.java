package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片附属物
 */
public class Itileattachment extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachment", new ItileattachmentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JITileAttachmentProxy", new ItileattachmentClassFactory());
	}

	public static class LodParam extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachment::LodParam", new LodParamClassFactory());
		}

		native private int get_tileLevel_void(long pNativeObject);
		public int get_tileLevel()
		{
			int jniValue = get_tileLevel_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_tileLevel_ev_int32 (long pNativeObject, int value);
		public void set_tileLevel(int tileLevel)
		{
			int tileLevelParamValue = tileLevel;
			
			set_tileLevel_ev_int32(this.nativeObject.pointer, tileLevelParamValue);
		}
		
		native private int get_cameraLevel_void(long pNativeObject);
		public int get_cameraLevel()
		{
			int jniValue = get_cameraLevel_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_cameraLevel_ev_int32 (long pNativeObject, int value);
		public void set_cameraLevel(int cameraLevel)
		{
			int cameraLevelParamValue = cameraLevel;
			
			set_cameraLevel_ev_int32(this.nativeObject.pointer, cameraLevelParamValue);
		}
		
		native private long get_tileChildCount_void(long pNativeObject);
		public long get_tileChildCount()
		{
			long jniValue = get_tileChildCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_tileChildCount_ev_size_t (long pNativeObject, long value);
		public void set_tileChildCount(long tileChildCount)
		{
			long tileChildCountParamValue = tileChildCount;
			
			set_tileChildCount_ev_size_t(this.nativeObject.pointer, tileChildCountParamValue);
		}
		
		/**
		 * 相机是否在地下
		 */
		public LodParam(int level, int camLevel, long childCount) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer levelPtr = new BasePointer(level);
			list.add("level", levelPtr.get());
			BasePointer camLevelPtr = new BasePointer(camLevel);
			list.add("camLevel", camLevelPtr.get());
			BasePointer childCountPtr = new BasePointer(childCount);
			list.add("childCount", childCountPtr.get());
			Create("LodParam", list);
		}

		public LodParam(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LodParam(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LodParam fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LodParam obj = null;
 			if(baseObj instanceof LodParam)
			{
				obj = (LodParam)baseObj;
			} else {
				obj = new LodParam(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LodParam");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LodParamClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LodParam emptyInstance = new LodParam(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///ITileAttachment(ev_bool isHoldedByQuadNode)
	///	:mIsHoldedByQuadNode(isHoldedByQuadNode) { }
	public Itileattachment() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JITileAttachmentProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Itileattachment".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onTileShown_LodParam_callback(long param)
	{
		com.earthview.world.spatial.Itileattachment.LodParam paramParamValue = new com.earthview.world.spatial.Itileattachment.LodParam(CreatedWhenConstruct.CWC_NotToCreate);
		paramParamValue.setDelegate(true);
		paramParamValue.setInstancePointer(new InstancePointer(param));
		IClassFactory paramParamValueClassFactory = GlobalClassFactoryMap.get(paramParamValue.getCppInstanceTypeName());
		if (paramParamValueClassFactory != null)
		{
			paramParamValue.setDelegate(true);
			paramParamValue = (com.earthview.world.spatial.Itileattachment.LodParam)paramParamValueClassFactory.create();
			paramParamValue.setDelegate(true);
			paramParamValue.setInstancePointer(new InstancePointer(param));
		}
		onTileShown(paramParamValue);
	}

	native private void onTileShown_LodParam(long pNativeObject, long param);
	/**
	 * 瓦片被显示(主线程)
	 */
	public void onTileShown(com.earthview.world.spatial.Itileattachment.LodParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		onTileShown_LodParam(this.nativeObject.pointer, paramParamValue);
	}
	native private void onTileShown_LodParam_NoVirtual(long pNativeObject, long param);
	protected void onTileShown_NoVirtual(com.earthview.world.spatial.Itileattachment.LodParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		onTileShown_LodParam_NoVirtual(this.nativeObject.pointer, paramParamValue);
	}

	protected  void onTileHid_LodParam_callback(long param)
	{
		com.earthview.world.spatial.Itileattachment.LodParam paramParamValue = new com.earthview.world.spatial.Itileattachment.LodParam(CreatedWhenConstruct.CWC_NotToCreate);
		paramParamValue.setDelegate(true);
		paramParamValue.setInstancePointer(new InstancePointer(param));
		IClassFactory paramParamValueClassFactory = GlobalClassFactoryMap.get(paramParamValue.getCppInstanceTypeName());
		if (paramParamValueClassFactory != null)
		{
			paramParamValue.setDelegate(true);
			paramParamValue = (com.earthview.world.spatial.Itileattachment.LodParam)paramParamValueClassFactory.create();
			paramParamValue.setDelegate(true);
			paramParamValue.setInstancePointer(new InstancePointer(param));
		}
		onTileHid(paramParamValue);
	}

	native private void onTileHid_LodParam(long pNativeObject, long param);
	/**
	 * 瓦片被隐藏(主线程)
	 */
	public void onTileHid(com.earthview.world.spatial.Itileattachment.LodParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		onTileHid_LodParam(this.nativeObject.pointer, paramParamValue);
	}
	native private void onTileHid_LodParam_NoVirtual(long pNativeObject, long param);
	protected void onTileHid_NoVirtual(com.earthview.world.spatial.Itileattachment.LodParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		onTileHid_LodParam_NoVirtual(this.nativeObject.pointer, paramParamValue);
	}

	protected  void onDetachFromTile_void_callback()
	{
		onDetachFromTile();
	}

	native private void onDetachFromTile_void(long pNativeObject);
	/**
	 * 从瓦片解除绑定(主线程),在这个函数被调用后，附属物不再受瓦片控制。建议在其中做一些必要的清理工作
	 */
	public void onDetachFromTile()
	{
		onDetachFromTile_void(this.nativeObject.pointer);
	}
	native private void onDetachFromTile_void_NoVirtual(long pNativeObject);
	protected void onDetachFromTile_NoVirtual()
	{
		onDetachFromTile_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void onTileDestroyed_void_callback()
	{
		onTileDestroyed();
	}

	native private void onTileDestroyed_void(long pNativeObject);
	/**
	 * 瓦片被销毁(主线程)，此时瓦片一定是不可见的。
	 */
	public void onTileDestroyed()
	{
		onTileDestroyed_void(this.nativeObject.pointer);
	}
	native private void onTileDestroyed_void_NoVirtual(long pNativeObject);
	protected void onTileDestroyed_NoVirtual()
	{
		onTileDestroyed_void_NoVirtual(this.nativeObject.pointer);
	}

	public Itileattachment(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itileattachment(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onTileShown_LodParam(long pNativeObject, String method);
	native protected void register_onTileHid_LodParam(long pNativeObject, String method);
	native protected void register_onDetachFromTile_void(long pNativeObject, String method);
	native protected void register_onTileDestroyed_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onTileShown_LodParam(this.nativeObject.pointer, "onTileShown_LodParam_callback");
			this.register_onTileHid_LodParam(this.nativeObject.pointer, "onTileHid_LodParam_callback");
			this.register_onDetachFromTile_void(this.nativeObject.pointer, "onDetachFromTile_void_callback");
			this.register_onTileDestroyed_void(this.nativeObject.pointer, "onTileDestroyed_void_callback");
		}
	}
	
	public static Itileattachment fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itileattachment obj = null;
 		if(baseObj instanceof Itileattachment)
		{
			obj = (Itileattachment)baseObj;
		} else {
			obj = new Itileattachment(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITileAttachment");
			obj.increaseCast();
		}

		return obj;
	}
}
