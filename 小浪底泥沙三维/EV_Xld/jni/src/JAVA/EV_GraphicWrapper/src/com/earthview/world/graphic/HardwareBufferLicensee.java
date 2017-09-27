package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 硬件缓存许可类定义内存中缓存许可的相关操作
 */
public class HardwareBufferLicensee extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareBufferLicensee", new HardwareBufferLicenseeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareBufferLicenseeProxy", new HardwareBufferLicenseeClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public HardwareBufferLicensee() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareBufferLicenseeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareBufferLicensee".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void licenseExpired_CHardwareBuffer_callback(long buffer)
	{
		com.earthview.world.graphic.HardwareBuffer bufferParamValue = (buffer == 0L ? null : new com.earthview.world.graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate));
		if(bufferParamValue != null)
		{
		bufferParamValue.setDelegate(true);
		bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		IClassFactory bufferParamValueClassFactory = GlobalClassFactoryMap.get(bufferParamValue.getCppInstanceTypeName());
		if (bufferParamValueClassFactory != null)
		{
			bufferParamValue.setDelegate(true);
			bufferParamValue = (com.earthview.world.graphic.HardwareBuffer)bufferParamValueClassFactory.create();
			bufferParamValue.setDelegate(true);
			bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		}
		}
		licenseExpired(bufferParamValue);
	}

	native private void licenseExpired_CHardwareBuffer(long pNativeObject, long buffer);
	/**
	 * 许可期限
	 * @param buffer 缓存
	 */
	public void licenseExpired(com.earthview.world.graphic.HardwareBuffer buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		licenseExpired_CHardwareBuffer(this.nativeObject.pointer, bufferParamValue);
	}
	native private void licenseExpired_CHardwareBuffer_NoVirtual(long pNativeObject, long buffer);
	protected void licenseExpired_NoVirtual(com.earthview.world.graphic.HardwareBuffer buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		licenseExpired_CHardwareBuffer_NoVirtual(this.nativeObject.pointer, bufferParamValue);
	}

	public HardwareBufferLicensee(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareBufferLicensee(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_licenseExpired_CHardwareBuffer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_licenseExpired_CHardwareBuffer(this.nativeObject.pointer, "licenseExpired_CHardwareBuffer_callback");
		}
	}
	
	public static HardwareBufferLicensee fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareBufferLicensee obj = null;
 		if(baseObj instanceof HardwareBufferLicensee)
		{
			obj = (HardwareBufferLicensee)baseObj;
		} else {
			obj = new HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareBufferLicensee");
			obj.increaseCast();
		}

		return obj;
	}
}
