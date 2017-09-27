package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayElement extends com.earthview.world.graphic.Renderable {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayElement", new OverlayElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOverlayElementProxy", new OverlayElementClassFactory());
	}

	public static class OverlayElementInternalStringInterface extends com.earthview.world.core.StringInterface {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface", new OverlayElementInternalStringInterfaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayElement::JCOverlayElementInternalStringInterfaceProxy", new OverlayElementInternalStringInterfaceClassFactory());
		}

		public OverlayElementInternalStringInterface(com.earthview.world.graphic.OverlayElement parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCOverlayElementInternalStringInterfaceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.OverlayElement$OverlayElementInternalStringInterface".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public OverlayElementInternalStringInterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayElementInternalStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public boolean setParameter(String name, String value)
		{
			return super.setParameter_NoVirtual(name, value);
		}
		public boolean setParameter(String name, boolean readOnly, boolean enable)
		{
			return super.setParameter_NoVirtual(name, readOnly, enable);
		}
		public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
		{
			super.setParameterList_NoVirtual(paramList);
		}
		public String getParameter(String name)
		{
			return super.getParameter_NoVirtual(name);
		}
		public void copyParametersTo(com.earthview.world.core.StringInterface dest)
		{
			super.copyParametersTo_NoVirtual(dest);
		}
		
		native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
		native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
		native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
		native protected void register_getParameter_EVString(long pNativeObject, String method);
		native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
				this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
				this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
				this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
				this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
			}
		}
		
		public static OverlayElementInternalStringInterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayElementInternalStringInterface obj = null;
 			if(baseObj instanceof OverlayElementInternalStringInterface)
			{
				obj = (OverlayElementInternalStringInterface)baseObj;
			} else {
				obj = new OverlayElementInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "COverlayElementInternalStringInterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayElementInternalStringInterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayElementInternalStringInterface emptyInstance = new OverlayElementInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getStringInterfacePtr_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayElement.OverlayElementInternalStringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement.OverlayElementInternalStringInterface __returnValue = new com.earthview.world.graphic.OverlayElement.OverlayElementInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElementInternalStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement.OverlayElementInternalStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElementInternalStringInterface");
		}
		return __returnValue;
	}
	protected  void updatePositionGeometry_void_callback()
	{
		updatePositionGeometry();
	}

	native private void updatePositionGeometry_void(long pNativeObject);
	///EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface& getStringInterface() {return *m_pStringInterface;} //
	public void updatePositionGeometry()
	{
		updatePositionGeometry_void(this.nativeObject.pointer);
	}
	native private void updatePositionGeometry_void_NoVirtual(long pNativeObject);
	protected void updatePositionGeometry_NoVirtual()
	{
		updatePositionGeometry_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateTextureGeometry_void_callback()
	{
		updateTextureGeometry();
	}

	native private void updateTextureGeometry_void(long pNativeObject);
	public void updateTextureGeometry()
	{
		updateTextureGeometry_void(this.nativeObject.pointer);
	}
	native private void updateTextureGeometry_void_NoVirtual(long pNativeObject);
	protected void updateTextureGeometry_NoVirtual()
	{
		updateTextureGeometry_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addBaseParameters_void_callback()
	{
		addBaseParameters();
	}

	native private void addBaseParameters_void(long pNativeObject);
	public void addBaseParameters()
	{
		addBaseParameters_void(this.nativeObject.pointer);
	}
	native private void addBaseParameters_void_NoVirtual(long pNativeObject);
	protected void addBaseParameters_NoVirtual()
	{
		addBaseParameters_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean preRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}
	native private boolean preRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}

	native private void postRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}
	native private void postRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}

	//// Constructor: do not call direct, use COverlayManager::createElement
	public OverlayElement(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCOverlayElementProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OverlayElement".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void initialise_void_callback()
	{
		initialise();
	}

	native private void initialise_void(long pNativeObject);
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getName_void(long pNativeObject);
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void show_void_callback()
	{
		show();
	}

	native private void show_void(long pNativeObject);
	public void show()
	{
		show_void(this.nativeObject.pointer);
	}
	native private void show_void_NoVirtual(long pNativeObject);
	protected void show_NoVirtual()
	{
		show_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void hide_void_callback()
	{
		hide();
	}

	native private void hide_void(long pNativeObject);
	public void hide()
	{
		hide_void(this.nativeObject.pointer);
	}
	native private void hide_void_NoVirtual(long pNativeObject);
	protected void hide_NoVirtual()
	{
		hide_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean isVisible_void(long pNativeObject);
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEnabled_void(long pNativeObject);
	public boolean isEnabled()
	{
		boolean returnValue = isEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setEnabled_ev_bool_callback(boolean b)
	{
		boolean bParamValue = b;
		setEnabled(bParamValue);
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean b);
	public void setEnabled(boolean b)
	{
		boolean bParamValue = b;
		setEnabled_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean b);
	protected void setEnabled_NoVirtual(boolean b)
	{
		boolean bParamValue = b;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, bParamValue);
	}

	native private void setDimensions_Real_Real(long pNativeObject, double width, double height);
	public void setDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void setPosition_Real_Real(long pNativeObject, double left, double top);
	public void setPosition(double left, double top)
	{
		double leftParamValue = left;
		double topParamValue = top;
		setPosition_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue);
	}
	native private void setWidth_Real(long pNativeObject, double width);
	public void setWidth(double width)
	{
		double widthParamValue = width;
		setWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private double getWidth_void(long pNativeObject);
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHeight_Real(long pNativeObject, double height);
	public void setHeight(double height)
	{
		double heightParamValue = height;
		setHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private double getHeight_void(long pNativeObject);
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLeft_Real(long pNativeObject, double left);
	public void setLeft(double left)
	{
		double leftParamValue = left;
		setLeft_Real(this.nativeObject.pointer, leftParamValue);
	}
	native private double getLeft_void(long pNativeObject);
	public double getLeft()
	{
		double returnValue = getLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTop_Real(long pNativeObject, double Top);
	public void setTop(double Top)
	{
		double TopParamValue = Top;
		setTop_Real(this.nativeObject.pointer, TopParamValue);
	}
	native private double getTop_void(long pNativeObject);
	public double getTop()
	{
		double returnValue = getTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getLeft_void(long pNativeObject);
	public double _getLeft()
	{
		double returnValue = _getLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getTop_void(long pNativeObject);
	public double _getTop()
	{
		double returnValue = _getTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getWidth_void(long pNativeObject);
	public double _getWidth()
	{
		double returnValue = _getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getHeight_void(long pNativeObject);
	public double _getHeight()
	{
		double returnValue = _getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _setLeft_Real(long pNativeObject, double left);
	public void _setLeft(double left)
	{
		double leftParamValue = left;
		_setLeft_Real(this.nativeObject.pointer, leftParamValue);
	}
	native private void _setTop_Real(long pNativeObject, double top);
	public void _setTop(double top)
	{
		double topParamValue = top;
		_setTop_Real(this.nativeObject.pointer, topParamValue);
	}
	native private void _setWidth_Real(long pNativeObject, double width);
	public void _setWidth(double width)
	{
		double widthParamValue = width;
		_setWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private void _setHeight_Real(long pNativeObject, double height);
	public void _setHeight(double height)
	{
		double heightParamValue = height;
		_setHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private void _setPosition_Real_Real(long pNativeObject, double left, double top);
	public void _setPosition(double left, double top)
	{
		double leftParamValue = left;
		double topParamValue = top;
		_setPosition_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue);
	}
	native private void _setDimensions_Real_Real(long pNativeObject, double width, double height);
	public void _setDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		_setDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	protected  String getMaterialName_void_callback()
	{
		String returnValue = getMaterialName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMaterialName_void(long pNativeObject);
	public String getMaterialName()
	{
		String returnValue = getMaterialName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMaterialName_void_NoVirtual(long pNativeObject);
	protected String getMaterialName_NoVirtual()
	{
		String returnValue = getMaterialName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMaterialName_EVString_callback(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName(matNameParamValue);
	}

	native private void setMaterialName_EVString(long pNativeObject, String matName);
	public void setMaterialName(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName_EVString(this.nativeObject.pointer, matNameParamValue);
	}
	native private void setMaterialName_EVString_NoVirtual(long pNativeObject, String matName);
	protected void setMaterialName_NoVirtual(String matName)
	{
		String matNameParamValue = matName;
		setMaterialName_EVString_NoVirtual(this.nativeObject.pointer, matNameParamValue);
	}

	native private long getMaterial_void(long pNativeObject);
	/// --- EarthView::World::Graphic::CRenderable Overrides ---
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	/// NB getRenderOperation not implemented, still abstract here
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	protected  void _positionsOutOfDate_void_callback()
	{
		_positionsOutOfDate();
	}

	native private void _positionsOutOfDate_void(long pNativeObject);
	public void _positionsOutOfDate()
	{
		_positionsOutOfDate_void(this.nativeObject.pointer);
	}
	native private void _positionsOutOfDate_void_NoVirtual(long pNativeObject);
	protected void _positionsOutOfDate_NoVirtual()
	{
		_positionsOutOfDate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _update_void_callback()
	{
		_update();
	}

	native private void _update_void(long pNativeObject);
	public void _update()
	{
		_update_void(this.nativeObject.pointer);
	}
	native private void _update_void_NoVirtual(long pNativeObject);
	protected void _update_NoVirtual()
	{
		_update_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _updateFromParent_void_callback()
	{
		_updateFromParent();
	}

	native private void _updateFromParent_void(long pNativeObject);
	public void _updateFromParent()
	{
		_updateFromParent_void(this.nativeObject.pointer);
	}
	native private void _updateFromParent_void_NoVirtual(long pNativeObject);
	protected void _updateFromParent_NoVirtual()
	{
		_updateFromParent_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyParent_COverlayContainer_COverlay_callback(long ref_parent, long ref_overlay)
	{
		com.earthview.world.graphic.OverlayContainer ref_parentParamValue = (ref_parent == 0L ? null : new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_parentParamValue != null)
		{
		ref_parentParamValue.setDelegate(true);
		ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		IClassFactory ref_parentParamValueClassFactory = GlobalClassFactoryMap.get(ref_parentParamValue.getCppInstanceTypeName());
		if (ref_parentParamValueClassFactory != null)
		{
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue = (com.earthview.world.graphic.OverlayContainer)ref_parentParamValueClassFactory.create();
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		}
		}
		com.earthview.world.graphic.Overlay ref_overlayParamValue = (ref_overlay == 0L ? null : new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_overlayParamValue != null)
		{
		ref_overlayParamValue.setDelegate(true);
		ref_overlayParamValue.setInstancePointer(new InstancePointer(ref_overlay));
		IClassFactory ref_overlayParamValueClassFactory = GlobalClassFactoryMap.get(ref_overlayParamValue.getCppInstanceTypeName());
		if (ref_overlayParamValueClassFactory != null)
		{
			ref_overlayParamValue.setDelegate(true);
			ref_overlayParamValue = (com.earthview.world.graphic.Overlay)ref_overlayParamValueClassFactory.create();
			ref_overlayParamValue.setDelegate(true);
			ref_overlayParamValue.setInstancePointer(new InstancePointer(ref_overlay));
		}
		}
		_notifyParent(ref_parentParamValue, ref_overlayParamValue);
	}

	native private void _notifyParent_COverlayContainer_COverlay(long pNativeObject, long ref_parent, long ref_overlay);
	public void _notifyParent(com.earthview.world.graphic.OverlayContainer ref_parent, com.earthview.world.graphic.Overlay ref_overlay)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		long ref_overlayParamValue = (ref_overlay == null ? 0L : ref_overlay.nativeObject.pointer);
		_notifyParent_COverlayContainer_COverlay(this.nativeObject.pointer, ref_parentParamValue, ref_overlayParamValue);
	}
	native private void _notifyParent_COverlayContainer_COverlay_NoVirtual(long pNativeObject, long ref_parent, long ref_overlay);
	protected void _notifyParent_NoVirtual(com.earthview.world.graphic.OverlayContainer ref_parent, com.earthview.world.graphic.Overlay ref_overlay)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		long ref_overlayParamValue = (ref_overlay == null ? 0L : ref_overlay.nativeObject.pointer);
		_notifyParent_COverlayContainer_COverlay_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, ref_overlayParamValue);
	}

	protected  double _getDerivedLeft_void_callback()
	{
		double returnValue = _getDerivedLeft();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double _getDerivedLeft_void(long pNativeObject);
	public double _getDerivedLeft()
	{
		double returnValue = _getDerivedLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getDerivedLeft_void_NoVirtual(long pNativeObject);
	protected double _getDerivedLeft_NoVirtual()
	{
		double returnValue = _getDerivedLeft_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double _getDerivedTop_void_callback()
	{
		double returnValue = _getDerivedTop();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double _getDerivedTop_void(long pNativeObject);
	public double _getDerivedTop()
	{
		double returnValue = _getDerivedTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getDerivedTop_void_NoVirtual(long pNativeObject);
	protected double _getDerivedTop_NoVirtual()
	{
		double returnValue = _getDerivedTop_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double _getRelativeWidth_void_callback()
	{
		double returnValue = _getRelativeWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double _getRelativeWidth_void(long pNativeObject);
	public double _getRelativeWidth()
	{
		double returnValue = _getRelativeWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getRelativeWidth_void_NoVirtual(long pNativeObject);
	protected double _getRelativeWidth_NoVirtual()
	{
		double returnValue = _getRelativeWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double _getRelativeHeight_void_callback()
	{
		double returnValue = _getRelativeHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double _getRelativeHeight_void(long pNativeObject);
	public double _getRelativeHeight()
	{
		double returnValue = _getRelativeHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _getRelativeHeight_void_NoVirtual(long pNativeObject);
	protected double _getRelativeHeight_NoVirtual()
	{
		double returnValue = _getRelativeHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _getClippingRegion_Rectangle_callback(long clippingRegion)
	{
		com.earthview.world.graphic.Rectangle clippingRegionParamValue = new com.earthview.world.graphic.Rectangle(CreatedWhenConstruct.CWC_NotToCreate);
		clippingRegionParamValue.setDelegate(true);
		clippingRegionParamValue.setInstancePointer(new InstancePointer(clippingRegion));
		IClassFactory clippingRegionParamValueClassFactory = GlobalClassFactoryMap.get(clippingRegionParamValue.getCppInstanceTypeName());
		if (clippingRegionParamValueClassFactory != null)
		{
			clippingRegionParamValue.setDelegate(true);
			clippingRegionParamValue = (com.earthview.world.graphic.Rectangle)clippingRegionParamValueClassFactory.create();
			clippingRegionParamValue.setDelegate(true);
			clippingRegionParamValue.setInstancePointer(new InstancePointer(clippingRegion));
		}
		_getClippingRegion(clippingRegionParamValue);
	}

	native private void _getClippingRegion_Rectangle(long pNativeObject, long clippingRegion);
	public void _getClippingRegion(com.earthview.world.graphic.Rectangle clippingRegion)
	{
		long clippingRegionParamValue = clippingRegion.nativeObject.pointer;
		_getClippingRegion_Rectangle(this.nativeObject.pointer, clippingRegionParamValue);
	}
	native private void _getClippingRegion_Rectangle_NoVirtual(long pNativeObject, long clippingRegion);
	protected void _getClippingRegion_NoVirtual(com.earthview.world.graphic.Rectangle clippingRegion)
	{
		long clippingRegionParamValue = clippingRegion.nativeObject.pointer;
		_getClippingRegion_Rectangle_NoVirtual(this.nativeObject.pointer, clippingRegionParamValue);
	}

	protected  int _notifyZOrder_ev_uint16_callback(int newZOrder)
	{
		int newZOrderParamValue = newZOrder;
		int returnValue = _notifyZOrder(newZOrderParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int _notifyZOrder_ev_uint16(long pNativeObject, int newZOrder);
	public int _notifyZOrder(int newZOrder)
	{
		int newZOrderParamValue = newZOrder;
		int returnValue = _notifyZOrder_ev_uint16(this.nativeObject.pointer, newZOrderParamValue);
		return returnValue;
	}
	native private int _notifyZOrder_ev_uint16_NoVirtual(long pNativeObject, int newZOrder);
	protected int _notifyZOrder_NoVirtual(int newZOrder)
	{
		int newZOrderParamValue = newZOrder;
		int returnValue = _notifyZOrder_ev_uint16_NoVirtual(this.nativeObject.pointer, newZOrderParamValue);
		return returnValue;
	}

	protected  void _notifyWorldTransforms_CMatrix4_callback(long xform)
	{
		com.earthview.world.spatial.math.Matrix4 xformParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		xformParamValue.setDelegate(true);
		xformParamValue.setInstancePointer(new InstancePointer(xform));
		IClassFactory xformParamValueClassFactory = GlobalClassFactoryMap.get(xformParamValue.getCppInstanceTypeName());
		if (xformParamValueClassFactory != null)
		{
			xformParamValue.setDelegate(true);
			xformParamValue = (com.earthview.world.spatial.math.Matrix4)xformParamValueClassFactory.create();
			xformParamValue.setDelegate(true);
			xformParamValue.setInstancePointer(new InstancePointer(xform));
		}
		_notifyWorldTransforms(xformParamValue);
	}

	native private void _notifyWorldTransforms_CMatrix4(long pNativeObject, long xform);
	public void _notifyWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = xform.nativeObject.pointer;
		_notifyWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void _notifyWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void _notifyWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = xform.nativeObject.pointer;
		_notifyWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	protected  void _notifyViewport_void_callback()
	{
		_notifyViewport();
	}

	native private void _notifyViewport_void(long pNativeObject);
	public void _notifyViewport()
	{
		_notifyViewport_void(this.nativeObject.pointer);
	}
	native private void _notifyViewport_void_NoVirtual(long pNativeObject);
	protected void _notifyViewport_NoVirtual()
	{
		_notifyViewport_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _updateRenderQueue_CRenderQueue_callback(long queue)
	{
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		_updateRenderQueue(queueParamValue);
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	protected  void visitRenderables_CVisitor_ev_bool_callback(long visitor, boolean debugRenderables)
	{
		com.earthview.world.graphic.Renderable.Visitor visitorParamValue = (visitor == 0L ? null : new com.earthview.world.graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate));
		if(visitorParamValue != null)
		{
		visitorParamValue.setDelegate(true);
		visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		IClassFactory visitorParamValueClassFactory = GlobalClassFactoryMap.get(visitorParamValue.getCppInstanceTypeName());
		if (visitorParamValueClassFactory != null)
		{
			visitorParamValue.setDelegate(true);
			visitorParamValue = (com.earthview.world.graphic.Renderable.Visitor)visitorParamValueClassFactory.create();
			visitorParamValue.setDelegate(true);
			visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		}
		}
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables(visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	//// @copydoc CMovableObject::visitRenderables
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	protected  String getTypeName_void_callback()
	{
		String returnValue = getTypeName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getTypeName_void(long pNativeObject);
	public String getTypeName()
	{
		String returnValue = getTypeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeName_void_NoVirtual(long pNativeObject);
	protected String getTypeName_NoVirtual()
	{
		String returnValue = getTypeName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCaption_EarthView_World_Core_DisplayString_callback(String text)
	{
		String textParamValue = text;
		setCaption(textParamValue);
	}

	native private void setCaption_EarthView_World_Core_DisplayString(long pNativeObject, String text);
	public void setCaption(String text)
	{
		String textParamValue = text;
		setCaption_EarthView_World_Core_DisplayString(this.nativeObject.pointer, textParamValue);
	}
	native private void setCaption_EarthView_World_Core_DisplayString_NoVirtual(long pNativeObject, String text);
	protected void setCaption_NoVirtual(String text)
	{
		String textParamValue = text;
		setCaption_EarthView_World_Core_DisplayString_NoVirtual(this.nativeObject.pointer, textParamValue);
	}

	protected  String getCaption_void_callback()
	{
		String returnValue = getCaption();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getCaption_void(long pNativeObject);
	public String getCaption()
	{
		String returnValue = getCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCaption_void_NoVirtual(long pNativeObject);
	protected String getCaption_NoVirtual()
	{
		String returnValue = getCaption_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColour_CColourValue_callback(long col)
	{
		com.earthview.world.graphic.ColourValue colParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colParamValue.setDelegate(true);
		colParamValue.setInstancePointer(new InstancePointer(col));
		IClassFactory colParamValueClassFactory = GlobalClassFactoryMap.get(colParamValue.getCppInstanceTypeName());
		if (colParamValueClassFactory != null)
		{
			colParamValue.setDelegate(true);
			colParamValue = (com.earthview.world.graphic.ColourValue)colParamValueClassFactory.create();
			colParamValue.setDelegate(true);
			colParamValue.setInstancePointer(new InstancePointer(col));
		}
		setColour(colParamValue);
	}

	native private void setColour_CColourValue(long pNativeObject, long col);
	public void setColour(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColour_CColourValue(this.nativeObject.pointer, colParamValue);
	}
	native private void setColour_CColourValue_NoVirtual(long pNativeObject, long col);
	protected void setColour_NoVirtual(com.earthview.world.graphic.ColourValue col)
	{
		long colParamValue = col.nativeObject.pointer;
		setColour_CColourValue_NoVirtual(this.nativeObject.pointer, colParamValue);
	}

	protected  long getColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getColour()
	{
		long returnValue = getColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColour_NoVirtual()
	{
		long returnValue = getColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  void setMetricsMode_GuiMetricsMode_callback(int gmm)
	{
		com.earthview.world.graphic.GuiMetricsMode gmmParamValue = com.earthview.world.graphic.GuiMetricsMode.toEnum(gmm);
		setMetricsMode(gmmParamValue);
	}

	native private void setMetricsMode_GuiMetricsMode(long pNativeObject, int gmm);
	public void setMetricsMode(com.earthview.world.graphic.GuiMetricsMode gmm)
	{
		int gmmParamValue = gmm.getValue();
		setMetricsMode_GuiMetricsMode(this.nativeObject.pointer, gmmParamValue);
	}
	native private void setMetricsMode_GuiMetricsMode_NoVirtual(long pNativeObject, int gmm);
	protected void setMetricsMode_NoVirtual(com.earthview.world.graphic.GuiMetricsMode gmm)
	{
		int gmmParamValue = gmm.getValue();
		setMetricsMode_GuiMetricsMode_NoVirtual(this.nativeObject.pointer, gmmParamValue);
	}

	protected  int getMetricsMode_void_callback()
	{
		com.earthview.world.graphic.GuiMetricsMode returnValue = getMetricsMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getMetricsMode_void(long pNativeObject);
	public com.earthview.world.graphic.GuiMetricsMode getMetricsMode()
	{
		int returnValue = getMetricsMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiMetricsMode.toEnum(returnValue);
	}
	native private int getMetricsMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GuiMetricsMode getMetricsMode_NoVirtual()
	{
		int returnValue = getMetricsMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiMetricsMode.toEnum(returnValue);
	}

	protected  void setHorizontalAlignment_GuiHorizontalAlignment_callback(int gha)
	{
		com.earthview.world.graphic.GuiHorizontalAlignment ghaParamValue = com.earthview.world.graphic.GuiHorizontalAlignment.toEnum(gha);
		setHorizontalAlignment(ghaParamValue);
	}

	native private void setHorizontalAlignment_GuiHorizontalAlignment(long pNativeObject, int gha);
	public void setHorizontalAlignment(com.earthview.world.graphic.GuiHorizontalAlignment gha)
	{
		int ghaParamValue = gha.getValue();
		setHorizontalAlignment_GuiHorizontalAlignment(this.nativeObject.pointer, ghaParamValue);
	}
	native private void setHorizontalAlignment_GuiHorizontalAlignment_NoVirtual(long pNativeObject, int gha);
	protected void setHorizontalAlignment_NoVirtual(com.earthview.world.graphic.GuiHorizontalAlignment gha)
	{
		int ghaParamValue = gha.getValue();
		setHorizontalAlignment_GuiHorizontalAlignment_NoVirtual(this.nativeObject.pointer, ghaParamValue);
	}

	protected  int getHorizontalAlignment_void_callback()
	{
		com.earthview.world.graphic.GuiHorizontalAlignment returnValue = getHorizontalAlignment();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getHorizontalAlignment_void(long pNativeObject);
	public com.earthview.world.graphic.GuiHorizontalAlignment getHorizontalAlignment()
	{
		int returnValue = getHorizontalAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiHorizontalAlignment.toEnum(returnValue);
	}
	native private int getHorizontalAlignment_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GuiHorizontalAlignment getHorizontalAlignment_NoVirtual()
	{
		int returnValue = getHorizontalAlignment_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiHorizontalAlignment.toEnum(returnValue);
	}

	protected  void setVerticalAlignment_GuiVerticalAlignment_callback(int gva)
	{
		com.earthview.world.graphic.GuiVerticalAlignment gvaParamValue = com.earthview.world.graphic.GuiVerticalAlignment.toEnum(gva);
		setVerticalAlignment(gvaParamValue);
	}

	native private void setVerticalAlignment_GuiVerticalAlignment(long pNativeObject, int gva);
	public void setVerticalAlignment(com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		int gvaParamValue = gva.getValue();
		setVerticalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, gvaParamValue);
	}
	native private void setVerticalAlignment_GuiVerticalAlignment_NoVirtual(long pNativeObject, int gva);
	protected void setVerticalAlignment_NoVirtual(com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		int gvaParamValue = gva.getValue();
		setVerticalAlignment_GuiVerticalAlignment_NoVirtual(this.nativeObject.pointer, gvaParamValue);
	}

	protected  int getVerticalAlignment_void_callback()
	{
		com.earthview.world.graphic.GuiVerticalAlignment returnValue = getVerticalAlignment();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getVerticalAlignment_void(long pNativeObject);
	public com.earthview.world.graphic.GuiVerticalAlignment getVerticalAlignment()
	{
		int returnValue = getVerticalAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiVerticalAlignment.toEnum(returnValue);
	}
	native private int getVerticalAlignment_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GuiVerticalAlignment getVerticalAlignment_NoVirtual()
	{
		int returnValue = getVerticalAlignment_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.GuiVerticalAlignment.toEnum(returnValue);
	}

	protected  boolean contains_Real_Real_callback(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = contains(xParamValue, yParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean contains_Real_Real(long pNativeObject, double x, double y);
	public boolean contains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = contains_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean contains_Real_Real_NoVirtual(long pNativeObject, double x, double y);
	protected boolean contains_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = contains_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}

	protected  long findElementAt_Real_Real_callback(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		com.earthview.world.graphic.OverlayElement returnValue = findElementAt(xParamValue, yParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long findElementAt_Real_Real(long pNativeObject, double x, double y);
	public com.earthview.world.graphic.OverlayElement findElementAt(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = findElementAt_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long findElementAt_Real_Real_NoVirtual(long pNativeObject, double x, double y);
	protected com.earthview.world.graphic.OverlayElement findElementAt_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = findElementAt_Real_Real_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	protected  boolean isContainer_void_callback()
	{
		boolean returnValue = isContainer();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isContainer_void(long pNativeObject);
	/// relative to parent
	public boolean isContainer()
	{
		boolean returnValue = isContainer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isContainer_void_NoVirtual(long pNativeObject);
	protected boolean isContainer_NoVirtual()
	{
		boolean returnValue = isContainer_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isKeyEnabled_void_callback()
	{
		boolean returnValue = isKeyEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isKeyEnabled_void(long pNativeObject);
	public boolean isKeyEnabled()
	{
		boolean returnValue = isKeyEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isKeyEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isKeyEnabled_NoVirtual()
	{
		boolean returnValue = isKeyEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isCloneable_void_callback()
	{
		boolean returnValue = isCloneable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCloneable_void(long pNativeObject);
	public boolean isCloneable()
	{
		boolean returnValue = isCloneable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCloneable_void_NoVirtual(long pNativeObject);
	protected boolean isCloneable_NoVirtual()
	{
		boolean returnValue = isCloneable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCloneable_ev_bool_callback(boolean c)
	{
		boolean cParamValue = c;
		setCloneable(cParamValue);
	}

	native private void setCloneable_ev_bool(long pNativeObject, boolean c);
	public void setCloneable(boolean c)
	{
		boolean cParamValue = c;
		setCloneable_ev_bool(this.nativeObject.pointer, cParamValue);
	}
	native private void setCloneable_ev_bool_NoVirtual(long pNativeObject, boolean c);
	protected void setCloneable_NoVirtual(boolean c)
	{
		boolean cParamValue = c;
		setCloneable_ev_bool_NoVirtual(this.nativeObject.pointer, cParamValue);
	}

	native private long getParent_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayContainer getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
		}
		return __returnValue;
	}
	native private void _setParent_COverlayContainer(long pNativeObject, long ref_parent);
	public void _setParent(com.earthview.world.graphic.OverlayContainer ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_setParent_COverlayContainer(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private int getZOrder_void(long pNativeObject);
	public int getZOrder()
	{
		int returnValue = getZOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	native private long getLights_void(long pNativeObject);
	public com.earthview.world.graphic.LightList getLights()
	{
		long returnValue = getLights_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}
	native private long getLights_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.LightList getLights_NoVirtual()
	{
		long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}

	protected  void copyFromTemplate_COverlayElement_callback(long ref_templateOverlay)
	{
		com.earthview.world.graphic.OverlayElement ref_templateOverlayParamValue = (ref_templateOverlay == 0L ? null : new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_templateOverlayParamValue != null)
		{
		ref_templateOverlayParamValue.setDelegate(true);
		ref_templateOverlayParamValue.setInstancePointer(new InstancePointer(ref_templateOverlay));
		IClassFactory ref_templateOverlayParamValueClassFactory = GlobalClassFactoryMap.get(ref_templateOverlayParamValue.getCppInstanceTypeName());
		if (ref_templateOverlayParamValueClassFactory != null)
		{
			ref_templateOverlayParamValue.setDelegate(true);
			ref_templateOverlayParamValue = (com.earthview.world.graphic.OverlayElement)ref_templateOverlayParamValueClassFactory.create();
			ref_templateOverlayParamValue.setDelegate(true);
			ref_templateOverlayParamValue.setInstancePointer(new InstancePointer(ref_templateOverlay));
		}
		}
		copyFromTemplate(ref_templateOverlayParamValue);
	}

	native private void copyFromTemplate_COverlayElement(long pNativeObject, long ref_templateOverlay);
	public void copyFromTemplate(com.earthview.world.graphic.OverlayElement ref_templateOverlay)
	{
		long ref_templateOverlayParamValue = (ref_templateOverlay == null ? 0L : ref_templateOverlay.nativeObject.pointer);
		copyFromTemplate_COverlayElement(this.nativeObject.pointer, ref_templateOverlayParamValue);
	}
	native private void copyFromTemplate_COverlayElement_NoVirtual(long pNativeObject, long ref_templateOverlay);
	protected void copyFromTemplate_NoVirtual(com.earthview.world.graphic.OverlayElement ref_templateOverlay)
	{
		long ref_templateOverlayParamValue = (ref_templateOverlay == null ? 0L : ref_templateOverlay.nativeObject.pointer);
		copyFromTemplate_COverlayElement_NoVirtual(this.nativeObject.pointer, ref_templateOverlayParamValue);
	}

	protected  long ev_clone_EVString_callback(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		com.earthview.world.graphic.OverlayElement returnValue = ev_clone(instanceNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_EVString(long pNativeObject, String instanceName);
	public com.earthview.world.graphic.OverlayElement ev_clone(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_NoVirtual(long pNativeObject, String instanceName);
	protected com.earthview.world.graphic.OverlayElement ev_clone_NoVirtual(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = ev_clone_EVString_NoVirtual(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	native private long getSourceTemplate_void(long pNativeObject);
	/// Returns the SourceTemplate for this element
	public com.earthview.world.graphic.OverlayElement getSourceTemplate()
	{
		long returnValue = getSourceTemplate_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	public OverlayElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OverlayElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获得技术
	 * @param  
	 */
	public com.earthview.world.graphic.Technique getTechnique()
	{
		return super.getTechnique_NoVirtual();
	}
	/**
	 * 获得渲染操作
	 * @param op 
	 */
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	/**
	 * 获得渲染对象的世界变换矩阵的数量
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		return super.getNumWorldTransforms_NoVirtual();
	}
	/**
	 * 是否投射投影
	 * @param  
	 */
	public boolean getCastsShadows()
	{
		return super.getCastsShadows_NoVirtual();
	}
	/**
	 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
	 * @param constantEntry CAutoConstantEntry的别名
	 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
	 */
	public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
	}
	/**
	 * 设置多边形渲染方式是否可重写
	 * @param override 设置参数
	 * @return true可以超越，false不可以
	 */
	public void setPolygonModeOverrideable(boolean override)
	{
		super.setPolygonModeOverrideable_NoVirtual(override);
	}
	/**
	 * 获得多边形渲染方式是否可重写
	 * @param  
	 */
	public boolean getPolygonModeOverrideable()
	{
		return super.getPolygonModeOverrideable_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		super.setCustomAmbient_NoVirtual(ambient);
	}
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		return super.getCustomAmbient_NoVirtual();
	}
	/**
	 * 获取自定义环境光系数是否启用
	 * @param  
	 */
	public boolean getCustomAmbientEnabled()
	{
		return super.getCustomAmbientEnabled_NoVirtual();
	}
	/**
	 * 设置自定义环境光系数是否启用
	 * @param  
	 */
	public void setCustomAmbientEnabled(boolean enabled)
	{
		super.setCustomAmbientEnabled_NoVirtual(enabled);
	}
	public com.earthview.world.graphic.MovableObject getMovableObject()
	{
		return super.getMovableObject_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 设置渲染系统的私有数据
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
	{
		return super.getRenderSystemData_NoVirtual();
	}
	/**
	 * 获得渲染系统的私有数据
	 * @param  
	 */
	public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		super.setRenderSystemData_NoVirtual(ref_val);
	}
	
	native protected void register_updatePositionGeometry_void(long pNativeObject, String method);
	native protected void register_updateTextureGeometry_void(long pNativeObject, String method);
	native protected void register_addBaseParameters_void(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_show_void(long pNativeObject, String method);
	native protected void register_hide_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register__positionsOutOfDate_void(long pNativeObject, String method);
	native protected void register__update_void(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register__notifyParent_COverlayContainer_COverlay(long pNativeObject, String method);
	native protected void register__getDerivedLeft_void(long pNativeObject, String method);
	native protected void register__getDerivedTop_void(long pNativeObject, String method);
	native protected void register__getRelativeWidth_void(long pNativeObject, String method);
	native protected void register__getRelativeHeight_void(long pNativeObject, String method);
	native protected void register__getClippingRegion_Rectangle(long pNativeObject, String method);
	native protected void register__notifyZOrder_ev_uint16(long pNativeObject, String method);
	native protected void register__notifyWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register__notifyViewport_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_getTypeName_void(long pNativeObject, String method);
	native protected void register_setCaption_EarthView_World_Core_DisplayString(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setColour_CColourValue(long pNativeObject, String method);
	native protected void register_getColour_void(long pNativeObject, String method);
	native protected void register_setMetricsMode_GuiMetricsMode(long pNativeObject, String method);
	native protected void register_getMetricsMode_void(long pNativeObject, String method);
	native protected void register_setHorizontalAlignment_GuiHorizontalAlignment(long pNativeObject, String method);
	native protected void register_getHorizontalAlignment_void(long pNativeObject, String method);
	native protected void register_setVerticalAlignment_GuiVerticalAlignment(long pNativeObject, String method);
	native protected void register_getVerticalAlignment_void(long pNativeObject, String method);
	native protected void register_contains_Real_Real(long pNativeObject, String method);
	native protected void register_findElementAt_Real_Real(long pNativeObject, String method);
	native protected void register_isContainer_void(long pNativeObject, String method);
	native protected void register_isKeyEnabled_void(long pNativeObject, String method);
	native protected void register_isCloneable_void(long pNativeObject, String method);
	native protected void register_setCloneable_ev_bool(long pNativeObject, String method);
	native protected void register_copyFromTemplate_COverlayElement(long pNativeObject, String method);
	native protected void register_ev_clone_EVString(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getTechnique_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_getCustomAmbient_void(long pNativeObject, String method);
	native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMovableObject_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getRenderSystemData_void(long pNativeObject, String method);
	native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_updatePositionGeometry_void(this.nativeObject.pointer, "updatePositionGeometry_void_callback");
			this.register_updateTextureGeometry_void(this.nativeObject.pointer, "updateTextureGeometry_void_callback");
			this.register_addBaseParameters_void(this.nativeObject.pointer, "addBaseParameters_void_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_show_void(this.nativeObject.pointer, "show_void_callback");
			this.register_hide_void(this.nativeObject.pointer, "hide_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register__positionsOutOfDate_void(this.nativeObject.pointer, "_positionsOutOfDate_void_callback");
			this.register__update_void(this.nativeObject.pointer, "_update_void_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register__notifyParent_COverlayContainer_COverlay(this.nativeObject.pointer, "_notifyParent_COverlayContainer_COverlay_callback");
			this.register__getDerivedLeft_void(this.nativeObject.pointer, "_getDerivedLeft_void_callback");
			this.register__getDerivedTop_void(this.nativeObject.pointer, "_getDerivedTop_void_callback");
			this.register__getRelativeWidth_void(this.nativeObject.pointer, "_getRelativeWidth_void_callback");
			this.register__getRelativeHeight_void(this.nativeObject.pointer, "_getRelativeHeight_void_callback");
			this.register__getClippingRegion_Rectangle(this.nativeObject.pointer, "_getClippingRegion_Rectangle_callback");
			this.register__notifyZOrder_ev_uint16(this.nativeObject.pointer, "_notifyZOrder_ev_uint16_callback");
			this.register__notifyWorldTransforms_CMatrix4(this.nativeObject.pointer, "_notifyWorldTransforms_CMatrix4_callback");
			this.register__notifyViewport_void(this.nativeObject.pointer, "_notifyViewport_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_getTypeName_void(this.nativeObject.pointer, "getTypeName_void_callback");
			this.register_setCaption_EarthView_World_Core_DisplayString(this.nativeObject.pointer, "setCaption_EarthView_World_Core_DisplayString_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setColour_CColourValue(this.nativeObject.pointer, "setColour_CColourValue_callback");
			this.register_getColour_void(this.nativeObject.pointer, "getColour_void_callback");
			this.register_setMetricsMode_GuiMetricsMode(this.nativeObject.pointer, "setMetricsMode_GuiMetricsMode_callback");
			this.register_getMetricsMode_void(this.nativeObject.pointer, "getMetricsMode_void_callback");
			this.register_setHorizontalAlignment_GuiHorizontalAlignment(this.nativeObject.pointer, "setHorizontalAlignment_GuiHorizontalAlignment_callback");
			this.register_getHorizontalAlignment_void(this.nativeObject.pointer, "getHorizontalAlignment_void_callback");
			this.register_setVerticalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, "setVerticalAlignment_GuiVerticalAlignment_callback");
			this.register_getVerticalAlignment_void(this.nativeObject.pointer, "getVerticalAlignment_void_callback");
			this.register_contains_Real_Real(this.nativeObject.pointer, "contains_Real_Real_callback");
			this.register_findElementAt_Real_Real(this.nativeObject.pointer, "findElementAt_Real_Real_callback");
			this.register_isContainer_void(this.nativeObject.pointer, "isContainer_void_callback");
			this.register_isKeyEnabled_void(this.nativeObject.pointer, "isKeyEnabled_void_callback");
			this.register_isCloneable_void(this.nativeObject.pointer, "isCloneable_void_callback");
			this.register_setCloneable_ev_bool(this.nativeObject.pointer, "setCloneable_ev_bool_callback");
			this.register_copyFromTemplate_COverlayElement(this.nativeObject.pointer, "copyFromTemplate_COverlayElement_callback");
			this.register_ev_clone_EVString(this.nativeObject.pointer, "ev_clone_EVString_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
			this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
			this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
			this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
			this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
			this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
			this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
			this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
		}
	}
	
	public static OverlayElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OverlayElement obj = null;
 		if(baseObj instanceof OverlayElement)
		{
			obj = (OverlayElement)baseObj;
		} else {
			obj = new OverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COverlayElement");
			obj.increaseCast();
		}

		return obj;
	}
}
