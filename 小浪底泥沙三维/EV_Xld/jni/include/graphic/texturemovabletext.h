#ifndef __TEXTMOVABLENEW_H__
#define __TEXTMOVABLENEW_H__

#include "core/global.h"
#include "graphic/graphic_config.h"
#include "graphic/movableobject.h"
#include "graphic/font.h"
#include "graphic/texturetextstyle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CColourValue;
			class FloatRect;
			class CRenderableFont;
			class EV_GRAPHIC_DLL CTextureMovableText: public CMovableObject
			{
			public:
				/// <summary>
				/// 获取movable的世界变换矩阵
				/// </summary>
				/// <returns>字体属性</returns>	
				const EarthView::World::Spatial::Math::CMatrix4& getWorldMatrix() const
				{   return mWorldMatrix;  }
				/// <summary>
				/// 获取文本可渲染对象
				/// </summary>
				/// <returns>文本可渲染对象</returns>	
				const CRenderableFont* getRenderable() const
				{	return mRenderable; }

				/// <summary>
				/// 获取文本风格
				/// </summary>
				/// <returns>文本风格</returns>
				const CTextureTextStyle* getTextStyle() const
				{	return mStyle;  }

				/// <summary>
				/// 获知世界变换矩阵是否过期（在更新相机（_notifyCurrentCamera()被调用）之前，
				/// 场景节点却发生了变化,这将导致世界变换矩阵过期。
				/// </summary>
				ev_bool IsWorldMatrixOutofDate() const
				{	return mWorldMatrixOutofDate;  }
				/// <summary>
				/// 获取渲染内容字符串
				/// </summary>
				/// <returns>渲染内容字符串</returns>
				const EarthView::World::Core::CUnicodeString& getText() const;

				/// <summary>
				/// 获取文本矩形区域
				/// </summary>
				/// <param name="rect">矩形对象</param>
				/// <param name="needRefresh">是否重新刷新(重新刷新子线程会出问题)</param>
				void getTextRect(_out FloatRect& rect) const;
				void getTextRect(_out FloatRect& rect,ev_bool needRefresh) const;
				/// <summary>
				/// 设置投影矩阵偏移
				/// </summary>
				/// <param name="val">偏移值</param>
				void setProjMatrixRSOffset(Real val);

				/// <summary>
				/// 设置执行投影矩阵偏移的最大角度
				/// </summary>
				/// <param name="val">角度值<param>
				void setProjOffsetMaxAngle(ev_real32 val);

				/// <summary>
				/// 是否开启投影矩阵偏移
				/// </summary>
				/// <param name="enable"></param>
				virtual ev_void setProjOffsetEnable(_in ev_bool enable);

				/// <summary>
				/// 获取是否开启投影矩阵偏移
				/// </summary>
				ev_bool getProjOffsetEnable() const;

				/// <summary>
				/// 是否开启深度测度
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				virtual ev_void setDepthCheckEnabled(_in ev_bool enable);

				/// <summary>
				/// 获取是否开启深度测度
				/// </summary>
				/// <returns></returns>
				ev_bool getDepthCheckEnabled();

				/// <summary>
				/// 设置文本风格
				/// </summary>
				/// <param name="newStyle">新的文本风格</param>
				/// <returns>旧的文本风格</returns>
				CTextureTextStyle* setTextStyle(CTextureTextStyle* newStyle);

				/// <summary>
				/// 设置文本内容
				/// </summary>
				/// <param name="wstr">宽字符串</param>
				void setText(const EarthView::World::Core::CUnicodeString& wstr);

				/// <summary>
				/// 构造函数:此构造函数会将可渲染对象与默认字体缓存绑定
				/// </summary>
				/// <param name=""></param>
				CTextureMovableText(const EarthView::World::Core::CUnicodeString& str, CTextureTextStyle* ref_style);
				virtual ~CTextureMovableText();

				/// <summary> 参见CMovableObject</summary>
				virtual EVString getMovableType() const;
				virtual ev_uint32 getTypeFlags() const;
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
				virtual void _notifyCurrentCamera(CCamera *cam);
				virtual Real getBoundingRadius() const;
				virtual void _updateRenderQueue(CRenderQueue *queue);
				void visitRenderables( CRenderable::CVisitor *visitor,ev_bool debugRenderables );
				void _notifyAttached(CNode *parent, ev_bool isTagPoint);
				
				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				
				ev_void renderSelection();
				ev_void clearSelection();
				/// ///////////////////////////////////////

				/// <summary>
				/// movable对象类型名称
				/// </summary>
				static const EVString MOVABLE_TYPE_NAME;

				/// <summary>
				/// movable对象类型掩码
				/// </summary>
				static const ev_uint32 MOVABLE_TYPE_FLAG;
			protected:
				/// <summary>
				/// 计算世界变换矩阵
				/// </summary>
				virtual void computeWorldMatrix( CCamera* cam );

				/// <summary>
				/// 刷新movable对象，更新顶点缓冲,请不要在辅助线程中调用此函数
				/// </summary>
				/// <param name=""></param>
				void refresh();

				/// <summary>
				/// 强制刷新movable对象, 可能会进行一些不必要的更新,请不要在辅助线程中调用此函数
				/// </summary>
				void forceRefresh();

				/// <summary>字体可渲染对象</summary>
				CRenderableFont* mRenderable;

				/// <summary>字体风格对象</summary>
				CTextureTextStyle*    mStyle;

				/// <summary>局部坐标系包围盒</summary>
				EarthView::World::Spatial::Math::CAxisAlignedBox  mAABB;

				/// <summary>世界变换矩阵</summary>
				EarthView::World::Spatial::Math::CMatrix4   mWorldMatrix;
				/// <summary>局部坐标系下的偏移值,用于修正文本停靠方式	</summary>
				EarthView::World::Spatial::Math::CVector3		 mOffset;
				/// <summary>获知世界变换矩阵是否过期（在更新相机（_notifyCurrentCamera()被调用）之前，
				/// 场景节点却发生了变化,这将导致世界变换矩阵过期。</summary>
				ev_bool          mWorldMatrixOutofDate;
				/// <summary>字符缩放比例</summary>
				static ev_real32   mCharScale;

			private:
				inline void initMovableObj(); 

				class Internals;
				friend class Internals;
				friend class SceneNodeListener;
				Internals* mPrivateData;

				static ev_uint32   curID;
			ev_private:
				CTextureMovableText(_in EarthView::World::Core::CNameValuePairList *pList);
			};



		}
	}
}

#endif // __TEXTMOVABLENEW_H__
