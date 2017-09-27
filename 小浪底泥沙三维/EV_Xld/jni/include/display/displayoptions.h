#ifndef EARTHVIEW_WORLD_DISPLAY_DISPLAYOPTIONS_H
#define EARTHVIEW_WORLD_DISPLAY_DISPLAYOPTIONS_H

#include "spatialinterface/idisplayoptions.h"
#include "display/display_config.h"

namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 显示选项
			/// </summary>
			class EV_DISPLAY_DLL CDisplayOptions : public EarthView::World::Display::IDisplayOptions
			{
			public:
				/// <summary>
				/// 默认构造函数      
				/// </summary>
				CDisplayOptions();
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				~CDisplayOptions();

			public:
				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getCompositingMode( _out EarthView::World::Display::EVCompositingMode* mode );
				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				ev_void setEVCompositingMode( _in EarthView::World::Display::EVCompositingMode mode );
				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getCompositingQuality( _out EarthView::World::Display::EVCompositingQuality* quality );
				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				ev_void setCompositingQuality( _in EarthView::World::Display::EVCompositingQuality quality );
				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getTextRenderingHint( _out EarthView::World::Display::EVTextRenderingHint* hint );
				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				ev_void setTextRenderingHint( _in EarthView::World::Display::EVTextRenderingHint hint );
				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getInterpolationMode( _out EarthView::World::Display::EVInterpolationMode* mode );
				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				ev_void setInterpolationMode( _in EarthView::World::Display::EVInterpolationMode mode );
				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getSmoothingMode( _out EarthView::World::Display::EVSmoothingMode* mode );
				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				ev_void setSmoothingMode( _in EarthView::World::Display::EVSmoothingMode mode );
				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				ev_bool getPixelOffsetMode( _out EarthView::World::Display::EVPixelOffsetMode* mode );
				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				ev_void setPixelOffsetMode( _in EarthView::World::Display::EVPixelOffsetMode mode );
				/// <summary>
				/// 反序列化
				/// </summary>
				virtual ev_void loadFromXML(_in EarthView::World::Core::CXmlElement& element);
				/// <summary>
				/// 序列化
				/// </summary>
				virtual EarthView::World::Core::CXmlElement toXmlElement();
			private:
				ev_map<ev_int32,ev_int32> mOptions;
				ev_bool getOption( _in ev_int32 type, _out ev_int32* option );
			ev_private:
				CDisplayOptions( EarthView::World::Core::CNameValuePairList *pList );
			};
		}
	}
}
#endif

