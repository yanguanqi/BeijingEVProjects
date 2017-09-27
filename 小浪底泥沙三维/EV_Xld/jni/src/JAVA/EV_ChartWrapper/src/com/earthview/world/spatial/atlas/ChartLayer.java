package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图图层类
 */
public class ChartLayer extends com.earthview.world.spatial.atlas.Ichartlayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CChartLayer", new ChartLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JCChartLayerProxy", new ChartLayerClassFactory());
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 按条件选择要素
	 * @param filter 查询条件
	 * @param type 操作类型
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
	 * 清除选择
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
	 * 获取图层选择集
	 * @return 图层选择集对象指针，不需释放
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层类型
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

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取关联数据集
	 * @return 关联数据集对象指针，不需释放
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取图层名称
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
	 * 设置图层名称
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
	 * 获取图层描述据
	 * @return 图层描述
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
	 * 设置图层描述
	 * @param value 图层描述
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
	 * 是否可编辑
	 * @return false：不可编辑，恒定值
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
	 * 是否正在编辑，与接口一致，无实际操作
	 * @return true表示正在编辑/false表示未在编辑
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
	 * 设置编辑,与接口一致，无实际操作
	 * @param editing true开始编辑/flase结束编辑
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

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 获取图层是否可用
	 * @return true表示图层可用/false表示不可用
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

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/**
	 * 设置图层透明度
	 * @param transparent 图层透明度
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
	 * 获取图层透明度
	 * @return 图层透明度
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

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 查询全图层是否可见
	 * @return true表示全图层可见/false表示全图层不可见
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
	 * 设置全图层是否可见
	 * @param visible true可见/false不可见
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

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 查询全图层是否可选
	 * @return true表示全图层可选/false表示全图层不可选
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
	 * 设置全图层是否可选
	 * @param selected 是否可选
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
	 * 查询是否忽略比例尺
	 * @return 是否忽略比例尺
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
	 * 设置是否忽略比例尺
	 * @param bIgnore 是否忽略比例尺
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
	 * @return 最大显示比例尺
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
	 * 设置最大显示比例尺
	 * @param scale 最大显示比例尺
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
	 * 获取最小显示比例尺
	 * @return 最小显示比例尺
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
	 * 设置最小显示比例尺
	 * @param scale 最小显示比例尺
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
	 * 获取图层显示空间坐标系
	 * @return 坐标参考对象的指针，不需释放
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
	 * 设置图层显示空间坐标系
	 * @param sr 图层显示空间坐标系
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
	 * 获取全图层范围
	 * @return 全图层范围，外部释放
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
	 * 渲染
	 * @param display 关联设备
	 * @param type 渲染类型
	 * @return 成功渲染返回true
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

	native private long getObjectClassNum_void(long pNativeObject);
	/**
	 * 获取此图层物标类数目
	 * @return 图层所含物标类数目
	 */
	public long getObjectClassNum()
	{
		long returnValue = getObjectClassNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getObjectClassNum_void_NoVirtual(long pNativeObject);
	protected long getObjectClassNum_NoVirtual()
	{
		long returnValue = getObjectClassNum_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getObjectClassName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取物标类名称
	 * @param index 索引
	 * @return 物标类名称
	 */
	public String getObjectClassName(long index)
	{
		long indexParamValue = index;
		String returnValue = getObjectClassName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getObjectClassName_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getObjectClassName_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getObjectClassName_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private int getObjectClassType_EVString(long pNativeObject, String name);
	/**
	 * 获取某物标类的类型
	 * @param name 物标类名称
	 * @return 物标类型代码
	 */
	public int getObjectClassType(String name)
	{
		String nameParamValue = name;
		int returnValue = getObjectClassType_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private int getObjectClassType_EVString_NoVirtual(long pNativeObject, String name);
	protected int getObjectClassType_NoVirtual(String name)
	{
		String nameParamValue = name;
		int returnValue = getObjectClassType_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private void setClassVisible_ev_uint32_ev_bool(long pNativeObject, long index, boolean value);
	/**
	 * 设置某一物标类的可见性
	 * @param index 物标类索引
	 * @param value true可见/false不可见
	 */
	public void setClassVisible(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassVisible_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private void setClassVisible_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean value);
	protected void setClassVisible_NoVirtual(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassVisible_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}

	native private void setClassVisible_EVString_ev_bool(long pNativeObject, String name, boolean value);
	/**
	 * 设置某一物标类的可见性
	 * @param name 物标类名称
	 * @param value true可见/false不可见
	 */
	public void setClassVisible(String name, boolean value)
	{
		String nameParamValue = name;
		boolean valueParamValue = value;
		setClassVisible_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, valueParamValue);
	}
	native private void setClassVisible_EVString_ev_bool_NoVirtual(long pNativeObject, String name, boolean value);
	protected void setClassVisible_NoVirtual(String name, boolean value)
	{
		String nameParamValue = name;
		boolean valueParamValue = value;
		setClassVisible_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, valueParamValue);
	}

	native private boolean isClassVisible_ev_uint32(long pNativeObject, long index);
	/**
	 * 查询某一物标类是否可见
	 * @param index 物标类索引
	 * @return true表示该类物体可见/false表示该类物体不可见
	 */
	public boolean isClassVisible(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassVisible_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean isClassVisible_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean isClassVisible_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassVisible_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private boolean isClassVisible_EVString(long pNativeObject, String name);
	/**
	 * 设置某物标类是否可见
	 * @param name 物标类名称
	 * @return true表示该物标类可见/false表示该类物体不可见
	 */
	public boolean isClassVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean isClassVisible_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean isClassVisible_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassVisible_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private void setClassSelected_ev_uint32_ev_bool(long pNativeObject, long index, boolean value);
	/**
	 * 设置某物标类是否可选
	 * @param index 索引
	 * @param value true可选/false不可选
	 */
	public void setClassSelected(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassSelected_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private void setClassSelected_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean value);
	protected void setClassSelected_NoVirtual(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassSelected_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}

	native private boolean isClassSelected_ev_uint32(long pNativeObject, long index);
	/**
	 * 查询某物标类是否可选
	 * @param index 物标类索引
	 * @return true表示该类物体可选/false表示该类物体不可选
	 */
	public boolean isClassSelected(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassSelected_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean isClassSelected_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean isClassSelected_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassSelected_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private boolean isClassSelected_EVString(long pNativeObject, String name);
	/**
	 * 查询某物标类是否可选
	 * @param name 物标类名称
	 * @return true表示该类物体可选/false表示该类物体不可选
	 */
	public boolean isClassSelected(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassSelected_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean isClassSelected_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean isClassSelected_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassSelected_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private void setDataset_IDataset(long pNativeObject, long ref_dataset);
	/**
	 * 设置关联的数据集
	 * @param pDataset 关联数据集
	 */
	public void setDataset(com.earthview.world.spatial.geodataset.Idataset ref_dataset)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		setDataset_IDataset(this.nativeObject.pointer, ref_datasetParamValue);
	}
	native private void setDataset_IDataset_NoVirtual(long pNativeObject, long ref_dataset);
	protected void setDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset ref_dataset)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		setDataset_IDataset_NoVirtual(this.nativeObject.pointer, ref_datasetParamValue);
	}

	native private long getOptionRef_void(long pNativeObject);
	/**
	 * 获取关联的条件对象
	 * @return 本图层条件对象指针
	 */
	public com.earthview.world.spatial.display.Ichartoption getOptionRef()
	{
		long returnValue = getOptionRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ichartoption __returnValue = new com.earthview.world.spatial.display.Ichartoption(CreatedWhenConstruct.CWC_NotToCreate, "IChartOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ichartoption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IChartOption");
		}
		return __returnValue;
	}
	native private long getOptionRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ichartoption getOptionRef_NoVirtual()
	{
		long returnValue = getOptionRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ichartoption __returnValue = new com.earthview.world.spatial.display.Ichartoption(CreatedWhenConstruct.CWC_NotToCreate, "IChartOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ichartoption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IChartOption");
		}
		return __returnValue;
	}

	native private void setEnvironment_IChartOption(long pNativeObject, long uniformOption);
	/**
	 * 设置环境变量
	 * @param uniformOption 操作参数
	 */
	public void setEnvironment(com.earthview.world.spatial.display.Ichartoption uniformOption)
	{
		long uniformOptionParamValue = (uniformOption == null ? 0L : uniformOption.nativeObject.pointer);
		setEnvironment_IChartOption(this.nativeObject.pointer, uniformOptionParamValue);
	}
	native private void setEnvironment_IChartOption_NoVirtual(long pNativeObject, long uniformOption);
	protected void setEnvironment_NoVirtual(com.earthview.world.spatial.display.Ichartoption uniformOption)
	{
		long uniformOptionParamValue = (uniformOption == null ? 0L : uniformOption.nativeObject.pointer);
		setEnvironment_IChartOption_NoVirtual(this.nativeObject.pointer, uniformOptionParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果的指针
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

	native private String toXML_void(long pNativeObject);
	/**
	 * /将当前layer输出成xml流/
	 * @return 描述当前layer的xml流
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从EarthView::World::Core::CXmlElement解析成layer
	 * @param element 描述layer的xml结点对象
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
	 * 将当前layer输出成EarthView::World::Core::CXmlElement对象
	 * @return 描述当前layer的EarthView::World::Core::CXmlElement对象
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

	native private void setClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String className, double scale);
	/**
	 * 设置某一物标类最小显示比例尺
	 * @param className 物标类名称
	 * @param scale 比例尺
	 */
	public void setClassDisplayMinScale(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMinScale_EVString_ev_real64(this.nativeObject.pointer, classNameParamValue, scaleParamValue);
	}
	native private void setClassDisplayMinScale_EVString_ev_real64_NoVirtual(long pNativeObject, String className, double scale);
	protected void setClassDisplayMinScale_NoVirtual(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMinScale_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, classNameParamValue, scaleParamValue);
	}

	native private boolean getClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String className, long minScale);
	/**
	 * 获取某一物标类的最小显示比例尺
	 * @param className 物标类名称
	 * @param minScale 最小显示比例尺
	 * @return 设置了该物标类的显示比例尺,返回true,否则，返回false
	 */
	public boolean getClassDisplayMinScale(String className, DoublePointer minScale)
	{
		String classNameParamValue = className;
		long minScaleParamValue = minScale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMinScale_EVString_ev_real64(this.nativeObject.pointer, classNameParamValue, minScaleParamValue);
		return returnValue;
	}
	native private boolean getClassDisplayMinScale_EVString_ev_real64_NoVirtual(long pNativeObject, String className, long minScale);
	protected boolean getClassDisplayMinScale_NoVirtual(String className, DoublePointer minScale)
	{
		String classNameParamValue = className;
		long minScaleParamValue = minScale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMinScale_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, classNameParamValue, minScaleParamValue);
		return returnValue;
	}

	native private void setClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String className, double scale);
	/**
	 * 设置某一物标类的最大显示比例尺
	 * @param className 物标类名称
	 * @param scale 比例尺
	 */
	public void setClassDisplayMaxScale(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMaxScale_EVString_ev_real64(this.nativeObject.pointer, classNameParamValue, scaleParamValue);
	}
	native private void setClassDisplayMaxScale_EVString_ev_real64_NoVirtual(long pNativeObject, String className, double scale);
	protected void setClassDisplayMaxScale_NoVirtual(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMaxScale_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, classNameParamValue, scaleParamValue);
	}

	native private boolean getClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String className, long maxScale);
	/**
	 * 获取某一物标类的最大显示比例尺
	 * @param className 物标类名称
	 * @param maxScale 最大显示比例尺
	 * @return 设置了该物标类的显示比例尺，返回true,否则，返回false
	 */
	public boolean getClassDisplayMaxScale(String className, DoublePointer maxScale)
	{
		String classNameParamValue = className;
		long maxScaleParamValue = maxScale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMaxScale_EVString_ev_real64(this.nativeObject.pointer, classNameParamValue, maxScaleParamValue);
		return returnValue;
	}
	native private boolean getClassDisplayMaxScale_EVString_ev_real64_NoVirtual(long pNativeObject, String className, long maxScale);
	protected boolean getClassDisplayMaxScale_NoVirtual(String className, DoublePointer maxScale)
	{
		String classNameParamValue = className;
		long maxScaleParamValue = maxScale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMaxScale_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, classNameParamValue, maxScaleParamValue);
		return returnValue;
	}

	native private void setClassIgnoreScale_EVString_ev_bool(long pNativeObject, String className, boolean classIgnore);
	/**
	 * 设置图层中某一物标类是否忽略比例尺显示
	 * @param className 物标类名称
	 * @param classIgnore 物标类忽略比例尺状态
	 */
	public void setClassIgnoreScale(String className, boolean classIgnore)
	{
		String classNameParamValue = className;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale_EVString_ev_bool(this.nativeObject.pointer, classNameParamValue, classIgnoreParamValue);
	}
	native private void setClassIgnoreScale_EVString_ev_bool_NoVirtual(long pNativeObject, String className, boolean classIgnore);
	protected void setClassIgnoreScale_NoVirtual(String className, boolean classIgnore)
	{
		String classNameParamValue = className;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, classNameParamValue, classIgnoreParamValue);
	}

	native private boolean getClassIgnoreScale_EVString(long pNativeObject, String className);
	/**
	 * 获取某一物标类是否忽略比例尺显示
	 * @param className 物标类名称
	 * @return 忽略比例尺返回true,否知返回false
	 */
	public boolean getClassIgnoreScale(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getClassIgnoreScale_EVString(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}
	native private boolean getClassIgnoreScale_EVString_NoVirtual(long pNativeObject, String className);
	protected boolean getClassIgnoreScale_NoVirtual(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getClassIgnoreScale_EVString_NoVirtual(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}

	native private void setClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, long index, double scale);
	/**
	 * 按索引号设置该索引下的物标类的最小可见比例尺
	 * @param index 物标索引号
	 * @param scale 比例尺分母
	 */
	public void setClassDisplayMinScale(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMinScale_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}
	native private void setClassDisplayMinScale_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long index, double scale);
	protected void setClassDisplayMinScale_NoVirtual(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMinScale_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}

	native private boolean getClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, long index, long scale);
	/**
	 * 根据索引号获取最小显示比例尺
	 * @param index 索引号
	 * @param scale 比例尺分母
	 * @return 是否忽略比例尺显示，如果忽略，返回true,否则返回false
	 */
	public boolean getClassDisplayMinScale(long index, DoublePointer scale)
	{
		long indexParamValue = index;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMinScale_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, scaleParamValue);
		return returnValue;
	}
	native private boolean getClassDisplayMinScale_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long index, long scale);
	protected boolean getClassDisplayMinScale_NoVirtual(long index, DoublePointer scale)
	{
		long indexParamValue = index;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMinScale_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, indexParamValue, scaleParamValue);
		return returnValue;
	}

	native private void setClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, long index, double scale);
	/**
	 * 按索引号设置该索引下的物标类的最大可见比例尺
	 * @param index 索引号
	 * @param scale 比例尺
	 */
	public void setClassDisplayMaxScale(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMaxScale_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}
	native private void setClassDisplayMaxScale_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long index, double scale);
	protected void setClassDisplayMaxScale_NoVirtual(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMaxScale_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, indexParamValue, scaleParamValue);
	}

	native private boolean getClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, long index, long scale);
	/**
	 * 根据索引号获取最大显示比例尺
	 * @param index 索引号
	 * @param scale 比例尺
	 * @return 是否忽略比例尺显示，如果忽略，返回true，否则返回false
	 */
	public boolean getClassDisplayMaxScale(long index, DoublePointer scale)
	{
		long indexParamValue = index;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMaxScale_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, scaleParamValue);
		return returnValue;
	}
	native private boolean getClassDisplayMaxScale_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long index, long scale);
	protected boolean getClassDisplayMaxScale_NoVirtual(long index, DoublePointer scale)
	{
		long indexParamValue = index;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = getClassDisplayMaxScale_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, indexParamValue, scaleParamValue);
		return returnValue;
	}

	native private void setClassIgnoreScale_ev_uint32_ev_bool(long pNativeObject, long index, boolean classIgnore);
	/**
	 * 按索引号设置该索引下是否忽略比例尺显示
	 * @param index 索引
	 * @param classIgnore 是否忽略比例尺
	 */
	public void setClassIgnoreScale(long index, boolean classIgnore)
	{
		long indexParamValue = index;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale_ev_uint32_ev_bool(this.nativeObject.pointer, indexParamValue, classIgnoreParamValue);
	}
	native private void setClassIgnoreScale_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long index, boolean classIgnore);
	protected void setClassIgnoreScale_NoVirtual(long index, boolean classIgnore)
	{
		long indexParamValue = index;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, indexParamValue, classIgnoreParamValue);
	}

	native private boolean getClassIgnoreScale_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引号获取是否忽略比例尺显示
	 * @param index 索引号
	 * @return 忽略比例尺返回true,否知返回false
	 */
	public boolean getClassIgnoreScale(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getClassIgnoreScale_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean getClassIgnoreScale_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean getClassIgnoreScale_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getClassIgnoreScale_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void setUseChartClassControl_EVString_ev_bool(long pNativeObject, String className, boolean IsUse);
	public void setUseChartClassControl(String className, boolean IsUse)
	{
		String classNameParamValue = className;
		boolean IsUseParamValue = IsUse;
		setUseChartClassControl_EVString_ev_bool(this.nativeObject.pointer, classNameParamValue, IsUseParamValue);
	}
	native private void setUseChartClassControl_EVString_ev_bool_NoVirtual(long pNativeObject, String className, boolean IsUse);
	protected void setUseChartClassControl_NoVirtual(String className, boolean IsUse)
	{
		String classNameParamValue = className;
		boolean IsUseParamValue = IsUse;
		setUseChartClassControl_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, classNameParamValue, IsUseParamValue);
	}

	native private boolean getUseChartClassControl_EVString(long pNativeObject, String className);
	public boolean getUseChartClassControl(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControl_EVString(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}
	native private boolean getUseChartClassControl_EVString_NoVirtual(long pNativeObject, String className);
	protected boolean getUseChartClassControl_NoVirtual(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControl_EVString_NoVirtual(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}

	native private void setChartClassControlSize_EVString_ev_uint32(long pNativeObject, String className, long sizeFactor);
	public void setChartClassControlSize(String className, long sizeFactor)
	{
		String classNameParamValue = className;
		long sizeFactorParamValue = sizeFactor;
		setChartClassControlSize_EVString_ev_uint32(this.nativeObject.pointer, classNameParamValue, sizeFactorParamValue);
	}
	native private void setChartClassControlSize_EVString_ev_uint32_NoVirtual(long pNativeObject, String className, long sizeFactor);
	protected void setChartClassControlSize_NoVirtual(String className, long sizeFactor)
	{
		String classNameParamValue = className;
		long sizeFactorParamValue = sizeFactor;
		setChartClassControlSize_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, classNameParamValue, sizeFactorParamValue);
	}

	native private boolean getChartClassControlSize_EVString_ev_uint32(long pNativeObject, String className, long sizeFactor);
	public boolean getChartClassControlSize(String className, UIntegerPointer sizeFactor)
	{
		String classNameParamValue = className;
		long sizeFactorParamValue = sizeFactor.nativeObject.pointer;
		boolean returnValue = getChartClassControlSize_EVString_ev_uint32(this.nativeObject.pointer, classNameParamValue, sizeFactorParamValue);
		return returnValue;
	}
	native private boolean getChartClassControlSize_EVString_ev_uint32_NoVirtual(long pNativeObject, String className, long sizeFactor);
	protected boolean getChartClassControlSize_NoVirtual(String className, UIntegerPointer sizeFactor)
	{
		String classNameParamValue = className;
		long sizeFactorParamValue = sizeFactor.nativeObject.pointer;
		boolean returnValue = getChartClassControlSize_EVString_ev_uint32_NoVirtual(this.nativeObject.pointer, classNameParamValue, sizeFactorParamValue);
		return returnValue;
	}

	native private void setChartClassControlColor_EVString_IColor(long pNativeObject, String className, long color);
	public void setChartClassControlColor(String className, com.earthview.world.spatial.display.Icolor color)
	{
		String classNameParamValue = className;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setChartClassControlColor_EVString_IColor(this.nativeObject.pointer, classNameParamValue, colorParamValue);
	}
	native private void setChartClassControlColor_EVString_IColor_NoVirtual(long pNativeObject, String className, long color);
	protected void setChartClassControlColor_NoVirtual(String className, com.earthview.world.spatial.display.Icolor color)
	{
		String classNameParamValue = className;
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setChartClassControlColor_EVString_IColor_NoVirtual(this.nativeObject.pointer, classNameParamValue, colorParamValue);
	}

	native private boolean getChartClassControlColor_EVString_IColor(long pNativeObject, String className, long pColor);
	public boolean getChartClassControlColor(String className, NativeObjectPointer<com.earthview.world.spatial.display.Icolor> pColor)
	{
		String classNameParamValue = className;
		long pColorParamValue = pColor.nativeObject.pointer;
		boolean returnValue = getChartClassControlColor_EVString_IColor(this.nativeObject.pointer, classNameParamValue, pColorParamValue);
		return returnValue;
	}
	native private boolean getChartClassControlColor_EVString_IColor_NoVirtual(long pNativeObject, String className, long pColor);
	protected boolean getChartClassControlColor_NoVirtual(String className, NativeObjectPointer<com.earthview.world.spatial.display.Icolor> pColor)
	{
		String classNameParamValue = className;
		long pColorParamValue = pColor.nativeObject.pointer;
		boolean returnValue = getChartClassControlColor_EVString_IColor_NoVirtual(this.nativeObject.pointer, classNameParamValue, pColorParamValue);
		return returnValue;
	}

	native private void setUseChartClassControlColor_EVString_ev_bool(long pNativeObject, String className, boolean useColor);
	public void setUseChartClassControlColor(String className, boolean useColor)
	{
		String classNameParamValue = className;
		boolean useColorParamValue = useColor;
		setUseChartClassControlColor_EVString_ev_bool(this.nativeObject.pointer, classNameParamValue, useColorParamValue);
	}
	native private void setUseChartClassControlColor_EVString_ev_bool_NoVirtual(long pNativeObject, String className, boolean useColor);
	protected void setUseChartClassControlColor_NoVirtual(String className, boolean useColor)
	{
		String classNameParamValue = className;
		boolean useColorParamValue = useColor;
		setUseChartClassControlColor_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, classNameParamValue, useColorParamValue);
	}

	native private boolean getUseChartClassControlColor_EVString(long pNativeObject, String className);
	public boolean getUseChartClassControlColor(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControlColor_EVString(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}
	native private boolean getUseChartClassControlColor_EVString_NoVirtual(long pNativeObject, String className);
	protected boolean getUseChartClassControlColor_NoVirtual(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControlColor_EVString_NoVirtual(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}

	native private long getChartClassControl_EVString(long pNativeObject, String className);
	public com.earthview.world.spatial.atlas.Nhchartclasscontrol getChartClassControl(String className)
	{
		String classNameParamValue = className;
		long returnValue = getChartClassControl_EVString(this.nativeObject.pointer, classNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Nhchartclasscontrol __returnValue = new com.earthview.world.spatial.atlas.Nhchartclasscontrol(CreatedWhenConstruct.CWC_NotToCreate, "NHChartClassControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Nhchartclasscontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NHChartClassControl");
		}
		return __returnValue;
	}
	native private void setChartClassControlColorBlendMode_EVString_EVColorBlendOperation(long pNativeObject, String className, int mode);
	///ev_void setChartClassControl(const EVString& className, const NHChartClassControl* pChartClassControl);
	public void setChartClassControlColorBlendMode(String className, com.earthview.world.spatial.display.EVColorBlendOperation mode)
	{
		String classNameParamValue = className;
		int modeParamValue = mode.getValue();
		setChartClassControlColorBlendMode_EVString_EVColorBlendOperation(this.nativeObject.pointer, classNameParamValue, modeParamValue);
	}
	native private void setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_NoVirtual(long pNativeObject, String className, int mode);
	protected void setChartClassControlColorBlendMode_NoVirtual(String className, com.earthview.world.spatial.display.EVColorBlendOperation mode)
	{
		String classNameParamValue = className;
		int modeParamValue = mode.getValue();
		setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_NoVirtual(this.nativeObject.pointer, classNameParamValue, modeParamValue);
	}

	native private int getChartClassControlColorBlendMode_EVString(long pNativeObject, String className);
	public com.earthview.world.spatial.display.EVColorBlendOperation getChartClassControlColorBlendMode(String className)
	{
		String classNameParamValue = className;
		int returnValue = getChartClassControlColorBlendMode_EVString(this.nativeObject.pointer, classNameParamValue);
		return com.earthview.world.spatial.display.EVColorBlendOperation.toEnum(returnValue);
	}
	native private int getChartClassControlColorBlendMode_EVString_NoVirtual(long pNativeObject, String className);
	protected com.earthview.world.spatial.display.EVColorBlendOperation getChartClassControlColorBlendMode_NoVirtual(String className)
	{
		String classNameParamValue = className;
		int returnValue = getChartClassControlColorBlendMode_EVString_NoVirtual(this.nativeObject.pointer, classNameParamValue);
		return com.earthview.world.spatial.display.EVColorBlendOperation.toEnum(returnValue);
	}

	public ChartLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartLayer(CreatedWhenConstruct cwc, String classNameStr) {
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
	/**
	 * 把图层的信息保存到流中
	 * @param steam 导出流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getObjectClassNum_void(long pNativeObject, String method);
	native protected void register_getObjectClassName_ev_uint32(long pNativeObject, String method);
	native protected void register_getObjectClassType_EVString(long pNativeObject, String method);
	native protected void register_setClassVisible_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setClassVisible_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_isClassVisible_ev_uint32(long pNativeObject, String method);
	native protected void register_isClassVisible_EVString(long pNativeObject, String method);
	native protected void register_setClassSelected_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_isClassSelected_ev_uint32(long pNativeObject, String method);
	native protected void register_isClassSelected_EVString(long pNativeObject, String method);
	native protected void register_setDataset_IDataset(long pNativeObject, String method);
	native protected void register_getOptionRef_void(long pNativeObject, String method);
	native protected void register_setEnvironment_IChartOption(long pNativeObject, String method);
	native protected void register_setClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_getClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_setClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_getClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_setClassIgnoreScale_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_getClassIgnoreScale_EVString(long pNativeObject, String method);
	native protected void register_setClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_getClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_setClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_getClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_setClassIgnoreScale_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_getClassIgnoreScale_ev_uint32(long pNativeObject, String method);
	native protected void register_setUseChartClassControl_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_getUseChartClassControl_EVString(long pNativeObject, String method);
	native protected void register_setChartClassControlSize_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_getChartClassControlSize_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_setChartClassControlColor_EVString_IColor(long pNativeObject, String method);
	native protected void register_getChartClassControlColor_EVString_IColor(long pNativeObject, String method);
	native protected void register_setUseChartClassControlColor_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_getUseChartClassControlColor_EVString(long pNativeObject, String method);
	native protected void register_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation(long pNativeObject, String method);
	native protected void register_getChartClassControlColorBlendMode_EVString(long pNativeObject, String method);
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
			this.register_getObjectClassNum_void(this.nativeObject.pointer, "getObjectClassNum_void_callback");
			this.register_getObjectClassName_ev_uint32(this.nativeObject.pointer, "getObjectClassName_ev_uint32_callback");
			this.register_getObjectClassType_EVString(this.nativeObject.pointer, "getObjectClassType_EVString_callback");
			this.register_setClassVisible_ev_uint32_ev_bool(this.nativeObject.pointer, "setClassVisible_ev_uint32_ev_bool_callback");
			this.register_setClassVisible_EVString_ev_bool(this.nativeObject.pointer, "setClassVisible_EVString_ev_bool_callback");
			this.register_isClassVisible_ev_uint32(this.nativeObject.pointer, "isClassVisible_ev_uint32_callback");
			this.register_isClassVisible_EVString(this.nativeObject.pointer, "isClassVisible_EVString_callback");
			this.register_setClassSelected_ev_uint32_ev_bool(this.nativeObject.pointer, "setClassSelected_ev_uint32_ev_bool_callback");
			this.register_isClassSelected_ev_uint32(this.nativeObject.pointer, "isClassSelected_ev_uint32_callback");
			this.register_isClassSelected_EVString(this.nativeObject.pointer, "isClassSelected_EVString_callback");
			this.register_setDataset_IDataset(this.nativeObject.pointer, "setDataset_IDataset_callback");
			this.register_getOptionRef_void(this.nativeObject.pointer, "getOptionRef_void_callback");
			this.register_setEnvironment_IChartOption(this.nativeObject.pointer, "setEnvironment_IChartOption_callback");
			this.register_setClassDisplayMinScale_EVString_ev_real64(this.nativeObject.pointer, "setClassDisplayMinScale_EVString_ev_real64_callback");
			this.register_getClassDisplayMinScale_EVString_ev_real64(this.nativeObject.pointer, "getClassDisplayMinScale_EVString_ev_real64_callback");
			this.register_setClassDisplayMaxScale_EVString_ev_real64(this.nativeObject.pointer, "setClassDisplayMaxScale_EVString_ev_real64_callback");
			this.register_getClassDisplayMaxScale_EVString_ev_real64(this.nativeObject.pointer, "getClassDisplayMaxScale_EVString_ev_real64_callback");
			this.register_setClassIgnoreScale_EVString_ev_bool(this.nativeObject.pointer, "setClassIgnoreScale_EVString_ev_bool_callback");
			this.register_getClassIgnoreScale_EVString(this.nativeObject.pointer, "getClassIgnoreScale_EVString_callback");
			this.register_setClassDisplayMinScale_ev_uint32_ev_real64(this.nativeObject.pointer, "setClassDisplayMinScale_ev_uint32_ev_real64_callback");
			this.register_getClassDisplayMinScale_ev_uint32_ev_real64(this.nativeObject.pointer, "getClassDisplayMinScale_ev_uint32_ev_real64_callback");
			this.register_setClassDisplayMaxScale_ev_uint32_ev_real64(this.nativeObject.pointer, "setClassDisplayMaxScale_ev_uint32_ev_real64_callback");
			this.register_getClassDisplayMaxScale_ev_uint32_ev_real64(this.nativeObject.pointer, "getClassDisplayMaxScale_ev_uint32_ev_real64_callback");
			this.register_setClassIgnoreScale_ev_uint32_ev_bool(this.nativeObject.pointer, "setClassIgnoreScale_ev_uint32_ev_bool_callback");
			this.register_getClassIgnoreScale_ev_uint32(this.nativeObject.pointer, "getClassIgnoreScale_ev_uint32_callback");
			this.register_setUseChartClassControl_EVString_ev_bool(this.nativeObject.pointer, "setUseChartClassControl_EVString_ev_bool_callback");
			this.register_getUseChartClassControl_EVString(this.nativeObject.pointer, "getUseChartClassControl_EVString_callback");
			this.register_setChartClassControlSize_EVString_ev_uint32(this.nativeObject.pointer, "setChartClassControlSize_EVString_ev_uint32_callback");
			this.register_getChartClassControlSize_EVString_ev_uint32(this.nativeObject.pointer, "getChartClassControlSize_EVString_ev_uint32_callback");
			this.register_setChartClassControlColor_EVString_IColor(this.nativeObject.pointer, "setChartClassControlColor_EVString_IColor_callback");
			this.register_getChartClassControlColor_EVString_IColor(this.nativeObject.pointer, "getChartClassControlColor_EVString_IColor_callback");
			this.register_setUseChartClassControlColor_EVString_ev_bool(this.nativeObject.pointer, "setUseChartClassControlColor_EVString_ev_bool_callback");
			this.register_getUseChartClassControlColor_EVString(this.nativeObject.pointer, "getUseChartClassControlColor_EVString_callback");
			this.register_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation(this.nativeObject.pointer, "setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback");
			this.register_getChartClassControlColorBlendMode_EVString(this.nativeObject.pointer, "getChartClassControlColorBlendMode_EVString_callback");
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
	
	public static ChartLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartLayer obj = null;
 		if(baseObj instanceof ChartLayer)
		{
			obj = (ChartLayer)baseObj;
		} else {
			obj = new ChartLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
