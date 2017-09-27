package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 栅格图层基类
 */
public class Irasterlayer extends com.earthview.world.spatial.atlas.Ilayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IRasterLayer", new IrasterlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIRasterLayerProxy", new IrasterlayerClassFactory());
	}

	protected  void setDataset_IDataset_callback(long ref_pDataset)
	{
		com.earthview.world.spatial.geodataset.Idataset ref_pDatasetParamValue = (ref_pDataset == 0L ? null : new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pDatasetParamValue != null)
		{
		ref_pDatasetParamValue.setDelegate(true);
		ref_pDatasetParamValue.setInstancePointer(new InstancePointer(ref_pDataset));
		IClassFactory ref_pDatasetParamValueClassFactory = GlobalClassFactoryMap.get(ref_pDatasetParamValue.getCppInstanceTypeName());
		if (ref_pDatasetParamValueClassFactory != null)
		{
			ref_pDatasetParamValue.setDelegate(true);
			ref_pDatasetParamValue = (com.earthview.world.spatial.geodataset.Idataset)ref_pDatasetParamValueClassFactory.create();
			ref_pDatasetParamValue.setDelegate(true);
			ref_pDatasetParamValue.setInstancePointer(new InstancePointer(ref_pDataset));
		}
		}
		setDataset(ref_pDatasetParamValue);
	}

	native private void setDataset_IDataset(long pNativeObject, long ref_pDataset);
	/**
	 * 将栅格图层关联到一个数据集
	 * @param  
	 * @return 数据集
	 */
	public void setDataset(com.earthview.world.spatial.geodataset.Idataset ref_pDataset)
	{
		long ref_pDatasetParamValue = (ref_pDataset == null ? 0L : ref_pDataset.nativeObject.pointer);
		setDataset_IDataset(this.nativeObject.pointer, ref_pDatasetParamValue);
	}
	native private void setDataset_IDataset_NoVirtual(long pNativeObject, long ref_pDataset);
	protected void setDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset ref_pDataset)
	{
		long ref_pDatasetParamValue = (ref_pDataset == null ? 0L : ref_pDataset.nativeObject.pointer);
		setDataset_IDataset_NoVirtual(this.nativeObject.pointer, ref_pDatasetParamValue);
	}

	protected  void setRenderer_IRasterRenderer_callback(long pRenderer)
	{
		com.earthview.world.spatial2d.raster.Irasterrenderer pRendererParamValue = (pRenderer == 0L ? null : new com.earthview.world.spatial2d.raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pRendererParamValue != null)
		{
		pRendererParamValue.setDelegate(true);
		pRendererParamValue.setInstancePointer(new InstancePointer(pRenderer));
		IClassFactory pRendererParamValueClassFactory = GlobalClassFactoryMap.get(pRendererParamValue.getCppInstanceTypeName());
		if (pRendererParamValueClassFactory != null)
		{
			pRendererParamValue.setDelegate(true);
			pRendererParamValue = (com.earthview.world.spatial2d.raster.Irasterrenderer)pRendererParamValueClassFactory.create();
			pRendererParamValue.setDelegate(true);
			pRendererParamValue.setInstancePointer(new InstancePointer(pRenderer));
		}
		}
		setRenderer(pRendererParamValue);
	}

	native private void setRenderer_IRasterRenderer(long pNativeObject, long pRenderer);
	/// <summray>
	/// 设置栅格渲染对象
	/// </summary>
	/// <param name="pRenderer">栅格渲染对象（内部释放）</param>
	/// <returns></returns>
	public void setRenderer(com.earthview.world.spatial2d.raster.Irasterrenderer pRenderer)
	{
		long pRendererParamValue = (pRenderer == null ? 0L : pRenderer.nativeObject.pointer);
		if(pRenderer != null)
		{
		pRenderer.setNoFree(true);
		}
		setRenderer_IRasterRenderer(this.nativeObject.pointer, pRendererParamValue);
	}
	native private void setRenderer_IRasterRenderer_NoVirtual(long pNativeObject, long pRenderer);
	protected void setRenderer_NoVirtual(com.earthview.world.spatial2d.raster.Irasterrenderer pRenderer)
	{
		long pRendererParamValue = (pRenderer == null ? 0L : pRenderer.nativeObject.pointer);
		setRenderer_IRasterRenderer_NoVirtual(this.nativeObject.pointer, pRendererParamValue);
	}

	protected  long getRenderer_void_callback()
	{
		com.earthview.world.spatial2d.raster.Irasterrenderer returnValue = getRenderer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderer_void(long pNativeObject);
	/// <summray>
	/// 获取栅格渲染对象
	/// </summary>
	/// <returns>栅格渲染对象</returns>
	public com.earthview.world.spatial2d.raster.Irasterrenderer getRenderer()
	{
		long returnValue = getRenderer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterrenderer __returnValue = new com.earthview.world.spatial2d.raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate, "IRasterRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterrenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterRenderer");
		}
		return __returnValue;
	}
	native private long getRenderer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.Irasterrenderer getRenderer_NoVirtual()
	{
		long returnValue = getRenderer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterrenderer __returnValue = new com.earthview.world.spatial2d.raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate, "IRasterRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterrenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterRenderer");
		}
		return __returnValue;
	}

	protected  int getLayerID_void_callback()
	{
		int returnValue = getLayerID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getLayerID_void(long pNativeObject);
	/**
	 * 获取栅格图层的ID
	 * @return 图层ID
	 */
	public int getLayerID()
	{
		int returnValue = getLayerID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLayerID_void_NoVirtual(long pNativeObject);
	protected int getLayerID_NoVirtual()
	{
		int returnValue = getLayerID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLayerID_ev_int32_callback(int iID)
	{
		int iIDParamValue = iID;
		setLayerID(iIDParamValue);
	}

	native private void setLayerID_ev_int32(long pNativeObject, int iID);
	/**
	 * 设置栅格图层的ID
	 * @param iID 图层ID
	 */
	public void setLayerID(int iID)
	{
		int iIDParamValue = iID;
		setLayerID_ev_int32(this.nativeObject.pointer, iIDParamValue);
	}
	native private void setLayerID_ev_int32_NoVirtual(long pNativeObject, int iID);
	protected void setLayerID_NoVirtual(int iID)
	{
		int iIDParamValue = iID;
		setLayerID_ev_int32_NoVirtual(this.nativeObject.pointer, iIDParamValue);
	}

	protected  void assignRChannel_ev_int32_callback(int iBand)
	{
		int iBandParamValue = iBand;
		assignRChannel(iBandParamValue);
	}

	native private void assignRChannel_ev_int32(long pNativeObject, int iBand);
	///<summary>
	///为R通道指定波段索引(波段索引不能超过波段的总数)
	/// <param name="iBand">波段索引，-1为未指定任何波段，即该波段不被显示</param>
	///<returns></returns>
	///<summary>
	public void assignRChannel(int iBand)
	{
		int iBandParamValue = iBand;
		assignRChannel_ev_int32(this.nativeObject.pointer, iBandParamValue);
	}
	native private void assignRChannel_ev_int32_NoVirtual(long pNativeObject, int iBand);
	protected void assignRChannel_NoVirtual(int iBand)
	{
		int iBandParamValue = iBand;
		assignRChannel_ev_int32_NoVirtual(this.nativeObject.pointer, iBandParamValue);
	}

	protected  void assignGChannel_ev_int32_callback(int iBand)
	{
		int iBandParamValue = iBand;
		assignGChannel(iBandParamValue);
	}

	native private void assignGChannel_ev_int32(long pNativeObject, int iBand);
	/**
	 * 为G通道指定波段索引
	 */
	public void assignGChannel(int iBand)
	{
		int iBandParamValue = iBand;
		assignGChannel_ev_int32(this.nativeObject.pointer, iBandParamValue);
	}
	native private void assignGChannel_ev_int32_NoVirtual(long pNativeObject, int iBand);
	protected void assignGChannel_NoVirtual(int iBand)
	{
		int iBandParamValue = iBand;
		assignGChannel_ev_int32_NoVirtual(this.nativeObject.pointer, iBandParamValue);
	}

	protected  void assignBChannel_ev_int32_callback(int iBand)
	{
		int iBandParamValue = iBand;
		assignBChannel(iBandParamValue);
	}

	native private void assignBChannel_ev_int32(long pNativeObject, int iBand);
	/**
	 * 为B通道指定波段索引
	 */
	public void assignBChannel(int iBand)
	{
		int iBandParamValue = iBand;
		assignBChannel_ev_int32(this.nativeObject.pointer, iBandParamValue);
	}
	native private void assignBChannel_ev_int32_NoVirtual(long pNativeObject, int iBand);
	protected void assignBChannel_NoVirtual(int iBand)
	{
		int iBandParamValue = iBand;
		assignBChannel_ev_int32_NoVirtual(this.nativeObject.pointer, iBandParamValue);
	}

	protected  int getRedIndex_void_callback()
	{
		int returnValue = getRedIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getRedIndex_void(long pNativeObject);
	/**
	 * 获取R通道的波段索引
	 * @return 波段索引
	 */
	public int getRedIndex()
	{
		int returnValue = getRedIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getRedIndex_void_NoVirtual(long pNativeObject);
	protected int getRedIndex_NoVirtual()
	{
		int returnValue = getRedIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getGreenIndex_void_callback()
	{
		int returnValue = getGreenIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getGreenIndex_void(long pNativeObject);
	/**
	 * 获取G通道的波段索引
	 * @return 波段索引
	 */
	public int getGreenIndex()
	{
		int returnValue = getGreenIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGreenIndex_void_NoVirtual(long pNativeObject);
	protected int getGreenIndex_NoVirtual()
	{
		int returnValue = getGreenIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getBlueIndex_void_callback()
	{
		int returnValue = getBlueIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getBlueIndex_void(long pNativeObject);
	/**
	 * 获取B通道的波段索引
	 * @return 波段索引
	 */
	public int getBlueIndex()
	{
		int returnValue = getBlueIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBlueIndex_void_NoVirtual(long pNativeObject);
	protected int getBlueIndex_NoVirtual()
	{
		int returnValue = getBlueIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double dfX, double dfY, long dfRValue, long dfGValue, long dfBValue)
	{
		double dfXParamValue = dfX;
		double dfYParamValue = dfY;
		DoublePointer dfRValueParamValue = new DoublePointer(new InstancePointer(dfRValue));
		DoublePointer dfGValueParamValue = new DoublePointer(new InstancePointer(dfGValue));
		DoublePointer dfBValueParamValue = new DoublePointer(new InstancePointer(dfBValue));
		getPixelValue(dfXParamValue, dfYParamValue, dfRValueParamValue, dfGValueParamValue, dfBValueParamValue);
	}

	native private void getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double dfX, double dfY, long dfRValue, long dfGValue, long dfBValue);
	/**
	 * 获取指定地面坐标处的RGB值
	 * @param dfX X坐标
	 * @param dfY Y坐标
	 * @param dfRValue R通道值
	 * @param dfGValue G通道值
	 * @param dfBValue B通道值
	 */
	public void getPixelValue(double dfX, double dfY, DoublePointer dfRValue, DoublePointer dfGValue, DoublePointer dfBValue)
	{
		double dfXParamValue = dfX;
		double dfYParamValue = dfY;
		long dfRValueParamValue = dfRValue.nativeObject.pointer;
		long dfGValueParamValue = dfGValue.nativeObject.pointer;
		long dfBValueParamValue = dfBValue.nativeObject.pointer;
		getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, dfXParamValue, dfYParamValue, dfRValueParamValue, dfGValueParamValue, dfBValueParamValue);
	}
	native private void getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double dfX, double dfY, long dfRValue, long dfGValue, long dfBValue);
	protected void getPixelValue_NoVirtual(double dfX, double dfY, DoublePointer dfRValue, DoublePointer dfGValue, DoublePointer dfBValue)
	{
		double dfXParamValue = dfX;
		double dfYParamValue = dfY;
		long dfRValueParamValue = dfRValue.nativeObject.pointer;
		long dfGValueParamValue = dfGValue.nativeObject.pointer;
		long dfBValueParamValue = dfBValue.nativeObject.pointer;
		getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, dfXParamValue, dfYParamValue, dfRValueParamValue, dfGValueParamValue, dfBValueParamValue);
	}

	public Irasterlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Irasterlayer(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 设置图层的透明度
	 * @param transparent 透明值
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 获取图层的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
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
	
	native protected void register_setDataset_IDataset(long pNativeObject, String method);
	native protected void register_setRenderer_IRasterRenderer(long pNativeObject, String method);
	native protected void register_getRenderer_void(long pNativeObject, String method);
	native protected void register_getLayerID_void(long pNativeObject, String method);
	native protected void register_setLayerID_ev_int32(long pNativeObject, String method);
	native protected void register_assignRChannel_ev_int32(long pNativeObject, String method);
	native protected void register_assignGChannel_ev_int32(long pNativeObject, String method);
	native protected void register_assignBChannel_ev_int32(long pNativeObject, String method);
	native protected void register_getRedIndex_void(long pNativeObject, String method);
	native protected void register_getGreenIndex_void(long pNativeObject, String method);
	native protected void register_getBlueIndex_void(long pNativeObject, String method);
	native protected void register_getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
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
			this.register_setDataset_IDataset(this.nativeObject.pointer, "setDataset_IDataset_callback");
			this.register_setRenderer_IRasterRenderer(this.nativeObject.pointer, "setRenderer_IRasterRenderer_callback");
			this.register_getRenderer_void(this.nativeObject.pointer, "getRenderer_void_callback");
			this.register_getLayerID_void(this.nativeObject.pointer, "getLayerID_void_callback");
			this.register_setLayerID_ev_int32(this.nativeObject.pointer, "setLayerID_ev_int32_callback");
			this.register_assignRChannel_ev_int32(this.nativeObject.pointer, "assignRChannel_ev_int32_callback");
			this.register_assignGChannel_ev_int32(this.nativeObject.pointer, "assignGChannel_ev_int32_callback");
			this.register_assignBChannel_ev_int32(this.nativeObject.pointer, "assignBChannel_ev_int32_callback");
			this.register_getRedIndex_void(this.nativeObject.pointer, "getRedIndex_void_callback");
			this.register_getGreenIndex_void(this.nativeObject.pointer, "getGreenIndex_void_callback");
			this.register_getBlueIndex_void(this.nativeObject.pointer, "getBlueIndex_void_callback");
			this.register_getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getPixelValue_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
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
	
	public static Irasterlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Irasterlayer obj = null;
 		if(baseObj instanceof Irasterlayer)
		{
			obj = (Irasterlayer)baseObj;
		} else {
			obj = new Irasterlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IRasterLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
