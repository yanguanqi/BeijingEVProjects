package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// GL style compact colour
public class VertexElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexElement", new VertexElementClassFactory());
	}

	//// Constructor, should not be called directly, only needed because of list
	public VertexElement() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVertexElement", null);
	}

	//// Constructor, should not be called directly, call CVertexDeclaration::addElement
	public VertexElement(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic, int index) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		BasePointer offsetPtr = new BasePointer(offset);
		list.add("offset", offsetPtr.get());
		BasePointer theTypePtr = new BasePointer(theType);
		list.add("theType", theTypePtr.get());
		BasePointer semanticPtr = new BasePointer(semantic);
		list.add("semantic", semanticPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		Create("CVertexElement", list);
	}

	public VertexElement(int source, long offset, com.earthview.world.graphic.VertexElementType theType, com.earthview.world.graphic.VertexElementSemantic semantic) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		BasePointer offsetPtr = new BasePointer(offset);
		list.add("offset", offsetPtr.get());
		BasePointer theTypePtr = new BasePointer(theType);
		list.add("theType", theTypePtr.get());
		BasePointer semanticPtr = new BasePointer(semantic);
		list.add("semantic", semanticPtr.get());
		Create("CVertexElement", list);
	}

	native private int getSource_void(long pNativeObject);
	//// Gets the vertex buffer index from where this element draws it's values
	public int getSource()
	{
		int returnValue = getSource_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOffset_void(long pNativeObject);
	//// Gets the offset into the buffer where this element starts
	public long getOffset()
	{
		long returnValue = getOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getType_void(long pNativeObject);
	//// Gets the data format of this element
	public com.earthview.world.graphic.VertexElementType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}
	native private int getSemantic_void(long pNativeObject);
	//// Gets the meaning of this element
	public com.earthview.world.graphic.VertexElementSemantic getSemantic()
	{
		int returnValue = getSemantic_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexElementSemantic.toEnum(returnValue);
	}
	native private int getIndex_void(long pNativeObject);
	//// Gets the index of this element, only applicable for repeating elements
	public int getIndex()
	{
		int returnValue = getIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void(long pNativeObject);
	//// Gets the size of this element in bytes
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long getTypeSize_VertexElementType(int etype);
	//// Utility method for helping to calculate offsets
	public static long getTypeSize(com.earthview.world.graphic.VertexElementType etype)
	{
		int etypeParamValue = etype.getValue();
		long returnValue = getTypeSize_VertexElementType(etypeParamValue);
		return returnValue;
	}
	native private static int getTypeCount_VertexElementType(int etype);
	//// Utility method which returns the count of values in a given type
	public static int getTypeCount(com.earthview.world.graphic.VertexElementType etype)
	{
		int etypeParamValue = etype.getValue();
		int returnValue = getTypeCount_VertexElementType(etypeParamValue);
		return returnValue;
	}
	native private static int multiplyTypeCount_VertexElementType_ev_uint16(int baseType, int count);
	public static com.earthview.world.graphic.VertexElementType multiplyTypeCount(com.earthview.world.graphic.VertexElementType baseType, int count)
	{
		int baseTypeParamValue = baseType.getValue();
		int countParamValue = count;
		int returnValue = multiplyTypeCount_VertexElementType_ev_uint16(baseTypeParamValue, countParamValue);
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}
	native private static int getBaseType_VertexElementType(int multiType);
	public static com.earthview.world.graphic.VertexElementType getBaseType(com.earthview.world.graphic.VertexElementType multiType)
	{
		int multiTypeParamValue = multiType.getValue();
		int returnValue = getBaseType_VertexElementType(multiTypeParamValue);
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}
	native private static void convertColourValue_VertexElementType_VertexElementType_ev_uint32(int srcType, int dstType, long ptr);
	public static void convertColourValue(com.earthview.world.graphic.VertexElementType srcType, com.earthview.world.graphic.VertexElementType dstType, UIntegerPointer ptr)
	{
		int srcTypeParamValue = srcType.getValue();
		int dstTypeParamValue = dstType.getValue();
		long ptrParamValue = (ptr == null ? 0L : ptr.nativeObject.pointer);
		convertColourValue_VertexElementType_VertexElementType_ev_uint32(srcTypeParamValue, dstTypeParamValue, ptrParamValue);
	}
	native private static long convertColourValue_CColourValue_VertexElementType(long src, int dst);
	public static long convertColourValue(com.earthview.world.graphic.ColourValue src, com.earthview.world.graphic.VertexElementType dst)
	{
		long srcParamValue = src.nativeObject.pointer;
		int dstParamValue = dst.getValue();
		long returnValue = convertColourValue_CColourValue_VertexElementType(srcParamValue, dstParamValue);
		return returnValue;
	}
	native private static long toColourValue_ev_uint32_VertexElementType(long color, int dst);
	public static com.earthview.world.graphic.ColourValue toColourValue(long color, com.earthview.world.graphic.VertexElementType dst)
	{
		long colorParamValue = color;
		int dstParamValue = dst.getValue();
		long returnValue = toColourValue_ev_uint32_VertexElementType(colorParamValue, dstParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private static int getBestColourVertexElementType_void();
	public static com.earthview.world.graphic.VertexElementType getBestColourVertexElementType()
	{
		int returnValue = getBestColourVertexElementType_void();
		return com.earthview.world.graphic.VertexElementType.toEnum(returnValue);
	}
	native private boolean OperatorEquals_CVertexElement(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.graphic.VertexElement rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVertexElement(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVertexElement(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.graphic.VertexElement rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVertexElement(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void baseVertexPointerToElement_void_void(long pNativeObject, long pBase, long pElem);
	public void baseVertexPointerToElement(VoidPointer pBase, NativeObjectPointer<VoidPointer> pElem)
	{
		long pBaseParamValue = (pBase == null ? 0L : pBase.nativeObject.pointer);
		long pElemParamValue = (pElem == null ? 0L : pElem.nativeObject.pointer);
		baseVertexPointerToElement_void_void(this.nativeObject.pointer, pBaseParamValue, pElemParamValue);
	}
	public VertexElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VertexElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexElement obj = null;
 		if(baseObj instanceof VertexElement)
		{
			obj = (VertexElement)baseObj;
		} else {
			obj = new VertexElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexElement");
			obj.increaseCast();
		}

		return obj;
	}
}
