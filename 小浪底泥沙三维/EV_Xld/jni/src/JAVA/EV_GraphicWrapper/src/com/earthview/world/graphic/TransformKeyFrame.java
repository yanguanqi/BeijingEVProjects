package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 关键帧变换类管理关键帧的变换
 */
public class TransformKeyFrame extends com.earthview.world.graphic.KeyFrame {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTransformKeyFrame", new TransformKeyFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTransformKeyFrameProxy", new TransformKeyFrameClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画轨迹对象
	 * @param time 变换的关键帧时间点
	 */
	public TransformKeyFrame(com.earthview.world.graphic.AnimationTrack ref_parent, double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("JCTransformKeyFrameProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TransformKeyFrame".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setTranslate_CVector3_callback(long trans)
	{
		com.earthview.world.spatial.math.Vector3 transParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		transParamValue.setDelegate(true);
		transParamValue.setInstancePointer(new InstancePointer(trans));
		IClassFactory transParamValueClassFactory = GlobalClassFactoryMap.get(transParamValue.getCppInstanceTypeName());
		if (transParamValueClassFactory != null)
		{
			transParamValue.setDelegate(true);
			transParamValue = (com.earthview.world.spatial.math.Vector3)transParamValueClassFactory.create();
			transParamValue.setDelegate(true);
			transParamValue.setInstancePointer(new InstancePointer(trans));
		}
		setTranslate(transParamValue);
	}

	native private void setTranslate_CVector3(long pNativeObject, long trans);
	/**
	 * 设置关键帧变换向量
	 * @param trans 关键帧变换向量
	 */
	public void setTranslate(com.earthview.world.spatial.math.Vector3 trans)
	{
		long transParamValue = trans.nativeObject.pointer;
		setTranslate_CVector3(this.nativeObject.pointer, transParamValue);
	}
	native private void setTranslate_CVector3_NoVirtual(long pNativeObject, long trans);
	protected void setTranslate_NoVirtual(com.earthview.world.spatial.math.Vector3 trans)
	{
		long transParamValue = trans.nativeObject.pointer;
		setTranslate_CVector3_NoVirtual(this.nativeObject.pointer, transParamValue);
	}

	native private long getTranslate_void(long pNativeObject);
	/**
	 * 获得关键帧变换向量
	 * @param  
	 * @return 关键帧变换向量
	 */
	public com.earthview.world.spatial.math.Vector3 getTranslate()
	{
		long returnValue = getTranslate_void(this.nativeObject.pointer);
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
	protected  void setScale_CVector3_callback(long scale)
	{
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
		setScale(scaleParamValue);
	}

	native private void setScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置关键帧缩放系数
	 * @param scale 关键帧缩放系数
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setScale_CVector3_NoVirtual(long pNativeObject, long scale);
	protected void setScale_NoVirtual(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  long getScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getScale_void(long pNativeObject);
	/**
	 * 获得关键帧缩放系数
	 * @param  
	 * @return 关键帧缩放系数
	 */
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
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
	native private long getScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getScale_NoVirtual()
	{
		long returnValue = getScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setRotation_CQuaternion_callback(long rot)
	{
		com.earthview.world.spatial.math.Quaternion rotParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		rotParamValue.setDelegate(true);
		rotParamValue.setInstancePointer(new InstancePointer(rot));
		IClassFactory rotParamValueClassFactory = GlobalClassFactoryMap.get(rotParamValue.getCppInstanceTypeName());
		if (rotParamValueClassFactory != null)
		{
			rotParamValue.setDelegate(true);
			rotParamValue = (com.earthview.world.spatial.math.Quaternion)rotParamValueClassFactory.create();
			rotParamValue.setDelegate(true);
			rotParamValue.setInstancePointer(new InstancePointer(rot));
		}
		setRotation(rotParamValue);
	}

	native private void setRotation_CQuaternion(long pNativeObject, long rot);
	/**
	 * 设置关键帧旋转四元数
	 * @param rot 关键帧旋转四元数
	 */
	public void setRotation(com.earthview.world.spatial.math.Quaternion rot)
	{
		long rotParamValue = rot.nativeObject.pointer;
		setRotation_CQuaternion(this.nativeObject.pointer, rotParamValue);
	}
	native private void setRotation_CQuaternion_NoVirtual(long pNativeObject, long rot);
	protected void setRotation_NoVirtual(com.earthview.world.spatial.math.Quaternion rot)
	{
		long rotParamValue = rot.nativeObject.pointer;
		setRotation_CQuaternion_NoVirtual(this.nativeObject.pointer, rotParamValue);
	}

	protected  long getRotation_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getRotation();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRotation_void(long pNativeObject);
	/**
	 * 获得关键帧旋转四元数
	 * @param  
	 * @return 关键帧旋转四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getRotation()
	{
		long returnValue = getRotation_void(this.nativeObject.pointer);
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
	native private long getRotation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getRotation_NoVirtual()
	{
		long returnValue = getRotation_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setMatrix_CMatrix4_callback(long mat)
	{
		com.earthview.world.spatial.math.Matrix4 matParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matParamValue.setDelegate(true);
		matParamValue.setInstancePointer(new InstancePointer(mat));
		IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
		if (matParamValueClassFactory != null)
		{
			matParamValue.setDelegate(true);
			matParamValue = (com.earthview.world.spatial.math.Matrix4)matParamValueClassFactory.create();
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
		}
		setMatrix(matParamValue);
	}

	native private void setMatrix_CMatrix4(long pNativeObject, long mat);
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, matParamValue);
	}
	native private void setMatrix_CMatrix4_NoVirtual(long pNativeObject, long mat);
	protected void setMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, matParamValue);
	}

	native private long _clone_CAnimationTrack(long pNativeObject, long ref_newParent);
	/**
	 * clone当前转换的关键帧
	 * @param newParent 转换关键帧所属动画轨迹
	 * @return 复制的关键帧
	 */
	public com.earthview.world.graphic.KeyFrame _clone(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long _clone_CAnimationTrack_NoVirtual(long pNativeObject, long ref_newParent);
	protected com.earthview.world.graphic.KeyFrame _clone_NoVirtual(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack_NoVirtual(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	public TransformKeyFrame(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TransformKeyFrame(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setTranslate_CVector3(long pNativeObject, String method);
	native protected void register_setScale_CVector3(long pNativeObject, String method);
	native protected void register_getScale_void(long pNativeObject, String method);
	native protected void register_setRotation_CQuaternion(long pNativeObject, String method);
	native protected void register_getRotation_void(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register__clone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setTranslate_CVector3(this.nativeObject.pointer, "setTranslate_CVector3_callback");
			this.register_setScale_CVector3(this.nativeObject.pointer, "setScale_CVector3_callback");
			this.register_getScale_void(this.nativeObject.pointer, "getScale_void_callback");
			this.register_setRotation_CQuaternion(this.nativeObject.pointer, "setRotation_CQuaternion_callback");
			this.register_getRotation_void(this.nativeObject.pointer, "getRotation_void_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register__clone_CAnimationTrack(this.nativeObject.pointer, "_clone_CAnimationTrack_callback");
		}
	}
	
	public static TransformKeyFrame fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TransformKeyFrame obj = null;
 		if(baseObj instanceof TransformKeyFrame)
		{
			obj = (TransformKeyFrame)baseObj;
		} else {
			obj = new TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTransformKeyFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
