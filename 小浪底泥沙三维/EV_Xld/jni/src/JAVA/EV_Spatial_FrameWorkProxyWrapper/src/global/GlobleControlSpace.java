package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobleControlSpace extends ControlSpace {
	
	static {
		GlobalClassFactoryMap.put("CGlobleControlSpace", new GlobleControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCGlobleControlSpaceProxy", new GlobleControlSpaceClassFactory());
	}

	public GlobleControlSpace(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCGlobleControlSpaceProxy", list, true);
		this.registerCallback();
		if (!"global.GlobleControlSpace".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public GlobleControlSpace(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobleControlSpace(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		return super.onEvent_NoVirtual(e);
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
	
	public static GlobleControlSpace fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobleControlSpace obj = null;
 		if(baseObj instanceof GlobleControlSpace)
		{
			obj = (GlobleControlSpace)baseObj;
		} else {
			obj = new GlobleControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobleControlSpace");
			obj.increaseCast();
		}

		return obj;
	}
}
