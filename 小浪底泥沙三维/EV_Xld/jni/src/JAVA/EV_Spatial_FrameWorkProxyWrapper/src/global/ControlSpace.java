package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlSpace extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("CControlSpace", new ControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCControlSpaceProxy", new ControlSpaceClassFactory());
	}

	native private long getToolBarCount_void(long pNativeObject);
	/**
	 * 获取工具栏的数量
	 * @param  
	 * @return 数量
	 */
	public long getToolBarCount()
	{
		long returnValue = getToolBarCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getToolBar_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的工具栏
	 * @param index 索引
	 * @return 工具栏
	 */
	public com.earthview.world.spatial.systemui.Itoolbar getToolBar(long index)
	{
		long indexParamValue = index;
		long returnValue = getToolBar_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itoolbar __returnValue = new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate, "IToolBar");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itoolbar)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IToolBar");
		}
		return __returnValue;
	}
	native private long getToolBarForType_ev_int32(long pNativeObject, int type);
	/**
	 * 获取指定类型的工具栏
	 * @param type 工具栏类型
	 * @return 工具栏
	 */
	public com.earthview.world.spatial.systemui.Itoolbar getToolBarForType(int type)
	{
		int typeParamValue = type;
		long returnValue = getToolBarForType_ev_int32(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itoolbar __returnValue = new com.earthview.world.spatial.systemui.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate, "IToolBar");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itoolbar)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IToolBar");
		}
		return __returnValue;
	}
	native private long getMenuCount_void(long pNativeObject);
	/**
	 * 获取菜单数量
	 * @param  
	 * @return 数量
	 */
	public long getMenuCount()
	{
		long returnValue = getMenuCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMenu_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的菜单
	 * @param index 索引
	 * @return 菜单
	 */
	public com.earthview.world.spatial.systemui.Imenu getMenu(long index)
	{
		long indexParamValue = index;
		long returnValue = getMenu_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Imenu __returnValue = new com.earthview.world.spatial.systemui.Imenu(CreatedWhenConstruct.CWC_NotToCreate, "IMenu");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Imenu)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMenu");
		}
		return __returnValue;
	}
	native private long getControl_void(long pNativeObject);
	/**
	 * 获取与之相关联的控件
	 * @param  
	 * @return 控件
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getControl()
	{
		long returnValue = getControl_void(this.nativeObject.pointer);
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
	native private void initialize_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void initialize()
	{
		initialize_void(this.nativeObject.pointer);
	}
	native private void initialize_ev_uint32(long pNativeObject, long toolbarEnabled);
	/**
	 * 初始化
	 * @param  
	 */
	public void initialize(long toolbarEnabled)
	{
		long toolbarEnabledParamValue = toolbarEnabled;
		initialize_ev_uint32(this.nativeObject.pointer, toolbarEnabledParamValue);
	}
	native private long getCommandPool_void(long pNativeObject);
	/**
	 * 获取命令池
	 * @param  
	 * @return 命令池
	 */
	public CommandPool getCommandPool()
	{
		long returnValue = getCommandPool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		CommandPool __returnValue = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate, "CCommandPool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (CommandPool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCommandPool");
		}
		return __returnValue;
	}
	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件响应
	 * @param e 事件
	 * @return 如果处理该事件则返回true,反之则否
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

	public ControlSpace(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlSpace(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static ControlSpace fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlSpace obj = null;
 		if(baseObj instanceof ControlSpace)
		{
			obj = (ControlSpace)baseObj;
		} else {
			obj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlSpace");
			obj.increaseCast();
		}

		return obj;
	}
}
