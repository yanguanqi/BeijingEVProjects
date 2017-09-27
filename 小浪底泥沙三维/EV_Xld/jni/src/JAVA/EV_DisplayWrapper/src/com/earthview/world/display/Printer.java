package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Printer extends com.earthview.world.display.Ipaintdevice {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CPrinter", new PrinterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCPrinterProxy", new PrinterClassFactory());
	}

	public enum EVPrinterMode implements INativeEnum<EVPrinterMode> {
		PM_ScreenResolution(EVPrinterModeHelper.ENUM_VALUES[0]),
		PM_PrinterResolution(EVPrinterModeHelper.ENUM_VALUES[1]),
		PM_HighResolution(EVPrinterModeHelper.ENUM_VALUES[2]);
		private int value;
		EVPrinterMode(int i) {
			this.value = i;
		}
		public EVPrinterMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrinterMode toEnum(int retval) {
			if(retval == PM_ScreenResolution.value){
				return PM_ScreenResolution;
			}
			else if(retval == PM_PrinterResolution.value){
				return PM_PrinterResolution;
			}
			else if(retval == PM_HighResolution.value){
				return PM_HighResolution;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrinterModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public Printer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPrinterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.display.Printer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Printer(com.earthview.world.display.Printer.EVPrinterMode mode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer modePtr = new BasePointer(mode);
		list.add("mode", modePtr.get());
		Create("JCPrinterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.display.Printer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public enum EVPageOrder implements INativeEnum<EVPageOrder> {
		PO_FirstPageFirst(EVPageOrderHelper.ENUM_VALUES[0]),
		PO_LastPageFirst(EVPageOrderHelper.ENUM_VALUES[1]);
		private int value;
		EVPageOrder(int i) {
			this.value = i;
		}
		public EVPageOrder getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPageOrder toEnum(int retval) {
			if(retval == PO_FirstPageFirst.value){
				return PO_FirstPageFirst;
			}
			else if(retval == PO_LastPageFirst.value){
				return PO_LastPageFirst;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPageOrderHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVColorMode implements INativeEnum<EVColorMode> {
		CM_GrayScale(EVColorModeHelper.ENUM_VALUES[0]),
		CM_Color(EVColorModeHelper.ENUM_VALUES[1]);
		private int value;
		EVColorMode(int i) {
			this.value = i;
		}
		public EVColorMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVColorMode toEnum(int retval) {
			if(retval == CM_GrayScale.value){
				return CM_GrayScale;
			}
			else if(retval == CM_Color.value){
				return CM_Color;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVColorModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPaperSource implements INativeEnum<EVPaperSource> {
		PS_OnlyOne(EVPaperSourceHelper.ENUM_VALUES[0]),
		PS_Lower(EVPaperSourceHelper.ENUM_VALUES[1]),
		PS_Middle(EVPaperSourceHelper.ENUM_VALUES[2]),
		PS_Manual(EVPaperSourceHelper.ENUM_VALUES[3]),
		PS_Envelope(EVPaperSourceHelper.ENUM_VALUES[4]),
		PS_EnvelopeManual(EVPaperSourceHelper.ENUM_VALUES[5]),
		PS_Auto(EVPaperSourceHelper.ENUM_VALUES[6]),
		PS_Tractor(EVPaperSourceHelper.ENUM_VALUES[7]),
		PS_SmallFormat(EVPaperSourceHelper.ENUM_VALUES[8]),
		PS_LargeFormat(EVPaperSourceHelper.ENUM_VALUES[9]),
		PS_LargeCapacity(EVPaperSourceHelper.ENUM_VALUES[10]),
		PS_Cassette(EVPaperSourceHelper.ENUM_VALUES[11]),
		PS_FormSource(EVPaperSourceHelper.ENUM_VALUES[12]);
		private int value;
		EVPaperSource(int i) {
			this.value = i;
		}
		public EVPaperSource getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPaperSource toEnum(int retval) {
			if(retval == PS_OnlyOne.value){
				return PS_OnlyOne;
			}
			else if(retval == PS_Lower.value){
				return PS_Lower;
			}
			else if(retval == PS_Middle.value){
				return PS_Middle;
			}
			else if(retval == PS_Manual.value){
				return PS_Manual;
			}
			else if(retval == PS_Envelope.value){
				return PS_Envelope;
			}
			else if(retval == PS_EnvelopeManual.value){
				return PS_EnvelopeManual;
			}
			else if(retval == PS_Auto.value){
				return PS_Auto;
			}
			else if(retval == PS_Tractor.value){
				return PS_Tractor;
			}
			else if(retval == PS_SmallFormat.value){
				return PS_SmallFormat;
			}
			else if(retval == PS_LargeFormat.value){
				return PS_LargeFormat;
			}
			else if(retval == PS_LargeCapacity.value){
				return PS_LargeCapacity;
			}
			else if(retval == PS_Cassette.value){
				return PS_Cassette;
			}
			else if(retval == PS_FormSource.value){
				return PS_FormSource;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPaperSourceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPrinterState implements INativeEnum<EVPrinterState> {
		PS_Idle(EVPrinterStateHelper.ENUM_VALUES[0]),
		PS_Active(EVPrinterStateHelper.ENUM_VALUES[1]),
		PS_Aborted(EVPrinterStateHelper.ENUM_VALUES[2]),
		PS_Error(EVPrinterStateHelper.ENUM_VALUES[3]);
		private int value;
		EVPrinterState(int i) {
			this.value = i;
		}
		public EVPrinterState getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrinterState toEnum(int retval) {
			if(retval == PS_Idle.value){
				return PS_Idle;
			}
			else if(retval == PS_Active.value){
				return PS_Active;
			}
			else if(retval == PS_Aborted.value){
				return PS_Aborted;
			}
			else if(retval == PS_Error.value){
				return PS_Error;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrinterStateHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVOutputFormat implements INativeEnum<EVOutputFormat> {
		OF_NativeFormat(EVOutputFormatHelper.ENUM_VALUES[0]),
		OF_PdfFormat(EVOutputFormatHelper.ENUM_VALUES[1]),
		OF_PostScriptFormat(EVOutputFormatHelper.ENUM_VALUES[2]);
		private int value;
		EVOutputFormat(int i) {
			this.value = i;
		}
		public EVOutputFormat getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVOutputFormat toEnum(int retval) {
			if(retval == OF_NativeFormat.value){
				return OF_NativeFormat;
			}
			else if(retval == OF_PdfFormat.value){
				return OF_PdfFormat;
			}
			else if(retval == OF_PostScriptFormat.value){
				return OF_PostScriptFormat;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVOutputFormatHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPrintUnit implements INativeEnum<EVPrintUnit> {
		PU_Millimeter(EVPrintUnitHelper.ENUM_VALUES[0]),
		PU_Point(EVPrintUnitHelper.ENUM_VALUES[1]),
		PU_Inch(EVPrintUnitHelper.ENUM_VALUES[2]),
		PU_Pica(EVPrintUnitHelper.ENUM_VALUES[3]),
		PU_Didot(EVPrintUnitHelper.ENUM_VALUES[4]),
		PU_Cicero(EVPrintUnitHelper.ENUM_VALUES[5]),
		PU_DevicePixel(EVPrintUnitHelper.ENUM_VALUES[6]);
		private int value;
		EVPrintUnit(int i) {
			this.value = i;
		}
		public EVPrintUnit getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrintUnit toEnum(int retval) {
			if(retval == PU_Millimeter.value){
				return PU_Millimeter;
			}
			else if(retval == PU_Point.value){
				return PU_Point;
			}
			else if(retval == PU_Inch.value){
				return PU_Inch;
			}
			else if(retval == PU_Pica.value){
				return PU_Pica;
			}
			else if(retval == PU_Didot.value){
				return PU_Didot;
			}
			else if(retval == PU_Cicero.value){
				return PU_Cicero;
			}
			else if(retval == PU_DevicePixel.value){
				return PU_DevicePixel;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrintUnitHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVDuplexMode implements INativeEnum<EVDuplexMode> {
		DM_DuplexNone(EVDuplexModeHelper.ENUM_VALUES[0]),
		_DuplexAuto(EVDuplexModeHelper.ENUM_VALUES[1]),
		_DuplexLongSide(EVDuplexModeHelper.ENUM_VALUES[2]),
		_DuplexShortSide(EVDuplexModeHelper.ENUM_VALUES[3]);
		private int value;
		EVDuplexMode(int i) {
			this.value = i;
		}
		public EVDuplexMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVDuplexMode toEnum(int retval) {
			if(retval == DM_DuplexNone.value){
				return DM_DuplexNone;
			}
			else if(retval == _DuplexAuto.value){
				return _DuplexAuto;
			}
			else if(retval == _DuplexLongSide.value){
				return _DuplexLongSide;
			}
			else if(retval == _DuplexShortSide.value){
				return _DuplexShortSide;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVDuplexModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPrinterOption implements INativeEnum<EVPrinterOption> {
		PO_PrintToFile(EVPrinterOptionHelper.ENUM_VALUES[0]),
		PO_PrintSelection(EVPrinterOptionHelper.ENUM_VALUES[1]),
		PO_PrintPageRange(EVPrinterOptionHelper.ENUM_VALUES[2]);
		private int value;
		EVPrinterOption(int i) {
			this.value = i;
		}
		public EVPrinterOption getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrinterOption toEnum(int retval) {
			if(retval == PO_PrintToFile.value){
				return PO_PrintToFile;
			}
			else if(retval == PO_PrintSelection.value){
				return PO_PrintSelection;
			}
			else if(retval == PO_PrintPageRange.value){
				return PO_PrintPageRange;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrinterOptionHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVPrintDeviceMetric implements INativeEnum<EVPrintDeviceMetric> {
		PdmWidth(EVPrintDeviceMetricHelper.ENUM_VALUES[0]),
		PdmHeight(EVPrintDeviceMetricHelper.ENUM_VALUES[1]),
		PdmWidthMM(EVPrintDeviceMetricHelper.ENUM_VALUES[2]),
		PdmHeightMM(EVPrintDeviceMetricHelper.ENUM_VALUES[3]),
		PdmNumColors(EVPrintDeviceMetricHelper.ENUM_VALUES[4]),
		PdmDepth(EVPrintDeviceMetricHelper.ENUM_VALUES[5]),
		PdmDpiX(EVPrintDeviceMetricHelper.ENUM_VALUES[6]),
		PdmDpiY(EVPrintDeviceMetricHelper.ENUM_VALUES[7]),
		PdmPhysicalDpiX(EVPrintDeviceMetricHelper.ENUM_VALUES[8]),
		PdmPhysicalDpiY(EVPrintDeviceMetricHelper.ENUM_VALUES[9]);
		private int value;
		EVPrintDeviceMetric(int i) {
			this.value = i;
		}
		public EVPrintDeviceMetric getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVPrintDeviceMetric toEnum(int retval) {
			if(retval == PdmWidth.value){
				return PdmWidth;
			}
			else if(retval == PdmHeight.value){
				return PdmHeight;
			}
			else if(retval == PdmWidthMM.value){
				return PdmWidthMM;
			}
			else if(retval == PdmHeightMM.value){
				return PdmHeightMM;
			}
			else if(retval == PdmNumColors.value){
				return PdmNumColors;
			}
			else if(retval == PdmDepth.value){
				return PdmDepth;
			}
			else if(retval == PdmDpiX.value){
				return PdmDpiX;
			}
			else if(retval == PdmDpiY.value){
				return PdmDpiY;
			}
			else if(retval == PdmPhysicalDpiX.value){
				return PdmPhysicalDpiX;
			}
			else if(retval == PdmPhysicalDpiY.value){
				return PdmPhysicalDpiY;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVPrintDeviceMetricHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private long getDC_void(long pNativeObject);
	/**
	 * 获取DC
	 * @param  
	 * @return 返回DC
	 */
	public long getDC()
	{
		long returnValue = getDC_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDC_void_NoVirtual(long pNativeObject);
	protected long getDC_NoVirtual()
	{
		long returnValue = getDC_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void releaseDC_void(long pNativeObject);
	/**
	 * 释放DC
	 * @param  
	 */
	public void releaseDC()
	{
		releaseDC_void(this.nativeObject.pointer);
	}
	native private void releaseDC_void_NoVirtual(long pNativeObject);
	protected void releaseDC_NoVirtual()
	{
		releaseDC_void_NoVirtual(this.nativeObject.pointer);
	}

	native private int getWidth_void(long pNativeObject);
	/**
	 * 获取设备宽度
	 * @param  
	 * @return 返回宽度
	 */
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWidth_void_NoVirtual(long pNativeObject);
	protected int getWidth_NoVirtual()
	{
		int returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getHeight_void(long pNativeObject);
	/**
	 * 获取设备高度
	 * @param  
	 * @return 返回高度
	 */
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void_NoVirtual(long pNativeObject);
	protected int getHeight_NoVirtual()
	{
		int returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fill_IColor(long pNativeObject, long color);
	/**
	 * 以指定颜色填充
	 * @param color 颜色
	 */
	public void fill(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		fill_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void fill_IColor_NoVirtual(long pNativeObject, long color);
	protected void fill_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		fill_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	native private void fill_ev_int32(long pNativeObject, int color);
	/**
	 * 以指定颜色填充
	 * @param color 颜色（aarrggbb）
	 */
	public void fill(int color)
	{
		int colorParamValue = color;
		fill_ev_int32(this.nativeObject.pointer, colorParamValue);
	}
	native private void fill_ev_int32_NoVirtual(long pNativeObject, int color);
	protected void fill_NoVirtual(int color)
	{
		int colorParamValue = color;
		fill_ev_int32_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	native private void setResolution_ev_int32(long pNativeObject, int resolution);
	public void setResolution(int resolution)
	{
		int resolutionParamValue = resolution;
		setResolution_ev_int32(this.nativeObject.pointer, resolutionParamValue);
	}
	native private int getResolution_void(long pNativeObject);
	public int getResolution()
	{
		int returnValue = getResolution_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getResolution_void_NoVirtual(long pNativeObject);
	protected int getResolution_NoVirtual()
	{
		int returnValue = getResolution_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setPrinterName_EVString(long pNativeObject, String name);
	public void setPrinterName(String name)
	{
		String nameParamValue = name;
		setPrinterName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getPrinterName_void(long pNativeObject);
	public String getPrinterName()
	{
		String returnValue = getPrinterName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDocName_EVString(long pNativeObject, String name);
	public void setDocName(String name)
	{
		String nameParamValue = name;
		setDocName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getDocName_void(long pNativeObject);
	public String getDocName()
	{
		String returnValue = getDocName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOrientation_EVPageOrientation(long pNativeObject, int orientation);
	public void setOrientation(com.earthview.world.spatial.carto.EVPageOrientation orientation)
	{
		int orientationParamValue = orientation.getValue();
		setOrientation_EVPageOrientation(this.nativeObject.pointer, orientationParamValue);
	}
	native private int getOrientation_void(long pNativeObject);
	public com.earthview.world.spatial.carto.EVPageOrientation getOrientation()
	{
		int returnValue = getOrientation_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageOrientation.toEnum(returnValue);
	}
	native private void setPageSize_EVPageSize(long pNativeObject, int size);
	public void setPageSize(com.earthview.world.spatial.carto.EVPageSize size)
	{
		int sizeParamValue = size.getValue();
		setPageSize_EVPageSize(this.nativeObject.pointer, sizeParamValue);
	}
	native private int getPageSize_void(long pNativeObject);
	public com.earthview.world.spatial.carto.EVPageSize getPageSize()
	{
		int returnValue = getPageSize_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(returnValue);
	}
	native private void setPageSize_CPageSize_EVPrintUnit(long pNativeObject, long paperSize, int unit);
	public void setPageSize(com.earthview.world.display.PageSize paperSize, com.earthview.world.display.Printer.EVPrintUnit unit)
	{
		long paperSizeParamValue = paperSize.nativeObject.pointer;
		int unitParamValue = unit.getValue();
		setPageSize_CPageSize_EVPrintUnit(this.nativeObject.pointer, paperSizeParamValue, unitParamValue);
	}
	native private long getPageSize_EVPrintUnit(long pNativeObject, int unit);
	public com.earthview.world.display.PageSize getPageSize(com.earthview.world.display.Printer.EVPrintUnit unit)
	{
		int unitParamValue = unit.getValue();
		long returnValue = getPageSize_EVPrintUnit(this.nativeObject.pointer, unitParamValue);
		com.earthview.world.display.PageSize __returnValue = new com.earthview.world.display.PageSize(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageSize)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		}
		return __returnValue;
	}
	native private void setPageOrder_EVPageOrder(long pNativeObject, int order);
	public void setPageOrder(com.earthview.world.display.Printer.EVPageOrder order)
	{
		int orderParamValue = order.getValue();
		setPageOrder_EVPageOrder(this.nativeObject.pointer, orderParamValue);
	}
	native private int getPageOrder_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVPageOrder getPageOrder()
	{
		int returnValue = getPageOrder_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPageOrder.toEnum(returnValue);
	}
	native private void setPrinterMode_EVPrinterMode(long pNativeObject, int mode);
	public void setPrinterMode(com.earthview.world.display.Printer.EVPrinterMode mode)
	{
		int modeParamValue = mode.getValue();
		setPrinterMode_EVPrinterMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getPrinterMode_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVPrinterMode getPrinterMode()
	{
		int returnValue = getPrinterMode_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPrinterMode.toEnum(returnValue);
	}
	native private void setColorMode_EVColorMode(long pNativeObject, int mode);
	public void setColorMode(com.earthview.world.display.Printer.EVColorMode mode)
	{
		int modeParamValue = mode.getValue();
		setColorMode_EVColorMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getColorMode_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVColorMode getColorMode()
	{
		int returnValue = getColorMode_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVColorMode.toEnum(returnValue);
	}
	native private void setCopyCount_int(long pNativeObject, int count);
	public void setCopyCount(int count)
	{
		int countParamValue = count;
		setCopyCount_int(this.nativeObject.pointer, countParamValue);
	}
	native private int getCopyCount_void(long pNativeObject);
	public int getCopyCount()
	{
		int returnValue = getCopyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSupportsMultipleCopies_void(long pNativeObject);
	public boolean isSupportsMultipleCopies()
	{
		boolean returnValue = isSupportsMultipleCopies_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPaperSource_EVPaperSource(long pNativeObject, int soure);
	public void setPaperSource(com.earthview.world.display.Printer.EVPaperSource soure)
	{
		int soureParamValue = soure.getValue();
		setPaperSource_EVPaperSource(this.nativeObject.pointer, soureParamValue);
	}
	native private int getPaperSource_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVPaperSource getPaperSource()
	{
		int returnValue = getPaperSource_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPaperSource.toEnum(returnValue);
	}
	native private long getPageRect_EVPrintUnit(long pNativeObject, int unit);
	public com.earthview.world.display.PageRect getPageRect(com.earthview.world.display.Printer.EVPrintUnit unit)
	{
		int unitParamValue = unit.getValue();
		long returnValue = getPageRect_EVPrintUnit(this.nativeObject.pointer, unitParamValue);
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
	native private boolean newPage_void(long pNativeObject);
	public boolean newPage()
	{
		boolean returnValue = newPage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPrinterState_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVPrinterState getPrinterState()
	{
		int returnValue = getPrinterState_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVPrinterState.toEnum(returnValue);
	}
	native private long getPrintEngine_void(long pNativeObject);
	public com.earthview.world.display.PrintEngine getPrintEngine()
	{
		long returnValue = getPrintEngine_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.PrintEngine __returnValue = new com.earthview.world.display.PrintEngine(CreatedWhenConstruct.CWC_NotToCreate, "CPrintEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PrintEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPrintEngine");
		}
		return __returnValue;
	}
	native private long getNativeGraphics_void(long pNativeObject);
	public VoidPointer getNativeGraphics()
	{
		long returnValue = getNativeGraphics_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean startPrint_void(long pNativeObject);
	public boolean startPrint()
	{
		boolean returnValue = startPrint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean endPrint_void(long pNativeObject);
	public boolean endPrint()
	{
		boolean returnValue = endPrint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOutputFormat_EVOutputFormat(long pNativeObject, int format);
	public void setOutputFormat(com.earthview.world.display.Printer.EVOutputFormat format)
	{
		int formatParamValue = format.getValue();
		setOutputFormat_EVOutputFormat(this.nativeObject.pointer, formatParamValue);
	}
	native private int getOutputFormat_void(long pNativeObject);
	public com.earthview.world.display.Printer.EVOutputFormat getOutputFormat()
	{
		int returnValue = getOutputFormat_void(this.nativeObject.pointer);
		return com.earthview.world.display.Printer.EVOutputFormat.toEnum(returnValue);
	}
	native private boolean abort_void(long pNativeObject);
	public boolean abort()
	{
		boolean returnValue = abort_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCollateCopies_bool(long pNativeObject, boolean collate);
	/// return false;
	public void setCollateCopies(boolean collate)
	{
		boolean collateParamValue = collate;
		setCollateCopies_bool(this.nativeObject.pointer, collateParamValue);
	}
	native private boolean isCollateCopies_void(long pNativeObject);
	public boolean isCollateCopies()
	{
		boolean returnValue = isCollateCopies_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOutputFileName_EVString(long pNativeObject, String name);
	public void setOutputFileName(String name)
	{
		String nameParamValue = name;
		setOutputFileName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getOutputFileName_void(long pNativeObject);
	public String getOutputFileName()
	{
		String returnValue = getOutputFileName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int setPrinterProperty_void(long pNativeObject);
	public int setPrinterProperty()
	{
		int returnValue = setPrinterProperty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private long toXmlElement_void(long pNativeObject);
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
	public Printer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Printer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDC_void(long pNativeObject, String method);
	native protected void register_releaseDC_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_fill_IColor(long pNativeObject, String method);
	native protected void register_fill_ev_int32(long pNativeObject, String method);
	native protected void register_getResolution_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDC_void(this.nativeObject.pointer, "getDC_void_callback");
			this.register_releaseDC_void(this.nativeObject.pointer, "releaseDC_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_fill_IColor(this.nativeObject.pointer, "fill_IColor_callback");
			this.register_fill_ev_int32(this.nativeObject.pointer, "fill_ev_int32_callback");
			this.register_getResolution_void(this.nativeObject.pointer, "getResolution_void_callback");
		}
	}
	
	public static Printer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Printer obj = null;
 		if(baseObj instanceof Printer)
		{
			obj = (Printer)baseObj;
		} else {
			obj = new Printer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPrinter");
			obj.increaseCast();
		}

		return obj;
	}
}
