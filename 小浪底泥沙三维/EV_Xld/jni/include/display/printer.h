#ifndef EARTHVIEW_WORLD_DISPLAY_PRINTER_H
#define EARTHVIEW_WORLD_DISPLAY_PRINTER_H

#include "display/display_config.h"
#include "display/pagesize.h"
#include "display/pagerect.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/ipage.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{

class CPrinterPrivate;
class CPaintEngine;
class CPrintEngine;
class CPrintInfo;
class EV_DISPLAY_DLL CPrinter : public EarthView::World::Display::IPaintDevice
{
public:
	enum EVPrinterMode
	{
		PM_ScreenResolution     =    0,
		PM_PrinterResolution    =    1,
		PM_HighResolution       =    2
	};
	CPrinter();
    CPrinter(EVPrinterMode mode);
    ~CPrinter();

	enum EVPageOrder
	{
		PO_FirstPageFirst,
		PO_LastPageFirst
	};
	enum EVColorMode   
	{ 
		CM_GrayScale,
		CM_Color
	};
	enum EVPaperSource 
	{ 
		PS_OnlyOne,
		PS_Lower,
		PS_Middle,
		PS_Manual,
		PS_Envelope,
		PS_EnvelopeManual,
		PS_Auto,
		PS_Tractor,
		PS_SmallFormat,
		PS_LargeFormat,
		PS_LargeCapacity,
		PS_Cassette,
		PS_FormSource,
	};

	enum EVPrinterState
	{ 
		PS_Idle,
		PS_Active,
		PS_Aborted,
		PS_Error 
	};

	enum EVOutputFormat 
	{ 
		OF_NativeFormat,
		OF_PdfFormat, 
		OF_PostScriptFormat 
	};

	enum EVPrintUnit 
	{
		PU_Millimeter,
		PU_Point,
		PU_Inch,
		PU_Pica,
		PU_Didot,
		PU_Cicero,
		PU_DevicePixel
	};

	enum EVDuplexMode 
	{
		DM_DuplexNone = 0,
		_DuplexAuto,
		_DuplexLongSide,
		_DuplexShortSide
	};

	enum EVPrinterOption 
	{ 
		PO_PrintToFile, 
		PO_PrintSelection, 
		PO_PrintPageRange 
	};

	enum EVPrintDeviceMetric {
		PdmWidth = 1,
		PdmHeight,
		PdmWidthMM,
		PdmHeightMM,
		PdmNumColors,
		PdmDepth,
		PdmDpiX,
		PdmDpiY,
		PdmPhysicalDpiX,
		PdmPhysicalDpiY
	};

	public:
	/// <summary>
	/// 获取DC
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回DC</returns>
	virtual ev_int64 getDC();
	/// <summary>
	/// 释放DC
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void releaseDC();
	/// <summary>
	/// 获取设备宽度
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回宽度</returns>
	virtual ev_int32 getWidth() const ;
	/// <summary>
	/// 获取设备高度
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回高度</returns>
	virtual ev_int32 getHeight() const;
	/// <summary>
	/// 以指定颜色填充
	/// </summary>
	/// <param name="color">颜色</param>
	/// <returns></returns>
	virtual ev_void fill( _in const EarthView::World::Spatial::Display::IColor *color );
	/// <summary>
	/// 以指定颜色填充
	/// </summary>
	/// <param name="color">颜色（aarrggbb）</param>
	/// <returns></returns>
	virtual ev_void fill( _in ev_int32 color);

	ev_void setResolution(ev_int32 resolution);
	ev_int32 getResolution() const;

    ev_void setPrinterName(const EVString & name);
    EVString getPrinterName() const;

    ev_bool isValid() const;

    ev_void setDocName(const EVString & name);
    EVString getDocName() const;

    ev_void setOrientation(EarthView::World::Spatial::Carto::EVPageOrientation orientation);
    EarthView::World::Spatial::Carto::EVPageOrientation getOrientation() const;

    ev_void setPageSize(EarthView::World::Spatial::Carto::EVPageSize size);
    EarthView::World::Spatial::Carto::EVPageSize getPageSize() const;

    ev_void setPageSize(const CPageSize &paperSize, EVPrintUnit unit);
    CPageSize getPageSize(EVPrintUnit unit) const;

    ev_void setPageOrder(EVPageOrder order);
    EVPageOrder getPageOrder() const;

	ev_void setPrinterMode(EVPrinterMode mode);
	EVPrinterMode getPrinterMode() const;

    ev_void setColorMode(EVColorMode mode);
    EVColorMode getColorMode() const;

    ev_void setCopyCount(int count);
    int getCopyCount() const;
    bool isSupportsMultipleCopies() const;

    ev_void setPaperSource(EVPaperSource soure);
    EVPaperSource getPaperSource() const;

    CPageRect getPageRect(EVPrintUnit unit) const;
	CPageRect getPageRect() const;

    bool newPage();

    EVPrinterState getPrinterState() const;

    CPrintEngine *getPrintEngine() const;

	ev_void* getNativeGraphics();

	ev_bool startPrint();
	ev_bool endPrint();

	ev_void setOutputFormat(EVOutputFormat format);
	EVOutputFormat getOutputFormat() const;

	bool abort(); // return false;

	ev_void setCollateCopies(bool collate);
	bool isCollateCopies() const;

	ev_void setOutputFileName(const EVString & name);
	EVString getOutputFileName()const;

	ev_int32 setPrinterProperty();

	ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
	EarthView::World::Core::CXmlElement toXmlElement() const;
protected:
    int metric(EVPrintDeviceMetric) const;
    ev_void setEngines(CPrintEngine *printEngine);
ev_private:
	/// <summary> 
	/// 用于封装的构造函数
	/// </summary>
	CPrinter( EarthView::World::Core::CNameValuePairList *pList );
private:
	CPrinterPrivate * mpPrivate;
private:
    ev_void init(EVPrinterMode mode);

private:
	CPrinter( const CPrinter & p );
	friend class CPrinterPrivate;
};
}}}

#endif
