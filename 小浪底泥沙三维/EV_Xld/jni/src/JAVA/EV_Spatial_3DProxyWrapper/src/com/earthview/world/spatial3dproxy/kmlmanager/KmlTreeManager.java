package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml树管理对象
 */
public class KmlTreeManager extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager", new KmlTreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCKmlTreeManagerProxy", new KmlTreeManagerClassFactory());
	}

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
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

	protected  boolean onRemoveSceneLayer_CSceneLayerActiveEvent_callback(long e)
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
		boolean returnValue = onRemoveSceneLayer(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 移除图层事件响应
	 * @param e 3d图层事件
	 */
	public boolean onRemoveSceneLayer(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveSceneLayer_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveSceneLayer_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onChangeSceneLayerName_CSceneLayerActiveEvent_callback(long e)
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
		boolean returnValue = onChangeSceneLayerName(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onChangeSceneLayerName_CSceneLayerActiveEvent(long pNativeObject, long e);
	/**
	 * 重命名图层事件响应
	 * @param e 3d图层事件
	 */
	public boolean onChangeSceneLayerName(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onChangeSceneLayerName_CSceneLayerActiveEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onChangeSceneLayerName_CSceneLayerActiveEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onChangeSceneLayerName_NoVirtual(com.earthview.world.spatial.systemui.SceneLayerActiveEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onChangeSceneLayerName_CSceneLayerActiveEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlObjectEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlObjectEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlObjectEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlObjectEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onUpdateKmlObjectEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onUpdateKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 修改kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onUpdateKmlObjectEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onUpdateKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onUpdateKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onUpdateKmlObjectEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onUpdateKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveKmlObjectEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 删除kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveKmlObjectEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveKmlObjectEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onSaveKmlObjectEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSaveKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 保存kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onSaveKmlObjectEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onSaveKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onSaveKmlObjectEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveKmlObjectEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlFolderEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlFolderEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlFolderEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml文件夹事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlFolderEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFolderEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlFolderEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlFolderEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFolderEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveKmlFolderEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveKmlFolderEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 删除kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveKmlFolderEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlFolderEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveKmlFolderEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveKmlFolderEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlFolderEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlFileEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlFileEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlFileEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml文件事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlFileEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFileEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlFileEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlFileEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFileEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onSaveKmlFileEvent_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onSaveKmlFileEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSaveKmlFileEvent_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 保存kml对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onSaveKmlFileEvent(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveKmlFileEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onSaveKmlFileEvent_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onSaveKmlFileEvent_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveKmlFileEvent_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddNetworkLink_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddNetworkLink(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddNetworkLink_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml网络事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddNetworkLink(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddNetworkLink_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddNetworkLink_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddNetworkLink_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveNetworkLink_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveNetworkLink(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveNetworkLink_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 移除kml网络事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveNetworkLink(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveNetworkLink_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveNetworkLink_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveNetworkLink_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onSaveNetworkLink_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onSaveNetworkLink(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSaveNetworkLink_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 保存kml网络对象事件响应
	 * @param e kml树节点事件
	 */
	public boolean onSaveNetworkLink(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onSaveNetworkLink_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onSaveNetworkLink_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSaveNetworkLink_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlFolderAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlFolderAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlFolderAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加文件夹之后事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlFolderAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFolderAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlFolderAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlFolderAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlFolderAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveKmlFolderAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveKmlFolderAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 移除文件夹之后事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveKmlFolderAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlFolderAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveKmlFolderAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveKmlFolderAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlFolderAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlObjectAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlObjectAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlObjectAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml对象之后事件响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlObjectAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlObjectAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlObjectAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlObjectAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlObjectAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveKmlObjectAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveKmlObjectAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 移除kml对象后事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveKmlObjectAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlObjectAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveKmlObjectAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveKmlObjectAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlObjectAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onAddKmlNetworkLinkAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 添加kml网络链接对象事件之后响应
	 * @param e kml树节点事件
	 */
	public boolean onAddKmlNetworkLinkAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onAddKmlNetworkLinkAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback(long e)
	{
		com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent eParamValue = (e == 0L ? null : new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onRemoveKmlNetworkLinkAfter(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent(long pNativeObject, long e);
	/**
	 * 移除kml网络对象之后事件响应
	 * @param e kml树节点事件
	 */
	public boolean onRemoveKmlNetworkLinkAfter(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onRemoveKmlNetworkLinkAfter_NoVirtual(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  void onSceneChange_CEvent_callback(long e)
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
		onSceneChange(eParamValue);
	}

	native private void onSceneChange_CEvent(long pNativeObject, long e);
	/**
	 * 场景改变事件响应
	 * @param e 事件
	 */
	public void onSceneChange(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSceneChange_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSceneChange_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onSceneChange_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSceneChange_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCurrentToolChanged_CEvent_callback(long e)
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
		onCurrentToolChanged(eParamValue);
	}

	native private void onCurrentToolChanged_CEvent(long pNativeObject, long e);
	public void onCurrentToolChanged(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCurrentToolChanged_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCurrentToolChanged_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onCurrentToolChanged_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCurrentToolChanged_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onSceneClose_CEvent_callback(long e)
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
		onSceneClose(eParamValue);
	}

	native private void onSceneClose_CEvent(long pNativeObject, long e);
	/**
	 * 场景关闭事件响应
	 * @param e 事件
	 */
	public void onSceneClose(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSceneClose_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onSceneClose_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onSceneClose_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onSceneClose_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onTourEnd_CEvent_callback(long e)
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
		onTourEnd(eParamValue);
	}

	native private void onTourEnd_CEvent(long pNativeObject, long e);
	/**
	 * 游览结束事件响应
	 * @param e 事件
	 */
	public void onTourEnd(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTourEnd_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onTourEnd_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onTourEnd_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTourEnd_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	native private long computeCGeoObjectCenterPos_CVector3_EVAltitudeMode_ev_real64(long pNativeObject, long centerLatLon, int am, double alt);
	/**
	 * 计算地理对象的中心位置
	 * @param centerLatLon 中心经纬度
	 * @param am 高程模式
	 * @param alt 高程值
	 * @return 中心位置坐标
	 */
	public com.earthview.world.spatial.math.Vector3 computeCGeoObjectCenterPos(com.earthview.world.spatial.math.Vector3 centerLatLon, com.earthview.world.spatial.utility.EVAltitudeMode am, double alt)
	{
		long centerLatLonParamValue = centerLatLon.nativeObject.pointer;
		int amParamValue = am.getValue();
		double altParamValue = alt;
		long returnValue = computeCGeoObjectCenterPos_CVector3_EVAltitudeMode_ev_real64(this.nativeObject.pointer, centerLatLonParamValue, amParamValue, altParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void computeRange_CVector3_CVector3_ev_real64(long pNativeObject, long modelPos, long cameraPos, long range);
	/**
	 * 计算范围
	 * @param modelPos 模型的位置
	 * @param cameraPos 相机位置
	 * @param range 范围
	 */
	public void computeRange(com.earthview.world.spatial.math.Vector3 modelPos, com.earthview.world.spatial.math.Vector3 cameraPos, DoublePointer range)
	{
		long modelPosParamValue = modelPos.nativeObject.pointer;
		long cameraPosParamValue = cameraPos.nativeObject.pointer;
		long rangeParamValue = range.nativeObject.pointer;
		computeRange_CVector3_CVector3_ev_real64(this.nativeObject.pointer, modelPosParamValue, cameraPosParamValue, rangeParamValue);
	}
	native private double computeCameraAlt_CGeoObjectExtension(long pNativeObject, long geoobj);
	/**
	 * 计算高程
	 * @param geoobj 地理对象
	 * @return 返回高程值
	 */
	public double computeCameraAlt(com.earthview.world.spatial.kml.GeoObjectExtension geoobj)
	{
		long geoobjParamValue = (geoobj == null ? 0L : geoobj.nativeObject.pointer);
		double returnValue = computeCameraAlt_CGeoObjectExtension(this.nativeObject.pointer, geoobjParamValue);
		return returnValue;
	}
	native private void setGlobeControlsLayers_AllGlobeControlLayers(long pNativeObject, long allLayers);
	/**
	 * 设置3d图层
	 * @param allLayers 图层s
	 */
	public void setGlobeControlsLayers(com.earthview.world.spatial3dproxy.kmlmanager.AllGlobeControlLayers allLayers)
	{
		long allLayersParamValue = allLayers.nativeObject.pointer;
		setGlobeControlsLayers_AllGlobeControlLayers(this.nativeObject.pointer, allLayersParamValue);
	}
	native private void computePlacemarkView_CGlobeCamera_CVector3_ev_real64_ev_real64_ev_real64(long pNativeObject, long camera, long pos, long heading, long tilt, long range);
	public void computePlacemarkView(com.earthview.world.spatial3d.GlobeCamera camera, com.earthview.world.spatial.math.Vector3 pos, DoublePointer heading, DoublePointer tilt, DoublePointer range)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		long rangeParamValue = range.nativeObject.pointer;
		computePlacemarkView_CGlobeCamera_CVector3_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, cameraParamValue, posParamValue, headingParamValue, tiltParamValue, rangeParamValue);
	}
	/**
	 * 默认构造函数
	 * @param ref_layer 图层对象
	 * @param ref_layer 图层对象
	 */
	public KmlTreeManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCKmlTreeManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setCurrentLayer_CKmlLayer_callback(long ref_layer)
	{
		com.earthview.world.spatial3d.atlas.KmlLayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial3d.atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial3d.atlas.KmlLayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		setCurrentLayer(ref_layerParamValue);
	}

	native private void setCurrentLayer_CKmlLayer(long pNativeObject, long ref_layer);
	public void setCurrentLayer(com.earthview.world.spatial3d.atlas.KmlLayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setCurrentLayer_CKmlLayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void setCurrentLayer_CKmlLayer_NoVirtual(long pNativeObject, long ref_layer);
	protected void setCurrentLayer_NoVirtual(com.earthview.world.spatial3d.atlas.KmlLayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setCurrentLayer_CKmlLayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
	}

	protected  long getCurrentLayer_void_callback()
	{
		com.earthview.world.spatial3d.atlas.KmlLayer returnValue = getCurrentLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentLayer_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.KmlLayer getCurrentLayer()
	{
		long returnValue = getCurrentLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.KmlLayer __returnValue = new com.earthview.world.spatial3d.atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate, "CKmlLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.KmlLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlLayer");
		}
		return __returnValue;
	}
	native private long getCurrentLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.KmlLayer getCurrentLayer_NoVirtual()
	{
		long returnValue = getCurrentLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.KmlLayer __returnValue = new com.earthview.world.spatial3d.atlas.KmlLayer(CreatedWhenConstruct.CWC_NotToCreate, "CKmlLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.KmlLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlLayer");
		}
		return __returnValue;
	}

	native private void loadTree_void(long pNativeObject);
	/**
	 * 加载kml树
	 */
	public void loadTree()
	{
		loadTree_void(this.nativeObject.pointer);
	}
	native private long addKmlFile_EVString_CKmlDocument(long pNativeObject, String filePath, long parent);
	/**
	 * 添加kml文件
	 * @param filePath 文件路径
	 * @param parent kmldoc
	 */
	public com.earthview.world.spatial.kml.KmlDocument addKmlFile(String filePath, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		String filePathParamValue = filePath;
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		long returnValue = addKmlFile_EVString_CKmlDocument(this.nativeObject.pointer, filePathParamValue, parentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private void saveKmlFile_EVString(long pNativeObject, String savePath);
	/**
	 * 保存kml文件
	 * @param savePath 文件路径
	 */
	public void saveKmlFile(String savePath)
	{
		String savePathParamValue = savePath;
		saveKmlFile_EVString(this.nativeObject.pointer, savePathParamValue);
	}
	native private void saveFolder_EVString_CKmlDocument(long pNativeObject, String savePath, long node);
	/**
	 * 保存kml文件夹
	 * @param savePath 文件路径
	 * @param node kmldoc
	 */
	public void saveFolder(String savePath, com.earthview.world.spatial.kml.KmlDocument node)
	{
		String savePathParamValue = savePath;
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		saveFolder_EVString_CKmlDocument(this.nativeObject.pointer, savePathParamValue, nodeParamValue);
	}
	native private void addKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long geoObj, long parent);
	/**
	 * 添加kml对象
	 * @param geoObj 地理对象
	 * @param parent kmldoc
	 */
	public void addKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		if(geoObj != null)
		{
		geoObj.setNoFree(true);
		}
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		addKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, geoObjParamValue, parentParamValue);
	}
	native private void updateKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long geoObj, long parent);
	/**
	 * 添加kml对象
	 * @param geoObj 地理对象
	 * @param parent kmldoc
	 */
	public void updateKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		updateKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, geoObjParamValue, parentParamValue);
	}
	native private void removeKmlObject_CGeoObjectExtension_CKmlDocument(long pNativeObject, long geoObj, long parent);
	/**
	 * 移除kml对象
	 * @param geoObj 地理对象
	 * @param parent kmldoc
	 */
	public void removeKmlObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		removeKmlObject_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, geoObjParamValue, parentParamValue);
	}
	native private void saveKmlObject_EVString_CGeoObjectExtension(long pNativeObject, String savePath, long geoObj);
	/**
	 * 保存kml对象
	 * @param savePath 保存的路径
	 * @param geoObj 地理对象
	 */
	public void saveKmlObject(String savePath, com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		String savePathParamValue = savePath;
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		saveKmlObject_EVString_CGeoObjectExtension(this.nativeObject.pointer, savePathParamValue, geoObjParamValue);
	}
	native private void addKmlFolder_CKmlDocument_CKmlDocument(long pNativeObject, long folder, long parent);
	/**
	 * 添加kml文件夹
	 * @param folder kml文件夹
	 * @param parent kmldoc
	 */
	public void addKmlFolder(com.earthview.world.spatial.kml.KmlDocument folder, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long folderParamValue = (folder == null ? 0L : folder.nativeObject.pointer);
		if(folder != null)
		{
		folder.setNoFree(true);
		}
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		addKmlFolder_CKmlDocument_CKmlDocument(this.nativeObject.pointer, folderParamValue, parentParamValue);
	}
	native private void updateKmlFolder_CKmlDocument_CKmlDocument(long pNativeObject, long pKmlFolder, long pParentKmlFolder);
	/**
	 * 更新kml文件夹属性
	 * @param  
	 */
	public void updateKmlFolder(com.earthview.world.spatial.kml.KmlDocument pKmlFolder, com.earthview.world.spatial.kml.KmlDocument pParentKmlFolder)
	{
		long pKmlFolderParamValue = (pKmlFolder == null ? 0L : pKmlFolder.nativeObject.pointer);
		long pParentKmlFolderParamValue = (pParentKmlFolder == null ? 0L : pParentKmlFolder.nativeObject.pointer);
		updateKmlFolder_CKmlDocument_CKmlDocument(this.nativeObject.pointer, pKmlFolderParamValue, pParentKmlFolderParamValue);
	}
	native private void removeKmlFolder_CKmlDocument_CKmlDocument(long pNativeObject, long node, long parent);
	/**
	 * 移除kml文件夹
	 * @param node kmldoc
	 */
	public void removeKmlFolder(com.earthview.world.spatial.kml.KmlDocument node, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		removeKmlFolder_CKmlDocument_CKmlDocument(this.nativeObject.pointer, nodeParamValue, parentParamValue);
	}
	native private void addTour_CTour_CKmlDocument(long pNativeObject, long tour, long parent);
	/**
	 * /添加kml游览/
	 * @param folder kml游览
	 * @param parent kmldoc
	 */
	public void addTour(com.earthview.world.spatial.kml.Tour tour, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long tourParamValue = (tour == null ? 0L : tour.nativeObject.pointer);
		if(tour != null)
		{
		tour.setNoFree(true);
		}
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		addTour_CTour_CKmlDocument(this.nativeObject.pointer, tourParamValue, parentParamValue);
	}
	native private void removeTour_CTour_CKmlDocument(long pNativeObject, long tour, long parent);
	/**
	 * 移除kml游览
	 * @param tour 游览
	 * @param parent kmldoc
	 */
	public void removeTour(com.earthview.world.spatial.kml.Tour tour, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long tourParamValue = (tour == null ? 0L : tour.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		removeTour_CTour_CKmlDocument(this.nativeObject.pointer, tourParamValue, parentParamValue);
	}
	native private void saveTour_EVString_CTour(long pNativeObject, String savePath, long tour);
	/**
	 * 保存kml游览
	 * @param savePath 保存的路径
	 * @param tour 游览对象
	 */
	public void saveTour(String savePath, com.earthview.world.spatial.kml.Tour tour)
	{
		String savePathParamValue = savePath;
		long tourParamValue = (tour == null ? 0L : tour.nativeObject.pointer);
		saveTour_EVString_CTour(this.nativeObject.pointer, savePathParamValue, tourParamValue);
	}
	native private void addNetworkLink_CKmlNetworkLink_CKmlDocument(long pNativeObject, long kmlNet, long parent);
	/**
	 * /添加kml网络连接/
	 * @param kmlNet kml网络连接
	 * @param parent kmldoc
	 */
	public void addNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink kmlNet, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long kmlNetParamValue = (kmlNet == null ? 0L : kmlNet.nativeObject.pointer);
		if(kmlNet != null)
		{
		kmlNet.setNoFree(true);
		}
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		addNetworkLink_CKmlNetworkLink_CKmlDocument(this.nativeObject.pointer, kmlNetParamValue, parentParamValue);
	}
	native private void updateKmlNetworkLink_CKmlNetworkLink_CKmlDocument(long pNativeObject, long pKmlNetworkLink, long parent);
	/**
	 * 更新kml网络连接属性
	 * @param  
	 */
	public void updateKmlNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink pKmlNetworkLink, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long pKmlNetworkLinkParamValue = (pKmlNetworkLink == null ? 0L : pKmlNetworkLink.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		updateKmlNetworkLink_CKmlNetworkLink_CKmlDocument(this.nativeObject.pointer, pKmlNetworkLinkParamValue, parentParamValue);
	}
	native private void removeKmlNetworkLink_CKmlNetworkLink_CKmlDocument(long pNativeObject, long netLink, long parent);
	/**
	 * 移除kml网络连接
	 * @param kmlNet kml网络连接
	 * @param parent kmldoc
	 */
	public void removeKmlNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink netLink, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long netLinkParamValue = (netLink == null ? 0L : netLink.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		removeKmlNetworkLink_CKmlNetworkLink_CKmlDocument(this.nativeObject.pointer, netLinkParamValue, parentParamValue);
	}
	native private void saveKmlNetworkLink_EVString_CKmlNetworkLink(long pNativeObject, String savePath, long netLink);
	/**
	 * 保存kml网络连接
	 * @param savePath 保存的路径
	 * @param netLink kml网络连接
	 */
	public void saveKmlNetworkLink(String savePath, com.earthview.world.spatial.kml.KmlNetworkLink netLink)
	{
		String savePathParamValue = savePath;
		long netLinkParamValue = (netLink == null ? 0L : netLink.nativeObject.pointer);
		saveKmlNetworkLink_EVString_CKmlNetworkLink(this.nativeObject.pointer, savePathParamValue, netLinkParamValue);
	}
	public KmlTreeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTreeManager(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onRemoveSceneLayer_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onChangeSceneLayerName_CSceneLayerActiveEvent(long pNativeObject, String method);
	native protected void register_onAddKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onUpdateKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onSaveKmlObjectEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddKmlFolderEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveKmlFolderEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddKmlFileEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onSaveKmlFileEvent_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddNetworkLink_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveNetworkLink_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onSaveNetworkLink_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddKmlFolderAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveKmlFolderAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddKmlObjectAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveKmlObjectAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent(long pNativeObject, String method);
	native protected void register_onSceneChange_CEvent(long pNativeObject, String method);
	native protected void register_onCurrentToolChanged_CEvent(long pNativeObject, String method);
	native protected void register_onSceneClose_CEvent(long pNativeObject, String method);
	native protected void register_onTourEnd_CEvent(long pNativeObject, String method);
	native protected void register_setCurrentLayer_CKmlLayer(long pNativeObject, String method);
	native protected void register_getCurrentLayer_void(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onRemoveSceneLayer_CSceneLayerActiveEvent(this.nativeObject.pointer, "onRemoveSceneLayer_CSceneLayerActiveEvent_callback");
			this.register_onChangeSceneLayerName_CSceneLayerActiveEvent(this.nativeObject.pointer, "onChangeSceneLayerName_CSceneLayerActiveEvent_callback");
			this.register_onAddKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlObjectEvent_CKmlTreeNodeEvent_callback");
			this.register_onUpdateKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onUpdateKmlObjectEvent_CKmlTreeNodeEvent_callback");
			this.register_onRemoveKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveKmlObjectEvent_CKmlTreeNodeEvent_callback");
			this.register_onSaveKmlObjectEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onSaveKmlObjectEvent_CKmlTreeNodeEvent_callback");
			this.register_onAddKmlFolderEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlFolderEvent_CKmlTreeNodeEvent_callback");
			this.register_onRemoveKmlFolderEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveKmlFolderEvent_CKmlTreeNodeEvent_callback");
			this.register_onAddKmlFileEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlFileEvent_CKmlTreeNodeEvent_callback");
			this.register_onSaveKmlFileEvent_CKmlTreeNodeEvent(this.nativeObject.pointer, "onSaveKmlFileEvent_CKmlTreeNodeEvent_callback");
			this.register_onAddNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddNetworkLink_CKmlTreeNodeEvent_callback");
			this.register_onRemoveNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveNetworkLink_CKmlTreeNodeEvent_callback");
			this.register_onSaveNetworkLink_CKmlTreeNodeEvent(this.nativeObject.pointer, "onSaveNetworkLink_CKmlTreeNodeEvent_callback");
			this.register_onAddKmlFolderAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlFolderAfter_CKmlTreeNodeEvent_callback");
			this.register_onRemoveKmlFolderAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveKmlFolderAfter_CKmlTreeNodeEvent_callback");
			this.register_onAddKmlObjectAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlObjectAfter_CKmlTreeNodeEvent_callback");
			this.register_onRemoveKmlObjectAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveKmlObjectAfter_CKmlTreeNodeEvent_callback");
			this.register_onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onAddKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback");
			this.register_onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent(this.nativeObject.pointer, "onRemoveKmlNetworkLinkAfter_CKmlTreeNodeEvent_callback");
			this.register_onSceneChange_CEvent(this.nativeObject.pointer, "onSceneChange_CEvent_callback");
			this.register_onCurrentToolChanged_CEvent(this.nativeObject.pointer, "onCurrentToolChanged_CEvent_callback");
			this.register_onSceneClose_CEvent(this.nativeObject.pointer, "onSceneClose_CEvent_callback");
			this.register_onTourEnd_CEvent(this.nativeObject.pointer, "onTourEnd_CEvent_callback");
			this.register_setCurrentLayer_CKmlLayer(this.nativeObject.pointer, "setCurrentLayer_CKmlLayer_callback");
			this.register_getCurrentLayer_void(this.nativeObject.pointer, "getCurrentLayer_void_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static KmlTreeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTreeManager obj = null;
 		if(baseObj instanceof KmlTreeManager)
		{
			obj = (KmlTreeManager)baseObj;
		} else {
			obj = new KmlTreeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
