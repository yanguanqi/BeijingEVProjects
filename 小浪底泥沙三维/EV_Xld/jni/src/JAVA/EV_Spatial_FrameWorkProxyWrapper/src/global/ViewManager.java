package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// using namespace EarthView::World::Spatial::Atlas;
public class ViewManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("CViewManager", new ViewManagerClassFactory());
	}

	public enum ViewType implements INativeEnum<ViewType> {
		Globe(ViewTypeHelper.ENUM_VALUES[0]),
		Map(ViewTypeHelper.ENUM_VALUES[1]),
		None(ViewTypeHelper.ENUM_VALUES[2]);
		private int value;
		ViewType(int i) {
			this.value = i;
		}
		public ViewType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ViewType toEnum(int retval) {
			if(retval == Globe.value){
				return Globe;
			}
			else if(retval == Map.value){
				return Map;
			}
			else if(retval == None.value){
				return None;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ViewTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private long openGlobe_EVString_EVString(long pNativeObject, String name, String windowHandle);
	/**
	 * 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	 * @param name 场景名称。
	 * @param windowHandle 创建场景对象需要的window句柄。对于Windows，windowHandle的值只有一个，即WId，对于Linux，windowHandle的值为"display:screen:WId"
	 * @return 创建的CGlobeControl对象。
	 */
	public ControlSpace openGlobe(String name, String windowHandle)
	{
		String nameParamValue = name;
		String windowHandleParamValue = windowHandle;
		long returnValue = openGlobe_EVString_EVString(this.nativeObject.pointer, nameParamValue, windowHandleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private long openGlobe_EVString_ev_uint32_ev_uint32_EVString(long pNativeObject, String name, long winWidth, long winHeight, String windowHandle);
	public ControlSpace openGlobe(String name, long winWidth, long winHeight, String windowHandle)
	{
		String nameParamValue = name;
		long winWidthParamValue = winWidth;
		long winHeightParamValue = winHeight;
		String windowHandleParamValue = windowHandle;
		long returnValue = openGlobe_EVString_ev_uint32_ev_uint32_EVString(this.nativeObject.pointer, nameParamValue, winWidthParamValue, winHeightParamValue, windowHandleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private long openGlobe_EVString_EVString_ev_uint32(long pNativeObject, String name, String windowHandle, long toolbarEnabled);
	/**
	 * 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	 * @param name 场景名称。
	 * @param windowHandle 创建场景对象需要的window句柄。对于Windows，windowHandle的值只有一个，即WId，对于Linux，windowHandle的值为"display:screen:WId"
	 * @param toolbarEnabled 指定要创建的工具栏的枚举(EV_ToolBarType)。
	 * @return 创建的CGlobeControl对象。
	 */
	public ControlSpace openGlobe(String name, String windowHandle, long toolbarEnabled)
	{
		String nameParamValue = name;
		String windowHandleParamValue = windowHandle;
		long toolbarEnabledParamValue = toolbarEnabled;
		long returnValue = openGlobe_EVString_EVString_ev_uint32(this.nativeObject.pointer, nameParamValue, windowHandleParamValue, toolbarEnabledParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private int getViewType_EVString(long pNativeObject, String name);
	/**
	 * 获取指定名称的窗口的类型。
	 * @param name 窗口名称
	 * @return CViewManager::ViewType
	 */
	public ViewManager.ViewType getViewType(String name)
	{
		String nameParamValue = name;
		int returnValue = getViewType_EVString(this.nativeObject.pointer, nameParamValue);
		return ViewManager.ViewType.toEnum(returnValue);
	}
	native private int getActiveViewType_void(long pNativeObject);
	/**
	 * 获取当前激活的窗口的类型。
	 * @return CViewManager::ViewType
	 */
	public ViewManager.ViewType getActiveViewType()
	{
		int returnValue = getActiveViewType_void(this.nativeObject.pointer);
		return ViewManager.ViewType.toEnum(returnValue);
	}
	native private void closeGlobe_EVString(long pNativeObject, String name);
	/**
	 * 关闭球。
	 * @param name 球名。
	 */
	public void closeGlobe(String name)
	{
		String nameParamValue = name;
		closeGlobe_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long openMap_EVString(long pNativeObject, String name);
	/**
	 * 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	 * @param name 地图名称。
	 * @return 创建的CControlSpace对象。
	 */
	public ControlSpace openMap(String name)
	{
		String nameParamValue = name;
		long returnValue = openMap_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private long openMap_EVString_ev_uint32(long pNativeObject, String name, long toolbarEnabled);
	/**
	 * 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	 * @param name 地图名称。
	 * @param toolbarEnabled 指定要创建的工具栏的枚举(EV_ToolBarType)。
	 * @return 创建的CControlSpace对象。
	 */
	public ControlSpace openMap(String name, long toolbarEnabled)
	{
		String nameParamValue = name;
		long toolbarEnabledParamValue = toolbarEnabled;
		long returnValue = openMap_EVString_ev_uint32(this.nativeObject.pointer, nameParamValue, toolbarEnabledParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private void closeMap_EVString(long pNativeObject, String name);
	/**
	 * 关闭地图。
	 * @param name 地图名。
	 */
	public void closeMap(String name)
	{
		String nameParamValue = name;
		closeMap_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long openLayout_EVString(long pNativeObject, String name);
	/**
	 * 打开布局
	 * @param name 布局名称
	 */
	public ControlSpace openLayout(String name)
	{
		String nameParamValue = name;
		long returnValue = openLayout_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private void closeLayout_EVString(long pNativeObject, String name);
	/**
	 * 关闭布局
	 * @param name 布局名称
	 */
	public void closeLayout(String name)
	{
		String nameParamValue = name;
		closeLayout_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getActiveControlSpace_void(long pNativeObject);
	/// <summary>
	/// <summary>
	/// 获取当前激活的CControlSpace对象。
	/// </summary>
	/// <returns>CControlSpace对象指针。</returns>
	public ControlSpace getActiveControlSpace()
	{
		long returnValue = getActiveControlSpace_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private long getLastActiveControlSpace_void(long pNativeObject);
	/**
	 * 获取上一个激活的CControlSpace对象。
	 * @return CControlSpace对象指针。
	 */
	public ControlSpace getLastActiveControlSpace()
	{
		long returnValue = getLastActiveControlSpace_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private String getActiveControlName_void(long pNativeObject);
	/**
	 * 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象名称。
	 */
	public String getActiveControlName()
	{
		String returnValue = getActiveControlName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLastActiveControlName_void(long pNativeObject);
	/**
	 * 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象名称。
	 */
	public String getLastActiveControlName()
	{
		String returnValue = getLastActiveControlName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getActiveSpatialControl_void(long pNativeObject);
	/**
	 * 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getActiveSpatialControl()
	{
		long returnValue = getActiveSpatialControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private long getLastActiveSpatialControl_void(long pNativeObject);
	/**
	 * 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getLastActiveSpatialControl()
	{
		long returnValue = getLastActiveSpatialControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private long getSpatialControlByName_EVString(long pNativeObject, String spatialControlName);
	/**
	 * 获取指定名称的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @param spatialControlName 名称。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getSpatialControlByName(String spatialControlName)
	{
		String spatialControlNameParamValue = spatialControlName;
		long returnValue = getSpatialControlByName_EVString(this.nativeObject.pointer, spatialControlNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private long getControlSpaceByName_EVString(long pNativeObject, String spatialControlName);
	/**
	 * 获取指定名称的CControlSpace对象。
	 * @param spatialControlName 名称。
	 * @return CControlSpace对象指针。
	 */
	public ControlSpace getControlSpaceByName(String spatialControlName)
	{
		String spatialControlNameParamValue = spatialControlName;
		long returnValue = getControlSpaceByName_EVString(this.nativeObject.pointer, spatialControlNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private long getControlSpaceByControl_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 获取指定EarthView::World::Spatial::Atlas::ISpatialControl的CControlSpace对象。
	 * @param ctrl EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 * @return CControlSpace对象指针。
	 */
	public ControlSpace getControlSpaceByControl(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		long returnValue = getControlSpaceByControl_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		ControlSpace __returnValue = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate, "CControlSpace");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ControlSpace)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlSpace");
		}
		return __returnValue;
	}
	native private boolean setActiveSpatialControl_ISpatialControl(long pNativeObject, long spatialControl);
	/**
	 * 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @param spatialControl EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 * @return 设置是否成功。
	 */
	public boolean setActiveSpatialControl(com.earthview.world.spatial.atlas.Ispatialcontrol spatialControl)
	{
		long spatialControlParamValue = (spatialControl == null ? 0L : spatialControl.nativeObject.pointer);
		boolean returnValue = setActiveSpatialControl_ISpatialControl(this.nativeObject.pointer, spatialControlParamValue);
		return returnValue;
	}
	native private boolean setActiveSpatialControl_EVString(long pNativeObject, String spatialControlName);
	/**
	 * 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @param spatialControlName 名称。
	 * @return 设置是否成功。
	 */
	public boolean setActiveSpatialControl(String spatialControlName)
	{
		String spatialControlNameParamValue = spatialControlName;
		boolean returnValue = setActiveSpatialControl_EVString(this.nativeObject.pointer, spatialControlNameParamValue);
		return returnValue;
	}
	native private int getControlCount_void(long pNativeObject);
	/**
	 * 获取EarthView::World::Spatial::Atlas::ISpatialControl个数。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl个数。
	 */
	public int getControlCount()
	{
		int returnValue = getControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMapControlCount_void(long pNativeObject);
	/**
	 * 获取地图的个数。
	 * @return 地图的个数。
	 */
	public int getMapControlCount()
	{
		int returnValue = getMapControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGlobeControlCount_void(long pNativeObject);
	/**
	 * 获取球的个数。
	 * @return 球的个数。
	 */
	public int getGlobeControlCount()
	{
		int returnValue = getGlobeControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLayoutControlCount_void(long pNativeObject);
	/**
	 * 获取纸张布局的个数
	 * @return 纸张布局的个数
	 */
	public int getLayoutControlCount()
	{
		int returnValue = getLayoutControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getControl_int(long pNativeObject, int index);
	/**
	 * 获取指定index的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	 * @param index index。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getControl(int index)
	{
		int indexParamValue = index;
		long returnValue = getControl_int(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private boolean isSpatialExists_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 判断某EarthView::World::Spatial::Atlas::ISpatialControl是否存在，如果不在就不要弄它。
	 * @param ctrl EarthView::World::Spatial::Atlas::ISpatialControl对象指针。
	 * @return EarthView::World::Spatial::Atlas::ISpatialControl是否存在。
	 */
	public boolean isSpatialExists(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		boolean returnValue = isSpatialExists_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
		return returnValue;
	}
	native private static long getSingleton_void();
	/**
	 * 获取单例对象引用。
	 */
	public static ViewManager getSingleton()
	{
		long returnValue = getSingleton_void();
		ViewManager __returnValue = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate, "CViewManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ViewManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 获取单例对象指针。
	 */
	public static ViewManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		ViewManager __returnValue = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate, "CViewManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ViewManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewManager");
		}
		return __returnValue;
	}
	public ViewManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ViewManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ViewManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ViewManager obj = null;
 		if(baseObj instanceof ViewManager)
		{
			obj = (ViewManager)baseObj;
		} else {
			obj = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CViewManager");
			obj.increaseCast();
		}

		return obj;
	}
}
