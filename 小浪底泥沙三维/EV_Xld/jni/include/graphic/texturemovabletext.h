#ifndef __TEXTUREMOVABLETEXT_H__
#define __TEXTUREMOVABLETEXT_H__

#include "graphic/graphic_config.h"
#include "graphic/movableobject.h"
#include "graphic/texturetextstyle.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{			
			class FloatRect;
			class CRenderableFont;
			class CRenderableFontInstanced;
			class CSceneManager;
			class EV_GRAPHIC_DLL CTextureMovableText: public CMovableObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CTextureMovableText(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数:此构造函数会将可渲染对象与默认字体缓存绑定
				/// </summary>
				/// <param name=""></param>
				CTextureMovableText(const EarthView::World::Core::CUnicodeString& wstr, CTextureTextStyle* ref_style);

				/// <summary>
				/// 构造函数:instance渲染方式构造函数
				/// </summary>
				/// <param name=""></param>
				CTextureMovableText(const EarthView::World::Core::CUnicodeString& wstr, CTextureTextStyle* ref_style, EarthView::World::Graphic::CSceneManager *ref_mgr);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				virtual ~CTextureMovableText();

				/// <summary>
				/// 获取字体movable的世界变换矩阵
				/// </summary>
				/// <returns>字体movable的世界变换矩阵</returns>	
				const EarthView::World::Spatial::Math::CMatrix4& getWorldMatrix() const
				{   return mWorldMatrix;  }

				/// <summary>
				/// 设置字体movable在世界坐标系中的位置
				/// </summary>
				/// <param name="v">位置三维向量</param>
				/// <returns></returns>
				ev_void setTrans( _in const EarthView::World::Spatial::Math::CVector3 &v );

				/// <summary>
				/// 设置文字自动换行宽度
				/// </summary>
				/// <param name="width">以像素为单位的宽度值</param>
				/// <returns></returns>
				ev_void setAutoLineFeed( _in const ev_uint32 width );

				/// <summary>
				/// 设置文字水平方向缩放值
				/// </summary>
				/// <param name="scaleX">水平方向缩放值</param>
				/// <returns></returns>
				ev_void setHorizontalScale( _in const ev_real32 scaleX );

				/// <summary>
				/// 设置文字垂直方向缩放值
				/// </summary>
				/// <param name="scaleY">垂直方向缩放值</param>
				/// <returns></returns>
				ev_void setVerticalScale( _in const ev_real32 scaleY );

				/// <summary>
				/// 设置文字绕指定点旋转
				/// </summary>
				/// <param name="axisBgn">旋转轴起点,以文本左下角为原点的局部坐标系</param>
				/// <param name="axisEnd">旋转轴终点,以文本左下角为原点的局部坐标系</param>
				/// <param name="angle">旋转角度值</param>
				/// <returns></returns>
				ev_void setRotateWithPoint( _in const EarthView::World::Spatial::Math::CVector3 &axisBgn,_in const EarthView::World::Spatial::Math::CVector3 &axisEnd, _in const ev_real32 angle );

				/// <summary>
				/// 获取文本非instance可渲染对象
				/// </summary>
				/// <returns>文本非instance可渲染对象</returns>	
				const CRenderableFont* getRenderable() const
				{	return mRenderable; }

				/// <summary>
				/// 获取文本instance可渲染对象
				/// </summary>
				/// <returns>文本instance可渲染对象</returns>	
				const CRenderableFontInstanced* getRenderableInstanced() const
				{	return mRenderableInstanced; }

				/// <summary>
				/// 获知世界变换矩阵是否过期（在更新相机（_notifyCurrentCamera()被调用）之前，
				/// 场景节点却发生了变化,这将导致世界变换矩阵过期。
				/// </summary>
				ev_bool IsWorldMatrixOutofDate() const
				{	return mWorldMatrixOutofDate;  }

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
				/// 获取文本风格
				/// </summary>
				/// <returns>文本风格</returns>
				const CTextureTextStyle* getTextStyle() const
				{	return mStyle;  }

				/// <summary>
				/// 设置文本内容
				/// </summary>
				/// <param name="wstr">宽字符串</param>
				void setText(const EarthView::World::Core::CUnicodeString& wstr);

				/// <summary>
				/// 获取渲染内容字符串
				/// </summary>
				/// <returns>渲染内容字符串</returns>
				const EarthView::World::Core::CUnicodeString& getText() const;

				/// <summary> 参见CMovableObject</summary>
				virtual EVString getMovableType() const;
				virtual ev_uint32 getTypeFlags() const;
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
				virtual Real getBoundingRadius() const;
				virtual void _notifyCurrentCamera(CCamera *cam);
				virtual void _updateRenderQueue(CRenderQueue *queue);
				void visitRenderables( CRenderable::CVisitor *visitor,ev_bool debugRenderables );
				void _notifyAttached(CNode *parent, ev_bool isTagPoint);
				void setVisible(ev_bool visible);
				void setRenderQueueGroup(ev_uint8 queueID);
				void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				ev_void renderSelection();
				ev_void clearSelection();
				//////////////////////////////////////////

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
				/// 更新CRenderableFontInstanced
				/// </summary>
				/// <param name=""></param>
				void updateRenderableFontInstanced(CCamera* cam);
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
				/// <summary>Instanced字体可渲染对象</summary>
				CRenderableFontInstanced* mRenderableInstanced;
				/// <summary>字体风格对象</summary>
				CTextureTextStyle* mStyle;
				/// <summary>局部坐标系包围盒</summary>
				EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
				/// <summary>世界变换矩阵</summary>
				EarthView::World::Spatial::Math::CMatrix4 mWorldMatrix;
				/// <summary>字体movable在世界坐标系中的位置</summary>
				EarthView::World::Spatial::Math::CVector3 mTrans;
				/// <summary>局部坐标系下的偏移值,用于修正文本停靠方式</summary>
				EarthView::World::Spatial::Math::CVector3 mOffset;
				/// <summary>计算字体movable世界变换矩阵时是否使用节点的位置</summary>
				ev_bool mUseNodeTrans;
				/// <summary>获知世界变换矩阵是否过期（在更新相机（_notifyCurrentCamera()被调用）之前，
				/// 场景节点却发生了变化,这将导致世界变换矩阵过期。</summary>
				ev_bool mWorldMatrixOutofDate;
				/// <summary>水平方向缩放值</summary>
				ev_real32 mScaleX;
				/// <summary>垂直方向缩放值</summary>
				ev_real32 mScaleY;
				/// <summary>绕指定点旋转的四元数</summary>
				EarthView::World::Spatial::Math::CQuaternion mRotate;
				/// <summary>是否包含局部变换</summary>
				ev_bool mIncludeLocalMat;

			private:
				void initMovableObj(); 
				void computeLayout(_inout EarthView::World::Spatial::Math::CVector3& layout3D,const CTextureTextStyle* style,const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB);

				class Internals;
				friend class Internals;
				Internals* mPrivateData;

				static ev_uint32 curID;
				friend class CRenderableFontInstanced;
			};


		}
	}
}
#endif

