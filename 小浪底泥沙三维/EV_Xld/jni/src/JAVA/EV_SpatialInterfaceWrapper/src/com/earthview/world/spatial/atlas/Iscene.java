package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Iscene extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IScene", new IsceneClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISceneProxy", new IsceneClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取场景名称
	 * @param  
	 * @return 场景名字
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
	 * 设置场景名称
	 * @param name 场景名称
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

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 是否被打开
	 * @param  
	 */
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isActive_void_NoVirtual(long pNativeObject);
	protected boolean isActive_NoVirtual()
	{
		boolean returnValue = isActive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setActive_ev_bool_callback(boolean active)
	{
		boolean activeParamValue = active;
		setActive(activeParamValue);
	}

	native private void setActive_ev_bool(long pNativeObject, boolean active);
	/**
	 * 标记打开状态
	 * @param  
	 */
	public void setActive(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool(this.nativeObject.pointer, activeParamValue);
	}
	native private void setActive_ev_bool_NoVirtual(long pNativeObject, boolean active);
	protected void setActive_NoVirtual(boolean active)
	{
		boolean activeParamValue = active;
		setActive_ev_bool_NoVirtual(this.nativeObject.pointer, activeParamValue);
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取关于场景的描述
	 * @param  
	 * @return 场景的描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDescription_EVString_callback(String desc)
	{
		String descParamValue = desc;
		setDescription(descParamValue);
	}

	native private void setDescription_EVString(long pNativeObject, String desc);
	/**
	 * 设置关于场景的描述
	 * @param desc 场景描述
	 */
	public void setDescription(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString(this.nativeObject.pointer, descParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String desc);
	protected void setDescription_NoVirtual(String desc)
	{
		String descParamValue = desc;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descParamValue);
	}

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取场景当前坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  long getKmlGroupLayer_void_callback()
	{
		com.earthview.world.spatial.atlas.Ilayer returnValue = getKmlGroupLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getKmlGroupLayer_void(long pNativeObject);
	/**
	 * 获得KML图层组
	 */
	public com.earthview.world.spatial.atlas.Ilayer getKmlGroupLayer()
	{
		long returnValue = getKmlGroupLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getKmlGroupLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer getKmlGroupLayer_NoVirtual()
	{
		long returnValue = getKmlGroupLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long getFeatureGroupLayer_void_callback()
	{
		com.earthview.world.spatial.atlas.Ilayer returnValue = getFeatureGroupLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFeatureGroupLayer_void(long pNativeObject);
	/**
	 * 获得特征图层组(包括二维扩展图层、模型图层、特效图层)
	 */
	public com.earthview.world.spatial.atlas.Ilayer getFeatureGroupLayer()
	{
		long returnValue = getFeatureGroupLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getFeatureGroupLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer getFeatureGroupLayer_NoVirtual()
	{
		long returnValue = getFeatureGroupLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long getImageGroupLayer_void_callback()
	{
		com.earthview.world.spatial.atlas.Ilayer returnValue = getImageGroupLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getImageGroupLayer_void(long pNativeObject);
	/**
	 * 获得影像图层组
	 */
	public com.earthview.world.spatial.atlas.Ilayer getImageGroupLayer()
	{
		long returnValue = getImageGroupLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getImageGroupLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer getImageGroupLayer_NoVirtual()
	{
		long returnValue = getImageGroupLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long getTerrainGroupLayer_void_callback()
	{
		com.earthview.world.spatial.atlas.Ilayer returnValue = getTerrainGroupLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTerrainGroupLayer_void(long pNativeObject);
	/**
	 * 获得高程图层组
	 */
	public com.earthview.world.spatial.atlas.Ilayer getTerrainGroupLayer()
	{
		long returnValue = getTerrainGroupLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getTerrainGroupLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer getTerrainGroupLayer_NoVirtual()
	{
		long returnValue = getTerrainGroupLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.atlas.Iscene returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 创建场景的克隆体
	 * @param  
	 * @return 场景的克隆体
	 */
	public com.earthview.world.spatial.atlas.Iscene ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Iscene ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将场景的配置以流的方式导出
	 * @param stream 导出的流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  String toXML_void_callback()
	{
		String returnValue = toXML();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 将场景的配置以XML的方式导出
	 * @param  
	 * @return xml
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

	public Iscene(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iscene(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_getKmlGroupLayer_void(long pNativeObject, String method);
	native protected void register_getFeatureGroupLayer_void(long pNativeObject, String method);
	native protected void register_getImageGroupLayer_void(long pNativeObject, String method);
	native protected void register_getTerrainGroupLayer_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_getKmlGroupLayer_void(this.nativeObject.pointer, "getKmlGroupLayer_void_callback");
			this.register_getFeatureGroupLayer_void(this.nativeObject.pointer, "getFeatureGroupLayer_void_callback");
			this.register_getImageGroupLayer_void(this.nativeObject.pointer, "getImageGroupLayer_void_callback");
			this.register_getTerrainGroupLayer_void(this.nativeObject.pointer, "getTerrainGroupLayer_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
		}
	}
	
	public static Iscene fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iscene obj = null;
 		if(baseObj instanceof Iscene)
		{
			obj = (Iscene)baseObj;
		} else {
			obj = new Iscene(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IScene");
			obj.increaseCast();
		}

		return obj;
	}
}
