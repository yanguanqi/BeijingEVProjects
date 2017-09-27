package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维统计专题图扩展类
 */
public class GeoStatistics3DExtension extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeoStatistics3DExtension", new GeoStatistics3DExtensionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCGeoStatistics3DExtensionProxy", new GeoStatistics3DExtensionClassFactory());
	}

	/**
	 * 存放符号和偏移矩阵的结构体
	 */
	public static class TagSymbolTransform extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform", new TagSymbolTransformClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public TagSymbolTransform() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TagSymbolTransform", null);
		}

		native private long get_mpSymbol_void(long pNativeObject);
		public com.earthview.world.spatial.display.Isymbol get_mpSymbol()
		{
			long jniValue = get_mpSymbol_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_mpSymbol_ISymbol (long pNativeObject, long value);
		public void set_mpSymbol(com.earthview.world.spatial.display.Isymbol mpSymbol)
		{
			long mpSymbolParamValue = (mpSymbol == null ? 0L : mpSymbol.nativeObject.pointer);
			
			set_mpSymbol_ISymbol(this.nativeObject.pointer, mpSymbolParamValue);
		}
		
		native private long get_mMatrix4_void(long pNativeObject);
		public com.earthview.world.spatial.math.Matrix4 get_mMatrix4()
		{
			long jniValue = get_mMatrix4_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
			}
			return __returnValue;
		}
		
		native private void set_mMatrix4_CMatrix4 (long pNativeObject, long value);
		public void set_mMatrix4(com.earthview.world.spatial.math.Matrix4 mMatrix4)
		{
			long mMatrix4ParamValue = mMatrix4.nativeObject.pointer;
			
			set_mMatrix4_CMatrix4(this.nativeObject.pointer, mMatrix4ParamValue);
		}
		
		public TagSymbolTransform(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TagSymbolTransform(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TagSymbolTransform fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TagSymbolTransform obj = null;
 			if(baseObj instanceof TagSymbolTransform)
			{
				obj = (TagSymbolTransform)baseObj;
			} else {
				obj = new TagSymbolTransform(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TagSymbolTransform");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TagSymbolTransformClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TagSymbolTransform emptyInstance = new TagSymbolTransform(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param smg 场景管理器
	 */
	public GeoStatistics3DExtension(com.earthview.world.graphic.SceneManager smg) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer smgPtr = new BasePointer(smg);
		list.add("smg", smgPtr.get());
		Create("JCGeoStatistics3DExtensionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.GeoStatistics3DExtension".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addSymbolTransform_ISymbol_CMatrix4(long pNativeObject, long symbol, long matrix);
	/**
	 * 添加符号、偏移矩阵
	 * @param symbol 符号
	 * @param matrix 偏移矩阵
	 */
	public void addSymbolTransform(com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		long matrixParamValue = matrix.nativeObject.pointer;
		addSymbolTransform_ISymbol_CMatrix4(this.nativeObject.pointer, symbolParamValue, matrixParamValue);
	}
	native private void setSymbolTransform_ev_uint32_ISymbol_CMatrix4(long pNativeObject, long index, long symbol, long matrix);
	/**
	 * 设置符号、偏移矩阵
	 * @param index 索引
	 * @param symbol 符号
	 * @param matrix 矩阵
	 */
	public void setSymbolTransform(long index, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long indexParamValue = index;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		long matrixParamValue = (matrix == null ? 0L : matrix.nativeObject.pointer);
		setSymbolTransform_ev_uint32_ISymbol_CMatrix4(this.nativeObject.pointer, indexParamValue, symbolParamValue, matrixParamValue);
	}
	native private long getSymbolTransformCount_void(long pNativeObject);
	/**
	 * 获取符号偏移矩阵个数
	 * @param index 
	 * @return 个数
	 */
	public long getSymbolTransformCount()
	{
		long returnValue = getSymbolTransformCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTransformMatrix_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取符号偏移矩阵
	 * @param index 索引
	 * @return 偏移矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getTransformMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getTransformMatrix_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取符号
	 * @param index 索引
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(long index)
	{
		long indexParamValue = index;
		long returnValue = getSymbol_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private void setPosition_CVector3(long pNativeObject, long position);
	/**
	 * 设置八叉树索引的中心点位置
	 * @param index 索引
	 * @return 符号
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	native private void build_void(long pNativeObject);
	/**
	 * 建立三维统计专题图扩展对象
	 * @param  
	 */
	public void build()
	{
		build_void(this.nativeObject.pointer);
	}
	native private void render_void(long pNativeObject);
	/**
	 * 渲染
	 * @param  
	 */
	public void render()
	{
		render_void(this.nativeObject.pointer);
	}
	native private boolean updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_ISymbol(long pNativeObject, boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, long psymbol);
	/**
	 * 更新字体注记
	 * @param resetTextStyle 是否重置字体的样式
	 * @param derenderTxt 是否不渲染字体
	 * @param reCreate 是否重新创建
	 * @param attachLabel 是否挂接
	 * @param psymbol 存放字体风格的符号
	 * @return 如果返回true，则更新字体成功，否则失败
	 */
	public boolean updateLabel(boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, com.earthview.world.spatial.display.Isymbol psymbol)
	{
		boolean resetTextStyleParamValue = resetTextStyle;
		boolean derenderTxtParamValue = derenderTxt;
		boolean reCreateParamValue = reCreate;
		boolean attachLabelParamValue = attachLabel;
		long psymbolParamValue = (psymbol == null ? 0L : psymbol.nativeObject.pointer);
		boolean returnValue = updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_ISymbol(this.nativeObject.pointer, resetTextStyleParamValue, derenderTxtParamValue, reCreateParamValue, attachLabelParamValue, psymbolParamValue);
		return returnValue;
	}
	native private void derender_void(long pNativeObject);
	/**
	 * 不渲染字体以及扩展对象
	 * @param  
	 */
	public void derender()
	{
		derender_void(this.nativeObject.pointer);
	}
	native private void layoutLabels_void(long pNativeObject);
	public void layoutLabels()
	{
		layoutLabels_void(this.nativeObject.pointer);
	}
	protected  void setLabelVisibleDistance_ev_real64_callback(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance(disParamValue);
	}

	native private void setLabelVisibleDistance_ev_real64(long pNativeObject, double dis);
	/**
	 * 设置注记可见距离
	 * @param dis 可见距离
	 */
	public void setLabelVisibleDistance(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance_ev_real64(this.nativeObject.pointer, disParamValue);
	}
	native private void setLabelVisibleDistance_ev_real64_NoVirtual(long pNativeObject, double dis);
	protected void setLabelVisibleDistance_NoVirtual(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance_ev_real64_NoVirtual(this.nativeObject.pointer, disParamValue);
	}

	protected  boolean setInvisibleIndices_IntVector_callback(long indices)
	{
		com.earthview.world.core.IntVector indicesParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		indicesParamValue.setDelegate(true);
		indicesParamValue.setInstancePointer(new InstancePointer(indices));
		IClassFactory indicesParamValueClassFactory = GlobalClassFactoryMap.get(indicesParamValue.getCppInstanceTypeName());
		if (indicesParamValueClassFactory != null)
		{
			indicesParamValue.setDelegate(true);
			indicesParamValue = (com.earthview.world.core.IntVector)indicesParamValueClassFactory.create();
			indicesParamValue.setDelegate(true);
			indicesParamValue.setInstancePointer(new InstancePointer(indices));
		}
		boolean returnValue = setInvisibleIndices(indicesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setInvisibleIndices_IntVector(long pNativeObject, long indices);
	/**
	 * 设置不可见索引
	 * @param indices 不可见索引
	 */
	public boolean setInvisibleIndices(com.earthview.world.core.IntVector indices)
	{
		long indicesParamValue = indices.nativeObject.pointer;
		boolean returnValue = setInvisibleIndices_IntVector(this.nativeObject.pointer, indicesParamValue);
		return returnValue;
	}
	native private boolean setInvisibleIndices_IntVector_NoVirtual(long pNativeObject, long indices);
	protected boolean setInvisibleIndices_NoVirtual(com.earthview.world.core.IntVector indices)
	{
		long indicesParamValue = indices.nativeObject.pointer;
		boolean returnValue = setInvisibleIndices_IntVector_NoVirtual(this.nativeObject.pointer, indicesParamValue);
		return returnValue;
	}

	public GeoStatistics3DExtension(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoStatistics3DExtension(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setLabelVisibleDistance_ev_real64(long pNativeObject, String method);
	native protected void register_setInvisibleIndices_IntVector(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setLabelVisibleDistance_ev_real64(this.nativeObject.pointer, "setLabelVisibleDistance_ev_real64_callback");
			this.register_setInvisibleIndices_IntVector(this.nativeObject.pointer, "setInvisibleIndices_IntVector_callback");
		}
	}
	
	public static GeoStatistics3DExtension fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoStatistics3DExtension obj = null;
 		if(baseObj instanceof GeoStatistics3DExtension)
		{
			obj = (GeoStatistics3DExtension)baseObj;
		} else {
			obj = new GeoStatistics3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoStatistics3DExtension");
			obj.increaseCast();
		}

		return obj;
	}
}
