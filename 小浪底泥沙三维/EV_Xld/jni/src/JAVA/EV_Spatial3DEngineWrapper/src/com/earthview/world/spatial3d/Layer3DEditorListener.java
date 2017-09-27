package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DEditorListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CLayer3DEditorListener", new Layer3DEditorListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCLayer3DEditorListenerProxy", new Layer3DEditorListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Layer3DEditorListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayer3DEditorListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.Layer3DEditorListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onStartEditing_IGlobeLayer_callback(long pLayer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		onStartEditing(pLayerParamValue);
	}

	native private void onStartEditing_IGlobeLayer(long pNativeObject, long pLayer);
	/**
	 * 开始编辑响应函数
	 * @param  
	 */
	public void onStartEditing(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		onStartEditing_IGlobeLayer(this.nativeObject.pointer, pLayerParamValue);
	}
	native private void onStartEditing_IGlobeLayer_NoVirtual(long pNativeObject, long pLayer);
	protected void onStartEditing_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		onStartEditing_IGlobeLayer_NoVirtual(this.nativeObject.pointer, pLayerParamValue);
	}

	protected  void onEndEditing_IGlobeLayer_callback(long pLayer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		onEndEditing(pLayerParamValue);
	}

	native private void onEndEditing_IGlobeLayer(long pNativeObject, long pLayer);
	/**
	 * 结束编辑响应函数
	 * @param  
	 */
	public void onEndEditing(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		onEndEditing_IGlobeLayer(this.nativeObject.pointer, pLayerParamValue);
	}
	native private void onEndEditing_IGlobeLayer_NoVirtual(long pNativeObject, long pLayer);
	protected void onEndEditing_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		onEndEditing_IGlobeLayer_NoVirtual(this.nativeObject.pointer, pLayerParamValue);
	}

	protected  void onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback(long pLayer, int operType, long cacheID, long dbID)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		com.earthview.world.spatial3d.dataset.EntityDatasetOperType operTypeParamValue = com.earthview.world.spatial3d.dataset.EntityDatasetOperType.toEnum(operType);
		long cacheIDParamValue = cacheID;
		long dbIDParamValue = dbID;
		onEndCommitModel(pLayerParamValue, operTypeParamValue, cacheIDParamValue, dbIDParamValue);
	}

	native private void onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(long pNativeObject, long pLayer, int operType, long cacheID, long dbID);
	/**
	 * 模型操作提交
	 * @param operType 模型操作类别
	 * @param cacheID 未提交前模型的ID
	 * @param dbID 提交后在数据库中的ID
	 */
	public void onEndCommitModel(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer, com.earthview.world.spatial3d.dataset.EntityDatasetOperType operType, long cacheID, long dbID)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		int operTypeParamValue = operType.getValue();
		long cacheIDParamValue = cacheID;
		long dbIDParamValue = dbID;
		onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(this.nativeObject.pointer, pLayerParamValue, operTypeParamValue, cacheIDParamValue, dbIDParamValue);
	}
	native private void onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pLayer, int operType, long cacheID, long dbID);
	protected void onEndCommitModel_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer, com.earthview.world.spatial3d.dataset.EntityDatasetOperType operType, long cacheID, long dbID)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		int operTypeParamValue = operType.getValue();
		long cacheIDParamValue = cacheID;
		long dbIDParamValue = dbID;
		onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pLayerParamValue, operTypeParamValue, cacheIDParamValue, dbIDParamValue);
	}

	protected  void onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback(long pLayer, long cacheID, long recordID)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer pLayerParamValue = (pLayer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLayerParamValue != null)
		{
		pLayerParamValue.setDelegate(true);
		pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		IClassFactory pLayerParamValueClassFactory = GlobalClassFactoryMap.get(pLayerParamValue.getCppInstanceTypeName());
		if (pLayerParamValueClassFactory != null)
		{
			pLayerParamValue.setDelegate(true);
			pLayerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)pLayerParamValueClassFactory.create();
			pLayerParamValue.setDelegate(true);
			pLayerParamValue.setInstancePointer(new InstancePointer(pLayer));
		}
		}
		long cacheIDParamValue = cacheID;
		long recordIDParamValue = recordID;
		onInsertMeshxg(pLayerParamValue, cacheIDParamValue, recordIDParamValue);
	}

	native private void onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32(long pNativeObject, long pLayer, long cacheID, long recordID);
	/**
	 * meshxg插入操作
	 * @param cacheID 未提交前的ID
	 * @param dbID 提交后在数据库中的ID
	 */
	public void onInsertMeshxg(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer, long cacheID, long recordID)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		long cacheIDParamValue = cacheID;
		long recordIDParamValue = recordID;
		onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, pLayerParamValue, cacheIDParamValue, recordIDParamValue);
	}
	native private void onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long pLayer, long cacheID, long recordID);
	protected void onInsertMeshxg_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer pLayer, long cacheID, long recordID)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		long cacheIDParamValue = cacheID;
		long recordIDParamValue = recordID;
		onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, pLayerParamValue, cacheIDParamValue, recordIDParamValue);
	}

	public Layer3DEditorListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Layer3DEditorListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onStartEditing_IGlobeLayer(long pNativeObject, String method);
	native protected void register_onEndEditing_IGlobeLayer(long pNativeObject, String method);
	native protected void register_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onStartEditing_IGlobeLayer(this.nativeObject.pointer, "onStartEditing_IGlobeLayer_callback");
			this.register_onEndEditing_IGlobeLayer(this.nativeObject.pointer, "onEndEditing_IGlobeLayer_callback");
			this.register_onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32(this.nativeObject.pointer, "onEndCommitModel_IGlobeLayer_EntityDatasetOperType_ev_uint32_ev_uint32_callback");
			this.register_onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, "onInsertMeshxg_IGlobeLayer_ev_uint32_ev_uint32_callback");
		}
	}
	
	public static Layer3DEditorListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Layer3DEditorListener obj = null;
 		if(baseObj instanceof Layer3DEditorListener)
		{
			obj = (Layer3DEditorListener)baseObj;
		} else {
			obj = new Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayer3DEditorListener");
			obj.increaseCast();
		}

		return obj;
	}
}
