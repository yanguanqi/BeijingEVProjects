package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 记录短暂混合缓存用途结构类定义这些缓冲器用途结构的相关操作
 */
public class TempBlendedBufferInfo extends com.earthview.world.graphic.HardwareBufferLicensee {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTempBlendedBufferInfo", new TempBlendedBufferInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTempBlendedBufferInfoProxy", new TempBlendedBufferInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public TempBlendedBufferInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTempBlendedBufferInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TempBlendedBufferInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void extractFrom_CVertexData(long pNativeObject, long sourceData);
	/**
	 * 从已给顶点数据中获取有效方法和提取信息
	 * @param sourceData 资源数据
	 */
	public void extractFrom(com.earthview.world.graphic.VertexData sourceData)
	{
		long sourceDataParamValue = (sourceData == null ? 0L : sourceData.nativeObject.pointer);
		extractFrom_CVertexData(this.nativeObject.pointer, sourceDataParamValue);
	}
	native private void checkoutTempCopies_ev_bool_ev_bool(long pNativeObject, boolean positions, boolean normals);
	/**
	 * 检验临时副本
	 * @param positions 位置是否正确
	 * @param normals 是否正常
	 */
	public void checkoutTempCopies(boolean positions, boolean normals)
	{
		boolean positionsParamValue = positions;
		boolean normalsParamValue = normals;
		checkoutTempCopies_ev_bool_ev_bool(this.nativeObject.pointer, positionsParamValue, normalsParamValue);
	}
	native private void checkoutTempCopies_ev_bool(long pNativeObject, boolean positions);
	/**
	 * 检验临时副本
	 * @param positions 位置是否正确
	 */
	public void checkoutTempCopies(boolean positions)
	{
		boolean positionsParamValue = positions;
		checkoutTempCopies_ev_bool(this.nativeObject.pointer, positionsParamValue);
	}
	native private void checkoutTempCopies_void(long pNativeObject);
	/**
	 * 检验临时副本
	 * @param  
	 */
	public void checkoutTempCopies()
	{
		checkoutTempCopies_void(this.nativeObject.pointer);
	}
	native private void bindTempCopies_CVertexData_ev_bool(long pNativeObject, long targetData, boolean suppressHardwareUpload);
	/**
	 * 绑定临时复制情况
	 * @param targetData 顶点目标数据
	 * @param suppressHardwareUpload 是否禁止缓存上传
	 */
	public void bindTempCopies(com.earthview.world.graphic.VertexData targetData, boolean suppressHardwareUpload)
	{
		long targetDataParamValue = (targetData == null ? 0L : targetData.nativeObject.pointer);
		boolean suppressHardwareUploadParamValue = suppressHardwareUpload;
		bindTempCopies_CVertexData_ev_bool(this.nativeObject.pointer, targetDataParamValue, suppressHardwareUploadParamValue);
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

	native private boolean buffersCheckedOut_ev_bool_ev_bool(long pNativeObject, boolean positions, boolean normals);
	/**
	 * 是否缓存检验
	 * @param positions 位置是否正确
	 * @param normals 是否正常
	 * @return 检验返回true，否则返回false
	 */
	public boolean buffersCheckedOut(boolean positions, boolean normals)
	{
		boolean positionsParamValue = positions;
		boolean normalsParamValue = normals;
		boolean returnValue = buffersCheckedOut_ev_bool_ev_bool(this.nativeObject.pointer, positionsParamValue, normalsParamValue);
		return returnValue;
	}
	native private boolean buffersCheckedOut_ev_bool(long pNativeObject, boolean positions);
	/**
	 * 是否缓存检验
	 * @param positions 位置是否正确
	 * @return 检验返回true，否则返回false
	 */
	public boolean buffersCheckedOut(boolean positions)
	{
		boolean positionsParamValue = positions;
		boolean returnValue = buffersCheckedOut_ev_bool(this.nativeObject.pointer, positionsParamValue);
		return returnValue;
	}
	native private boolean buffersCheckedOut_void(long pNativeObject);
	/**
	 * 是否缓存检验
	 * @param  
	 * @return 检验返回true，否则返回false
	 */
	public boolean buffersCheckedOut()
	{
		boolean returnValue = buffersCheckedOut_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TempBlendedBufferInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TempBlendedBufferInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_licenseExpired_CHardwareBuffer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_licenseExpired_CHardwareBuffer(this.nativeObject.pointer, "licenseExpired_CHardwareBuffer_callback");
		}
	}
	
	public static TempBlendedBufferInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TempBlendedBufferInfo obj = null;
 		if(baseObj instanceof TempBlendedBufferInfo)
		{
			obj = (TempBlendedBufferInfo)baseObj;
		} else {
			obj = new TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTempBlendedBufferInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
