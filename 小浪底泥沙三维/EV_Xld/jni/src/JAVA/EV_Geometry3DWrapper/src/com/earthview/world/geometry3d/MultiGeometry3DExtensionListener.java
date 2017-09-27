package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 二维图形扩展自定义符号的监听类监听二维图形扩展自定义符号
 */
public class MultiGeometry3DExtensionListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener", new MultiGeometry3DExtensionListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCMultiGeometry3DExtensionListenerProxy", new MultiGeometry3DExtensionListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MultiGeometry3DExtensionListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMultiGeometry3DExtensionListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MultiGeometry3DExtensionListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean userExtension_CMultiGeometry3DExtension_callback(long extension)
	{
		com.earthview.world.geometry3d.MultiGeometry3DExtension extensionParamValue = (extension == 0L ? null : new com.earthview.world.geometry3d.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate));
		if(extensionParamValue != null)
		{
		extensionParamValue.setDelegate(true);
		extensionParamValue.setInstancePointer(new InstancePointer(extension));
		IClassFactory extensionParamValueClassFactory = GlobalClassFactoryMap.get(extensionParamValue.getCppInstanceTypeName());
		if (extensionParamValueClassFactory != null)
		{
			extensionParamValue.setDelegate(true);
			extensionParamValue = (com.earthview.world.geometry3d.MultiGeometry3DExtension)extensionParamValueClassFactory.create();
			extensionParamValue.setDelegate(true);
			extensionParamValue.setInstancePointer(new InstancePointer(extension));
		}
		}
		boolean returnValue = userExtension(extensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean userExtension_CMultiGeometry3DExtension(long pNativeObject, long extension);
	/**
	 * 系统构建前询问是否完全由用户构造对象当返回true时，系统不再构建该对象，由监听者构建并改写extension对象；false，交由系统构建。
	 * @param extension extension对象
	 * @return 用户是否进行了构造
	 */
	public boolean userExtension(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		boolean returnValue = userExtension_CMultiGeometry3DExtension(this.nativeObject.pointer, extensionParamValue);
		return returnValue;
	}
	native private boolean userExtension_CMultiGeometry3DExtension_NoVirtual(long pNativeObject, long extension);
	protected boolean userExtension_NoVirtual(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		boolean returnValue = userExtension_CMultiGeometry3DExtension_NoVirtual(this.nativeObject.pointer, extensionParamValue);
		return returnValue;
	}

	protected  boolean onSymbolNotSupported_CMultiGeometry3DExtension_callback(long extension)
	{
		com.earthview.world.geometry3d.MultiGeometry3DExtension extensionParamValue = (extension == 0L ? null : new com.earthview.world.geometry3d.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate));
		if(extensionParamValue != null)
		{
		extensionParamValue.setDelegate(true);
		extensionParamValue.setInstancePointer(new InstancePointer(extension));
		IClassFactory extensionParamValueClassFactory = GlobalClassFactoryMap.get(extensionParamValue.getCppInstanceTypeName());
		if (extensionParamValueClassFactory != null)
		{
			extensionParamValue.setDelegate(true);
			extensionParamValue = (com.earthview.world.geometry3d.MultiGeometry3DExtension)extensionParamValueClassFactory.create();
			extensionParamValue.setDelegate(true);
			extensionParamValue.setInstancePointer(new InstancePointer(extension));
		}
		}
		boolean returnValue = onSymbolNotSupported(extensionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSymbolNotSupported_CMultiGeometry3DExtension(long pNativeObject, long extension);
	/**
	 * 当符号不支持时，通知监听者构建
	 * @param extension 
	 * @return 构建是否成功
	 */
	public boolean onSymbolNotSupported(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		boolean returnValue = onSymbolNotSupported_CMultiGeometry3DExtension(this.nativeObject.pointer, extensionParamValue);
		return returnValue;
	}
	native private boolean onSymbolNotSupported_CMultiGeometry3DExtension_NoVirtual(long pNativeObject, long extension);
	protected boolean onSymbolNotSupported_NoVirtual(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		boolean returnValue = onSymbolNotSupported_CMultiGeometry3DExtension_NoVirtual(this.nativeObject.pointer, extensionParamValue);
		return returnValue;
	}

	protected  void perGeometryExtensionBegun_IGeometry_ISymbol_callback(long pGeometry, long pSymbol)
	{
		com.earthview.world.spatial.geometry.Igeometry pGeometryParamValue = (pGeometry == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pGeometryParamValue != null)
		{
		pGeometryParamValue.setDelegate(true);
		pGeometryParamValue.setInstancePointer(new InstancePointer(pGeometry));
		IClassFactory pGeometryParamValueClassFactory = GlobalClassFactoryMap.get(pGeometryParamValue.getCppInstanceTypeName());
		if (pGeometryParamValueClassFactory != null)
		{
			pGeometryParamValue.setDelegate(true);
			pGeometryParamValue = (com.earthview.world.spatial.geometry.Igeometry)pGeometryParamValueClassFactory.create();
			pGeometryParamValue.setDelegate(true);
			pGeometryParamValue.setInstancePointer(new InstancePointer(pGeometry));
		}
		}
		com.earthview.world.spatial.display.Isymbol pSymbolParamValue = (pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSymbolParamValue != null)
		{
		pSymbolParamValue.setDelegate(true);
		pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		IClassFactory pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(pSymbolParamValue.getCppInstanceTypeName());
		if (pSymbolParamValueClassFactory != null)
		{
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)pSymbolParamValueClassFactory.create();
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		}
		}
		perGeometryExtensionBegun(pGeometryParamValue, pSymbolParamValue);
	}

	native private void perGeometryExtensionBegun_IGeometry_ISymbol(long pNativeObject, long pGeometry, long pSymbol);
	/**
	 * 每个Geometry构造开始时,调用的函数
	 * @param Geometry 当前处理的geometry
	 */
	public void perGeometryExtensionBegun(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		perGeometryExtensionBegun_IGeometry_ISymbol(this.nativeObject.pointer, pGeometryParamValue, pSymbolParamValue);
	}
	native private void perGeometryExtensionBegun_IGeometry_ISymbol_NoVirtual(long pNativeObject, long pGeometry, long pSymbol);
	protected void perGeometryExtensionBegun_NoVirtual(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		perGeometryExtensionBegun_IGeometry_ISymbol_NoVirtual(this.nativeObject.pointer, pGeometryParamValue, pSymbolParamValue);
	}

	protected  void perGeometryExtensionFinished_IGeometry_callback(long pGeometry)
	{
		com.earthview.world.spatial.geometry.Igeometry pGeometryParamValue = (pGeometry == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(pGeometryParamValue != null)
		{
		pGeometryParamValue.setDelegate(true);
		pGeometryParamValue.setInstancePointer(new InstancePointer(pGeometry));
		IClassFactory pGeometryParamValueClassFactory = GlobalClassFactoryMap.get(pGeometryParamValue.getCppInstanceTypeName());
		if (pGeometryParamValueClassFactory != null)
		{
			pGeometryParamValue.setDelegate(true);
			pGeometryParamValue = (com.earthview.world.spatial.geometry.Igeometry)pGeometryParamValueClassFactory.create();
			pGeometryParamValue.setDelegate(true);
			pGeometryParamValue.setInstancePointer(new InstancePointer(pGeometry));
		}
		}
		perGeometryExtensionFinished(pGeometryParamValue);
	}

	native private void perGeometryExtensionFinished_IGeometry(long pNativeObject, long pGeometry);
	/**
	 * 每个Geometry构造完成时,调用的函数
	 * @param Geometry 当前处理的geometry
	 */
	public void perGeometryExtensionFinished(com.earthview.world.spatial.geometry.Igeometry pGeometry)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		perGeometryExtensionFinished_IGeometry(this.nativeObject.pointer, pGeometryParamValue);
	}
	native private void perGeometryExtensionFinished_IGeometry_NoVirtual(long pNativeObject, long pGeometry);
	protected void perGeometryExtensionFinished_NoVirtual(com.earthview.world.spatial.geometry.Igeometry pGeometry)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		perGeometryExtensionFinished_IGeometry_NoVirtual(this.nativeObject.pointer, pGeometryParamValue);
	}

	protected  void preRender_CMultiGeometry3DExtension_callback(long extension)
	{
		com.earthview.world.geometry3d.MultiGeometry3DExtension extensionParamValue = (extension == 0L ? null : new com.earthview.world.geometry3d.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate));
		if(extensionParamValue != null)
		{
		extensionParamValue.setDelegate(true);
		extensionParamValue.setInstancePointer(new InstancePointer(extension));
		IClassFactory extensionParamValueClassFactory = GlobalClassFactoryMap.get(extensionParamValue.getCppInstanceTypeName());
		if (extensionParamValueClassFactory != null)
		{
			extensionParamValue.setDelegate(true);
			extensionParamValue = (com.earthview.world.geometry3d.MultiGeometry3DExtension)extensionParamValueClassFactory.create();
			extensionParamValue.setDelegate(true);
			extensionParamValue.setInstancePointer(new InstancePointer(extension));
		}
		}
		preRender(extensionParamValue);
	}

	native private void preRender_CMultiGeometry3DExtension(long pNativeObject, long extension);
	/**
	 * 渲染前调用的函数
	 * @param extension extension对象
	 */
	public void preRender(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		preRender_CMultiGeometry3DExtension(this.nativeObject.pointer, extensionParamValue);
	}
	native private void preRender_CMultiGeometry3DExtension_NoVirtual(long pNativeObject, long extension);
	protected void preRender_NoVirtual(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		preRender_CMultiGeometry3DExtension_NoVirtual(this.nativeObject.pointer, extensionParamValue);
	}

	protected  void postRender_CMultiGeometry3DExtension_callback(long extension)
	{
		com.earthview.world.geometry3d.MultiGeometry3DExtension extensionParamValue = (extension == 0L ? null : new com.earthview.world.geometry3d.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate));
		if(extensionParamValue != null)
		{
		extensionParamValue.setDelegate(true);
		extensionParamValue.setInstancePointer(new InstancePointer(extension));
		IClassFactory extensionParamValueClassFactory = GlobalClassFactoryMap.get(extensionParamValue.getCppInstanceTypeName());
		if (extensionParamValueClassFactory != null)
		{
			extensionParamValue.setDelegate(true);
			extensionParamValue = (com.earthview.world.geometry3d.MultiGeometry3DExtension)extensionParamValueClassFactory.create();
			extensionParamValue.setDelegate(true);
			extensionParamValue.setInstancePointer(new InstancePointer(extension));
		}
		}
		postRender(extensionParamValue);
	}

	native private void postRender_CMultiGeometry3DExtension(long pNativeObject, long extension);
	/**
	 * 渲染后调用的函数
	 * @param extension extension对象
	 */
	public void postRender(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		postRender_CMultiGeometry3DExtension(this.nativeObject.pointer, extensionParamValue);
	}
	native private void postRender_CMultiGeometry3DExtension_NoVirtual(long pNativeObject, long extension);
	protected void postRender_NoVirtual(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		postRender_CMultiGeometry3DExtension_NoVirtual(this.nativeObject.pointer, extensionParamValue);
	}

	public MultiGeometry3DExtensionListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MultiGeometry3DExtensionListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_userExtension_CMultiGeometry3DExtension(long pNativeObject, String method);
	native protected void register_onSymbolNotSupported_CMultiGeometry3DExtension(long pNativeObject, String method);
	native protected void register_perGeometryExtensionBegun_IGeometry_ISymbol(long pNativeObject, String method);
	native protected void register_perGeometryExtensionFinished_IGeometry(long pNativeObject, String method);
	native protected void register_preRender_CMultiGeometry3DExtension(long pNativeObject, String method);
	native protected void register_postRender_CMultiGeometry3DExtension(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_userExtension_CMultiGeometry3DExtension(this.nativeObject.pointer, "userExtension_CMultiGeometry3DExtension_callback");
			this.register_onSymbolNotSupported_CMultiGeometry3DExtension(this.nativeObject.pointer, "onSymbolNotSupported_CMultiGeometry3DExtension_callback");
			this.register_perGeometryExtensionBegun_IGeometry_ISymbol(this.nativeObject.pointer, "perGeometryExtensionBegun_IGeometry_ISymbol_callback");
			this.register_perGeometryExtensionFinished_IGeometry(this.nativeObject.pointer, "perGeometryExtensionFinished_IGeometry_callback");
			this.register_preRender_CMultiGeometry3DExtension(this.nativeObject.pointer, "preRender_CMultiGeometry3DExtension_callback");
			this.register_postRender_CMultiGeometry3DExtension(this.nativeObject.pointer, "postRender_CMultiGeometry3DExtension_callback");
		}
	}
	
	public static MultiGeometry3DExtensionListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MultiGeometry3DExtensionListener obj = null;
 		if(baseObj instanceof MultiGeometry3DExtensionListener)
		{
			obj = (MultiGeometry3DExtensionListener)baseObj;
		} else {
			obj = new MultiGeometry3DExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMultiGeometry3DExtensionListener");
			obj.increaseCast();
		}

		return obj;
	}
}
