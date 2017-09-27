package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络要素集图层
 */
public class NetworkLayer extends com.earthview.world.spatial.atlas.Ilayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CNetworkLayer", new NetworkLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCNetworkLayerProxy", new NetworkLayerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public NetworkLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCNetworkLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.NetworkLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层类型
	 * @param  
	 * @return 返回图层类型
	 */
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
	/**
	 * 获取图层名称
	 * @param  
	 * @return 返回图层名称
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

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置图层名称
	 * @param name 图层名
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

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取图层描述信息
	 * @param  
	 * @return 返回描述信息
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

	native private void setDescription_EVString(long pNativeObject, String value);
	/**
	 * 设置图层描述信息
	 * @param value 描述信息
	 */
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
	/**
	 * 图层是否可编辑
	 * @param  
	 * @return 如果图层可以编辑，返回true；否则，返回false（图层不能被编辑，返回false）
	 */
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
	/**
	 * 图层是否正在编辑
	 * @param  
	 * @return 如果图层正在编辑，返回true；否则，返回false（图层不能被编辑，返回false）
	 */
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
	/**
	 * 设置图层编辑状态（无效）
	 * @param editing 是否编辑
	 */
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
	/**
	 * 图层是否可见
	 * @param  
	 * @return 如果图层可见，返回true；否则，返回false
	 */
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
	/**
	 * 设置图层可见性
	 * @param editing 可见性
	 */
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
	/**
	 * 图层是否有效
	 * @param  
	 * @return 如果图层有效，返回true；否则，返回false
	 */
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
	/**
	 * 图层要素是否可选
	 * @param  
	 * @return 如果可选，返回true；否则，返回false
	 */
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
	/**
	 * 设置图层可选性
	 * @param editing 可见性
	 */
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
	/**
	 * 图层是否忽略其设置的最大最小比例尺范围进行显示
	 * @param  
	 * @return 如果是，返回true；否则，返回false
	 */
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
	/**
	 * 设置图层是否忽略其设置的最大最小比例尺范围进行显示
	 * @param bIgnore true为忽略，false为按比例次范围进行约束显示
	 */
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
	/**
	 * 获取图层显示的最大比例尺
	 * @param  
	 * @return 返回最大比例尺
	 */
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
	/**
	 * 设置图层显示的最大比例尺
	 * @param scale 最大比例尺
	 */
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
	/**
	 * 获取图层显示的最小比例尺
	 * @param  
	 * @return 返回最小比例尺
	 */
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
	/**
	 * 设置图层显示的最小比例尺
	 * @param scale 最小比例尺
	 */
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

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取图层空间参考信息
	 * @param  
	 * @return 返回空间参考信息
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

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置图层空间参考信息
	 * @param sr 空间参考信息
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long ref_sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_srParamValue);
	}

	native private long getExtent_void(long pNativeObject);
	/**
	 * 获取图层范围
	 * @param  
	 * @return 返回图层范围
	 */
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
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 * @return 绘制成功，返回true；否则返回false
	 */
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
	/**
	 * 克隆图层
	 * @param  
	 * @return 返回复制后的图层
	 */
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 输出为流
	 * @param stream 输出参数
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素恢复图层
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将图层输出为xml元素
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

	native private long getDataset_void(long pNativeObject);
	/**
	 * /获取要素集/
	 * @param  
	 * @return 返回要素集
	 */
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

	protected  void setDateset_IDataset_callback(long ref_dataset)
	{
		com.earthview.world.spatial.geodataset.Idataset ref_datasetParamValue = (ref_dataset == 0L ? null : new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_datasetParamValue != null)
		{
		ref_datasetParamValue.setDelegate(true);
		ref_datasetParamValue.setInstancePointer(new InstancePointer(ref_dataset));
		IClassFactory ref_datasetParamValueClassFactory = GlobalClassFactoryMap.get(ref_datasetParamValue.getCppInstanceTypeName());
		if (ref_datasetParamValueClassFactory != null)
		{
			ref_datasetParamValue.setDelegate(true);
			ref_datasetParamValue = (com.earthview.world.spatial.geodataset.Idataset)ref_datasetParamValueClassFactory.create();
			ref_datasetParamValue.setDelegate(true);
			ref_datasetParamValue.setInstancePointer(new InstancePointer(ref_dataset));
		}
		}
		setDateset(ref_datasetParamValue);
	}

	native private void setDateset_IDataset(long pNativeObject, long ref_dataset);
	/**
	 * 设置要素集
	 * @param dataset 要素集
	 */
	public void setDateset(com.earthview.world.spatial.geodataset.Idataset ref_dataset)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		setDateset_IDataset(this.nativeObject.pointer, ref_datasetParamValue);
	}
	native private void setDateset_IDataset_NoVirtual(long pNativeObject, long ref_dataset);
	protected void setDateset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset ref_dataset)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		setDateset_IDataset_NoVirtual(this.nativeObject.pointer, ref_datasetParamValue);
	}

	protected  String getDisplayField_void_callback()
	{
		String returnValue = getDisplayField();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDisplayField_void(long pNativeObject);
	/**
	 * 获取显示字段名
	 * @param  
	 * @return 返回字段名
	 */
	public String getDisplayField()
	{
		String returnValue = getDisplayField_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDisplayField_void_NoVirtual(long pNativeObject);
	protected String getDisplayField_NoVirtual()
	{
		String returnValue = getDisplayField_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDisplayField_EVString_callback(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		setDisplayField(fieldNameParamValue);
	}

	native private void setDisplayField_EVString(long pNativeObject, String fieldName);
	/**
	 * 设置显示字段
	 * @param fieldName 显示字段
	 */
	public void setDisplayField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		setDisplayField_EVString(this.nativeObject.pointer, fieldNameParamValue);
	}
	native private void setDisplayField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected void setDisplayField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		setDisplayField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
	}

	protected  long getTheme_void_callback()
	{
		com.earthview.world.spatial.theme.Itheme returnValue = getTheme();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTheme_void(long pNativeObject);
	/**
	 * 获取专题图信息（无效）
	 * @param  
	 * @return 返回专题图信息
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		long returnValue = getTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getTheme_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme getTheme_NoVirtual()
	{
		long returnValue = getTheme_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	protected  void setTheme_ITheme_callback(long theme)
	{
		com.earthview.world.spatial.theme.Itheme themeParamValue = (theme == 0L ? null : new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate));
		if(themeParamValue != null)
		{
		themeParamValue.setDelegate(true);
		themeParamValue.setInstancePointer(new InstancePointer(theme));
		IClassFactory themeParamValueClassFactory = GlobalClassFactoryMap.get(themeParamValue.getCppInstanceTypeName());
		if (themeParamValueClassFactory != null)
		{
			themeParamValue.setDelegate(true);
			themeParamValue = (com.earthview.world.spatial.theme.Itheme)themeParamValueClassFactory.create();
			themeParamValue.setDelegate(true);
			themeParamValue.setInstancePointer(new InstancePointer(theme));
		}
		}
		setTheme(themeParamValue);
	}

	native private void setTheme_ITheme(long pNativeObject, long theme);
	/**
	 * 设置专题图信息（无效）
	 * @param theme 专题图信息
	 */
	public void setTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setTheme_ITheme(this.nativeObject.pointer, themeParamValue);
	}
	native private void setTheme_ITheme_NoVirtual(long pNativeObject, long theme);
	protected void setTheme_NoVirtual(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setTheme_ITheme_NoVirtual(this.nativeObject.pointer, themeParamValue);
	}

	protected  boolean isShowTip_void_callback()
	{
		boolean returnValue = isShowTip();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isShowTip_void(long pNativeObject);
	/**
	 * 获取是否显示提示
	 * @param  
	 */
	public boolean isShowTip()
	{
		boolean returnValue = isShowTip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowTip_void_NoVirtual(long pNativeObject);
	protected boolean isShowTip_NoVirtual()
	{
		boolean returnValue = isShowTip_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setShowTip_ev_bool_callback(boolean show)
	{
		boolean showParamValue = show;
		setShowTip(showParamValue);
	}

	native private void setShowTip_ev_bool(long pNativeObject, boolean show);
	/**
	 * 设置是否显示提示
	 * @param show 是否显示
	 */
	public void setShowTip(boolean show)
	{
		boolean showParamValue = show;
		setShowTip_ev_bool(this.nativeObject.pointer, showParamValue);
	}
	native private void setShowTip_ev_bool_NoVirtual(long pNativeObject, boolean show);
	protected void setShowTip_NoVirtual(boolean show)
	{
		boolean showParamValue = show;
		setShowTip_ev_bool_NoVirtual(this.nativeObject.pointer, showParamValue);
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 图层选择（无效）
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}
	native private void select_IQueryFilter_EVSelectionResultType_NoVirtual(long pNativeObject, long filter, int type);
	protected void select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType_NoVirtual(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getLayerSelection_void(long pNativeObject);
	/**
	 * 获取图层选择（无效）
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		long returnValue = getLayerSelection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private long getLayerSelection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection_NoVirtual()
	{
		long returnValue = getLayerSelection_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/**
	 * 设置图层图层显示透明度
	 * @param transparent 图层显示透明度
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
	 * 获取图层图层显示透明度
	 * @param  
	 * @return 返回图层显示透明度
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

	native private void setJunctionVisible_ev_bool(long pNativeObject, boolean bVisible);
	/**
	 * 设置交点可见性
	 * @param bVisible 交点是否可见
	 */
	public void setJunctionVisible(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setJunctionVisible_ev_bool(this.nativeObject.pointer, bVisibleParamValue);
	}
	native private boolean isJunctionVisible_void(long pNativeObject);
	/**
	 * 获取交点是否可见
	 * @param  
	 * @return 如果可见，返回true；否则，返回false
	 */
	public boolean isJunctionVisible()
	{
		boolean returnValue = isJunctionVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEdgeVisible_ev_bool(long pNativeObject, boolean bVisible);
	/**
	 * 设置边可见性
	 * @param bVisible 边是否可见
	 */
	public void setEdgeVisible(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setEdgeVisible_ev_bool(this.nativeObject.pointer, bVisibleParamValue);
	}
	native private boolean isEdgeVisible_void(long pNativeObject);
	/**
	 * 获取边是否可见
	 * @param  
	 * @return 如果可见，返回true；否则，返回false
	 */
	public boolean isEdgeVisible()
	{
		boolean returnValue = isEdgeVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setJunctionTheme_ITheme(long pNativeObject, long theme);
	/**
	 * 设置交点显示的专题图
	 * @param bVisible 交点专题图
	 */
	public void setJunctionTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setJunctionTheme_ITheme(this.nativeObject.pointer, themeParamValue);
	}
	native private long getJunctionTheme_void(long pNativeObject);
	/**
	 * 获取交点专题图
	 * @param  
	 * @return 返回交点专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getJunctionTheme()
	{
		long returnValue = getJunctionTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private void setEdgeTheme_ITheme(long pNativeObject, long theme);
	/**
	 * 设置边专题图
	 * @param bVisible 边专题图
	 */
	public void setEdgeTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setEdgeTheme_ITheme(this.nativeObject.pointer, themeParamValue);
	}
	native private long getEdgeTheme_void(long pNativeObject);
	/**
	 * 获取边专题图
	 * @param  
	 * @return 返回边专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getEdgeTheme()
	{
		long returnValue = getEdgeTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流构建图层
	 * @param stream 流
	 */
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

	public NetworkLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NetworkLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	
	native protected void register_setDateset_IDataset(long pNativeObject, String method);
	native protected void register_getDisplayField_void(long pNativeObject, String method);
	native protected void register_setDisplayField_EVString(long pNativeObject, String method);
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_setTheme_ITheme(long pNativeObject, String method);
	native protected void register_isShowTip_void(long pNativeObject, String method);
	native protected void register_setShowTip_ev_bool(long pNativeObject, String method);
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
			this.register_setDateset_IDataset(this.nativeObject.pointer, "setDateset_IDataset_callback");
			this.register_getDisplayField_void(this.nativeObject.pointer, "getDisplayField_void_callback");
			this.register_setDisplayField_EVString(this.nativeObject.pointer, "setDisplayField_EVString_callback");
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_setTheme_ITheme(this.nativeObject.pointer, "setTheme_ITheme_callback");
			this.register_isShowTip_void(this.nativeObject.pointer, "isShowTip_void_callback");
			this.register_setShowTip_ev_bool(this.nativeObject.pointer, "setShowTip_ev_bool_callback");
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
	
	public static NetworkLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NetworkLayer obj = null;
 		if(baseObj instanceof NetworkLayer)
		{
			obj = (NetworkLayer)baseObj;
		} else {
			obj = new NetworkLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNetworkLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
