#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLLAYER_H

#include "symbol/symbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 风格图层类
			/// 提供方法如下：
			/// 获取该层的风格对象、设置风格对象
			/// 虚方法：获取与设置是否可见、是否颜色锁定
			/// </summary>
			class EV_SYMBOL_DLL CSymbolLayer:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSymbolLayer();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSymbolLayer();

				/// <summary>
				/// 获取该层的风格对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格对象</returns>
				const EarthView::World::Spatial::Display::ISymbol* getSymbol() const ;
				EarthView::World::Spatial::Display::ISymbol* getSymbol();

				/// <summary>
				/// 设置风格对象
				/// </summary>
				/// <param name="symbol">风格对象</param>
				/// <returns></returns>
				ev_void setSymbol(const  EarthView::World::Spatial::Display::ISymbol* symbol);

				/// <summary>
				/// 获取是否可见
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否可见</returns>
				virtual ev_bool isVisible() const;

				/// <summary>
				/// 设置可见
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual ev_void setVisible(ev_bool visible);

				/// <summary>
				/// 是否颜色锁定
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回值为true，则颜色锁定；否则没有锁定</returns>
				virtual ev_bool isColorLock() const;

				/// <summary>
				/// 设置颜色锁定
				/// </summary>
				/// <param name="lock">颜色锁定</param>
				/// <returns></returns>
				virtual ev_void setColorLock(ev_bool lock);
			ev_private:
				CSymbolLayer( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 风格对象
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pSymbol;
				/// <summary>
				/// 可见
				/// </summary>
				ev_bool m_bVisible;
				/// <summary>
				/// 颜色锁定
				/// </summary>
				ev_bool m_bColorLocked;
			private:
				C_DISABLE_COPY( CSymbolLayer );
			};
		}
		}
	}
}
#endif
