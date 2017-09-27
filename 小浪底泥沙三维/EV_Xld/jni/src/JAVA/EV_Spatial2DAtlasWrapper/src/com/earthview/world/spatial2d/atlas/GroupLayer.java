package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GroupLayer extends com.earthview.world.spatial.atlas.Igrouplayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CGroupLayer", new GroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCGroupLayerProxy", new GroupLayerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GroupLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGroupLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.GroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层类型
	 * @param  
	 * @return 图层类型
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
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
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
	 * 设置图层的名称
	 * @param name 图层名称
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
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
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
	 * 设置图层的描述信息
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
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
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
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
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
	 * 设置图层是否正在编辑
	 * @param editing 如果为true,则设置图层正在编辑,反之则否
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
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
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
	 * 设置图层是否可视
	 * @param visible 如果为true,则图层可视,反之则否
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
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
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

	protected  boolean isSelected_void_callback()
	{
		boolean returnValue = isSelected();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 判断图层是否支持选择
	 * @param  
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelected_void_NoVirtual(long pNativeObject);
	protected boolean isSelected_NoVirtual()
	{
		boolean returnValue = isSelected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSelected_ev_bool_callback(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelected(selectedParamValue);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean selected);
	/**
	 * 设置图层是否支持选择
	 * @param selectable 是否可选
	 */
	public void setSelected(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelected_ev_bool(this.nativeObject.pointer, selectedParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean selected);
	protected void setSelected_NoVirtual(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, selectedParamValue);
	}

	native private boolean ignoreScale_void(long pNativeObject);
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
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
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
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
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
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

	native private void setDisplayMaxScale_ev_real64(long pNativeObject, double value);
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double value)
	{
		double valueParamValue = value;
		setDisplayMaxScale_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDisplayMaxScale_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setDisplayMaxScale_NoVirtual(double value)
	{
		double valueParamValue = value;
		setDisplayMaxScale_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getDisplayMinScale_void(long pNativeObject);
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
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

	native private void setDisplayMinScale_ev_real64(long pNativeObject, double value);
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double value)
	{
		double valueParamValue = value;
		setDisplayMinScale_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDisplayMinScale_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setDisplayMinScale_NoVirtual(double value)
	{
		double valueParamValue = value;
		setDisplayMinScale_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取图层的坐标系统
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

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
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
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
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
	 * 图层的复制,内存外部释放
	 * @param sr 参考坐标系
	 * @return 图层
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
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
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

	native private void add_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 添加图层
	 * @param layer 待添加的图层
	 */
	public void add(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		add_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void add_ILayer_NoVirtual(long pNativeObject, long ref_layer);
	protected void add_NoVirtual(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		add_ILayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
	}

	native private void insert_ev_uint32_ILayer(long pNativeObject, long index, long ref_layer);
	/**
	 * 插入图层
	 * @param index 图层插入的位置
	 * @param layer 待插入的图层
	 */
	public void insert(long index, com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		insert_ev_uint32_ILayer(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
	}
	native private void insert_ev_uint32_ILayer_NoVirtual(long pNativeObject, long index, long ref_layer);
	protected void insert_NoVirtual(long index, com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		insert_ev_uint32_ILayer_NoVirtual(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
	}

	native private long remove_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的图层
	 * @param index 待删除图层的索引
	 */
	public com.earthview.world.spatial.atlas.Ilayer remove(long index)
	{
		long indexParamValue = index;
		long returnValue = remove_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long remove_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.atlas.Ilayer remove_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = remove_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private void removeAll_void(long pNativeObject);
	/**
	 * 删除所有的图层
	 * @param  
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void move_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动图层
	 * @param oldIndex 图层原来的索引
	 * @param newIndex 目标索引
	 */
	public void move(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		move_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void move_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long oldIndex, long newIndex);
	protected void move_NoVirtual(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		move_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 图层个数
	 * @param  
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCount_void_NoVirtual(long pNativeObject);
	protected long getCount_NoVirtual()
	{
		long returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的图层
	 * @param index 索引
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.atlas.Ilayer getLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private long getRelatedLayer_IDataset(long pNativeObject, long dataset);
	/**
	 * 获取与指定数据集相关联的图层
	 * @param dataset 数据集
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getRelatedLayer(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long returnValue = getRelatedLayer_IDataset(this.nativeObject.pointer, datasetParamValue);
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
	native private long getRelatedLayer_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected com.earthview.world.spatial.atlas.Ilayer getRelatedLayer_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long returnValue = getRelatedLayer_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
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

	native private long getDataset_IDataSource_EVString(long pNativeObject, long ds, String name);
	/**
	 * 获取指定名字并且在指定数据源ds中的数据集
	 * @param ds 数据源
	 * @param name 数据集的名称
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset(com.earthview.world.spatial.geodataset.Idatasource ds, String name)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = getDataset_IDataSource_EVString(this.nativeObject.pointer, dsParamValue, nameParamValue);
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
	native private long getDataset_IDataSource_EVString_NoVirtual(long pNativeObject, long ds, String name);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ds, String name)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = getDataset_IDataSource_EVString_NoVirtual(this.nativeObject.pointer, dsParamValue, nameParamValue);
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

	native private long indexOfLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 图层的索引
	 * @param layer 图层
	 * @return 索引
	 */
	public long indexOfLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = indexOfLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long indexOfLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected long indexOfLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long returnValue = indexOfLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	native private boolean isExist_ILayer(long pNativeObject, long layer);
	/**
	 * 判断图层是否被包含
	 * @param layer 图层
	 * @return 如果存在则返回true,反之则否
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isExist_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean isExist_ILayer_NoVirtual(long pNativeObject, long layer);
	protected boolean isExist_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isExist_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/// ev_void getAllDataLayers(list<ILayer*>& layers, ev_bool isContainUnvisLayer = false) const;
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

	public GroupLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GroupLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
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
	
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_add_ILayer(long pNativeObject, String method);
	native protected void register_insert_ev_uint32_ILayer(long pNativeObject, String method);
	native protected void register_remove_ev_uint32(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_move_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_getRelatedLayer_IDataset(long pNativeObject, String method);
	native protected void register_getDataset_IDataSource_EVString(long pNativeObject, String method);
	native protected void register_indexOfLayer_ILayer(long pNativeObject, String method);
	native protected void register_isExist_ILayer(long pNativeObject, String method);
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
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_add_ILayer(this.nativeObject.pointer, "add_ILayer_callback");
			this.register_insert_ev_uint32_ILayer(this.nativeObject.pointer, "insert_ev_uint32_ILayer_callback");
			this.register_remove_ev_uint32(this.nativeObject.pointer, "remove_ev_uint32_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_move_ev_uint32_ev_uint32(this.nativeObject.pointer, "move_ev_uint32_ev_uint32_callback");
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getLayer_ev_uint32(this.nativeObject.pointer, "getLayer_ev_uint32_callback");
			this.register_getRelatedLayer_IDataset(this.nativeObject.pointer, "getRelatedLayer_IDataset_callback");
			this.register_getDataset_IDataSource_EVString(this.nativeObject.pointer, "getDataset_IDataSource_EVString_callback");
			this.register_indexOfLayer_ILayer(this.nativeObject.pointer, "indexOfLayer_ILayer_callback");
			this.register_isExist_ILayer(this.nativeObject.pointer, "isExist_ILayer_callback");
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
	
	public static GroupLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GroupLayer obj = null;
 		if(baseObj instanceof GroupLayer)
		{
			obj = (GroupLayer)baseObj;
		} else {
			obj = new GroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGroupLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
