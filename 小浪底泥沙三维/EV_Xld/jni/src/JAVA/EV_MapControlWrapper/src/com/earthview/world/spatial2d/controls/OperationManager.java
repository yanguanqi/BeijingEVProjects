package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作管理器
 */
public class OperationManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::COperationManager", new OperationManagerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public OperationManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COperationManager", null);
	}

	native private boolean canRedo_void(long pNativeObject);
	/**
	 * 判断是否支持"重做"操作
	 * @param  
	 * @return 如果支持"重做"则返回true,反之则否
	 */
	public boolean canRedo()
	{
		boolean returnValue = canRedo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canUndo_void(long pNativeObject);
	/**
	 * 判断是否支持"回退"操作
	 * @param  
	 * @return 如果支持"回退"操作就返回true,反之则否
	 */
	public boolean canUndo()
	{
		boolean returnValue = canUndo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCount_void(long pNativeObject);
	/**
	 * 获取操作数据的数量
	 * @param  
	 * @return 数量
	 */
	public int getCount()
	{
		int returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOperation_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的操作
	 * @param index 索引
	 * @return 操作数据
	 */
	public com.earthview.world.spatial2d.controls.Operation getOperation(long index)
	{
		long indexParamValue = index;
		long returnValue = getOperation_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.Operation __returnValue = new com.earthview.world.spatial2d.controls.Operation(CreatedWhenConstruct.CWC_NotToCreate, "COperation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.Operation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COperation");
		}
		return __returnValue;
	}
	native private int getUndoLimit_void(long pNativeObject);
	/**
	 * 获取回退次数
	 * @param  
	 * @return 次数
	 */
	public int getUndoLimit()
	{
		int returnValue = getUndoLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUndoLimit_ev_uint32(long pNativeObject, long limit);
	/**
	 * 设置回退次数
	 * @param limit 次数限制
	 */
	public void setUndoLimit(long limit)
	{
		long limitParamValue = limit;
		setUndoLimit_ev_uint32(this.nativeObject.pointer, limitParamValue);
	}
	native private void redo_void(long pNativeObject);
	/**
	 * 执行重做
	 * @param  
	 */
	public void redo()
	{
		redo_void(this.nativeObject.pointer);
	}
	native private void undo_void(long pNativeObject);
	/**
	 * 执行回退
	 * @param  
	 */
	public void undo()
	{
		undo_void(this.nativeObject.pointer);
	}
	native private void beginMacro_void(long pNativeObject);
	/**
	 * 开启编辑宏,即"组操作"
	 * @param  
	 */
	public void beginMacro()
	{
		beginMacro_void(this.nativeObject.pointer);
	}
	native private void endMacro_void(long pNativeObject);
	/**
	 * 结束编辑宏,把在编辑宏中所做的所有操作合为一个操作,即最后一个操作
	 * @param  
	 */
	public void endMacro()
	{
		endMacro_void(this.nativeObject.pointer);
	}
	native private boolean isInMacro_void(long pNativeObject);
	/**
	 * 检测是否在编辑宏中
	 * @param  
	 * @return 如果是,则返回true,反之则否
	 */
	public boolean isInMacro()
	{
		boolean returnValue = isInMacro_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void abortMacro_void(long pNativeObject);
	/**
	 * 废弃编辑宏,即在编辑宏中的所有操作都清除掉
	 * @param  
	 */
	public void abortMacro()
	{
		abortMacro_void(this.nativeObject.pointer);
	}
	native private int getCurrentIndex_void(long pNativeObject);
	/**
	 * 获取当前的编辑索引
	 * @param  
	 * @return 索引
	 */
	public int getCurrentIndex()
	{
		int returnValue = getCurrentIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean push_COperation(long pNativeObject, long operation);
	/**
	 * 添加一个操作命令
	 * @param  
	 */
	public boolean push(com.earthview.world.spatial2d.controls.Operation operation)
	{
		long operationParamValue = (operation == null ? 0L : operation.nativeObject.pointer);
		boolean returnValue = push_COperation(this.nativeObject.pointer, operationParamValue);
		return returnValue;
	}
	native private boolean isPushBlocked_void(long pNativeObject);
	/**
	 * 判断压栈操作是否被阻止
	 * @param  
	 */
	public boolean isPushBlocked()
	{
		boolean returnValue = isPushBlocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有的操作命令
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void registerObserver_IIndexObserver(long pNativeObject, long observer);
	/**
	 * 注册观察者
	 * @param observer 观察者
	 */
	public void registerObserver(com.earthview.world.spatial2d.controls.Iindexobserver observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		registerObserver_IIndexObserver(this.nativeObject.pointer, observerParamValue);
	}
	native private void unregisterObserver_IIndexObserver(long pNativeObject, long observer);
	/**
	 * 取消注册
	 * @param observer 待反注册的观察者
	 */
	public void unregisterObserver(com.earthview.world.spatial2d.controls.Iindexobserver observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		unregisterObserver_IIndexObserver(this.nativeObject.pointer, observerParamValue);
	}
	public OperationManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OperationManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static OperationManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OperationManager obj = null;
 		if(baseObj instanceof OperationManager)
		{
			obj = (OperationManager)baseObj;
		} else {
			obj = new OperationManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COperationManager");
			obj.increaseCast();
		}

		return obj;
	}
}
