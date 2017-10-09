#ifndef EARTHVIEW_WORLD_DISPLAY_PRINTERENGINE_H
#define EARTHVIEW_WORLD_DISPLAY_PRINTERENGINE_H

#include "display/display_config.h"
#include "display/pagerect.h"
#include "spatialinterface/ipage.h"
#include "printer.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
class EV_DISPLAY_DLL CPrintEngine : public EarthView::World::Core::CAllocatedObject
{
public:
    virtual ~CPrintEngine() {}
    enum EVPrintEnginePropertyKey {
        PPK_CollateCopies,
        PPK_ColorMode,
        PPK_DocumentName,

        PPK_Orientation,
        PPK_OutputFileName,
        PPK_PageOrder,
        PPK_PaperRect,
        PPK_PaperSource,
        PPK_PrinterName,
        PPK_PrinterProgram,
        PPK_Resolution,
        PPK_SupportedResolutions,

        PPK_WindowsPageSize,
        PPK_FontEmbedding,
        PPK_SuppressSystemPrintStatus,

        PPK_Duplex,

        PPK_PaperSources,
		PPK_PaperSize,
        PPK_CustomPaperSize,
        PPK_CopyCount,
        PPK_SupportsMultipleCopies,

        PPK_CustomBase = 0xff00
    };
	enum Type {
		Windows,
		Linux,
		Pdf
	};
	virtual Type type(){return Windows;}

	virtual void setProperty(EVPrintEnginePropertyKey key, const EarthView::World::Core::CVariant &value){}
	virtual EarthView::World::Core::CVariant property(EVPrintEnginePropertyKey key) const {return EarthView::World::Core::CVariant();}

    virtual bool newPage(){return false;}
    virtual bool abort(){return false;}

	virtual ev_bool begin(){return false;}
	virtual ev_bool end(){return false;}

    virtual ev_int32 metric(CPrinter::EVPrintDeviceMetric dm){return 0;}

    virtual CPrinter::EVPrinterState printerState()const {return CPrinter::PS_Error;}

	virtual void * getPaintEngine(){return NULL;}

    virtual ev_int64 getPrinterDC() const { return 0; }
    virtual void releasePrinterDC(){ }

	virtual ev_void setPageMargins(ev_real64 left, ev_real64 top, ev_real64 right, ev_real64 bottom){}
	virtual ev_void getPageMargins(ev_real64 *left, ev_real64 *top, ev_real64 *right, ev_real64 *bottom) const{}

	virtual EarthView::World::Display::CPageRect getPageRect() const
	{
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED,"This method is not implemented!","");
	}
	virtual ev_void setPageSize(const EarthView::World::Display::CPageSize & paperSize){}

	virtual EarthView::World::Spatial::Carto::EVPageSize getPageSize()
	{
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED,"This method is not implemented!","");
	}

	virtual ev_void setResolution(ev_int32 resolution){}
	
	virtual ev_void setPaperSources(CPrinter::EVPaperSource source){}

	virtual ev_int32 setPrinterProperty(){return -1;}
protected:
	CPrintEngine(){}
ev_private:
	/// <summary> 
	/// 用于封装的构造函数
	/// </summary>
	CPrintEngine( EarthView::World::Core::CNameValuePairList *pList ){}
};

		}}}

#endif // QPRINTENGINE_H
