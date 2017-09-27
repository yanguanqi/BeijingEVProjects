#ifndef EARTHVIEW_WORLD_CARTO_CARTOOUTPUT_H
#define EARTHVIEW_WORLD_CARTO_CARTOOUTPUT_H

#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ienvelope.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/ipagelayout.h"
#include "display/printer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 制图输出
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CCartoOutput2D : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCartoOutput2D(IPageLayout * pagelayout);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CCartoOutput2D();
				public:
					/// <summary>
					/// 获取打印机
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual EarthView::World::Display::CPrinter* getPrinter();
					/// <summary>
					/// 设置地图布局页面大小是否采用打印机页面设置
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_void setUsingPrinterPaperSettings(ev_bool usingMapPageSettings);
					/// <summary>
					/// 获取地图布局页面大小是否采用打印机页面设置
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_bool isUsingPrinterPaperSettings() const;
					/// <summary>
					///设置是否打印所有页面
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_void setPrinterAll(ev_bool printerAll);
					/// <summary>
					///获取是否打印所有页面
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_bool isPrinterAll() const;
					/// <summary>
					///设置是否缩放地图
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_void setScaleMap(ev_bool scaleMap);
					/// <summary>
					///获取是否缩放地图
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_bool isScaleMap() const;
					/// <summary>
					///获取打印份数
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_uint32 getPrintCopyCount() const;
					/// <summary>
					///设置打印份数
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_void setPrintCopyCount(ev_uint32 count);
					/// <summary>
					///设置打印起始页面
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_void setFromTo(int fromPage, int toPage);
					/// <summary>
					///获取打印起始页面索引
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					virtual ev_int32 getFromPage() const;
					/// <summary>
					///获取打印终止页面索引
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					ev_int32 getToPage() const;
					/// <summary>
					///获取所有页面数
					/// </summary>
					/// <param name=""></param> 
					/// <returns></returns>
					ev_int32 getAllPageCount();
					/// <summary>
					/// 从xml元素中恢复制图输出的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 将制图输出的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_private:
					CCartoOutput2D( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ev_void initial();
					C_DISABLE_COPY(CCartoOutput2D)
				private:
					IPageLayout * mpPagelayout;
					ev_bool mbUsingPrinterPaperSettings;
					ev_bool mbPrinterAll;
					ev_bool mbIsScaleMap;
					ev_uint32 mdFromPage;
					ev_uint32 mdToPage;
					ev_uint32 mdCopyCount;
					EarthView::World::Display::CPrinter* mpPrinter;
				};	
			}
		}
	}
}
#endif 