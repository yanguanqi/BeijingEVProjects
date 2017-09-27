package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS数据集元数据类
 */
public class Wfslayerrequestparam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSLayerRequestParam", new WfslayerrequestparamClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Wfslayerrequestparam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWFSLayerRequestParam", null);
	}

	native private int getMaxFeatures_void(long pNativeObject);
	/**
	 * 获请求最大要素条数
	 * @param  
	 * @return 返回最大要素条数
	 */
	public int getMaxFeatures()
	{
		int returnValue = getMaxFeatures_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxFeatures_ev_int32(long pNativeObject, int maxFeatures);
	/**
	 * 设置请求最大要素条数,-1表示客户端不限制
	 * @param  
	 */
	public void setMaxFeatures(int maxFeatures)
	{
		int maxFeaturesParamValue = maxFeatures;
		setMaxFeatures_ev_int32(this.nativeObject.pointer, maxFeaturesParamValue);
	}
	native private String getRequestVersion_void(long pNativeObject);
	/**
	 * 获取请求版本号1.0.0，1.1.1
	 * @param  
	 * @return 返回请求版本号
	 */
	public String getRequestVersion()
	{
		String returnValue = getRequestVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRequestVersion_EVString(long pNativeObject, String version);
	/**
	 * 设置请求版本号1.0.0，1.1.1
	 * @param  
	 */
	public void setRequestVersion(String version)
	{
		String versionParamValue = version;
		setRequestVersion_EVString(this.nativeObject.pointer, versionParamValue);
	}
	native private String getRequestFilter_void(long pNativeObject);
	/**
	 * 获取请求过滤条件
	 * @param  
	 * @return 返回请求过滤条件
	 */
	public String getRequestFilter()
	{
		String returnValue = getRequestFilter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUsingRect_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否使用范围查询
	 * @param  
	 */
	public void setUsingRect(boolean b)
	{
		boolean bParamValue = b;
		setUsingRect_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private boolean getUsingRect_void(long pNativeObject);
	/**
	 * 是否使用范围查询
	 * @param  
	 * @return 返回是否使用范围查询
	 */
	public boolean getUsingRect()
	{
		boolean returnValue = getUsingRect_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRequestRect_void(long pNativeObject);
	/**
	 * 获取请求范围
	 * @param  
	 * @return 返回是否请求范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getRequestRect()
	{
		long returnValue = getRequestRect_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private void setRequestFilter_EVString(long pNativeObject, String filter);
	/**
	 * 设置请求过滤条件
	 * @param  
	 */
	public void setRequestFilter(String filter)
	{
		String filterParamValue = filter;
		setRequestFilter_EVString(this.nativeObject.pointer, filterParamValue);
	}
	native private long getStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获得属性字符界面类的指针
	 * @param  
	 * @return 返回内部类的指针
	 */
	public com.earthview.world.core.StringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	native private boolean isEqual_CWFSLayerRequestParam(long pNativeObject, long other);
	/**
	 * 判断参数是否相同
	 * @param  
	 */
	public boolean isEqual(com.earthview.world.spatial.Wfslayerrequestparam other)
	{
		long otherParamValue = (other == null ? 0L : other.nativeObject.pointer);
		boolean returnValue = isEqual_CWFSLayerRequestParam(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml中恢复图层的配置
	 * @param element xml要素
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把图层的信息导出到xml中
	 * @param  
	 * @return xml要素
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
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
	native private long OperatorAssign_CWFSLayerRequestParam(long pNativeObject, long other);
	public com.earthview.world.spatial.Wfslayerrequestparam OperatorAssign(com.earthview.world.spatial.Wfslayerrequestparam other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CWFSLayerRequestParam(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial.Wfslayerrequestparam __returnValue = new com.earthview.world.spatial.Wfslayerrequestparam(CreatedWhenConstruct.CWC_NotToCreate, "CWFSLayerRequestParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Wfslayerrequestparam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWFSLayerRequestParam");
		}
		return __returnValue;
	}
	public Wfslayerrequestparam(com.earthview.world.spatial.Wfslayerrequestparam obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("CWFSLayerRequestParam", list);
	}

	public Wfslayerrequestparam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wfslayerrequestparam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Wfslayerrequestparam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wfslayerrequestparam obj = null;
 		if(baseObj instanceof Wfslayerrequestparam)
		{
			obj = (Wfslayerrequestparam)baseObj;
		} else {
			obj = new Wfslayerrequestparam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWFSLayerRequestParam");
			obj.increaseCast();
		}

		return obj;
	}
}
