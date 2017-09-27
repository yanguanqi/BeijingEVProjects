package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 实现在CRenderQueue中对队列组的调用
 */
public class RenderQueueInvocation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueInvocation", new RenderQueueInvocationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderQueueInvocationProxy", new RenderQueueInvocationClassFactory());
	}

	/**
	 * 构造函数
	 * @param renderQueueGroupID 渲染队列的分组ID号
	 * @param invocationName 唯一识别调用的名字
	 */
	public RenderQueueInvocation(short renderQueueGroupID, String invocationName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer renderQueueGroupIDPtr = new BasePointer(renderQueueGroupID);
		list.add("renderQueueGroupID", renderQueueGroupIDPtr.get());
		BasePointer invocationNamePtr = new BasePointer(invocationName);
		list.add("invocationName", invocationNamePtr.get());
		Create("JCRenderQueueInvocationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderQueueInvocation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param renderQueueGroupID 渲染队列的分组ID号
	 */
	public RenderQueueInvocation(short renderQueueGroupID) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer renderQueueGroupIDPtr = new BasePointer(renderQueueGroupID);
		list.add("renderQueueGroupID", renderQueueGroupIDPtr.get());
		Create("JCRenderQueueInvocationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderQueueInvocation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  short getRenderQueueGroupID_void_callback()
	{
		short returnValue = getRenderQueueGroupID();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRenderQueueGroupID_void(long pNativeObject);
	/**
	 * 获得渲染队列组的ID号
	 * @param  
	 * @return ID号
	 */
	public short getRenderQueueGroupID()
	{
		short returnValue = getRenderQueueGroupID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRenderQueueGroupID_void_NoVirtual(long pNativeObject);
	protected short getRenderQueueGroupID_NoVirtual()
	{
		short returnValue = getRenderQueueGroupID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getInvocationName_void_callback()
	{
		String returnValue = getInvocationName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getInvocationName_void(long pNativeObject);
	/**
	 * 获得调用的名字
	 * @param  
	 * @return name
	 */
	public String getInvocationName()
	{
		String returnValue = getInvocationName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getInvocationName_void_NoVirtual(long pNativeObject);
	protected String getInvocationName_NoVirtual()
	{
		String returnValue = getInvocationName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSolidsOrganisation_OrganisationMode_callback(int org)
	{
		com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode orgParamValue = com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode.toEnum(org);
		setSolidsOrganisation(orgParamValue);
	}

	native private void setSolidsOrganisation_OrganisationMode(long pNativeObject, int org);
	/**
	 * 在队列组调用中设置实体的组织模型
	 * @param org 
	 */
	public void setSolidsOrganisation(com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode org)
	{
		int orgParamValue = org.getValue();
		setSolidsOrganisation_OrganisationMode(this.nativeObject.pointer, orgParamValue);
	}
	native private void setSolidsOrganisation_OrganisationMode_NoVirtual(long pNativeObject, int org);
	protected void setSolidsOrganisation_NoVirtual(com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode org)
	{
		int orgParamValue = org.getValue();
		setSolidsOrganisation_OrganisationMode_NoVirtual(this.nativeObject.pointer, orgParamValue);
	}

	protected  int getSolidsOrganisation_void_callback()
	{
		com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode returnValue = getSolidsOrganisation();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSolidsOrganisation_void(long pNativeObject);
	/**
	 * 在队列中获得实体的组织模型
	 * @param  
	 */
	public com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode getSolidsOrganisation()
	{
		int returnValue = getSolidsOrganisation_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode.toEnum(returnValue);
	}
	native private int getSolidsOrganisation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode getSolidsOrganisation_NoVirtual()
	{
		int returnValue = getSolidsOrganisation_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode.toEnum(returnValue);
	}

	protected  void setSuppressShadows_ev_bool_callback(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressShadows(suppressParamValue);
	}

	native private void setSuppressShadows_ev_bool(long pNativeObject, boolean suppress);
	/**
	 * 设置当调用队列时阴影是否被阻止
	 * @param suppress 
	 * @return 返回实体的顺序模型
	 */
	public void setSuppressShadows(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressShadows_ev_bool(this.nativeObject.pointer, suppressParamValue);
	}
	native private void setSuppressShadows_ev_bool_NoVirtual(long pNativeObject, boolean suppress);
	protected void setSuppressShadows_NoVirtual(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressShadows_ev_bool_NoVirtual(this.nativeObject.pointer, suppressParamValue);
	}

	protected  boolean getSuppressShadows_void_callback()
	{
		boolean returnValue = getSuppressShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSuppressShadows_void(long pNativeObject);
	/**
	 * 获得当调用队列时阴影是否被阻止
	 * @param  
	 * @return 阻止返回true，否则返回false
	 */
	public boolean getSuppressShadows()
	{
		boolean returnValue = getSuppressShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSuppressShadows_void_NoVirtual(long pNativeObject);
	protected boolean getSuppressShadows_NoVirtual()
	{
		boolean returnValue = getSuppressShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSuppressRenderStateChanges_ev_bool_callback(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressRenderStateChanges(suppressParamValue);
	}

	native private void setSuppressRenderStateChanges_ev_bool(long pNativeObject, boolean suppress);
	/**
	 * 当调用这个队列时，设置是否阻止渲染状态的改变
	 * @param suppress 
	 */
	public void setSuppressRenderStateChanges(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressRenderStateChanges_ev_bool(this.nativeObject.pointer, suppressParamValue);
	}
	native private void setSuppressRenderStateChanges_ev_bool_NoVirtual(long pNativeObject, boolean suppress);
	protected void setSuppressRenderStateChanges_NoVirtual(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		setSuppressRenderStateChanges_ev_bool_NoVirtual(this.nativeObject.pointer, suppressParamValue);
	}

	protected  boolean getSuppressRenderStateChanges_void_callback()
	{
		boolean returnValue = getSuppressRenderStateChanges();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSuppressRenderStateChanges_void(long pNativeObject);
	/**
	 * 当调用这个队列时，获得渲染状态的改变是否被阻止
	 * @param  
	 * @return 阻止返回true，否则返回false
	 */
	public boolean getSuppressRenderStateChanges()
	{
		boolean returnValue = getSuppressRenderStateChanges_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSuppressRenderStateChanges_void_NoVirtual(long pNativeObject);
	protected boolean getSuppressRenderStateChanges_NoVirtual()
	{
		boolean returnValue = getSuppressRenderStateChanges_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void invoke_CRenderQueueGroup_CSceneManager_callback(long group, long targetSceneManager)
	{
		com.earthview.world.graphic.RenderQueueGroup groupParamValue = (group == 0L ? null : new com.earthview.world.graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate));
		if(groupParamValue != null)
		{
		groupParamValue.setDelegate(true);
		groupParamValue.setInstancePointer(new InstancePointer(group));
		IClassFactory groupParamValueClassFactory = GlobalClassFactoryMap.get(groupParamValue.getCppInstanceTypeName());
		if (groupParamValueClassFactory != null)
		{
			groupParamValue.setDelegate(true);
			groupParamValue = (com.earthview.world.graphic.RenderQueueGroup)groupParamValueClassFactory.create();
			groupParamValue.setDelegate(true);
			groupParamValue.setInstancePointer(new InstancePointer(group));
		}
		}
		com.earthview.world.graphic.SceneManager targetSceneManagerParamValue = (targetSceneManager == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(targetSceneManagerParamValue != null)
		{
		targetSceneManagerParamValue.setDelegate(true);
		targetSceneManagerParamValue.setInstancePointer(new InstancePointer(targetSceneManager));
		IClassFactory targetSceneManagerParamValueClassFactory = GlobalClassFactoryMap.get(targetSceneManagerParamValue.getCppInstanceTypeName());
		if (targetSceneManagerParamValueClassFactory != null)
		{
			targetSceneManagerParamValue.setDelegate(true);
			targetSceneManagerParamValue = (com.earthview.world.graphic.SceneManager)targetSceneManagerParamValueClassFactory.create();
			targetSceneManagerParamValue.setDelegate(true);
			targetSceneManagerParamValue.setInstancePointer(new InstancePointer(targetSceneManager));
		}
		}
		invoke(groupParamValue, targetSceneManagerParamValue);
	}

	native private void invoke_CRenderQueueGroup_CSceneManager(long pNativeObject, long group, long targetSceneManager);
	/**
	 * 在具体的队列组中调用这个类
	 * @param group 队列组
	 * @param targetSceneManager 目标场景
	 */
	public void invoke(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.SceneManager targetSceneManager)
	{
		long groupParamValue = (group == null ? 0L : group.nativeObject.pointer);
		long targetSceneManagerParamValue = (targetSceneManager == null ? 0L : targetSceneManager.nativeObject.pointer);
		invoke_CRenderQueueGroup_CSceneManager(this.nativeObject.pointer, groupParamValue, targetSceneManagerParamValue);
	}
	native private void invoke_CRenderQueueGroup_CSceneManager_NoVirtual(long pNativeObject, long group, long targetSceneManager);
	protected void invoke_NoVirtual(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.SceneManager targetSceneManager)
	{
		long groupParamValue = (group == null ? 0L : group.nativeObject.pointer);
		long targetSceneManagerParamValue = (targetSceneManager == null ? 0L : targetSceneManager.nativeObject.pointer);
		invoke_CRenderQueueGroup_CSceneManager_NoVirtual(this.nativeObject.pointer, groupParamValue, targetSceneManagerParamValue);
	}

	native private static String get_RENDER_QUEUE_INVOCATION_SHADOWS_void();
	public static String get_RENDER_QUEUE_INVOCATION_SHADOWS()
	{
		String jniValue = get_RENDER_QUEUE_INVOCATION_SHADOWS_void();
		
		return jniValue;
	}
	
	native private static void set_RENDER_QUEUE_INVOCATION_SHADOWS_EVString (String value);
	public static void set_RENDER_QUEUE_INVOCATION_SHADOWS(String RENDER_QUEUE_INVOCATION_SHADOWS)
	{
		String RENDER_QUEUE_INVOCATION_SHADOWSParamValue = RENDER_QUEUE_INVOCATION_SHADOWS;
		
		set_RENDER_QUEUE_INVOCATION_SHADOWS_EVString(RENDER_QUEUE_INVOCATION_SHADOWSParamValue);
	}
	
	public RenderQueueInvocation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueueInvocation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRenderQueueGroupID_void(long pNativeObject, String method);
	native protected void register_getInvocationName_void(long pNativeObject, String method);
	native protected void register_setSolidsOrganisation_OrganisationMode(long pNativeObject, String method);
	native protected void register_getSolidsOrganisation_void(long pNativeObject, String method);
	native protected void register_setSuppressShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getSuppressShadows_void(long pNativeObject, String method);
	native protected void register_setSuppressRenderStateChanges_ev_bool(long pNativeObject, String method);
	native protected void register_getSuppressRenderStateChanges_void(long pNativeObject, String method);
	native protected void register_invoke_CRenderQueueGroup_CSceneManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRenderQueueGroupID_void(this.nativeObject.pointer, "getRenderQueueGroupID_void_callback");
			this.register_getInvocationName_void(this.nativeObject.pointer, "getInvocationName_void_callback");
			this.register_setSolidsOrganisation_OrganisationMode(this.nativeObject.pointer, "setSolidsOrganisation_OrganisationMode_callback");
			this.register_getSolidsOrganisation_void(this.nativeObject.pointer, "getSolidsOrganisation_void_callback");
			this.register_setSuppressShadows_ev_bool(this.nativeObject.pointer, "setSuppressShadows_ev_bool_callback");
			this.register_getSuppressShadows_void(this.nativeObject.pointer, "getSuppressShadows_void_callback");
			this.register_setSuppressRenderStateChanges_ev_bool(this.nativeObject.pointer, "setSuppressRenderStateChanges_ev_bool_callback");
			this.register_getSuppressRenderStateChanges_void(this.nativeObject.pointer, "getSuppressRenderStateChanges_void_callback");
			this.register_invoke_CRenderQueueGroup_CSceneManager(this.nativeObject.pointer, "invoke_CRenderQueueGroup_CSceneManager_callback");
		}
	}
	
	public static RenderQueueInvocation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueueInvocation obj = null;
 		if(baseObj instanceof RenderQueueInvocation)
		{
			obj = (RenderQueueInvocation)baseObj;
		} else {
			obj = new RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderQueueInvocation");
			obj.increaseCast();
		}

		return obj;
	}
}
