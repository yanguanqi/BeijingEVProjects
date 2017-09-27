package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrintEngine extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrintEngine", new PrintEngineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCPrintEngineProxy", new PrintEngineClassFactory());
	}

	public enum EVPrintEnginePropertyKey implements INativeEnum<EVPrintEnginePropertyKey> {
		PPK_CollateCopies(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[0]),
		PPK_ColorMode(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[1]),
		PPK_DocumentName(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[2]),
		PPK_Orientation(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[3]),
		PPK_OutputFileName(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[4]),
		PPK_PageOrder(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[5]),
		PPK_PaperRect(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[6]),
		PPK_PaperSource(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[7]),
		PPK_PrinterName(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[8]),
		PPK_PrinterProgram(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[9]),
		PPK_Resolution(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[10]),
		PPK_SupportedResolutions(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[11]),
		PPK_WindowsPageSize(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[12]),
		PPK_FontEmbedding(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[13]),
		PPK_SuppressSystemPrintStatus(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[14]),
		PPK_Duplex(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[15]),
		PPK_PaperSources(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[16]),
		PPK_PaperSize(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[17]),
		PPK_CustomPaperSize(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[18]),
		PPK_CopyCount(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[19]),
		PPK_SupportsMultipleCopies(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[20]),
		PPK_CustomBase(EVPrintEnginePropertyKeyHelper.ENUM_VALUES[21]);
		private int value;
		EVPrintEnginePropertyKey(int i) {
			this.value = i;
		}
		public EVPrintEnginePropertyKey getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrintEnginePropertyKey toEnum(int retval) {
			if(retval == PPK_CollateCopies.value){
				return PPK_CollateCopies;
			}
			else if(retval == PPK_ColorMode.value){
				return PPK_ColorMode;
			}
			else if(retval == PPK_DocumentName.value){
				return PPK_DocumentName;
			}
			else if(retval == PPK_Orientation.value){
				return PPK_Orientation;
			}
			else if(retval == PPK_OutputFileName.value){
				return PPK_OutputFileName;
			}
			else if(retval == PPK_PageOrder.value){
				return PPK_PageOrder;
			}
			else if(retval == PPK_PaperRect.value){
				return PPK_PaperRect;
			}
			else if(retval == PPK_PaperSource.value){
				return PPK_PaperSource;
			}
			else if(retval == PPK_PrinterName.value){
				return PPK_PrinterName;
			}
			else if(retval == PPK_PrinterProgram.value){
				return PPK_PrinterProgram;
			}
			else if(retval == PPK_Resolution.value){
				return PPK_Resolution;
			}
			else if(retval == PPK_SupportedResolutions.value){
				return PPK_SupportedResolutions;
			}
			else if(retval == PPK_WindowsPageSize.value){
				return PPK_WindowsPageSize;
			}
			else if(retval == PPK_FontEmbedding.value){
				return PPK_FontEmbedding;
			}
			else if(retval == PPK_SuppressSystemPrintStatus.value){
				return PPK_SuppressSystemPrintStatus;
			}
			else if(retval == PPK_Duplex.value){
				return PPK_Duplex;
			}
			else if(retval == PPK_PaperSources.value){
				return PPK_PaperSources;
			}
			else if(retval == PPK_PaperSize.value){
				return PPK_PaperSize;
			}
			else if(retval == PPK_CustomPaperSize.value){
				return PPK_CustomPaperSize;
			}
			else if(retval == PPK_CopyCount.value){
				return PPK_CopyCount;
			}
			else if(retval == PPK_SupportsMultipleCopies.value){
				return PPK_SupportsMultipleCopies;
			}
			else if(retval == PPK_CustomBase.value){
				return PPK_CustomBase;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrintEnginePropertyKeyHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum Type implements INativeEnum<Type> {
		Windows(TypeHelper.ENUM_VALUES[0]),
		Linux(TypeHelper.ENUM_VALUES[1]),
		Pdf(TypeHelper.ENUM_VALUES[2]);
		private int value;
		Type(int i) {
			this.value = i;
		}
		public Type getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Type toEnum(int retval) {
			if(retval == Windows.value){
				return Windows;
			}
			else if(retval == Linux.value){
				return Linux;
			}
			else if(retval == Pdf.value){
				return Pdf;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  int type_void_callback()
	{
		com.earthview.world.display.PrintEngine.Type returnValue = type();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int type_void(long pNativeObject);
	public com.earthview.world.display.PrintEngine.Type type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return com.earthview.world.display.PrintEngine.Type.toEnum(returnValue);
	}
	native private int type_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.PrintEngine.Type type_NoVirtual()
	{
		int returnValue = type_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.display.PrintEngine.Type.toEnum(returnValue);
	}

	protected  void setProperty_EVPrintEnginePropertyKey_CVariant_callback(int key, long value)
	{
		com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey keyParamValue = com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey.toEnum(key);
		com.earthview.world.core.Variant valueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		valueParamValue.setDelegate(true);
		valueParamValue.setInstancePointer(new InstancePointer(value));
		IClassFactory valueParamValueClassFactory = GlobalClassFactoryMap.get(valueParamValue.getCppInstanceTypeName());
		if (valueParamValueClassFactory != null)
		{
			valueParamValue.setDelegate(true);
			valueParamValue = (com.earthview.world.core.Variant)valueParamValueClassFactory.create();
			valueParamValue.setDelegate(true);
			valueParamValue.setInstancePointer(new InstancePointer(value));
		}
		setProperty(keyParamValue, valueParamValue);
	}

	native private void setProperty_EVPrintEnginePropertyKey_CVariant(long pNativeObject, int key, long value);
	public void setProperty(com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey key, com.earthview.world.core.Variant value)
	{
		int keyParamValue = key.getValue();
		long valueParamValue = value.nativeObject.pointer;
		setProperty_EVPrintEnginePropertyKey_CVariant(this.nativeObject.pointer, keyParamValue, valueParamValue);
	}
	native private void setProperty_EVPrintEnginePropertyKey_CVariant_NoVirtual(long pNativeObject, int key, long value);
	protected void setProperty_NoVirtual(com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey key, com.earthview.world.core.Variant value)
	{
		int keyParamValue = key.getValue();
		long valueParamValue = value.nativeObject.pointer;
		setProperty_EVPrintEnginePropertyKey_CVariant_NoVirtual(this.nativeObject.pointer, keyParamValue, valueParamValue);
	}

	protected  long property_EVPrintEnginePropertyKey_callback(int key)
	{
		com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey keyParamValue = com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey.toEnum(key);
		com.earthview.world.core.Variant returnValue = property(keyParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long property_EVPrintEnginePropertyKey(long pNativeObject, int key);
	public com.earthview.world.core.Variant property(com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey key)
	{
		int keyParamValue = key.getValue();
		long returnValue = property_EVPrintEnginePropertyKey(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long property_EVPrintEnginePropertyKey_NoVirtual(long pNativeObject, int key);
	protected com.earthview.world.core.Variant property_NoVirtual(com.earthview.world.display.PrintEngine.EVPrintEnginePropertyKey key)
	{
		int keyParamValue = key.getValue();
		long returnValue = property_EVPrintEnginePropertyKey_NoVirtual(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  boolean newPage_void_callback()
	{
		boolean returnValue = newPage();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean newPage_void(long pNativeObject);
	public boolean newPage()
	{
		boolean returnValue = newPage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean newPage_void_NoVirtual(long pNativeObject);
	protected boolean newPage_NoVirtual()
	{
		boolean returnValue = newPage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean abort_void_callback()
	{
		boolean returnValue = abort();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean abort_void(long pNativeObject);
	public boolean abort()
	{
		boolean returnValue = abort_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean abort_void_NoVirtual(long pNativeObject);
	protected boolean abort_NoVirtual()
	{
		boolean returnValue = abort_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean begin_void_callback()
	{
		boolean returnValue = begin();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean begin_void(long pNativeObject);
	public boolean begin()
	{
		boolean returnValue = begin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean begin_void_NoVirtual(long pNativeObject);
	protected boolean begin_NoVirtual()
	{
		boolean returnValue = begin_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean end_void_callback()
	{
		boolean returnValue = end();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean end_void(long pNativeObject);
	public boolean end()
	{
		boolean returnValue = end_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean end_void_NoVirtual(long pNativeObject);
	protected boolean end_NoVirtual()
	{
		boolean returnValue = end_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int metric_EVPrintDeviceMetric_callback(int dm)
	{
		com.earthview.world.display.Printer.EVPrintDeviceMetric dmParamValue = com.earthview.world.display.Printer.EVPrintDeviceMetric.toEnum(dm);
		int returnValue = metric(dmParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int metric_EVPrintDeviceMetric(long pNativeObject, int dm);
	public int metric(com.earthview.world.display.Printer.EVPrintDeviceMetric dm)
	{
		int dmParamValue = dm.getValue();
		int returnValue = metric_EVPrintDeviceMetric(this.nativeObject.pointer, dmParamValue);
		return returnValue;
	}
	native private int metric_EVPrintDeviceMetric_NoVirtual(long pNativeObject, int dm);
	protected int metric_NoVirtual(com.earthview.world.display.Printer.EVPrintDeviceMetric dm)
	{
		int dmParamValue = dm.getValue();
		int returnValue = metric_EVPrintDeviceMetric_NoVirtual(this.nativeObject.pointer, dmParamValue);
		return returnValue;
	}

	protected  int printerState_void_callback()
	{
		com.earthview.world.display.Printer.EVPrinterState returnValue = printerState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int printerState_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVPrinterState printerState()
	{
		int returnValue = printerState_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPrinterState.toEnum(returnValue);
	}
	native private int printerState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Printer.EVPrinterState printerState_NoVirtual()
	{
		int returnValue = printerState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPrinterState.toEnum(returnValue);
	}

	protected  long getPaintEngine_void_callback()
	{
		VoidPointer returnValue = getPaintEngine();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPaintEngine_void(long pNativeObject);
	public VoidPointer getPaintEngine()
	{
		long returnValue = getPaintEngine_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getPaintEngine_void_NoVirtual(long pNativeObject);
	protected VoidPointer getPaintEngine_NoVirtual()
	{
		long returnValue = getPaintEngine_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  long getPrinterDC_void_callback()
	{
		long returnValue = getPrinterDC();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getPrinterDC_void(long pNativeObject);
	public long getPrinterDC()
	{
		long returnValue = getPrinterDC_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPrinterDC_void_NoVirtual(long pNativeObject);
	protected long getPrinterDC_NoVirtual()
	{
		long returnValue = getPrinterDC_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void releasePrinterDC_void_callback()
	{
		releasePrinterDC();
	}

	native private void releasePrinterDC_void(long pNativeObject);
	public void releasePrinterDC()
	{
		releasePrinterDC_void(this.nativeObject.pointer);
	}
	native private void releasePrinterDC_void_NoVirtual(long pNativeObject);
	protected void releasePrinterDC_NoVirtual()
	{
		releasePrinterDC_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(double left, double top, double right, double bottom)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		setPageMargins(leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	native private void setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double left, double top, double right, double bottom);
	public void setPageMargins(double left, double top, double right, double bottom)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}
	native private void setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double left, double top, double right, double bottom);
	protected void setPageMargins_NoVirtual(double left, double top, double right, double bottom)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	protected  void getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(long left, long top, long right, long bottom)
	{
		DoublePointer leftParamValue = (left == 0L ? null : new DoublePointer(new InstancePointer(left)));
		DoublePointer topParamValue = (top == 0L ? null : new DoublePointer(new InstancePointer(top)));
		DoublePointer rightParamValue = (right == 0L ? null : new DoublePointer(new InstancePointer(right)));
		DoublePointer bottomParamValue = (bottom == 0L ? null : new DoublePointer(new InstancePointer(bottom)));
		getPageMargins(leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	native private void getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long left, long top, long right, long bottom);
	public void getPageMargins(DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long leftParamValue = (left == null ? 0L : left.nativeObject.pointer);
		long topParamValue = (top == null ? 0L : top.nativeObject.pointer);
		long rightParamValue = (right == null ? 0L : right.nativeObject.pointer);
		long bottomParamValue = (bottom == null ? 0L : bottom.nativeObject.pointer);
		getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}
	native private void getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long left, long top, long right, long bottom);
	protected void getPageMargins_NoVirtual(DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long leftParamValue = (left == null ? 0L : left.nativeObject.pointer);
		long topParamValue = (top == null ? 0L : top.nativeObject.pointer);
		long rightParamValue = (right == null ? 0L : right.nativeObject.pointer);
		long bottomParamValue = (bottom == null ? 0L : bottom.nativeObject.pointer);
		getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}

	protected  long getPageRect_void_callback()
	{
		com.earthview.world.display.PageRect returnValue = getPageRect();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPageRect_void(long pNativeObject);
	public com.earthview.world.display.PageRect getPageRect()
	{
		long returnValue = getPageRect_void(this.nativeObject.pointer);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}
	native private long getPageRect_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.PageRect getPageRect_NoVirtual()
	{
		long returnValue = getPageRect_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}

	protected  void setPageSize_CPageSize_callback(long paperSize)
	{
		com.earthview.world.display.PageSize paperSizeParamValue = new com.earthview.world.display.PageSize(CreatedWhenConstruct.CWC_NotToCreate);
		paperSizeParamValue.setDelegate(true);
		paperSizeParamValue.setInstancePointer(new InstancePointer(paperSize));
		IClassFactory paperSizeParamValueClassFactory = GlobalClassFactoryMap.get(paperSizeParamValue.getCppInstanceTypeName());
		if (paperSizeParamValueClassFactory != null)
		{
			paperSizeParamValue.setDelegate(true);
			paperSizeParamValue = (com.earthview.world.display.PageSize)paperSizeParamValueClassFactory.create();
			paperSizeParamValue.setDelegate(true);
			paperSizeParamValue.setInstancePointer(new InstancePointer(paperSize));
		}
		setPageSize(paperSizeParamValue);
	}

	native private void setPageSize_CPageSize(long pNativeObject, long paperSize);
	public void setPageSize(com.earthview.world.display.PageSize paperSize)
	{
		long paperSizeParamValue = paperSize.nativeObject.pointer;
		setPageSize_CPageSize(this.nativeObject.pointer, paperSizeParamValue);
	}
	native private void setPageSize_CPageSize_NoVirtual(long pNativeObject, long paperSize);
	protected void setPageSize_NoVirtual(com.earthview.world.display.PageSize paperSize)
	{
		long paperSizeParamValue = paperSize.nativeObject.pointer;
		setPageSize_CPageSize_NoVirtual(this.nativeObject.pointer, paperSizeParamValue);
	}

	protected  int getPageSize_void_callback()
	{
		com.earthview.world.spatial.carto.EVPageSize returnValue = getPageSize();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getPageSize_void(long pNativeObject);
	public com.earthview.world.spatial.carto.EVPageSize getPageSize()
	{
		int returnValue = getPageSize_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(returnValue);
	}
	native private int getPageSize_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVPageSize getPageSize_NoVirtual()
	{
		int returnValue = getPageSize_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(returnValue);
	}

	protected  void setResolution_ev_int32_callback(int resolution)
	{
		int resolutionParamValue = resolution;
		setResolution(resolutionParamValue);
	}

	native private void setResolution_ev_int32(long pNativeObject, int resolution);
	public void setResolution(int resolution)
	{
		int resolutionParamValue = resolution;
		setResolution_ev_int32(this.nativeObject.pointer, resolutionParamValue);
	}
	native private void setResolution_ev_int32_NoVirtual(long pNativeObject, int resolution);
	protected void setResolution_NoVirtual(int resolution)
	{
		int resolutionParamValue = resolution;
		setResolution_ev_int32_NoVirtual(this.nativeObject.pointer, resolutionParamValue);
	}

	protected  void setPaperSources_EVPaperSource_callback(int source)
	{
		com.earthview.world.display.Printer.EVPaperSource sourceParamValue = com.earthview.world.display.Printer.EVPaperSource.toEnum(source);
		setPaperSources(sourceParamValue);
	}

	native private void setPaperSources_EVPaperSource(long pNativeObject, int source);
	public void setPaperSources(com.earthview.world.display.Printer.EVPaperSource source)
	{
		int sourceParamValue = source.getValue();
		setPaperSources_EVPaperSource(this.nativeObject.pointer, sourceParamValue);
	}
	native private void setPaperSources_EVPaperSource_NoVirtual(long pNativeObject, int source);
	protected void setPaperSources_NoVirtual(com.earthview.world.display.Printer.EVPaperSource source)
	{
		int sourceParamValue = source.getValue();
		setPaperSources_EVPaperSource_NoVirtual(this.nativeObject.pointer, sourceParamValue);
	}

	protected  int setPrinterProperty_void_callback()
	{
		int returnValue = setPrinterProperty();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int setPrinterProperty_void(long pNativeObject);
	public int setPrinterProperty()
	{
		int returnValue = setPrinterProperty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int setPrinterProperty_void_NoVirtual(long pNativeObject);
	protected int setPrinterProperty_NoVirtual()
	{
		int returnValue = setPrinterProperty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public PrintEngine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PrintEngine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_type_void(long pNativeObject, String method);
	native protected void register_setProperty_EVPrintEnginePropertyKey_CVariant(long pNativeObject, String method);
	native protected void register_property_EVPrintEnginePropertyKey(long pNativeObject, String method);
	native protected void register_newPage_void(long pNativeObject, String method);
	native protected void register_abort_void(long pNativeObject, String method);
	native protected void register_begin_void(long pNativeObject, String method);
	native protected void register_end_void(long pNativeObject, String method);
	native protected void register_metric_EVPrintDeviceMetric(long pNativeObject, String method);
	native protected void register_printerState_void(long pNativeObject, String method);
	native protected void register_getPaintEngine_void(long pNativeObject, String method);
	native protected void register_getPrinterDC_void(long pNativeObject, String method);
	native protected void register_releasePrinterDC_void(long pNativeObject, String method);
	native protected void register_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getPageRect_void(long pNativeObject, String method);
	native protected void register_setPageSize_CPageSize(long pNativeObject, String method);
	native protected void register_getPageSize_void(long pNativeObject, String method);
	native protected void register_setResolution_ev_int32(long pNativeObject, String method);
	native protected void register_setPaperSources_EVPaperSource(long pNativeObject, String method);
	native protected void register_setPrinterProperty_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_type_void(this.nativeObject.pointer, "type_void_callback");
			this.register_setProperty_EVPrintEnginePropertyKey_CVariant(this.nativeObject.pointer, "setProperty_EVPrintEnginePropertyKey_CVariant_callback");
			this.register_property_EVPrintEnginePropertyKey(this.nativeObject.pointer, "property_EVPrintEnginePropertyKey_callback");
			this.register_newPage_void(this.nativeObject.pointer, "newPage_void_callback");
			this.register_abort_void(this.nativeObject.pointer, "abort_void_callback");
			this.register_begin_void(this.nativeObject.pointer, "begin_void_callback");
			this.register_end_void(this.nativeObject.pointer, "end_void_callback");
			this.register_metric_EVPrintDeviceMetric(this.nativeObject.pointer, "metric_EVPrintDeviceMetric_callback");
			this.register_printerState_void(this.nativeObject.pointer, "printerState_void_callback");
			this.register_getPaintEngine_void(this.nativeObject.pointer, "getPaintEngine_void_callback");
			this.register_getPrinterDC_void(this.nativeObject.pointer, "getPrinterDC_void_callback");
			this.register_releasePrinterDC_void(this.nativeObject.pointer, "releasePrinterDC_void_callback");
			this.register_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getPageRect_void(this.nativeObject.pointer, "getPageRect_void_callback");
			this.register_setPageSize_CPageSize(this.nativeObject.pointer, "setPageSize_CPageSize_callback");
			this.register_getPageSize_void(this.nativeObject.pointer, "getPageSize_void_callback");
			this.register_setResolution_ev_int32(this.nativeObject.pointer, "setResolution_ev_int32_callback");
			this.register_setPaperSources_EVPaperSource(this.nativeObject.pointer, "setPaperSources_EVPaperSource_callback");
			this.register_setPrinterProperty_void(this.nativeObject.pointer, "setPrinterProperty_void_callback");
		}
	}
	
	public static PrintEngine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PrintEngine obj = null;
 		if(baseObj instanceof PrintEngine)
		{
			obj = (PrintEngine)baseObj;
		} else {
			obj = new PrintEngine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPrintEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
