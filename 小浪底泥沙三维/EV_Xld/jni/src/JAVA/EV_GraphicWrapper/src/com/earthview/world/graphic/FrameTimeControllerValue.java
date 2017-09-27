package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
//// CController Values
////-----------------------------------------------------------------------
public class FrameTimeControllerValue extends com.earthview.world.graphic.ControllerValue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrameTimeControllerValue", new FrameTimeControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFrameTimeControllerValueProxy", new FrameTimeControllerValueClassFactory());
	}

	public FrameTimeControllerValue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFrameTimeControllerValueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FrameTimeControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getValue_void(long pNativeObject);
	public double getValue()
	{
		double returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getValue_void_NoVirtual(long pNativeObject);
	protected double getValue_NoVirtual()
	{
		double returnValue = getValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setValue_Real(long pNativeObject, double value);
	public void setValue(double value)
	{
		double valueParamValue = value;
		setValue_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private void setValue_Real_NoVirtual(long pNativeObject, double value);
	protected void setValue_NoVirtual(double value)
	{
		double valueParamValue = value;
		setValue_Real_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getTimeFactor_void(long pNativeObject);
	public double getTimeFactor()
	{
		double returnValue = getTimeFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimeFactor_Real(long pNativeObject, double tf);
	public void setTimeFactor(double tf)
	{
		double tfParamValue = tf;
		setTimeFactor_Real(this.nativeObject.pointer, tfParamValue);
	}
	native private double getFrameDelay_void(long pNativeObject);
	public double getFrameDelay()
	{
		double returnValue = getFrameDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFrameDelay_Real(long pNativeObject, double fd);
	public void setFrameDelay(double fd)
	{
		double fdParamValue = fd;
		setFrameDelay_Real(this.nativeObject.pointer, fdParamValue);
	}
	native private double getElapsedTime_void(long pNativeObject);
	public double getElapsedTime()
	{
		double returnValue = getElapsedTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setElapsedTime_Real(long pNativeObject, double elapsedTime);
	public void setElapsedTime(double elapsedTime)
	{
		double elapsedTimeParamValue = elapsedTime;
		setElapsedTime_Real(this.nativeObject.pointer, elapsedTimeParamValue);
	}
	protected  boolean frameStarted_FrameEvent_callback(long evt)
	{
		com.earthview.world.graphic.FrameEvent evtParamValue = new com.earthview.world.graphic.FrameEvent(new InstancePointer(evt));
		boolean returnValue = frameStarted(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
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

	public static class InternalFrameListener extends com.earthview.world.graphic.FrameListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener", new InternalFrameListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrameTimeControllerValue::JCInternalFrameListenerProxy", new InternalFrameListenerClassFactory());
		}

		public InternalFrameListener(com.earthview.world.graphic.FrameTimeControllerValue ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCInternalFrameListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.FrameTimeControllerValue$InternalFrameListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean frameEnded_FrameEvent(long pNativeObject, long evt);
		public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
		{
			long evtParamValue = evt.nativeObject.pointer;
			boolean returnValue = frameEnded_FrameEvent(this.nativeObject.pointer, evtParamValue);
			return returnValue;
		}
		native private boolean frameEnded_FrameEvent_NoVirtual(long pNativeObject, long evt);
		protected boolean frameEnded_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
		{
			long evtParamValue = evt.nativeObject.pointer;
			boolean returnValue = frameEnded_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
			return returnValue;
		}

		native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
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

		public InternalFrameListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InternalFrameListener(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static InternalFrameListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InternalFrameListener obj = null;
 			if(baseObj instanceof InternalFrameListener)
			{
				obj = (InternalFrameListener)baseObj;
			} else {
				obj = new InternalFrameListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CInternalFrameListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InternalFrameListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InternalFrameListener emptyInstance = new InternalFrameListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  boolean frameEnded_FrameEvent_callback(long evt)
	{
		com.earthview.world.graphic.FrameEvent evtParamValue = new com.earthview.world.graphic.FrameEvent(new InstancePointer(evt));
		boolean returnValue = frameEnded(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean frameEnded_FrameEvent(long pNativeObject, long evt);
	public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameEnded_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameEnded_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameEnded_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameEnded_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  long getListenerPtr_void_callback()
	{
		com.earthview.world.graphic.FrameListener returnValue = getListenerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListenerPtr_void(long pNativeObject);
	////virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt);
	public com.earthview.world.graphic.FrameListener getListenerPtr()
	{
		long returnValue = getListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.FrameListener __returnValue = new com.earthview.world.graphic.FrameListener(CreatedWhenConstruct.CWC_NotToCreate, "CFrameListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFrameListener");
		}
		return __returnValue;
	}
	native private long getListenerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.FrameListener getListenerPtr_NoVirtual()
	{
		long returnValue = getListenerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.FrameListener __returnValue = new com.earthview.world.graphic.FrameListener(CreatedWhenConstruct.CWC_NotToCreate, "CFrameListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFrameListener");
		}
		return __returnValue;
	}

	public FrameTimeControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FrameTimeControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	native protected void register_getListenerPtr_void(long pNativeObject, String method);
	native protected void register_getValue_void(long pNativeObject, String method);
	native protected void register_setValue_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
			this.register_getListenerPtr_void(this.nativeObject.pointer, "getListenerPtr_void_callback");
			this.register_getValue_void(this.nativeObject.pointer, "getValue_void_callback");
			this.register_setValue_Real(this.nativeObject.pointer, "setValue_Real_callback");
		}
	}
	
	public static FrameTimeControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FrameTimeControllerValue obj = null;
 		if(baseObj instanceof FrameTimeControllerValue)
		{
			obj = (FrameTimeControllerValue)baseObj;
		} else {
			obj = new FrameTimeControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFrameTimeControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
