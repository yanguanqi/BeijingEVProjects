package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 工作命令管理器
 */
public class WorkCommandManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CWorkCommandManager", new WorkCommandManagerClassFactory());
	}

	public WorkCommandManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWorkCommandManager", null);
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
	native private long getCommand_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的操作数据
	 * @param index 索引
	 * @return 操作数据
	 */
	public com.earthview.world.spatial.geodataset.WorkCommand getCommand(long index)
	{
		long indexParamValue = index;
		long returnValue = getCommand_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.WorkCommand __returnValue = new com.earthview.world.spatial.geodataset.WorkCommand(CreatedWhenConstruct.CWC_NotToCreate, "CWorkCommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.WorkCommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkCommand");
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
	native private long redo_void(long pNativeObject);
	/**
	 * 执行重做
	 * @param  
	 * @return 操作数据
	 */
	public com.earthview.world.spatial.geodataset.WorkCommand redo()
	{
		long returnValue = redo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.WorkCommand __returnValue = new com.earthview.world.spatial.geodataset.WorkCommand(CreatedWhenConstruct.CWC_NotToCreate, "CWorkCommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.WorkCommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkCommand");
		}
		return __returnValue;
	}
	native private long undo_void(long pNativeObject);
	/**
	 * 执行回退
	 * @param  
	 * @return 操作数据
	 */
	public com.earthview.world.spatial.geodataset.WorkCommand undo()
	{
		long returnValue = undo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.WorkCommand __returnValue = new com.earthview.world.spatial.geodataset.WorkCommand(CreatedWhenConstruct.CWC_NotToCreate, "CWorkCommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.WorkCommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkCommand");
		}
		return __returnValue;
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
	native private long push_void(long pNativeObject);
	/**
	 * 添加一个操作命令
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.WorkCommand push()
	{
		long returnValue = push_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.WorkCommand __returnValue = new com.earthview.world.spatial.geodataset.WorkCommand(CreatedWhenConstruct.CWC_NotToCreate, "CWorkCommand");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.WorkCommand)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkCommand");
		}
		return __returnValue;
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
	public WorkCommandManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WorkCommandManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WorkCommandManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WorkCommandManager obj = null;
 		if(baseObj instanceof WorkCommandManager)
		{
			obj = (WorkCommandManager)baseObj;
		} else {
			obj = new WorkCommandManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWorkCommandManager");
			obj.increaseCast();
		}

		return obj;
	}
}
