package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Icommonscenequerylistener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener", new IcommonscenequerylistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JICommonSceneQueryListenerProxy", new IcommonscenequerylistenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Icommonscenequerylistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JICommonSceneQueryListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.Icommonscenequerylistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onSelectionChanged_C3DControl_CGlobeSelection_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.C3DControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.C3DControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		com.earthview.world.spatial3d.GlobeSelection resultParamValue = new com.earthview.world.spatial3d.GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
		resultParamValue.setDelegate(true);
		resultParamValue.setInstancePointer(new InstancePointer(result));
		IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
		if (resultParamValueClassFactory != null)
		{
			resultParamValue.setDelegate(true);
			resultParamValue = (com.earthview.world.spatial3d.GlobeSelection)resultParamValueClassFactory.create();
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
		}
		onSelectionChanged(globeControlParamValue, resultParamValue);
	}

	native private void onSelectionChanged_C3DControl_CGlobeSelection(long pNativeObject, long globeControl, long result);
	/**
	 * 选择处理
	 * @param globeControl 场景控件
	 * @param result 选择集
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.spatial3d.GlobeSelection result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_CGlobeSelection(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_C3DControl_CGlobeSelection_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.spatial3d.GlobeSelection result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_CGlobeSelection_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectionChanged_RaySceneQueryResult_callback(long result)
	{
		com.earthview.world.graphic.RaySceneQueryResult resultParamValue = new com.earthview.world.graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		resultParamValue.setDelegate(true);
		resultParamValue.setInstancePointer(new InstancePointer(result));
		IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
		if (resultParamValueClassFactory != null)
		{
			resultParamValue.setDelegate(true);
			resultParamValue = (com.earthview.world.graphic.RaySceneQueryResult)resultParamValueClassFactory.create();
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
		}
		onSelectionChanged(resultParamValue);
	}

	native private void onSelectionChanged_RaySceneQueryResult(long pNativeObject, long result);
	/**
	 * 选择处理
	 * @param result 射线查询结果集
	 */
	public void onSelectionChanged(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_RaySceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void onSelectionChanged_RaySceneQueryResult_NoVirtual(long pNativeObject, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_RaySceneQueryResult_NoVirtual(this.nativeObject.pointer, resultParamValue);
	}

	protected  void onSelectionChanged_C3DControl_RaySceneQueryResult_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.C3DControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.C3DControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		com.earthview.world.graphic.RaySceneQueryResult resultParamValue = new com.earthview.world.graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		resultParamValue.setDelegate(true);
		resultParamValue.setInstancePointer(new InstancePointer(result));
		IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
		if (resultParamValueClassFactory != null)
		{
			resultParamValue.setDelegate(true);
			resultParamValue = (com.earthview.world.graphic.RaySceneQueryResult)resultParamValueClassFactory.create();
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
		}
		onSelectionChanged(globeControlParamValue, resultParamValue);
	}

	native private void onSelectionChanged_C3DControl_RaySceneQueryResult(long pNativeObject, long globeControl, long result);
	/**
	 * 选择处理
	 * @param globeControl 场景控件
	 * @param result 射线查询结果集
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_RaySceneQueryResult(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_C3DControl_RaySceneQueryResult_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_RaySceneQueryResult_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectionChanged_C3DControl_SceneQueryResult_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.C3DControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.C3DControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		com.earthview.world.graphic.SceneQueryResult resultParamValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		resultParamValue.setDelegate(true);
		resultParamValue.setInstancePointer(new InstancePointer(result));
		IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
		if (resultParamValueClassFactory != null)
		{
			resultParamValue.setDelegate(true);
			resultParamValue = (com.earthview.world.graphic.SceneQueryResult)resultParamValueClassFactory.create();
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
		}
		onSelectionChanged(globeControlParamValue, resultParamValue);
	}

	native private void onSelectionChanged_C3DControl_SceneQueryResult(long pNativeObject, long globeControl, long result);
	/**
	 * 选择处理
	 * @param globeControl 场景控件
	 * @param result 场景查询选择集
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.SceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_SceneQueryResult(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_C3DControl_SceneQueryResult_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.SceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_C3DControl_SceneQueryResult_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback(long globeControl, long entry, long newMatrix, int type)
	{
		com.earthview.world.spatial3d.controls.C3DControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.C3DControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		com.earthview.world.graphic.RaySceneQueryResultEntry entryParamValue = new com.earthview.world.graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
		entryParamValue.setDelegate(true);
		entryParamValue.setInstancePointer(new InstancePointer(entry));
		IClassFactory entryParamValueClassFactory = GlobalClassFactoryMap.get(entryParamValue.getCppInstanceTypeName());
		if (entryParamValueClassFactory != null)
		{
			entryParamValue.setDelegate(true);
			entryParamValue = (com.earthview.world.graphic.RaySceneQueryResultEntry)entryParamValueClassFactory.create();
			entryParamValue.setDelegate(true);
			entryParamValue.setInstancePointer(new InstancePointer(entry));
		}
		com.earthview.world.spatial.math.Matrix4 newMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		newMatrixParamValue.setDelegate(true);
		newMatrixParamValue.setInstancePointer(new InstancePointer(newMatrix));
		IClassFactory newMatrixParamValueClassFactory = GlobalClassFactoryMap.get(newMatrixParamValue.getCppInstanceTypeName());
		if (newMatrixParamValueClassFactory != null)
		{
			newMatrixParamValue.setDelegate(true);
			newMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)newMatrixParamValueClassFactory.create();
			newMatrixParamValue.setDelegate(true);
			newMatrixParamValue.setInstancePointer(new InstancePointer(newMatrix));
		}
		com.earthview.world.spatial.systemui.Guievent.GUIEventType typeParamValue = com.earthview.world.spatial.systemui.Guievent.GUIEventType.toEnum(type);
		onSelectedObjectMoved(globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}

	native private void onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(long pNativeObject, long globeControl, long entry, long newMatrix, int type);
	/**
	 * 移动处理
	 * @param globeControl 场景控件
	 * @param entry 射线查询结果集记录
	 * @param newMatrix 世界变换矩阵
	 * @param type 类型标识
	 */
	public void onSelectedObjectMoved(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial.systemui.Guievent.GUIEventType type)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.nativeObject.pointer, globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}
	native private void onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_NoVirtual(long pNativeObject, long globeControl, long entry, long newMatrix, int type);
	protected void onSelectedObjectMoved_NoVirtual(com.earthview.world.spatial3d.controls.C3DControl globeControl, com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial.systemui.Guievent.GUIEventType type)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_NoVirtual(this.nativeObject.pointer, globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}

	protected  void onDeleteKeyPressed_void_callback()
	{
		onDeleteKeyPressed();
	}

	native private void onDeleteKeyPressed_void(long pNativeObject);
	/**
	 * 按下删除键处理
	 * @param  
	 */
	public void onDeleteKeyPressed()
	{
		onDeleteKeyPressed_void(this.nativeObject.pointer);
	}
	native private void onDeleteKeyPressed_void_NoVirtual(long pNativeObject);
	protected void onDeleteKeyPressed_NoVirtual()
	{
		onDeleteKeyPressed_void_NoVirtual(this.nativeObject.pointer);
	}

	public Icommonscenequerylistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Icommonscenequerylistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onSelectionChanged_C3DControl_CGlobeSelection(long pNativeObject, String method);
	native protected void register_onSelectionChanged_RaySceneQueryResult(long pNativeObject, String method);
	native protected void register_onSelectionChanged_C3DControl_RaySceneQueryResult(long pNativeObject, String method);
	native protected void register_onSelectionChanged_C3DControl_SceneQueryResult(long pNativeObject, String method);
	native protected void register_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(long pNativeObject, String method);
	native protected void register_onDeleteKeyPressed_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onSelectionChanged_C3DControl_CGlobeSelection(this.nativeObject.pointer, "onSelectionChanged_C3DControl_CGlobeSelection_callback");
			this.register_onSelectionChanged_RaySceneQueryResult(this.nativeObject.pointer, "onSelectionChanged_RaySceneQueryResult_callback");
			this.register_onSelectionChanged_C3DControl_RaySceneQueryResult(this.nativeObject.pointer, "onSelectionChanged_C3DControl_RaySceneQueryResult_callback");
			this.register_onSelectionChanged_C3DControl_SceneQueryResult(this.nativeObject.pointer, "onSelectionChanged_C3DControl_SceneQueryResult_callback");
			this.register_onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.nativeObject.pointer, "onSelectedObjectMoved_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_callback");
			this.register_onDeleteKeyPressed_void(this.nativeObject.pointer, "onDeleteKeyPressed_void_callback");
		}
	}
	
	public static Icommonscenequerylistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Icommonscenequerylistener obj = null;
 		if(baseObj instanceof Icommonscenequerylistener)
		{
			obj = (Icommonscenequerylistener)baseObj;
		} else {
			obj = new Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ICommonSceneQueryListener");
			obj.increaseCast();
		}

		return obj;
	}
}
