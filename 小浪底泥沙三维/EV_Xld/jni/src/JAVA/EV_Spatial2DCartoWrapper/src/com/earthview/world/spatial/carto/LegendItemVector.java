package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图例项容器类
 */
public class LegendItemVector extends Ilegenditemvector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItemVector", new LegendItemVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendItemVectorProxy", new LegendItemVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LegendItemVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLegendItemVectorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.LegendItemVector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void removeLegendItem_ev_int32_callback(int nIndex)
	{
		int nIndexParamValue = nIndex;
		removeLegendItem(nIndexParamValue);
	}

	native private void removeLegendItem_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 移除图列项
	 * @param c 图列项索引
	 */
	public void removeLegendItem(int nIndex)
	{
		int nIndexParamValue = nIndex;
		removeLegendItem_ev_int32(this.nativeObject.pointer, nIndexParamValue);
	}
	native private void removeLegendItem_ev_int32_NoVirtual(long pNativeObject, int nIndex);
	protected void removeLegendItem_NoVirtual(int nIndex)
	{
		int nIndexParamValue = nIndex;
		removeLegendItem_ev_int32_NoVirtual(this.nativeObject.pointer, nIndexParamValue);
	}

	protected  void addLegendItem_ILegendItem_callback(long pItem)
	{
		Ilegenditem pItemParamValue = (pItem == 0L ? null : new Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate));
		if(pItemParamValue != null)
		{
		pItemParamValue.setDelegate(true);
		pItemParamValue.setInstancePointer(new InstancePointer(pItem));
		IClassFactory pItemParamValueClassFactory = GlobalClassFactoryMap.get(pItemParamValue.getCppInstanceTypeName());
		if (pItemParamValueClassFactory != null)
		{
			pItemParamValue.setDelegate(true);
			pItemParamValue = (Ilegenditem)pItemParamValueClassFactory.create();
			pItemParamValue.setDelegate(true);
			pItemParamValue.setInstancePointer(new InstancePointer(pItem));
		}
		}
		addLegendItem(pItemParamValue);
	}

	native private void addLegendItem_ILegendItem(long pNativeObject, long pItem);
	/**
	 * 添加图列项
	 * @param pItem 图列项
	 */
	public void addLegendItem(Ilegenditem pItem)
	{
		long pItemParamValue = (pItem == null ? 0L : pItem.nativeObject.pointer);
		addLegendItem_ILegendItem(this.nativeObject.pointer, pItemParamValue);
	}
	native private void addLegendItem_ILegendItem_NoVirtual(long pNativeObject, long pItem);
	protected void addLegendItem_NoVirtual(Ilegenditem pItem)
	{
		long pItemParamValue = (pItem == null ? 0L : pItem.nativeObject.pointer);
		addLegendItem_ILegendItem_NoVirtual(this.nativeObject.pointer, pItemParamValue);
	}

	protected  int getItemCount_void_callback()
	{
		int returnValue = getItemCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getItemCount_void(long pNativeObject);
	/**
	 * 获取图列项数目
	 * @param pItem 
	 * @return 图列项数目
	 */
	public int getItemCount()
	{
		int returnValue = getItemCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getItemCount_void_NoVirtual(long pNativeObject);
	protected int getItemCount_NoVirtual()
	{
		int returnValue = getItemCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getParentItemCount_void_callback()
	{
		int returnValue = getParentItemCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getParentItemCount_void(long pNativeObject);
	/**
	 * 获取父图列项数目
	 * @param pItem 
	 * @return 父图列项数目
	 */
	public int getParentItemCount()
	{
		int returnValue = getParentItemCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getParentItemCount_void_NoVirtual(long pNativeObject);
	protected int getParentItemCount_NoVirtual()
	{
		int returnValue = getParentItemCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getLegendItem_ev_int32_callback(int nIndex)
	{
		int nIndexParamValue = nIndex;
		Ilegenditem returnValue = getLegendItem(nIndexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLegendItem_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 添加图列项
	 * @param pItem 图列项
	 */
	public Ilegenditem getLegendItem(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getLegendItem_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		Ilegenditem __returnValue = new Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ilegenditem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILegendItem");
		}
		return __returnValue;
	}
	native private long getLegendItem_ev_int32_NoVirtual(long pNativeObject, int nIndex);
	protected Ilegenditem getLegendItem_NoVirtual(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getLegendItem_ev_int32_NoVirtual(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		Ilegenditem __returnValue = new Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ilegenditem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILegendItem");
		}
		return __returnValue;
	}

	protected  void addIgnoreDataset_EVString_callback(String strName)
	{
		String strNameParamValue = strName;
		addIgnoreDataset(strNameParamValue);
	}

	native private void addIgnoreDataset_EVString(long pNativeObject, String strName);
	/**
	 * 添加不需要添加图例的数据集名称
	 * @param strName 数据集名称
	 */
	public void addIgnoreDataset(String strName)
	{
		String strNameParamValue = strName;
		addIgnoreDataset_EVString(this.nativeObject.pointer, strNameParamValue);
	}
	native private void addIgnoreDataset_EVString_NoVirtual(long pNativeObject, String strName);
	protected void addIgnoreDataset_NoVirtual(String strName)
	{
		String strNameParamValue = strName;
		addIgnoreDataset_EVString_NoVirtual(this.nativeObject.pointer, strNameParamValue);
	}

	protected  boolean removeIgnoreDataset_EVString_callback(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = removeIgnoreDataset(strNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeIgnoreDataset_EVString(long pNativeObject, String strName);
	/**
	 * 移除不需要添加图例的数据集名称
	 * @param strName 数据集名称
	 * @return 移除成功返回true,否则返回false
	 */
	public boolean removeIgnoreDataset(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = removeIgnoreDataset_EVString(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private boolean removeIgnoreDataset_EVString_NoVirtual(long pNativeObject, String strName);
	protected boolean removeIgnoreDataset_NoVirtual(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = removeIgnoreDataset_EVString_NoVirtual(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}

	protected  String getIgnoreDataset_ev_int32_callback(int nIndex)
	{
		int nIndexParamValue = nIndex;
		String returnValue = getIgnoreDataset(nIndexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getIgnoreDataset_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 获取不需要添加图例的数据集名称
	 * @param nIndex 数据集名称对应的索引
	 */
	public String getIgnoreDataset(int nIndex)
	{
		int nIndexParamValue = nIndex;
		String returnValue = getIgnoreDataset_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		return returnValue;
	}
	native private String getIgnoreDataset_ev_int32_NoVirtual(long pNativeObject, int nIndex);
	protected String getIgnoreDataset_NoVirtual(int nIndex)
	{
		int nIndexParamValue = nIndex;
		String returnValue = getIgnoreDataset_ev_int32_NoVirtual(this.nativeObject.pointer, nIndexParamValue);
		return returnValue;
	}

	protected  int getIgnoreDatasetCount_void_callback()
	{
		int returnValue = getIgnoreDatasetCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getIgnoreDatasetCount_void(long pNativeObject);
	/**
	 * 获取不需要添加图例的数据集数目
	 * @param  是否被选择
	 */
	public int getIgnoreDatasetCount()
	{
		int returnValue = getIgnoreDatasetCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getIgnoreDatasetCount_void_NoVirtual(long pNativeObject);
	protected int getIgnoreDatasetCount_NoVirtual()
	{
		int returnValue = getIgnoreDatasetCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void clearIgnoreDataset_void_callback()
	{
		clearIgnoreDataset();
	}

	native private void clearIgnoreDataset_void(long pNativeObject);
	/**
	 * 清空不需要添加图例的数据集
	 * @param  
	 */
	public void clearIgnoreDataset()
	{
		clearIgnoreDataset_void(this.nativeObject.pointer);
	}
	native private void clearIgnoreDataset_void_NoVirtual(long pNativeObject);
	protected void clearIgnoreDataset_NoVirtual()
	{
		clearIgnoreDataset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isIgnoreDataset_EVString_callback(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = isIgnoreDataset(strNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIgnoreDataset_EVString(long pNativeObject, String strName);
	/**
	 * 判断是否是不需要添加图例的数据集
	 * @param strName 数据集名称
	 */
	public boolean isIgnoreDataset(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = isIgnoreDataset_EVString(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}
	native private boolean isIgnoreDataset_EVString_NoVirtual(long pNativeObject, String strName);
	protected boolean isIgnoreDataset_NoVirtual(String strName)
	{
		String strNameParamValue = strName;
		boolean returnValue = isIgnoreDataset_EVString_NoVirtual(this.nativeObject.pointer, strNameParamValue);
		return returnValue;
	}

	protected  void clearAllItem_void_callback()
	{
		clearAllItem();
	}

	native private void clearAllItem_void(long pNativeObject);
	/**
	 * 清空所有图例项
	 * @param  
	 */
	public void clearAllItem()
	{
		clearAllItem_void(this.nativeObject.pointer);
	}
	native private void clearAllItem_void_NoVirtual(long pNativeObject);
	protected void clearAllItem_NoVirtual()
	{
		clearAllItem_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.carto.Ilegenditemvector returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆图例项集合
	 * @param  
	 * @return 克隆的图例项集合
	 */
	public com.earthview.world.spatial.carto.Ilegenditemvector ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditemvector __returnValue = new com.earthview.world.spatial.carto.Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItemVector");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditemvector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILegendItemVector");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ilegenditemvector ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditemvector __returnValue = new com.earthview.world.spatial.carto.Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItemVector");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditemvector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILegendItemVector");
		}
		return __returnValue;
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
	 * 从xml元素中恢复图例的配置
	 * @param element xml元素
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把图例的配置保存到xml元素中
	 * @param  
	 * @return xml元素
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
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
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

	public LegendItemVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LegendItemVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_removeLegendItem_ev_int32(long pNativeObject, String method);
	native protected void register_addLegendItem_ILegendItem(long pNativeObject, String method);
	native protected void register_getItemCount_void(long pNativeObject, String method);
	native protected void register_getParentItemCount_void(long pNativeObject, String method);
	native protected void register_getLegendItem_ev_int32(long pNativeObject, String method);
	native protected void register_addIgnoreDataset_EVString(long pNativeObject, String method);
	native protected void register_removeIgnoreDataset_EVString(long pNativeObject, String method);
	native protected void register_getIgnoreDataset_ev_int32(long pNativeObject, String method);
	native protected void register_getIgnoreDatasetCount_void(long pNativeObject, String method);
	native protected void register_clearIgnoreDataset_void(long pNativeObject, String method);
	native protected void register_isIgnoreDataset_EVString(long pNativeObject, String method);
	native protected void register_clearAllItem_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_removeLegendItem_ev_int32(this.nativeObject.pointer, "removeLegendItem_ev_int32_callback");
			this.register_addLegendItem_ILegendItem(this.nativeObject.pointer, "addLegendItem_ILegendItem_callback");
			this.register_getItemCount_void(this.nativeObject.pointer, "getItemCount_void_callback");
			this.register_getParentItemCount_void(this.nativeObject.pointer, "getParentItemCount_void_callback");
			this.register_getLegendItem_ev_int32(this.nativeObject.pointer, "getLegendItem_ev_int32_callback");
			this.register_addIgnoreDataset_EVString(this.nativeObject.pointer, "addIgnoreDataset_EVString_callback");
			this.register_removeIgnoreDataset_EVString(this.nativeObject.pointer, "removeIgnoreDataset_EVString_callback");
			this.register_getIgnoreDataset_ev_int32(this.nativeObject.pointer, "getIgnoreDataset_ev_int32_callback");
			this.register_getIgnoreDatasetCount_void(this.nativeObject.pointer, "getIgnoreDatasetCount_void_callback");
			this.register_clearIgnoreDataset_void(this.nativeObject.pointer, "clearIgnoreDataset_void_callback");
			this.register_isIgnoreDataset_EVString(this.nativeObject.pointer, "isIgnoreDataset_EVString_callback");
			this.register_clearAllItem_void(this.nativeObject.pointer, "clearAllItem_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static LegendItemVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LegendItemVector obj = null;
 		if(baseObj instanceof LegendItemVector)
		{
			obj = (LegendItemVector)baseObj;
		} else {
			obj = new LegendItemVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLegendItemVector");
			obj.increaseCast();
		}

		return obj;
	}
}
