package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * XML元素结点类，例如：
 */
public class XmlElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CXmlElement", new XmlElementClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public XmlElement() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CXmlElement", null);
	}

	/**
	 * 构造函数
	 * @param strName 结点名称
	 * @param strValue 结点值
	 */
	public XmlElement(String strName, String strValue) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strNamePtr = new BasePointer(strName);
		list.add("strName", strNamePtr.get());
		BasePointer strValuePtr = new BasePointer(strValue);
		list.add("strValue", strValuePtr.get());
		Create("CXmlElement", list);
	}

	/**
	 * 拷贝构造函数
	 * @param another 另一个结点对象
	 */
	public XmlElement(com.earthview.world.core.XmlElement another) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer anotherPtr = new BasePointer(another);
		list.add("another", anotherPtr.get());
		Create("CXmlElement", list);
	}

	native private long OperatorAssign_CXmlElement(long pNativeObject, long another);
	/**
	 * 重载=运算符
	 * @param another 另一个结点对象
	 */
	public com.earthview.world.core.XmlElement OperatorAssign(com.earthview.world.core.XmlElement another)
	{
		long anotherParamValue = another.nativeObject.pointer;
		long returnValue = OperatorAssign_CXmlElement(this.nativeObject.pointer, anotherParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate, "CXmlElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private boolean createElement_ev_string(long pNativeObject, String strName);
	/**
	 * 使当前结点创建为一个有效的独立结点
	 * @param strName 结点名称
	 * @return 有返回值true，否则返回false
	 */
	public boolean createElement(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = createElement_ev_string(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private boolean createElement_ev_string_ev_string(long pNativeObject, String strName, String strValue);
	/**
	 * 使当前结点创建为一个有效的独立结点
	 * @param strName 结点名称
	 * @param strValue 结点值
	 * @return 有返回值true，否则返回false
	 */
	public boolean createElement(String strName, String strValue)
	{
		String strNameParamValue = strName;
		String strValueParamValue = strValue;
		boolean returnValue = createElement_ev_string_ev_string(this.nativeObject.pointer, strNameParamValue, strValueParamValue);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置当前结点对象，重置后，当前结点对象将变得无效，需要重新进行初始化
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断当前对象是否有效，有效的对象才能进行各项操作
	 * @param  
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShareMode_void(long pNativeObject);
	/**
	 * 判断当前结点是否是以共享方式占用结点实体数据
	 * @param  
	 * @return 有返回值true，否则返回false
	 */
	public boolean isShareMode()
	{
		boolean returnValue = isShareMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 取得当前结点元素的名称
	 * @param  
	 * @return 结点元素名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setName_ev_string(long pNativeObject, String strName);
	/**
	 * 设置当前结点元素的名称
	 * @param strName 结点名称
	 * @return 成功返回true，否则返回false
	 */
	public boolean setName(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = setName_ev_string(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private String getValueString_void(long pNativeObject);
	/**
	 * 取得当前结点元素的值
	 * @param  
	 * @return 当前结点元素的值
	 */
	public String getValueString()
	{
		String returnValue = getValueString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setValue_ev_string(long pNativeObject, String strValue);
	/**
	 * 设置当前结点元素的值
	 * @param strValue 结点值
	 * @return 当前结点元素的值
	 */
	public boolean setValue(String strValue)
	{
		String strValueParamValue = strValue;
		boolean returnValue = setValue_ev_string(this.nativeObject.pointer, strValueParamValue);
		return returnValue;
	}
	native private String getAttributeString_ev_string(long pNativeObject, String strAttributeName);
	/**
	 * 取得当前结点元素指定属性的值
	 * @param strAttributeName 属性名
	 * @return 属性值
	 */
	public String getAttributeString(String strAttributeName)
	{
		String strAttributeNameParamValue = strAttributeName;
		String returnValue = getAttributeString_ev_string(this.nativeObject.pointer, strAttributeNameParamValue);
		return returnValue;
	}
	native private boolean getAttributeString_ev_uint32_ev_string_ev_string(long pNativeObject, long nAttributeIndex, long strAttributeName, long strAttributeValue);
	/**
	 * 取得当前结点元素指定属性的值
	 * @param nAttributeIndex 索引
	 * @param strAttributeName 属性名称
	 * @param strAttributeValue 属性值
	 * @return 属性值
	 */
	public boolean getAttributeString(long nAttributeIndex, StringPointer strAttributeName, StringPointer strAttributeValue)
	{
		long nAttributeIndexParamValue = nAttributeIndex;
		long strAttributeNameParamValue = strAttributeName.nativeObject.pointer;
		long strAttributeValueParamValue = strAttributeValue.nativeObject.pointer;
		boolean returnValue = getAttributeString_ev_uint32_ev_string_ev_string(this.nativeObject.pointer, nAttributeIndexParamValue, strAttributeNameParamValue, strAttributeValueParamValue);
		return returnValue;
	}
	native private long getAttributeCount_void(long pNativeObject);
	/**
	 * 取得当前结点元素属性的数量
	 * @param  
	 * @return 属性的数量
	 */
	public long getAttributeCount()
	{
		long returnValue = getAttributeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setAttribute_ev_string_ev_string(long pNativeObject, String strAttributeName, String strAttributeValue);
	/**
	 * 设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
	 * @param strAttributeName 属性名称
	 * @param strAttributeValue 属性值
	 * @return 有返回值true，否则返回false
	 */
	public boolean setAttribute(String strAttributeName, String strAttributeValue)
	{
		String strAttributeNameParamValue = strAttributeName;
		String strAttributeValueParamValue = strAttributeValue;
		boolean returnValue = setAttribute_ev_string_ev_string(this.nativeObject.pointer, strAttributeNameParamValue, strAttributeValueParamValue);
		return returnValue;
	}
	native private boolean setAttribute_ev_string_ev_real64(long pNativeObject, String strAttributeName, double dbAttributeValue);
	/**
	 * 设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
	 * @param strAttributeName 属性名称
	 * @param dbAttributeValue 实数型属性值
	 * @return 有返回值true，否则返回false
	 */
	public boolean setAttribute(String strAttributeName, double dbAttributeValue)
	{
		String strAttributeNameParamValue = strAttributeName;
		double dbAttributeValueParamValue = dbAttributeValue;
		boolean returnValue = setAttribute_ev_string_ev_real64(this.nativeObject.pointer, strAttributeNameParamValue, dbAttributeValueParamValue);
		return returnValue;
	}
	native private boolean setAttribute_ev_string_ev_int32(long pNativeObject, String strAttributeName, int intAttributeValue);
	/**
	 * 设置当前结点元素指定属性的值，当指定的属性名不存在时，则增加该属性
	 * @param strAttributeName 属性名称
	 * @param intAttributeValue 整型属性值
	 * @return 有返回值true，否则返回false
	 */
	public boolean setAttribute(String strAttributeName, int intAttributeValue)
	{
		String strAttributeNameParamValue = strAttributeName;
		int intAttributeValueParamValue = intAttributeValue;
		boolean returnValue = setAttribute_ev_string_ev_int32(this.nativeObject.pointer, strAttributeNameParamValue, intAttributeValueParamValue);
		return returnValue;
	}
	native private boolean removeAttribute_ev_string(long pNativeObject, String strAttributeName);
	/**
	 * 移除掉指定的属性
	 * @param strAttributeName 属性名称
	 * @return 移除了一个属性返回true，否则返回false
	 */
	public boolean removeAttribute(String strAttributeName)
	{
		String strAttributeNameParamValue = strAttributeName;
		boolean returnValue = removeAttribute_ev_string(this.nativeObject.pointer, strAttributeNameParamValue);
		return returnValue;
	}
	native private long removeAllAttribute_void(long pNativeObject);
	/**
	 * 移除掉所有的属性
	 * @param  
	 * @return 移除的属性个数
	 */
	public long removeAllAttribute()
	{
		long returnValue = removeAllAttribute_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLeaf_void(long pNativeObject);
	/**
	 * 判断当前结点是否是叶子结点
	 * @param  
	 * @return 是叶子结点返回true，否则返回false
	 */
	public boolean isLeaf()
	{
		boolean returnValue = isLeaf_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isMyChild_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 判断某结点是否是自己的子结点
	 * @param xmlElement 子结点
	 * @return 是子结点返回true，否则返回false
	 */
	public boolean isMyChild(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = isMyChild_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private boolean isRoot_void(long pNativeObject);
	/**
	 * 判断当前结点是否是根结点
	 * @param  
	 * @return 是根结点返回true，否则返回false
	 */
	public boolean isRoot()
	{
		boolean returnValue = isRoot_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获得当前结点的父结点
	 * @param  
	 * @return 父节点对象
	 */
	public com.earthview.world.core.XmlElement getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
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
	native private boolean getParent_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 获得当前结点的父结点
	 * @param xmlElement 父结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getParent(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getParent_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private long getChildCount_void(long pNativeObject);
	/**
	 * 获取当前结点的孩子结点数量
	 * @param  
	 * @return 孩子结点的数量
	 */
	public long getChildCount()
	{
		long returnValue = getChildCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFirstChild_void(long pNativeObject);
	/**
	 * 获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
	 * @param  
	 * @return 子结点对象
	 */
	public com.earthview.world.core.XmlElement getFirstChild()
	{
		long returnValue = getFirstChild_void(this.nativeObject.pointer);
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
	native private long getFirstChild_ev_string(long pNativeObject, String strChildName);
	/**
	 * 获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
	 * @param strChildName 子结点名称
	 * @return 子结点对象
	 */
	public com.earthview.world.core.XmlElement getFirstChild(String strChildName)
	{
		String strChildNameParamValue = strChildName;
		long returnValue = getFirstChild_ev_string(this.nativeObject.pointer, strChildNameParamValue);
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
	native private boolean getFirstChild_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
	 * @param xmlElement 子结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getFirstChild(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getFirstChild_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private boolean getFirstChild_ev_string_CXmlElement(long pNativeObject, String strChildName, long xmlElement);
	/**
	 * 获取当前结点的第一个指定名称的孩子结点，若没有指定名称就获取第一个孩子结点
	 * @param strChildName 子结点名称
	 * @param xmlElement 子结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getFirstChild(String strChildName, com.earthview.world.core.XmlElement xmlElement)
	{
		String strChildNameParamValue = strChildName;
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getFirstChild_ev_string_CXmlElement(this.nativeObject.pointer, strChildNameParamValue, xmlElementParamValue);
		return returnValue;
	}
	native private long getLastChild_void(long pNativeObject);
	/**
	 * 获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
	 * @param  
	 * @return 子结点对象
	 */
	public com.earthview.world.core.XmlElement getLastChild()
	{
		long returnValue = getLastChild_void(this.nativeObject.pointer);
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
	native private long getLastChild_ev_string(long pNativeObject, String strChildName);
	/**
	 * 获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
	 * @param strChildName 孩子结点名称
	 * @return 子结点对象
	 */
	public com.earthview.world.core.XmlElement getLastChild(String strChildName)
	{
		String strChildNameParamValue = strChildName;
		long returnValue = getLastChild_ev_string(this.nativeObject.pointer, strChildNameParamValue);
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
	native private boolean getLastChild_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
	 * @param xmlElement 子结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getLastChild(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getLastChild_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private boolean getLastChild_ev_string_CXmlElement(long pNativeObject, String strChildName, long xmlElement);
	/**
	 * 获取当前结点的最后一个指定名称的孩子结点，若没有指定名称就获取最后一个孩子结点
	 * @param strChildName 子结点名称
	 * @param xmlElement 子节点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getLastChild(String strChildName, com.earthview.world.core.XmlElement xmlElement)
	{
		String strChildNameParamValue = strChildName;
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getLastChild_ev_string_CXmlElement(this.nativeObject.pointer, strChildNameParamValue, xmlElementParamValue);
		return returnValue;
	}
	native private boolean getChild_ev_uint32_CXmlElement(long pNativeObject, long nIndex, long xmlElement);
	/**
	 * 获取指定序号的孩子结点
	 * @param nIndex 孩子结点的序号
	 * @param xmlElement 子结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getChild(long nIndex, com.earthview.world.core.XmlElement xmlElement)
	{
		long nIndexParamValue = nIndex;
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getChild_ev_uint32_CXmlElement(this.nativeObject.pointer, nIndexParamValue, xmlElementParamValue);
		return returnValue;
	}
	native private long getNextSibling_void(long pNativeObject);
	/**
	 * 获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
	 * @param  
	 * @return 结点对象
	 */
	public com.earthview.world.core.XmlElement getNextSibling()
	{
		long returnValue = getNextSibling_void(this.nativeObject.pointer);
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
	native private long getNextSibling_ev_string(long pNativeObject, String strSiblingName);
	/**
	 * 获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
	 * @param strSiblingName 兄弟结点的名称
	 * @return 结点对象
	 */
	public com.earthview.world.core.XmlElement getNextSibling(String strSiblingName)
	{
		String strSiblingNameParamValue = strSiblingName;
		long returnValue = getNextSibling_ev_string(this.nativeObject.pointer, strSiblingNameParamValue);
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
	native private boolean getNextSibling_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
	 * @param xmlElement 兄弟结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getNextSibling(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getNextSibling_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private boolean getNextSibling_ev_string_CXmlElement(long pNativeObject, String strSiblingName, long xmlElement);
	/**
	 * 获取当前结点的下一个指定名称的兄弟结点，若没有指定名称就获取下一个兄弟结点
	 * @param strSiblingName 兄弟结点的名称
	 * @param xmlElement 兄弟结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getNextSibling(String strSiblingName, com.earthview.world.core.XmlElement xmlElement)
	{
		String strSiblingNameParamValue = strSiblingName;
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getNextSibling_ev_string_CXmlElement(this.nativeObject.pointer, strSiblingNameParamValue, xmlElementParamValue);
		return returnValue;
	}
	native private long getPrevSibling_void(long pNativeObject);
	/**
	 * 获取当前结点的上一个指定名称的兄弟结点，若没有指定名称就获取上一个兄弟结点
	 * @param  
	 * @return 结点对象
	 */
	public com.earthview.world.core.XmlElement getPrevSibling()
	{
		long returnValue = getPrevSibling_void(this.nativeObject.pointer);
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
	native private long getPrevSibling_ev_string(long pNativeObject, String strSiblingName);
	/**
	 * 获取当前结点的上一个指定名称的兄弟结点，若没有指定名称就获取上一个兄弟结点
	 * @param strSiblingName 兄弟结点的名称
	 * @return 结点对象
	 */
	public com.earthview.world.core.XmlElement getPrevSibling(String strSiblingName)
	{
		String strSiblingNameParamValue = strSiblingName;
		long returnValue = getPrevSibling_ev_string(this.nativeObject.pointer, strSiblingNameParamValue);
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
	native private boolean getPrevSibling_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 获取当前结点的前一个指定名称的兄弟结点，若没有指定名称就获取前一个兄弟结点
	 * @param xmlElement 兄弟结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getPrevSibling(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getPrevSibling_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private boolean getPrevSibling_ev_string_CXmlElement(long pNativeObject, String strSiblingName, long xmlElement);
	/**
	 * 获取当前结点的前一个指定名称的兄弟结点，若没有指定名称就获取前一个兄弟结点
	 * @param strSiblingName 兄弟结点的名称
	 * @param xmlElement 兄弟结点
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getPrevSibling(String strSiblingName, com.earthview.world.core.XmlElement xmlElement)
	{
		String strSiblingNameParamValue = strSiblingName;
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = getPrevSibling_ev_string_CXmlElement(this.nativeObject.pointer, strSiblingNameParamValue, xmlElementParamValue);
		return returnValue;
	}
	native private String getComment_ev_uint32(long pNativeObject, long nIndex);
	/**
	 * 获取当前结点的第几项注释内容
	 * @param nIndex 注释内容的序号
	 * @return 注释内容
	 */
	public String getComment(long nIndex)
	{
		long nIndexParamValue = nIndex;
		String returnValue = getComment_ev_uint32(this.nativeObject.pointer, nIndexParamValue);
		return returnValue;
	}
	native private boolean getComment_ev_uint32_ev_string(long pNativeObject, long nIndex, long strComment);
	/**
	 * 获取当前结点的第几项注释内容
	 * @param nIndex 注释内容的序号
	 * @param strComment 注释内容
	 * @return 注释内容
	 */
	public boolean getComment(long nIndex, StringPointer strComment)
	{
		long nIndexParamValue = nIndex;
		long strCommentParamValue = strComment.nativeObject.pointer;
		boolean returnValue = getComment_ev_uint32_ev_string(this.nativeObject.pointer, nIndexParamValue, strCommentParamValue);
		return returnValue;
	}
	native private long getCommentCount_void(long pNativeObject);
	/**
	 * 获取当前结点的注释条数
	 * @param  
	 * @return 注释条数
	 */
	public long getCommentCount()
	{
		long returnValue = getCommentCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long appendComment_ev_string(long pNativeObject, String strCommnetContent);
	/**
	 * 追加当前结点的注释内容
	 * @param strCommnetContent 注释的内容
	 * @return 添加的注释的序号
	 */
	public long appendComment(String strCommnetContent)
	{
		String strCommnetContentParamValue = strCommnetContent;
		long returnValue = appendComment_ev_string(this.nativeObject.pointer, strCommnetContentParamValue);
		return returnValue;
	}
	native private boolean removeComment_ev_uint32(long pNativeObject, long nIndex);
	/**
	 * 移除当前结点的第几项注释内容
	 * @param nIndex 注释内容的序号
	 * @return 移动指定序号的注释返回true，否则返回false
	 */
	public boolean removeComment(long nIndex)
	{
		long nIndexParamValue = nIndex;
		boolean returnValue = removeComment_ev_uint32(this.nativeObject.pointer, nIndexParamValue);
		return returnValue;
	}
	native private long removeAllComment_void(long pNativeObject);
	/**
	 * 移除当前结点的所有注释内容
	 * @param  
	 * @return 移除的注释条数
	 */
	public long removeAllComment()
	{
		long returnValue = removeAllComment_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean appendChild_CXmlElement(long pNativeObject, long appendElement);
	/**
	 * 为当前结点追加孩子结点
	 * @param appendElement 要增加孩子结点对象
	 * @return 操作成功返回true，否则返回false
	 */
	public boolean appendChild(com.earthview.world.core.XmlElement appendElement)
	{
		long appendElementParamValue = appendElement.nativeObject.pointer;
		boolean returnValue = appendChild_CXmlElement(this.nativeObject.pointer, appendElementParamValue);
		return returnValue;
	}
	native private boolean insertChildBefore_CXmlElement_CXmlElement(long pNativeObject, long addThis, long beforeThis);
	/**
	 * 在某个孩子结点的前方插入孩子结点
	 * @param addThis 要增加孩子结点对象
	 * @param beforeThis 在该结点前插入
	 * @return 操作成功返回true，否则返回false
	 */
	public boolean insertChildBefore(com.earthview.world.core.XmlElement addThis, com.earthview.world.core.XmlElement beforeThis)
	{
		long addThisParamValue = addThis.nativeObject.pointer;
		long beforeThisParamValue = beforeThis.nativeObject.pointer;
		boolean returnValue = insertChildBefore_CXmlElement_CXmlElement(this.nativeObject.pointer, addThisParamValue, beforeThisParamValue);
		return returnValue;
	}
	native private boolean insertChildAfter_CXmlElement_CXmlElement(long pNativeObject, long addThis, long afterThis);
	/**
	 * 在某个孩子结点的后方插入孩子结点
	 * @param addThis 要增加孩子结点对象
	 * @param afterThis 在该结点后插入
	 * @return 操作成功返回true，否则返回false
	 */
	public boolean insertChildAfter(com.earthview.world.core.XmlElement addThis, com.earthview.world.core.XmlElement afterThis)
	{
		long addThisParamValue = addThis.nativeObject.pointer;
		long afterThisParamValue = afterThis.nativeObject.pointer;
		boolean returnValue = insertChildAfter_CXmlElement_CXmlElement(this.nativeObject.pointer, addThisParamValue, afterThisParamValue);
		return returnValue;
	}
	native private long removeChild_CXmlElement(long pNativeObject, long removeElement);
	/**
	 * 移除指定的孩子结点
	 * @param removeElement 要移除的孩子结点对象
	 * @return 移除的孩子结点数目
	 */
	public long removeChild(com.earthview.world.core.XmlElement removeElement)
	{
		long removeElementParamValue = removeElement.nativeObject.pointer;
		long returnValue = removeChild_CXmlElement(this.nativeObject.pointer, removeElementParamValue);
		return returnValue;
	}
	native private long removeChild_ev_string(long pNativeObject, String strElementName);
	/**
	 * 移除指定的孩子结点
	 * @param strElementName 要移除的孩子结点的名称
	 * @return 移除的孩子结点的数目
	 */
	public long removeChild(String strElementName)
	{
		String strElementNameParamValue = strElementName;
		long returnValue = removeChild_ev_string(this.nativeObject.pointer, strElementNameParamValue);
		return returnValue;
	}
	native private long removeAllChildren_void(long pNativeObject);
	/**
	 * 移除所有的孩子结点
	 * @param  
	 * @return 移除的孩子结点的数目
	 */
	public long removeAllChildren()
	{
		long returnValue = removeAllChildren_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String ev_toString_void(long pNativeObject);
	/**
	 * 将当前的XML数据转换为EVString
	 * @param  
	 * @return XML字符串
	 */
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	public XmlElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public XmlElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static XmlElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		XmlElement obj = null;
 		if(baseObj instanceof XmlElement)
		{
			obj = (XmlElement)baseObj;
		} else {
			obj = new XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CXmlElement");
			obj.increaseCast();
		}

		return obj;
	}
}
