package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView几何图层类
 */
public class Evgeometrymaplayer extends com.earthview.world.spatial.WebLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeometryMapLayer", new EvgeometrymaplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeometryMapLayerProxy", new EvgeometrymaplayerClassFactory());
	}

	native private int buffer_CGeometryList_ev_real64_ev_bool_CGeometryList(long pNativeObject, long geometrylist, double distance, boolean isunion, long result_geometrylist);
	/**
	 * 求缓冲区
	 * @param geometrylist 集合对象列表
	 * @param distance 缓冲区距离
	 * @param isunion 结果是否合并
	 * @param result_geometrylist 结果
	 * @return ok返回0，其他值均为错误
	 */
	public int buffer(com.earthview.world.spatial.GeometryList geometrylist, double distance, boolean isunion, com.earthview.world.spatial.GeometryList result_geometrylist)
	{
		long geometrylistParamValue = geometrylist.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean isunionParamValue = isunion;
		long result_geometrylistParamValue = result_geometrylist.nativeObject.pointer;
		int returnValue = buffer_CGeometryList_ev_real64_ev_bool_CGeometryList(this.nativeObject.pointer, geometrylistParamValue, distanceParamValue, isunionParamValue, result_geometrylistParamValue);
		return returnValue;
	}
	native private int contains_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否包含对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int contains(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = contains_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int crosses_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否跨过对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int crosses(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = crosses_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int disjoint_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相离
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int disjoint(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = disjoint_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int distance_IGeometry_IGeometry_ev_real64(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1与对象2的距离
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 距离
	 * @return ok返回0，其他值均为错误
	 */
	public int distance(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, DoublePointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = distance_IGeometry_IGeometry_ev_real64(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int intersects_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相交
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int intersects(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = intersects_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int overlaps_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2是否重叠
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int overlaps(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = overlaps_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int touches_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相邻接
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int touches(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = touches_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int within_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否包含于对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int within(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = within_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private void setDataset_IDataset(long pNativeObject, long ref_dataset);
	/**
	 * /设置关联数据集/
	 * @param dataset 关联数据集
	 */
	public void setDataset(com.earthview.world.spatial.geodataset.Idataset ref_dataset)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		setDataset_IDataset(this.nativeObject.pointer, ref_datasetParamValue);
	}
	/**
	 * 构造函数
	 */
	public Evgeometrymaplayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVGeometryMapLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evgeometrymaplayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Evgeometrymaplayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evgeometrymaplayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取是否可选
	 * @return true表示可选
	 */
	public boolean isSelected()
	{
		return super.isSelected_NoVirtual();
	}
	/**
	 * 设置是否可选
	 * @param selected true表示可选
	 */
	public void setSelected(boolean selected)
	{
		super.setSelected_NoVirtual(selected);
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
	
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
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
	
	public static Evgeometrymaplayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evgeometrymaplayer obj = null;
 		if(baseObj instanceof Evgeometrymaplayer)
		{
			obj = (Evgeometrymaplayer)baseObj;
		} else {
			obj = new Evgeometrymaplayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVGeometryMapLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
