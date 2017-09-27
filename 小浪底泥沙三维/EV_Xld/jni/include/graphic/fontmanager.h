#ifndef _FontManager_H__
#define _FontManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "fontstyle.h"
#include "font.h"
#include "core/stringvector.h"

class CWriteConfigFileThread;

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Manages CFont resources, parsing .fontdef files and generally organising them.****/
            class EV_GRAPHIC_DLL CFontManager : public EarthView::World::Graphic::CResourceManager
            {
				typedef map<ev_uint32,EarthView::World::Graphic::CFontPtr> TFontResMap;
            private:
                static EarthView::World::Graphic::CFontManager *ms_Singleton;
            ev_private:
                CFontManager(_in EarthView::World::Core::CNameValuePairList *pList);
				
            public:
				/// <summary>
				/// 字体资源的用途分组
				/// </summary>
				enum FontUsage
				{
				    /// 场景元素：要求丰富的特性，但不像屏幕状态显示区那样频繁地改变文本
					SCENE_ELEMENT,
				    /// 屏幕状态显示区(显示帧率、相机状态等)，要显示的字体Unicode范围有限，但文本改变得十分频繁
					SCREEN_STATUS_OVERLAY,
					/// 未命名用途1-4
					UN_USAGE1,
					UN_USAGE2,
					UN_USAGE3,
					UN_USAGE4 = 5
				};
				/// <summary>
				/// 三维字体资源组名称
				/// </summary>
				static const EVString FONT_RESGRP_NAME;

				/// <summary>
				/// 主fontdef文件名称
				/// </summary>
				static const EVString MAIN_FONTDEF_FILE;

				/// <summary>
				/// 获取字体资源(和getByName()一样能获取字体资源,只是通过此方法无须用户提供fontdef文件即可获取)
				/// </summary>
				/// <param name="style">字体风格</param>
				/// <param name="usage">用途: 如果不希望一个字体资源被多个模块共用，可通过设置不同的用途来区分</param>
				/// <returns>字体资源指针</returns>
				EarthView::World::Graphic::CFontPtr getFont(const EarthView::World::Graphic::FontStyle& style, EarthView::World::Graphic::CFontManager::FontUsage usage);
				/// <summary>
				/// 获取默认字体家族名
				/// </summary>
				/// <returns>家族名称字符串</returns>
				const ev_char* getDefaultFontFamily();

                CFontManager();
				~CFontManager();
				static EarthView::World::Graphic::CFontManager &getSingleton();
				static EarthView::World::Graphic::CFontManager *getSingletonPtr();
				/// <summary>
				/// 通过索引获取字体家族名称
				/// </summary>
				const EVString& getFontFamily(ev_size_t index) const;
				ev_uint16 getFontFamilyCount() const;

                /***** @copydoc CScriptLoader::parseScript ****/
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/

            ev_internal:
                //// Internal methods
                EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                      const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *loader,
			                          const EarthView::World::Core::NameValuePairList *params);

			private:
				TFontResMap mCachedFonts[6];
				EVString      mDirPath;
				Core::StringVector mFontFamilyTable;
				EV_MUTEX(mCachedFontsMutex)

				CWriteConfigFileThread* mWriteConfigFileThread;
			ev_private:
				void writeScript();
            protected:
                void parseAttribute(const EVString &line, EarthView::World::Graphic::CFontPtr &pFont);
                void logBadAttrib(const EVString &line, EarthView::World::Graphic::CFontPtr &pFont);
            };
        }
    }
}

#endif

