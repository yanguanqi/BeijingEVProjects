package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrinterInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrinterInfo", new PrinterInfoClassFactory());
	}

	public PrinterInfo(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CPrinterInfo", list);
	}

	public PrinterInfo(com.earthview.world.display.PrinterInfo other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CPrinterInfo", list);
	}

	native private long OperatorAssign_CPrinterInfo(long pNativeObject, long other);
	public com.earthview.world.display.PrinterInfo OperatorAssign(com.earthview.world.display.PrinterInfo other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CPrinterInfo(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.display.PrinterInfo __returnValue = new com.earthview.world.display.PrinterInfo(CreatedWhenConstruct.CWC_NotToCreate, "CPrinterInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PrinterInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPrinterInfo");
		}
		return __returnValue;
	}
	native private String printerName_void(long pNativeObject);
	public String printerName()
	{
		String returnValue = printerName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDefault_void(long pNativeObject);
	public boolean isDefault()
	{
		boolean returnValue = isDefault_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void getAvailablePrinters_CStringArray(long printers);
	public static void getAvailablePrinters(com.earthview.world.core.StringArray printers)
	{
		long printersParamValue = printers.nativeObject.pointer;
		getAvailablePrinters_CStringArray(printersParamValue);
	}
	native private static long defaultPrinter_void();
	public static com.earthview.world.display.PrinterInfo defaultPrinter()
	{
		long returnValue = defaultPrinter_void();
		com.earthview.world.display.PrinterInfo __returnValue = new com.earthview.world.display.PrinterInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPrinterInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PrinterInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPrinterInfo");
		}
		return __returnValue;
	}
	native private long getSupportedPaperSizesCount_void(long pNativeObject);
	///papersize
	public long getSupportedPaperSizesCount()
	{
		long returnValue = getSupportedPaperSizesCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSupportedPaperSize_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.display.PageInfo getSupportedPaperSize(long index)
	{
		long indexParamValue = index;
		long returnValue = getSupportedPaperSize_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.display.PageInfo __returnValue = new com.earthview.world.display.PageInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "PageInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PageInfo");
		}
		return __returnValue;
	}
	native private long getSupportedPaperSourceCount_void(long pNativeObject);
	///papersource
	public long getSupportedPaperSourceCount()
	{
		long returnValue = getSupportedPaperSourceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSupportedPaperSource_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.display.Printer.EVPaperSource getSupportedPaperSource(long index)
	{
		long indexParamValue = index;
		int returnValue = getSupportedPaperSource_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return com.earthview.world.display.Printer.EVPaperSource.toEnum(returnValue);
	}
	native private long getSupportedResolutionCount_void(long pNativeObject);
	///resolution
	public long getSupportedResolutionCount()
	{
		long returnValue = getSupportedResolutionCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSupportedResolution_ev_uint32(long pNativeObject, long index);
	public long getSupportedResolution(long index)
	{
		long indexParamValue = index;
		long returnValue = getSupportedResolution_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	public PrinterInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PrinterInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PrinterInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PrinterInfo obj = null;
 		if(baseObj instanceof PrinterInfo)
		{
			obj = (PrinterInfo)baseObj;
		} else {
			obj = new PrinterInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPrinterInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
