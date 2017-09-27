#ifndef EARTHVIEW_WORLD_DISPLAY_PRINTERINFO_H
#define EARTHVIEW_WORLD_DISPLAY_PRINTERINFO_H

#include "display/display_config.h"
#include "display/printer.h"
#include "spatialinterface/ipage.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
class CPrinterInfoPrivate;
class EV_DISPLAY_DLL PageInfo: public EarthView::World::Core::CAllocatedObject
{
public:
	ev_bool isPreDefine;
	EarthView::World::Spatial::Carto::EVPageSize evPageSize;
	EVString name;
	ev_real64 width; 
	ev_real64 height; 
public:
	PageInfo():isPreDefine(true){}
	~PageInfo(){}
ev_private:
	PageInfo(EarthView::World::Core::CNameValuePairList *pList):isPreDefine(true){}
};
class EV_DISPLAY_DLL CPrinterInfo : public EarthView::World::Core::CAllocatedObject
{
public:

	CPrinterInfo(const EVString &name);
	CPrinterInfo(const CPrinterInfo &other);
    ~CPrinterInfo();
	CPrinterInfo &operator=(const CPrinterInfo &other);
    EVString printerName() const;
    bool isDefault() const;


    static ev_void getAvailablePrinters(EarthView::World::Core::CStringArray & printers);
    static CPrinterInfo defaultPrinter();

	//papersize
 	ev_uint32 getSupportedPaperSizesCount() const;
	EarthView::World::Display::PageInfo getSupportedPaperSize(ev_uint32 index);

	//papersource
    ev_uint32 getSupportedPaperSourceCount() const;
	EarthView::World::Display::CPrinter::EVPaperSource getSupportedPaperSource(ev_uint32 index);

	//resolution
	ev_uint32 getSupportedResolutionCount() const;
	ev_uint32 getSupportedResolution(ev_uint32 index);
ev_private:
	CPrinterInfo( EarthView::World::Core::CNameValuePairList *pList );
private:
	CPrinterInfo();
    CPrinterInfoPrivate * mpPrivate;
};
		}}}

#endif 
