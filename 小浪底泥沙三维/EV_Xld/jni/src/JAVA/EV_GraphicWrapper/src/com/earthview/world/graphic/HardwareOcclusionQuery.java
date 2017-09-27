package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareOcclusionQuery extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareOcclusionQuery", new HardwareOcclusionQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareOcclusionQueryProxy", new HardwareOcclusionQueryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public HardwareOcclusionQuery() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareOcclusionQueryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareOcclusionQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void beginOcclusionQuery_void_callback()
	{
		beginOcclusionQuery();
	}

	native private void beginOcclusionQuery_void(long pNativeObject);
	/**
	 * 开始阻塞查询
	 * @param  
	 */
	public void beginOcclusionQuery()
	{
		beginOcclusionQuery_void(this.nativeObject.pointer);
	}
	native private void beginOcclusionQuery_void_NoVirtual(long pNativeObject);
	protected void beginOcclusionQuery_NoVirtual()
	{
		beginOcclusionQuery_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void endOcclusionQuery_void_callback()
	{
		endOcclusionQuery();
	}

	native private void endOcclusionQuery_void(long pNativeObject);
	/**
	 * 结束阻塞查询
	 * @param  
	 */
	public void endOcclusionQuery()
	{
		endOcclusionQuery_void(this.nativeObject.pointer);
	}
	native private void endOcclusionQuery_void_NoVirtual(long pNativeObject);
	protected void endOcclusionQuery_NoVirtual()
	{
		endOcclusionQuery_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean pullOcclusionQuery_ev_uint32_callback(long NumOfFragments)
	{
		UIntegerPointer NumOfFragmentsParamValue = new UIntegerPointer(new InstancePointer(NumOfFragments));
		boolean returnValue = pullOcclusionQuery(NumOfFragmentsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pullOcclusionQuery_ev_uint32(long pNativeObject, long NumOfFragments);
	/**
	 * 是否拖入阻塞查询
	 * @param NumOfFragments 一小段的编号
	 * @return 拖入返回true，否则返回false
	 */
	public boolean pullOcclusionQuery(UIntegerPointer NumOfFragments)
	{
		long NumOfFragmentsParamValue = NumOfFragments.nativeObject.pointer;
		boolean returnValue = pullOcclusionQuery_ev_uint32(this.nativeObject.pointer, NumOfFragmentsParamValue);
		return returnValue;
	}
	native private boolean pullOcclusionQuery_ev_uint32_NoVirtual(long pNativeObject, long NumOfFragments);
	protected boolean pullOcclusionQuery_NoVirtual(UIntegerPointer NumOfFragments)
	{
		long NumOfFragmentsParamValue = NumOfFragments.nativeObject.pointer;
		boolean returnValue = pullOcclusionQuery_ev_uint32_NoVirtual(this.nativeObject.pointer, NumOfFragmentsParamValue);
		return returnValue;
	}

	native private long getLastQuerysPixelcount_void(long pNativeObject);
	/**
	 * 获得最后查询像素总数
	 * @param  
	 * @return 像素总数
	 */
	public long getLastQuerysPixelcount()
	{
		long returnValue = getLastQuerysPixelcount_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean isStillOutstanding_void_callback()
	{
		boolean returnValue = isStillOutstanding();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isStillOutstanding_void(long pNativeObject);
	/**
	 * 正在查询时，是否任然是显着的
	 * @param  
	 * @return 显着返回true，否则返回false
	 */
	public boolean isStillOutstanding()
	{
		boolean returnValue = isStillOutstanding_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isStillOutstanding_void_NoVirtual(long pNativeObject);
	protected boolean isStillOutstanding_NoVirtual()
	{
		boolean returnValue = isStillOutstanding_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public HardwareOcclusionQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareOcclusionQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_beginOcclusionQuery_void(long pNativeObject, String method);
	native protected void register_endOcclusionQuery_void(long pNativeObject, String method);
	native protected void register_pullOcclusionQuery_ev_uint32(long pNativeObject, String method);
	native protected void register_isStillOutstanding_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_beginOcclusionQuery_void(this.nativeObject.pointer, "beginOcclusionQuery_void_callback");
			this.register_endOcclusionQuery_void(this.nativeObject.pointer, "endOcclusionQuery_void_callback");
			this.register_pullOcclusionQuery_ev_uint32(this.nativeObject.pointer, "pullOcclusionQuery_ev_uint32_callback");
			this.register_isStillOutstanding_void(this.nativeObject.pointer, "isStillOutstanding_void_callback");
		}
	}
	
	public static HardwareOcclusionQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareOcclusionQuery obj = null;
 		if(baseObj instanceof HardwareOcclusionQuery)
		{
			obj = (HardwareOcclusionQuery)baseObj;
		} else {
			obj = new HardwareOcclusionQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareOcclusionQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
