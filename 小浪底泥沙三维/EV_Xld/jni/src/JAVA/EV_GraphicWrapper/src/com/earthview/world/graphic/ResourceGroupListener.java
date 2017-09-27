package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceGroupListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceGroupListener", new ResourceGroupListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCResourceGroupListenerProxy", new ResourceGroupListenerClassFactory());
	}

	public ResourceGroupListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCResourceGroupListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ResourceGroupListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void resourceGroupScriptingStarted_EVString_ev_size_t_callback(String groupName, long scriptCount)
	{
		String groupNameParamValue = groupName;
		long scriptCountParamValue = scriptCount;
		resourceGroupScriptingStarted(groupNameParamValue, scriptCountParamValue);
	}

	native private void resourceGroupScriptingStarted_EVString_ev_size_t(long pNativeObject, String groupName, long scriptCount);
	public void resourceGroupScriptingStarted(String groupName, long scriptCount)
	{
		String groupNameParamValue = groupName;
		long scriptCountParamValue = scriptCount;
		resourceGroupScriptingStarted_EVString_ev_size_t(this.nativeObject.pointer, groupNameParamValue, scriptCountParamValue);
	}
	native private void resourceGroupScriptingStarted_EVString_ev_size_t_NoVirtual(long pNativeObject, String groupName, long scriptCount);
	protected void resourceGroupScriptingStarted_NoVirtual(String groupName, long scriptCount)
	{
		String groupNameParamValue = groupName;
		long scriptCountParamValue = scriptCount;
		resourceGroupScriptingStarted_EVString_ev_size_t_NoVirtual(this.nativeObject.pointer, groupNameParamValue, scriptCountParamValue);
	}

	protected  void scriptParseStarted_EVString_ev_bool_callback(String scriptName, long skipThisScript)
	{
		String scriptNameParamValue = scriptName;
		BooleanPointer skipThisScriptParamValue = new BooleanPointer(new InstancePointer(skipThisScript));
		scriptParseStarted(scriptNameParamValue, skipThisScriptParamValue);
	}

	native private void scriptParseStarted_EVString_ev_bool(long pNativeObject, String scriptName, long skipThisScript);
	public void scriptParseStarted(String scriptName, BooleanPointer skipThisScript)
	{
		String scriptNameParamValue = scriptName;
		long skipThisScriptParamValue = skipThisScript.nativeObject.pointer;
		scriptParseStarted_EVString_ev_bool(this.nativeObject.pointer, scriptNameParamValue, skipThisScriptParamValue);
	}
	native private void scriptParseStarted_EVString_ev_bool_NoVirtual(long pNativeObject, String scriptName, long skipThisScript);
	protected void scriptParseStarted_NoVirtual(String scriptName, BooleanPointer skipThisScript)
	{
		String scriptNameParamValue = scriptName;
		long skipThisScriptParamValue = skipThisScript.nativeObject.pointer;
		scriptParseStarted_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, scriptNameParamValue, skipThisScriptParamValue);
	}

	protected  void scriptParseEnded_EVString_ev_bool_callback(String scriptName, boolean skipped)
	{
		String scriptNameParamValue = scriptName;
		boolean skippedParamValue = skipped;
		scriptParseEnded(scriptNameParamValue, skippedParamValue);
	}

	native private void scriptParseEnded_EVString_ev_bool(long pNativeObject, String scriptName, boolean skipped);
	public void scriptParseEnded(String scriptName, boolean skipped)
	{
		String scriptNameParamValue = scriptName;
		boolean skippedParamValue = skipped;
		scriptParseEnded_EVString_ev_bool(this.nativeObject.pointer, scriptNameParamValue, skippedParamValue);
	}
	native private void scriptParseEnded_EVString_ev_bool_NoVirtual(long pNativeObject, String scriptName, boolean skipped);
	protected void scriptParseEnded_NoVirtual(String scriptName, boolean skipped)
	{
		String scriptNameParamValue = scriptName;
		boolean skippedParamValue = skipped;
		scriptParseEnded_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, scriptNameParamValue, skippedParamValue);
	}

	protected  void resourceGroupScriptingEnded_EVString_callback(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupScriptingEnded(groupNameParamValue);
	}

	native private void resourceGroupScriptingEnded_EVString(long pNativeObject, String groupName);
	public void resourceGroupScriptingEnded(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupScriptingEnded_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	native private void resourceGroupScriptingEnded_EVString_NoVirtual(long pNativeObject, String groupName);
	protected void resourceGroupScriptingEnded_NoVirtual(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupScriptingEnded_EVString_NoVirtual(this.nativeObject.pointer, groupNameParamValue);
	}

	protected  void resourceGroupPrepareStarted_EVString_ev_size_t_callback(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupPrepareStarted(groupNameParamValue, resourceCountParamValue);
	}

	native private void resourceGroupPrepareStarted_EVString_ev_size_t(long pNativeObject, String groupName, long resourceCount);
	public void resourceGroupPrepareStarted(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupPrepareStarted_EVString_ev_size_t(this.nativeObject.pointer, groupNameParamValue, resourceCountParamValue);
	}
	native private void resourceGroupPrepareStarted_EVString_ev_size_t_NoVirtual(long pNativeObject, String groupName, long resourceCount);
	protected void resourceGroupPrepareStarted_NoVirtual(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupPrepareStarted_EVString_ev_size_t_NoVirtual(this.nativeObject.pointer, groupNameParamValue, resourceCountParamValue);
	}

	protected  void resourcePrepareStarted_ResourcePtr_callback(long resource)
	{
		com.earthview.world.graphic.ResourcePtr resourceParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.ResourcePtr)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		resourcePrepareStarted(resourceParamValue);
	}

	native private void resourcePrepareStarted_ResourcePtr(long pNativeObject, long resource);
	public void resourcePrepareStarted(com.earthview.world.graphic.ResourcePtr resource)
	{
		long resourceParamValue = resource.nativeObject.pointer;
		resourcePrepareStarted_ResourcePtr(this.nativeObject.pointer, resourceParamValue);
	}
	native private void resourcePrepareStarted_ResourcePtr_NoVirtual(long pNativeObject, long resource);
	protected void resourcePrepareStarted_NoVirtual(com.earthview.world.graphic.ResourcePtr resource)
	{
		long resourceParamValue = resource.nativeObject.pointer;
		resourcePrepareStarted_ResourcePtr_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	protected  void resourcePrepareEnded_void_callback()
	{
		resourcePrepareEnded();
	}

	native private void resourcePrepareEnded_void(long pNativeObject);
	public void resourcePrepareEnded()
	{
		resourcePrepareEnded_void(this.nativeObject.pointer);
	}
	native private void resourcePrepareEnded_void_NoVirtual(long pNativeObject);
	protected void resourcePrepareEnded_NoVirtual()
	{
		resourcePrepareEnded_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void worldGeometryPrepareStageStarted_EVString_callback(String description)
	{
		String descriptionParamValue = description;
		worldGeometryPrepareStageStarted(descriptionParamValue);
	}

	native private void worldGeometryPrepareStageStarted_EVString(long pNativeObject, String description);
	public void worldGeometryPrepareStageStarted(String description)
	{
		String descriptionParamValue = description;
		worldGeometryPrepareStageStarted_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void worldGeometryPrepareStageStarted_EVString_NoVirtual(long pNativeObject, String description);
	protected void worldGeometryPrepareStageStarted_NoVirtual(String description)
	{
		String descriptionParamValue = description;
		worldGeometryPrepareStageStarted_EVString_NoVirtual(this.nativeObject.pointer, descriptionParamValue);
	}

	protected  void worldGeometryPrepareStageEnded_void_callback()
	{
		worldGeometryPrepareStageEnded();
	}

	native private void worldGeometryPrepareStageEnded_void(long pNativeObject);
	public void worldGeometryPrepareStageEnded()
	{
		worldGeometryPrepareStageEnded_void(this.nativeObject.pointer);
	}
	native private void worldGeometryPrepareStageEnded_void_NoVirtual(long pNativeObject);
	protected void worldGeometryPrepareStageEnded_NoVirtual()
	{
		worldGeometryPrepareStageEnded_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void resourceGroupPrepareEnded_EVString_callback(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupPrepareEnded(groupNameParamValue);
	}

	native private void resourceGroupPrepareEnded_EVString(long pNativeObject, String groupName);
	public void resourceGroupPrepareEnded(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupPrepareEnded_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	native private void resourceGroupPrepareEnded_EVString_NoVirtual(long pNativeObject, String groupName);
	protected void resourceGroupPrepareEnded_NoVirtual(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupPrepareEnded_EVString_NoVirtual(this.nativeObject.pointer, groupNameParamValue);
	}

	protected  void resourceGroupLoadStarted_EVString_ev_size_t_callback(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupLoadStarted(groupNameParamValue, resourceCountParamValue);
	}

	native private void resourceGroupLoadStarted_EVString_ev_size_t(long pNativeObject, String groupName, long resourceCount);
	public void resourceGroupLoadStarted(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupLoadStarted_EVString_ev_size_t(this.nativeObject.pointer, groupNameParamValue, resourceCountParamValue);
	}
	native private void resourceGroupLoadStarted_EVString_ev_size_t_NoVirtual(long pNativeObject, String groupName, long resourceCount);
	protected void resourceGroupLoadStarted_NoVirtual(String groupName, long resourceCount)
	{
		String groupNameParamValue = groupName;
		long resourceCountParamValue = resourceCount;
		resourceGroupLoadStarted_EVString_ev_size_t_NoVirtual(this.nativeObject.pointer, groupNameParamValue, resourceCountParamValue);
	}

	protected  void resourceLoadStarted_ResourcePtr_callback(long resource)
	{
		com.earthview.world.graphic.ResourcePtr resourceParamValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.ResourcePtr)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		resourceLoadStarted(resourceParamValue);
	}

	native private void resourceLoadStarted_ResourcePtr(long pNativeObject, long resource);
	public void resourceLoadStarted(com.earthview.world.graphic.ResourcePtr resource)
	{
		long resourceParamValue = resource.nativeObject.pointer;
		resourceLoadStarted_ResourcePtr(this.nativeObject.pointer, resourceParamValue);
	}
	native private void resourceLoadStarted_ResourcePtr_NoVirtual(long pNativeObject, long resource);
	protected void resourceLoadStarted_NoVirtual(com.earthview.world.graphic.ResourcePtr resource)
	{
		long resourceParamValue = resource.nativeObject.pointer;
		resourceLoadStarted_ResourcePtr_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	protected  void resourceLoadEnded_void_callback()
	{
		resourceLoadEnded();
	}

	native private void resourceLoadEnded_void(long pNativeObject);
	public void resourceLoadEnded()
	{
		resourceLoadEnded_void(this.nativeObject.pointer);
	}
	native private void resourceLoadEnded_void_NoVirtual(long pNativeObject);
	protected void resourceLoadEnded_NoVirtual()
	{
		resourceLoadEnded_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void worldGeometryStageStarted_EVString_callback(String description)
	{
		String descriptionParamValue = description;
		worldGeometryStageStarted(descriptionParamValue);
	}

	native private void worldGeometryStageStarted_EVString(long pNativeObject, String description);
	public void worldGeometryStageStarted(String description)
	{
		String descriptionParamValue = description;
		worldGeometryStageStarted_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void worldGeometryStageStarted_EVString_NoVirtual(long pNativeObject, String description);
	protected void worldGeometryStageStarted_NoVirtual(String description)
	{
		String descriptionParamValue = description;
		worldGeometryStageStarted_EVString_NoVirtual(this.nativeObject.pointer, descriptionParamValue);
	}

	protected  void worldGeometryStageEnded_void_callback()
	{
		worldGeometryStageEnded();
	}

	native private void worldGeometryStageEnded_void(long pNativeObject);
	public void worldGeometryStageEnded()
	{
		worldGeometryStageEnded_void(this.nativeObject.pointer);
	}
	native private void worldGeometryStageEnded_void_NoVirtual(long pNativeObject);
	protected void worldGeometryStageEnded_NoVirtual()
	{
		worldGeometryStageEnded_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void resourceGroupLoadEnded_EVString_callback(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupLoadEnded(groupNameParamValue);
	}

	native private void resourceGroupLoadEnded_EVString(long pNativeObject, String groupName);
	public void resourceGroupLoadEnded(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupLoadEnded_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	native private void resourceGroupLoadEnded_EVString_NoVirtual(long pNativeObject, String groupName);
	protected void resourceGroupLoadEnded_NoVirtual(String groupName)
	{
		String groupNameParamValue = groupName;
		resourceGroupLoadEnded_EVString_NoVirtual(this.nativeObject.pointer, groupNameParamValue);
	}

	public ResourceGroupListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceGroupListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_resourceGroupScriptingStarted_EVString_ev_size_t(long pNativeObject, String method);
	native protected void register_scriptParseStarted_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_scriptParseEnded_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_resourceGroupScriptingEnded_EVString(long pNativeObject, String method);
	native protected void register_resourceGroupPrepareStarted_EVString_ev_size_t(long pNativeObject, String method);
	native protected void register_resourcePrepareStarted_ResourcePtr(long pNativeObject, String method);
	native protected void register_resourcePrepareEnded_void(long pNativeObject, String method);
	native protected void register_worldGeometryPrepareStageStarted_EVString(long pNativeObject, String method);
	native protected void register_worldGeometryPrepareStageEnded_void(long pNativeObject, String method);
	native protected void register_resourceGroupPrepareEnded_EVString(long pNativeObject, String method);
	native protected void register_resourceGroupLoadStarted_EVString_ev_size_t(long pNativeObject, String method);
	native protected void register_resourceLoadStarted_ResourcePtr(long pNativeObject, String method);
	native protected void register_resourceLoadEnded_void(long pNativeObject, String method);
	native protected void register_worldGeometryStageStarted_EVString(long pNativeObject, String method);
	native protected void register_worldGeometryStageEnded_void(long pNativeObject, String method);
	native protected void register_resourceGroupLoadEnded_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_resourceGroupScriptingStarted_EVString_ev_size_t(this.nativeObject.pointer, "resourceGroupScriptingStarted_EVString_ev_size_t_callback");
			this.register_scriptParseStarted_EVString_ev_bool(this.nativeObject.pointer, "scriptParseStarted_EVString_ev_bool_callback");
			this.register_scriptParseEnded_EVString_ev_bool(this.nativeObject.pointer, "scriptParseEnded_EVString_ev_bool_callback");
			this.register_resourceGroupScriptingEnded_EVString(this.nativeObject.pointer, "resourceGroupScriptingEnded_EVString_callback");
			this.register_resourceGroupPrepareStarted_EVString_ev_size_t(this.nativeObject.pointer, "resourceGroupPrepareStarted_EVString_ev_size_t_callback");
			this.register_resourcePrepareStarted_ResourcePtr(this.nativeObject.pointer, "resourcePrepareStarted_ResourcePtr_callback");
			this.register_resourcePrepareEnded_void(this.nativeObject.pointer, "resourcePrepareEnded_void_callback");
			this.register_worldGeometryPrepareStageStarted_EVString(this.nativeObject.pointer, "worldGeometryPrepareStageStarted_EVString_callback");
			this.register_worldGeometryPrepareStageEnded_void(this.nativeObject.pointer, "worldGeometryPrepareStageEnded_void_callback");
			this.register_resourceGroupPrepareEnded_EVString(this.nativeObject.pointer, "resourceGroupPrepareEnded_EVString_callback");
			this.register_resourceGroupLoadStarted_EVString_ev_size_t(this.nativeObject.pointer, "resourceGroupLoadStarted_EVString_ev_size_t_callback");
			this.register_resourceLoadStarted_ResourcePtr(this.nativeObject.pointer, "resourceLoadStarted_ResourcePtr_callback");
			this.register_resourceLoadEnded_void(this.nativeObject.pointer, "resourceLoadEnded_void_callback");
			this.register_worldGeometryStageStarted_EVString(this.nativeObject.pointer, "worldGeometryStageStarted_EVString_callback");
			this.register_worldGeometryStageEnded_void(this.nativeObject.pointer, "worldGeometryStageEnded_void_callback");
			this.register_resourceGroupLoadEnded_EVString(this.nativeObject.pointer, "resourceGroupLoadEnded_EVString_callback");
		}
	}
	
	public static ResourceGroupListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceGroupListener obj = null;
 		if(baseObj instanceof ResourceGroupListener)
		{
			obj = (ResourceGroupListener)baseObj;
		} else {
			obj = new ResourceGroupListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceGroupListener");
			obj.increaseCast();
		}

		return obj;
	}
}
