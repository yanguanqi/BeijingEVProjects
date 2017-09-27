package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维场景查询监听器基类
 */
public class Iglobequerylistener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener", new IglobequerylistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JIGlobeQueryListenerProxy", new IglobequerylistenerClassFactory());
	}

	/**
	 * 鼠标状态
	 */
	public enum MouseOpType implements INativeEnum<MouseOpType> {
		MOT_MouseDown(MouseOpTypeHelper.ENUM_VALUES[0]),
		MOT_MouseMove(MouseOpTypeHelper.ENUM_VALUES[1]),
		MOT_MouseUp(MouseOpTypeHelper.ENUM_VALUES[2]);
		private int value;
		MouseOpType(int i) {
			this.value = i;
		}
		public MouseOpType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final MouseOpType toEnum(int retval) {
			if(retval == MOT_MouseDown.value){
				return MOT_MouseDown;
			}
			else if(retval == MOT_MouseMove.value){
				return MOT_MouseMove;
			}
			else if(retval == MOT_MouseUp.value){
				return MOT_MouseUp;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class MouseOpTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public Iglobequerylistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIGlobeQueryListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.Iglobequerylistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onSelectionChanged_CGlobeControl_CGlobeSelection_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
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

	native private void onSelectionChanged_CGlobeControl_CGlobeSelection(long pNativeObject, long globeControl, long result);
	/**
	 * 通知选择集发生了变化
	 * @param globeControl 场景控件
	 * @param result 所有三维图层选择集的集合
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.spatial3d.GlobeSelection result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_CGlobeSelection(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_CGlobeControl_CGlobeSelection_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.spatial3d.GlobeSelection result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_CGlobeSelection_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
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

	native private void onSelectionChanged_CGlobeControl_RaySceneQueryResult(long pNativeObject, long globeControl, long result);
	/**
	 * 通知选择集发生了变化
	 * @param globeControl 场景控件
	 * @param result 射线求交结果
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_RaySceneQueryResult(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_CGlobeControl_RaySceneQueryResult_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_RaySceneQueryResult_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectionChanged_CGlobeControl_SceneQueryResult_callback(long globeControl, long result)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
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

	native private void onSelectionChanged_CGlobeControl_SceneQueryResult(long pNativeObject, long globeControl, long result);
	/**
	 * 通知选择集发生了变化
	 * @param globeControl 场景控件
	 * @param result 场景空间查询结果
	 */
	public void onSelectionChanged(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.SceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_SceneQueryResult(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}
	native private void onSelectionChanged_CGlobeControl_SceneQueryResult_NoVirtual(long pNativeObject, long globeControl, long result);
	protected void onSelectionChanged_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.SceneQueryResult result)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		onSelectionChanged_CGlobeControl_SceneQueryResult_NoVirtual(this.nativeObject.pointer, globeControlParamValue, resultParamValue);
	}

	protected  void onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback(long globeControl, long entry, long newMatrix, int type)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
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
		com.earthview.world.spatial3d.systemui.Iglobequerylistener.MouseOpType typeParamValue = com.earthview.world.spatial3d.systemui.Iglobequerylistener.MouseOpType.toEnum(type);
		onSelectedObjectMoved(globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}

	native private void onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(long pNativeObject, long globeControl, long entry, long newMatrix, int type);
	/**
	 * 通知选中的物体被移动了
	 * @param globeControl 场景控件
	 * @param entry 射线求交结果排序算子
	 * @param newMatrix 物体新的世界变换矩阵
	 * @param type 鼠标状态
	 */
	public void onSelectedObjectMoved(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial3d.systemui.Iglobequerylistener.MouseOpType type)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(this.nativeObject.pointer, globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}
	native private void onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_NoVirtual(long pNativeObject, long globeControl, long entry, long newMatrix, int type);
	protected void onSelectedObjectMoved_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial3d.systemui.Iglobequerylistener.MouseOpType type)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_NoVirtual(this.nativeObject.pointer, globeControlParamValue, entryParamValue, newMatrixParamValue, typeParamValue);
	}

	protected  void onDeleteKeyPressed_void_callback()
	{
		onDeleteKeyPressed();
	}

	native private void onDeleteKeyPressed_void(long pNativeObject);
	/**
	 * Delete键按下事件处理
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

	public Iglobequerylistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iglobequerylistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onSelectionChanged_CGlobeControl_CGlobeSelection(long pNativeObject, String method);
	native protected void register_onSelectionChanged_CGlobeControl_RaySceneQueryResult(long pNativeObject, String method);
	native protected void register_onSelectionChanged_CGlobeControl_SceneQueryResult(long pNativeObject, String method);
	native protected void register_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(long pNativeObject, String method);
	native protected void register_onDeleteKeyPressed_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onSelectionChanged_CGlobeControl_CGlobeSelection(this.nativeObject.pointer, "onSelectionChanged_CGlobeControl_CGlobeSelection_callback");
			this.register_onSelectionChanged_CGlobeControl_RaySceneQueryResult(this.nativeObject.pointer, "onSelectionChanged_CGlobeControl_RaySceneQueryResult_callback");
			this.register_onSelectionChanged_CGlobeControl_SceneQueryResult(this.nativeObject.pointer, "onSelectionChanged_CGlobeControl_SceneQueryResult_callback");
			this.register_onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(this.nativeObject.pointer, "onSelectedObjectMoved_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_callback");
			this.register_onDeleteKeyPressed_void(this.nativeObject.pointer, "onDeleteKeyPressed_void_callback");
		}
	}
	
	public static Iglobequerylistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iglobequerylistener obj = null;
 		if(baseObj instanceof Iglobequerylistener)
		{
			obj = (Iglobequerylistener)baseObj;
		} else {
			obj = new Iglobequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IGlobeQueryListener");
			obj.increaseCast();
		}

		return obj;
	}
}
