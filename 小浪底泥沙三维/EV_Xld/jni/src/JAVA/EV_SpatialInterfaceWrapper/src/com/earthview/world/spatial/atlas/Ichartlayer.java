package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图图层类接口
 */
public class Ichartlayer extends com.earthview.world.spatial.atlas.Ilayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IChartLayer", new IchartlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIChartLayerProxy", new IchartlayerClassFactory());
	}

	protected  long getObjectClassNum_void_callback()
	{
		long returnValue = getObjectClassNum();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  String getObjectClassName_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getObjectClassName(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  int getObjectClassType_EVString_callback(String name)
	{
		String nameParamValue = name;
		int returnValue = getObjectClassType(nameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getObjectClassType_EVString(long pNativeObject, String name);
	/**
	 * 获取物标类名称
	 * @param name 物标类名称
	 * @return 物标类类型
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

	protected  void setClassVisible_ev_uint32_ev_bool_callback(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassVisible(indexParamValue, valueParamValue);
	}

	native private void setClassVisible_ev_uint32_ev_bool(long pNativeObject, long index, boolean value);
	/**
	 * 设置某一物标类的可见性
	 * @param index 物标类索引
	 * @param value 该类物体是否可见
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

	protected  void setClassVisible_EVString_ev_bool_callback(String name, boolean value)
	{
		String nameParamValue = name;
		boolean valueParamValue = value;
		setClassVisible(nameParamValue, valueParamValue);
	}

	native private void setClassVisible_EVString_ev_bool(long pNativeObject, String name, boolean value);
	/**
	 * 设置某一物标类的可见性
	 * @param name 物标类名称
	 * @param value 该类物体是否可见
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

	protected  boolean isClassVisible_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassVisible(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isClassVisible_ev_uint32(long pNativeObject, long index);
	/**
	 * 查询某一物标类是否可见
	 * @param index 物标类索引
	 * @return 某类物体是否可见
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

	protected  boolean isClassVisible_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassVisible(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isClassVisible_EVString(long pNativeObject, String name);
	/**
	 * 查询某一物标类是否可见
	 * @param name 物标类名称
	 * @return 某类物体是否可见
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

	protected  void setClassSelected_ev_uint32_ev_bool_callback(long index, boolean value)
	{
		long indexParamValue = index;
		boolean valueParamValue = value;
		setClassSelected(indexParamValue, valueParamValue);
	}

	native private void setClassSelected_ev_uint32_ev_bool(long pNativeObject, long index, boolean value);
	/**
	 * 设置某物标类是否可选
	 * @param index 索引
	 * @param value 是否可选
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

	protected  boolean isClassSelected_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = isClassSelected(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isClassSelected_ev_uint32(long pNativeObject, long index);
	/**
	 * 查询某物标类是否可选
	 * @param index 物标类索引
	 * @return 某类物体是否可选
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

	protected  boolean isClassSelected_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isClassSelected(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isClassSelected_EVString(long pNativeObject, String name);
	/**
	 * 查询某物标类是否可选
	 * @param name 物标类名称
	 * @return 某类物体是否可选
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
	 * 设置关联的数据集
	 * @param pDataset 关联数据集
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

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 设置要素选择集
	 * @param filter 查询条件
	 * @param type 选择结果类型
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
	 * 清除要素选择集
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
	 * 获取选择图层
	 * @return 选择图层对象指针，不需释放
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

	protected  long getOptionRef_void_callback()
	{
		com.earthview.world.spatial.display.Ichartoption returnValue = getOptionRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOptionRef_void(long pNativeObject);
	/**
	 * 获取显示参数
	 * @return 显示参数对象指针，不需释放
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

	protected  void setEnvironment_IChartOption_callback(long uniformOption)
	{
		com.earthview.world.spatial.display.Ichartoption uniformOptionParamValue = (uniformOption == 0L ? null : new com.earthview.world.spatial.display.Ichartoption(CreatedWhenConstruct.CWC_NotToCreate));
		if(uniformOptionParamValue != null)
		{
		uniformOptionParamValue.setDelegate(true);
		uniformOptionParamValue.setInstancePointer(new InstancePointer(uniformOption));
		IClassFactory uniformOptionParamValueClassFactory = GlobalClassFactoryMap.get(uniformOptionParamValue.getCppInstanceTypeName());
		if (uniformOptionParamValueClassFactory != null)
		{
			uniformOptionParamValue.setDelegate(true);
			uniformOptionParamValue = (com.earthview.world.spatial.display.Ichartoption)uniformOptionParamValueClassFactory.create();
			uniformOptionParamValue.setDelegate(true);
			uniformOptionParamValue.setInstancePointer(new InstancePointer(uniformOption));
		}
		}
		setEnvironment(uniformOptionParamValue);
	}

	native private void setEnvironment_IChartOption(long pNativeObject, long uniformOption);
	/**
	 * 设置显示参数
	 * @param uniformOption 显示参数对象
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

	protected  void setClassDisplayMinScale_EVString_ev_real64_callback(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMinScale(classNameParamValue, scaleParamValue);
	}

	native private void setClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String className, double scale);
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

	protected  boolean getClassDisplayMinScale_EVString_ev_real64_callback(String className, long minScale)
	{
		String classNameParamValue = className;
		DoublePointer minScaleParamValue = new DoublePointer(new InstancePointer(minScale));
		boolean returnValue = getClassDisplayMinScale(classNameParamValue, minScaleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassDisplayMinScale_EVString_ev_real64(long pNativeObject, String className, long minScale);
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

	protected  void setClassDisplayMaxScale_EVString_ev_real64_callback(String className, double scale)
	{
		String classNameParamValue = className;
		double scaleParamValue = scale;
		setClassDisplayMaxScale(classNameParamValue, scaleParamValue);
	}

	native private void setClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String className, double scale);
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

	protected  boolean getClassDisplayMaxScale_EVString_ev_real64_callback(String className, long maxScale)
	{
		String classNameParamValue = className;
		DoublePointer maxScaleParamValue = new DoublePointer(new InstancePointer(maxScale));
		boolean returnValue = getClassDisplayMaxScale(classNameParamValue, maxScaleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassDisplayMaxScale_EVString_ev_real64(long pNativeObject, String className, long maxScale);
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

	protected  void setClassIgnoreScale_EVString_ev_bool_callback(String className, boolean classIgnore)
	{
		String classNameParamValue = className;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale(classNameParamValue, classIgnoreParamValue);
	}

	native private void setClassIgnoreScale_EVString_ev_bool(long pNativeObject, String className, boolean classIgnore);
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

	protected  boolean getClassIgnoreScale_EVString_callback(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getClassIgnoreScale(classNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassIgnoreScale_EVString(long pNativeObject, String className);
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

	protected  void setClassDisplayMinScale_ev_uint32_ev_real64_callback(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMinScale(indexParamValue, scaleParamValue);
	}

	native private void setClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, long index, double scale);
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

	protected  boolean getClassDisplayMinScale_ev_uint32_ev_real64_callback(long index, long scale)
	{
		long indexParamValue = index;
		DoublePointer scaleParamValue = new DoublePointer(new InstancePointer(scale));
		boolean returnValue = getClassDisplayMinScale(indexParamValue, scaleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassDisplayMinScale_ev_uint32_ev_real64(long pNativeObject, long index, long scale);
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

	protected  void setClassDisplayMaxScale_ev_uint32_ev_real64_callback(long index, double scale)
	{
		long indexParamValue = index;
		double scaleParamValue = scale;
		setClassDisplayMaxScale(indexParamValue, scaleParamValue);
	}

	native private void setClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, long index, double scale);
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

	protected  boolean getClassDisplayMaxScale_ev_uint32_ev_real64_callback(long index, long scale)
	{
		long indexParamValue = index;
		DoublePointer scaleParamValue = new DoublePointer(new InstancePointer(scale));
		boolean returnValue = getClassDisplayMaxScale(indexParamValue, scaleParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassDisplayMaxScale_ev_uint32_ev_real64(long pNativeObject, long index, long scale);
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

	protected  void setClassIgnoreScale_ev_uint32_ev_bool_callback(long index, boolean classIgnore)
	{
		long indexParamValue = index;
		boolean classIgnoreParamValue = classIgnore;
		setClassIgnoreScale(indexParamValue, classIgnoreParamValue);
	}

	native private void setClassIgnoreScale_ev_uint32_ev_bool(long pNativeObject, long index, boolean classIgnore);
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

	protected  boolean getClassIgnoreScale_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = getClassIgnoreScale(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getClassIgnoreScale_ev_uint32(long pNativeObject, long index);
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

	protected  void setUseChartClassControl_EVString_ev_bool_callback(String className, boolean IsUse)
	{
		String classNameParamValue = className;
		boolean IsUseParamValue = IsUse;
		setUseChartClassControl(classNameParamValue, IsUseParamValue);
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

	protected  boolean getUseChartClassControl_EVString_callback(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControl(classNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void setChartClassControlSize_EVString_ev_uint32_callback(String className, long sizeFactor)
	{
		String classNameParamValue = className;
		long sizeFactorParamValue = sizeFactor;
		setChartClassControlSize(classNameParamValue, sizeFactorParamValue);
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

	protected  boolean getChartClassControlSize_EVString_ev_uint32_callback(String className, long sizeFactor)
	{
		String classNameParamValue = className;
		UIntegerPointer sizeFactorParamValue = new UIntegerPointer(new InstancePointer(sizeFactor));
		boolean returnValue = getChartClassControlSize(classNameParamValue, sizeFactorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void setChartClassControlColor_EVString_IColor_callback(String className, long color)
	{
		String classNameParamValue = className;
		com.earthview.world.spatial.display.Icolor colorParamValue = (color == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(colorParamValue != null)
		{
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.spatial.display.Icolor)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		}
		setChartClassControlColor(classNameParamValue, colorParamValue);
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

	protected  boolean getChartClassControlColor_EVString_IColor_callback(String className, long pColor)
	{
		String classNameParamValue = className;
		NativeObjectPointer<com.earthview.world.spatial.display.Icolor> pColorParamValue = new NativeObjectPointer<com.earthview.world.spatial.display.Icolor>(new InstancePointer(pColor));
		boolean returnValue = getChartClassControlColor(classNameParamValue, pColorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void setUseChartClassControlColor_EVString_ev_bool_callback(String className, boolean useColor)
	{
		String classNameParamValue = className;
		boolean useColorParamValue = useColor;
		setUseChartClassControlColor(classNameParamValue, useColorParamValue);
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

	protected  boolean getUseChartClassControlColor_EVString_callback(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = getUseChartClassControlColor(classNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback(String className, int mode)
	{
		String classNameParamValue = className;
		com.earthview.world.spatial.display.EVColorBlendOperation modeParamValue = com.earthview.world.spatial.display.EVColorBlendOperation.toEnum(mode);
		setChartClassControlColorBlendMode(classNameParamValue, modeParamValue);
	}

	native private void setChartClassControlColorBlendMode_EVString_EVColorBlendOperation(long pNativeObject, String className, int mode);
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

	protected  int getChartClassControlColorBlendMode_EVString_callback(String className)
	{
		String classNameParamValue = className;
		com.earthview.world.spatial.display.EVColorBlendOperation returnValue = getChartClassControlColorBlendMode(classNameParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	public Ichartlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ichartlayer(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
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
	
	public static Ichartlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ichartlayer obj = null;
 		if(baseObj instanceof Ichartlayer)
		{
			obj = (Ichartlayer)baseObj;
		} else {
			obj = new Ichartlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IChartLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
