package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Overlay extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlay", new OverlayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOverlayProxy", new OverlayClassFactory());
	}

	public static class OverlayContainerList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlay::OverlayContainerList", new OverlayContainerListClassFactory());
		}

		public OverlayContainerList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OverlayContainerList", null);
		}

		native private void push_back_COverlayContainer(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_COverlayContainer(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void push_front_COverlayContainer(long pNativeObject, long ref_t);
		public void push_front(NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_front_COverlayContainer(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OverlayContainer>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_COverlayContainer(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_COverlayContainer(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private void remove_COverlayContainer(long pNativeObject, long t);
		public void remove(NativeObjectPointer<com.earthview.world.graphic.OverlayContainer> t)
		{
			long tParamValue = t.nativeObject.pointer;
			remove_COverlayContainer(this.nativeObject.pointer, tParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public OverlayContainerList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OverlayContainerList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OverlayContainerList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OverlayContainerList obj = null;
 			if(baseObj instanceof OverlayContainerList)
			{
				obj = (OverlayContainerList)baseObj;
			} else {
				obj = new OverlayContainerList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OverlayContainerList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OverlayContainerListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OverlayContainerList emptyInstance = new OverlayContainerList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Constructor: do not call direct, use COverlayManager::create
	public Overlay(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCOverlayProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Overlay".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Overlay(String name, com.earthview.world.graphic.SceneManager ref_owner) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_ownerPtr = new BasePointer(ref_owner);
		list.add("ref_owner", ref_ownerPtr.get());
		Create("JCOverlayProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Overlay".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getChild_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.OverlayContainer getChild(String name)
	{
		String nameParamValue = name;
		long returnValue = getChild_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long getName_void(long pNativeObject);
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getOwner_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManager getOwner()
	{
		long returnValue = getOwner_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void setOwner_CSceneManager(long pNativeObject, long ref_sm);
	public void setOwner(com.earthview.world.graphic.SceneManager ref_sm)
	{
		long ref_smParamValue = (ref_sm == null ? 0L : ref_sm.nativeObject.pointer);
		setOwner_CSceneManager(this.nativeObject.pointer, ref_smParamValue);
	}
	native private void setZOrder_ev_uint16(long pNativeObject, int zorder);
	public void setZOrder(int zorder)
	{
		int zorderParamValue = zorder;
		setZOrder_ev_uint16(this.nativeObject.pointer, zorderParamValue);
	}
	native private int getZOrder_void(long pNativeObject);
	public int getZOrder()
	{
		int returnValue = getZOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void(long pNativeObject);
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInitialised_void(long pNativeObject);
	public boolean isInitialised()
	{
		boolean returnValue = isInitialised_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void show_void(long pNativeObject);
	public void show()
	{
		show_void(this.nativeObject.pointer);
	}
	native private void hide_void(long pNativeObject);
	public void hide()
	{
		hide_void(this.nativeObject.pointer);
	}
	native private void add2D_COverlayContainer(long pNativeObject, long ref_cont);
	public void add2D(com.earthview.world.graphic.OverlayContainer ref_cont)
	{
		long ref_contParamValue = (ref_cont == null ? 0L : ref_cont.nativeObject.pointer);
		add2D_COverlayContainer(this.nativeObject.pointer, ref_contParamValue);
	}
	native private void remove2D_COverlayContainer(long pNativeObject, long cont);
	public void remove2D(com.earthview.world.graphic.OverlayContainer cont)
	{
		long contParamValue = (cont == null ? 0L : cont.nativeObject.pointer);
		remove2D_COverlayContainer(this.nativeObject.pointer, contParamValue);
	}
	native private void add3D_CSceneNode(long pNativeObject, long ref_node);
	public void add3D(com.earthview.world.graphic.SceneNode ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		add3D_CSceneNode(this.nativeObject.pointer, ref_nodeParamValue);
	}
	native private void remove3D_CSceneNode(long pNativeObject, long node);
	public void remove3D(com.earthview.world.graphic.SceneNode node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		remove3D_CSceneNode(this.nativeObject.pointer, nodeParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void setScroll_Real_Real(long pNativeObject, double x, double y);
	public void setScroll(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		setScroll_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private double getScrollX_void(long pNativeObject);
	public double getScrollX()
	{
		double returnValue = getScrollX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScrollY_void(long pNativeObject);
	public double getScrollY()
	{
		double returnValue = getScrollY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void scroll_Real_Real(long pNativeObject, double xoff, double yoff);
	public void scroll(double xoff, double yoff)
	{
		double xoffParamValue = xoff;
		double yoffParamValue = yoff;
		scroll_Real_Real(this.nativeObject.pointer, xoffParamValue, yoffParamValue);
	}
	native private void setRotate_CRadian(long pNativeObject, long angle);
	public void setRotate(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setRotate_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private long getRotate_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian getRotate()
	{
		long returnValue = getRotate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private void rotate_CRadian(long pNativeObject, long angle);
	public void rotate(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		rotate_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void setScale_Real_Real(long pNativeObject, double x, double y);
	public void setScale(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		setScale_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private double getScaleX_void(long pNativeObject);
	public double getScaleX()
	{
		double returnValue = getScaleX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleY_void(long pNativeObject);
	public double getScaleY()
	{
		double returnValue = getScaleY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	public void _getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		_getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue(long pNativeObject, long cam, long queue);
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_findVisibleObjects_CCamera_CRenderQueue(this.nativeObject.pointer, camParamValue, queueParamValue);
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

	public static class Overlay2DElementsIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlay::Overlay2DElementsIterator", new Overlay2DElementsIteratorClassFactory());
		}

		public Overlay2DElementsIterator(com.earthview.world.graphic.Overlay.OverlayContainerList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("Overlay2DElementsIterator", list);
		}

		public Overlay2DElementsIterator(com.earthview.world.graphic.Overlay.Overlay2DElementsIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("Overlay2DElementsIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
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
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
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
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
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
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.OverlayContainer getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
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
		public Overlay2DElementsIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Overlay2DElementsIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Overlay2DElementsIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Overlay2DElementsIterator obj = null;
 			if(baseObj instanceof Overlay2DElementsIterator)
			{
				obj = (Overlay2DElementsIterator)baseObj;
			} else {
				obj = new Overlay2DElementsIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Overlay2DElementsIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class Overlay2DElementsIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Overlay2DElementsIterator emptyInstance = new Overlay2DElementsIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get2DElementsIterator_void(long pNativeObject);
	public com.earthview.world.graphic.Overlay.Overlay2DElementsIterator get2DElementsIterator()
	{
		long returnValue = get2DElementsIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Overlay.Overlay2DElementsIterator __returnValue = new com.earthview.world.graphic.Overlay.Overlay2DElementsIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Overlay2DElementsIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Overlay.Overlay2DElementsIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Overlay2DElementsIterator");
		}
		return __returnValue;
	}
	native private long getOrigin_void(long pNativeObject);
	public StringPointer getOrigin()
	{
		long returnValue = getOrigin_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void _notifyOrigin_EVString(long pNativeObject, String origin);
	//// Notify this overlay of it's origin
	public void _notifyOrigin(String origin)
	{
		String originParamValue = origin;
		_notifyOrigin_EVString(this.nativeObject.pointer, originParamValue);
	}
	public Overlay(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Overlay(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_findElementAt_Real_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_findElementAt_Real_Real(this.nativeObject.pointer, "findElementAt_Real_Real_callback");
		}
	}
	
	public static Overlay fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Overlay obj = null;
 		if(baseObj instanceof Overlay)
		{
			obj = (Overlay)baseObj;
		} else {
			obj = new Overlay(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COverlay");
			obj.increaseCast();
		}

		return obj;
	}
}
