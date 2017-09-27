//Created by EagleFileGenerator
#ifndef __FONTSTYLE_H__
#define __FONTSTYLE_H__

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "graphic/graphic_config.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/// <summary>
			/// 字体风格
			/// </summary>
			class EV_GRAPHIC_DLL FontStyle : public EarthView::World::Core::CBaseObject
			{
			public:
				FontStyle();
				FontStyle(const EVString& fontFamily, ev_uint8 size, ev_bool isItalic, ev_bool isBold, ev_bool hasShadow);
				FontStyle(const EVString& fontFamily, ev_uint8 size, ev_bool isItalic, ev_bool isBold, ev_bool hasShadow, ev_bool antiAlias);	
				explicit FontStyle(ev_uint32 val)
				{	mKey = val;  }


				const EVString& getFontFamily() const;
				void setFontFamily(const EVString& fontFamily);
				
				ev_uint16 fontIndex() const { return mFontIndex; }

				ev_bool isItalic() const { return mIsItalic; }
				void setItalic(ev_bool val);

				ev_uint8 size() const { return mSize; }
				void setSize(ev_uint8 val) { mSize = val; }

				ev_bool isBold() const { return mIsBold; }
				void setBold(ev_bool val);

				ev_bool hasShadow() const { return mHasShadow; }
				void setShadow(ev_bool val) { mHasShadow = val; }

				ev_bool isAntiAlias() const { return mAntiAlias;  }
				void setAntiAlias(ev_bool val) { mAntiAlias = val; }

				ev_uint32 key() const
				{	return mKey;	  }

				friend ev_bool operator == (const FontStyle& left, const FontStyle& right)
				{	return left.mKey == right.mKey;  }

				friend ev_bool operator < (const FontStyle& left, const FontStyle& right)
				{	return left.mKey < right.mKey;   }

				friend ev_bool operator > (const FontStyle& left, const FontStyle& right)
				{	return left.mKey > right.mKey;   }

				/// <summary>获取风格标识:取出字段“mIsBold”和“mIsItalic”所占的位</summary>
				ev_uint32 flag() const
				{	return (mKey & 0x00006000) >> 13; }
			private:
				union
				{
					struct  
					{
#if EV_ENDIAN == EV_ENDIAN_LITTLE
						ev_uint32 mFontIndex : 12;
						ev_uint32 mHasShadow : 1;
						ev_uint32 mIsItalic : 1;
						ev_uint32 mIsBold : 1;
						ev_uint32 mAntiAlias : 1;
						ev_uint32 mSize : 8;
						ev_uint32 mEmptyField : 8;
#else
						ev_uint32 mEmptyField : 8;
						ev_uint32 mSize : 8;
						ev_uint32 mAntiAlias : 1;
						ev_uint32 mIsBold : 1;
						ev_uint32 mIsItalic : 1;
						ev_uint32 mHasShadow : 1;
						ev_uint32 mFontIndex : 12;
#endif
					};
					ev_uint32 mKey;
				};
			ev_private:
				FontStyle(EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}
#endif // __FONTSTYLE_H__
