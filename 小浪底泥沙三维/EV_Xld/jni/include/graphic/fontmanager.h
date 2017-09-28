#ifndef _FontManager_H__
#define _FontManager_H__
#include "graphic/graphic_config.h"
#include "graphic/resourcemanager.h"
#include "graphic/font.h"
#include "core/stringvector.h"

class CFontManagerThread;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/***** Manages CFont resources,parsing .fontdef files and generally organising them.*****/
			class EV_GRAPHIC_DLL CFontManager : public CResourceManager
			{
			public:
				/// <summary>
				/// 字体资源的用途分组
				/// </summary>
				enum FontUsage
				{
					SCENE_ELEMENT,           /// 场景元素：要求丰富的特性，但不像屏幕状态显示区那样频繁地改变文本					
					SCENE_ELEMENT_INSTANCED, /// 场景元素（instance字体）：要求丰富的特性，但不像屏幕状态显示区那样频繁地改变文本
					SCREEN_STATUS_OVERLAY,   /// 屏幕状态显示区(显示帧率、相机状态等)，要显示的字体Unicode范围有限，但文本改变得十分频繁
				};

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CFontManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CFontManager();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CFontManager();
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <returns></returns>
				static CFontManager* getSingletonPtr();
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <returns></returns>
				static CFontManager& getSingleton();
				/// <summary>
				/// 获取字体资源(和getByName()一样能获取字体资源,只是通过此方法无须用户提供fontdef文件即可获取)
				/// </summary>
				/// <param name="style">字体风格</param>
				/// <param name="usage">用途: 如果不希望一个字体资源被多个模块共用，可通过设置不同的用途来区分</param>
				/// <returns>字体资源智能指针</returns>
				CFontPtr getFont(const FontStyle& style, CFontManager::FontUsage usage);
				/// <summary>
				/// 获取默认字体家族名称
				/// </summary>
				/// <returns>家族名称字符串</returns>
				const ev_char* getDefaultFontFamily();
				/// <summary>
				/// 通过索引获取字体家族名称
				/// </summary>
				/// <returns>家族名称字符串</returns>
				EVString getFontFamily(ev_size_t index) const;
				/// <summary>
				/// 获取系统中可用的字体家族名称数量
				/// </summary>
				/// <returns>可用的字体家族名称数量</returns>
				ev_uint16 getFontFamilyCount() const;
				/// <summary>
				/// 获取系统中缓存的字体资源名称列表
				/// </summary>
				/// <returns></returns>
				EarthView::World::Core::StringVector getCachedFontNames();
				/// <summary>
				/// 获取系统中缓存的字体资源名称列表需要加锁
				/// </summary>
				/// <returns></returns>
				EarthView::World::Core::CRecursiveMutex& getCachedFontNamesMutex();
				/// <summary>
				/// 启动字体合并线程
				/// </summary>
				/// <returns></returns>
				void startReloadFontInternalThread();
				/// <summary>
				/// 停止字体合并线程
				/// </summary>
				/// <returns></returns>
				void stopReloadFontInternalThread(); 

				/// <summary>
				/// 三维字体资源组名称
				/// </summary>
				static const EVString FONT_RESGRP_NAME;
				/// <summary>
				/// 主fontdef文件名称
				/// </summary>
				static const EVString MAIN_FONTDEF_FILE;

				/***** @copydoc CScriptLoader::parseScript *****/
				void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);

ev_private:
				void writeScript();

ev_internal:
				/***** @copydoc CResourceManager::createImpl *****/
				EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
					const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *loader,
					const EarthView::World::Core::NameValuePairList *createParams);

			protected:
				void parseAttribute(const EVString &line,CFontPtr &pFont);
				void logBadAttribute(const EVString &line,CFontPtr &pFont);

			private:
				static CFontManager* mpSingleton;
				CFontManagerThread* mpFontManagerThread;
				EarthView::World::Core::StringVector mCachedFontNames;
				EarthView::World::Core::CRecursiveMutex mCachedFontNamesMutex;
			};


		}
	}
}
#endif

