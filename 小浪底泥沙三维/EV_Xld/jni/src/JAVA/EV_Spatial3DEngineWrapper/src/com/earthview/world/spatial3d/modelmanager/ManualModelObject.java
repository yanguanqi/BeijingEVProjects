package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ManualModelObject extends com.earthview.world.spatial3d.modelmanager.ModelBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CManualModelObject", new ManualModelObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCManualModelObjectProxy", new ManualModelObjectClassFactory());
	}

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 将模型绑定到渲染节点
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

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * 从节点上卸载模型
	 * @return 成功返回被挂接的父节点，失败返回NULL
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

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 是否可见
	 * @return ev_bool，TRUE可见/FALSE不可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否可见
	 * @param flag TRUE可见/FALSE不可见
	 * @param bRecursive true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型
	 */
	public void setVisible(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setVisible_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void setVisible_ev_bool_ev_bool(long pNativeObject, boolean flag, boolean bRecursive);
	public void setVisible(boolean flag, boolean bRecursive)
	{
		boolean flagParamValue = flag;
		boolean bRecursiveParamValue = bRecursive;
		setVisible_ev_bool_ev_bool(this.nativeObject.pointer, flagParamValue, bRecursiveParamValue);
	}
	native private void setVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean flag, boolean bRecursive);
	protected void setVisible_NoVirtual(boolean flag, boolean bRecursive)
	{
		boolean flagParamValue = flag;
		boolean bRecursiveParamValue = bRecursive;
		setVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue, bRecursiveParamValue);
	}

	native private void setSubEntityVisibility_ev_uint32_ev_bool(long pNativeObject, long subEntityIndex, boolean isVisible);
	/**
	 * 设置subentity的可见性
	 * @param subEntityIndex subentity索引
	 * @param isVisible TRUE可见/FALSE不可见
	 * @param bRecursive true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型
	 */
	public void setSubEntityVisibility(long subEntityIndex, boolean isVisible)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		setSubEntityVisibility_ev_uint32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue);
	}
	native private void setSubEntityVisibility_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean isVisible);
	protected void setSubEntityVisibility_NoVirtual(long subEntityIndex, boolean isVisible)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		setSubEntityVisibility_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue);
	}

	native private void setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(long pNativeObject, long subEntityIndex, boolean isVisible, boolean bRecursive);
	public void setSubEntityVisibility(long subEntityIndex, boolean isVisible, boolean bRecursive)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		boolean bRecursiveParamValue = bRecursive;
		setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue, bRecursiveParamValue);
	}
	native private void setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean isVisible, boolean bRecursive);
	protected void setSubEntityVisibility_NoVirtual(long subEntityIndex, boolean isVisible, boolean bRecursive)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		boolean bRecursiveParamValue = bRecursive;
		setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue, bRecursiveParamValue);
	}

	native private boolean getSubEntityVisibility_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 获取subentity的可见性
	 * @param subEntityIndex subentity索引
	 * @return TRUE可见/FALSE不可见
	 */
	public boolean getSubEntityVisibility(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean getSubEntityVisibility_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected boolean getSubEntityVisibility_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取模型类型
	 * @return 模型类型
	 */
	public com.earthview.world.spatial3d.ModelType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.ModelType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelType.toEnum(returnValue);
	}

	protected  long getEntity_void_callback()
	{
		com.earthview.world.graphic.Entity returnValue = getEntity();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEntity_void(long pNativeObject);
	/**
	 * 获取entity句柄
	 * @return entity句柄
	 */
	public com.earthview.world.graphic.Entity getEntity()
	{
		long returnValue = getEntity_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private long getEntity_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Entity getEntity_NoVirtual()
	{
		long returnValue = getEntity_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}

	native private void setRenderingMaxDistance_ev_real64(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_ev_real64(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMaxDistance_ev_real64_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMaxDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	native private double getRenderingMaxDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		double returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMaxDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMaxDistance_NoVirtual()
	{
		double returnValue = getRenderingMaxDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRenderingMinDistance_ev_real64(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_ev_real64(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMinDistance_ev_real64_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMinDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	native private double getRenderingMinDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		double returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMinDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMinDistance_NoVirtual()
	{
		double returnValue = getRenderingMinDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int calculateSubEntityIndex_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 * @return 返回-1计算失败
	 */
	public int calculateSubEntityIndex(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private int calculateSubEntityIndex_ev_uint16_ev_uint32_NoVirtual(long pNativeObject, int submeshIndex, long instanceIndex);
	protected int calculateSubEntityIndex_NoVirtual(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex_ev_uint16_ev_uint32_NoVirtual(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}

	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, long subEntityIndex, long submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标属于哪个子部件的哪个instance
	 * @param subEntityIndex subEntity下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 * @return 返回-1计算失败
	 */
	public void calculateInstanceIndex(long subEntityIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}
	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_NoVirtual(long pNativeObject, long subEntityIndex, long submeshIndex, long instanceIndex);
	protected void calculateInstanceIndex_NoVirtual(long subEntityIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}

	native private int getNumSubEntities_void(long pNativeObject);
	/**
	 * 获取subEntity个数
	 * @return 返回subentity个数，失败返回-1
	 */
	public int getNumSubEntities()
	{
		int returnValue = getNumSubEntities_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumSubEntities_void_NoVirtual(long pNativeObject);
	protected int getNumSubEntities_NoVirtual()
	{
		int returnValue = getNumSubEntities_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createLocalAxisNode_void(long pNativeObject);
	/**
	 * 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且只有一个子部件2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
	 * @param pModelObject 模型对象
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node createLocalAxisNode()
	{
		long returnValue = createLocalAxisNode_void(this.nativeObject.pointer);
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
	native private long createLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createLocalAxisNode_NoVirtual()
	{
		long returnValue = createLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
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

	native private long createLocalAxisNode_EVString(long pNativeObject, String componentName);
	/**
	 * 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且是同一个组件下的子部件2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
	 * @param componentName 组件名称，即是模型库左下角纯蓝色节点名称
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node createLocalAxisNode(String componentName)
	{
		String componentNameParamValue = componentName;
		long returnValue = createLocalAxisNode_EVString(this.nativeObject.pointer, componentNameParamValue);
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
	native private long createLocalAxisNode_EVString_NoVirtual(long pNativeObject, String componentName);
	protected com.earthview.world.graphic.Node createLocalAxisNode_NoVirtual(String componentName)
	{
		String componentNameParamValue = componentName;
		long returnValue = createLocalAxisNode_EVString_NoVirtual(this.nativeObject.pointer, componentNameParamValue);
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

	native private long getLocalAxisNode_void(long pNativeObject);
	/**
	 * 获取控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node getLocalAxisNode()
	{
		long returnValue = getLocalAxisNode_void(this.nativeObject.pointer);
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
	native private long getLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getLocalAxisNode_NoVirtual()
	{
		long returnValue = getLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean destroyLocalAxisNode_void(long pNativeObject);
	/**
	 * 销毁createLocalAxisNode创建的节点，销毁后原来在节点上设置的偏移与姿态会丢失
	 * @param pModelObject 模型对象
	 * @param node createLocalAxisNode返回的node
	 * @return true成功，false失败
	 */
	public boolean destroyLocalAxisNode()
	{
		boolean returnValue = destroyLocalAxisNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean destroyLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected boolean destroyLocalAxisNode_NoVirtual()
	{
		boolean returnValue = destroyLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getBoneNode_EVString(long pNativeObject, String boneName);
	/**
	 * 通过节点名称获取bone节点
	 * @param boneName 骨骼节点名称
	 * @return 失败返回NULL
	 */
	public com.earthview.world.graphic.Node getBoneNode(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBoneNode_EVString(this.nativeObject.pointer, boneNameParamValue);
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
	native private long getBoneNode_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.graphic.Node getBoneNode_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBoneNode_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
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

	native private void updateSkeletonAnimationVertex_void(long pNativeObject);
	/**
	 * 通过bone节点控制模型部件时，bone节点设置完位置后，需要调用此接口刷新一下限制：不支持instance模型，不支持内部instance模型
	 */
	public void updateSkeletonAnimationVertex()
	{
		updateSkeletonAnimationVertex_void(this.nativeObject.pointer);
	}
	native private void updateSkeletonAnimationVertex_void_NoVirtual(long pNativeObject);
	protected void updateSkeletonAnimationVertex_NoVirtual()
	{
		updateSkeletonAnimationVertex_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setSelectionColour_CColourValue(long pNativeObject, long color);
	/**
	 * 设置选择时的颜色
	 * @param color 设置的颜色
	 */
	public void setSelectionColour(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long color);
	protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	native private long getSelectionColour_void(long pNativeObject);
	/**
	 * 获取选择时的颜色
	 * @return EarthView::World::Graphic::CColourValue
	 */
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSelectionColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSelectionColour_NoVirtual()
	{
		long returnValue = getSelectionColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	native private void setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 设置环境光反射率增益
	 * @param ambient 环境光增益
	 * @param diffuse 散射光增益
	 * @param specular 镜面光增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void setEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 是否可选择
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 是否被选择
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelected_void_NoVirtual(long pNativeObject);
	protected boolean isSelected_NoVirtual()
	{
		boolean returnValue = isSelected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否可选择
	 * @param flag true能够选择，false不能选择
	 * @return e
	 */
	public void setSelectable(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelectable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setSelectable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置选中状态
	 * @param flag true选中，false没选中
	 */
	public void setSelected(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelected_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setSelected_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void setSubEntitySelected_ev_uint32_ev_bool(long pNativeObject, long subEntityIndex, boolean flag);
	/**
	 * 设置子部件的选择状态
	 * @param subEntityIndex 子部件下标
	 * @param flag true能够选择，false不能选择
	 * @return e
	 */
	public void setSubEntitySelected(long subEntityIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, flagParamValue);
	}
	native private void setSubEntitySelected_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean flag);
	protected void setSubEntitySelected_NoVirtual(long subEntityIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, flagParamValue);
	}

	native private void setSubEntitySelected_ev_uint32_ev_int32_ev_bool(long pNativeObject, long subEntityIndex, int segmentIndex, boolean flag);
	public void setSubEntitySelected(long subEntityIndex, int segmentIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_int32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, segmentIndexParamValue, flagParamValue);
	}
	native private void setSubEntitySelected_ev_uint32_ev_int32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, int segmentIndex, boolean flag);
	protected void setSubEntitySelected_NoVirtual(long subEntityIndex, int segmentIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, segmentIndexParamValue, flagParamValue);
	}

	native private boolean getSubEntitySelected_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 获取子部件的选择状态
	 * @return true被选中，false没有被选中
	 */
	public boolean getSubEntitySelected(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntitySelected_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean getSubEntitySelected_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected boolean getSubEntitySelected_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntitySelected_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	native private boolean getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(long pNativeObject, long subMeshIndex, long instanceIndex, long segmentIndex);
	/**
	 * 获取选中的子部件索引
	 * @param subMeshIndex submesh的索引
	 * @param instanceIndex submesh的复用索引
	 * @param segmentIndex submesh的复用段索引
	 * @return 是否选中
	 */
	public boolean getSelectedSubEntityIndex(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex, IntegerPointer segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_NoVirtual(long pNativeObject, long subMeshIndex, long instanceIndex, long segmentIndex);
	protected boolean getSelectedSubEntityIndex_NoVirtual(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex, IntegerPointer segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_NoVirtual(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}

	native private String getSubMeshName_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 返回子部件的名称
	 * @return true被选中，false没有被选中
	 */
	public String getSubMeshName(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		String returnValue = getSubMeshName_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private String getSubMeshName_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected String getSubMeshName_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		String returnValue = getSubMeshName_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	native private long getSubMeshMatrix_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 返回子部件的矩阵。（未开启动画时可用）
	 * @param subEntityIndex 子部件下标
	 */
	public com.earthview.world.spatial.math.Matrix4 getSubMeshMatrix(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubMeshMatrix_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
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
	native private long getSubMeshMatrix_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial.math.Matrix4 getSubMeshMatrix_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubMeshMatrix_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
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

	native private boolean addNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, long subEntityIndex, long nodeListener);
	/**
	 * 给子部件挂接的节点添加监听。（用在动画开启后使用）
	 * @param subEntityIndex 子部件下标
	 * @param nodeListener 节点监听
	 * @return 要在Loaded后使用这个接口。true,添加成功。false,说明该部件是没有动画的，可用getSubMeshMatrix取得其矩阵
	 */
	public boolean addNodeListenerForSubMesh(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		boolean returnValue = addNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
		return returnValue;
	}
	native private boolean addNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(long pNativeObject, long subEntityIndex, long nodeListener);
	protected boolean addNodeListenerForSubMesh_NoVirtual(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		boolean returnValue = addNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
		return returnValue;
	}

	native private void removeNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, long subEntityIndex, long nodeListener);
	/**
	 * 移除子部件挂接的节点的监听。（用在动画开启后使用）
	 * @param subEntityIndex 子部件下标
	 * @param nodeListener 节点监听
	 */
	public void removeNodeListenerForSubMesh(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		removeNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
	}
	native private void removeNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(long pNativeObject, long subEntityIndex, long nodeListener);
	protected void removeNodeListenerForSubMesh_NoVirtual(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		removeNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setEditable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置可编辑状态
	 * @param flag TRUE可编辑/FALSE不可编辑
	 */
	public void setEditable(boolean flag)
	{
		boolean flagParamValue = flag;
		setEditable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setEditable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setEditable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setEditable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void endEditing_void(long pNativeObject);
	/**
	 * 停止可编辑状态
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setTransparency_ev_real64(long pNativeObject, double percent);
	/**
	 * 设置模型透明度
	 * @param percent 值区间[0,1],(percent=1完全透明，percent=0不透明）
	 */
	public void setTransparency(double percent)
	{
		double percentParamValue = percent;
		setTransparency_ev_real64(this.nativeObject.pointer, percentParamValue);
	}
	native private void setTransparency_ev_real64_NoVirtual(long pNativeObject, double percent);
	protected void setTransparency_NoVirtual(double percent)
	{
		double percentParamValue = percent;
		setTransparency_ev_real64_NoVirtual(this.nativeObject.pointer, percentParamValue);
	}

	native private void setTransparency_ev_uint32_ev_real64(long pNativeObject, long subEntityIndex, double percent);
	/**
	 * 设置模型子部件透明度
	 * @param subEntityIndex 子部件
	 * @param percent 值区间[0,1],(percent=1完全透明，percent=0不透明）
	 */
	public void setTransparency(long subEntityIndex, double percent)
	{
		long subEntityIndexParamValue = subEntityIndex;
		double percentParamValue = percent;
		setTransparency_ev_uint32_ev_real64(this.nativeObject.pointer, subEntityIndexParamValue, percentParamValue);
	}
	native private void setTransparency_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long subEntityIndex, double percent);
	protected void setTransparency_NoVirtual(long subEntityIndex, double percent)
	{
		long subEntityIndexParamValue = subEntityIndex;
		double percentParamValue = percent;
		setTransparency_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, percentParamValue);
	}

	native private void setCastShadows_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置阴影
	 * @param flag TRUE可投射阴影/FALSE不投射阴影
	 */
	public void setCastShadows(boolean flag)
	{
		boolean flagParamValue = flag;
		setCastShadows_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setCastShadows_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setCastShadows_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setCastShadows_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private void setReflectable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否开启反射
	 * @param flag TRUE开启反射/FALSE不开启反射
	 */
	public void setReflectable(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setReflectable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setReflectable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private boolean getReflectable_void(long pNativeObject);
	/**
	 * 获取是否开启反射
	 * @return TRUE开启反射/FALSE不开启反射
	 */
	public boolean getReflectable()
	{
		boolean returnValue = getReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getReflectable_void_NoVirtual(long pNativeObject);
	protected boolean getReflectable_NoVirtual()
	{
		boolean returnValue = getReflectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRefractable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否开启折射
	 * @param flag TRUE开启折射/FALSE不开启折射
	 */
	public void setRefractable(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setRefractable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setRefractable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	native private boolean getRefractable_void(long pNativeObject);
	/**
	 * 获取是否开启折射
	 * @return TRUE开启折射/FALSE不开启折射
	 */
	public boolean getRefractable()
	{
		boolean returnValue = getRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRefractable_void_NoVirtual(long pNativeObject);
	protected boolean getRefractable_NoVirtual()
	{
		boolean returnValue = getRefractable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMaterial_ev_uint32_CMaterialPtr(long pNativeObject, long subEntityIndex, long matPtr);
	/**
	 * 切换材质
	 * @param subEntityIndex 子部件下标
	 * @param matPtr 新材质对象
	 */
	public void setMaterial(long subEntityIndex, com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long matPtrParamValue = matPtr.nativeObject.pointer;
		setMaterial_ev_uint32_CMaterialPtr(this.nativeObject.pointer, subEntityIndexParamValue, matPtrParamValue);
	}
	native private void setMaterial_ev_uint32_CMaterialPtr_NoVirtual(long pNativeObject, long subEntityIndex, long matPtr);
	protected void setMaterial_NoVirtual(long subEntityIndex, com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long matPtrParamValue = matPtr.nativeObject.pointer;
		setMaterial_ev_uint32_CMaterialPtr_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, matPtrParamValue);
	}

	native private void initializeAnimation_void(long pNativeObject);
	/**
	 * 初始模型的动画
	 */
	public void initializeAnimation()
	{
		initializeAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeAnimation_NoVirtual()
	{
		initializeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void initializeModelAnimation_void(long pNativeObject);
	/**
	 * 获取并管理模型自身的动画（骨骼动画和顶点动画这两类）
	 */
	public void initializeModelAnimation()
	{
		initializeModelAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeModelAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeModelAnimation_NoVirtual()
	{
		initializeModelAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void initializeNodeAnimation_void(long pNativeObject);
	/**
	 * 获取并管理模型的节点动画（会根据ani文件还原出3DMAX中原有的一样的场景结构）
	 */
	public void initializeNodeAnimation()
	{
		initializeNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeNodeAnimation_NoVirtual()
	{
		initializeNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void createAnimationScene_CNodeSerializer_CNode(long pNativeObject, long node, long parent);
	/**
	 * 根据subMeshID创建节点动画
	 * @param node 节点序列器对象
	 * @param parent 父节点对象
	 */
	public void createAnimationScene(com.earthview.world.graphic.NodeSerializer node, com.earthview.world.graphic.Node parent)
	{
		long nodeParamValue = node.nativeObject.pointer;
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		createAnimationScene_CNodeSerializer_CNode(this.nativeObject.pointer, nodeParamValue, parentParamValue);
	}
	native private void destoryCloneEntityAndNodes_void(long pNativeObject);
	/**
	 * 销毁根据动画创建的节点和Entity
	 */
	public void destoryCloneEntityAndNodes()
	{
		destoryCloneEntityAndNodes_void(this.nativeObject.pointer);
	}
	protected  void applyEnvMap_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		applyEnvMap(enabledParamValue);
	}

	native private void applyEnvMap_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 应用环境贴图
	 * @param enabled 启用
	 */
	public void applyEnvMap(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		applyEnvMap_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void applyEnvMap_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void applyEnvMap_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		applyEnvMap_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  boolean isApplyEnvMap_void_callback()
	{
		boolean returnValue = isApplyEnvMap();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isApplyEnvMap_void(long pNativeObject);
	/**
	 * 查询是否应用环境贴图
	 */
	public boolean isApplyEnvMap()
	{
		boolean returnValue = isApplyEnvMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isApplyEnvMap_void_NoVirtual(long pNativeObject);
	protected boolean isApplyEnvMap_NoVirtual()
	{
		boolean returnValue = isApplyEnvMap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void prepareForNodeAnimation_void(long pNativeObject);
	/**
	 * 开始模型的节点动画之前的准备工作
	 */
	public void prepareForNodeAnimation()
	{
		prepareForNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void prepareForNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void prepareForNodeAnimation_NoVirtual()
	{
		prepareForNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void resumeNodeAnimationState_void(long pNativeObject);
	/**
	 * 恢复节点动画之前的状态
	 */
	public void resumeNodeAnimationState()
	{
		resumeNodeAnimationState_void(this.nativeObject.pointer);
	}
	native private void resumeNodeAnimationState_void_NoVirtual(long pNativeObject);
	protected void resumeNodeAnimationState_NoVirtual()
	{
		resumeNodeAnimationState_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getComponentBySubEntity_CSubEntity(long pNativeObject, long pSubEntity);
	/**
	 * 根据SubEntity取组件对象
	 * @param pSubEntity SubEntity指针
	 * @return 组件对象
	 */
	public com.earthview.world.spatial3d.Component getComponentBySubEntity(com.earthview.world.graphic.SubEntity pSubEntity)
	{
		long pSubEntityParamValue = (pSubEntity == null ? 0L : pSubEntity.nativeObject.pointer);
		long returnValue = getComponentBySubEntity_CSubEntity(this.nativeObject.pointer, pSubEntityParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private long getComponentBySubEntity_CSubEntity_ev_int32_ev_int32(long pNativeObject, long pSubEntity, int indexBegun, int indexEnd);
	public com.earthview.world.spatial3d.Component getComponentBySubEntity(com.earthview.world.graphic.SubEntity pSubEntity, int indexBegun, int indexEnd)
	{
		long pSubEntityParamValue = (pSubEntity == null ? 0L : pSubEntity.nativeObject.pointer);
		int indexBegunParamValue = indexBegun;
		int indexEndParamValue = indexEnd;
		long returnValue = getComponentBySubEntity_CSubEntity_ev_int32_ev_int32(this.nativeObject.pointer, pSubEntityParamValue, indexBegunParamValue, indexEndParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private void setComponentVisible_CComponent_ev_bool(long pNativeObject, long component, boolean visible);
	/**
	 * 设置组件是否显示
	 * @param component 组件
	 * @param visible 是否可见
	 */
	public void setComponentVisible(com.earthview.world.spatial3d.Component component, boolean visible)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setComponentVisible_CComponent_ev_bool(this.nativeObject.pointer, componentParamValue, visibleParamValue);
	}
	native private void setComponentVisible_CComponent_ev_bool_NoVirtual(long pNativeObject, long component, boolean visible);
	protected void setComponentVisible_NoVirtual(com.earthview.world.spatial3d.Component component, boolean visible)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setComponentVisible_CComponent_ev_bool_NoVirtual(this.nativeObject.pointer, componentParamValue, visibleParamValue);
	}

	native private void setComponentHighlight_CComponent_ev_bool(long pNativeObject, long component, boolean highlight);
	/**
	 * 设置组件是否高亮
	 * @param component 组件
	 * @param highlight 是否高亮
	 */
	public void setComponentHighlight(com.earthview.world.spatial3d.Component component, boolean highlight)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean highlightParamValue = highlight;
		setComponentHighlight_CComponent_ev_bool(this.nativeObject.pointer, componentParamValue, highlightParamValue);
	}
	native private void setComponentHighlight_CComponent_ev_bool_NoVirtual(long pNativeObject, long component, boolean highlight);
	protected void setComponentHighlight_NoVirtual(com.earthview.world.spatial3d.Component component, boolean highlight)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean highlightParamValue = highlight;
		setComponentHighlight_CComponent_ev_bool_NoVirtual(this.nativeObject.pointer, componentParamValue, highlightParamValue);
	}

	native private void setComponentTransparency_CComponent_ev_real32(long pNativeObject, long component, float alpha);
	/**
	 * 设置组件透明度
	 * @param component 组件
	 * @param alpha 透明度，0为不透明，1为全透明
	 */
	public void setComponentTransparency(com.earthview.world.spatial3d.Component component, float alpha)
	{
		long componentParamValue = component.nativeObject.pointer;
		float alphaParamValue = alpha;
		setComponentTransparency_CComponent_ev_real32(this.nativeObject.pointer, componentParamValue, alphaParamValue);
	}
	native private void setComponentTransparency_CComponent_ev_real32_NoVirtual(long pNativeObject, long component, float alpha);
	protected void setComponentTransparency_NoVirtual(com.earthview.world.spatial3d.Component component, float alpha)
	{
		long componentParamValue = component.nativeObject.pointer;
		float alphaParamValue = alpha;
		setComponentTransparency_CComponent_ev_real32_NoVirtual(this.nativeObject.pointer, componentParamValue, alphaParamValue);
	}

	public ManualModelObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ManualModelObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 加载资源，只加载subIndex列表的subEntity
	 * @return 加载成功返回true否则返回false
	 */
	public boolean load(com.earthview.world.core.IntVector subEntityIndexs)
	{
		return super.load_NoVirtual(subEntityIndexs);
	}
	/**
	 * 设置局部矩阵
	 * @param m 局部矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		super.setLocalMatrix_NoVirtual(m);
	}
	/**
	 * 获取局部矩阵
	 * @return 返回局部矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		return super.getLocalMatrix_NoVirtual();
	}
	/**
	 * 获取模型在模型库中的偏移位置
	 * @param offPosition 模型库中的位置
	 * @param offScale 模型库中的缩放
	 * @param qua 模型库中的姿态
	 */
	public void getModelDBTransform(com.earthview.world.spatial.math.Vector3 offPosition, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		super.getModelDBTransform_NoVirtual(offPosition, scale, qua);
	}
	/**
	 * 获取文件路径
	 * @return 返回文件路径
	 */
	public String getFile()
	{
		return super.getFile_NoVirtual();
	}
	/**
	 * 是否以文件目录为分组
	 * @return true是以文件目录为工作组，false使用默认工作组
	 */
	public boolean isFileDirAsGroup()
	{
		return super.isFileDirAsGroup_NoVirtual();
	}
	/**
	 * 获取场景管理器
	 * @return 成功返回场景管理器，失败返回NULL
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 获取世界变换矩阵
	 * @return 返回世界变换矩阵
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldAABB()
	{
		return super.getWorldAABB_NoVirtual();
	}
	/**
	 * 获取别名，只有被绑定的模型才有
	 * @return 绑定模型别名
	 */
	public String getAliasName()
	{
		return super.getAliasName_NoVirtual();
	}
	/**
	 * 获取模型绑定状态
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.BindedState getBindedState()
	{
		return super.getBindedState_NoVirtual();
	}
	/**
	 * 获取所有绑定的特效
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getAllBindedEffect()
	{
		return super.getAllBindedEffect_NoVirtual();
	}
	/**
	 * 获取所有绑定的光源
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.modelmanager.LightObjectMap getAllBindedLight()
	{
		return super.getAllBindedLight_NoVirtual();
	}
	/**
	 * 根据subIndex获取绑定特效
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect(long subEntityIndex)
	{
		return super.getBindedEffect_NoVirtual(subEntityIndex);
	}
	/**
	 * 根据subIndex获取绑定光源
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定光源
	 */
	public com.earthview.world.spatial3d.modelmanager.LightObjectMap getBindedLight(long subEntityIndex)
	{
		return super.getBindedLight_NoVirtual(subEntityIndex);
	}
	/**
	 * 根据subIndex获取绑定粒子
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定粒子
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle(long subEntityIndex)
	{
		return super.getBindedParticle_NoVirtual(subEntityIndex);
	}
	/**
	 * 根据subIndex获取绑定飘带
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail(long subEntityIndex)
	{
		return super.getBindedRibbonTrail_NoVirtual(subEntityIndex);
	}
	/**
	 * 根据骨头获取绑定特效
	 * @param boneName 骨骼名称
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect(String boneName)
	{
		return super.getBindedEffect_NoVirtual(boneName);
	}
	/**
	 * 根据节点获取绑定特效
	 * @param boneName 节点名称
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffectByNodeName(String nodeName)
	{
		return super.getBindedEffectByNodeName_NoVirtual(nodeName);
	}
	/**
	 * 根据骨头获取绑定粒子
	 * @param boneName 骨骼名称
	 * @return 绑定粒子
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle(String boneName)
	{
		return super.getBindedParticle_NoVirtual(boneName);
	}
	/**
	 * 根据骨头获取绑定飘带
	 * @param boneName 骨骼名称
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail(String boneName)
	{
		return super.getBindedRibbonTrail_NoVirtual(boneName);
	}
	/**
	 * 根据节点名称获取绑定飘带
	 * @param nodeName 节点名称
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrailByNodeName(String nodeName)
	{
		return super.getBindedRibbonTrailByNodeName_NoVirtual(nodeName);
	}
	/**
	 * 获取所有绑定的模型
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getAllBindedModel()
	{
		return super.getAllBindedModel_NoVirtual();
	}
	/**
	 * 根据subIndex获取模型
	 * @param subEntityIndex subentity标识索引
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel(long subEntityIndex)
	{
		return super.getBindedModel_NoVirtual(subEntityIndex);
	}
	/**
	 * 根据节点名称获取模型
	 * @param nodeName 节点名称
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModelByNodeName(String nodeName)
	{
		return super.getBindedModelByNodeName_NoVirtual(nodeName);
	}
	/**
	 * 根据名字取组件对象
	 * @param name 组件的名称
	 * @return 组件对象
	 */
	public com.earthview.world.spatial3d.Component getComponentByName(String name)
	{
		return super.getComponentByName_NoVirtual(name);
	}
	public com.earthview.world.spatial3d.Component getComponentBySubEntityIndex(long subEntityIndex)
	{
		return super.getComponentBySubEntityIndex_NoVirtual(subEntityIndex);
	}
	public com.earthview.world.spatial3d.Component getParentComponentByName(String name)
	{
		return super.getParentComponentByName_NoVirtual(name);
	}
	/**
	 * 获取根组件对象
	 * @return 组件对象
	 */
	public com.earthview.world.spatial3d.Component getRootComponent()
	{
		return super.getRootComponent_NoVirtual();
	}
	/**
	 * 根据骨头获取模型
	 * @param boneName 骨骼名称
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel(String boneName)
	{
		return super.getBindedModel_NoVirtual(boneName);
	}
	/**
	 * 根据名称取特效
	 * @param aliasName 绑定特效别名
	 * @return 成功返回特效，失败返回NULL
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect getBindedParticleByName(String aliasName)
	{
		return super.getBindedParticleByName_NoVirtual(aliasName);
	}
	/**
	 * 根据名称取飘带
	 * @param aliasName 飘带别名
	 * @return 成功返回飘带，失败返回NULL
	 */
	public com.earthview.world.graphic.RibbonTrail getBindedRibbonTrailByName(String aliasName)
	{
		return super.getBindedRibbonTrailByName_NoVirtual(aliasName);
	}
	/**
	 * 根据名称取模型
	 * @param aliasName 模型别名
	 * @return 成功返回模型，失败返回NULL
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject getBindedModelByName(String aliasName)
	{
		return super.getBindedModelByName_NoVirtual(aliasName);
	}
	/**
	 * 根据名称取光源
	 * @param aliasName 光源名称
	 * @return 成功返回光源，失败返回NULL
	 */
	public com.earthview.world.graphic.Light getBindedLightByName(String aliasName)
	{
		return super.getBindedLightByName_NoVirtual(aliasName);
	}
	/**
	 * 在骨头上绑定特效
	 * @param pEffect 特效
	 * @param boneName 模型骨骼名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtBone(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindEffectAtBone_NoVirtual(ref_pEffect, boneName, offMatrix, aliasName);
	}
	/**
	 * 在模型节点上绑定特效
	 * @param pEffect 特效
	 * @param nodeName 节点名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtNode(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindEffectAtNode_NoVirtual(ref_pEffect, nodeName, offMatrix, aliasName);
	}
	/**
	 * 在模型子部件上绑定特效
	 * @param pEffect 特效
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtSubEntity(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindEffectAtSubEntity_NoVirtual(ref_pEffect, subEntityIndex, offMatrix, aliasName);
	}
	/**
	 * 在模型子部件上绑定光源
	 * @param l 光源
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定光源别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindLightAtSubEntity(com.earthview.world.graphic.Light l, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindLightAtSubEntity_NoVirtual(l, subEntityIndex, offMatrix, aliasName);
	}
	/**
	 * 在骨头上绑定模型
	 * @param pModel 模型
	 * @param boneName 模型骨骼名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtBone(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindModelAtBone_NoVirtual(ref_pModel, boneName, offMatrix, aliasName);
	}
	/**
	 * 在模型子部件上绑定模型
	 * @param pModel 模型
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtSubEntity(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindModelAtSubEntity_NoVirtual(ref_pModel, subEntityIndex, offMatrix, aliasName);
	}
	/**
	 * 在模型节点上绑定模型
	 * @param pModel 模型
	 * @param nodeName 模型名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtNode(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		return super.bindModelAtNode_NoVirtual(ref_pModel, nodeName, offMatrix, aliasName);
	}
	/**
	 * 解除模型上绑定的特效
	 * @param pEffect 特效
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindEffect(com.earthview.world.spatial3d.effectmanager.Effect pEffect)
	{
		return super.unBindEffect_NoVirtual(pEffect);
	}
	/**
	 * 解除模型上绑定的光源
	 * @param pLight 光源
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindLight(com.earthview.world.graphic.Light pLight)
	{
		return super.unBindLight_NoVirtual(pLight);
	}
	/**
	 * 解除模型上绑定的模型
	 * @param pModel 模型
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindModel(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		return super.unBindModel_NoVirtual(pModel);
	}
	/**
	 * 获取绑定的ID
	 */
	public long getBindedID()
	{
		return super.getBindedID_NoVirtual();
	}
	/**
	 * 设置绑定的ID
	 * @param bindedID 绑定ID
	 */
	public void setBindedID(long bindedID)
	{
		super.setBindedID_NoVirtual(bindedID);
	}
	/**
	 * 设置被绑定所有特效可见性
	 * @param isVisible 可见性
	 */
	public void setBindedEffectVisibility(boolean isVisible)
	{
		super.setBindedEffectVisibility_NoVirtual(isVisible);
	}
	/**
	 * 更新模型的材质
	 * @param matPtr 新的模型材质
	 * @param replacedTextures 被替换的纹理名称
	 * @param newTextureFilesPath 替换的纹理文件路径
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMaterial(com.earthview.world.graphic.MaterialPtr matPtr, com.earthview.world.core.StringVector replacedTextures, com.earthview.world.core.StringVector newTextureFilesPath)
	{
		return super.updateMaterial_NoVirtual(matPtr, replacedTextures, newTextureFilesPath);
	}
	/**
	 * 获取mesh对象
	 */
	public com.earthview.world.graphic.MeshPtr getMeshPtr()
	{
		return super.getMeshPtr_NoVirtual();
	}
	/**
	 * 获取纹理集合
	 */
	public com.earthview.world.spatial3d.TexturePtrVector getTexturePtrs()
	{
		return super.getTexturePtrs_NoVirtual();
	}
	/**
	 * 获取材质集合
	 */
	public com.earthview.world.spatial3d.MaterialPtrVector getMaterialPtrs()
	{
		return super.getMaterialPtrs_NoVirtual();
	}
	/**
	 * 获取GPU集合
	 */
	public com.earthview.world.spatial3d.GpuPtrVector getGpuPtrs()
	{
		return super.getGpuPtrs_NoVirtual();
	}
	/**
	 * 获取mesh的feature
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getMeshFeature()
	{
		return super.getMeshFeature_NoVirtual();
	}
	/**
	 * 获取mesh大纹理
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getOrigTextureFeatures()
	{
		return super.getOrigTextureFeatures_NoVirtual();
	}
	/**
	 * 获取mesh小纹理
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getThumbTextureFeatures()
	{
		return super.getThumbTextureFeatures_NoVirtual();
	}
	/**
	 * 获取mesh材质信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getMaterialFeatures()
	{
		return super.getMaterialFeatures_NoVirtual();
	}
	/**
	 * 获取mesh动画信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getAnimationFeatures()
	{
		return super.getAnimationFeatures_NoVirtual();
	}
	/**
	 * 获取mesh的GPU信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getGpuFeatures()
	{
		return super.getGpuFeatures_NoVirtual();
	}
	/**
	 * 获取mesh的Prg信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getProgramFeatures()
	{
		return super.getProgramFeatures_NoVirtual();
	}
	/**
	 * 获取mesh的资源
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getResourceFeature()
	{
		return super.getResourceFeature_NoVirtual();
	}
	/**
	 * 开始闪烁
	 */
	public void startFlash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms)
	{
		super.startFlash_NoVirtual(color, hightLight_ms, normally_ms);
	}
	/**
	 * 停止闪烁
	 */
	public void stopFlash()
	{
		super.stopFlash_NoVirtual();
	}
	/**
	 * 获取模型状态
	 */
	public com.earthview.world.spatial3d.ModelObjectState getModelState()
	{
		return super.getModelState_NoVirtual();
	}
	/**
	 * 获取模型纹理状态
	 */
	public com.earthview.world.spatial3d.TextureState getTextureState()
	{
		return super.getTextureState_NoVirtual();
	}
	/**
	 * 是否需要切换纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean needSwitchTexture()
	{
		return super.needSwitchTexture_NoVirtual();
	}
	/**
	 * 切换小纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean switchThumb(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		return super.switchThumb_NoVirtual(outTmpTextureVec);
	}
	/**
	 * 把切换的小纹理应用到模型
	 */
	public void attachThumb(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		super.attachThumb_NoVirtual(tmpTextureVec);
	}
	/**
	 * 切换大纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean switchOrig(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		return super.switchOrig_NoVirtual(outTmpTextureVec);
	}
	/**
	 * 把切换的大纹理应用到模型
	 */
	public void attachOrig(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		super.attachOrig_NoVirtual(tmpTextureVec);
	}
	/**
	 * 清除临时纹理对象
	 */
	public void clearTmpTextureStream(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		super.clearTmpTextureStream_NoVirtual(tmpTextureVec);
	}
	public void setLoadFromLayer(boolean fromLayer)
	{
		super.setLoadFromLayer_NoVirtual(fromLayer);
	}
	public boolean getLoadFromLayer()
	{
		return super.getLoadFromLayer_NoVirtual();
	}
	public boolean hasFltAnimation()
	{
		return super.hasFltAnimation_NoVirtual();
	}
	/**
	 * 存储包围盒到节点上
	 */
	public void mergeBoundingBoxForNode()
	{
		super.mergeBoundingBoxForNode_NoVirtual();
	}
	/**
	 * 播放所有的节点动画
	 */
	public void startAllNodeAnimation()
	{
		super.startAllNodeAnimation_NoVirtual();
	}
	/**
	 * 播放所有的节点动画
	 */
	public void stopAllNodeAnimation()
	{
		super.stopAllNodeAnimation_NoVirtual();
	}
	/**
	 * 播放所有的动画
	 */
	public void startAllAnimation()
	{
		super.startAllAnimation_NoVirtual();
	}
	/**
	 * 跟据时间标记点播放动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
	 * @param keyTimeTagName 标记点的名字
	 * @param segmentConut 段数
	 * @param option 要选择播放动画的类型TimeRelationShip类型的组合
	 */
	public void startRangeAnimation(String keyTimeTagName, int segmentConut, long option)
	{
		super.startRangeAnimation_NoVirtual(keyTimeTagName, segmentConut, option);
	}
	/**
	 * 跟据时间标记点播放一段动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
	 * @param keyTimeTagName 标记点的名字
	 */
	public void startRangeAnimation(String keyTimeTagName)
	{
		super.startRangeAnimation_NoVirtual(keyTimeTagName);
	}
	/**
	 * 跟据时间标记点播放动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
	 * @param keyTimeTagName 标记点的名字
	 * @param segmentConut 段数
	 * @param option 要选择播放动画的类型TimeRelationShip类型的组合
	 * @return 被选中动画信息的句柄，停止动画时使用
	 */
	public int startRangeAnimationIndependently(String keyTimeTagName, int segmentConut, long option)
	{
		return super.startRangeAnimationIndependently_NoVirtual(keyTimeTagName, segmentConut, option);
	}
	/**
	 * 跟据时间标记点播放一段动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
	 * @param keyTimeTagName 标记点的名字
	 * @return 被选中动画信息的句柄，停止动画时使用
	 */
	public int startRangeAnimationIndependently(String keyTimeTagName)
	{
		return super.startRangeAnimationIndependently_NoVirtual(keyTimeTagName);
	}
	/**
	 * 停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
	 * @param stopAtRangeStart true，停止在区间的起始点；false，停在区间的终点
	 */
	public void stopRangeAnimation(boolean stopAtRangeStart)
	{
		super.stopRangeAnimation_NoVirtual(stopAtRangeStart);
	}
	/**
	 * 停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
	 * @param stopAtRangeStart true，停止在区间的起始点；false，停在区间的终点
	 * @param handle 调用startRangeAnimationIndependently后，返回的值
	 */
	public void stopRangeAnimation(boolean stopAtRangeStart, int handle)
	{
		super.stopRangeAnimation_NoVirtual(stopAtRangeStart, handle);
	}
	/**
	 * 停止播放所有的动画
	 */
	public void stopAllAnimation()
	{
		super.stopAllAnimation_NoVirtual();
	}
	/**
	 * 暂停播放所有的动画
	 */
	public void pauseAllAnimation()
	{
		super.pauseAllAnimation_NoVirtual();
	}
	/**
	 * /继续播放所有的动画
	 * @param  
	 */
	public void continueAllAnimation()
	{
		super.continueAllAnimation_NoVirtual();
	}
	/**
	 * /设置动画是否循环播放
	 * @param loop true开启循环播放，false关闭循环播放
	 */
	public void setAllAnimationLoop(boolean loop)
	{
		super.setAllAnimationLoop_NoVirtual(loop);
	}
	/**
	 * /根据动画的名字播放动画
	 * @param animationName 动画名字
	 */
	public void startAnimation(String animationName)
	{
		super.startAnimation_NoVirtual(animationName);
	}
	/**
	 * /根据动画的名字停止播放动画
	 * @param animationName 动画名字
	 */
	public void stopAnimation(String animationName)
	{
		super.stopAnimation_NoVirtual(animationName);
	}
	/**
	 * /根据动画的名字停止播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void stopAnimation(String animationName, boolean processChild)
	{
		super.stopAnimation_NoVirtual(animationName, processChild);
	}
	/**
	 * /根据动画的名字暂停播放动画
	 * @param animationName 动画名字
	 */
	public void pauseAnimation(String animationName)
	{
		super.pauseAnimation_NoVirtual(animationName);
	}
	/**
	 * /根据动画的名字暂停播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void pauseAnimation(String animationName, boolean processChild)
	{
		super.pauseAnimation_NoVirtual(animationName, processChild);
	}
	/**
	 * /根据动画的名字继续播放动画
	 * @param animationName 动画名字
	 */
	public void continueAnimation(String animationName)
	{
		super.continueAnimation_NoVirtual(animationName);
	}
	/**
	 * /根据动画的名字继续播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void continueAnimation(String animationName, boolean processChild)
	{
		super.continueAnimation_NoVirtual(animationName, processChild);
	}
	/**
	 * /根据动画的名字设置动画是否循环播放
	 * @param animationName 动画名字
	 * @param loop true循环播放，false不循环播放
	 */
	public void setAnimationLoop(String animationName, boolean loop)
	{
		super.setAnimationLoop_NoVirtual(animationName, loop);
	}
	/**
	 * /根据动画的名字设置动画是否循环播放
	 * @param animationName 动画名字
	 * @param loop true循环播放，false不循环播放
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void setAnimationLoop(String animationName, boolean loop, boolean processChild)
	{
		super.setAnimationLoop_NoVirtual(animationName, loop, processChild);
	}
	/**
	 * 获取节点
	 * @return true成功，false失败
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		return super.getNode_NoVirtual();
	}
	/**
	 * 是否完成加载，需要重写
	 * @return true成功，false失败
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否完成挂接，需要重写
	 * @return true成功，false失败
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 加载资源，需要重写
	 * @return true成功，false失败
	 */
	public boolean load()
	{
		return super.load_NoVirtual();
	}
	/**
	 * 卸载模型资源，需要重写
	 * @return true成功，false失败
	 */
	public boolean unload()
	{
		return super.unload_NoVirtual();
	}
	/**
	 * 直接挂到场景，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean attachToScene()
	{
		return super.attachToScene_NoVirtual();
	}
	/**
	 * 从场景反挂接，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean detachFromScene()
	{
		return super.detachFromScene_NoVirtual();
	}
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		super.setUserData_NoVirtual(userData);
	}
	public boolean getSelectable()
	{
		return super.getSelectable_NoVirtual();
	}
	public boolean update()
	{
		return super.update_NoVirtual();
	}
	/**
	 * 获取可见对象所在图层
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		return super.getLayer_NoVirtual();
	}
	/**
	 * 获取可见对象所在数据集
	 * @return 数据集对象
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取可见对象id
	 * @return id
	 */
	public long getID()
	{
		return super.getID_NoVirtual();
	}
	/**
	 * 获取可见对象名称
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置可见对象矩阵
	 * @param m 矩阵4元数
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		super.setMatrix_NoVirtual(m);
	}
	/**
	 * 获取可见对象矩阵
	 * @return 矩阵4元数
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		return super.getMatrix_NoVirtual();
	}
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
		super.setPosition_NoVirtual(latitude, longitude, altitude, scale, qua);
	}
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
		super.getPosition_NoVirtual(latitude, longitude, altitude, scale, qua);
	}
	
	native protected void register_getEntity_void(long pNativeObject, String method);
	native protected void register_applyEnvMap_ev_bool(long pNativeObject, String method);
	native protected void register_isApplyEnvMap_void(long pNativeObject, String method);
	native protected void register_load_IntVector(long pNativeObject, String method);
	native protected void register_setLocalMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getLocalMatrix_void(long pNativeObject, String method);
	native protected void register_getModelDBTransform_CVector3_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getFile_void(long pNativeObject, String method);
	native protected void register_isFileDirAsGroup_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getWorldAABB_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_getSubEntityVisibility_ev_uint32(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_calculateSubEntityIndex_ev_uint16_ev_uint32(long pNativeObject, String method);
	native protected void register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, String method);
	native protected void register_getNumSubEntities_void(long pNativeObject, String method);
	native protected void register_getAliasName_void(long pNativeObject, String method);
	native protected void register_getBindedState_void(long pNativeObject, String method);
	native protected void register_getAllBindedEffect_void(long pNativeObject, String method);
	native protected void register_getAllBindedLight_void(long pNativeObject, String method);
	native protected void register_getBindedEffect_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedLight_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedParticle_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrail_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedEffect_EVString(long pNativeObject, String method);
	native protected void register_getBindedEffectByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getBindedParticle_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrailByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getAllBindedModel_void(long pNativeObject, String method);
	native protected void register_getBindedModel_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedModelByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getComponentByName_EVString(long pNativeObject, String method);
	native protected void register_getComponentBySubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_getParentComponentByName_EVString(long pNativeObject, String method);
	native protected void register_getRootComponent_void(long pNativeObject, String method);
	native protected void register_getBindedModel_EVString(long pNativeObject, String method);
	native protected void register_getBindedParticleByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrailByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedModelByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedLightByName_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_unBindEffect_CEffect(long pNativeObject, String method);
	native protected void register_unBindLight_CLight(long pNativeObject, String method);
	native protected void register_unBindModel_CModelBaseObject(long pNativeObject, String method);
	native protected void register_getBindedID_void(long pNativeObject, String method);
	native protected void register_setBindedID_ev_uint32(long pNativeObject, String method);
	native protected void register_setBindedEffectVisibility_ev_bool(long pNativeObject, String method);
	native protected void register_updateMaterial_CMaterialPtr_StringVector_StringVector(long pNativeObject, String method);
	native protected void register_setMaterial_ev_uint32_CMaterialPtr(long pNativeObject, String method);
	native protected void register_getMeshPtr_void(long pNativeObject, String method);
	native protected void register_getTexturePtrs_void(long pNativeObject, String method);
	native protected void register_getMaterialPtrs_void(long pNativeObject, String method);
	native protected void register_getGpuPtrs_void(long pNativeObject, String method);
	native protected void register_getMeshFeature_void(long pNativeObject, String method);
	native protected void register_getOrigTextureFeatures_void(long pNativeObject, String method);
	native protected void register_getThumbTextureFeatures_void(long pNativeObject, String method);
	native protected void register_getMaterialFeatures_void(long pNativeObject, String method);
	native protected void register_getAnimationFeatures_void(long pNativeObject, String method);
	native protected void register_getGpuFeatures_void(long pNativeObject, String method);
	native protected void register_getProgramFeatures_void(long pNativeObject, String method);
	native protected void register_getResourceFeature_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_getSelectionColour_void(long pNativeObject, String method);
	native protected void register_startFlash_CColourValue_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_stopFlash_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntitySelected_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_getSubEntitySelected_ev_uint32(long pNativeObject, String method);
	native protected void register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(long pNativeObject, String method);
	native protected void register_getSubMeshName_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubMeshMatrix_ev_uint32(long pNativeObject, String method);
	native protected void register_addNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, String method);
	native protected void register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setEditable_ev_bool(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_setTransparency_ev_real64(long pNativeObject, String method);
	native protected void register_setTransparency_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_setReflectable_ev_bool(long pNativeObject, String method);
	native protected void register_getReflectable_void(long pNativeObject, String method);
	native protected void register_setRefractable_ev_bool(long pNativeObject, String method);
	native protected void register_getRefractable_void(long pNativeObject, String method);
	native protected void register_getModelState_void(long pNativeObject, String method);
	native protected void register_getTextureState_void(long pNativeObject, String method);
	native protected void register_needSwitchTexture_void(long pNativeObject, String method);
	native protected void register_switchThumb_TexturePtrVector(long pNativeObject, String method);
	native protected void register_attachThumb_TexturePtrVector(long pNativeObject, String method);
	native protected void register_switchOrig_TexturePtrVector(long pNativeObject, String method);
	native protected void register_attachOrig_TexturePtrVector(long pNativeObject, String method);
	native protected void register_clearTmpTextureStream_TexturePtrVector(long pNativeObject, String method);
	native protected void register_setLoadFromLayer_ev_bool(long pNativeObject, String method);
	native protected void register_getLoadFromLayer_void(long pNativeObject, String method);
	native protected void register_hasFltAnimation_void(long pNativeObject, String method);
	native protected void register_mergeBoundingBoxForNode_void(long pNativeObject, String method);
	native protected void register_prepareForNodeAnimation_void(long pNativeObject, String method);
	native protected void register_resumeNodeAnimationState_void(long pNativeObject, String method);
	native protected void register_startAllNodeAnimation_void(long pNativeObject, String method);
	native protected void register_stopAllNodeAnimation_void(long pNativeObject, String method);
	native protected void register_startAllAnimation_void(long pNativeObject, String method);
	native protected void register_startRangeAnimation_EVString_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_startRangeAnimation_EVString(long pNativeObject, String method);
	native protected void register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_startRangeAnimationIndependently_EVString(long pNativeObject, String method);
	native protected void register_stopRangeAnimation_ev_bool(long pNativeObject, String method);
	native protected void register_stopRangeAnimation_ev_bool_ev_int32(long pNativeObject, String method);
	native protected void register_stopAllAnimation_void(long pNativeObject, String method);
	native protected void register_pauseAllAnimation_void(long pNativeObject, String method);
	native protected void register_continueAllAnimation_void(long pNativeObject, String method);
	native protected void register_setAllAnimationLoop_ev_bool(long pNativeObject, String method);
	native protected void register_startAnimation_EVString(long pNativeObject, String method);
	native protected void register_stopAnimation_EVString(long pNativeObject, String method);
	native protected void register_stopAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_pauseAnimation_EVString(long pNativeObject, String method);
	native protected void register_pauseAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_continueAnimation_EVString(long pNativeObject, String method);
	native protected void register_continueAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_setAnimationLoop_EVString_bool(long pNativeObject, String method);
	native protected void register_setAnimationLoop_EVString_bool_ev_bool(long pNativeObject, String method);
	native protected void register_createLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_createLocalAxisNode_EVString(long pNativeObject, String method);
	native protected void register_getLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_destroyLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_getBoneNode_EVString(long pNativeObject, String method);
	native protected void register_updateSkeletonAnimationVertex_void(long pNativeObject, String method);
	native protected void register_initializeAnimation_void(long pNativeObject, String method);
	native protected void register_initializeModelAnimation_void(long pNativeObject, String method);
	native protected void register_initializeNodeAnimation_void(long pNativeObject, String method);
	native protected void register_setComponentVisible_CComponent_ev_bool(long pNativeObject, String method);
	native protected void register_setComponentHighlight_CComponent_ev_bool(long pNativeObject, String method);
	native protected void register_setComponentTransparency_CComponent_ev_real32(long pNativeObject, String method);
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
			this.register_getEntity_void(this.nativeObject.pointer, "getEntity_void_callback");
			this.register_applyEnvMap_ev_bool(this.nativeObject.pointer, "applyEnvMap_ev_bool_callback");
			this.register_isApplyEnvMap_void(this.nativeObject.pointer, "isApplyEnvMap_void_callback");
			this.register_load_IntVector(this.nativeObject.pointer, "load_IntVector_callback");
			this.register_setLocalMatrix_CMatrix4(this.nativeObject.pointer, "setLocalMatrix_CMatrix4_callback");
			this.register_getLocalMatrix_void(this.nativeObject.pointer, "getLocalMatrix_void_callback");
			this.register_getModelDBTransform_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, "getModelDBTransform_CVector3_CVector3_CQuaternion_callback");
			this.register_getFile_void(this.nativeObject.pointer, "getFile_void_callback");
			this.register_isFileDirAsGroup_void(this.nativeObject.pointer, "isFileDirAsGroup_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getWorldAABB_void(this.nativeObject.pointer, "getWorldAABB_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_setVisible_ev_bool_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_ev_bool_callback");
			this.register_setSubEntityVisibility_ev_uint32_ev_bool(this.nativeObject.pointer, "setSubEntityVisibility_ev_uint32_ev_bool_callback");
			this.register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(this.nativeObject.pointer, "setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback");
			this.register_getSubEntityVisibility_ev_uint32(this.nativeObject.pointer, "getSubEntityVisibility_ev_uint32_callback");
			this.register_setRenderingMaxDistance_ev_real64(this.nativeObject.pointer, "setRenderingMaxDistance_ev_real64_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_ev_real64(this.nativeObject.pointer, "setRenderingMinDistance_ev_real64_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_calculateSubEntityIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, "calculateSubEntityIndex_ev_uint16_ev_uint32_callback");
			this.register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, "calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback");
			this.register_getNumSubEntities_void(this.nativeObject.pointer, "getNumSubEntities_void_callback");
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
			this.register_getBindedState_void(this.nativeObject.pointer, "getBindedState_void_callback");
			this.register_getAllBindedEffect_void(this.nativeObject.pointer, "getAllBindedEffect_void_callback");
			this.register_getAllBindedLight_void(this.nativeObject.pointer, "getAllBindedLight_void_callback");
			this.register_getBindedEffect_ev_uint32(this.nativeObject.pointer, "getBindedEffect_ev_uint32_callback");
			this.register_getBindedLight_ev_uint32(this.nativeObject.pointer, "getBindedLight_ev_uint32_callback");
			this.register_getBindedParticle_ev_uint32(this.nativeObject.pointer, "getBindedParticle_ev_uint32_callback");
			this.register_getBindedRibbonTrail_ev_uint32(this.nativeObject.pointer, "getBindedRibbonTrail_ev_uint32_callback");
			this.register_getBindedEffect_EVString(this.nativeObject.pointer, "getBindedEffect_EVString_callback");
			this.register_getBindedEffectByNodeName_EVString(this.nativeObject.pointer, "getBindedEffectByNodeName_EVString_callback");
			this.register_getBindedParticle_EVString(this.nativeObject.pointer, "getBindedParticle_EVString_callback");
			this.register_getBindedRibbonTrail_EVString(this.nativeObject.pointer, "getBindedRibbonTrail_EVString_callback");
			this.register_getBindedRibbonTrailByNodeName_EVString(this.nativeObject.pointer, "getBindedRibbonTrailByNodeName_EVString_callback");
			this.register_getAllBindedModel_void(this.nativeObject.pointer, "getAllBindedModel_void_callback");
			this.register_getBindedModel_ev_uint32(this.nativeObject.pointer, "getBindedModel_ev_uint32_callback");
			this.register_getBindedModelByNodeName_EVString(this.nativeObject.pointer, "getBindedModelByNodeName_EVString_callback");
			this.register_getComponentByName_EVString(this.nativeObject.pointer, "getComponentByName_EVString_callback");
			this.register_getComponentBySubEntityIndex_ev_uint32(this.nativeObject.pointer, "getComponentBySubEntityIndex_ev_uint32_callback");
			this.register_getParentComponentByName_EVString(this.nativeObject.pointer, "getParentComponentByName_EVString_callback");
			this.register_getRootComponent_void(this.nativeObject.pointer, "getRootComponent_void_callback");
			this.register_getBindedModel_EVString(this.nativeObject.pointer, "getBindedModel_EVString_callback");
			this.register_getBindedParticleByName_EVString(this.nativeObject.pointer, "getBindedParticleByName_EVString_callback");
			this.register_getBindedRibbonTrailByName_EVString(this.nativeObject.pointer, "getBindedRibbonTrailByName_EVString_callback");
			this.register_getBindedModelByName_EVString(this.nativeObject.pointer, "getBindedModelByName_EVString_callback");
			this.register_getBindedLightByName_EVString(this.nativeObject.pointer, "getBindedLightByName_EVString_callback");
			this.register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback");
			this.register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback");
			this.register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback");
			this.register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback");
			this.register_unBindEffect_CEffect(this.nativeObject.pointer, "unBindEffect_CEffect_callback");
			this.register_unBindLight_CLight(this.nativeObject.pointer, "unBindLight_CLight_callback");
			this.register_unBindModel_CModelBaseObject(this.nativeObject.pointer, "unBindModel_CModelBaseObject_callback");
			this.register_getBindedID_void(this.nativeObject.pointer, "getBindedID_void_callback");
			this.register_setBindedID_ev_uint32(this.nativeObject.pointer, "setBindedID_ev_uint32_callback");
			this.register_setBindedEffectVisibility_ev_bool(this.nativeObject.pointer, "setBindedEffectVisibility_ev_bool_callback");
			this.register_updateMaterial_CMaterialPtr_StringVector_StringVector(this.nativeObject.pointer, "updateMaterial_CMaterialPtr_StringVector_StringVector_callback");
			this.register_setMaterial_ev_uint32_CMaterialPtr(this.nativeObject.pointer, "setMaterial_ev_uint32_CMaterialPtr_callback");
			this.register_getMeshPtr_void(this.nativeObject.pointer, "getMeshPtr_void_callback");
			this.register_getTexturePtrs_void(this.nativeObject.pointer, "getTexturePtrs_void_callback");
			this.register_getMaterialPtrs_void(this.nativeObject.pointer, "getMaterialPtrs_void_callback");
			this.register_getGpuPtrs_void(this.nativeObject.pointer, "getGpuPtrs_void_callback");
			this.register_getMeshFeature_void(this.nativeObject.pointer, "getMeshFeature_void_callback");
			this.register_getOrigTextureFeatures_void(this.nativeObject.pointer, "getOrigTextureFeatures_void_callback");
			this.register_getThumbTextureFeatures_void(this.nativeObject.pointer, "getThumbTextureFeatures_void_callback");
			this.register_getMaterialFeatures_void(this.nativeObject.pointer, "getMaterialFeatures_void_callback");
			this.register_getAnimationFeatures_void(this.nativeObject.pointer, "getAnimationFeatures_void_callback");
			this.register_getGpuFeatures_void(this.nativeObject.pointer, "getGpuFeatures_void_callback");
			this.register_getProgramFeatures_void(this.nativeObject.pointer, "getProgramFeatures_void_callback");
			this.register_getResourceFeature_void(this.nativeObject.pointer, "getResourceFeature_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_getSelectionColour_void(this.nativeObject.pointer, "getSelectionColour_void_callback");
			this.register_startFlash_CColourValue_ev_uint32_ev_uint32(this.nativeObject.pointer, "startFlash_CColourValue_ev_uint32_ev_uint32_callback");
			this.register_stopFlash_void(this.nativeObject.pointer, "stopFlash_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_setSubEntitySelected_ev_uint32_ev_bool(this.nativeObject.pointer, "setSubEntitySelected_ev_uint32_ev_bool_callback");
			this.register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool(this.nativeObject.pointer, "setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback");
			this.register_getSubEntitySelected_ev_uint32(this.nativeObject.pointer, "getSubEntitySelected_ev_uint32_callback");
			this.register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, "getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback");
			this.register_getSubMeshName_ev_uint32(this.nativeObject.pointer, "getSubMeshName_ev_uint32_callback");
			this.register_getSubMeshMatrix_ev_uint32(this.nativeObject.pointer, "getSubMeshMatrix_ev_uint32_callback");
			this.register_addNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, "addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
			this.register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, "removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setEditable_ev_bool(this.nativeObject.pointer, "setEditable_ev_bool_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_setTransparency_ev_real64(this.nativeObject.pointer, "setTransparency_ev_real64_callback");
			this.register_setTransparency_ev_uint32_ev_real64(this.nativeObject.pointer, "setTransparency_ev_uint32_ev_real64_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "setEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_setReflectable_ev_bool(this.nativeObject.pointer, "setReflectable_ev_bool_callback");
			this.register_getReflectable_void(this.nativeObject.pointer, "getReflectable_void_callback");
			this.register_setRefractable_ev_bool(this.nativeObject.pointer, "setRefractable_ev_bool_callback");
			this.register_getRefractable_void(this.nativeObject.pointer, "getRefractable_void_callback");
			this.register_getModelState_void(this.nativeObject.pointer, "getModelState_void_callback");
			this.register_getTextureState_void(this.nativeObject.pointer, "getTextureState_void_callback");
			this.register_needSwitchTexture_void(this.nativeObject.pointer, "needSwitchTexture_void_callback");
			this.register_switchThumb_TexturePtrVector(this.nativeObject.pointer, "switchThumb_TexturePtrVector_callback");
			this.register_attachThumb_TexturePtrVector(this.nativeObject.pointer, "attachThumb_TexturePtrVector_callback");
			this.register_switchOrig_TexturePtrVector(this.nativeObject.pointer, "switchOrig_TexturePtrVector_callback");
			this.register_attachOrig_TexturePtrVector(this.nativeObject.pointer, "attachOrig_TexturePtrVector_callback");
			this.register_clearTmpTextureStream_TexturePtrVector(this.nativeObject.pointer, "clearTmpTextureStream_TexturePtrVector_callback");
			this.register_setLoadFromLayer_ev_bool(this.nativeObject.pointer, "setLoadFromLayer_ev_bool_callback");
			this.register_getLoadFromLayer_void(this.nativeObject.pointer, "getLoadFromLayer_void_callback");
			this.register_hasFltAnimation_void(this.nativeObject.pointer, "hasFltAnimation_void_callback");
			this.register_mergeBoundingBoxForNode_void(this.nativeObject.pointer, "mergeBoundingBoxForNode_void_callback");
			this.register_prepareForNodeAnimation_void(this.nativeObject.pointer, "prepareForNodeAnimation_void_callback");
			this.register_resumeNodeAnimationState_void(this.nativeObject.pointer, "resumeNodeAnimationState_void_callback");
			this.register_startAllNodeAnimation_void(this.nativeObject.pointer, "startAllNodeAnimation_void_callback");
			this.register_stopAllNodeAnimation_void(this.nativeObject.pointer, "stopAllNodeAnimation_void_callback");
			this.register_startAllAnimation_void(this.nativeObject.pointer, "startAllAnimation_void_callback");
			this.register_startRangeAnimation_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, "startRangeAnimation_EVString_ev_int32_ev_uint32_callback");
			this.register_startRangeAnimation_EVString(this.nativeObject.pointer, "startRangeAnimation_EVString_callback");
			this.register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, "startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback");
			this.register_startRangeAnimationIndependently_EVString(this.nativeObject.pointer, "startRangeAnimationIndependently_EVString_callback");
			this.register_stopRangeAnimation_ev_bool(this.nativeObject.pointer, "stopRangeAnimation_ev_bool_callback");
			this.register_stopRangeAnimation_ev_bool_ev_int32(this.nativeObject.pointer, "stopRangeAnimation_ev_bool_ev_int32_callback");
			this.register_stopAllAnimation_void(this.nativeObject.pointer, "stopAllAnimation_void_callback");
			this.register_pauseAllAnimation_void(this.nativeObject.pointer, "pauseAllAnimation_void_callback");
			this.register_continueAllAnimation_void(this.nativeObject.pointer, "continueAllAnimation_void_callback");
			this.register_setAllAnimationLoop_ev_bool(this.nativeObject.pointer, "setAllAnimationLoop_ev_bool_callback");
			this.register_startAnimation_EVString(this.nativeObject.pointer, "startAnimation_EVString_callback");
			this.register_stopAnimation_EVString(this.nativeObject.pointer, "stopAnimation_EVString_callback");
			this.register_stopAnimation_EVString_ev_bool(this.nativeObject.pointer, "stopAnimation_EVString_ev_bool_callback");
			this.register_pauseAnimation_EVString(this.nativeObject.pointer, "pauseAnimation_EVString_callback");
			this.register_pauseAnimation_EVString_ev_bool(this.nativeObject.pointer, "pauseAnimation_EVString_ev_bool_callback");
			this.register_continueAnimation_EVString(this.nativeObject.pointer, "continueAnimation_EVString_callback");
			this.register_continueAnimation_EVString_ev_bool(this.nativeObject.pointer, "continueAnimation_EVString_ev_bool_callback");
			this.register_setAnimationLoop_EVString_bool(this.nativeObject.pointer, "setAnimationLoop_EVString_bool_callback");
			this.register_setAnimationLoop_EVString_bool_ev_bool(this.nativeObject.pointer, "setAnimationLoop_EVString_bool_ev_bool_callback");
			this.register_createLocalAxisNode_void(this.nativeObject.pointer, "createLocalAxisNode_void_callback");
			this.register_createLocalAxisNode_EVString(this.nativeObject.pointer, "createLocalAxisNode_EVString_callback");
			this.register_getLocalAxisNode_void(this.nativeObject.pointer, "getLocalAxisNode_void_callback");
			this.register_destroyLocalAxisNode_void(this.nativeObject.pointer, "destroyLocalAxisNode_void_callback");
			this.register_getBoneNode_EVString(this.nativeObject.pointer, "getBoneNode_EVString_callback");
			this.register_updateSkeletonAnimationVertex_void(this.nativeObject.pointer, "updateSkeletonAnimationVertex_void_callback");
			this.register_initializeAnimation_void(this.nativeObject.pointer, "initializeAnimation_void_callback");
			this.register_initializeModelAnimation_void(this.nativeObject.pointer, "initializeModelAnimation_void_callback");
			this.register_initializeNodeAnimation_void(this.nativeObject.pointer, "initializeNodeAnimation_void_callback");
			this.register_setComponentVisible_CComponent_ev_bool(this.nativeObject.pointer, "setComponentVisible_CComponent_ev_bool_callback");
			this.register_setComponentHighlight_CComponent_ev_bool(this.nativeObject.pointer, "setComponentHighlight_CComponent_ev_bool_callback");
			this.register_setComponentTransparency_CComponent_ev_real32(this.nativeObject.pointer, "setComponentTransparency_CComponent_ev_real32_callback");
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
	
	public static ManualModelObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ManualModelObject obj = null;
 		if(baseObj instanceof ManualModelObject)
		{
			obj = (ManualModelObject)baseObj;
		} else {
			obj = new ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CManualModelObject");
			obj.increaseCast();
		}

		return obj;
	}
}
