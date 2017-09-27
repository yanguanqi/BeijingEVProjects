package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 实现灰度的显示目前只支持三个波段
 */
public class RasterLayer extends com.earthview.world.spatial.atlas.Irasterlayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterLayer", new RasterLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterLayerProxy", new RasterLayerClassFactory());
	}

	native private int getType_void(long pNativeObject);
	////////////////////////////////////////////////////////////////////////
	/// <summray>
	/// 获取图层类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层类型</returns>
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/// <summray>
	/// 获取图层名
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层名字符串</returns>
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

	native private void setName_EVString(long pNativeObject, String name);
	/// <summray>
	/// 设置图层名
	/// </summary>
	/// <param name="name">图层名</param>
	/// <returns></returns>
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

	native private String getDescription_void(long pNativeObject);
	/// <summray>
	/// 获取图层描述信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层描述信息</returns>
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

	native private void setDescription_EVString(long pNativeObject, String value);
	/// <summray>
	/// 设置图层描述信息
	/// </summary>
	/// <param name="value">图层描述信息</param>
	/// <returns></returns>
	public void setDescription(String value)
	{
		String valueParamValue = value;
		setDescription_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String value);
	protected void setDescription_NoVirtual(String value)
	{
		String valueParamValue = value;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean canEdit_void(long pNativeObject);
	/// <summray>
	/// 图层是否可编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>true，表示可编辑</returns>
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/// <summray>
	/// 图层是否处于编辑状态
	/// </summary>
	/// <param name=""></param>
	/// <returns>true,表示处于编辑状态</returns>
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEditing_ev_bool(long pNativeObject, boolean editing);
	/// <summray>
	/// 设置图层的编辑状态
	/// </summary>
	/// <param name="editing">编辑状态</param>
	/// <returns></returns>
	public void setEditing(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool(this.nativeObject.pointer, editingParamValue);
	}
	native private void setEditing_ev_bool_NoVirtual(long pNativeObject, boolean editing);
	protected void setEditing_NoVirtual(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool_NoVirtual(this.nativeObject.pointer, editingParamValue);
	}

	native private boolean isVisible_void(long pNativeObject);
	/// <summray>
	/// 图层是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns>true，表示可见</returns>
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/// <summray>
	/// 设置图层可见性
	/// </summary>
	/// <param name="visible">可见性</param>
	/// <returns></returns>
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private boolean isValid_void(long pNativeObject);
	/// <summray>
	/// 图层是否有效
	/// </summary>
	/// <param name=""></param>
	/// <returns>true，表示有效</returns>
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isSelectable_void(long pNativeObject);
	/// <summray>
	/// 图层是否可选
	/// </summary>
	/// <param name=""></param>
	/// <returns>true，表示可选</returns>
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selected);
	/// <summray>
	/// 设置图层的可选性
	/// </summary>
	/// <param name="selected">可选性</param>
	/// <returns></returns>
	public void setSelectable(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelectable_ev_bool(this.nativeObject.pointer, selectedParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selected);
	protected void setSelectable_NoVirtual(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectedParamValue);
	}

	native private boolean ignoreScale_void(long pNativeObject);
	/// <summray>
	/// 是否忽略比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>true，表示忽略比例尺</returns>
	public boolean ignoreScale()
	{
		boolean returnValue = ignoreScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean ignoreScale_void_NoVirtual(long pNativeObject);
	protected boolean ignoreScale_NoVirtual()
	{
		boolean returnValue = ignoreScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setIgnoreScale_ev_bool(long pNativeObject, boolean bIgnore);
	/// <summray>
	/// 设置是否忽略比例尺
	/// </summary>
	/// <param name="bIgnore">忽略比例尺属性</param>
	/// <returns></returns>
	public void setIgnoreScale(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool(this.nativeObject.pointer, bIgnoreParamValue);
	}
	native private void setIgnoreScale_ev_bool_NoVirtual(long pNativeObject, boolean bIgnore);
	protected void setIgnoreScale_NoVirtual(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool_NoVirtual(this.nativeObject.pointer, bIgnoreParamValue);
	}

	native private double getDisplayMaxScale_void(long pNativeObject);
	/// <summray>
	/// 获取图层最大可见比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>最大可见比例尺</returns>
	public double getDisplayMaxScale()
	{
		double returnValue = getDisplayMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDisplayMaxScale_void_NoVirtual(long pNativeObject);
	protected double getDisplayMaxScale_NoVirtual()
	{
		double returnValue = getDisplayMaxScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDisplayMaxScale_ev_real64(long pNativeObject, double scale);
	/// <summray>
	/// 设置图层最大可见比例尺
	/// </summary>
	/// <param name="scale">最大可见比例尺</param>
	/// <returns></returns>
	public void setDisplayMaxScale(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMaxScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setDisplayMaxScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setDisplayMaxScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMaxScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	native private double getDisplayMinScale_void(long pNativeObject);
	/// <summray>
	/// 获取图层最小可见比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>最小可见比例尺</returns>
	public double getDisplayMinScale()
	{
		double returnValue = getDisplayMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDisplayMinScale_void_NoVirtual(long pNativeObject);
	protected double getDisplayMinScale_NoVirtual()
	{
		double returnValue = getDisplayMinScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDisplayMinScale_ev_real64(long pNativeObject, double scale);
	/// <summray>
	/// 设置图层最小可见比例尺
	/// </summary>
	/// <param name="scale">最小可见比例尺</param>
	/// <returns></returns>
	public void setDisplayMinScale(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMinScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setDisplayMinScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setDisplayMinScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMinScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	native private long getDataset_void(long pNativeObject);
	/// <summray>
	/// 获取图层关联的数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层数据集</returns>
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/// <summray>
	/// 获取图层的坐标系
	/// </summary>
	/// <param name=""></param>
	/// <returns>坐标系对象（内部释放）</returns>
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

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/// <summray>
	/// 设置图层的坐标系
	/// </summary>
	/// <param name="sr">坐标系（外部释放）</param>
	/// <returns></returns>
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, srParamValue);
	}

	native private long getExtent_void(long pNativeObject);
	/// <summray>
	/// 获取图层的地理范围
	/// </summary>
	/// <param name=""></param>
	/// <returns>范围矩形（内部释放）</returns>
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		long returnValue = getExtent_void(this.nativeObject.pointer);
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
	native private long getExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getExtent_NoVirtual()
	{
		long returnValue = getExtent_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, long display, int type);
	/// <summray>
	/// 绘制图层
	/// </summary>
	/// <param name="display">绘图对象</param>
	/// <param name="type">图层渲染类型</param>
	/// <returns></returns>
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, displayParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean draw_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(long pNativeObject, long display, int type);
	protected boolean draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = draw_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(this.nativeObject.pointer, displayParamValue, typeParamValue);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	///<summary>
	///复制一个栅格图层（外部释放）
	///<summary>
	///<returns>图层指针</returns>
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/// <summray>
	/// 从XML元素创建图层
	/// </summary>
	/// <param name="element">图层信息XML元素</param>
	/// <returns></returns>
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

	native private long toXmlElement_void(long pNativeObject);
	/// <summray>
	/// 将图层信息输出为XML元素
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层信息XML元素</returns>
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

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/// <summray>
	///获取指定位置RGB的值
	/// </summary>
	/// <param name="dfX">X大地坐标</param>
	/// <param name="dfY">Y大地坐标</param>
	/// <param name="dfRValue">R通道值</param>
	/// <param name="dfGValue">G通道值</param>
	/// <param name="dfBValue">B通道值</param>
	/// <returns></returns>
	//void getPixelValue(_in ev_real64 dfX,_in ev_real64 dfY,
	//	ev_real64 &dfRValue, ev_real64& dfGValue, ev_real64 &dfBValue) const;
	/// <summray>
	///设置图层透明度
	/// </summary>
	/// <param name="transparent">图层透明度</param>
	/// <returns></returns>
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
	/// <summray>
	/// 获取图层透明度
	/// </summary>
	/// <param name=""></param>
	/// <returns>透明度</returns>
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

	native private void setRenderer_IRasterRenderer(long pNativeObject, long pRenderer);
	///////////////////////////////////////////////////////////////////////
	///virtual
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

	native private void setDataset_IDataset(long pNativeObject, long ref_pDataset);
	/**
	 * 链接一个数据集
	 * @param pDataset 数据集指针
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

	native private void assignRChannel_ev_int32(long pNativeObject, int iBand);
	/**
	 * 为R通道指定波段索引(波段索引不能超过，波段的总数)
	 * @param iBand 波段索引，-1为未指定任何波段，即该波段不被显示
	 */
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

	native private void assignGChannel_ev_int32(long pNativeObject, int iBand);
	/**
	 * 为G通道指定波段索引
	 * @param iBand 波段索引,-1为未指定任何波段，即该通道不被显示
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

	native private void assignBChannel_ev_int32(long pNativeObject, int iBand);
	/**
	 * 为B通道指定波段索引
	 * @param iBand 波段索引,-1为未指定任何波段，即该通道不被显示
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

	native private void saveChannelAsDataSet_ev_char_ev_int32_ev_int32_EVDataSetFormat_ev_real64_CProgressInfo(long pNativeObject, long fullPath, int iChannelCount, long piChannelIndex, int eDataSetType, double dfNodataValue, long pProssiInfo);
	/**
	 * 将指定通道保存出一个灰度数据集
	 * @param fullPath 数据集有效路径
	 * @param iChannelCount 通道数
	 * @param piChannelIndex 通道数
	 * @param eDataSetType 数据集类型
	 * @param dfNodataValue 指定某个颜色值为空（PNG表现为透明）
	 * @param pfnProgress 进度函数指针
	 * @param pProssiInfo 进度信息指针，外部分配与释放
	 */
	public void saveChannelAsDataSet(BytePointer fullPath, int iChannelCount, IntegerPointer piChannelIndex, com.earthview.world.spatial2d.raster.EVDataSetFormat eDataSetType, double dfNodataValue, com.earthview.world.spatial2d.raster.ProgressInfo pProssiInfo)
	{
		long fullPathParamValue = (fullPath == null ? 0L : fullPath.nativeObject.pointer);
		int iChannelCountParamValue = iChannelCount;
		long piChannelIndexParamValue = (piChannelIndex == null ? 0L : piChannelIndex.nativeObject.pointer);
		int eDataSetTypeParamValue = eDataSetType.getValue();
		double dfNodataValueParamValue = dfNodataValue;
		long pProssiInfoParamValue = (pProssiInfo == null ? 0L : pProssiInfo.nativeObject.pointer);
		saveChannelAsDataSet_ev_char_ev_int32_ev_int32_EVDataSetFormat_ev_real64_CProgressInfo(this.nativeObject.pointer, fullPathParamValue, iChannelCountParamValue, piChannelIndexParamValue, eDataSetTypeParamValue, dfNodataValueParamValue, pProssiInfoParamValue);
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

	protected  long getRasterDataset_void_callback()
	{
		com.earthview.world.spatial.geodataset.Irasterdataset returnValue = getRasterDataset();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRasterDataset_void(long pNativeObject);
	/**
	 * 返回一个与Layer相关联的数据集
	 * @return 栅格数据集
	 */
	public com.earthview.world.spatial.geodataset.Irasterdataset getRasterDataset()
	{
		long returnValue = getRasterDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Irasterdataset __returnValue = new com.earthview.world.spatial.geodataset.Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate, "IRasterDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Irasterdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterDataset");
		}
		return __returnValue;
	}
	native private long getRasterDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Irasterdataset getRasterDataset_NoVirtual()
	{
		long returnValue = getRasterDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Irasterdataset __returnValue = new com.earthview.world.spatial.geodataset.Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate, "IRasterDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Irasterdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterDataset");
		}
		return __returnValue;
	}

	native private int getRedIndex_void(long pNativeObject);
	/// <summray>
	/// 获取R通道的波段索引
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
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

	native private int getGreenIndex_void(long pNativeObject);
	/// <summray>
	///获取G通道的波段索引
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
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

	native private int getBlueIndex_void(long pNativeObject);
	/// <summray>
	/// 获取B通道的波段索引
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
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

	native private void setResampleType_ev_int32(long pNativeObject, int resampleIndex);
	/// <summray>
	/// 设置栅格图层的重采样方式
	/// </summary>
	///<param name="resampleIndex">重采样方式索引</param>
	/// <returns></returns>
	public void setResampleType(int resampleIndex)
	{
		int resampleIndexParamValue = resampleIndex;
		setResampleType_ev_int32(this.nativeObject.pointer, resampleIndexParamValue);
	}
	native private int getResampleType_void(long pNativeObject);
	/// <summray>
	/// 获取栅格图层的重采样方式
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public int getResampleType()
	{
		int returnValue = getResampleType_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RasterLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
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
		super.getPixelValue_NoVirtual(dfX, dfY, dfRValue, dfGValue, dfBValue);
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
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
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
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getRasterDataset_void(long pNativeObject, String method);
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
			this.register_getRasterDataset_void(this.nativeObject.pointer, "getRasterDataset_void_callback");
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
	
	public static RasterLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterLayer obj = null;
 		if(baseObj instanceof RasterLayer)
		{
			obj = (RasterLayer)baseObj;
		} else {
			obj = new RasterLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
