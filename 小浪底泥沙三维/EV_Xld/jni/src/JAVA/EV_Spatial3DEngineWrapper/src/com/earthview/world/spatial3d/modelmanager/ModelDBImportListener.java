package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDBImportListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelDBImportListener", new ModelDBImportListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCModelDBImportListenerProxy", new ModelDBImportListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ModelDBImportListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelDBImportListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.ModelDBImportListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		beginImport(nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}

	native private void beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(long pNativeObject, String name, long curNo, long num, boolean success, String msg);
	/**
	 * 模型导入开始侦听函数
	 * @param name 名称
	 * @param curNo 当前个数
	 * @param num 总个数
	 * @param  是否成功
	 * @param msg 输出信息
	 */
	public void beginImport(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.nativeObject.pointer, nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}
	native private void beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(long pNativeObject, String name, long curNo, long num, boolean success, String msg);
	protected void beginImport_NoVirtual(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}

	protected  void endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		endImport(nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}

	native private void endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(long pNativeObject, String name, long curNo, long num, boolean success, String msg);
	/**
	 * 模型导入结束侦听函数
	 * @param name 名称
	 * @param curNo 当前个数
	 * @param num 总个数
	 * @param  是否成功
	 * @param msg 输出信息
	 */
	public void endImport(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.nativeObject.pointer, nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}
	native private void endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(long pNativeObject, String name, long curNo, long num, boolean success, String msg);
	protected void endImport_NoVirtual(String name, long curNo, long num, boolean success, String msg)
	{
		String nameParamValue = name;
		long curNoParamValue = curNo;
		long numParamValue = num;
		boolean successParamValue = success;
		String msgParamValue = msg;
		endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, curNoParamValue, numParamValue, successParamValue, msgParamValue);
	}

	public ModelDBImportListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDBImportListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(long pNativeObject, String method);
	native protected void register_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.nativeObject.pointer, "beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback");
			this.register_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString(this.nativeObject.pointer, "endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback");
		}
	}
	
	public static ModelDBImportListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDBImportListener obj = null;
 		if(baseObj instanceof ModelDBImportListener)
		{
			obj = (ModelDBImportListener)baseObj;
		} else {
			obj = new ModelDBImportListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDBImportListener");
			obj.increaseCast();
		}

		return obj;
	}
}
