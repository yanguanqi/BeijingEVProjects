package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 标牌遮蔽计算监听对象
 */
public class ScutcheonTextListener extends com.earthview.world.graphic.FrameListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener", new ScutcheonTextListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCScutcheonTextListenerProxy", new ScutcheonTextListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_control EarthView::World::Spatial3D::Controls::CGlobeControl控件
	 */
	public ScutcheonTextListener(com.earthview.world.spatial3d.controls.GlobeControl ref_control) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_controlPtr = new BasePointer(ref_control);
		list.add("ref_control", ref_controlPtr.get());
		Create("JCScutcheonTextListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.ScutcheonTextListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧监听
	 * @param evt 帧事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameStarted_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameStarted_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	native private void addScutcheonText_CScutcheonText(long pNativeObject, long ref_scutcheonText);
	/**
	 * 添加需要考虑遮蔽的标牌对象
	 * @param ref_movable 标牌对象，需要保证其生命周期在进行遮蔽判断期间一直存在，直到移除标牌对象、或不再进行遮蔽判断后才可以将标牌对象释放
	 */
	public void addScutcheonText(com.earthview.industryengine.industrygraphic.ScutcheonText ref_scutcheonText)
	{
		long ref_scutcheonTextParamValue = (ref_scutcheonText == null ? 0L : ref_scutcheonText.nativeObject.pointer);
		addScutcheonText_CScutcheonText(this.nativeObject.pointer, ref_scutcheonTextParamValue);
	}
	native private void removeScutcheonText_CScutcheonText(long pNativeObject, long scutcheonText);
	/**
	 * 移除不再考虑遮蔽的标牌对象
	 * @param ref_movable 标牌对象
	 */
	public void removeScutcheonText(com.earthview.industryengine.industrygraphic.ScutcheonText scutcheonText)
	{
		long scutcheonTextParamValue = (scutcheonText == null ? 0L : scutcheonText.nativeObject.pointer);
		removeScutcheonText_CScutcheonText(this.nativeObject.pointer, scutcheonTextParamValue);
	}
	public ScutcheonTextListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScutcheonTextListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 视口更新之后调用
	 * @param evt 
	 */
	public boolean frameRenderingQueued(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameRenderingQueued_NoVirtual(evt);
	}
	/**
	 * 帧渲染之后被调用
	 * @param evt 
	 */
	public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameEnded_NoVirtual(evt);
	}
	
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static ScutcheonTextListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScutcheonTextListener obj = null;
 		if(baseObj instanceof ScutcheonTextListener)
		{
			obj = (ScutcheonTextListener)baseObj;
		} else {
			obj = new ScutcheonTextListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScutcheonTextListener");
			obj.increaseCast();
		}

		return obj;
	}
}
