#ifndef _Font_H__
#define _Font_H__
#include "graphic/graphic_config.h"
#include "graphic/resource.h"
#include "graphic/texture.h"
#include "graphic/material.h"
#include "graphic/fontstyle.h"
#include "graphic/image.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CCharTextureInfo;
			struct SingleCharMap;
			struct FreeTypeHandle;
			/***** Enumerates the types of EarthView::World::Graphic::CFont usable in the engine. ****/
			enum FontType
			{
				//// Generated from a truetype (.ttf) font
				FT_TRUETYPE = 1,
				//// Loaded from an image created by an artist
				FT_IMAGE = 2,
				//// Generated from a truetype (.ttf) font for instance
				FT_TRUETYPE_INSTANCE = 3
			};					
			/***** Class representing a font in the system.
			@remarks
			This class is simply a way of getting a font texture into the EV_World system and
			to easily retrieve the texture coordinates required to accurately render them.
			Fonts can either be loaded from precreated textures, or the texture can be generated
			can use a .fontdef script to define it (probably more practical since you can reuse
			the definition more easily)
			@note
			This class extends both CResource and CManualResourceLoader since it is
			both a resource in it's own right, but it also provides the manual load
			implementation for the CTexture it creates.
			****/
			class EV_GRAPHIC_DLL CFont : public EarthView::World::Graphic::CResource
			{
ev_private:
				enum UnicodeMarks
				{
					UNICODE_NEL = 0x0085,
					UNICODE_CR = 0x000D,
					UNICODE_LF = 0x000A,
					UNICODE_SPACE = 0x0020,
					UNICODE_ZERO = 0x0030,
					UNICODE_TAB = 0x0009,
					UNICODE_BEGIN = 0x0001,
					UNICODE_END = 0xFFFF,
					UNICODE_ERR = 0x0000
				};

			public:
				friend class CFontInternalResourceLoader;
				class EV_GRAPHIC_DLL CFontInternalResourceLoader : public EarthView::World::Graphic::CManualResourceLoader
				{
ev_private:
					CFontInternalResourceLoader(EarthView::World::Core::CNameValuePairList *pList)
					{
						mParent = (EarthView::World::Graphic::CFont *)pList->GetAt("ref_parent");
					}
				public:
					CFontInternalResourceLoader(CFont *ref_parent)
					{
						mParent = ref_parent;
					}
					~CFontInternalResourceLoader() {}

					/***** Implementation of CManualResourceLoader::loadResource, called
					when the CTexture that this font creates needs to (re)load.
					****/
					void loadResource(EarthView::World::Graphic::CResource *resource);
				protected:
					EarthView::World::Graphic::CFont *mParent;
				};
				virtual CImage* loadResource(EarthView::World::Graphic::CResource *resource);
			protected:
				EarthView::World::Graphic::CFont::CFontInternalResourceLoader *m_pManualResourceLoader;
			public:
				virtual	EarthView::World::Graphic::CFont::CFontInternalResourceLoader *getManualResourceLoaderPtr()
				{
					return m_pManualResourceLoader;
				}

			private:
				void defineScript();
ev_internal:
				//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
				class EV_GRAPHIC_DLL CFontCmdType : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CFontCmdType(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CFontCmdType() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				class EV_GRAPHIC_DLL CCmdSource : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CCmdSource(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CCmdSource() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				class EV_GRAPHIC_DLL CCmdCharSpacer : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CCmdCharSpacer(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CCmdCharSpacer() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				class EV_GRAPHIC_DLL CCmdSize : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CCmdSize(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CCmdSize() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				class EV_GRAPHIC_DLL CCmdResolution : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CCmdResolution(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CCmdResolution() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				class EV_GRAPHIC_DLL CCmdCodePoints : public EarthView::World::Core::CParamCommand
				{
ev_private:
					CCmdCodePoints(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CCmdCodePoints() {}
					EVString doGet(const void *target) const;
					void doSet(void *target, const EVString &val);
				};
				//// 对于新添加的接口如get/setFontStyle()并没有添加相应的Command Object,请根据需要添加
			protected:
				//// Command object for setting / getting parameters
				static CFontCmdType msTypeCmd;
				static CCmdSource msSourceCmd;
				static CCmdCharSpacer msCharacterSpacerCmd;
				static CCmdSize msSizeCmd;
				static CCmdResolution msResolutionCmd;
				static CCmdCodePoints msCodePointsCmd;
				//// The type of font
				EarthView::World::Graphic::FontType mType;
				//// Source of the font (either an image name or a truetype font)
				EVString mSource;
				//// Add a gap between letters vertically and horizonally prevents nasty artifacts caused by fonts atypically wide or tall characters.
				ev_uint32 mCharacterSpacer;
				//// 字体风格
				EarthView::World::Graphic::FontStyle mStyle;
				//// Resolution (dpi) of truetype font
				ev_uint32 mTtfResolution;
				//// Max distance to baseline of this (truetype) font
				ev_int32 mTtfMaxBearingY;
				ev_uint32 mTtfMaxHeight;
				//// 最大容量
				ev_size_t mMaxCapability;
				EVString    mFamilyName;
				//// 生命值为0 时,该字体资源将不再被序列化到main.fontdef
				ev_uint32 mlife;

			public:
				typedef ev_uint32 CodePoint;
				typedef FloatRect UVRect;
				//// Information about the position and size of a glyph in a texture
				class EV_GRAPHIC_DLL GlyphInfo : public EarthView::World::Core::CBaseObject
				{
ev_private:
					GlyphInfo(_in EarthView::World::Core::CNameValuePairList *pList) 
						: codePoint((pList && pList->GetAt("id") != NULL ) ? (*(CodePoint *)pList->GetAt("id")) : 0)
						, uvRect((pList && pList->GetAt("rect") != NULL ) ? (*(UVRect *)pList->GetAt("rect")) : 0)
						, aspectRatio((pList && pList->GetAt("aspect") != NULL ) ? (*(Real *)pList->GetAt("aspect")) : 0)
						, matIndex((pList && pList->GetAt("matId") != NULL ) ? (*(ev_int32*)pList->GetAt("matId")) : 0)
						, horiBearingX(0.0), horiBearingY(0.0), horiAdvance(0.0)
						, vertBearingX(0.0), vertBearingY(0.0), vertAdvance(0.0)
						, height(0.0), width(0.0)
					{}

				public:
					GlyphInfo(CodePoint id, const UVRect &rect, Real aspect)
						: codePoint(id), uvRect(rect), aspectRatio(aspect), matIndex(0)
					{}
					GlyphInfo(CodePoint id, const UVRect &rect, Real aspect,ev_int32 matId)
						: codePoint(id), uvRect(rect), aspectRatio(aspect), matIndex(matId)
					{}

					CodePoint codePoint;
					UVRect uvRect;
					Real aspectRatio;
					ev_int32 matIndex;
					/// 需要添加一些新的成员来满足多个纹理中的字体的对齐
					UVRect clampUVRect;
					/// 字形参数,以像素为单位。
					ev_real32 horiBearingX;
					ev_real32 horiBearingY;
					ev_real32 horiAdvance;
					ev_real32 vertBearingX;
					ev_real32 vertBearingY;
					ev_real32 vertAdvance;
					ev_real32 height;
					ev_real32 width;
				};
				//// A range of code points, inclusive on both ends
				class EV_GRAPHIC_DLL FontCodePointRange : public EarthView::World::Core::CBaseObject
				{
				public:
					CodePoint first;
					CodePoint second;

				public:
					FontCodePointRange()
					{
					}

					FontCodePointRange(CodePoint f, CodePoint s)
					{
						if(s > f)
						{
							first = f;
							second = s;
						}
						else
						{
							first = s;
							second = f;
						}
					}
ev_private:
					FontCodePointRange(_in EarthView::World::Core::CNameValuePairList *pList)
					{
						first = pList && pList->GetAt("f") != NULL ? *(CodePoint *)pList->GetAt("f") : 0;
						second = pList && pList->GetAt("s") != NULL ? *(CodePoint *)pList->GetAt("s") : 0;
					}

				public:
					ev_bool merge(const EarthView::World::Graphic::CFont::FontCodePointRange& newVal)
					{
						CodePoint mergeEdgeLeft = first - 2;
						CodePoint mergeEdgeRight = second + 2;
						if( ((newVal.first > mergeEdgeLeft) && (newVal.first < mergeEdgeRight)) 
							|| ((newVal.second > mergeEdgeLeft) && (newVal.second < mergeEdgeRight)) )
						{
							if(newVal.first < first)
								first = newVal.first;
							if(newVal.second > second)
								second = newVal.second;
							return true;
						}
						return false;
					}

					ev_bool rightMerge(const EarthView::World::Graphic::CFont::FontCodePointRange& newVal) 
					{
						/// 已知 newVal > (*this)
						///                                           newVal.first(case C)
						///                        newVal.first(case B)     |
						///	  newVal.first(case A)           |              |  newVal.second
						/// L ---|----------------|----------|-------|------|-------|---------------> R                   
						///                     first         mergeEdgeRight(second + 2)
						EV_ASSERT(newVal.second >= second)
						CodePoint mergeEdgeRight = second + 2;
						/// 确定是否为 case C（false)
						if(newVal.first < mergeEdgeRight)
						{
							/// 确定是否为 case A （true) 或 case B （false)
							if(newVal.first < first) 
								first = newVal.first;
							second = newVal.second;
							return true;
						}
						return false;
					}

					ev_bool leftMerge(const EarthView::World::Graphic::CFont::FontCodePointRange& newVal) 
					{
						/// 已知 newVal < (*this)
						///               newVal.second(case A)      newVal.second(case B)
						///                          |                       |    second
						/// L ----|------------------|--------|--------------|------|-------------> R
						///   newVal.first             mergetEdgeLeft(first - 2)
						EV_ASSERT(newVal.second <= second)
						CodePoint mergeEdgeLeft = first - 2;
						/// 确定是否为 case A(false)
						if(newVal.second > mergeEdgeLeft)
						{
							if(newVal.first < first)
								first = newVal.first;
							return true;
						}
						return false;
					}

					ev_size_t size() const
					{
						return second - first + 1;
					}

					friend ev_bool operator == (const EarthView::World::Graphic::CFont::FontCodePointRange& left, const EarthView::World::Graphic::CFont::FontCodePointRange& right)
					{
						return (right.second == left.second) && (right.first == left.second);
					}

					friend ev_bool operator > (const EarthView::World::Graphic::CFont::FontCodePointRange& left, const EarthView::World::Graphic::CFont::FontCodePointRange& right)
					{
						return left.second > right.second;
					}

					friend ev_bool operator < (const EarthView::World::Graphic::CFont::FontCodePointRange& left, const EarthView::World::Graphic::CFont::FontCodePointRange& right)
					{
						return left.second < right.second;
					}
				};
				class EV_GRAPHIC_DLL FontCodePointRangeList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					FontCodePointRangeList(_in EarthView::World::Core::CNameValuePairList *pList) {}
ev_private:
					typedef list<EarthView::World::Graphic::CFont::FontCodePointRange> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
				private:
					InternalList mList;
					ev_size_t mCharCount;
				public:
					FontCodePointRangeList() :mCharCount(0){}
					void push_back(EarthView::World::Graphic::CFont::FontCodePointRange  const &t);

					void pop_back()
					{
						mCharCount -= mList.back().size();
						mList.pop_back();
					}

					EarthView::World::Graphic::CFont::FontCodePointRange &front()
					{
						return mList.front();
					}

					EarthView::World::Graphic::CFont::FontCodePointRange &back()
					{
						return mList.back();
					}

					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}

					void clear()
					{
						mList.clear();
						mCharCount = 0;
					}

					ev_size_t charCount() const
					{
						return mCharCount;
					}

					void cutDownTo(ev_size_t charCount)
					{
						while( mCharCount > charCount )
						{	
							pop_back();
						};
					}
				};
			protected:
				//// Map from unicode code point to texture coordinates
				typedef map<CodePoint,EarthView::World::Graphic::CFont::GlyphInfo> CodePointMap;
				CodePointMap mCodePointMap;
				EarthView::World::Core::CMutex mCodePointMapMutex;
				//// Range of code points to generate glyphs for (truetype only)
				EarthView::World::Graphic::CFont::FontCodePointRangeList mCodePointRangeList;
				//// The material which is generated for this font
				EarthView::World::Graphic::CMaterialPtr mpMaterial;
				//// CTexture pointer
				CTexturePtr mpTexture;				
				//// The material which is generated for this font for instance
				EarthView::World::Graphic::CMaterialPtrList mpMaterialList;
				EarthView::World::Core::CMutex mMatListMutex;
				//// CTexture pointer for instance
				typedef vector<EarthView::World::Graphic::CTexturePtr> TexturePtrList;
				TexturePtrList mpTextureList;
				//// for TRUE_TYPE font only
				ev_bool mAntialiasColour;

ev_private:
				CFont(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CFont(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
				CFont(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group, ev_bool isManual);
				CFont(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group);
				virtual ~CFont();
ev_internal:
				//// @copydoc CResource::loadImpl
				virtual void loadImpl();
				//// @copydoc CResource::unloadImpl
				virtual void unloadImpl();
				//// @copydoc CResource::calculateSize
				ev_size_t calculateSize() const
				{
					return 0;    //// permanent resource is in the texture
				}
ev_private:
				/***** 获取包含单个字符的纹理信息 ****/
				const CCharTextureInfo getSingleCharTexture(ev_wchar unicode);
				void reloadFontInternal();

			private:
				SingleCharMap* mSingleChars;
				FreeTypeHandle* mFTHandle;

			public:
				/***** Sets the type of font. Must be set before loading. ****/
				void setType(EarthView::World::Graphic::FontType ftype);
				/***** Gets the type of font. ****/
				EarthView::World::Graphic::FontType getType() const;
				/***** Sets the source of the font.
				@remarks
				If you have created a font of type FT_IMAGE, this method tells the
				EarthView::World::Graphic::CFont which image to use as the source for the characters. So the parameter
				as a font source, you will also need to tell the font where each character is
				@par
				If you have created a font of type FT_TRUETYPE, this method tells the
				EarthView::World::Graphic::CFont which .ttf file to use to generate the text. You will also need to call
				setTrueTypeSize and setTrueTypeResolution, and call addCodePointRange
				as many times as required to define the range of glyphs you want to be
				available.
				@param source An image file or a truetype font, depending on the type of this font
				****/
				void setSource(const EVString &source);
				/***** Gets the source this font (either an image or a truetype font).
				****/
				const EVString &getSource() const;
				/***** Sets the spacing to allocate for font characters to overlap each other.
				@param charSpacer The size of the character spacer, in points.  Increasing it
				allows for more stretched-out fonts; decreasing it reduces memory and processing
				time.  The default is "5".
				****/
				void setCharacterSpacer(ev_uint32 charSpacer);
				/***** Gets the spacing to allocate for font characters to overlap each other.
				@remarks Returns the size of the character spacer, in points.  A higher value
				allows for more stretched-out fonts.  A low value reduces memory and processing
				time.  The default is "5".
				****/
				ev_uint32 getCharacterSpacer() const;
				/***** Sets the size of a truetype font (only required for FT_TRUETYPE).
				@param ttfSize The size of the font in points. Note that the
				size of the font does not affect how big it is on the screen, just how large it is in
				the texture and thus how detailed it is.
				****/
				void setTrueTypeSize(ev_uint8 ttfSize);
				/***** Gets the point size of the font used to generate the texture.
				@remarks
				Only applicable for FT_TRUETYPE EarthView::World::Graphic::CFont objects.
				Note that the size of the font does not affect how big it is on the screen,
				just how large it is in the texture and thus how detailed it is.
				****/
				ev_uint8 getTrueTypeSize() const;
				/***** Sets the resolution (dpi) of the font used to generate the texture
				(only required for FT_TRUETYPE).
				@param ttfResolution The resolution in dpi
				****/
				void setTrueTypeResolution(ev_uint32 ttfResolution);
				/***** Gets the resolution (dpi) of the font used to generate the texture.
				@remarks
				Only applicable for FT_TRUETYPE EarthView::World::Graphic::CFont objects.
				****/
				ev_uint32 getTrueTypeResolution() const;
				/***** Gets the maximum baseline distance of all glyphs used in the texture.
				@remarks
				Only applicable for FT_TRUETYPE EarthView::World::Graphic::CFont objects.
				The baseline is the vertical origin of horizontal based glyphs.  The bearingY
				attribute is the distance from the baseline (origin) to the top of the glyph's
				bounding box.
				@note
				This value is only available after the font has been loaded.
				****/
				ev_int32 getTrueTypeMaxBearingY() const;

				ev_uint32 getTrueTypeMaxHeight() const { return mTtfMaxHeight; }

				ev_size_t getMaxCapability() const {  return mMaxCapability; }

				void setFontFamily(const EVString& family) { mFamilyName = family; }

				const EVString& getFontFamily() const {	return mFamilyName; }

				void setLife(ev_uint32 val) { mlife = val; }

				ev_uint32 life() const { return mlife; }
				
				void setFontStyle(const FontStyle& style) { mStyle = style; }

				const FontStyle& getFontStyle() const { return mStyle; }

			public:
				ev_bool existGlyphInfo(CodePoint id) const;
				inline void setGlyphInfo(const GlyphInfo& info)
				{
					EarthView::World::Core::CMutexLocker locker(const_cast<EarthView::World::Core::CMutex*>(&mCodePointMapMutex));
					CodePointMap::iterator i = mCodePointMap.find(info.codePoint);
					if (i != mCodePointMap.end())
					{
						i->second = info;
					}
					else
					{
						mCodePointMap.insert(CodePointMap::value_type(info.codePoint,info));
					}
				}
				/***** Gets the information available for a glyph corresponding to a
				given code point, or throws an exception if it doesn't exist;
				****/
				const EarthView::World::Graphic::CFont::GlyphInfo &getGlyphInfo(CodePoint id) const;

				/***** Sets the texture coordinates of a glyph.
				@remarks
				You only need to call this if you're setting up a font loaded from a texture manually.
				@note
				Also sets the aspect ratio (width / height) of this character. textureAspect
				is the width/height of the texture (may be non-square)
				****/
				inline void setGlyphTexCoords(CodePoint id, Real u1, Real v1, Real u2, Real v2, Real textureAspect)
				{
					EarthView::World::Core::CMutexLocker locker(const_cast<EarthView::World::Core::CMutex*>(&mCodePointMapMutex));
					CodePointMap::iterator i = mCodePointMap.find(id);
					if (i != mCodePointMap.end())
					{
						i->second.uvRect.left = u1;
						i->second.uvRect.top = v1;
						i->second.uvRect.right = u2;
						i->second.uvRect.bottom = v2;
						i->second.aspectRatio = textureAspect * (u2 - u1)  / (v2 - v1);
					}
					else
					{
						mCodePointMap.insert(CodePointMap::value_type(id,GlyphInfo(id,UVRect(u1, v1, u2, v2),textureAspect * (u2 - u1)  / (v2 - v1))));
					}
				}
				/***** Returns the texture coordinates of the associated glyph.
				@remarks CParameter is a short to allow both ASCII and wide chars.
				@param id The code point (unicode)
				@returns A rectangle with the UV coordinates, or null UVs if the
				code point was not present
				****/
				inline const UVRect &getGlyphTexCoords(CodePoint unicode) const
				{
					EarthView::World::Core::CMutexLocker locker(const_cast<EarthView::World::Core::CMutex*>(&mCodePointMapMutex));
					CodePointMap::const_iterator i = mCodePointMap.find(unicode);
					if (i != mCodePointMap.end())
					{
						return i->second.uvRect;
					}
					else
					{
						static UVRect nullRect(0.0, 0.0, 0.0, 0.0);
						return nullRect;
					}
				}

				/***** Sets the aspect ratio (width / height) of this character.
				@remarks
				You only need to call this if you're setting up a font loaded from a
				texture manually.
				****/
				inline void setGlyphAspectRatio(CodePoint id, Real ratio)
				{
					EarthView::World::Core::CMutexLocker locker(const_cast<EarthView::World::Core::CMutex*>(&mCodePointMapMutex));
					CodePointMap::iterator i = mCodePointMap.find(id);
					if (i != mCodePointMap.end())
					{
						i->second.aspectRatio = ratio;
					}
				}
				/***** Gets the aspect ratio (width / height) of this character. ****/
				inline Real getGlyphAspectRatio(CodePoint id) const
				{
					EarthView::World::Core::CMutexLocker locker(const_cast<EarthView::World::Core::CMutex*>(&mCodePointMapMutex));
					CodePointMap::const_iterator i = mCodePointMap.find(id);
					if (i != mCodePointMap.end())
					{
						return i->second.aspectRatio;
					}
					else
					{
						return 1.0;
					}
				}

				/***** Adds a range of code points to the list of code point ranges to generate
				glyphs for, if this is a truetype based font.
				@remarks
				In order to save texture space, only the glyphs which are actually
				needed by the application are generated into the texture. Before this
				object is loaded you must call this method as many times as necessary
				to define the code point range that you need.
				****/
				void addCodePointRange(const EarthView::World::Graphic::CFont::FontCodePointRange &range)
				{
					if(mMaxCapability == 0 || mCodePointRangeList.charCount() < mMaxCapability)
						mCodePointRangeList.push_back(range);
				}
				/***** Get a const reference to the list of code point ranges to be used to
				generate glyphs from a truetype font.
				****/
				const EarthView::World::Graphic::CFont::FontCodePointRangeList &getCodePointRangeList() const
				{
					return mCodePointRangeList;
				}
				/***** Clear the list of code point ranges.
				****/
				void clearCodePointRanges()
				{
					mCodePointRangeList.clear();
				}

				/***** Gets the material generated for this font, as a weak reference.
				@remarks
				This will only be valid after the EarthView::World::Graphic::CFont has been loaded.
				****/
				inline const EarthView::World::Graphic::CMaterialPtr &getMaterial() const
				{
					return mpMaterial;
				}
				/***** Gets the material generated for this font, as a weak reference.
				@remarks
				This will only be valid after the EarthView::World::Graphic::CFont has been loaded.
				****/
				inline const EarthView::World::Graphic::CMaterialPtr &getMaterial()
				{
					return mpMaterial;
				}
				EarthView::World::Graphic::CMaterialPtrList getMaterials();

				/***** Sets whether or not the colour of this font is antialiased as it is generated
				from a true type font.
				@remarks
				alpha blending to draw your font, then it is a good idea to set this to
				false (which is the default), otherwise the darkening of the font will combine
				with the fading out of the alpha around the edges and make your font look thinner
				mode (add or modulate for example) then it's a good idea to set this to true, in
				order to soften your font edges.
				****/
				inline void setAntialiasColour(ev_bool enabled)
				{
					mAntialiasColour = enabled;
				}
				/***** Gets whether or not the colour of this font is antialiased as it is generated
				from a true type font.
				****/
				inline ev_bool getAntialiasColour() const
				{
					return mAntialiasColour;
				}
				/// <summary>
				/// 设置是否开启深度测度
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setDepthCheckEnabled(_in ev_bool enable);
			};

			/***** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CFontPtr
			@note Has to be a subclass since we need operator=.
			We could templatise this instead of repeating per CResource subclass,
			except to do so requires a form VC6 does not support i.e.
			ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
			****/
			class EV_GRAPHIC_DLL CFontPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CFont>
			{
ev_private:
				CFontPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<CFont>(
					pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CFont *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CFont *) NULL
					, pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
				{
					if(pList && pList->Exist("r"))
					{
						EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CFont> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CFont>*)pList->GetAt("r");
						EV_SET_AUTO_SHARED_MUTEX_NULL
						EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
							EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
							pRep = r.pRep;
							pUseCount = r.pUseCount;
							useFreeMethod = r.useFreeMethod;
							//// Handle zero pointer gracefully to manage STL containers
							if(pUseCount)
							{
								++(*pUseCount);
							}
						}
					}
				}
			public:
				CFontPtr() : EarthView::World::Core::CSharedPtr<CFont>() {}
				explicit CFontPtr(CFont *ref_rep) : EarthView::World::Core::CSharedPtr<CFont>(ref_rep) {}
				explicit CFontPtr(CFont *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CFont>(ref_rep, inFreeMethod) {}
				CFontPtr(const CFontPtr &r) : EarthView::World::Core::CSharedPtr<CFont>(r) {}
				CFontPtr(const EarthView::World::Graphic::ResourcePtr &r) : EarthView::World::Core::CSharedPtr<CFont>()
				{
					//// lock & copy other mutex pointer
					EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
					{
						EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
						EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
						pRep = static_cast<EarthView::World::Graphic::CFont *>(r.getPointer());
						pUseCount = r.useCountPointer();
						if (pUseCount)
						{
							++(*pUseCount);
						}
					}
				}
				EarthView::World::Graphic::CFont *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CFont>::get();
				}
				//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CFontPtr
				EarthView::World::Graphic::CFontPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r)
				{
					if (pRep == static_cast<EarthView::World::Graphic::CFont *>(r.getPointer()))
						return *this;
					release();
					//// lock & copy other mutex pointer
					EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
					{
						EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
						EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
						pRep = static_cast<EarthView::World::Graphic::CFont *>(r.getPointer());
						pUseCount = r.useCountPointer();
						if (pUseCount)
						{
							++(*pUseCount);
						}
					}
					else
					{
						//// RHS must be a null pointer
						EV_ASSERT(r.isNull() && "RHS must be null if it has no mutex!");
						setNull();
					}
					return *this;
				}
			};


		}
	}
}
#endif

