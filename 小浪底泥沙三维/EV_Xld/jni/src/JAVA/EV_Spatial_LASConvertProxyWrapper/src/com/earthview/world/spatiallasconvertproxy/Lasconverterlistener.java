package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点云数据转换进度监听类
 */
public class Lasconverterlistener extends com.earthview.world.spatiallasconvertproxy.LasLODGenerateListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLASConverterListener", new LasconverterlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::JCLASConverterListenerProxy", new LasconverterlistenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Lasconverterlistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLASConverterListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatiallasconvertproxy.Lasconverterlistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setInformation_EVString_ev_int32_EVString_ev_int32_callback(String totalInfo, int totalPercent, String lasInfo, int lasPercent)
	{
		String totalInfoParamValue = totalInfo;
		int totalPercentParamValue = totalPercent;
		String lasInfoParamValue = lasInfo;
		int lasPercentParamValue = lasPercent;
		setInformation(totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}

	native private void setInformation_EVString_ev_int32_EVString_ev_int32(long pNativeObject, String totalInfo, int totalPercent, String lasInfo, int lasPercent);
	/// <summary>
	/// 消息传出
	/// </summary>
	/// <param name=totalInfo"">总体消息内容</param>
	/// <param name=totalPercent"">总体进程</param>
	/// <param name=lasInfo"">单个消息内容</param>
	/// <param name=lasPercent"">单个进程</param>
	/// <returns></returns>
	public void setInformation(String totalInfo, int totalPercent, String lasInfo, int lasPercent)
	{
		String totalInfoParamValue = totalInfo;
		int totalPercentParamValue = totalPercent;
		String lasInfoParamValue = lasInfo;
		int lasPercentParamValue = lasPercent;
		setInformation_EVString_ev_int32_EVString_ev_int32(this.nativeObject.pointer, totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}
	native private void setInformation_EVString_ev_int32_EVString_ev_int32_NoVirtual(long pNativeObject, String totalInfo, int totalPercent, String lasInfo, int lasPercent);
	protected void setInformation_NoVirtual(String totalInfo, int totalPercent, String lasInfo, int lasPercent)
	{
		String totalInfoParamValue = totalInfo;
		int totalPercentParamValue = totalPercent;
		String lasInfoParamValue = lasInfo;
		int lasPercentParamValue = lasPercent;
		setInformation_EVString_ev_int32_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}

	protected  void getInformation_EVString_ev_int32_EVString_ev_int32_callback(long totalInfo, long totalPercent, long lasInfo, long lasPercent)
	{
		StringPointer totalInfoParamValue = new StringPointer(new InstancePointer(totalInfo));
		IntegerPointer totalPercentParamValue = new IntegerPointer(new InstancePointer(totalPercent));
		StringPointer lasInfoParamValue = new StringPointer(new InstancePointer(lasInfo));
		IntegerPointer lasPercentParamValue = new IntegerPointer(new InstancePointer(lasPercent));
		getInformation(totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}

	native private void getInformation_EVString_ev_int32_EVString_ev_int32(long pNativeObject, long totalInfo, long totalPercent, long lasInfo, long lasPercent);
	/// <summary>
	/// 消息接收
	/// </summary>
	/// <param name=totalInfo"">总体消息内容</param>
	/// <param name=totalPercent"">总体进程</param>
	/// <param name=lasInfo"">单个消息内容</param>
	/// <param name=lasPercent"">单个进程</param>
	/// <returns></returns>
	public void getInformation(StringPointer totalInfo, IntegerPointer totalPercent, StringPointer lasInfo, IntegerPointer lasPercent)
	{
		long totalInfoParamValue = totalInfo.nativeObject.pointer;
		long totalPercentParamValue = totalPercent.nativeObject.pointer;
		long lasInfoParamValue = lasInfo.nativeObject.pointer;
		long lasPercentParamValue = lasPercent.nativeObject.pointer;
		getInformation_EVString_ev_int32_EVString_ev_int32(this.nativeObject.pointer, totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}
	native private void getInformation_EVString_ev_int32_EVString_ev_int32_NoVirtual(long pNativeObject, long totalInfo, long totalPercent, long lasInfo, long lasPercent);
	protected void getInformation_NoVirtual(StringPointer totalInfo, IntegerPointer totalPercent, StringPointer lasInfo, IntegerPointer lasPercent)
	{
		long totalInfoParamValue = totalInfo.nativeObject.pointer;
		long totalPercentParamValue = totalPercent.nativeObject.pointer;
		long lasInfoParamValue = lasInfo.nativeObject.pointer;
		long lasPercentParamValue = lasPercent.nativeObject.pointer;
		getInformation_EVString_ev_int32_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, totalInfoParamValue, totalPercentParamValue, lasInfoParamValue, lasPercentParamValue);
	}

	public Lasconverterlistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Lasconverterlistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void processMsg(String msg)
	{
		super.processMsg_NoVirtual(msg);
	}
	public void paused()
	{
		super.paused_NoVirtual();
	}
	public void finished()
	{
		super.finished_NoVirtual();
	}
	public void processProgress(long total, long current)
	{
		super.processProgress_NoVirtual(total, current);
	}
	
	native protected void register_setInformation_EVString_ev_int32_EVString_ev_int32(long pNativeObject, String method);
	native protected void register_getInformation_EVString_ev_int32_EVString_ev_int32(long pNativeObject, String method);
	native protected void register_processMsg_EVString(long pNativeObject, String method);
	native protected void register_paused_void(long pNativeObject, String method);
	native protected void register_finished_void(long pNativeObject, String method);
	native protected void register_processProgress_ev_uint32_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setInformation_EVString_ev_int32_EVString_ev_int32(this.nativeObject.pointer, "setInformation_EVString_ev_int32_EVString_ev_int32_callback");
			this.register_getInformation_EVString_ev_int32_EVString_ev_int32(this.nativeObject.pointer, "getInformation_EVString_ev_int32_EVString_ev_int32_callback");
			this.register_processMsg_EVString(this.nativeObject.pointer, "processMsg_EVString_callback");
			this.register_paused_void(this.nativeObject.pointer, "paused_void_callback");
			this.register_finished_void(this.nativeObject.pointer, "finished_void_callback");
			this.register_processProgress_ev_uint32_ev_uint32(this.nativeObject.pointer, "processProgress_ev_uint32_ev_uint32_callback");
		}
	}
	
	public static Lasconverterlistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Lasconverterlistener obj = null;
 		if(baseObj instanceof Lasconverterlistener)
		{
			obj = (Lasconverterlistener)baseObj;
		} else {
			obj = new Lasconverterlistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLASConverterListener");
			obj.increaseCast();
		}

		return obj;
	}
}
