#ifndef EARTHVIEW_WORLD_DISPLAY_IDISPLAYOPTIONS_H
#define EARTHVIEW_WORLD_DISPLAY_IDISPLAYOPTIONS_H

#include "spatialinterface/config.h"
#include "core/xml.h"
namespace EarthView{
	namespace World{
		namespace Display{
			enum EVCompositingMode
			{
				CM_SourceOver					= 0, // 0
				CM_SourceCopy					= 1	 // 1
			};
			enum EVCompositingQuality
			{
				CQ_Invalid						= -1,
				CQ_Default						= 0,
				CQ_HighSpeed					= 2,
				CQ_HighQuality					= 3,
				CQ_GammaCorrected				= 4,
				CQ_AssumeLinear					= 5
			};
			enum EVTextRenderingHint
			{
				TRH_SystemDefault				= 0, // Glyph with system default rendering hint
				TRH_SingleBitPerPixelGridFit	= 1, // Glyph bitmap with hinting
				TRH_SingleBitPerPixel			= 2, // Glyph bitmap without hinting
				TRH_AntiAliasGridFit			= 3, // Glyph anti-alias bitmap with hinting
				TRH_AntiAlias					= 4, // Glyph anti-alias bitmap without hinting
				TRH_ClearTypeGridFit			= 5  // Glyph CT bitmap with hinting
			};
			enum EVInterpolationMode
			{
				IM_Invalid						= -1,
				IM_Default						= 0,
				IM_LowQuality					= 1,
				IM_HighQuality					= 2,
				IM_Bilinear						= 3,
				IM_Bicubic						= 4,
				IM_NearestNeighbor				= 5,
				IM_HighQualityBilinear			= 6,
				IM_HighQualityBicubic			= 7
			};
			enum EVSmoothingMode
			{
				SM_Invalid						= -1,
				SM_Default						= 0,
				SM_HighSpeed					= 1,
				SM_HighQuality					= 2,
				SM_None							= 3,
				SM_AntiAlias					= 4
			};
			enum EVPixelOffsetMode
			{
				POM_nvalid						= -1,
				POM_Default						= 0,
				POM_HighSpeed					= 1,
				POM_HighQuality					= 2,
				POM_None						= 3,    // No pixel offset
				POM_Half						= 4     // Offset by -0.5, -0.5 for fast anti-alias perf
			};
			class EV_INTERFACE_DLL IDisplayOptions : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				virtual ~IDisplayOptions();
				
			public:
				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getCompositingMode( _out EarthView::World::Display::EVCompositingMode* mode );
				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				virtual ev_void setEVCompositingMode( _in EarthView::World::Display::EVCompositingMode mode );
				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getCompositingQuality( _out EarthView::World::Display::EVCompositingQuality* quality );
				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				virtual ev_void setCompositingQuality( _in EarthView::World::Display::EVCompositingQuality quality );
				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getTextRenderingHint( _out EarthView::World::Display::EVTextRenderingHint* hint );
				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				virtual ev_void setTextRenderingHint( _in EarthView::World::Display::EVTextRenderingHint hint );
				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getInterpolationMode( _out EarthView::World::Display::EVInterpolationMode* mode );
				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				virtual ev_void setInterpolationMode( _in EarthView::World::Display::EVInterpolationMode mode );
				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getSmoothingMode( _out EarthView::World::Display::EVSmoothingMode* mode );
				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				virtual ev_void setSmoothingMode( _in EarthView::World::Display::EVSmoothingMode mode );
				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				virtual ev_bool getPixelOffsetMode( _out EarthView::World::Display::EVPixelOffsetMode* mode );
				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				virtual ev_void setPixelOffsetMode( _in EarthView::World::Display::EVPixelOffsetMode mode );
				/// <summary>
				/// 反序列化
				/// </summary>
				virtual ev_void loadFromXML(_in EarthView::World::Core::CXmlElement& element);
				/// <summary>
				/// 序列化
				/// </summary>
				virtual EarthView::World::Core::CXmlElement toXmlElement();
			ev_private:
				IDisplayOptions( EarthView::World::Core::CNameValuePairList *pList );
			protected:
				IDisplayOptions();
				IDisplayOptions( IDisplayOptions& obj );
			};
		}
	}
}
#endif

