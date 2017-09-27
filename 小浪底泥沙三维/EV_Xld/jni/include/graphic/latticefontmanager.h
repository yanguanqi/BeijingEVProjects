#ifndef __EV_FONTCACHE_MGR_H__
#define __EV_FONTCACHE_MGR_H__

#include "core/logmanager.h"
#include "graphic/graphic_config.h"
#include "graphic/latticefontdef.h"
#include "graphic/latticemovabletext.h"
#include "core/dir.h"
#define  EV_FONTNAME_TABLESIZE  23
#define  EV_FONT_ENGLISH_NAME   1
#define  EV_FONT_CHINESE_NAME   0

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CLatticeFontCache;
			class CLatticeTextStyle;
			struct FontLattice;
			///<summary>
			/// 字体点阵缓存管理类
			/// </summary>
			class EV_GRAPHIC_DLL CLatticeFontManager:public EarthView::World::Core::CBaseObject
			{
			public:
				enum MaterialType
				{
					NORMAL_DCHECK,
					NORMAL,
					HIGHLIGHT_DCHECK,
					HIGHLIGHT
				};

			private:
				ev_void* m_pFontEngine;
				ev_void* m_pFace;
				ev_uint16 mFormerFontIndex;
				EarthView::World::Graphic::CMaterialPtr mDefaultMat[4];    
				static EarthView::World::Graphic::CLatticeFontManager* mSingleton;

				CLatticeFontManager();
				CLatticeFontManager(const CLatticeFontManager&){}
				void inline _Init();

			public:
				~CLatticeFontManager();   ///不得以置为public，不建议直接调用此函数。请使用destroySingleton()

				/// <summary>
				/// 销毁单例
				/// </summary>
				static ev_void destroySingleton();
				/// <summary>
				/// 字体引擎初始化
				/// </summary>
				static ev_void create();  
				/// <summary>
				/// 生成文本可渲染对象材质
				/// <param name="materialName">材质名称</param>
				/// <param name="resgrpName">资源组名称</param>
				/// <returns>材质智能指针</returns>
				static EarthView::World::Graphic::CMaterialPtr generateTextMaterial( const EVString& materialName, const EVString& resgrpName );
				/// <summary>
				/// 获得当前文本可渲染对象材质
				/// </summary>
				/// <returns>材质智能指针</returns>
				inline EarthView::World::Graphic::CMaterialPtr getTextMaterial(EarthView::World::Graphic::CLatticeFontManager::MaterialType maType);
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <returns>单例指针</returns>
				inline static EarthView::World::Graphic::CLatticeFontManager* getSingleton();
			ev_private:
				CLatticeFontManager(_in EarthView::World::Core::CNameValuePairList *pList);
				FontLattice* getFontLattice(const CLatticeTextStyle* style, ev_wchar unicode, _inout CLatticeFontCache * fontCache);
			};


			EarthView::World::Graphic::CLatticeFontManager* EarthView::World::Graphic::CLatticeFontManager::getSingleton()
			{
				EV_ASSERT(mSingleton)
				return mSingleton;
			}

			EarthView::World::Graphic::CMaterialPtr CLatticeFontManager::getTextMaterial(EarthView::World::Graphic::CLatticeFontManager::MaterialType maType)
			{ 
				EV_ASSERT(mDefaultMat[maType].get())
					return mDefaultMat[maType];
			}
		}
	}
}

#endif
