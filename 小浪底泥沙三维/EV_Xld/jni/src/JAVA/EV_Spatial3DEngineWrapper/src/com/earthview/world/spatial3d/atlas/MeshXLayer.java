package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXLayer extends com.earthview.world.spatial3d.atlas.ObliqueModelLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CMeshXLayer", new MeshXLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCMeshXLayerProxy", new MeshXLayerClassFactory());
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 图层克隆
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setAltitudeValue_ev_real64_callback(double altitudeValue)
	{
		double altitudeValueParamValue = altitudeValue;
		setAltitudeValue(altitudeValueParamValue);
	}

	native private void setAltitudeValue_ev_real64(long pNativeObject, double altitudeValue);
	/**
	 * 设置高度
	 * @param altitudeValue 高度值
	 */
	public void setAltitudeValue(double altitudeValue)
	{
		double altitudeValueParamValue = altitudeValue;
		setAltitudeValue_ev_real64(this.nativeObject.pointer, altitudeValueParamValue);
	}
	native private void setAltitudeValue_ev_real64_NoVirtual(long pNativeObject, double altitudeValue);
	protected void setAltitudeValue_NoVirtual(double altitudeValue)
	{
		double altitudeValueParamValue = altitudeValue;
		setAltitudeValue_ev_real64_NoVirtual(this.nativeObject.pointer, altitudeValueParamValue);
	}

	protected  void setPosition_ev_real64_ev_real64_ev_real64_callback(double lat, double lon, double alt)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		setPosition(latParamValue, lonParamValue, altParamValue);
	}

	native private void setPosition_ev_real64_ev_real64_ev_real64(long pNativeObject, double lat, double lon, double alt);
	/**
	 * 设置位置
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 */
	public void setPosition(double lat, double lon, double alt)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		setPosition_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}
	native private void setPosition_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double lat, double lon, double alt);
	protected void setPosition_NoVirtual(double lat, double lon, double alt)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		setPosition_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}

	protected  void setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(double lat, double lon, double alt, long localScale, long localRotate)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Quaternion localRotateParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localRotateParamValue.setDelegate(true);
		localRotateParamValue.setInstancePointer(new InstancePointer(localRotate));
		IClassFactory localRotateParamValueClassFactory = GlobalClassFactoryMap.get(localRotateParamValue.getCppInstanceTypeName());
		if (localRotateParamValueClassFactory != null)
		{
			localRotateParamValue.setDelegate(true);
			localRotateParamValue = (com.earthview.world.spatial.math.Quaternion)localRotateParamValueClassFactory.create();
			localRotateParamValue.setDelegate(true);
			localRotateParamValue.setInstancePointer(new InstancePointer(localRotate));
		}
		setSpatialInfo(latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}

	native private void setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, double lat, double lon, double alt, long localScale, long localRotate);
	/**
	 * 设置空间信息
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 * @param localScale 局部缩放
	 * @param localRotate 局部旋转
	 */
	public void setSpatialInfo(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localRotate)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localRotateParamValue = localRotate.nativeObject.pointer;
		setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}
	native private void setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, double lat, double lon, double alt, long localScale, long localRotate);
	protected void setSpatialInfo_NoVirtual(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localRotate)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localRotateParamValue = localRotate.nativeObject.pointer;
		setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}

	native private void setHighLight_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置点选高亮
	 * @param flag true高亮，false不高亮
	 */
	public void setHighLight(boolean flag)
	{
		boolean flagParamValue = flag;
		setHighLight_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getHighLight_void(long pNativeObject);
	public boolean getHighLight()
	{
		boolean returnValue = getHighLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clearHightLight_void(long pNativeObject);
	public void clearHightLight()
	{
		clearHightLight_void(this.nativeObject.pointer);
	}
	native private void setComponentHighLight_EVString_ev_bool(long pNativeObject, String compName, boolean flag);
	/**
	 * 设置组件高亮
	 * @param compName 组件名
	 * @param flag true高亮，false不高亮
	 */
	public void setComponentHighLight(String compName, boolean flag)
	{
		String compNameParamValue = compName;
		boolean flagParamValue = flag;
		setComponentHighLight_EVString_ev_bool(this.nativeObject.pointer, compNameParamValue, flagParamValue);
	}
	native private boolean getComponentHighLight_EVString(long pNativeObject, String compName);
	public boolean getComponentHighLight(String compName)
	{
		String compNameParamValue = compName;
		boolean returnValue = getComponentHighLight_EVString(this.nativeObject.pointer, compNameParamValue);
		return returnValue;
	}
	native private void clearComponentHightLight_void(long pNativeObject);
	public void clearComponentHightLight()
	{
		clearComponentHightLight_void(this.nativeObject.pointer);
	}
	native private boolean getSelectedComponent_ev_uint64_ev_int32_ev_int32_ev_int32_CComponent(long pNativeObject, long objectHandle, int submeshIndex, int instanceIndex, int segmentIndex, long outComp);
	/**
	 * 获取被选择的组件名，下列参数都可从tool监听参数中取出
	 * @param objectHandle 选中的对象handle，从tool监听参数的userdata中取出
	 * @param submeshIndex submesh索引
	 * @param instanceIndex submesh复用索引
	 * @param segmentIndex 段号
	 * @param outComp 组件
	 * @param parentLevel 根据当前查到的subEntity向上找parentLevel级父组件，默认没有parentLevel参数的接口parentLevel=0
	 * @return true找到，false没找到
	 */
	public boolean getSelectedComponent(ULongPointer objectHandle, int submeshIndex, int instanceIndex, int segmentIndex, com.earthview.world.spatial3d.Component outComp)
	{
		long objectHandleParamValue = objectHandle.nativeObject.pointer;
		int submeshIndexParamValue = submeshIndex;
		int instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		long outCompParamValue = outComp.nativeObject.pointer;
		boolean returnValue = getSelectedComponent_ev_uint64_ev_int32_ev_int32_ev_int32_CComponent(this.nativeObject.pointer, objectHandleParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, outCompParamValue);
		return returnValue;
	}
	native private boolean getSelectedComponent_ev_uint32_ev_uint64_ev_int32_ev_int32_ev_int32_ev_uint32_CComponent(long pNativeObject, long id, long objectHandle, int submeshIndex, int instanceIndex, int segmentIndex, long parentLevel, long outComp);
	public boolean getSelectedComponent(long id, ULongPointer objectHandle, int submeshIndex, int instanceIndex, int segmentIndex, long parentLevel, com.earthview.world.spatial3d.Component outComp)
	{
		long idParamValue = id;
		long objectHandleParamValue = objectHandle.nativeObject.pointer;
		int submeshIndexParamValue = submeshIndex;
		int instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		long parentLevelParamValue = parentLevel;
		long outCompParamValue = outComp.nativeObject.pointer;
		boolean returnValue = getSelectedComponent_ev_uint32_ev_uint64_ev_int32_ev_int32_ev_int32_ev_uint32_CComponent(this.nativeObject.pointer, idParamValue, objectHandleParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, parentLevelParamValue, outCompParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectName_ev_uint64_EVString(long pNativeObject, long objectHandle, long name);
	/**
	 * 获取被选择的对象名，下列参数都可从tool监听参数中取出
	 * @param objectHandle 选中的对象handle，从tool监听参数的userdata中取出
	 * @param name 对象名
	 * @return true找到，false没找到
	 */
	public boolean getSelectedObjectName(ULongPointer objectHandle, StringPointer name)
	{
		long objectHandleParamValue = objectHandle.nativeObject.pointer;
		long nameParamValue = name.nativeObject.pointer;
		boolean returnValue = getSelectedObjectName_ev_uint64_EVString(this.nativeObject.pointer, objectHandleParamValue, nameParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectPosition_ev_uint64_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long objectHandle, long lat, long lon, long alt, long localScale, long localOrientation);
	/**
	 * 获取被选择的对象名，下列参数都可从tool监听参数中取出
	 * @param objectHandle 选中的对象handle，从tool监听参数的userdata中取出
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 * @param localScale 局部缩放
	 * @param localOrientation 局部旋转
	 * @return true找到，false没找到
	 */
	public boolean getSelectedObjectPosition(ULongPointer objectHandle, DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long objectHandleParamValue = objectHandle.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		boolean returnValue = getSelectedObjectPosition_ev_uint64_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, objectHandleParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue);
		return returnValue;
	}
	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * 图层选择
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

	native private void setLayerSelection_ILayerSelection(long pNativeObject, long selection);
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection(this.nativeObject.pointer, selectionParamValue);
	}
	native private void setLayerSelection_ILayerSelection_NoVirtual(long pNativeObject, long selection);
	protected void setLayerSelection_NoVirtual(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection_NoVirtual(this.nativeObject.pointer, selectionParamValue);
	}

	native private long getLayerSelection_void(long pNativeObject);
	/**
	 * 获取图层选择
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

	native private long getRecordFeatureClass_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifeatureclass getRecordFeatureClass()
	{
		long returnValue = getRecordFeatureClass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	public MeshXLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshXLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// <summary>
	/// 图层定位
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		return super.getGotoParam_NoVirtual(latitude, longitude, altitude);
	}
	/**
	 * 获取高度模式
	 * @return ev_real64,高度值
	 */
	public double getAltitudeValue()
	{
		return super.getAltitudeValue_NoVirtual();
	}
	/**
	 * 获取位置
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 */
	public void getPosition(DoublePointer lat, DoublePointer lon, DoublePointer alt)
	{
		super.getPosition_NoVirtual(lat, lon, alt);
	}
	/**
	 * 获取空间信息
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 * @param localScale 局部缩放
	 * @param localRotate 局部旋转
	 */
	public void getSpatialInfo(DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localRotate)
	{
		super.getSpatialInfo_NoVirtual(lat, lon, alt, localScale, localRotate);
	}
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectBy_NoVirtual(ray, viewport, point);
	}
	/**
	 * 设置某个图层反射光系数增益
	 * @param ambient 环境光增益
	 * @param diffuse 漫反射增益
	 * @param specular 镜面反射增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		super.setEnvParam_NoVirtual(ambient, diffuse, specular);
	}
	/**
	 * 获取图层反射光系数增益
	 * @return ambient环境光增益，diffuse漫反射增益，specular镜面反射增益
	 */
	public void getEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		super.getEnvParam_NoVirtual(ambient, diffuse, specular);
	}
	/// <summary>
	/// 获得场景名称
	/// </summary>
	/// <returns>场景名称</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
	}
	/**
	 * 根据经纬度和级别获取高程
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerAdd_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe卸载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerRemoved_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		super._notifyRefreshed_NoVirtual(camera, updateType);
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/**
	 * 数据集更新事件的通知
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		super._notifyDataChanged_NoVirtual(strDataSourceName, strDatasetName, pEvent);
	}
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
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
	
	native protected void register_setAltitudeValue_ev_real64(long pNativeObject, String method);
	native protected void register_setPosition_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getGotoParam_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getAltitudeValue_void(long pNativeObject, String method);
	native protected void register_getPosition_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_CVector3(long pNativeObject, String method);
	native protected void register_setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_getEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
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
			this.register_setAltitudeValue_ev_real64(this.nativeObject.pointer, "setAltitudeValue_ev_real64_callback");
			this.register_setPosition_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "setPosition_ev_real64_ev_real64_ev_real64_callback");
			this.register_setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "setSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_getGotoParam_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getGotoParam_ev_real64_ev_real64_ev_real64_callback");
			this.register_getAltitudeValue_void(this.nativeObject.pointer, "getAltitudeValue_void_callback");
			this.register_getPosition_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getPosition_ev_real64_ev_real64_ev_real64_callback");
			this.register_getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_CVector3_callback");
			this.register_setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "setEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_getEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "getEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
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
	
	public static MeshXLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshXLayer obj = null;
 		if(baseObj instanceof MeshXLayer)
		{
			obj = (MeshXLayer)baseObj;
		} else {
			obj = new MeshXLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshXLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
