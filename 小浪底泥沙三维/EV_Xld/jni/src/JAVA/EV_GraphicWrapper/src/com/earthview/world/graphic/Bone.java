package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 骨头类管理骨头(骨骼的组成部分)
 */
public class Bone extends com.earthview.world.graphic.Node {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBone", new BoneClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBoneProxy", new BoneClassFactory());
	}

	/**
	 * 构造函数
	 * @param handle 骨头标识
	 * @param creator 所属骨骼对象
	 */
	public Bone(int handle, com.earthview.world.graphic.Skeleton ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCBoneProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Bone".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 骨头名称
	 * @param handle 骨头标识
	 * @param creator 所属骨骼对象
	 */
	public Bone(String name, int handle, com.earthview.world.graphic.Skeleton ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCBoneProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Bone".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createChild_ev_uint16_CVector3_CQuaternion_callback(int handle, long translate, long rotate)
	{
		int handleParamValue = handle;
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.spatial.math.Quaternion rotateParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		rotateParamValue.setDelegate(true);
		rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		IClassFactory rotateParamValueClassFactory = GlobalClassFactoryMap.get(rotateParamValue.getCppInstanceTypeName());
		if (rotateParamValueClassFactory != null)
		{
			rotateParamValue.setDelegate(true);
			rotateParamValue = (com.earthview.world.spatial.math.Quaternion)rotateParamValueClassFactory.create();
			rotateParamValue.setDelegate(true);
			rotateParamValue.setInstancePointer(new InstancePointer(rotate));
		}
		com.earthview.world.graphic.Bone returnValue = createChild(handleParamValue, translateParamValue, rotateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_ev_uint16_CVector3_CQuaternion(long pNativeObject, int handle, long translate, long rotate);
	/**
	 * 创建子骨头
	 * @param handle 子骨头标识
	 * @param translate 变换向量
	 * @param rotate 旋转四元数
	 * @return 子骨头对象
	 */
	public com.earthview.world.graphic.Bone createChild(int handle, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		int handleParamValue = handle;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_ev_uint16_CVector3_CQuaternion(this.nativeObject.pointer, handleParamValue, translateParamValue, rotateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createChild_ev_uint16_CVector3_CQuaternion_NoVirtual(long pNativeObject, int handle, long translate, long rotate);
	protected com.earthview.world.graphic.Bone createChild_NoVirtual(int handle, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		int handleParamValue = handle;
		long translateParamValue = translate.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long returnValue = createChild_ev_uint16_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, handleParamValue, translateParamValue, rotateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long createChild_ev_uint16_CVector3_callback(int handle, long translate)
	{
		int handleParamValue = handle;
		com.earthview.world.spatial.math.Vector3 translateParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		translateParamValue.setDelegate(true);
		translateParamValue.setInstancePointer(new InstancePointer(translate));
		IClassFactory translateParamValueClassFactory = GlobalClassFactoryMap.get(translateParamValue.getCppInstanceTypeName());
		if (translateParamValueClassFactory != null)
		{
			translateParamValue.setDelegate(true);
			translateParamValue = (com.earthview.world.spatial.math.Vector3)translateParamValueClassFactory.create();
			translateParamValue.setDelegate(true);
			translateParamValue.setInstancePointer(new InstancePointer(translate));
		}
		com.earthview.world.graphic.Bone returnValue = createChild(handleParamValue, translateParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_ev_uint16_CVector3(long pNativeObject, int handle, long translate);
	/**
	 * 创建子骨头
	 * @param handle 子骨头标识
	 * @param translate 变换向量
	 * @return 子骨头对象
	 */
	public com.earthview.world.graphic.Bone createChild(int handle, com.earthview.world.spatial.math.Vector3 translate)
	{
		int handleParamValue = handle;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_ev_uint16_CVector3(this.nativeObject.pointer, handleParamValue, translateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createChild_ev_uint16_CVector3_NoVirtual(long pNativeObject, int handle, long translate);
	protected com.earthview.world.graphic.Bone createChild_NoVirtual(int handle, com.earthview.world.spatial.math.Vector3 translate)
	{
		int handleParamValue = handle;
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = createChild_ev_uint16_CVector3_NoVirtual(this.nativeObject.pointer, handleParamValue, translateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long createChild_ev_uint16_callback(int handle)
	{
		int handleParamValue = handle;
		com.earthview.world.graphic.Bone returnValue = createChild(handleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createChild_ev_uint16(long pNativeObject, int handle);
	/**
	 * 创建子骨头
	 * @param handle 子骨头标识
	 * @return 子骨头对象
	 */
	public com.earthview.world.graphic.Bone createChild(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createChild_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createChild_ev_uint16_NoVirtual(long pNativeObject, int handle);
	protected com.earthview.world.graphic.Bone createChild_NoVirtual(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createChild_ev_uint16_NoVirtual(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	native private int getHandle_void(long pNativeObject);
	/**
	 * 获得骨头标识
	 * @param  
	 * @return 骨头标识
	 */
	public int getHandle()
	{
		int returnValue = getHandle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCreator_void(long pNativeObject);
	public com.earthview.world.graphic.Skeleton getCreator()
	{
		long returnValue = getCreator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Skeleton __returnValue = new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate, "CSkeleton");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeleton");
		}
		return __returnValue;
	}
	native private void setBindingPose_void(long pNativeObject);
	/**
	 * 设置骨头绑定姿态
	 * @param  
	 */
	public void setBindingPose()
	{
		setBindingPose_void(this.nativeObject.pointer);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置骨头绑定姿态
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void setManuallyControlled_ev_bool(long pNativeObject, boolean manuallyControlled);
	/**
	 * 设置是否手动控制骨头状态
	 * @param manuallyControlled 是否手动控制骨头状态标志
	 */
	public void setManuallyControlled(boolean manuallyControlled)
	{
		boolean manuallyControlledParamValue = manuallyControlled;
		setManuallyControlled_ev_bool(this.nativeObject.pointer, manuallyControlledParamValue);
	}
	native private boolean isManuallyControlled_void(long pNativeObject);
	/**
	 * 获得是否手动控制骨头状态
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isManuallyControlled()
	{
		boolean returnValue = isManuallyControlled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _getOffsetTransform_CMatrix4(long pNativeObject, long m);
	/**
	 * 获得骨头变换矩阵
	 * @param m 变换矩阵
	 */
	public void _getOffsetTransform(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		_getOffsetTransform_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private long _getBindingPoseInverseScale_void(long pNativeObject);
	/**
	 * 获得骨头绑定姿态逆缩放向量
	 * @param  
	 * @return 骨头绑定姿态逆向量
	 */
	public com.earthview.world.spatial.math.Vector3 _getBindingPoseInverseScale()
	{
		long returnValue = _getBindingPoseInverseScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long _getBindingPoseInversePosition_void(long pNativeObject);
	/**
	 * 获得骨头绑定位置逆向量
	 * @param  
	 * @return 骨头绑定位置逆向量
	 */
	public com.earthview.world.spatial.math.Vector3 _getBindingPoseInversePosition()
	{
		long returnValue = _getBindingPoseInversePosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long _getBindingPoseInverseOrientation_void(long pNativeObject);
	/**
	 * 获得骨头绑定方向反转四元数
	 * @param  
	 * @return 骨头绑定方向反转四元数
	 */
	public com.earthview.world.spatial.math.Quaternion _getBindingPoseInverseOrientation()
	{
		long returnValue = _getBindingPoseInverseOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void needUpdate_ev_bool(long pNativeObject, boolean forceParentUpdate);
	/**
	 * 设置需要更新
	 * @param forceParentUpdate 是否更新标识
	 */
	public void needUpdate(boolean forceParentUpdate)
	{
		boolean forceParentUpdateParamValue = forceParentUpdate;
		needUpdate_ev_bool(this.nativeObject.pointer, forceParentUpdateParamValue);
	}
	native private void needUpdate_ev_bool_NoVirtual(long pNativeObject, boolean forceParentUpdate);
	protected void needUpdate_NoVirtual(boolean forceParentUpdate)
	{
		boolean forceParentUpdateParamValue = forceParentUpdate;
		needUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, forceParentUpdateParamValue);
	}

	native private void needUpdate_void(long pNativeObject);
	/**
	 * 设置需要更新
	 * @param  
	 */
	public void needUpdate()
	{
		needUpdate_void(this.nativeObject.pointer);
	}
	native private void needUpdate_void_NoVirtual(long pNativeObject);
	protected void needUpdate_NoVirtual()
	{
		needUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setOffsetMatrix_CMatrix4(long pNativeObject, long offsetMatrix);
	public void setOffsetMatrix(com.earthview.world.spatial.math.Matrix4 offsetMatrix)
	{
		long offsetMatrixParamValue = offsetMatrix.nativeObject.pointer;
		setOffsetMatrix_CMatrix4(this.nativeObject.pointer, offsetMatrixParamValue);
	}
	native private long getOffsetMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getOffsetMatrix()
	{
		long returnValue = getOffsetMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long createChildImpl_void(long pNativeObject);
	/**
	 * 执行创建子骨头
	 * @param  
	 * @return 返回节点对象
	 */
	public com.earthview.world.graphic.Node createChildImpl()
	{
		long returnValue = createChildImpl_void(this.nativeObject.pointer);
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
	native private long createChildImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual()
	{
		long returnValue = createChildImpl_void_NoVirtual(this.nativeObject.pointer);
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

	native private long createChildImpl_EVString(long pNativeObject, String name);
	/**
	 * 执行创建子骨头
	 * @param name 骨头名称
	 * @return 返回节点对象
	 */
	public com.earthview.world.graphic.Node createChildImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long createChildImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	public Bone(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Bone(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///public:
	///	mutable EarthView::World::Spatial::Math::CMatrix4 mMatrix;
	///mutable EarthView::World::Spatial::Math::CMatrix4 mDerivedMatrix;
	public void _updateFromParent()
	{
		super._updateFromParent_NoVirtual();
	}
	//// Only available internally - notification of parent.
	public void setParent(com.earthview.world.graphic.Node ref_parent)
	{
		super.setParent_NoVirtual(ref_parent);
	}
	public void updateFromParentImpl()
	{
		super.updateFromParentImpl_NoVirtual();
	}
	public void notifyMoved()
	{
		super.notifyMoved_NoVirtual();
	}
	/**
	 * 获取父节点如果父节点为空，表示此节点为根节点
	 * @param  
	 * @return 父节点名称
	 */
	public com.earthview.world.graphic.Node getParent()
	{
		return super.getParent_NoVirtual();
	}
	/**
	 * 获取四元数表示此节点的方向
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		return super.getOrientation_NoVirtual();
	}
	/**
	 * 设置方向通过四元数设置
	 * @param q 四元数值，节点旋转围绕着节点原点
	 */
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super.setOrientation_NoVirtual(q);
	}
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super.setOrientation_NoVirtual(q, notify);
	}
	/**
	 * 设置方向通过四元数设置
	 * @param w 从四个实数构造
	 * @param x 从四个实数构造
	 * @param y 从四个实数构造
	 * @param z 从四个实数构造
	 */
	public void setOrientation(double w, double x, double y, double z)
	{
		super.setOrientation_NoVirtual(w, x, y, z);
	}
	public void setOrientation(double w, double x, double y, double z, boolean notify)
	{
		super.setOrientation_NoVirtual(w, x, y, z, notify);
	}
	/**
	 * 重置四元数本地坐标轴为世界坐标轴，不旋转
	 * @param  
	 */
	public void resetOrientation()
	{
		super.resetOrientation_NoVirtual();
	}
	/**
	 * 设置节点位置
	 * @param pos 三维向量
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super.setPosition_NoVirtual(pos);
	}
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super.setPosition_NoVirtual(pos, notify);
	}
	/**
	 * 设置节点位置
	 * @param x 从三个实数构造三维向量
	 * @param y 从三个实数构造三维向量
	 * @param z 从三个实数构造三维向量
	 */
	public void setPosition(double x, double y, double z)
	{
		super.setPosition_NoVirtual(x, y, z);
	}
	public void setPosition(double x, double y, double z, boolean notify)
	{
		super.setPosition_NoVirtual(x, y, z, notify);
	}
	/**
	 * 获得节点位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		return super.getPosition_NoVirtual();
	}
	/**
	 * 设置缩放因子
	 * @param scale 
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.setScale_NoVirtual(scale);
	}
	public void setScale(com.earthview.world.spatial.math.Vector3 scale, boolean notify)
	{
		super.setScale_NoVirtual(scale, notify);
	}
	/**
	 * 设置缩放因子
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void setScale(double x, double y, double z)
	{
		super.setScale_NoVirtual(x, y, z);
	}
	public void setScale(double x, double y, double z, boolean notify)
	{
		super.setScale_NoVirtual(x, y, z, notify);
	}
	/// <summary>
	///获取缩放因子
	/// </summary>
	/// <param name></param>
	/// <returns>缩放因子</returns>
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		return super.getScale_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的方向属性
	 * @param inherit 继承
	 */
	public void setInheritOrientation(boolean inherit)
	{
		super.setInheritOrientation_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的方向属性
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritOrientation()
	{
		return super.getInheritOrientation_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的缩放因子
	 * @param inherit 继承
	 */
	public void setInheritScale(boolean inherit)
	{
		super.setInheritScale_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的缩放因子
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritScale()
	{
		return super.getInheritScale_NoVirtual();
	}
	/**
	 * 缩放因子
	 * @param scale 缩放向量
	 */
	public void scale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.scale_NoVirtual(scale);
	}
	/**
	 * 缩放因子
	 * @param x 常数
	 * @param y 常数
	 * @param z 常数
	 */
	public void scale(double x, double y, double z)
	{
		super.scale_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(d, relativeTo);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d)
	{
		super.translate_NoVirtual(d);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(double x, double y, double z)
	{
		super.translate_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, move, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
	{
		super.translate_NoVirtual(axes, move);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z)
	{
		super.translate_NoVirtual(axes, x, y, z);
	}
	/**
	 * 沿Z轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void roll(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.roll_NoVirtual(angle, relativeTo);
	}
	public void roll(com.earthview.world.spatial.math.Radian angle)
	{
		super.roll_NoVirtual(angle);
	}
	/**
	 * 沿X轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void pitch(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.pitch_NoVirtual(angle, relativeTo);
	}
	public void pitch(com.earthview.world.spatial.math.Radian angle)
	{
		super.pitch_NoVirtual(angle);
	}
	/**
	 * 沿Y轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void yaw(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.yaw_NoVirtual(angle, relativeTo);
	}
	public void yaw(com.earthview.world.spatial.math.Radian angle)
	{
		super.yaw_NoVirtual(angle);
	}
	/**
	 * 根据指定的坐标轴旋转节点
	 * @param axis 三维矩阵
	 * @param angle 角度，弧度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(axis, angle, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		super.rotate_NoVirtual(axis, angle);
	}
	/**
	 * 使用指定的四元数旋转节点
	 * @param q 四元数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(q, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Quaternion q)
	{
		super.rotate_NoVirtual(q);
	}
	/**
	 * 设置世界变换矩阵
	 * @param mat 世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setMatrix_NoVirtual(mat);
	}
	/**
	 * 获得世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		return super.getMatrix_NoVirtual();
	}
	/**
	 * 设置相对于父节点的局部变换矩阵
	 * @param mat 局部变换矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setLocalMatrix_NoVirtual(mat);
	}
	/**
	 * 获得相对于父节点的局部变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		return super.getLocalMatrix_NoVirtual();
	}
	/**
	 * 获取本地坐标轴获取一个矩阵，其列是基于当前坐标系，它的节点继承他的父类。
	 */
	public com.earthview.world.spatial.math.Matrix3 getLocalAxes()
	{
		return super.getLocalAxes_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(translate);
	}
	public com.earthview.world.graphic.Node createChild()
	{
		return super.createChild_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param name 名称
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(name, translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(name, translate);
	}
	public com.earthview.world.graphic.Node createChild(String name)
	{
		return super.createChild_NoVirtual(name);
	}
	/**
	 * 添加子节点
	 * @param name 名称
	 */
	public void addChild(com.earthview.world.graphic.Node ref_child)
	{
		super.addChild_NoVirtual(ref_child);
	}
	/**
	 * 子节点数量
	 * @param name 名称
	 * @return 无符号的双字节整型
	 */
	public int numChildren()
	{
		return super.numChildren_NoVirtual();
	}
	/**
	 * 获取子节点获取子节点指针
	 * @param index 指针
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(int index)
	{
		return super.getChild_NoVirtual(index);
	}
	/**
	 * 获取子节点为指定名称的节点获取指针
	 * @param name 名称
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(String name)
	{
		return super.getChild_NoVirtual(name);
	}
	/**
	 * 判断子节点是否存在				
	 * @param name 名称
	 */
	public boolean existChild(String name)
	{
		return super.existChild_NoVirtual(name);
	}
	/**
	 * 获取一个迭代器遍历此节点的所有子节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node.ChildNodeIterator getChildIterator()
	{
		return super.getChildIterator_NoVirtual();
	}
	/**
	 * 检索将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param index 
	 */
	public com.earthview.world.graphic.Node removeChild(int index)
	{
		return super.removeChild_NoVirtual(index);
	}
	/**
	 * 将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param child 
	 */
	public com.earthview.world.graphic.Node removeChild(com.earthview.world.graphic.Node child)
	{
		return super.removeChild_NoVirtual(child);
	}
	/**
	 * 通过名称将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param name 
	 */
	public com.earthview.world.graphic.Node removeChild(String name)
	{
		return super.removeChild_NoVirtual(name);
	}
	/**
	 * 移除所有子节点没有删除此子节点，在其他地方也许继续挂接
	 * @param  
	 */
	public void removeAllChildren()
	{
		super.removeAllChildren_NoVirtual();
	}
	/**
	 * 直接设置节点累积的世界坐标
	 * @param pos 
	 */
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super._setDerivedPosition_NoVirtual(pos);
	}
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super._setDerivedPosition_NoVirtual(pos, notify);
	}
	/**
	 * 直接设置节点累积的世界方向
	 * @param q 
	 */
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super._setDerivedOrientation_NoVirtual(q);
	}
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super._setDerivedOrientation_NoVirtual(q, notify);
	}
	/**
	 * 获取节点累积的方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion _getDerivedOrientation()
	{
		return super._getDerivedOrientation_NoVirtual();
	}
	/**
	 * 获取节点累积的坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedPosition()
	{
		return super._getDerivedPosition_NoVirtual();
	}
	/**
	 * 获取节点累积的缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedScale()
	{
		return super._getDerivedScale_NoVirtual();
	}
	/**
	 * 获取该节点累积的世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getFullTransform()
	{
		return super._getFullTransform_NoVirtual();
	}
	/**
	 * 更新节点内部方法
	 * @param updateChildren 为真，逐级更新所有子节点
	 * @param parentHasChanged 为true，表明父节点位置改变，子节点继承父节点变化
	 */
	public void _update(boolean updateChildren, boolean parentHasChanged)
	{
		super._update_NoVirtual(updateChildren, parentHasChanged);
	}
	/**
	 * 为节点设置监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.addListener_NoVirtual(listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 获取节点当前的监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Node.NodeListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取监听器数目
	 * @param  
	 */
	public long getNumListener(long index)
	{
		return super.getNumListener_NoVirtual(index);
	}
	/**
	 * 设置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void setInitialState()
	{
		super.setInitialState_NoVirtual();
	}
	/**
	 * 重置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void resetToInitialState()
	{
		super.resetToInitialState_NoVirtual();
	}
	/**
	 * 设置节点初始位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialPosition()
	{
		return super.getInitialPosition_NoVirtual();
	}
	/**
	 * 世界坐标转换当地坐标获得当前位置在所给空间中相对于这个节点的位置
	 * @param worldPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertWorldToLocalPosition(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		return super.convertWorldToLocalPosition_NoVirtual(worldPos);
	}
	/**
	 * 当地坐标转换世界坐标获得当前空间下的节点的世界坐标进行简单转换，不需要此节点的子节点
	 * @param localPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertLocalToWorldPosition(com.earthview.world.spatial.math.Vector3 localPos)
	{
		return super.convertLocalToWorldPosition_NoVirtual(localPos);
	}
	/**
	 * 世界方向向量转换当地方向向量获得当前位置方向在所给空间中相对于这个节点的位置方向
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertWorldToLocalOrientation(com.earthview.world.spatial.math.Quaternion worldOrientation)
	{
		return super.convertWorldToLocalOrientation_NoVirtual(worldOrientation);
	}
	/**
	 * 当前方向向量转换世界方向向量获得当前空间下的节点的世界方向向量进行简单转换，不需要此节点的子节点
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertLocalToWorldOrientation(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		return super.convertLocalToWorldOrientation_NoVirtual(localOrientation);
	}
	/**
	 * 获取节点初始方向向量
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getInitialOrientation()
	{
		return super.getInitialOrientation_NoVirtual();
	}
	/**
	 * 获取节点初始缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialScale()
	{
		return super.getInitialScale_NoVirtual();
	}
	/**
	 * 获得摄像机视场深度的平方帮助方法
	 * @param cam 摄像机视场
	 * @return 视场大小的值
	 */
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	/**
	 * 通知父节点更新子节点
	 * @param  
	 * @param child 
	 * @param forceParentUpdate 默认问false
	 */
	public void requestUpdate(com.earthview.world.graphic.Node ref_child, boolean forceParentUpdate)
	{
		super.requestUpdate_NoVirtual(ref_child, forceParentUpdate);
	}
	public void requestUpdate(com.earthview.world.graphic.Node ref_child)
	{
		super.requestUpdate_NoVirtual(ref_child);
	}
	/**
	 * 停止更新
	 * @param  
	 * @param child 
	 */
	public void cancelUpdate(com.earthview.world.graphic.Node child)
	{
		super.cancelUpdate_NoVirtual(child);
	}
	/**
	 * 获取渲染节点的渲染调试
	 * @param scaling 
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable(double scaling)
	{
		return super.getDebugRenderable_NoVirtual(scaling);
	}
	/**
	 * 在当前节点下挂接一个移动对象
	 * @param obj 移动对象
	 */
	public void attachObject(com.earthview.world.graphic.MovableObject obj)
	{
		super.attachObject_NoVirtual(obj);
	}
	/**
	 * 挂接在当前节点下的对象个数
	 * @param  
	 */
	public int numAttachedObjects()
	{
		return super.numAttachedObjects_NoVirtual();
	}
	/**
	 * 按索引号获取挂接对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(int index)
	{
		return super.getAttachedObject_NoVirtual(index);
	}
	/**
	 * 按名称获取挂接对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(String name)
	{
		return super.getAttachedObject_NoVirtual(name);
	}
	/**
	 * 反挂接指定索引号的移动对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject detachObject(int index)
	{
		return super.detachObject_NoVirtual(index);
	}
	/**
	 * 反挂接指定的移动对象
	 * @param obj 移动对象
	 */
	public void detachObject(com.earthview.world.graphic.MovableObject obj)
	{
		super.detachObject_NoVirtual(obj);
	}
	/**
	 * 反挂接指定名称的移动对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject detachObject(String name)
	{
		return super.detachObject_NoVirtual(name);
	}
	/**
	 * 反挂接所有对象
	 * @param name 名称
	 */
	public void detachAllObjects()
	{
		super.detachAllObjects_NoVirtual();
	}
	/**
	 * 通过名称删除并销毁指定子节点
	 * @param name 名称
	 */
	public void removeAndDestroyChild(String name)
	{
		super.removeAndDestroyChild_NoVirtual(name);
	}
	/**
	 * 通过检索删除并销毁指定子节点
	 * @param index 检索
	 */
	public void removeAndDestroyChild(int index)
	{
		super.removeAndDestroyChild_NoVirtual(index);
	}
	/**
	 * 删除此节点的所有子节点
	 * @param  
	 */
	public void removeAndDestroyAllChildren()
	{
		super.removeAndDestroyAllChildren_NoVirtual();
	}
	
	native protected void register_createChild_ev_uint16_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_ev_uint16_CVector3(long pNativeObject, String method);
	native protected void register_createChild_ev_uint16(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register_setParent_CNode(long pNativeObject, String method);
	native protected void register_updateFromParentImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_EVString(long pNativeObject, String method);
	native protected void register_notifyMoved_void(long pNativeObject, String method);
	native protected void register_getParent_void(long pNativeObject, String method);
	native protected void register_getOrientation_void(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_resetOrientation_void(long pNativeObject, String method);
	native protected void register_setPosition_CVector3(long pNativeObject, String method);
	native protected void register_setPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getPosition_void(long pNativeObject, String method);
	native protected void register_setScale_CVector3(long pNativeObject, String method);
	native protected void register_setScale_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getScale_void(long pNativeObject, String method);
	native protected void register_setInheritOrientation_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritOrientation_void(long pNativeObject, String method);
	native protected void register_setInheritScale_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritScale_void(long pNativeObject, String method);
	native protected void register_scale_CVector3(long pNativeObject, String method);
	native protected void register_scale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CVector3(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real(long pNativeObject, String method);
	native protected void register_roll_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_roll_CRadian(long pNativeObject, String method);
	native protected void register_pitch_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_pitch_CRadian(long pNativeObject, String method);
	native protected void register_yaw_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_yaw_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setLocalMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getLocalMatrix_void(long pNativeObject, String method);
	native protected void register_getLocalAxes_void(long pNativeObject, String method);
	native protected void register_createChild_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_CVector3(long pNativeObject, String method);
	native protected void register_createChild_void(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3(long pNativeObject, String method);
	native protected void register_createChild_EVString(long pNativeObject, String method);
	native protected void register_addChild_CNode(long pNativeObject, String method);
	native protected void register_numChildren_void(long pNativeObject, String method);
	native protected void register_getChild_ev_uint16(long pNativeObject, String method);
	native protected void register_getChild_EVString(long pNativeObject, String method);
	native protected void register_existChild_EVString(long pNativeObject, String method);
	native protected void register_getChildIterator_void(long pNativeObject, String method);
	native protected void register_removeChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeChild_CNode(long pNativeObject, String method);
	native protected void register_removeChild_EVString(long pNativeObject, String method);
	native protected void register_removeAllChildren_void(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register__getDerivedOrientation_void(long pNativeObject, String method);
	native protected void register__getDerivedPosition_void(long pNativeObject, String method);
	native protected void register__getDerivedScale_void(long pNativeObject, String method);
	native protected void register__getFullTransform_void(long pNativeObject, String method);
	native protected void register__update_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_addListener_CNodeListener(long pNativeObject, String method);
	native protected void register_removeListener_CNodeListener(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumListener_ev_uint32(long pNativeObject, String method);
	native protected void register_setInitialState_void(long pNativeObject, String method);
	native protected void register_resetToInitialState_void(long pNativeObject, String method);
	native protected void register_getInitialPosition_void(long pNativeObject, String method);
	native protected void register_convertWorldToLocalPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertLocalToWorldPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertWorldToLocalOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_convertLocalToWorldOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_getInitialOrientation_void(long pNativeObject, String method);
	native protected void register_getInitialScale_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_needUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_needUpdate_void(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode_ev_bool(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode(long pNativeObject, String method);
	native protected void register_cancelUpdate_CNode(long pNativeObject, String method);
	native protected void register_getDebugRenderable_Real(long pNativeObject, String method);
	native protected void register_attachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_numAttachedObjects_void(long pNativeObject, String method);
	native protected void register_getAttachedObject_ev_uint16(long pNativeObject, String method);
	native protected void register_getAttachedObject_EVString(long pNativeObject, String method);
	native protected void register_detachObject_ev_uint16(long pNativeObject, String method);
	native protected void register_detachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_detachObject_EVString(long pNativeObject, String method);
	native protected void register_detachAllObjects_void(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_EVString(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAndDestroyAllChildren_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createChild_ev_uint16_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_ev_uint16_CVector3_CQuaternion_callback");
			this.register_createChild_ev_uint16_CVector3(this.nativeObject.pointer, "createChild_ev_uint16_CVector3_callback");
			this.register_createChild_ev_uint16(this.nativeObject.pointer, "createChild_ev_uint16_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register_setParent_CNode(this.nativeObject.pointer, "setParent_CNode_callback");
			this.register_updateFromParentImpl_void(this.nativeObject.pointer, "updateFromParentImpl_void_callback");
			this.register_createChildImpl_void(this.nativeObject.pointer, "createChildImpl_void_callback");
			this.register_createChildImpl_EVString(this.nativeObject.pointer, "createChildImpl_EVString_callback");
			this.register_notifyMoved_void(this.nativeObject.pointer, "notifyMoved_void_callback");
			this.register_getParent_void(this.nativeObject.pointer, "getParent_void_callback");
			this.register_getOrientation_void(this.nativeObject.pointer, "getOrientation_void_callback");
			this.register_setOrientation_CQuaternion(this.nativeObject.pointer, "setOrientation_CQuaternion_callback");
			this.register_setOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "setOrientation_CQuaternion_ev_bool_callback");
			this.register_setOrientation_Real_Real_Real_Real(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_callback");
			this.register_setOrientation_Real_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_ev_bool_callback");
			this.register_resetOrientation_void(this.nativeObject.pointer, "resetOrientation_void_callback");
			this.register_setPosition_CVector3(this.nativeObject.pointer, "setPosition_CVector3_callback");
			this.register_setPosition_CVector3_ev_bool(this.nativeObject.pointer, "setPosition_CVector3_ev_bool_callback");
			this.register_setPosition_Real_Real_Real(this.nativeObject.pointer, "setPosition_Real_Real_Real_callback");
			this.register_setPosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setPosition_Real_Real_Real_ev_bool_callback");
			this.register_getPosition_void(this.nativeObject.pointer, "getPosition_void_callback");
			this.register_setScale_CVector3(this.nativeObject.pointer, "setScale_CVector3_callback");
			this.register_setScale_CVector3_ev_bool(this.nativeObject.pointer, "setScale_CVector3_ev_bool_callback");
			this.register_setScale_Real_Real_Real(this.nativeObject.pointer, "setScale_Real_Real_Real_callback");
			this.register_setScale_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setScale_Real_Real_Real_ev_bool_callback");
			this.register_getScale_void(this.nativeObject.pointer, "getScale_void_callback");
			this.register_setInheritOrientation_ev_bool(this.nativeObject.pointer, "setInheritOrientation_ev_bool_callback");
			this.register_getInheritOrientation_void(this.nativeObject.pointer, "getInheritOrientation_void_callback");
			this.register_setInheritScale_ev_bool(this.nativeObject.pointer, "setInheritScale_ev_bool_callback");
			this.register_getInheritScale_void(this.nativeObject.pointer, "getInheritScale_void_callback");
			this.register_scale_CVector3(this.nativeObject.pointer, "scale_CVector3_callback");
			this.register_scale_Real_Real_Real(this.nativeObject.pointer, "scale_Real_Real_Real_callback");
			this.register_translate_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CVector3_TransformSpace_callback");
			this.register_translate_CVector3(this.nativeObject.pointer, "translate_CVector3_callback");
			this.register_translate_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_Real_Real_Real_TransformSpace_callback");
			this.register_translate_Real_Real_Real(this.nativeObject.pointer, "translate_Real_Real_Real_callback");
			this.register_translate_CMatrix3_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_CVector3_TransformSpace_callback");
			this.register_translate_CMatrix3_CVector3(this.nativeObject.pointer, "translate_CMatrix3_CVector3_callback");
			this.register_translate_CMatrix3_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_TransformSpace_callback");
			this.register_translate_CMatrix3_Real_Real_Real(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_callback");
			this.register_roll_CRadian_TransformSpace(this.nativeObject.pointer, "roll_CRadian_TransformSpace_callback");
			this.register_roll_CRadian(this.nativeObject.pointer, "roll_CRadian_callback");
			this.register_pitch_CRadian_TransformSpace(this.nativeObject.pointer, "pitch_CRadian_TransformSpace_callback");
			this.register_pitch_CRadian(this.nativeObject.pointer, "pitch_CRadian_callback");
			this.register_yaw_CRadian_TransformSpace(this.nativeObject.pointer, "yaw_CRadian_TransformSpace_callback");
			this.register_yaw_CRadian(this.nativeObject.pointer, "yaw_CRadian_callback");
			this.register_rotate_CVector3_CRadian_TransformSpace(this.nativeObject.pointer, "rotate_CVector3_CRadian_TransformSpace_callback");
			this.register_rotate_CVector3_CRadian(this.nativeObject.pointer, "rotate_CVector3_CRadian_callback");
			this.register_rotate_CQuaternion_TransformSpace(this.nativeObject.pointer, "rotate_CQuaternion_TransformSpace_callback");
			this.register_rotate_CQuaternion(this.nativeObject.pointer, "rotate_CQuaternion_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setLocalMatrix_CMatrix4(this.nativeObject.pointer, "setLocalMatrix_CMatrix4_callback");
			this.register_getLocalMatrix_void(this.nativeObject.pointer, "getLocalMatrix_void_callback");
			this.register_getLocalAxes_void(this.nativeObject.pointer, "getLocalAxes_void_callback");
			this.register_createChild_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_CVector3_CQuaternion_callback");
			this.register_createChild_CVector3(this.nativeObject.pointer, "createChild_CVector3_callback");
			this.register_createChild_void(this.nativeObject.pointer, "createChild_void_callback");
			this.register_createChild_EVString_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_EVString_CVector3_CQuaternion_callback");
			this.register_createChild_EVString_CVector3(this.nativeObject.pointer, "createChild_EVString_CVector3_callback");
			this.register_createChild_EVString(this.nativeObject.pointer, "createChild_EVString_callback");
			this.register_addChild_CNode(this.nativeObject.pointer, "addChild_CNode_callback");
			this.register_numChildren_void(this.nativeObject.pointer, "numChildren_void_callback");
			this.register_getChild_ev_uint16(this.nativeObject.pointer, "getChild_ev_uint16_callback");
			this.register_getChild_EVString(this.nativeObject.pointer, "getChild_EVString_callback");
			this.register_existChild_EVString(this.nativeObject.pointer, "existChild_EVString_callback");
			this.register_getChildIterator_void(this.nativeObject.pointer, "getChildIterator_void_callback");
			this.register_removeChild_ev_uint16(this.nativeObject.pointer, "removeChild_ev_uint16_callback");
			this.register_removeChild_CNode(this.nativeObject.pointer, "removeChild_CNode_callback");
			this.register_removeChild_EVString(this.nativeObject.pointer, "removeChild_EVString_callback");
			this.register_removeAllChildren_void(this.nativeObject.pointer, "removeAllChildren_void_callback");
			this.register__setDerivedPosition_CVector3(this.nativeObject.pointer, "_setDerivedPosition_CVector3_callback");
			this.register__setDerivedPosition_CVector3_ev_bool(this.nativeObject.pointer, "_setDerivedPosition_CVector3_ev_bool_callback");
			this.register__setDerivedOrientation_CQuaternion(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_callback");
			this.register__setDerivedOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_ev_bool_callback");
			this.register__getDerivedOrientation_void(this.nativeObject.pointer, "_getDerivedOrientation_void_callback");
			this.register__getDerivedPosition_void(this.nativeObject.pointer, "_getDerivedPosition_void_callback");
			this.register__getDerivedScale_void(this.nativeObject.pointer, "_getDerivedScale_void_callback");
			this.register__getFullTransform_void(this.nativeObject.pointer, "_getFullTransform_void_callback");
			this.register__update_ev_bool_ev_bool(this.nativeObject.pointer, "_update_ev_bool_ev_bool_callback");
			this.register_addListener_CNodeListener(this.nativeObject.pointer, "addListener_CNodeListener_callback");
			this.register_removeListener_CNodeListener(this.nativeObject.pointer, "removeListener_CNodeListener_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getNumListener_ev_uint32(this.nativeObject.pointer, "getNumListener_ev_uint32_callback");
			this.register_setInitialState_void(this.nativeObject.pointer, "setInitialState_void_callback");
			this.register_resetToInitialState_void(this.nativeObject.pointer, "resetToInitialState_void_callback");
			this.register_getInitialPosition_void(this.nativeObject.pointer, "getInitialPosition_void_callback");
			this.register_convertWorldToLocalPosition_CVector3(this.nativeObject.pointer, "convertWorldToLocalPosition_CVector3_callback");
			this.register_convertLocalToWorldPosition_CVector3(this.nativeObject.pointer, "convertLocalToWorldPosition_CVector3_callback");
			this.register_convertWorldToLocalOrientation_CQuaternion(this.nativeObject.pointer, "convertWorldToLocalOrientation_CQuaternion_callback");
			this.register_convertLocalToWorldOrientation_CQuaternion(this.nativeObject.pointer, "convertLocalToWorldOrientation_CQuaternion_callback");
			this.register_getInitialOrientation_void(this.nativeObject.pointer, "getInitialOrientation_void_callback");
			this.register_getInitialScale_void(this.nativeObject.pointer, "getInitialScale_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_needUpdate_ev_bool(this.nativeObject.pointer, "needUpdate_ev_bool_callback");
			this.register_needUpdate_void(this.nativeObject.pointer, "needUpdate_void_callback");
			this.register_requestUpdate_CNode_ev_bool(this.nativeObject.pointer, "requestUpdate_CNode_ev_bool_callback");
			this.register_requestUpdate_CNode(this.nativeObject.pointer, "requestUpdate_CNode_callback");
			this.register_cancelUpdate_CNode(this.nativeObject.pointer, "cancelUpdate_CNode_callback");
			this.register_getDebugRenderable_Real(this.nativeObject.pointer, "getDebugRenderable_Real_callback");
			this.register_attachObject_CMovableObject(this.nativeObject.pointer, "attachObject_CMovableObject_callback");
			this.register_numAttachedObjects_void(this.nativeObject.pointer, "numAttachedObjects_void_callback");
			this.register_getAttachedObject_ev_uint16(this.nativeObject.pointer, "getAttachedObject_ev_uint16_callback");
			this.register_getAttachedObject_EVString(this.nativeObject.pointer, "getAttachedObject_EVString_callback");
			this.register_detachObject_ev_uint16(this.nativeObject.pointer, "detachObject_ev_uint16_callback");
			this.register_detachObject_CMovableObject(this.nativeObject.pointer, "detachObject_CMovableObject_callback");
			this.register_detachObject_EVString(this.nativeObject.pointer, "detachObject_EVString_callback");
			this.register_detachAllObjects_void(this.nativeObject.pointer, "detachAllObjects_void_callback");
			this.register_removeAndDestroyChild_EVString(this.nativeObject.pointer, "removeAndDestroyChild_EVString_callback");
			this.register_removeAndDestroyChild_ev_uint16(this.nativeObject.pointer, "removeAndDestroyChild_ev_uint16_callback");
			this.register_removeAndDestroyAllChildren_void(this.nativeObject.pointer, "removeAndDestroyAllChildren_void_callback");
		}
	}
	
	public static Bone fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Bone obj = null;
 		if(baseObj instanceof Bone)
		{
			obj = (Bone)baseObj;
		} else {
			obj = new Bone(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBone");
			obj.increaseCast();
		}

		return obj;
	}
}
