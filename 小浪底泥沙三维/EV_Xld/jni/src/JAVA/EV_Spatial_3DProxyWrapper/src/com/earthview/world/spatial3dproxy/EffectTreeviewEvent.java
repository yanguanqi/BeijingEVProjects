package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效树事件处理类
 */
public class EffectTreeviewEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectTreeviewEvent", new EffectTreeviewEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 类型标识
	 */
	public EffectTreeviewEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CEffectTreeviewEvent", list);
	}

	native private int getNodeType_void(long pNativeObject);
	/**
	 * 得到节点类型
	 * @param  
	 * @return 返回节点类型
	 */
	public int getNodeType()
	{
		int returnValue = getNodeType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNodeType_ev_int32(long pNativeObject, int nodetype);
	/**
	 * 设置节点类型
	 * @param nodetype 节点类型
	 */
	public void setNodeType(int nodetype)
	{
		int nodetypeParamValue = nodetype;
		setNodeType_ev_int32(this.nativeObject.pointer, nodetypeParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 得到名称
	 * @param  
	 * @return 返回名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 * @param EVString 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getID_void(long pNativeObject);
	/**
	 * 得到ID
	 * @param  
	 * @return 返回ID名称
	 */
	public String getID()
	{
		String returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setID_EVString(long pNativeObject, String id);
	/**
	 * 设置ID
	 * @param EVString id名称
	 */
	public void setID(String id)
	{
		String idParamValue = id;
		setID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private boolean getResponseState_void(long pNativeObject);
	/**
	 * 得到请求状态
	 * @param  
	 * @return 返回请求状态是否成功
	 */
	public boolean getResponseState()
	{
		boolean returnValue = getResponseState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResponseState_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置请求状态
	 * @param state 设置请求状态
	 */
	public void setResponseState(boolean state)
	{
		boolean stateParamValue = state;
		setResponseState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private void setPercent_ev_uint32(long pNativeObject, long percent);
	/**
	 * 设置事件处理百分比
	 * @param percent 百分比
	 */
	public void setPercent(long percent)
	{
		long percentParamValue = percent;
		setPercent_ev_uint32(this.nativeObject.pointer, percentParamValue);
	}
	native private long getPercent_void(long pNativeObject);
	/**
	 * 得到事件处理百分比
	 * @param  
	 * @return 返回事件百分比
	 */
	public long getPercent()
	{
		long returnValue = getPercent_void(this.nativeObject.pointer);
		return returnValue;
	}
	public EffectTreeviewEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectTreeviewEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectTreeviewEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectTreeviewEvent obj = null;
 		if(baseObj instanceof EffectTreeviewEvent)
		{
			obj = (EffectTreeviewEvent)baseObj;
		} else {
			obj = new EffectTreeviewEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectTreeviewEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
