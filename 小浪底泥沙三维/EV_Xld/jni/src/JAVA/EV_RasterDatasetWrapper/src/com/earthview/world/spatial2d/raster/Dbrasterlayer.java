package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 实现数据库栅格数据集的显示
 */
public class Dbrasterlayer extends com.earthview.world.spatial2d.raster.RasterLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterLayer", new DbrasterlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterLayerProxy", new DbrasterlayerClassFactory());
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

	public Dbrasterlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dbrasterlayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// <summray>
	/// 设置栅格渲染对象
	/// </summary>
	/// <param name="pRenderer">栅格渲染对象（内部释放）</param>
	/// <returns></returns>
	public void setRenderer(com.earthview.world.spatial2d.raster.Irasterrenderer pRenderer)
	{
		super.setRenderer_NoVirtual(pRenderer);
	}
	/// <summray>
	/// 获取栅格渲染对象
	/// </summary>
	/// <returns>栅格渲染对象</returns>
	public com.earthview.world.spatial2d.raster.Irasterrenderer getRenderer()
	{
		return super.getRenderer_NoVirtual();
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
	
	public static Dbrasterlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dbrasterlayer obj = null;
 		if(baseObj instanceof Dbrasterlayer)
		{
			obj = (Dbrasterlayer)baseObj;
		} else {
			obj = new Dbrasterlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBRasterLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
