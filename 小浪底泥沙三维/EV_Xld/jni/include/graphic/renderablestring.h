#ifndef  __RENDERABLESTRING_H__
#define  __RENDERABLESTRING_H__

#include "graphic/graphic_config.h"
#include "renderablefont.h"

namespace EarthView{
	namespace World{
		namespace Graphic{

class CRenderableString;

/// <summary>
/// unicode字符可渲染对象
/// </summary>
class EV_GRAPHIC_DLL CRenderableChar:public EarthView::World::Graphic::CRenderableFont
{
	friend class CRenderableString;
public:	
	/// <summary>
	/// 构造函数:渲染单个字符
	/// </summary>
	/// <param name="unicode">unicode字符值</param>
	CRenderableChar(ev_wchar unicode);

	/// <summary>
	/// 构造函数:渲染整个字符串(注意，此方式没有考虑渲染批次带来的性能问题)
	/// </summary>
	/// <param name="text">unicode字符串</param>
	CRenderableChar(const EarthView::World::Core::CUnicodeString& text);

	~CRenderableChar();	

	/// <summary>参见EarthView::World::Graphic::CRenderableFont</summary>
	void onUpdateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue, ev_uint8 renderQueueId);
	void onVisitRenderable(EarthView::World::Graphic::CRenderable::CVisitor* visitor,ev_bool debugRenderables);
	/// //////////////////////////////////////

	/// <summary>
	/// 获取下一个unicode字符可渲染对象(用于以链表形式构建可渲染字符串)
	/// </summary>
	const EarthView::World::Graphic::CRenderableChar* getNext() const
	{
		return mNext;
	}

	virtual ev_void setDepthCheckEnabled(_in ev_bool enable);
protected:
	/// <summary>参见EarthView::World::Graphic::CRenderableFont</summary>
	void updateColor(const CTextureTextStyle* textStyle,ARGB topColor, ARGB bottomColor,ARGB outlineColor);
	void updateGeometry(const CTextureTextStyle* textStyle, _inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb);
	/// //////////////////////////////////////

	ev_wchar            mUnicode;
	EarthView::World::Graphic::CRenderableChar*    mNext;
ev_private:
	CRenderableChar(_in EarthView::World::Core::CNameValuePairList *pList);
private:
	inline void initRenderOperation();
};

/// <summary>
/// 字符串可渲染对象
/// </summary>
class EV_GRAPHIC_DLL CRenderableString: public EarthView::World::Graphic::CRenderableFont
{
public:
	CRenderableString(const EarthView::World::Core::CUnicodeString& wstr);
	~CRenderableString();

	/// <summary>参见EarthView::World::Graphic::CRenderableFont</summary>
	void onUpdateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue, ev_uint8 renderQueueId);
	void onVisitRenderable(EarthView::World::Graphic::CRenderable::CVisitor* visitor,ev_bool debugRenderables);
	void onAttachedToNode(EarthView::World::Graphic::CNode* node);
	/// //////////////////////////////////////

	/// <summary>
	/// 是否开启偏移
	/// </summary>
	/// <param name="enable"></param>
	virtual ev_void setProjOffsetEnable(_in ev_bool enable);

	/// <summary>
	/// 是否开启深度测度
	/// </summary>
	/// <param name="enable"></param>
	/// <returns></returns>
	virtual ev_void setDepthCheckEnabled(_in ev_bool enable);

	void setText(const EarthView::World::Core::CUnicodeString& wstr);
	const EarthView::World::Core::CUnicodeString& getText() const;

	EarthView::World::Graphic::CMaterialPtrList getMaterials();

ev_private:
	CRenderableString(_in EarthView::World::Core::CNameValuePairList* pList);	
protected:
	/// <summary>参见EarthView::World::Graphic::CRenderableFont</summary>
	void updateColor(const CTextureTextStyle* textStyle,ARGB topColor, ARGB bottomColor,ARGB outlineColor);
	void updateGeometry(const CTextureTextStyle* textStyle, _inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb);
	/// //////////////////////////////////////
private:
	inline void clearSingleCharRenderables();
	TRenderableArray mCharRenderableList;
	EarthView::World::Core::CUnicodeString   mText;
	ev_size_t        mBatchRenderingChCount;
	//EV_MUTEX(mRenderableListMutex);
};

}}}

#endif
