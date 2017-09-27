package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 固定在视口指定位置的三维元素
 */
public class FixedElement extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CFixedElement", new FixedElementClassFactory());
	}

	/**
	 * 几种预设的屏幕布局
	 */
	public enum ScreenLayout implements INativeEnum<ScreenLayout> {
		CENTER(ScreenLayoutHelper.ENUM_VALUES[0]),
		LEFTDOWN(ScreenLayoutHelper.ENUM_VALUES[1]),
		LEFTUP(ScreenLayoutHelper.ENUM_VALUES[2]),
		RIGHTDOWN(ScreenLayoutHelper.ENUM_VALUES[3]),
		RIGHTUP(ScreenLayoutHelper.ENUM_VALUES[4]),
		SETXY(ScreenLayoutHelper.ENUM_VALUES[5]);
		private int value;
		ScreenLayout(int i) {
			this.value = i;
		}
		public ScreenLayout getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ScreenLayout toEnum(int retval) {
			if(retval == CENTER.value){
				return CENTER;
			}
			else if(retval == LEFTDOWN.value){
				return LEFTDOWN;
			}
			else if(retval == LEFTUP.value){
				return LEFTUP;
			}
			else if(retval == RIGHTDOWN.value){
				return RIGHTDOWN;
			}
			else if(retval == RIGHTUP.value){
				return RIGHTUP;
			}
			else if(retval == SETXY.value){
				return SETXY;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ScreenLayoutHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param ref_cam 当前场景中的相机
	 * @param x x轴坐标
	 * @param y y轴坐标
	 */
	public FixedElement(com.earthview.world.graphic.Camera ref_cam, long x, long y) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_camPtr = new BasePointer(ref_cam);
		list.add("ref_cam", ref_camPtr.get());
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		Create("CFixedElement", list);
	}

	/**
	 * 构造函数
	 * @param ref_cam 当前场景中的相机
	 * @param eLayout 屏幕布局枚举
	 */
	public FixedElement(com.earthview.world.graphic.Camera ref_cam, com.earthview.world.spatial3d.FixedElement.ScreenLayout eLayout) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_camPtr = new BasePointer(ref_cam);
		list.add("ref_cam", ref_camPtr.get());
		BasePointer eLayoutPtr = new BasePointer(eLayout);
		list.add("eLayout", eLayoutPtr.get());
		Create("CFixedElement", list);
	}

	/**
	 * 构造函数
	 * @param ref_cam 当前场景中的相机
	 */
	public FixedElement(com.earthview.world.graphic.Camera ref_cam) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_camPtr = new BasePointer(ref_cam);
		list.add("ref_cam", ref_camPtr.get());
		Create("CFixedElement", list);
	}

	native private void setScreenPos_ev_uint32_ev_uint32(long pNativeObject, long x, long y);
	/**
	 * 设置坐标轴的位置
	 * @param x x轴坐标
	 * @param y y轴坐标
	 */
	public void setScreenPos(long x, long y)
	{
		long xParamValue = x;
		long yParamValue = y;
		setScreenPos_ev_uint32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void setScreenPos_ScreenLayout(long pNativeObject, int eLayout);
	/**
	 * 设置坐标轴的位置
	 * @param eLayout 坐标轴位置枚举
	 */
	public void setScreenPos(com.earthview.world.spatial3d.FixedElement.ScreenLayout eLayout)
	{
		int eLayoutParamValue = eLayout.getValue();
		setScreenPos_ScreenLayout(this.nativeObject.pointer, eLayoutParamValue);
	}
	native private void addMovable_CMovableObject(long pNativeObject, long ref_mo);
	/**
	 * 添加movable
	 * @param ref_mo 要添加的物体
	 */
	public void addMovable(com.earthview.world.graphic.MovableObject ref_mo)
	{
		long ref_moParamValue = (ref_mo == null ? 0L : ref_mo.nativeObject.pointer);
		addMovable_CMovableObject(this.nativeObject.pointer, ref_moParamValue);
	}
	native private void removeMovable_CMovableObject(long pNativeObject, long mo);
	/**
	 * 删除movable
	 * @param mo 要删除的物体
	 */
	public void removeMovable(com.earthview.world.graphic.MovableObject mo)
	{
		long moParamValue = (mo == null ? 0L : mo.nativeObject.pointer);
		removeMovable_CMovableObject(this.nativeObject.pointer, moParamValue);
	}
	native private void notifiCamera_CCamera(long pNativeObject, long cam);
	/**
	 * 相机监听
	 * @param cam 要监听的相机
	 */
	public void notifiCamera(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		notifiCamera_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private long getFixedElementCameraListener_void(long pNativeObject);
	/**
	 * 获得固定部件坐标轴的相机Listener
	 * @return EarthView::World::Spatial3D::CFixedElementCameraListener*,固定部件的相机监听类指针
	 */
	public com.earthview.world.spatial3d.FixedElementCameraListener getFixedElementCameraListener()
	{
		long returnValue = getFixedElementCameraListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.FixedElementCameraListener __returnValue = new com.earthview.world.spatial3d.FixedElementCameraListener(CreatedWhenConstruct.CWC_NotToCreate, "CFixedElementCameraListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.FixedElementCameraListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedElementCameraListener");
		}
		return __returnValue;
	}
	native private long getCamera_void(long pNativeObject);
	/**
	 * 获得当前相机
	 * @return EarthView::World::Graphic::CCamera*,相机指针
	 */
	public com.earthview.world.graphic.Camera getCamera()
	{
		long returnValue = getCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	public FixedElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FixedElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FixedElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FixedElement obj = null;
 		if(baseObj instanceof FixedElement)
		{
			obj = (FixedElement)baseObj;
		} else {
			obj = new FixedElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFixedElement");
			obj.increaseCast();
		}

		return obj;
	}
}
