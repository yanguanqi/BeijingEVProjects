package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象场景控件管理器
 */
public class GlobeControlManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeControlManager", new GlobeControlManagerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeControlManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeControlManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 获取单例对象
	 */
	public static com.earthview.world.spatial3d.controls.GlobeControlManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial3d.controls.GlobeControlManager __returnValue = new com.earthview.world.spatial3d.controls.GlobeControlManager(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControlManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControlManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 获取单例指针
	 */
	public static com.earthview.world.spatial3d.controls.GlobeControlManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControlManager __returnValue = new com.earthview.world.spatial3d.controls.GlobeControlManager(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControlManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControlManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlManager");
		}
		return __returnValue;
	}
	native private boolean setup_void(long pNativeObject);
	/**
	 * 初始化设置
	 * @return 初始化成功返回true，失败返回false
	 */
	public boolean setup()
	{
		boolean returnValue = setup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setup_bool(long pNativeObject, boolean externalWindowHandle);
	/**
	 * 获取单例指针
	 * @param externalWindowHandle 是否由外部创建句柄
	 * @return 初始化成功返回true，失败返回false
	 */
	public boolean setup(boolean externalWindowHandle)
	{
		boolean externalWindowHandleParamValue = externalWindowHandle;
		boolean returnValue = setup_bool(this.nativeObject.pointer, externalWindowHandleParamValue);
		return returnValue;
	}
	native private long createGlobeControl_EVString_int_int_CommonStringPairList(long pNativeObject, String windowName, int windowWidth, int windowHeight, long miscParams);
	/**
	 * 创建抽象场景控件
	 * @param windowName 窗体名
	 * @param windowWidth 窗体宽
	 * @param windowHeight 窗体高
	 * @param miscParams 参数列表
	 * @return 抽象场景控件
	 */
	public com.earthview.world.spatial3d.controls.GlobeControl createGlobeControl(String windowName, int windowWidth, int windowHeight, com.earthview.world.core.CommonStringPairList miscParams)
	{
		String windowNameParamValue = windowName;
		int windowWidthParamValue = windowWidth;
		int windowHeightParamValue = windowHeight;
		long miscParamsParamValue = (miscParams == null ? 0L : miscParams.nativeObject.pointer);
		long returnValue = createGlobeControl_EVString_int_int_CommonStringPairList(this.nativeObject.pointer, windowNameParamValue, windowWidthParamValue, windowHeightParamValue, miscParamsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	native private void removeGlobeControl_EVString(long pNativeObject, String globeGlobeName);
	/**
	 * 移除globeControl
	 * @param globeGlobeName 控件的名称
	 */
	public void removeGlobeControl(String globeGlobeName)
	{
		String globeGlobeNameParamValue = globeGlobeName;
		removeGlobeControl_EVString(this.nativeObject.pointer, globeGlobeNameParamValue);
	}
	native private long createCommonSceneControl_ev_int32_int_int(long pNativeObject, int windowName, int windowWidth, int windowHeight);
	/**
	 * 创建通用场景控件
	 * @param windowName 窗体名
	 * @param windowWidth 窗体宽
	 * @param windowHeight 窗体高
	 * @return 通用场景控件
	 */
	public com.earthview.world.spatial3d.controls.CommonSceneControl createCommonSceneControl(int windowName, int windowWidth, int windowHeight)
	{
		int windowNameParamValue = windowName;
		int windowWidthParamValue = windowWidth;
		int windowHeightParamValue = windowHeight;
		long returnValue = createCommonSceneControl_ev_int32_int_int(this.nativeObject.pointer, windowNameParamValue, windowWidthParamValue, windowHeightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.CommonSceneControl __returnValue = new com.earthview.world.spatial3d.controls.CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate, "CCommonSceneControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.CommonSceneControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCommonSceneControl");
		}
		return __returnValue;
	}
	native private long createCommonSceneControl_EVString_int_int(long pNativeObject, String windowName, int windowWidth, int windowHeight);
	/**
	 * 创建通用场景控件
	 * @param windowName 窗体名
	 * @param windowWidth 窗体宽
	 * @param windowHeight 窗体高
	 * @return 通用场景控件
	 */
	public com.earthview.world.spatial3d.controls.CommonSceneControl createCommonSceneControl(String windowName, int windowWidth, int windowHeight)
	{
		String windowNameParamValue = windowName;
		int windowWidthParamValue = windowWidth;
		int windowHeightParamValue = windowHeight;
		long returnValue = createCommonSceneControl_EVString_int_int(this.nativeObject.pointer, windowNameParamValue, windowWidthParamValue, windowHeightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.CommonSceneControl __returnValue = new com.earthview.world.spatial3d.controls.CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate, "CCommonSceneControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.CommonSceneControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCommonSceneControl");
		}
		return __returnValue;
	}
	native private void remove3Dcontrol_EVString(long pNativeObject, String DControlName);
	/**
	 * 移除3DControl
	 * @param DControlName 控件的名称
	 */
	public void remove3Dcontrol(String DControlName)
	{
		String DControlNameParamValue = DControlName;
		remove3Dcontrol_EVString(this.nativeObject.pointer, DControlNameParamValue);
	}
	native private long getGlobeControl_EVString(long pNativeObject, String globeControlName);
	/**
	 * 根据名称取得globeControl
	 * @param globeControlName 控件名
	 */
	public com.earthview.world.spatial3d.controls.GlobeControl getGlobeControl(String globeControlName)
	{
		String globeControlNameParamValue = globeControlName;
		long returnValue = getGlobeControl_EVString(this.nativeObject.pointer, globeControlNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	native private boolean existGlobeControl_EVString(long pNativeObject, String globeControlName);
	/**
	 * 根据名称判断抽象数字地球场景控件是否存在
	 * @param globeControlName 控件名
	 * @return 存在返回true，不存在返回false
	 */
	public boolean existGlobeControl(String globeControlName)
	{
		String globeControlNameParamValue = globeControlName;
		boolean returnValue = existGlobeControl_EVString(this.nativeObject.pointer, globeControlNameParamValue);
		return returnValue;
	}
	native private boolean existGlobeControl_CGlobeControl(long pNativeObject, long globeControl);
	/**
	 * 根据名称判断抽象数字地球场景控件是否存在
	 * @param globeControl 控件对象
	 * @return 存在返回true，不存在返回false
	 */
	public boolean existGlobeControl(com.earthview.world.spatial3d.controls.GlobeControl globeControl)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		boolean returnValue = existGlobeControl_CGlobeControl(this.nativeObject.pointer, globeControlParamValue);
		return returnValue;
	}
	native private boolean frame_void(long pNativeObject);
	/**
	 * 渲染一帧，系统的主要工作接口
	 * @return 需要继续渲染返回true，结束渲染返回false
	 */
	public boolean frame()
	{
		boolean returnValue = frame_void(this.nativeObject.pointer);
		return returnValue;
	}
	public GlobeControlManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeControlManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeControlManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeControlManager obj = null;
 		if(baseObj instanceof GlobeControlManager)
		{
			obj = (GlobeControlManager)baseObj;
		} else {
			obj = new GlobeControlManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeControlManager");
			obj.increaseCast();
		}

		return obj;
	}
}
