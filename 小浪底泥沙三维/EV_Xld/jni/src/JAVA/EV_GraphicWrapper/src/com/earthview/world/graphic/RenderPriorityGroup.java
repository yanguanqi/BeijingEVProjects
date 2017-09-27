package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 这个类简化了渲染接口，所有的接口包含同一个EarthView::World::Graphic::CRenderQueueGroup和一样的属性
 */
public class RenderPriorityGroup extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderPriorityGroup", new RenderPriorityGroupClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 
	 * @param splitPassesByLightingType 
	 * @param splitNoShadowPasses 
	 * @param shadowCastersNotReceivers 
	 */
	public RenderPriorityGroup(com.earthview.world.graphic.RenderQueueGroup ref_parent, boolean splitPassesByLightingType, boolean splitNoShadowPasses, boolean shadowCastersNotReceivers) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer splitPassesByLightingTypePtr = new BasePointer(splitPassesByLightingType);
		list.add("splitPassesByLightingType", splitPassesByLightingTypePtr.get());
		BasePointer splitNoShadowPassesPtr = new BasePointer(splitNoShadowPasses);
		list.add("splitNoShadowPasses", splitNoShadowPassesPtr.get());
		BasePointer shadowCastersNotReceiversPtr = new BasePointer(shadowCastersNotReceivers);
		list.add("shadowCastersNotReceivers", shadowCastersNotReceiversPtr.get());
		Create("CRenderPriorityGroup", list);
	}

	native private long getSolidsBasic_void(long pNativeObject);
	/**
	 * 获取没有阴影的通路,或者调制阴影模式下开启阴影接收功能的通路，或者在加成阴影下的环境光照(ambient)渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getSolidsBasic()
	{
		long returnValue = getSolidsBasic_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private long getSolidsDiffuseSpecular_void(long pNativeObject);
	/**
	 * 获取加成阴影模式下的漫反射和镜面反射通路中的渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getSolidsDiffuseSpecular()
	{
		long returnValue = getSolidsDiffuseSpecular_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private long getSolidsDecal_void(long pNativeObject);
	/**
	 * 获得加成阴影模式下贴花渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getSolidsDecal()
	{
		long returnValue = getSolidsDecal_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private long getSolidsNoShadowReceive_void(long pNativeObject);
	/**
	 * 获得阴影功能开启但是阴影接受功能关闭的渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getSolidsNoShadowReceive()
	{
		long returnValue = getSolidsNoShadowReceive_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private long getTransparentsUnsorted_void(long pNativeObject);
	/**
	 * 获得未排序的透明物体渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getTransparentsUnsorted()
	{
		long returnValue = getTransparentsUnsorted_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private long getTransparents_void(long pNativeObject);
	/**
	 * 获得排序的透明物体渲染通路及其关联的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection getTransparents()
	{
		long returnValue = getTransparents_void(this.nativeObject.pointer);
		com.earthview.world.graphic.QueuedRenderableCollection __returnValue = new com.earthview.world.graphic.QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate, "CQueuedRenderableCollection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.QueuedRenderableCollection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQueuedRenderableCollection");
		}
		return __returnValue;
	}
	native private void resetOrganisationModes_void(long pNativeObject);
	/**
	 * 在组中重新设置实体需要的组织模型
	 * @param  
	 */
	public void resetOrganisationModes()
	{
		resetOrganisationModes_void(this.nativeObject.pointer);
	}
	native private void addOrganisationMode_OrganisationMode(long pNativeObject, int om);
	/**
	 * 在组中添加一个必须得实体分组模型
	 * @param  
	 */
	public void addOrganisationMode(com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		int omParamValue = om.getValue();
		addOrganisationMode_OrganisationMode(this.nativeObject.pointer, omParamValue);
	}
	native private void defaultOrganisationMode_void(long pNativeObject);
	/**
	 * 在组中设置对实体设置默认的分组模型
	 * @param  
	 */
	public void defaultOrganisationMode()
	{
		defaultOrganisationMode_void(this.nativeObject.pointer);
	}
	native private void addRenderable_CRenderable_CTechnique(long pNativeObject, long ref_pRend, long ref_pTech);
	/**
	 * 在组中添加一个渲染接口
	 * @param  
	 */
	public void addRenderable(com.earthview.world.graphic.Renderable ref_pRend, com.earthview.world.graphic.Technique ref_pTech)
	{
		long ref_pRendParamValue = (ref_pRend == null ? 0L : ref_pRend.nativeObject.pointer);
		long ref_pTechParamValue = (ref_pTech == null ? 0L : ref_pTech.nativeObject.pointer);
		addRenderable_CRenderable_CTechnique(this.nativeObject.pointer, ref_pRendParamValue, ref_pTechParamValue);
	}
	native private void sort_CCamera(long pNativeObject, long cam);
	/**
	 * 对添加到队列中的实体进行分类
	 * @param  
	 */
	public void sort(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		sort_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空组中的渲染接口
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void setSplitPassesByLightingType_ev_bool(long pNativeObject, boolean split);
	/**
	 * 设置队列是否需要通过它们的光照类型划分通路
	 * @param split 
	 */
	public void setSplitPassesByLightingType(boolean split)
	{
		boolean splitParamValue = split;
		setSplitPassesByLightingType_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private void setSplitNoShadowPasses_ev_bool(long pNativeObject, boolean split);
	/**
	 * 设置是否接收阴影不成功的通路应该被分离
	 * @param split 
	 */
	public void setSplitNoShadowPasses(boolean split)
	{
		boolean splitParamValue = split;
		setSplitNoShadowPasses_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private void setShadowCastersCannotBeReceivers_ev_bool(long pNativeObject, boolean ind);
	/**
	 * 设置是否投掷阴影的实体应该被看作没有接收阴影
	 * @param  
	 */
	public void setShadowCastersCannotBeReceivers(boolean ind)
	{
		boolean indParamValue = ind;
		setShadowCastersCannotBeReceivers_ev_bool(this.nativeObject.pointer, indParamValue);
	}
	native private void merge_CRenderPriorityGroup(long pNativeObject, long rhs);
	/**
	 * 融合组中的渲染接口
	 * @param  
	 */
	public void merge(com.earthview.world.graphic.RenderPriorityGroup rhs)
	{
		long rhsParamValue = (rhs == null ? 0L : rhs.nativeObject.pointer);
		merge_CRenderPriorityGroup(this.nativeObject.pointer, rhsParamValue);
	}
	public RenderPriorityGroup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderPriorityGroup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderPriorityGroup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderPriorityGroup obj = null;
 		if(baseObj instanceof RenderPriorityGroup)
		{
			obj = (RenderPriorityGroup)baseObj;
		} else {
			obj = new RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderPriorityGroup");
			obj.increaseCast();
		}

		return obj;
	}
}
