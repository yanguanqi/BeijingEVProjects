package com.earthview.world.spatial.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 环境基类
 */
public class Iatmosphere extends com.earthview.world.graphic.SceneManager.SceneManagerListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::IAtmosphere", new IatmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::JIAtmosphereProxy", new IatmosphereClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
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

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 　设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素读取
	 * @param  
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  long toXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		com.earthview.world.core.XmlElement returnValue = toXmlElement(elementParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 　序列化xml元素
	 */
	public com.earthview.world.core.XmlElement toXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = toXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = toXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	protected  void fromXML_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXML(elementParamValue);
	}

	native private void fromXML_CXmlElement(long pNativeObject, long element);
	/**
	 * 　序列化xml文本
	 */
	public void fromXML(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXML_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXML_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXML_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXML_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  String toXML_void_callback()
	{
		String returnValue = toXML();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 　存储为xml文本
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Iatmosphere(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iatmosphere(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 在每帧更新场景图前触发			
	 */
	public void preUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		super.preUpdateSceneGraph_NoVirtual(source, camera);
	}
	/**
	 * 在每帧更新场景图后触发			
	 */
	public void postUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		super.postUpdateSceneGraph_NoVirtual(source, camera);
	}
	/**
	 * 在场景中搜索可见对象之前触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void preFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.preFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 在场景中搜索可见对象之后触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void postFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.postFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 阴影纹理更新时调用只有阴影纹理被使用的时候，这个事件才触发
	 * @param numberOfShadowTextures 阴影纹理使用中的数量
	 */
	public void shadowTexturesUpdated(long numberOfShadowTextures)
	{
		super.shadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
	}
	/**
	 * 在为纹理阴影投射者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param camera 摄像机
	 * @param iteration 迭代次数
	 */
	public void shadowTextureCasterPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
	{
		super.shadowTextureCasterPreViewProj_NoVirtual(light, camera, iteration);
	}
	/**
	 * 在为纹理阴影接收者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param frustum 视椎体
	 */
	public void shadowTextureReceiverPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum frustum)
	{
		super.shadowTextureReceiverPreViewProj_NoVirtual(light, frustum);
	}
	/**
	 * 对影响视椎体的光源进行排序
	 * @param lightList 光源列表
	 * @return 为true，已排序
	 */
	public boolean sortLightsAffectingFrustum(com.earthview.world.graphic.LightList lightList)
	{
		return super.sortLightsAffectingFrustum_NoVirtual(lightList);
	}
	/**
	 * 场景管理器销毁时触发
	 * @param source 场景管理器
	 */
	public void sceneManagerDestroyed(com.earthview.world.graphic.SceneManager source)
	{
		super.sceneManagerDestroyed_NoVirtual(source);
	}
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_fromXML_CXmlElement(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_preUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_postUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_shadowTexturesUpdated_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureReceiverPreViewProj_CLight_CFrustum(long pNativeObject, String method);
	native protected void register_sortLightsAffectingFrustum_LightList(long pNativeObject, String method);
	native protected void register_sceneManagerDestroyed_CSceneManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_CXmlElement(this.nativeObject.pointer, "toXmlElement_CXmlElement_callback");
			this.register_fromXML_CXmlElement(this.nativeObject.pointer, "fromXML_CXmlElement_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_preUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "preUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_postUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "postUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_shadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, "shadowTexturesUpdated_ev_size_t_callback");
			this.register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
			this.register_shadowTextureReceiverPreViewProj_CLight_CFrustum(this.nativeObject.pointer, "shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
			this.register_sortLightsAffectingFrustum_LightList(this.nativeObject.pointer, "sortLightsAffectingFrustum_LightList_callback");
			this.register_sceneManagerDestroyed_CSceneManager(this.nativeObject.pointer, "sceneManagerDestroyed_CSceneManager_callback");
		}
	}
	
	public static Iatmosphere fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iatmosphere obj = null;
 		if(baseObj instanceof Iatmosphere)
		{
			obj = (Iatmosphere)baseObj;
		} else {
			obj = new Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IAtmosphere");
			obj.increaseCast();
		}

		return obj;
	}
}
