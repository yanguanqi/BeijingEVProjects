package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject", new AtlasEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCAtlasEventObjectProxy", new AtlasEventObjectClassFactory());
	}

	public AtlasEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAtlasEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.frameworkproxy.atlasmanager.AtlasEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  void onCreateMap_CMapActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateMap(eParamValue);
	}

	native private void onCreateMap_CMapActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建地图
	 * @param e 事件
	 */
	public void onCreateMap(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMap_CMapActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateMap_CMapActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateMap_NoVirtual(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMap_CMapActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCreateScene_CSceneActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateScene(eParamValue);
	}

	native private void onCreateScene_CSceneActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建场景
	 * @param e 事件
	 */
	public void onCreateScene(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateScene_CSceneActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateScene_CSceneActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateScene_NoVirtual(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateScene_CSceneActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSetCurrentMap_CMapActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSetCurrentMap(eParamValue);
	}

	native private void onSetCurrentMap_CMapActiveEvent(long pNativeObject, long e);
	/**
	 * 响应设置当前地图
	 * @param e 事件
	 */
	public void onSetCurrentMap(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetCurrentMap_CMapActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSetCurrentMap_CMapActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onSetCurrentMap_NoVirtual(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetCurrentMap_CMapActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSetCurrentScene_CSceneActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSetCurrentScene(eParamValue);
	}

	native private void onSetCurrentScene_CSceneActiveEvent(long pNativeObject, long e);
	/**
	 * 响应设置当前场景
	 * @param e 事件
	 */
	public void onSetCurrentScene(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetCurrentScene_CSceneActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSetCurrentScene_CSceneActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onSetCurrentScene_NoVirtual(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetCurrentScene_CSceneActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onRemoveMap_CMapActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRemoveMap(eParamValue);
	}

	native private void onRemoveMap_CMapActiveEvent(long pNativeObject, long e);
	/**
	 * 响应移除地图
	 * @param e 事件
	 */
	public void onRemoveMap(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveMap_CMapActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRemoveMap_CMapActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onRemoveMap_NoVirtual(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveMap_CMapActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onRemoveScene_CSceneActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRemoveScene(eParamValue);
	}

	native private void onRemoveScene_CSceneActiveEvent(long pNativeObject, long e);
	/**
	 * 响应移除场景
	 * @param e 事件
	 */
	public void onRemoveScene(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveScene_CSceneActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRemoveScene_CSceneActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onRemoveScene_NoVirtual(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveScene_CSceneActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCreateMapLayer_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateMapLayer(eParamValue);
	}

	native private void onCreateMapLayer_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建地图图层
	 * @param e 事件
	 */
	public void onCreateMapLayer(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateMapLayer_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateMapLayer_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMapLayer_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCreateMapGroupLayer_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateMapGroupLayer(eParamValue);
	}

	native private void onCreateMapGroupLayer_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建地图图层组
	 * @param e 事件
	 */
	public void onCreateMapGroupLayer(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMapGroupLayer_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateMapGroupLayer_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateMapGroupLayer_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateMapGroupLayer_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onMoveMapLayer_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onMoveMapLayer(eParamValue);
	}

	native private void onMoveMapLayer_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应修改地图图层顺序
	 * @param e 事件
	 */
	public void onMoveMapLayer(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onMoveMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onMoveMapLayer_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onMoveMapLayer_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onMoveMapLayer_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onRemoveMapLayer_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRemoveMapLayer(eParamValue);
	}

	native private void onRemoveMapLayer_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应移除地图图层
	 * @param e 事件
	 */
	public void onRemoveMapLayer(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRemoveMapLayer_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onRemoveMapLayer_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveMapLayer_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onChangeMapName_CMapActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onChangeMapName(eParamValue);
	}

	native private void onChangeMapName_CMapActiveEvent(long pNativeObject, long e);
	/**
	 * /响应修改地图名/
	 * @param e 事件
	 */
	public void onChangeMapName(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeMapName_CMapActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onChangeMapName_CMapActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onChangeMapName_NoVirtual(com.earthview.world.spatial.systemui.MapActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeMapName_CMapActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onChangeSceneName_CSceneActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onChangeSceneName(eParamValue);
	}

	native private void onChangeSceneName_CSceneActiveEvent(long pNativeObject, long e);
	public void onChangeSceneName(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeSceneName_CSceneActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onChangeSceneName_CSceneActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onChangeSceneName_NoVirtual(com.earthview.world.spatial.systemui.SceneActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeSceneName_CSceneActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onChangeLayerName_CEvent_callback(long e)
	{
		com.earthview.world.core.Event eParamValue = (e == 0L ? null : new com.earthview.world.core.Event(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.core.Event)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onChangeLayerName(eParamValue);
	}

	native private void onChangeLayerName_CEvent(long pNativeObject, long e);
	/**
	 * 响应修改地图图层名
	 * @param e 事件
	 */
	public void onChangeLayerName(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerName_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onChangeLayerName_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onChangeLayerName_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerName_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onChangeLayerVisible_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onChangeLayerVisible(eParamValue);
	}

	native private void onChangeLayerVisible_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应设置地图图层可见性
	 * @param e 事件
	 */
	public void onChangeLayerVisible(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerVisible_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onChangeLayerVisible_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onChangeLayerVisible_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerVisible_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onChangeLayerTheme_CMapLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.MapLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.MapLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onChangeLayerTheme(eParamValue);
	}

	native private void onChangeLayerTheme_CMapLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应修改地图风格
	 * @param e 事件
	 */
	public void onChangeLayerTheme(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerTheme_CMapLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onChangeLayerTheme_CMapLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onChangeLayerTheme_NoVirtual(com.earthview.world.spatial.systemui.MapLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onChangeLayerTheme_CMapLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCreateSceneLayer_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateSceneLayer(eParamValue);
	}

	native private void onCreateSceneLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建创建图层
	 * @param e 事件
	 */
	public void onCreateSceneLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateSceneLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateSceneLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateSceneLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCreateSceneGroupLayer(eParamValue);
	}

	native private void onCreateSceneGroupLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应创建场景图层组
	 * @param e 事件
	 */
	public void onCreateSceneGroupLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateSceneGroupLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCreateSceneGroupLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onCreateSceneGroupLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCreateSceneGroupLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSwitchSceneLayer_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSwitchSceneLayer(eParamValue);
	}

	native private void onSwitchSceneLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应实现贴地矢量与非贴地矢量的转换
	 * @param e 事件
	 */
	public void onSwitchSceneLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSwitchSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSwitchSceneLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onSwitchSceneLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSwitchSceneLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onMoveSceneLayer_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onMoveSceneLayer(eParamValue);
	}

	native private void onMoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应修改场景图层顺序
	 * @param e 事件
	 */
	public void onMoveSceneLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onMoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onMoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onMoveSceneLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onMoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onRemoveSceneLayer_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onRemoveSceneLayer(eParamValue);
	}

	native private void onRemoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应移除场景图层
	 * @param e 事件
	 */
	public void onRemoveSceneLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onRemoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onRemoveSceneLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onRemoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSetSceneLayerVisible_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSetSceneLayerVisible(eParamValue);
	}

	native private void onSetSceneLayerVisible_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应设置场景图层可见性
	 * @param e 事件
	 */
	public void onSetSceneLayerVisible(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetSceneLayerVisible_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSetSceneLayerVisible_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onSetSceneLayerVisible_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetSceneLayerVisible_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSetSceneLayerTheme_CSceneLayerActiveEvent_callback(long e)
	{
		com.earthview.world.spatial.systemui.SceneLayerActiveEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial.systemui.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial.systemui.SceneLayerActiveEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onSetSceneLayerTheme(eParamValue);
	}

	native private void onSetSceneLayerTheme_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 响应设置场景图层风格
	 * @param e 事件
	 */
	public void onSetSceneLayerTheme(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetSceneLayerTheme_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSetSceneLayerTheme_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected void onSetSceneLayerTheme_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSetSceneLayerTheme_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	native private void createMap_EVString(long pNativeObject, String name);
	/**
	 * 创建地图
	 * @param layer 图层对象
	 * @param layer 图层所属图层组对象指针。
	 * @param layer 图层对象
	 * @param layer 图层所属图层组对象指针。
	 * @param name 地图名
	 */
	public void createMap(String name)
	{
		String nameParamValue = name;
		createMap_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setCurrentMap_IMap(long pNativeObject, long map);
	/**
	 * 设置当前地图
	 * @param map 地图
	 */
	public void setCurrentMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		setCurrentMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void setCurrentScene_IScene(long pNativeObject, long scene);
	/**
	 * 设置当前场景
	 * @param scene 场景
	 */
	public void setCurrentScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		setCurrentScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void removeMap_IMap(long pNativeObject, long map);
	/**
	 * 移除地图
	 * @param map 地图
	 */
	public void removeMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		removeMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void removeScene_IScene(long pNativeObject, long scene);
	/**
	 * 移除场景
	 * @param scene 场景
	 */
	public void removeScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		removeScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void destroyMap_IMap(long pNativeObject, long map);
	/**
	 * 销毁地图
	 * @param map 地图
	 */
	public void destroyMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		destroyMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void destroyScene_IScene(long pNativeObject, long scene);
	/**
	 * 销毁场景
	 * @param scene 场景
	 */
	public void destroyScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		destroyScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private boolean destroyLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 销毁图层
	 * @param layer 图层
	 */
	public boolean destroyLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = destroyLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long getSupportedType_EVLayerType(long pNativeObject, int grouplayerType);
	///set<EVDatasetType> getSupportedType(EarthView::World::Spatial::Atlas::EVLayerType grouplayerType);
	//// <summary>
	//// 根据图层组获取支持的数据集类别
	//// </summary>
	//// <param name="e">事件</param>
	//// <returns></returns>
	public com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset getSupportedType(com.earthview.world.spatial.atlas.EVLayerType grouplayerType)
	{
		int grouplayerTypeParamValue = grouplayerType.getValue();
		long returnValue = getSupportedType_EVLayerType(this.nativeObject.pointer, grouplayerTypeParamValue);
		com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EVDatasetTypeSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EVDatasetTypeSet");
		}
		return __returnValue;
	}
	native private void createMapLayer_IMap_EVString_EVString(long pNativeObject, long map, String datasourceName, String datasetName);
	/**
	 * 创建地图图层。
	 * @param datasourceName 数据源名称。
	 * @param datasetName 数据集名称。
	 */
	public void createMapLayer(com.earthview.world.spatial.atlas.Imap map, String datasourceName, String datasetName)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		createMapLayer_IMap_EVString_EVString(this.nativeObject.pointer, mapParamValue, datasourceNameParamValue, datasetNameParamValue);
	}
	native private void createMapLayer_IGroupLayer_IDataset_IMap(long pNativeObject, long grouplayer, long dataset, long map);
	/**
	 * 创建地图图层。
	 * @param grouplayer 图层组
	 * @param dataset 数据集指针
	 */
	public void createMapLayer(com.earthview.world.spatial.atlas.Igrouplayer grouplayer, com.earthview.world.spatial.geodataset.Idataset dataset, com.earthview.world.spatial.atlas.Imap map)
	{
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		createMapLayer_IGroupLayer_IDataset_IMap(this.nativeObject.pointer, grouplayerParamValue, datasetParamValue, mapParamValue);
	}
	native private void createMapGroupLayer_IMap_EVString(long pNativeObject, long map, String groupName);
	/**
	 * 创建地图图层组图层
	 * @param map 地图
	 * @param groupName 组名
	 */
	public void createMapGroupLayer(com.earthview.world.spatial.atlas.Imap map, String groupName)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String groupNameParamValue = groupName;
		createMapGroupLayer_IMap_EVString(this.nativeObject.pointer, mapParamValue, groupNameParamValue);
	}
	native private void createMapGroupLayer_IGroupLayer_EVString_IMap(long pNativeObject, long grouplayer, String groupName, long map);
	/**
	 * 创建地图图层组图层
	 * @param grouplayer 图层组
	 * @param groupName 组名
	 */
	public void createMapGroupLayer(com.earthview.world.spatial.atlas.Igrouplayer grouplayer, String groupName, com.earthview.world.spatial.atlas.Imap map)
	{
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		createMapGroupLayer_IGroupLayer_EVString_IMap(this.nativeObject.pointer, grouplayerParamValue, groupNameParamValue, mapParamValue);
	}
	native private void moveMapLayer_IMap_ev_uint32_ev_uint32(long pNativeObject, long map, long oldIndex, long newIndex);
	/**
	 * 更改地图图层顺序
	 * @param map 地图
	 * @param oldIndex 旧索引
	 * @param newIndex 新索引
	 */
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap map, long oldIndex, long newIndex)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveMapLayer_IMap_ev_uint32_ev_uint32(this.nativeObject.pointer, mapParamValue, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveMapLayer_IMap_IGroupLayer_ev_uint32_ev_uint32(long pNativeObject, long map, long grouplayer, long oldIndex, long newIndex);
	/**
	 * 更改地图图层顺序
	 * @param grouplayer 地图图层组
	 * @param oldIndex 旧索引
	 * @param newIndex 新索引
	 */
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap map, com.earthview.world.spatial.atlas.Igrouplayer grouplayer, long oldIndex, long newIndex)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveMapLayer_IMap_IGroupLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, mapParamValue, grouplayerParamValue, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveMapLayer_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(long pNativeObject, long pMap, long dragGroupLayer, long dragIndex, long hoverGroupLayer, long hoverIndex);
	/**
	 * 移动图层
	 * @param pMap 地图
	 * @param dragGroupLayer 拖拽图层的父节点
	 * @param dragIndex 拖拽图层在父节点中的索引
	 * @param hoverGroupLayer 拖拽点图层的父节点
	 * @param hoverIndex 拖拽点图层在父节点中的索引
	 */
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap pMap, com.earthview.world.spatial.atlas.Igrouplayer dragGroupLayer, long dragIndex, com.earthview.world.spatial.atlas.Igrouplayer hoverGroupLayer, long hoverIndex)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		long dragGroupLayerParamValue = (dragGroupLayer == null ? 0L : dragGroupLayer.nativeObject.pointer);
		long dragIndexParamValue = dragIndex;
		long hoverGroupLayerParamValue = (hoverGroupLayer == null ? 0L : hoverGroupLayer.nativeObject.pointer);
		long hoverIndexParamValue = hoverIndex;
		moveMapLayer_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(this.nativeObject.pointer, pMapParamValue, dragGroupLayerParamValue, dragIndexParamValue, hoverGroupLayerParamValue, hoverIndexParamValue);
	}
	native private void removeMapLayer_IMap_ev_uint32(long pNativeObject, long map, long index);
	/**
	 * 移除地图图层
	 * @param map 地图
	 * @param index 索引
	 */
	public void removeMapLayer(com.earthview.world.spatial.atlas.Imap map, long index)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long indexParamValue = index;
		removeMapLayer_IMap_ev_uint32(this.nativeObject.pointer, mapParamValue, indexParamValue);
	}
	native private void removeMapLayer_IGroupLayer_ev_uint32_IMap(long pNativeObject, long grouplayer, long index, long map);
	/**
	 * 移除地图图层
	 * @param grouplayer 图层组
	 * @param index 索引
	 */
	public void removeMapLayer(com.earthview.world.spatial.atlas.Igrouplayer grouplayer, long index, com.earthview.world.spatial.atlas.Imap map)
	{
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		long indexParamValue = index;
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		removeMapLayer_IGroupLayer_ev_uint32_IMap(this.nativeObject.pointer, grouplayerParamValue, indexParamValue, mapParamValue);
	}
	native private void changeMapName_IMap_EVString(long pNativeObject, long map, String name);
	/**
	 * /修改地图名/
	 * @param map 地图
	 * @param name 地图名
	 */
	public void changeMapName(com.earthview.world.spatial.atlas.Imap map, String name)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String nameParamValue = name;
		changeMapName_IMap_EVString(this.nativeObject.pointer, mapParamValue, nameParamValue);
	}
	native private void changeLayerName_ILayer_EVString(long pNativeObject, long layer, String name);
	/**
	 * 修改图层名
	 * @param layer 图层
	 * @param name 图层名
	 */
	public void changeLayerName(com.earthview.world.spatial.atlas.Ilayer layer, String name)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		String nameParamValue = name;
		changeLayerName_ILayer_EVString(this.nativeObject.pointer, layerParamValue, nameParamValue);
	}
	native private void changeLayerVisible_ILayer_ev_bool(long pNativeObject, long layer, boolean visible);
	/**
	 * 修改图层可见性
	 * @param layer 图层
	 * @param visible true可见，false不可见
	 */
	public void changeLayerVisible(com.earthview.world.spatial.atlas.Ilayer layer, boolean visible)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean visibleParamValue = visible;
		changeLayerVisible_ILayer_ev_bool(this.nativeObject.pointer, layerParamValue, visibleParamValue);
	}
	native private void createSceneLayer_IGlobeLayer_EVString_EVString(long pNativeObject, long pParentGrouplayer, String datasourceName, String datasetName);
	/**
	 * 创建场景图层
	 * @param pParentGrouplayer 父图层组
	 * @param datasourceName 数据源名
	 * @param datasetName 数据集名
	 */
	public void createSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, String datasourceName, String datasetName)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		createSceneLayer_IGlobeLayer_EVString_EVString(this.nativeObject.pointer, pParentGrouplayerParamValue, datasourceNameParamValue, datasetNameParamValue);
	}
	native private void createSceneGroupLayer_IGlobeLayer_EVString(long pNativeObject, long pParentGrouplayer, String groupName);
	/**
	 * 创建场景图层组
	 * @param pParentGrouplayer 父图层组
	 * @param groupName 组名
	 */
	public void createSceneGroupLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, String groupName)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		String groupNameParamValue = groupName;
		createSceneGroupLayer_IGlobeLayer_EVString(this.nativeObject.pointer, pParentGrouplayerParamValue, groupNameParamValue);
	}
	native private void moveSceneLayer_IGlobeLayer_ev_uint32_ev_uint32(long pNativeObject, long pParentGrouplayer, long index, long pos);
	/**
	 * 移除场景图层
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 * @param pos 移动后位置
	 */
	public void moveSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index, long pos)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		long posParamValue = pos;
		moveSceneLayer_IGlobeLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue, posParamValue);
	}
	native private void switchSceneLayer_IGlobeLayer_ev_uint32_IGlobeLayer(long pNativeObject, long pParentGrouplayer, long index, long newLayer);
	/**
	 * 贴地矢量与非贴地矢量的转换
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 */
	public void switchSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index, com.earthview.world.spatial3d.atlas.Iglobelayer newLayer)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		long newLayerParamValue = (newLayer == null ? 0L : newLayer.nativeObject.pointer);
		switchSceneLayer_IGlobeLayer_ev_uint32_IGlobeLayer(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue, newLayerParamValue);
	}
	native private void removeSceneLayer_IGlobeLayer_ev_uint32(long pNativeObject, long pParentGrouplayer, long index);
	/**
	 * /移除场景图层/
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 */
	public void removeSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		removeSceneLayer_IGlobeLayer_ev_uint32(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue);
	}
	native private void setSceneLayerVisible_IGlobeLayer_ev_bool(long pNativeObject, long layer, boolean visible);
	/**
	 * 设置场景图层可见性
	 * @param layer 图层
	 * @param visible 可见性
	 */
	public void setSceneLayerVisible(com.earthview.world.spatial3d.atlas.Iglobelayer layer, boolean visible)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean visibleParamValue = visible;
		setSceneLayerVisible_IGlobeLayer_ev_bool(this.nativeObject.pointer, layerParamValue, visibleParamValue);
	}
	native private void setSceneLayerTheme_IGlobeLayer_ITheme(long pNativeObject, long layer, long theme);
	/**
	 * 设置场景图层风格
	 * @param layer 图层
	 * @param theme 网络
	 */
	public void setSceneLayerTheme(com.earthview.world.spatial3d.atlas.Iglobelayer layer, com.earthview.world.spatial.theme.Itheme theme)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setSceneLayerTheme_IGlobeLayer_ITheme(this.nativeObject.pointer, layerParamValue, themeParamValue);
	}
	public AtlasEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtlasEventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onCreateMap_CMapActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateScene_CSceneActiveEvent(long pNativeObject, String method);
	native protected void register_onSetCurrentMap_CMapActiveEvent(long pNativeObject, String method);
	native protected void register_onSetCurrentScene_CSceneActiveEvent(long pNativeObject, String method);
	native protected void register_onRemoveMap_CMapActiveEvent(long pNativeObject, String method);
	native protected void register_onRemoveScene_CSceneActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateMapLayer_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateMapGroupLayer_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onMoveMapLayer_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onRemoveMapLayer_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onChangeMapName_CMapActiveEvent(long pNativeObject, String method);
	native protected void register_onChangeSceneName_CSceneActiveEvent(long pNativeObject, String method);
	native protected void register_onChangeLayerName_CEvent(long pNativeObject, String method);
	native protected void register_onChangeLayerVisible_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onChangeLayerTheme_CMapLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateSceneLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onCreateSceneGroupLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onSwitchSceneLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onMoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onRemoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onSetSceneLayerVisible_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onSetSceneLayerTheme_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onCreateMap_CMapActiveEvent(this.nativeObject.pointer, "onCreateMap_CMapActiveEvent_callback");
			this.register_onCreateScene_CSceneActiveEvent(this.nativeObject.pointer, "onCreateScene_CSceneActiveEvent_callback");
			this.register_onSetCurrentMap_CMapActiveEvent(this.nativeObject.pointer, "onSetCurrentMap_CMapActiveEvent_callback");
			this.register_onSetCurrentScene_CSceneActiveEvent(this.nativeObject.pointer, "onSetCurrentScene_CSceneActiveEvent_callback");
			this.register_onRemoveMap_CMapActiveEvent(this.nativeObject.pointer, "onRemoveMap_CMapActiveEvent_callback");
			this.register_onRemoveScene_CSceneActiveEvent(this.nativeObject.pointer, "onRemoveScene_CSceneActiveEvent_callback");
			this.register_onCreateMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, "onCreateMapLayer_CMapLayerActiveEvent_callback");
			this.register_onCreateMapGroupLayer_CMapLayerActiveEvent(this.nativeObject.pointer, "onCreateMapGroupLayer_CMapLayerActiveEvent_callback");
			this.register_onMoveMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, "onMoveMapLayer_CMapLayerActiveEvent_callback");
			this.register_onRemoveMapLayer_CMapLayerActiveEvent(this.nativeObject.pointer, "onRemoveMapLayer_CMapLayerActiveEvent_callback");
			this.register_onChangeMapName_CMapActiveEvent(this.nativeObject.pointer, "onChangeMapName_CMapActiveEvent_callback");
			this.register_onChangeSceneName_CSceneActiveEvent(this.nativeObject.pointer, "onChangeSceneName_CSceneActiveEvent_callback");
			this.register_onChangeLayerName_CEvent(this.nativeObject.pointer, "onChangeLayerName_CEvent_callback");
			this.register_onChangeLayerVisible_CMapLayerActiveEvent(this.nativeObject.pointer, "onChangeLayerVisible_CMapLayerActiveEvent_callback");
			this.register_onChangeLayerTheme_CMapLayerActiveEvent(this.nativeObject.pointer, "onChangeLayerTheme_CMapLayerActiveEvent_callback");
			this.register_onCreateSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onCreateSceneLayer_CSceneLayerActiveEvent_callback");
			this.register_onCreateSceneGroupLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onCreateSceneGroupLayer_CSceneLayerActiveEvent_callback");
			this.register_onSwitchSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onSwitchSceneLayer_CSceneLayerActiveEvent_callback");
			this.register_onMoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onMoveSceneLayer_CSceneLayerActiveEvent_callback");
			this.register_onRemoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onRemoveSceneLayer_CSceneLayerActiveEvent_callback");
			this.register_onSetSceneLayerVisible_CSceneLayerActiveEvent(this.nativeObject.pointer, "onSetSceneLayerVisible_CSceneLayerActiveEvent_callback");
			this.register_onSetSceneLayerTheme_CSceneLayerActiveEvent(this.nativeObject.pointer, "onSetSceneLayerTheme_CSceneLayerActiveEvent_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static AtlasEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtlasEventObject obj = null;
 		if(baseObj instanceof AtlasEventObject)
		{
			obj = (AtlasEventObject)baseObj;
		} else {
			obj = new AtlasEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAtlasEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
