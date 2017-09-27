package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纸张布局类
 */
public class PageLayout extends Ipagelayout {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPageLayout", new PageLayoutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCPageLayoutProxy", new PageLayoutClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public PageLayout() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPageLayoutProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.PageLayout".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public PageLayout(com.earthview.world.spatial.atlas.Imap pMap) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pMapPtr = new BasePointer(pMap);
		list.add("pMap", pMapPtr.get());
		Create("JCPageLayoutProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.PageLayout".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取布局名称
	 * @param  
	 * @return 布局名称
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
	 * 设置布局名称
	 * @param name 布局名称
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

	protected  long getPage_void_callback()
	{
		Ipage returnValue = getPage();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPage_void(long pNativeObject);
	/**
	 * 获取页面纸张
	 * @param  
	 * @return 页面纸张
	 */
	public Ipage getPage()
	{
		long returnValue = getPage_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ipage __returnValue = new Ipage(CreatedWhenConstruct.CWC_NotToCreate, "IPage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ipage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPage");
		}
		return __returnValue;
	}
	native private long getPage_void_NoVirtual(long pNativeObject);
	protected Ipage getPage_NoVirtual()
	{
		long returnValue = getPage_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ipage __returnValue = new Ipage(CreatedWhenConstruct.CWC_NotToCreate, "IPage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ipage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPage");
		}
		return __returnValue;
	}

	protected  void setPage_IPage_callback(long pPage)
	{
		Ipage pPageParamValue = (pPage == 0L ? null : new Ipage(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPageParamValue != null)
		{
		pPageParamValue.setDelegate(true);
		pPageParamValue.setInstancePointer(new InstancePointer(pPage));
		IClassFactory pPageParamValueClassFactory = GlobalClassFactoryMap.get(pPageParamValue.getCppInstanceTypeName());
		if (pPageParamValueClassFactory != null)
		{
			pPageParamValue.setDelegate(true);
			pPageParamValue = (Ipage)pPageParamValueClassFactory.create();
			pPageParamValue.setDelegate(true);
			pPageParamValue.setInstancePointer(new InstancePointer(pPage));
		}
		}
		setPage(pPageParamValue);
	}

	native private void setPage_IPage(long pNativeObject, long pPage);
	/**
	 * 设置页面纸张
	 * @param map 
	 * @return 页面纸张
	 */
	public void setPage(Ipage pPage)
	{
		long pPageParamValue = (pPage == null ? 0L : pPage.nativeObject.pointer);
		setPage_IPage(this.nativeObject.pointer, pPageParamValue);
	}
	native private void setPage_IPage_NoVirtual(long pNativeObject, long pPage);
	protected void setPage_NoVirtual(Ipage pPage)
	{
		long pPageParamValue = (pPage == null ? 0L : pPage.nativeObject.pointer);
		setPage_IPage_NoVirtual(this.nativeObject.pointer, pPageParamValue);
	}

	protected  void addElement_IElement_callback(long ref_pElement)
	{
		Ielement ref_pElementParamValue = (ref_pElement == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pElementParamValue != null)
		{
		ref_pElementParamValue.setDelegate(true);
		ref_pElementParamValue.setInstancePointer(new InstancePointer(ref_pElement));
		IClassFactory ref_pElementParamValueClassFactory = GlobalClassFactoryMap.get(ref_pElementParamValue.getCppInstanceTypeName());
		if (ref_pElementParamValueClassFactory != null)
		{
			ref_pElementParamValue.setDelegate(true);
			ref_pElementParamValue = (Ielement)ref_pElementParamValueClassFactory.create();
			ref_pElementParamValue.setDelegate(true);
			ref_pElementParamValue.setInstancePointer(new InstancePointer(ref_pElement));
		}
		}
		addElement(ref_pElementParamValue);
	}

	native private void addElement_IElement(long pNativeObject, long ref_pElement);
	/**
	 * 添加元素
	 * @param element 元素
	 */
	public void addElement(Ielement ref_pElement)
	{
		long ref_pElementParamValue = (ref_pElement == null ? 0L : ref_pElement.nativeObject.pointer);
		addElement_IElement(this.nativeObject.pointer, ref_pElementParamValue);
	}
	native private void addElement_IElement_NoVirtual(long pNativeObject, long ref_pElement);
	protected void addElement_NoVirtual(Ielement ref_pElement)
	{
		long ref_pElementParamValue = (ref_pElement == null ? 0L : ref_pElement.nativeObject.pointer);
		addElement_IElement_NoVirtual(this.nativeObject.pointer, ref_pElementParamValue);
	}

	protected  void insertElement_ev_int32_IElement_callback(int nIndex, long ref_pElement)
	{
		int nIndexParamValue = nIndex;
		Ielement ref_pElementParamValue = (ref_pElement == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pElementParamValue != null)
		{
		ref_pElementParamValue.setDelegate(true);
		ref_pElementParamValue.setInstancePointer(new InstancePointer(ref_pElement));
		IClassFactory ref_pElementParamValueClassFactory = GlobalClassFactoryMap.get(ref_pElementParamValue.getCppInstanceTypeName());
		if (ref_pElementParamValueClassFactory != null)
		{
			ref_pElementParamValue.setDelegate(true);
			ref_pElementParamValue = (Ielement)ref_pElementParamValueClassFactory.create();
			ref_pElementParamValue.setDelegate(true);
			ref_pElementParamValue.setInstancePointer(new InstancePointer(ref_pElement));
		}
		}
		insertElement(nIndexParamValue, ref_pElementParamValue);
	}

	native private void insertElement_ev_int32_IElement(long pNativeObject, int nIndex, long ref_pElement);
	/**
	 * 插入元素
	 * @param element 插入的位置
	 * @param element 元素
	 */
	public void insertElement(int nIndex, Ielement ref_pElement)
	{
		int nIndexParamValue = nIndex;
		long ref_pElementParamValue = (ref_pElement == null ? 0L : ref_pElement.nativeObject.pointer);
		insertElement_ev_int32_IElement(this.nativeObject.pointer, nIndexParamValue, ref_pElementParamValue);
	}
	native private void insertElement_ev_int32_IElement_NoVirtual(long pNativeObject, int nIndex, long ref_pElement);
	protected void insertElement_NoVirtual(int nIndex, Ielement ref_pElement)
	{
		int nIndexParamValue = nIndex;
		long ref_pElementParamValue = (ref_pElement == null ? 0L : ref_pElement.nativeObject.pointer);
		insertElement_ev_int32_IElement_NoVirtual(this.nativeObject.pointer, nIndexParamValue, ref_pElementParamValue);
	}

	protected  int getElementCount_void_callback()
	{
		int returnValue = getElementCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getElementCount_void(long pNativeObject);
	/**
	 * 获取元素的个数
	 * @param  
	 * @return 元素的个数
	 */
	public int getElementCount()
	{
		int returnValue = getElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getElementCount_void_NoVirtual(long pNativeObject);
	protected int getElementCount_NoVirtual()
	{
		int returnValue = getElementCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getSelectedElementCount_void_callback()
	{
		int returnValue = getSelectedElementCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSelectedElementCount_void(long pNativeObject);
	/**
	 * 获取被选中元素的个数
	 * @param  
	 * @return 元素的个数
	 */
	public int getSelectedElementCount()
	{
		int returnValue = getSelectedElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSelectedElementCount_void_NoVirtual(long pNativeObject);
	protected int getSelectedElementCount_NoVirtual()
	{
		int returnValue = getSelectedElementCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean replaceElement_IElement_IElement_callback(long pOldElement, long pNewElement)
	{
		Ielement pOldElementParamValue = (pOldElement == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOldElementParamValue != null)
		{
		pOldElementParamValue.setDelegate(true);
		pOldElementParamValue.setInstancePointer(new InstancePointer(pOldElement));
		IClassFactory pOldElementParamValueClassFactory = GlobalClassFactoryMap.get(pOldElementParamValue.getCppInstanceTypeName());
		if (pOldElementParamValueClassFactory != null)
		{
			pOldElementParamValue.setDelegate(true);
			pOldElementParamValue = (Ielement)pOldElementParamValueClassFactory.create();
			pOldElementParamValue.setDelegate(true);
			pOldElementParamValue.setInstancePointer(new InstancePointer(pOldElement));
		}
		}
		Ielement pNewElementParamValue = (pNewElement == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewElementParamValue != null)
		{
		pNewElementParamValue.setDelegate(true);
		pNewElementParamValue.setInstancePointer(new InstancePointer(pNewElement));
		IClassFactory pNewElementParamValueClassFactory = GlobalClassFactoryMap.get(pNewElementParamValue.getCppInstanceTypeName());
		if (pNewElementParamValueClassFactory != null)
		{
			pNewElementParamValue.setDelegate(true);
			pNewElementParamValue = (Ielement)pNewElementParamValueClassFactory.create();
			pNewElementParamValue.setDelegate(true);
			pNewElementParamValue.setInstancePointer(new InstancePointer(pNewElement));
		}
		}
		boolean returnValue = replaceElement(pOldElementParamValue, pNewElementParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean replaceElement_IElement_IElement(long pNativeObject, long pOldElement, long pNewElement);
	/**
	 * 元素替换
	 * @param element 原来的元素对象
	 * @param element 新的元素对象
	 */
	public boolean replaceElement(Ielement pOldElement, Ielement pNewElement)
	{
		long pOldElementParamValue = (pOldElement == null ? 0L : pOldElement.nativeObject.pointer);
		long pNewElementParamValue = (pNewElement == null ? 0L : pNewElement.nativeObject.pointer);
		boolean returnValue = replaceElement_IElement_IElement(this.nativeObject.pointer, pOldElementParamValue, pNewElementParamValue);
		return returnValue;
	}
	native private boolean replaceElement_IElement_IElement_NoVirtual(long pNativeObject, long pOldElement, long pNewElement);
	protected boolean replaceElement_NoVirtual(Ielement pOldElement, Ielement pNewElement)
	{
		long pOldElementParamValue = (pOldElement == null ? 0L : pOldElement.nativeObject.pointer);
		long pNewElementParamValue = (pNewElement == null ? 0L : pNewElement.nativeObject.pointer);
		boolean returnValue = replaceElement_IElement_IElement_NoVirtual(this.nativeObject.pointer, pOldElementParamValue, pNewElementParamValue);
		return returnValue;
	}

	protected  boolean exchangeElement_ev_int32_ev_int32_callback(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement(srcIndexParamValue, destIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exchangeElement_ev_int32_ev_int32(long pNativeObject, int srcIndex, int destIndex);
	/**
	 * 元素交换(注：与元素替换区别在于，元素替换是将一个原有的元素替换为新的元素，而元素交换是两个已经存在于容器内的元素相互交换位置)
	 * @param element 被替换元素索引
	 * @param element 替换元素索引
	 * @return 是否替换成功
	 */
	public boolean exchangeElement(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement_ev_int32_ev_int32(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}
	native private boolean exchangeElement_ev_int32_ev_int32_NoVirtual(long pNativeObject, int srcIndex, int destIndex);
	protected boolean exchangeElement_NoVirtual(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}

	protected  long getElement_ev_int32_callback(int nIndex)
	{
		int nIndexParamValue = nIndex;
		Ielement returnValue = getElement(nIndexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getElement_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 获取元素
	 * @param nIndex 元素对象的索引
	 * @return 元素对象
	 */
	public Ielement getElement(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getElement_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		Ielement __returnValue = new Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}
	native private long getElement_ev_int32_NoVirtual(long pNativeObject, int nIndex);
	protected Ielement getElement_NoVirtual(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getElement_ev_int32_NoVirtual(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		Ielement __returnValue = new Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}

	protected  void removeElement_IElement_callback(long element)
	{
		Ielement elementParamValue = (element == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(elementParamValue != null)
		{
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (Ielement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		}
		removeElement(elementParamValue);
	}

	native private void removeElement_IElement(long pNativeObject, long element);
	/**
	 * /删除元素
	 * @param element 元素对象
	 */
	public void removeElement(Ielement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		removeElement_IElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void removeElement_IElement_NoVirtual(long pNativeObject, long element);
	protected void removeElement_NoVirtual(Ielement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		removeElement_IElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  void removeSelectedElement_void_callback()
	{
		removeSelectedElement();
	}

	native private void removeSelectedElement_void(long pNativeObject);
	/**
	 * 删除被选中元素
	 * @param  
	 */
	public void removeSelectedElement()
	{
		removeSelectedElement_void(this.nativeObject.pointer);
	}
	native private void removeSelectedElement_void_NoVirtual(long pNativeObject);
	protected void removeSelectedElement_NoVirtual()
	{
		removeSelectedElement_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void removeAllElement_void_callback()
	{
		removeAllElement();
	}

	native private void removeAllElement_void(long pNativeObject);
	/**
	 * 删除所有元素
	 * @param  
	 */
	public void removeAllElement()
	{
		removeAllElement_void(this.nativeObject.pointer);
	}
	native private void removeAllElement_void_NoVirtual(long pNativeObject);
	protected void removeAllElement_NoVirtual()
	{
		removeAllElement_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isExistMapFrame_void_callback()
	{
		boolean returnValue = isExistMapFrame();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExistMapFrame_void(long pNativeObject);
	/**
	 * 判断是否存在地图框架
	 * @param  
	 * @return 如果存在返回true,否则返回false
	 */
	public boolean isExistMapFrame()
	{
		boolean returnValue = isExistMapFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isExistMapFrame_void_NoVirtual(long pNativeObject);
	protected boolean isExistMapFrame_NoVirtual()
	{
		boolean returnValue = isExistMapFrame_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isExist_IElement_callback(long pElement)
	{
		Ielement pElementParamValue = (pElement == 0L ? null : new Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pElementParamValue != null)
		{
		pElementParamValue.setDelegate(true);
		pElementParamValue.setInstancePointer(new InstancePointer(pElement));
		IClassFactory pElementParamValueClassFactory = GlobalClassFactoryMap.get(pElementParamValue.getCppInstanceTypeName());
		if (pElementParamValueClassFactory != null)
		{
			pElementParamValue.setDelegate(true);
			pElementParamValue = (Ielement)pElementParamValueClassFactory.create();
			pElementParamValue.setDelegate(true);
			pElementParamValue.setInstancePointer(new InstancePointer(pElement));
		}
		}
		boolean returnValue = isExist(pElementParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isExist_IElement(long pNativeObject, long pElement);
	/**
	 * 判断某个元素是否已经存在
	 * @param pElement 某个元素
	 * @return 如果存在返回true,否则返回false
	 */
	public boolean isExist(Ielement pElement)
	{
		long pElementParamValue = (pElement == null ? 0L : pElement.nativeObject.pointer);
		boolean returnValue = isExist_IElement(this.nativeObject.pointer, pElementParamValue);
		return returnValue;
	}
	native private boolean isExist_IElement_NoVirtual(long pNativeObject, long pElement);
	protected boolean isExist_NoVirtual(Ielement pElement)
	{
		long pElementParamValue = (pElement == null ? 0L : pElement.nativeObject.pointer);
		boolean returnValue = isExist_IElement_NoVirtual(this.nativeObject.pointer, pElementParamValue);
		return returnValue;
	}

	protected  void removeMapFrame_void_callback()
	{
		removeMapFrame();
	}

	native private void removeMapFrame_void(long pNativeObject);
	/**
	 * 删除框架
	 * @param  
	 */
	public void removeMapFrame()
	{
		removeMapFrame_void(this.nativeObject.pointer);
	}
	native private void removeMapFrame_void_NoVirtual(long pNativeObject);
	protected void removeMapFrame_NoVirtual()
	{
		removeMapFrame_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getLayoutImage_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = getLayoutImage();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayoutImage_void(long pNativeObject);
	/**
	 * 获取布局图片
	 * @param  
	 * @return 布局图片
	 */
	public com.earthview.world.display.Ibitmap getLayoutImage()
	{
		long returnValue = getLayoutImage_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getLayoutImage_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getLayoutImage_NoVirtual()
	{
		long returnValue = getLayoutImage_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 重置容器指针
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long next_void_callback()
	{
		Ielement returnValue = next();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long next_void(long pNativeObject);
	/**
	 * 访问容器中的下一个元素
	 * @param  
	 */
	public Ielement next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ielement __returnValue = new Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}
	native private long next_void_NoVirtual(long pNativeObject);
	protected Ielement next_NoVirtual()
	{
		long returnValue = next_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ielement __returnValue = new Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}

	protected  long getInterestEnvelope_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getInterestEnvelope();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInterestEnvelope_void(long pNativeObject);
	/**
	 * 获取感兴趣的范围
	 * @param  
	 * @return 感兴趣的范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getInterestEnvelope()
	{
		long returnValue = getInterestEnvelope_void(this.nativeObject.pointer);
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
	native private long getInterestEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getInterestEnvelope_NoVirtual()
	{
		long returnValue = getInterestEnvelope_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setInterestEnvelope_IEnvelope_callback(long pEnvelope)
	{
		com.earthview.world.spatial.geometry.Ienvelope pEnvelopeParamValue = (pEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvelopeParamValue != null)
		{
		pEnvelopeParamValue.setDelegate(true);
		pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		IClassFactory pEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(pEnvelopeParamValue.getCppInstanceTypeName());
		if (pEnvelopeParamValueClassFactory != null)
		{
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvelopeParamValueClassFactory.create();
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		}
		}
		setInterestEnvelope(pEnvelopeParamValue);
	}

	native private void setInterestEnvelope_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 设置感兴趣的范围
	 * @param  感兴趣的范围
	 * @return 边框范围
	 */
	public void setInterestEnvelope(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setInterestEnvelope_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
	}
	native private void setInterestEnvelope_IEnvelope_NoVirtual(long pNativeObject, long pEnvelope);
	protected void setInterestEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setInterestEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvelopeParamValue);
	}

	protected  void updateEnvelop_void_callback()
	{
		updateEnvelop();
	}

	native private void updateEnvelop_void(long pNativeObject);
	/**
	 * 更新边框范围
	 * @param  
	 */
	public void updateEnvelop()
	{
		updateEnvelop_void(this.nativeObject.pointer);
	}
	native private void updateEnvelop_void_NoVirtual(long pNativeObject);
	protected void updateEnvelop_NoVirtual()
	{
		updateEnvelop_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 获取布局是否为激活状态
	 * @param  
	 * @return 是否为激活状态
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

	protected  void setActive_ev_bool_callback(boolean bActive)
	{
		boolean bActiveParamValue = bActive;
		setActive(bActiveParamValue);
	}

	native private void setActive_ev_bool(long pNativeObject, boolean bActive);
	/**
	 * 设置布局是否为激活状态
	 * @param bActive 是否为激活状态
	 */
	public void setActive(boolean bActive)
	{
		boolean bActiveParamValue = bActive;
		setActive_ev_bool(this.nativeObject.pointer, bActiveParamValue);
	}
	native private void setActive_ev_bool_NoVirtual(long pNativeObject, boolean bActive);
	protected void setActive_NoVirtual(boolean bActive)
	{
		boolean bActiveParamValue = bActive;
		setActive_ev_bool_NoVirtual(this.nativeObject.pointer, bActiveParamValue);
	}

	protected  boolean drawPrepare_ISpatialDisplay_callback(long pDisplay)
	{
		com.earthview.world.spatial.display.Ispatialdisplay pDisplayParamValue = (pDisplay == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDisplayParamValue != null)
		{
		pDisplayParamValue.setDelegate(true);
		pDisplayParamValue.setInstancePointer(new InstancePointer(pDisplay));
		IClassFactory pDisplayParamValueClassFactory = GlobalClassFactoryMap.get(pDisplayParamValue.getCppInstanceTypeName());
		if (pDisplayParamValueClassFactory != null)
		{
			pDisplayParamValue.setDelegate(true);
			pDisplayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)pDisplayParamValueClassFactory.create();
			pDisplayParamValue.setDelegate(true);
			pDisplayParamValue.setInstancePointer(new InstancePointer(pDisplay));
		}
		}
		boolean returnValue = drawPrepare(pDisplayParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean drawPrepare_ISpatialDisplay(long pNativeObject, long pDisplay);
	/**
	 * 绘制布局准备
	 * @param pDisplay 指定设备
	 */
	public boolean drawPrepare(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}
	native private boolean drawPrepare_ISpatialDisplay_NoVirtual(long pNativeObject, long pDisplay);
	protected boolean drawPrepare_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}

	protected  void draw_void_callback()
	{
		draw();
	}

	native private void draw_void(long pNativeObject);
	/**
	 * 绘制布局
	 * @param  
	 */
	public void draw()
	{
		draw_void(this.nativeObject.pointer);
	}
	native private void draw_void_NoVirtual(long pNativeObject);
	protected void draw_NoVirtual()
	{
		draw_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void drawOver_void_callback()
	{
		drawOver();
	}

	native private void drawOver_void(long pNativeObject);
	/**
	 * 绘制结束后续处理
	 * @param  
	 */
	public void drawOver()
	{
		drawOver_void(this.nativeObject.pointer);
	}
	native private void drawOver_void_NoVirtual(long pNativeObject);
	protected void drawOver_NoVirtual()
	{
		drawOver_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long ev_clone_void_callback()
	{
		Ipagelayout returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆元素
	 * @param  
	 * @return 地图元素
	 */
	public Ipagelayout ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ipagelayout __returnValue = new Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected Ipagelayout ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		Ipagelayout __returnValue = new Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}

	native private long getCartoOutput_void(long pNativeObject);
	/**
	 * 克隆元素
	 * @param  
	 * @return 地图元素
	 */
	public com.earthview.world.spatial.carto.CartoOutput2D getCartoOutput()
	{
		long returnValue = getCartoOutput_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.CartoOutput2D __returnValue = new com.earthview.world.spatial.carto.CartoOutput2D(CreatedWhenConstruct.CWC_NotToCreate, "CCartoOutput2D");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.CartoOutput2D)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCartoOutput2D");
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
	 * 将地图的配置以流的方式导出
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
	 * 将地图的配置以XML的方式导出
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
	 * 从xml元素中恢复指北针的配置
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
	 * 把比例尺的配置保存到xml元素中
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

	protected  void fromStream_CDataStream_callback(long stream)
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
		fromStream(streamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public PageLayout(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PageLayout(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getPage_void(long pNativeObject, String method);
	native protected void register_setPage_IPage(long pNativeObject, String method);
	native protected void register_addElement_IElement(long pNativeObject, String method);
	native protected void register_insertElement_ev_int32_IElement(long pNativeObject, String method);
	native protected void register_getElementCount_void(long pNativeObject, String method);
	native protected void register_getSelectedElementCount_void(long pNativeObject, String method);
	native protected void register_replaceElement_IElement_IElement(long pNativeObject, String method);
	native protected void register_exchangeElement_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getElement_ev_int32(long pNativeObject, String method);
	native protected void register_removeElement_IElement(long pNativeObject, String method);
	native protected void register_removeSelectedElement_void(long pNativeObject, String method);
	native protected void register_removeAllElement_void(long pNativeObject, String method);
	native protected void register_isExistMapFrame_void(long pNativeObject, String method);
	native protected void register_isExist_IElement(long pNativeObject, String method);
	native protected void register_removeMapFrame_void(long pNativeObject, String method);
	native protected void register_getLayoutImage_void(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_next_void(long pNativeObject, String method);
	native protected void register_getInterestEnvelope_void(long pNativeObject, String method);
	native protected void register_setInterestEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_updateEnvelop_void(long pNativeObject, String method);
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_drawPrepare_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_draw_void(long pNativeObject, String method);
	native protected void register_drawOver_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getPage_void(this.nativeObject.pointer, "getPage_void_callback");
			this.register_setPage_IPage(this.nativeObject.pointer, "setPage_IPage_callback");
			this.register_addElement_IElement(this.nativeObject.pointer, "addElement_IElement_callback");
			this.register_insertElement_ev_int32_IElement(this.nativeObject.pointer, "insertElement_ev_int32_IElement_callback");
			this.register_getElementCount_void(this.nativeObject.pointer, "getElementCount_void_callback");
			this.register_getSelectedElementCount_void(this.nativeObject.pointer, "getSelectedElementCount_void_callback");
			this.register_replaceElement_IElement_IElement(this.nativeObject.pointer, "replaceElement_IElement_IElement_callback");
			this.register_exchangeElement_ev_int32_ev_int32(this.nativeObject.pointer, "exchangeElement_ev_int32_ev_int32_callback");
			this.register_getElement_ev_int32(this.nativeObject.pointer, "getElement_ev_int32_callback");
			this.register_removeElement_IElement(this.nativeObject.pointer, "removeElement_IElement_callback");
			this.register_removeSelectedElement_void(this.nativeObject.pointer, "removeSelectedElement_void_callback");
			this.register_removeAllElement_void(this.nativeObject.pointer, "removeAllElement_void_callback");
			this.register_isExistMapFrame_void(this.nativeObject.pointer, "isExistMapFrame_void_callback");
			this.register_isExist_IElement(this.nativeObject.pointer, "isExist_IElement_callback");
			this.register_removeMapFrame_void(this.nativeObject.pointer, "removeMapFrame_void_callback");
			this.register_getLayoutImage_void(this.nativeObject.pointer, "getLayoutImage_void_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_next_void(this.nativeObject.pointer, "next_void_callback");
			this.register_getInterestEnvelope_void(this.nativeObject.pointer, "getInterestEnvelope_void_callback");
			this.register_setInterestEnvelope_IEnvelope(this.nativeObject.pointer, "setInterestEnvelope_IEnvelope_callback");
			this.register_updateEnvelop_void(this.nativeObject.pointer, "updateEnvelop_void_callback");
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_drawPrepare_ISpatialDisplay(this.nativeObject.pointer, "drawPrepare_ISpatialDisplay_callback");
			this.register_draw_void(this.nativeObject.pointer, "draw_void_callback");
			this.register_drawOver_void(this.nativeObject.pointer, "drawOver_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static PageLayout fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PageLayout obj = null;
 		if(baseObj instanceof PageLayout)
		{
			obj = (PageLayout)baseObj;
		} else {
			obj = new PageLayout(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPageLayout");
			obj.increaseCast();
		}

		return obj;
	}
}
