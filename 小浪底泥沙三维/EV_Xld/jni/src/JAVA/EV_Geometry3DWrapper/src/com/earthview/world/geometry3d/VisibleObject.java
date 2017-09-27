package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景中的可见对象抽象基类
 */
public class VisibleObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CVisibleObject", new VisibleObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCVisibleObjectProxy", new VisibleObjectClassFactory());
	}

	protected  long getNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNode_void(long pNativeObject);
	/**
	 * 获取节点
	 * @return true成功，false失败
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		long returnValue = getNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getNode_NoVirtual()
	{
		long returnValue = getNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  boolean isLoaded_void_callback()
	{
		boolean returnValue = isLoaded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 是否完成加载，需要重写
	 * @return true成功，false失败
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isLoaded_NoVirtual()
	{
		boolean returnValue = isLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isAttached_void_callback()
	{
		boolean returnValue = isAttached();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAttached_void(long pNativeObject);
	/**
	 * 是否完成挂接，需要重写
	 * @return true成功，false失败
	 */
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAttached_void_NoVirtual(long pNativeObject);
	protected boolean isAttached_NoVirtual()
	{
		boolean returnValue = isAttached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean load_void_callback()
	{
		boolean returnValue = load();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean load_void(long pNativeObject);
	/**
	 * 加载资源，需要重写
	 * @return true成功，false失败
	 */
	public boolean load()
	{
		boolean returnValue = load_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean load_void_NoVirtual(long pNativeObject);
	protected boolean load_NoVirtual()
	{
		boolean returnValue = load_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean unload_void_callback()
	{
		boolean returnValue = unload();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean unload_void(long pNativeObject);
	/**
	 * 卸载模型资源，需要重写
	 * @return true成功，false失败
	 */
	public boolean unload()
	{
		boolean returnValue = unload_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean unload_void_NoVirtual(long pNativeObject);
	protected boolean unload_NoVirtual()
	{
		boolean returnValue = unload_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean attachToNode_CNode_callback(long n)
	{
		com.earthview.world.graphic.Node nParamValue = (n == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nParamValue != null)
		{
		nParamValue.setDelegate(true);
		nParamValue.setInstancePointer(new InstancePointer(n));
		IClassFactory nParamValueClassFactory = GlobalClassFactoryMap.get(nParamValue.getCppInstanceTypeName());
		if (nParamValueClassFactory != null)
		{
			nParamValue.setDelegate(true);
			nParamValue = (com.earthview.world.graphic.Node)nParamValueClassFactory.create();
			nParamValue.setDelegate(true);
			nParamValue.setInstancePointer(new InstancePointer(n));
		}
		}
		boolean returnValue = attachToNode(nParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 挂接渲染，需要重写
	 * @return true成功，false失败
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}
	native private boolean attachToNode_CNode_NoVirtual(long pNativeObject, long n);
	protected boolean attachToNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}

	protected  long detachFromNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = detachFromNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * 反挂接，需要重写
	 * @return 成功返回被反挂接的父节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long detachFromNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node detachFromNode_NoVirtual()
	{
		long returnValue = detachFromNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  boolean attachToScene_void_callback()
	{
		boolean returnValue = attachToScene();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean attachToScene_void(long pNativeObject);
	/**
	 * 直接挂到场景，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean attachToScene()
	{
		boolean returnValue = attachToScene_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean attachToScene_void_NoVirtual(long pNativeObject);
	protected boolean attachToScene_NoVirtual()
	{
		boolean returnValue = attachToScene_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean detachFromScene_void_callback()
	{
		boolean returnValue = detachFromScene();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean detachFromScene_void(long pNativeObject);
	/**
	 * 从场景反挂接，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean detachFromScene()
	{
		boolean returnValue = detachFromScene_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean detachFromScene_void_NoVirtual(long pNativeObject);
	protected boolean detachFromScene_NoVirtual()
	{
		boolean returnValue = detachFromScene_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void asynLoad_void(long pNativeObject);
	/**
	 * 异步，加载资源(不需要重写)
	 */
	public void asynLoad()
	{
		asynLoad_void(this.nativeObject.pointer);
	}
	native private void asynUnload_void(long pNativeObject);
	/**
	 * 异步，卸载模型资源(不需要重写)
	 */
	public void asynUnload()
	{
		asynUnload_void(this.nativeObject.pointer);
	}
	native private void asynAttachToNode_CNode(long pNativeObject, long n);
	/**
	 * 异步，挂接节点(不需要重写)
	 */
	public void asynAttachToNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		asynAttachToNode_CNode(this.nativeObject.pointer, nParamValue);
	}
	native private void asynDetachFromNode_void(long pNativeObject);
	/**
	 * 异步，反挂接节点(不需要重写)
	 */
	public void asynDetachFromNode()
	{
		asynDetachFromNode_void(this.nativeObject.pointer);
	}
	native private void asynAttachToScene_void(long pNativeObject);
	/**
	 * 异步，挂接到场景(不需要重写)
	 */
	public void asynAttachToScene()
	{
		asynAttachToScene_void(this.nativeObject.pointer);
	}
	native private void asynDetachFromScene_void(long pNativeObject);
	/**
	 * 异步，从场景反挂接(不需要重写)
	 */
	public void asynDetachFromScene()
	{
		asynDetachFromScene_void(this.nativeObject.pointer);
	}
	native private void asynRelease_void(long pNativeObject);
	/**
	 * 释放对象内存(不需要重写)
	 */
	public void asynRelease()
	{
		asynRelease_void(this.nativeObject.pointer);
	}
	native private void asynAbort_void(long pNativeObject);
	/**
	 * 强行丢弃之前的异步操作(不需要重写)
	 * @return t
	 */
	public void asynAbort()
	{
		asynAbort_void(this.nativeObject.pointer);
	}
	native private void syncAbort_void(long pNativeObject);
	/**
	 * 同步强行丢弃之前的异步操作，等待对应的请求处理完毕(不需要重写)
	 * @return t
	 */
	public void syncAbort()
	{
		syncAbort_void(this.nativeObject.pointer);
	}
	native private void lockAsynOperation_void(long pNativeObject);
	/**
	 * 异步操作锁,加锁
	 */
	public void lockAsynOperation()
	{
		lockAsynOperation_void(this.nativeObject.pointer);
	}
	native private void unlockAsynOperation_void(long pNativeObject);
	/**
	 * 异步操作锁，解锁
	 */
	public void unlockAsynOperation()
	{
		unlockAsynOperation_void(this.nativeObject.pointer);
	}
	native private void addListener_CVisibleObjectListener(long pNativeObject, long listener);
	/**
	 * 添加监听器
	 */
	public void addListener(com.earthview.world.geometry3d.VisibleObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		addListener_CVisibleObjectListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeListener_CVisibleObjectListener(long pNativeObject, long listener);
	/**
	 * 移除监听器
	 * @return true成功，false失败
	 */
	public void removeListener(com.earthview.world.geometry3d.VisibleObjectListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CVisibleObjectListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private long getNumListener_void(long pNativeObject);
	/**
	 * 获取监听器个数
	 * @return 返回监听器个数
	 */
	public long getNumListener()
	{
		long returnValue = getNumListener_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取监听器
	 * @return true成功，false失败
	 */
	public com.earthview.world.geometry3d.VisibleObjectListener getListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.VisibleObjectListener __returnValue = new com.earthview.world.geometry3d.VisibleObjectListener(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObjectListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjectListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObjectListener");
		}
		return __returnValue;
	}
	protected  void setUserData_CFeatureUserData_callback(long userData)
	{
		com.earthview.world.spatial3d.FeatureUserData userDataParamValue = new com.earthview.world.spatial3d.FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
		userDataParamValue.setDelegate(true);
		userDataParamValue.setInstancePointer(new InstancePointer(userData));
		IClassFactory userDataParamValueClassFactory = GlobalClassFactoryMap.get(userDataParamValue.getCppInstanceTypeName());
		if (userDataParamValueClassFactory != null)
		{
			userDataParamValue.setDelegate(true);
			userDataParamValue = (com.earthview.world.spatial3d.FeatureUserData)userDataParamValueClassFactory.create();
			userDataParamValue.setDelegate(true);
			userDataParamValue.setInstancePointer(new InstancePointer(userData));
		}
		setUserData(userDataParamValue);
	}

	native private void setUserData_CFeatureUserData(long pNativeObject, long userData);
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		long userDataParamValue = userData.nativeObject.pointer;
		setUserData_CFeatureUserData(this.nativeObject.pointer, userDataParamValue);
	}
	native private void setUserData_CFeatureUserData_NoVirtual(long pNativeObject, long userData);
	protected void setUserData_NoVirtual(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		long userDataParamValue = userData.nativeObject.pointer;
		setUserData_CFeatureUserData_NoVirtual(this.nativeObject.pointer, userDataParamValue);
	}

	protected  void setSelectable_ev_bool_callback(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable(selectableParamValue);
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	protected  boolean getSelectable_void_callback()
	{
		boolean returnValue = getSelectable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSelectable_void(long pNativeObject);
	public boolean getSelectable()
	{
		boolean returnValue = getSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSelectable_void_NoVirtual(long pNativeObject);
	protected boolean getSelectable_NoVirtual()
	{
		boolean returnValue = getSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean update_void_callback()
	{
		boolean returnValue = update();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean update_void(long pNativeObject);
	public boolean update()
	{
		boolean returnValue = update_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean update_void_NoVirtual(long pNativeObject);
	protected boolean update_NoVirtual()
	{
		boolean returnValue = update_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getLayer_void_callback()
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer returnValue = getLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取可见对象所在图层
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private long getLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.Iglobelayer getLayer_NoVirtual()
	{
		long returnValue = getLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}

	protected  long getDataset_void_callback()
	{
		com.earthview.world.spatial.geodataset.Idataset returnValue = getDataset();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取可见对象所在数据集
	 * @return 数据集对象
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	protected  long getID_void_callback()
	{
		long returnValue = getID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取可见对象id
	 * @return id
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取可见对象名称
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMatrix_CMatrix4_callback(long m)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		setMatrix(mParamValue);
	}

	native private void setMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置可见对象矩阵
	 * @param m 矩阵4元数
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void setMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void setMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	protected  long getMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMatrix_void(long pNativeObject);
	/**
	 * 获取可见对象矩阵
	 * @return 矩阵4元数
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		long returnValue = getMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getMatrix_NoVirtual()
	{
		long returnValue = getMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	protected  void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(double latitude, double longitude, double altitude, long scale, long qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		com.earthview.world.spatial.math.Quaternion quaParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		quaParamValue.setDelegate(true);
		quaParamValue.setInstancePointer(new InstancePointer(qua));
		IClassFactory quaParamValueClassFactory = GlobalClassFactoryMap.get(quaParamValue.getCppInstanceTypeName());
		if (quaParamValueClassFactory != null)
		{
			quaParamValue.setDelegate(true);
			quaParamValue = (com.earthview.world.spatial.math.Quaternion)quaParamValueClassFactory.create();
			quaParamValue.setDelegate(true);
			quaParamValue.setInstancePointer(new InstancePointer(qua));
		}
		setPosition(latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	/**
	 * 设置可见对象位置信息
	 * @param latitude 高度
	 * @param longitude 经度
	 * @param altitude 纬度
	 * @param scale 缩放
	 * @param qua 旋转
	 */
	public void setPosition(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	protected void setPosition_NoVirtual(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	protected  void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(long latitude, long longitude, long altitude, long scale, long qua)
	{
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		com.earthview.world.spatial.math.Quaternion quaParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		quaParamValue.setDelegate(true);
		quaParamValue.setInstancePointer(new InstancePointer(qua));
		IClassFactory quaParamValueClassFactory = GlobalClassFactoryMap.get(quaParamValue.getCppInstanceTypeName());
		if (quaParamValueClassFactory != null)
		{
			quaParamValue.setDelegate(true);
			quaParamValue = (com.earthview.world.spatial.math.Quaternion)quaParamValueClassFactory.create();
			quaParamValue.setDelegate(true);
			quaParamValue.setInstancePointer(new InstancePointer(qua));
		}
		getPosition(latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	/**
	 * 获取可见对象位置信息
	 * @param latitude 高度
	 * @param longitude 经度
	 * @param altitude 纬度
	 * @param scale 缩放
	 * @param qua 旋转
	 */
	public void getPosition(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	protected void getPosition_NoVirtual(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	public VisibleObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VisibleObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_attachToNode_CNode(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_attachToScene_void(long pNativeObject, String method);
	native protected void register_detachFromScene_void(long pNativeObject, String method);
	native protected void register_setUserData_CFeatureUserData(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_getSelectable_void(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_getLayer_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_attachToNode_CNode(this.nativeObject.pointer, "attachToNode_CNode_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_attachToScene_void(this.nativeObject.pointer, "attachToScene_void_callback");
			this.register_detachFromScene_void(this.nativeObject.pointer, "detachFromScene_void_callback");
			this.register_setUserData_CFeatureUserData(this.nativeObject.pointer, "setUserData_CFeatureUserData_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_getSelectable_void(this.nativeObject.pointer, "getSelectable_void_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_getLayer_void(this.nativeObject.pointer, "getLayer_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
		}
	}
	
	public static VisibleObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VisibleObject obj = null;
 		if(baseObj instanceof VisibleObject)
		{
			obj = (VisibleObject)baseObj;
		} else {
			obj = new VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVisibleObject");
			obj.increaseCast();
		}

		return obj;
	}
}
