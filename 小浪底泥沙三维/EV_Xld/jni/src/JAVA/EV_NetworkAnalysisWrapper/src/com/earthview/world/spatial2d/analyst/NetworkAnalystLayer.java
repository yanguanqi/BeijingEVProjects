package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络分析图层
 */
public class NetworkAnalystLayer extends com.earthview.world.spatial.atlas.Ilayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer", new NetworkAnalystLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::JCNetworkAnalystLayerProxy", new NetworkAnalystLayerClassFactory());
	}

	/**
	 * 构造函数
	 * @param dataset 网络数据集
	 */
	public NetworkAnalystLayer(com.earthview.world.spatial2d.geodataset.NetworkDataset ref_dataset) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_datasetPtr = new BasePointer(ref_dataset);
		list.add("ref_dataset", ref_datasetPtr.get());
		Create("JCNetworkAnalystLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.analyst.NetworkAnalystLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addStop_CPoint_callback(long pt)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		addStop(ptParamValue);
	}

	native private void addStop_CPoint(long pNativeObject, long pt);
	/**
	 * 添加停靠点
	 * @param pt 停靠点
	 */
	public void addStop(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		addStop_CPoint(this.nativeObject.pointer, ptParamValue);
	}
	native private void addStop_CPoint_NoVirtual(long pNativeObject, long pt);
	protected void addStop_NoVirtual(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		addStop_CPoint_NoVirtual(this.nativeObject.pointer, ptParamValue);
	}

	protected  void addBarriar_CPoint_callback(long pt)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		addBarriar(ptParamValue);
	}

	native private void addBarriar_CPoint(long pNativeObject, long pt);
	/**
	 * 添加障碍点
	 * @param pt 障碍点
	 */
	public void addBarriar(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		addBarriar_CPoint(this.nativeObject.pointer, ptParamValue);
	}
	native private void addBarriar_CPoint_NoVirtual(long pNativeObject, long pt);
	protected void addBarriar_NoVirtual(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		addBarriar_CPoint_NoVirtual(this.nativeObject.pointer, ptParamValue);
	}

	protected  int attach_CPoint_ev_real64_callback(long pt, double threshold)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		double thresholdParamValue = threshold;
		com.earthview.world.spatial2d.analyst.EVNAAttachType returnValue = attach(ptParamValue, thresholdParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int attach_CPoint_ev_real64(long pNativeObject, long pt, double threshold);
	/**
	 * 获取关联类型
	 * @param pt 点
	 * @param pt 范围
	 * @return 返回关联类型
	 */
	public com.earthview.world.spatial2d.analyst.EVNAAttachType attach(com.earthview.world.spatial.geometry.Point pt, double threshold)
	{
		long ptParamValue = pt.nativeObject.pointer;
		double thresholdParamValue = threshold;
		int returnValue = attach_CPoint_ev_real64(this.nativeObject.pointer, ptParamValue, thresholdParamValue);
		return com.earthview.world.spatial2d.analyst.EVNAAttachType.toEnum(returnValue);
	}
	native private int attach_CPoint_ev_real64_NoVirtual(long pNativeObject, long pt, double threshold);
	protected com.earthview.world.spatial2d.analyst.EVNAAttachType attach_NoVirtual(com.earthview.world.spatial.geometry.Point pt, double threshold)
	{
		long ptParamValue = pt.nativeObject.pointer;
		double thresholdParamValue = threshold;
		int returnValue = attach_CPoint_ev_real64_NoVirtual(this.nativeObject.pointer, ptParamValue, thresholdParamValue);
		return com.earthview.world.spatial2d.analyst.EVNAAttachType.toEnum(returnValue);
	}

	protected  void select_CRectangle_callback(long rect)
	{
		com.earthview.world.spatial.geometry.Rectangle rectParamValue = new com.earthview.world.spatial.geometry.Rectangle(CreatedWhenConstruct.CWC_NotToCreate);
		rectParamValue.setDelegate(true);
		rectParamValue.setInstancePointer(new InstancePointer(rect));
		IClassFactory rectParamValueClassFactory = GlobalClassFactoryMap.get(rectParamValue.getCppInstanceTypeName());
		if (rectParamValueClassFactory != null)
		{
			rectParamValue.setDelegate(true);
			rectParamValue = (com.earthview.world.spatial.geometry.Rectangle)rectParamValueClassFactory.create();
			rectParamValue.setDelegate(true);
			rectParamValue.setInstancePointer(new InstancePointer(rect));
		}
		select(rectParamValue);
	}

	native private void select_CRectangle(long pNativeObject, long rect);
	/**
	 * 框选元素
	 * @param rect 范围
	 */
	public void select(com.earthview.world.spatial.geometry.Rectangle rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		select_CRectangle(this.nativeObject.pointer, rectParamValue);
	}
	native private void select_CRectangle_NoVirtual(long pNativeObject, long rect);
	protected void select_NoVirtual(com.earthview.world.spatial.geometry.Rectangle rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		select_CRectangle_NoVirtual(this.nativeObject.pointer, rectParamValue);
	}

	protected  void moveTo_CPoint_callback(long pt)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		moveTo(ptParamValue);
	}

	native private void moveTo_CPoint(long pNativeObject, long pt);
	/**
	 * 移动选中的元素至目标点
	 * @param pt 目标点
	 */
	public void moveTo(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		moveTo_CPoint(this.nativeObject.pointer, ptParamValue);
	}
	native private void moveTo_CPoint_NoVirtual(long pNativeObject, long pt);
	protected void moveTo_NoVirtual(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		moveTo_CPoint_NoVirtual(this.nativeObject.pointer, ptParamValue);
	}

	protected  void remove_void_callback()
	{
		remove();
	}

	native private void remove_void(long pNativeObject);
	/**
	 * 移除选中的元素
	 * @param  
	 */
	public void remove()
	{
		remove_void(this.nativeObject.pointer);
	}
	native private void remove_void_NoVirtual(long pNativeObject);
	protected void remove_NoVirtual()
	{
		remove_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清除停靠点、障碍等元素
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getLockedSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getLockedSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLockedSymbol_void(long pNativeObject);
	/**
	 * 获取符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getLockedSymbol()
	{
		long returnValue = getLockedSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long getLockedSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getLockedSymbol_NoVirtual()
	{
		long returnValue = getLockedSymbol_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private long getStopCount_void(long pNativeObject);
	/**
	 * 获取停靠点数量
	 * @param  
	 * @return 返回停靠点数量
	 */
	public long getStopCount()
	{
		long returnValue = getStopCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBarriarCount_void(long pNativeObject);
	/**
	 * 获取障碍点数量
	 * @param  
	 * @return 返回障碍点数量
	 */
	public long getBarriarCount()
	{
		long returnValue = getBarriarCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/**
	 * 设置显示透明度
	 * @param transparent 透明度
	 */
	public void setTransparentValue(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8(this.nativeObject.pointer, transparentParamValue);
	}
	native private void setTransparentValue_ev_uint8_NoVirtual(long pNativeObject, short transparent);
	protected void setTransparentValue_NoVirtual(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8_NoVirtual(this.nativeObject.pointer, transparentParamValue);
	}

	native private short getTransparentValue_void(long pNativeObject);
	/**
	 * 获取显示透明度
	 * @param  
	 * @return 返回透明度
	 */
	public short getTransparentValue()
	{
		short returnValue = getTransparentValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getTransparentValue_void_NoVirtual(long pNativeObject);
	protected short getTransparentValue_NoVirtual()
	{
		short returnValue = getTransparentValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void selectResult_CPoint_ev_real64_callback(long pt, double threshold)
	{
		com.earthview.world.spatial.geometry.Point ptParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		ptParamValue.setDelegate(true);
		ptParamValue.setInstancePointer(new InstancePointer(pt));
		IClassFactory ptParamValueClassFactory = GlobalClassFactoryMap.get(ptParamValue.getCppInstanceTypeName());
		if (ptParamValueClassFactory != null)
		{
			ptParamValue.setDelegate(true);
			ptParamValue = (com.earthview.world.spatial.geometry.Point)ptParamValueClassFactory.create();
			ptParamValue.setDelegate(true);
			ptParamValue.setInstancePointer(new InstancePointer(pt));
		}
		double thresholdParamValue = threshold;
		selectResult(ptParamValue, thresholdParamValue);
	}

	native private void selectResult_CPoint_ev_real64(long pNativeObject, long pt, double threshold);
	/**
	 * 选择结果
	 * @param pt 点
	 * @param threshold 范围
	 */
	public void selectResult(com.earthview.world.spatial.geometry.Point pt, double threshold)
	{
		long ptParamValue = pt.nativeObject.pointer;
		double thresholdParamValue = threshold;
		selectResult_CPoint_ev_real64(this.nativeObject.pointer, ptParamValue, thresholdParamValue);
	}
	native private void selectResult_CPoint_ev_real64_NoVirtual(long pNativeObject, long pt, double threshold);
	protected void selectResult_NoVirtual(com.earthview.world.spatial.geometry.Point pt, double threshold)
	{
		long ptParamValue = pt.nativeObject.pointer;
		double thresholdParamValue = threshold;
		selectResult_CPoint_ev_real64_NoVirtual(this.nativeObject.pointer, ptParamValue, thresholdParamValue);
	}

	protected  void selectResult_CRectangle_callback(long rect)
	{
		com.earthview.world.spatial.geometry.Rectangle rectParamValue = new com.earthview.world.spatial.geometry.Rectangle(CreatedWhenConstruct.CWC_NotToCreate);
		rectParamValue.setDelegate(true);
		rectParamValue.setInstancePointer(new InstancePointer(rect));
		IClassFactory rectParamValueClassFactory = GlobalClassFactoryMap.get(rectParamValue.getCppInstanceTypeName());
		if (rectParamValueClassFactory != null)
		{
			rectParamValue.setDelegate(true);
			rectParamValue = (com.earthview.world.spatial.geometry.Rectangle)rectParamValueClassFactory.create();
			rectParamValue.setDelegate(true);
			rectParamValue.setInstancePointer(new InstancePointer(rect));
		}
		selectResult(rectParamValue);
	}

	native private void selectResult_CRectangle(long pNativeObject, long rect);
	/**
	 * 选择结果
	 * @param rect 选择范围
	 */
	public void selectResult(com.earthview.world.spatial.geometry.Rectangle rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		selectResult_CRectangle(this.nativeObject.pointer, rectParamValue);
	}
	native private void selectResult_CRectangle_NoVirtual(long pNativeObject, long rect);
	protected void selectResult_NoVirtual(com.earthview.world.spatial.geometry.Rectangle rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		selectResult_CRectangle_NoVirtual(this.nativeObject.pointer, rectParamValue);
	}

	protected  void removeResult_void_callback()
	{
		removeResult();
	}

	native private void removeResult_void(long pNativeObject);
	/**
	 * 清除结果
	 * @param  
	 */
	public void removeResult()
	{
		removeResult_void(this.nativeObject.pointer);
	}
	native private void removeResult_void_NoVirtual(long pNativeObject);
	protected void removeResult_NoVirtual()
	{
		removeResult_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean solve_void_callback()
	{
		boolean returnValue = solve();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean solve_void(long pNativeObject);
	/**
	 * 求解
	 * @param  
	 * @return 如果求解成功，则返回true；否则，返回false
	 */
	public boolean solve()
	{
		boolean returnValue = solve_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean solve_void_NoVirtual(long pNativeObject);
	protected boolean solve_NoVirtual()
	{
		boolean returnValue = solve_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAnalystMethod_EVNAAnalystMethod_callback(int method)
	{
		com.earthview.world.spatial2d.analyst.EVNAAnalystMethod methodParamValue = com.earthview.world.spatial2d.analyst.EVNAAnalystMethod.toEnum(method);
		setAnalystMethod(methodParamValue);
	}

	native private void setAnalystMethod_EVNAAnalystMethod(long pNativeObject, int method);
	/**
	 * 设置路径分析时查找停靠点方法
	 * @param  查找停靠点方法枚举
	 */
	public void setAnalystMethod(com.earthview.world.spatial2d.analyst.EVNAAnalystMethod method)
	{
		int methodParamValue = method.getValue();
		setAnalystMethod_EVNAAnalystMethod(this.nativeObject.pointer, methodParamValue);
	}
	native private void setAnalystMethod_EVNAAnalystMethod_NoVirtual(long pNativeObject, int method);
	protected void setAnalystMethod_NoVirtual(com.earthview.world.spatial2d.analyst.EVNAAnalystMethod method)
	{
		int methodParamValue = method.getValue();
		setAnalystMethod_EVNAAnalystMethod_NoVirtual(this.nativeObject.pointer, methodParamValue);
	}

	native private long getCostAttributeName_void(long pNativeObject);
	/**
	 * 获取成本属性名称
	 * @param  
	 * @return 返回成本属性名称
	 */
	public com.earthview.world.core.StringArray getCostAttributeName()
	{
		long returnValue = getCostAttributeName_void(this.nativeObject.pointer);
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
		return __returnValue;
	}
	native private void setCostAttribute_EVString(long pNativeObject, String name);
	/**
	 * 设置成本属性
	 * @param name 成本属性名称
	 */
	public void setCostAttribute(String name)
	{
		String nameParamValue = name;
		setCostAttribute_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getCurrentCostAttribute_void(long pNativeObject);
	/**
	 * 获取成本属性
	 * @param  
	 * @return 返回成本属性
	 */
	public String getCurrentCostAttribute()
	{
		String returnValue = getCurrentCostAttribute_void(this.nativeObject.pointer);
		return returnValue;
	}
	public NetworkAnalystLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NetworkAnalystLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取图层类型
	 * @param  
	 * @return 图层类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取与图层所关联的数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 获取数据集所在的数据源
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 图层选择
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置图层的名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 设置图层的描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 设置图层是否正在编辑
	 * @param editing 如果为true,则设置图层正在编辑,反之则否
	 */
	public void setEditing(boolean editing)
	{
		super.setEditing_NoVirtual(editing);
	}
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置图层是否可视
	 * @param visible 如果为true,则图层可视,反之则否
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 判断图层是否支持选择
	 * @param  
	 */
	public boolean isSelectable()
	{
		return super.isSelectable_NoVirtual();
	}
	/**
	 * 设置图层是否支持选择
	 * @param selectable 是否可选
	 */
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	/**
	 * 图层的复制,内存外部释放
	 * @param sr 参考坐标系
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 把图层的信息保存到流中
	 * @param steam 导出流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 从xml中恢复图层的配置
	 * @param element xml要素
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	/**
	 * 把图层的信息导出到xml中
	 * @param  
	 * @return xml要素
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_addStop_CPoint(long pNativeObject, String method);
	native protected void register_addBarriar_CPoint(long pNativeObject, String method);
	native protected void register_attach_CPoint_ev_real64(long pNativeObject, String method);
	native protected void register_select_CRectangle(long pNativeObject, String method);
	native protected void register_moveTo_CPoint(long pNativeObject, String method);
	native protected void register_remove_void(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_getLockedSymbol_void(long pNativeObject, String method);
	native protected void register_selectResult_CPoint_ev_real64(long pNativeObject, String method);
	native protected void register_selectResult_CRectangle(long pNativeObject, String method);
	native protected void register_removeResult_void(long pNativeObject, String method);
	native protected void register_solve_void(long pNativeObject, String method);
	native protected void register_setAnalystMethod_EVNAAnalystMethod(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addStop_CPoint(this.nativeObject.pointer, "addStop_CPoint_callback");
			this.register_addBarriar_CPoint(this.nativeObject.pointer, "addBarriar_CPoint_callback");
			this.register_attach_CPoint_ev_real64(this.nativeObject.pointer, "attach_CPoint_ev_real64_callback");
			this.register_select_CRectangle(this.nativeObject.pointer, "select_CRectangle_callback");
			this.register_moveTo_CPoint(this.nativeObject.pointer, "moveTo_CPoint_callback");
			this.register_remove_void(this.nativeObject.pointer, "remove_void_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_getLockedSymbol_void(this.nativeObject.pointer, "getLockedSymbol_void_callback");
			this.register_selectResult_CPoint_ev_real64(this.nativeObject.pointer, "selectResult_CPoint_ev_real64_callback");
			this.register_selectResult_CRectangle(this.nativeObject.pointer, "selectResult_CRectangle_callback");
			this.register_removeResult_void(this.nativeObject.pointer, "removeResult_void_callback");
			this.register_solve_void(this.nativeObject.pointer, "solve_void_callback");
			this.register_setAnalystMethod_EVNAAnalystMethod(this.nativeObject.pointer, "setAnalystMethod_EVNAAnalystMethod_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static NetworkAnalystLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NetworkAnalystLayer obj = null;
 		if(baseObj instanceof NetworkAnalystLayer)
		{
			obj = (NetworkAnalystLayer)baseObj;
		} else {
			obj = new NetworkAnalystLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNetworkAnalystLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
