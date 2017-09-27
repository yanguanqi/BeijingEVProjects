package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexDeclaration extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexDeclaration", new VertexDeclarationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCVertexDeclarationProxy", new VertexDeclarationClassFactory());
	}

	//// Defines the list of vertex elements that makes up this declaration
	///typedef list<EarthView::World::Graphic::CVertexElement> EarthView::World::Graphic::CVertexDeclaration::VertexElementList;
	public static class VertexElementList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexDeclaration::VertexElementList", new VertexElementListClassFactory());
		}

		public VertexElementList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexElementList", null);
		}

		native private void push_back_CVertexElement(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.VertexElement t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CVertexElement(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_CVertexElement(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.VertexElement t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_CVertexElement(this.nativeObject.pointer, tParamValue);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.VertexElement front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.VertexElement back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_CVertexElement(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.VertexElement t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CVertexElement(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
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
		public VertexElementList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexElementList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexElementList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexElementList obj = null;
 			if(baseObj instanceof VertexElementList)
			{
				obj = (VertexElementList)baseObj;
			} else {
				obj = new VertexElementList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexElementList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexElementListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexElementList emptyInstance = new VertexElementList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private static boolean vertexElementLess_CVertexElement_CVertexElement(long e1, long e2);
	//// Sort routine for vertex elements
	public static boolean vertexElementLess(com.earthview.world.graphic.VertexElement e1, com.earthview.world.graphic.VertexElement e2)
	{
		long e1ParamValue = e1.nativeObject.pointer;
		long e2ParamValue = e2.nativeObject.pointer;
		boolean returnValue = vertexElementLess_CVertexElement_CVertexElement(e1ParamValue, e2ParamValue);
		return returnValue;
	}
	//// Standard constructor, not you should use CHardwareBufferManager::createVertexDeclaration
	public VertexDeclaration() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVertexDeclarationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexDeclaration".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getElementCount_void(long pNativeObject);
	public long getElementCount()
	{
		long returnValue = getElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getElements_void(long pNativeObject);
	public com.earthview.world.graphic.VertexDeclaration.VertexElementList getElements()
	{
		long returnValue = getElements_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexDeclaration.VertexElementList __returnValue = new com.earthview.world.graphic.VertexDeclaration.VertexElementList(CreatedWhenConstruct.CWC_NotToCreate, "VertexElementList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration.VertexElementList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexElementList");
		}
		return __returnValue;
	}
	native private long getElement_ev_uint16(long pNativeObject, int index);
	public com.earthview.world.graphic.VertexElement getElement(int index)
	{
		int indexParamValue = index;
		long returnValue = getElement_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private void sort_void(long pNativeObject);
	public void sort()
	{
		sort_void(this.nativeObject.pointer);
	}
	native private void closeGapsInSource_void(long pNativeObject);
	public void closeGapsInSource()
	{
		closeGapsInSource_void(this.nativeObject.pointer);
	}
	native private long getAutoOrganisedDeclaration_ev_bool_ev_bool_bool(long pNativeObject, boolean skeletalAnimation, boolean vertexAnimation, boolean vertexAnimationNormals);
	public com.earthview.world.graphic.VertexDeclaration getAutoOrganisedDeclaration(boolean skeletalAnimation, boolean vertexAnimation, boolean vertexAnimationNormals)
	{
		boolean skeletalAnimationParamValue = skeletalAnimation;
		boolean vertexAnimationParamValue = vertexAnimation;
		boolean vertexAnimationNormalsParamValue = vertexAnimationNormals;
		long returnValue = getAutoOrganisedDeclaration_ev_bool_ev_bool_bool(this.nativeObject.pointer, skeletalAnimationParamValue, vertexAnimationParamValue, vertexAnimationNormalsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private int getMaxSource_void(long pNativeObject);
	public int getMaxSource()
	{
		int returnValue = getMaxSource_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(int source, long offset, int theType, int semantic, int index)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		int indexParamValue = index;
		com.earthview.world.graphic.VertexElement returnValue = addElement(sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, int source, long offset, int theType, int semantic, int index);
	public com.earthview.world.graphic.VertexElement addElement(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		long returnValue = addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(long pNativeObject, int source, long offset, int theType, int semantic, int index);
	protected com.earthview.world.graphic.VertexElement addElement_NoVirtual(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		long returnValue = addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(this.nativeObject.pointer, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(int source, long offset, int theType, int semantic)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		com.earthview.world.graphic.VertexElement returnValue = addElement(sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, int source, long offset, int theType, int semantic);
	public com.earthview.world.graphic.VertexElement addElement(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		long returnValue = addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(long pNativeObject, int source, long offset, int theType, int semantic);
	protected com.earthview.world.graphic.VertexElement addElement_NoVirtual(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		long returnValue = addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(this.nativeObject.pointer, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(int atPosition, int source, long offset, int theType, int semantic, int index)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		int indexParamValue = index;
		com.earthview.world.graphic.VertexElement returnValue = insertElement(atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, int atPosition, int source, long offset, int theType, int semantic, int index);
	public com.earthview.world.graphic.VertexElement insertElement(int atPosition, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		long returnValue = insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(long pNativeObject, int atPosition, int source, long offset, int theType, int semantic, int index);
	protected com.earthview.world.graphic.VertexElement insertElement_NoVirtual(int atPosition, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		long returnValue = insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(this.nativeObject.pointer, atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(int atPosition, int source, long offset, int theType, int semantic)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		com.earthview.world.graphic.VertexElement returnValue = insertElement(atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, int atPosition, int source, long offset, int theType, int semantic);
	public com.earthview.world.graphic.VertexElement insertElement(int atPosition, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		long returnValue = insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(long pNativeObject, int atPosition, int source, long offset, int theType, int semantic);
	protected com.earthview.world.graphic.VertexElement insertElement_NoVirtual(int atPosition, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int atPositionParamValue = atPosition;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		long returnValue = insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(this.nativeObject.pointer, atPositionParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  void removeElement_ev_uint16_callback(int elem_index)
	{
		int elem_indexParamValue = elem_index;
		removeElement(elem_indexParamValue);
	}

	native private void removeElement_ev_uint16(long pNativeObject, int elem_index);
	public void removeElement(int elem_index)
	{
		int elem_indexParamValue = elem_index;
		removeElement_ev_uint16(this.nativeObject.pointer, elem_indexParamValue);
	}
	native private void removeElement_ev_uint16_NoVirtual(long pNativeObject, int elem_index);
	protected void removeElement_NoVirtual(int elem_index)
	{
		int elem_indexParamValue = elem_index;
		removeElement_ev_uint16_NoVirtual(this.nativeObject.pointer, elem_indexParamValue);
	}

	protected  void removeElement_VertexElementSemantic_ev_uint16_callback(int semantic, int index)
	{
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		int indexParamValue = index;
		removeElement(semanticParamValue, indexParamValue);
	}

	native private void removeElement_VertexElementSemantic_ev_uint16(long pNativeObject, int semantic, int index);
	///virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);
	public void removeElement(com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		removeElement_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, semanticParamValue, indexParamValue);
	}
	native private void removeElement_VertexElementSemantic_ev_uint16_NoVirtual(long pNativeObject, int semantic, int index);
	protected void removeElement_NoVirtual(com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		removeElement_VertexElementSemantic_ev_uint16_NoVirtual(this.nativeObject.pointer, semanticParamValue, indexParamValue);
	}

	protected  void removeElement_VertexElementSemantic_callback(int semantic)
	{
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		removeElement(semanticParamValue);
	}

	native private void removeElement_VertexElementSemantic(long pNativeObject, int semantic);
	public void removeElement(com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int semanticParamValue = semantic.getValue();
		removeElement_VertexElementSemantic(this.nativeObject.pointer, semanticParamValue);
	}
	native private void removeElement_VertexElementSemantic_NoVirtual(long pNativeObject, int semantic);
	protected void removeElement_NoVirtual(com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int semanticParamValue = semantic.getValue();
		removeElement_VertexElementSemantic_NoVirtual(this.nativeObject.pointer, semanticParamValue);
	}

	protected  void removeAllElements_void_callback()
	{
		removeAllElements();
	}

	native private void removeAllElements_void(long pNativeObject);
	public void removeAllElements()
	{
		removeAllElements_void(this.nativeObject.pointer);
	}
	native private void removeAllElements_void_NoVirtual(long pNativeObject);
	protected void removeAllElements_NoVirtual()
	{
		removeAllElements_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(int elem_index, int source, long offset, int theType, int semantic, int index)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		int indexParamValue = index;
		modifyElement(elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
	}

	native private void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, int elem_index, int source, long offset, int theType, int semantic, int index);
	public void modifyElement(int elem_index, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
	}
	native private void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(long pNativeObject, int elem_index, int source, long offset, int theType, int semantic, int index);
	protected void modifyElement_NoVirtual(int elem_index, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		int indexParamValue = index;
		modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(this.nativeObject.pointer, elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue, indexParamValue);
	}

	protected  void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(int elem_index, int source, long offset, int theType, int semantic)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		com.earthview.world.graphic.VertexElementType theTypeParamValue = com.earthview.world.graphic.VertexElementType.toEnum(theType);
		com.earthview.world.graphic.VertexElementSemantic semanticParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(semantic);
		modifyElement(elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
	}

	native private void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, int elem_index, int source, long offset, int theType, int semantic);
	public void modifyElement(int elem_index, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
	}
	native private void modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(long pNativeObject, int elem_index, int source, long offset, int theType, int semantic);
	protected void modifyElement_NoVirtual(int elem_index, int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic)
	{
		int elem_indexParamValue = elem_index;
		int sourceParamValue = source;
		long offsetParamValue = offset;
		int theTypeParamValue = theType.getValue();
		int semanticParamValue = semantic.getValue();
		modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(this.nativeObject.pointer, elem_indexParamValue, sourceParamValue, offsetParamValue, theTypeParamValue, semanticParamValue);
	}

	protected  long findElementBySemantic_VertexElementSemantic_ev_uint16_callback(int sem, int index)
	{
		com.earthview.world.graphic.VertexElementSemantic semParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(sem);
		int indexParamValue = index;
		com.earthview.world.graphic.VertexElement returnValue = findElementBySemantic(semParamValue, indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long findElementBySemantic_VertexElementSemantic_ev_uint16(long pNativeObject, int sem, int index);
	///virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem, ev_uint16 index = 0);
	public com.earthview.world.graphic.VertexElement findElementBySemantic(com.earthview.world.graphic.VertexElementSemantic sem, int index)
	{
		int semParamValue = sem.getValue();
		int indexParamValue = index;
		long returnValue = findElementBySemantic_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, semParamValue, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long findElementBySemantic_VertexElementSemantic_ev_uint16_NoVirtual(long pNativeObject, int sem, int index);
	protected com.earthview.world.graphic.VertexElement findElementBySemantic_NoVirtual(com.earthview.world.graphic.VertexElementSemantic sem, int index)
	{
		int semParamValue = sem.getValue();
		int indexParamValue = index;
		long returnValue = findElementBySemantic_VertexElementSemantic_ev_uint16_NoVirtual(this.nativeObject.pointer, semParamValue, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  long findElementBySemantic_VertexElementSemantic_callback(int sem)
	{
		com.earthview.world.graphic.VertexElementSemantic semParamValue = com.earthview.world.graphic.VertexElementSemantic.toEnum(sem);
		com.earthview.world.graphic.VertexElement returnValue = findElementBySemantic(semParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long findElementBySemantic_VertexElementSemantic(long pNativeObject, int sem);
	public com.earthview.world.graphic.VertexElement findElementBySemantic(com.earthview.world.graphic.VertexElementSemantic sem)
	{
		int semParamValue = sem.getValue();
		long returnValue = findElementBySemantic_VertexElementSemantic(this.nativeObject.pointer, semParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}
	native private long findElementBySemantic_VertexElementSemantic_NoVirtual(long pNativeObject, int sem);
	protected com.earthview.world.graphic.VertexElement findElementBySemantic_NoVirtual(com.earthview.world.graphic.VertexElementSemantic sem)
	{
		int semParamValue = sem.getValue();
		long returnValue = findElementBySemantic_VertexElementSemantic_NoVirtual(this.nativeObject.pointer, semParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexElement __returnValue = new com.earthview.world.graphic.VertexElement(CreatedWhenConstruct.CWC_NotToCreate, "CVertexElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexElement");
		}
		return __returnValue;
	}

	protected  long findElementsBySource_ev_uint16_callback(int source)
	{
		int sourceParamValue = source;
		com.earthview.world.graphic.VertexDeclaration.VertexElementList returnValue = findElementsBySource(sourceParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long findElementsBySource_ev_uint16(long pNativeObject, int source);
	public com.earthview.world.graphic.VertexDeclaration.VertexElementList findElementsBySource(int source)
	{
		int sourceParamValue = source;
		long returnValue = findElementsBySource_ev_uint16(this.nativeObject.pointer, sourceParamValue);
		com.earthview.world.graphic.VertexDeclaration.VertexElementList __returnValue = new com.earthview.world.graphic.VertexDeclaration.VertexElementList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexElementList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration.VertexElementList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexElementList");
		}
		return __returnValue;
	}
	native private long findElementsBySource_ev_uint16_NoVirtual(long pNativeObject, int source);
	protected com.earthview.world.graphic.VertexDeclaration.VertexElementList findElementsBySource_NoVirtual(int source)
	{
		int sourceParamValue = source;
		long returnValue = findElementsBySource_ev_uint16_NoVirtual(this.nativeObject.pointer, sourceParamValue);
		com.earthview.world.graphic.VertexDeclaration.VertexElementList __returnValue = new com.earthview.world.graphic.VertexDeclaration.VertexElementList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexElementList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration.VertexElementList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexElementList");
		}
		return __returnValue;
	}

	protected  long getVertexSize_ev_uint16_callback(int source)
	{
		int sourceParamValue = source;
		long returnValue = getVertexSize(sourceParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getVertexSize_ev_uint16(long pNativeObject, int source);
	public long getVertexSize(int source)
	{
		int sourceParamValue = source;
		long returnValue = getVertexSize_ev_uint16(this.nativeObject.pointer, sourceParamValue);
		return returnValue;
	}
	native private long getVertexSize_ev_uint16_NoVirtual(long pNativeObject, int source);
	protected long getVertexSize_NoVirtual(int source)
	{
		int sourceParamValue = source;
		long returnValue = getVertexSize_ev_uint16_NoVirtual(this.nativeObject.pointer, sourceParamValue);
		return returnValue;
	}

	protected  int getNextFreeTextureCoordinate_void_callback()
	{
		int returnValue = getNextFreeTextureCoordinate();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNextFreeTextureCoordinate_void(long pNativeObject);
	public int getNextFreeTextureCoordinate()
	{
		int returnValue = getNextFreeTextureCoordinate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNextFreeTextureCoordinate_void_NoVirtual(long pNativeObject);
	protected int getNextFreeTextureCoordinate_NoVirtual()
	{
		int returnValue = getNextFreeTextureCoordinate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long ev_clone_CHardwareBufferManagerBase_callback(long mgr)
	{
		com.earthview.world.graphic.HardwareBufferManagerBase mgrParamValue = (mgr == 0L ? null : new com.earthview.world.graphic.HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate));
		if(mgrParamValue != null)
		{
		mgrParamValue.setDelegate(true);
		mgrParamValue.setInstancePointer(new InstancePointer(mgr));
		IClassFactory mgrParamValueClassFactory = GlobalClassFactoryMap.get(mgrParamValue.getCppInstanceTypeName());
		if (mgrParamValueClassFactory != null)
		{
			mgrParamValue.setDelegate(true);
			mgrParamValue = (com.earthview.world.graphic.HardwareBufferManagerBase)mgrParamValueClassFactory.create();
			mgrParamValue.setDelegate(true);
			mgrParamValue.setInstancePointer(new InstancePointer(mgr));
		}
		}
		com.earthview.world.graphic.VertexDeclaration returnValue = ev_clone(mgrParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_CHardwareBufferManagerBase(long pNativeObject, long mgr);
	///virtual EarthView::World::Graphic::CVertexDeclaration* clone(EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0);
	public com.earthview.world.graphic.VertexDeclaration ev_clone(com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long returnValue = ev_clone_CHardwareBufferManagerBase(this.nativeObject.pointer, mgrParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private long ev_clone_CHardwareBufferManagerBase_NoVirtual(long pNativeObject, long mgr);
	protected com.earthview.world.graphic.VertexDeclaration ev_clone_NoVirtual(com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long returnValue = ev_clone_CHardwareBufferManagerBase_NoVirtual(this.nativeObject.pointer, mgrParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.graphic.VertexDeclaration returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.graphic.VertexDeclaration ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexDeclaration ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}

	native private boolean OperatorEquals_CVertexDeclaration(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.graphic.VertexDeclaration rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVertexDeclaration(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVertexDeclaration(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.graphic.VertexDeclaration rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVertexDeclaration(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public VertexDeclaration(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexDeclaration(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, String method);
	native protected void register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, String method);
	native protected void register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, String method);
	native protected void register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, String method);
	native protected void register_removeElement_ev_uint16(long pNativeObject, String method);
	native protected void register_removeElement_VertexElementSemantic_ev_uint16(long pNativeObject, String method);
	native protected void register_removeElement_VertexElementSemantic(long pNativeObject, String method);
	native protected void register_removeAllElements_void(long pNativeObject, String method);
	native protected void register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(long pNativeObject, String method);
	native protected void register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(long pNativeObject, String method);
	native protected void register_findElementBySemantic_VertexElementSemantic_ev_uint16(long pNativeObject, String method);
	native protected void register_findElementBySemantic_VertexElementSemantic(long pNativeObject, String method);
	native protected void register_findElementsBySource_ev_uint16(long pNativeObject, String method);
	native protected void register_getVertexSize_ev_uint16(long pNativeObject, String method);
	native protected void register_getNextFreeTextureCoordinate_void(long pNativeObject, String method);
	native protected void register_ev_clone_CHardwareBufferManagerBase(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, "addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
			this.register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, "addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
			this.register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, "insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
			this.register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, "insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
			this.register_removeElement_ev_uint16(this.nativeObject.pointer, "removeElement_ev_uint16_callback");
			this.register_removeElement_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, "removeElement_VertexElementSemantic_ev_uint16_callback");
			this.register_removeElement_VertexElementSemantic(this.nativeObject.pointer, "removeElement_VertexElementSemantic_callback");
			this.register_removeAllElements_void(this.nativeObject.pointer, "removeAllElements_void_callback");
			this.register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, "modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
			this.register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(this.nativeObject.pointer, "modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
			this.register_findElementBySemantic_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, "findElementBySemantic_VertexElementSemantic_ev_uint16_callback");
			this.register_findElementBySemantic_VertexElementSemantic(this.nativeObject.pointer, "findElementBySemantic_VertexElementSemantic_callback");
			this.register_findElementsBySource_ev_uint16(this.nativeObject.pointer, "findElementsBySource_ev_uint16_callback");
			this.register_getVertexSize_ev_uint16(this.nativeObject.pointer, "getVertexSize_ev_uint16_callback");
			this.register_getNextFreeTextureCoordinate_void(this.nativeObject.pointer, "getNextFreeTextureCoordinate_void_callback");
			this.register_ev_clone_CHardwareBufferManagerBase(this.nativeObject.pointer, "ev_clone_CHardwareBufferManagerBase_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static VertexDeclaration fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexDeclaration obj = null;
 		if(baseObj instanceof VertexDeclaration)
		{
			obj = (VertexDeclaration)baseObj;
		} else {
			obj = new VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexDeclaration");
			obj.increaseCast();
		}

		return obj;
	}
}
