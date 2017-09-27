package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 骨骼实例类作为骨骼类EarthView::World::Graphic::CSkeleton的实例CSkeletonInstance与CSkeleton的关系好比CEntity与CMesh的关系
 */
public class SkeletonInstance extends com.earthview.world.graphic.Skeleton {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeletonInstance", new SkeletonInstanceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSkeletonInstanceProxy", new SkeletonInstanceClassFactory());
	}

	public SkeletonInstance(com.earthview.world.graphic.SkeletonPtr masterCopy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer masterCopyPtr = new BasePointer(masterCopy);
		list.add("masterCopy", masterCopyPtr.get());
		Create("JCSkeletonInstanceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SkeletonInstance".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getNumAnimations_void(long pNativeObject);
	/**
	 * 获得此骨骼上的动画的数量				
	 * @param  
	 */
	public int getNumAnimations()
	{
		int returnValue = getNumAnimations_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumAnimations_void_NoVirtual(long pNativeObject);
	protected int getNumAnimations_NoVirtual()
	{
		int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getAnimation_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得动画			
	 * @param  
	 */
	public com.earthview.world.graphic.Animation getAnimation(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private long getAnimation_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String name, long linker);
	public com.earthview.world.graphic.Animation getAnimation(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = getAnimation_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(long pNativeObject, String name, long linker);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = getAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private long getAnimation_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private long _getAnimationImpl_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String name, long linker);
	//// Internal accessor for animations (returns null if animation does not exist)
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = _getAnimationImpl_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long _getAnimationImpl_EVString_LinkedSkeletonAnimationSource_NoVirtual(long pNativeObject, String name, long linker);
	protected com.earthview.world.graphic.Animation _getAnimationImpl_NoVirtual(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = _getAnimationImpl_EVString_LinkedSkeletonAnimationSource_NoVirtual(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private long _getAnimationImpl_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long _getAnimationImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation _getAnimationImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
	/**
	 * 创建动画				
	 * @param  
	 */
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
	protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	native private void removeAnimation_EVString(long pNativeObject, String name);
	/**
	 * 移除动画				
	 * @param  
	 */
	public void removeAnimation(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private long createTagPointOnBone_CBone_CQuaternion_CVector3(long pNativeObject, long bone, long offsetOrientation, long offsetPosition);
	/**
	 * 在骨头上创建挂接点(用于挂接可移动对象)
	 * @param  
	 */
	public com.earthview.world.graphic.TagPoint createTagPointOnBone(com.earthview.world.graphic.Bone bone, com.earthview.world.spatial.math.Quaternion offsetOrientation, com.earthview.world.spatial.math.Vector3 offsetPosition)
	{
		long boneParamValue = (bone == null ? 0L : bone.nativeObject.pointer);
		long offsetOrientationParamValue = offsetOrientation.nativeObject.pointer;
		long offsetPositionParamValue = offsetPosition.nativeObject.pointer;
		long returnValue = createTagPointOnBone_CBone_CQuaternion_CVector3(this.nativeObject.pointer, boneParamValue, offsetOrientationParamValue, offsetPositionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private long createTagPointOnBone_CBone_CQuaternion(long pNativeObject, long bone, long offsetOrientation);
	public com.earthview.world.graphic.TagPoint createTagPointOnBone(com.earthview.world.graphic.Bone bone, com.earthview.world.spatial.math.Quaternion offsetOrientation)
	{
		long boneParamValue = (bone == null ? 0L : bone.nativeObject.pointer);
		long offsetOrientationParamValue = offsetOrientation.nativeObject.pointer;
		long returnValue = createTagPointOnBone_CBone_CQuaternion(this.nativeObject.pointer, boneParamValue, offsetOrientationParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private long createTagPointOnBone_CBone(long pNativeObject, long bone);
	public com.earthview.world.graphic.TagPoint createTagPointOnBone(com.earthview.world.graphic.Bone bone)
	{
		long boneParamValue = (bone == null ? 0L : bone.nativeObject.pointer);
		long returnValue = createTagPointOnBone_CBone(this.nativeObject.pointer, boneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TagPoint __returnValue = new com.earthview.world.graphic.TagPoint(CreatedWhenConstruct.CWC_NotToCreate, "CTagPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TagPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTagPoint");
		}
		return __returnValue;
	}
	native private void freeTagPoint_CTagPoint(long pNativeObject, long tagPoint);
	/**
	 * 释放挂接点
	 * @param  
	 */
	public void freeTagPoint(com.earthview.world.graphic.TagPoint tagPoint)
	{
		long tagPointParamValue = (tagPoint == null ? 0L : tagPoint.nativeObject.pointer);
		freeTagPoint_CTagPoint(this.nativeObject.pointer, tagPointParamValue);
	}
	native private void addLinkedSkeletonAnimationSource_EVString_Real(long pNativeObject, String skelName, double scale);
	//// @copydoc CSkeleton::addLinkedSkeletonAnimationSource
	public void addLinkedSkeletonAnimationSource(String skelName, double scale)
	{
		String skelNameParamValue = skelName;
		double scaleParamValue = scale;
		addLinkedSkeletonAnimationSource_EVString_Real(this.nativeObject.pointer, skelNameParamValue, scaleParamValue);
	}
	native private void addLinkedSkeletonAnimationSource_EVString_Real_NoVirtual(long pNativeObject, String skelName, double scale);
	protected void addLinkedSkeletonAnimationSource_NoVirtual(String skelName, double scale)
	{
		String skelNameParamValue = skelName;
		double scaleParamValue = scale;
		addLinkedSkeletonAnimationSource_EVString_Real_NoVirtual(this.nativeObject.pointer, skelNameParamValue, scaleParamValue);
	}

	native private void addLinkedSkeletonAnimationSource_EVString(long pNativeObject, String skelName);
	public void addLinkedSkeletonAnimationSource(String skelName)
	{
		String skelNameParamValue = skelName;
		addLinkedSkeletonAnimationSource_EVString(this.nativeObject.pointer, skelNameParamValue);
	}
	native private void addLinkedSkeletonAnimationSource_EVString_NoVirtual(long pNativeObject, String skelName);
	protected void addLinkedSkeletonAnimationSource_NoVirtual(String skelName)
	{
		String skelNameParamValue = skelName;
		addLinkedSkeletonAnimationSource_EVString_NoVirtual(this.nativeObject.pointer, skelNameParamValue);
	}

	native private void removeAllLinkedSkeletonAnimationSources_void(long pNativeObject);
	//// @copydoc CSkeleton::removeAllLinkedSkeletonAnimationSources
	public void removeAllLinkedSkeletonAnimationSources()
	{
		removeAllLinkedSkeletonAnimationSources_void(this.nativeObject.pointer);
	}
	native private void removeAllLinkedSkeletonAnimationSources_void_NoVirtual(long pNativeObject);
	protected void removeAllLinkedSkeletonAnimationSources_NoVirtual()
	{
		removeAllLinkedSkeletonAnimationSources_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getLinkedSkeletonAnimationSourceIterator_void(long pNativeObject);
	//// @copydoc CSkeleton::getLinkedSkeletonAnimationSourceIterator
	public com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator()
	{
		long returnValue = getLinkedSkeletonAnimationSourceIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator __returnValue = new com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		}
		return __returnValue;
	}
	native private long getLinkedSkeletonAnimationSourceIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator_NoVirtual()
	{
		long returnValue = getLinkedSkeletonAnimationSourceIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator __returnValue = new com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		}
		return __returnValue;
	}

	native private void _initAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 初始化动画状态集
	 * @param  
	 */
	public void _initAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_initAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void _initAnimationState_CAnimationStateSet_NoVirtual(long pNativeObject, long animSet);
	protected void _initAnimationState_NoVirtual(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_initAnimationState_CAnimationStateSet_NoVirtual(this.nativeObject.pointer, animSetParamValue);
	}

	native private void _refreshAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 更新动画状态集
	 * @param  
	 */
	public void _refreshAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_refreshAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void _refreshAnimationState_CAnimationStateSet_NoVirtual(long pNativeObject, long animSet);
	protected void _refreshAnimationState_NoVirtual(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_refreshAnimationState_CAnimationStateSet_NoVirtual(this.nativeObject.pointer, animSetParamValue);
	}

	native private String getName_void(long pNativeObject);
	//// @copydoc CResource::getName
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

	native private String getHandle_void(long pNativeObject);
	//// @copydoc CResource::getHandle
	public ULongPointer getHandle()
	{
		String returnValue = getHandle_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getHandle_void_NoVirtual(long pNativeObject);
	protected ULongPointer getHandle_NoVirtual()
	{
		String returnValue = getHandle_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getGroup_void(long pNativeObject);
	//// @copydoc CResource::getGroup
	public String getGroup()
	{
		String returnValue = getGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getGroup_void_NoVirtual(long pNativeObject);
	protected String getGroup_NoVirtual()
	{
		String returnValue = getGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void updateTagPoints_void(long pNativeObject);
	/**
	 * 更新挂接点姿态
	 * @param  
	 */
	public void updateTagPoints()
	{
		updateTagPoints_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void(long pNativeObject);
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unloadImpl_void(long pNativeObject);
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	public SkeletonInstance(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SkeletonInstance(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer getAnimationContainerPtr()
	{
		return super.getAnimationContainerPtr_NoVirtual();
	}
	/**
	 * 创建新骨头若不命名，则内部对其自动命名此骨头未被挂接在其它骨头上，除非此骨头作为根骨头，否则后续需要将其挂接到某个骨头上
	 * @param  
	 */
	public com.earthview.world.graphic.Bone createBone()
	{
		return super.createBone_NoVirtual();
	}
	public com.earthview.world.graphic.Bone createBone(int handle)
	{
		return super.createBone_NoVirtual(handle);
	}
	public com.earthview.world.graphic.Bone createBone(String name)
	{
		return super.createBone_NoVirtual(name);
	}
	public com.earthview.world.graphic.Bone createBone(String name, int handle)
	{
		return super.createBone_NoVirtual(name, handle);
	}
	/**
	 * 获得骨头的数量
	 * @param  
	 */
	public int getNumBones()
	{
		return super.getNumBones_NoVirtual();
	}
	/**
	 * 获得根骨头(第一个没有父骨头的骨头)
	 * @param  
	 */
	public com.earthview.world.graphic.Bone getRootBone()
	{
		return super.getRootBone_NoVirtual();
	}
	/**
	 * 获得根骨头的迭代器没有挂接在其它骨头下的骨头都认为是根骨头
	 * @param  
	 */
	public com.earthview.world.graphic.Skeleton.BoneIterator getRootBoneIterator()
	{
		return super.getRootBoneIterator_NoVirtual();
	}
	/**
	 * 获得骨头的迭代器				
	 * @param  
	 */
	public com.earthview.world.graphic.Skeleton.BoneIterator getBoneIterator()
	{
		return super.getBoneIterator_NoVirtual();
	}
	/**
	 * 获得骨头
	 * @param  
	 */
	public com.earthview.world.graphic.Bone getBone(int handle)
	{
		return super.getBone_NoVirtual(handle);
	}
	public com.earthview.world.graphic.Bone getBone(String name)
	{
		return super.getBone_NoVirtual(name);
	}
	/**
	 * 判断给定名称的骨头是否存在
	 * @param  
	 */
	public boolean hasBone(String name)
	{
		return super.hasBone_NoVirtual(name);
	}
	/**
	 * 将骨头的当前姿态置为绑定姿态后续即便骨头的姿态改变，亦可取得此姿态
	 * @param  
	 */
	public void setBindingPose()
	{
		super.setBindingPose_NoVirtual();
	}
	/**
	 * 将骨头的姿态恢复到绑定姿态				
	 * @param  
	 */
	public void reset(boolean resetManualBones)
	{
		super.reset_NoVirtual(resetManualBones);
	}
	public void reset()
	{
		super.reset_NoVirtual();
	}
	/**
	 * 判断给定名称的动画是否存在
	 * @param name 名称
	 */
	public boolean hasAnimation(String name)
	{
		return super.hasAnimation_NoVirtual(name);
	}
	/**
	 * 设置动画状态集
	 * @param  
	 */
	public void setAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		super.setAnimationState_NoVirtual(animSet);
	}
	/**
	 * 获得骨头矩阵要求数组长度不小于与骨头数量
	 * @param  
	 */
	public void _getBoneMatrices(com.earthview.world.spatial.math.Matrix4 pMatrices)
	{
		super._getBoneMatrices_NoVirtual(pMatrices);
	}
	public void _getBoneMatrices(com.earthview.world.spatial.math.Matrix4 pMatrices, long index)
	{
		super._getBoneMatrices_NoVirtual(pMatrices, index);
	}
	/**
	 * 获得骨骼动画混合方式			
	 * @param  
	 */
	public com.earthview.world.graphic.SkeletonAnimationBlendMode getBlendMode()
	{
		return super.getBlendMode_NoVirtual();
	}
	/**
	 * 设置骨骼动画混合方式			
	 * @param  
	 */
	public void setBlendMode(com.earthview.world.graphic.SkeletonAnimationBlendMode state)
	{
		super.setBlendMode_NoVirtual(state);
	}
	/**
	 * 更新骨头的姿态			
	 * @param  
	 */
	public void _updateTransforms()
	{
		super._updateTransforms_NoVirtual();
	}
	public void optimiseAllAnimations(boolean preservingIdentityNodeTracks)
	{
		super.optimiseAllAnimations_NoVirtual(preservingIdentityNodeTracks);
	}
	public void optimiseAllAnimations()
	{
		super.optimiseAllAnimations_NoVirtual();
	}
	//// Internal method for marking the manual bones as dirty
	public void _notifyManualBonesDirty()
	{
		super._notifyManualBonesDirty_NoVirtual();
	}
	//// Internal method for notifying that a bone is manual
	public void _notifyManualBoneStateChange(com.earthview.world.graphic.Bone ref_bone)
	{
		super._notifyManualBoneStateChange_NoVirtual(ref_bone);
	}
	//// Have manual bones been modified since the skeleton was last updated?
	public boolean getManualBonesDirty()
	{
		return super.getManualBonesDirty_NoVirtual();
	}
	//// Are there any manually controlled bones?
	public boolean hasManualBones()
	{
		return super.hasManualBones_NoVirtual();
	}
	public void _mergeSkeletonAnimations(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap, com.earthview.world.core.StringVector animations)
	{
		super._mergeSkeletonAnimations_NoVirtual(source, boneHandleMap, animations);
	}
	public void _mergeSkeletonAnimations(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		super._mergeSkeletonAnimations_NoVirtual(source, boneHandleMap);
	}
	public void _buildMapBoneByHandle(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		super._buildMapBoneByHandle_NoVirtual(source, boneHandleMap);
	}
	public void _buildMapBoneByName(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		super._buildMapBoneByName_NoVirtual(source, boneHandleMap);
	}
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		super.postLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备函数的实现
	 */
	public void prepareImpl()
	{
		super.prepareImpl_NoVirtual();
	}
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		super.unprepareImpl_NoVirtual();
	}
	/**
	 * 计算资源所占内存的大小
	 */
	public long calculateSize()
	{
		return super.calculateSize_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
	}
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_getAnimationContainerPtr_void(long pNativeObject, String method);
	native protected void register_createBone_void(long pNativeObject, String method);
	native protected void register_createBone_ev_uint16(long pNativeObject, String method);
	native protected void register_createBone_EVString(long pNativeObject, String method);
	native protected void register_createBone_EVString_ev_uint16(long pNativeObject, String method);
	native protected void register_getNumBones_void(long pNativeObject, String method);
	native protected void register_getRootBone_void(long pNativeObject, String method);
	native protected void register_getRootBoneIterator_void(long pNativeObject, String method);
	native protected void register_getBoneIterator_void(long pNativeObject, String method);
	native protected void register_getBone_ev_uint16(long pNativeObject, String method);
	native protected void register_getBone_EVString(long pNativeObject, String method);
	native protected void register_hasBone_EVString(long pNativeObject, String method);
	native protected void register_setBindingPose_void(long pNativeObject, String method);
	native protected void register_reset_ev_bool(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_getAnimation_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_removeAnimation_EVString(long pNativeObject, String method);
	native protected void register_setAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__initAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__refreshAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__getBoneMatrices_CMatrix4(long pNativeObject, String method);
	native protected void register__getBoneMatrices_CMatrix4_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumAnimations_void(long pNativeObject, String method);
	native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
	native protected void register_getBlendMode_void(long pNativeObject, String method);
	native protected void register_setBlendMode_SkeletonAnimationBlendMode(long pNativeObject, String method);
	native protected void register__updateTransforms_void(long pNativeObject, String method);
	native protected void register_optimiseAllAnimations_ev_bool(long pNativeObject, String method);
	native protected void register_optimiseAllAnimations_void(long pNativeObject, String method);
	native protected void register_addLinkedSkeletonAnimationSource_EVString_Real(long pNativeObject, String method);
	native protected void register_addLinkedSkeletonAnimationSource_EVString(long pNativeObject, String method);
	native protected void register_removeAllLinkedSkeletonAnimationSources_void(long pNativeObject, String method);
	native protected void register_getLinkedSkeletonAnimationSourceIterator_void(long pNativeObject, String method);
	native protected void register__notifyManualBonesDirty_void(long pNativeObject, String method);
	native protected void register__notifyManualBoneStateChange_CBone(long pNativeObject, String method);
	native protected void register_getManualBonesDirty_void(long pNativeObject, String method);
	native protected void register_hasManualBones_void(long pNativeObject, String method);
	native protected void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(long pNativeObject, String method);
	native protected void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap(long pNativeObject, String method);
	native protected void register__buildMapBoneByHandle_CSkeleton_BoneHandleMap(long pNativeObject, String method);
	native protected void register__buildMapBoneByName_CSkeleton_BoneHandleMap(long pNativeObject, String method);
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAnimationContainerPtr_void(this.nativeObject.pointer, "getAnimationContainerPtr_void_callback");
			this.register_createBone_void(this.nativeObject.pointer, "createBone_void_callback");
			this.register_createBone_ev_uint16(this.nativeObject.pointer, "createBone_ev_uint16_callback");
			this.register_createBone_EVString(this.nativeObject.pointer, "createBone_EVString_callback");
			this.register_createBone_EVString_ev_uint16(this.nativeObject.pointer, "createBone_EVString_ev_uint16_callback");
			this.register_getNumBones_void(this.nativeObject.pointer, "getNumBones_void_callback");
			this.register_getRootBone_void(this.nativeObject.pointer, "getRootBone_void_callback");
			this.register_getRootBoneIterator_void(this.nativeObject.pointer, "getRootBoneIterator_void_callback");
			this.register_getBoneIterator_void(this.nativeObject.pointer, "getBoneIterator_void_callback");
			this.register_getBone_ev_uint16(this.nativeObject.pointer, "getBone_ev_uint16_callback");
			this.register_getBone_EVString(this.nativeObject.pointer, "getBone_EVString_callback");
			this.register_hasBone_EVString(this.nativeObject.pointer, "hasBone_EVString_callback");
			this.register_setBindingPose_void(this.nativeObject.pointer, "setBindingPose_void_callback");
			this.register_reset_ev_bool(this.nativeObject.pointer, "reset_ev_bool_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_getAnimation_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, "getAnimation_EVString_LinkedSkeletonAnimationSource_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, "_getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback");
			this.register__getAnimationImpl_EVString(this.nativeObject.pointer, "_getAnimationImpl_EVString_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			this.register_setAnimationState_CAnimationStateSet(this.nativeObject.pointer, "setAnimationState_CAnimationStateSet_callback");
			this.register__initAnimationState_CAnimationStateSet(this.nativeObject.pointer, "_initAnimationState_CAnimationStateSet_callback");
			this.register__refreshAnimationState_CAnimationStateSet(this.nativeObject.pointer, "_refreshAnimationState_CAnimationStateSet_callback");
			this.register__getBoneMatrices_CMatrix4(this.nativeObject.pointer, "_getBoneMatrices_CMatrix4_callback");
			this.register__getBoneMatrices_CMatrix4_ev_uint32(this.nativeObject.pointer, "_getBoneMatrices_CMatrix4_ev_uint32_callback");
			this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
			this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
			this.register_getBlendMode_void(this.nativeObject.pointer, "getBlendMode_void_callback");
			this.register_setBlendMode_SkeletonAnimationBlendMode(this.nativeObject.pointer, "setBlendMode_SkeletonAnimationBlendMode_callback");
			this.register__updateTransforms_void(this.nativeObject.pointer, "_updateTransforms_void_callback");
			this.register_optimiseAllAnimations_ev_bool(this.nativeObject.pointer, "optimiseAllAnimations_ev_bool_callback");
			this.register_optimiseAllAnimations_void(this.nativeObject.pointer, "optimiseAllAnimations_void_callback");
			this.register_addLinkedSkeletonAnimationSource_EVString_Real(this.nativeObject.pointer, "addLinkedSkeletonAnimationSource_EVString_Real_callback");
			this.register_addLinkedSkeletonAnimationSource_EVString(this.nativeObject.pointer, "addLinkedSkeletonAnimationSource_EVString_callback");
			this.register_removeAllLinkedSkeletonAnimationSources_void(this.nativeObject.pointer, "removeAllLinkedSkeletonAnimationSources_void_callback");
			this.register_getLinkedSkeletonAnimationSourceIterator_void(this.nativeObject.pointer, "getLinkedSkeletonAnimationSourceIterator_void_callback");
			this.register__notifyManualBonesDirty_void(this.nativeObject.pointer, "_notifyManualBonesDirty_void_callback");
			this.register__notifyManualBoneStateChange_CBone(this.nativeObject.pointer, "_notifyManualBoneStateChange_CBone_callback");
			this.register_getManualBonesDirty_void(this.nativeObject.pointer, "getManualBonesDirty_void_callback");
			this.register_hasManualBones_void(this.nativeObject.pointer, "hasManualBones_void_callback");
			this.register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(this.nativeObject.pointer, "_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback");
			this.register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback");
			this.register__buildMapBoneByHandle_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback");
			this.register__buildMapBoneByName_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_buildMapBoneByName_CSkeleton_BoneHandleMap_callback");
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static SkeletonInstance fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SkeletonInstance obj = null;
 		if(baseObj instanceof SkeletonInstance)
		{
			obj = (SkeletonInstance)baseObj;
		} else {
			obj = new SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkeletonInstance");
			obj.increaseCast();
		}

		return obj;
	}
}
