#ifndef __RENDERABLEFONT_H__
#define __RENDERABLEFONT_H__

#include "graphic/graphic_config.h"
#include "graphic/renderable.h"
#include "graphic/texturetextstyle.h"

namespace EarthView{
	namespace World{
		namespace Graphic{

	/// <summary>
	/// 字体可渲染对象抽象类
	/// </summary>
	class EV_GRAPHIC_DLL CRenderableFont: public EarthView::World::Graphic::CRenderable
	{
		friend class CTextureMovableText;
	public:
		typedef std::vector<CRenderableFont*> TRenderableArray;

		CRenderableFont();
		virtual ~CRenderableFont();

		/// <summary>参见EarthView::World::Graphic::CRenderable</summary>
		virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
		virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
		virtual Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;
		virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const ;
		virtual void getRenderOperation( _inout EarthView::World::Graphic::CRenderOperation &op );
		virtual void getWorldTransforms( _out EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
		virtual const EarthView::World::Graphic::LightList &getLights() const;
		/// //////////////////////////////////

		/// <summary>
		/// 渲染队列更新（由CTextureTextMovable）回调
		/// </summary>
		/// <param name="queue">当前渲染队列</param>
		virtual void onUpdateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue, ev_uint8 renderQueueId);

		/// <summary>
		/// 访问Renderable(由CTextureTextMovable) 回调
		/// </summary>
		/// <param name="visitor">访问者</param>
		/// <param name="debugRenderables"></param>
		virtual void onVisitRenderable(EarthView::World::Graphic::CRenderable::CVisitor* visitor,ev_bool debugRenderables);

		/// <summary>
		/// 绑定节点
		/// </summary>
		virtual void onAttachedToNode(EarthView::World::Graphic::CNode* node);

		/// <summary>
		/// 设置投影矩阵偏移
		/// </summary>
		/// <param name="val">偏移值</param>
		void setProjMatrixOffset(Real val);

		/// <summary>
		/// 设置执行投影矩阵偏移的最大角度
		/// </summary>
		/// <param name="val">角度值<param>
		void setProjOffsetMaxAngle(ev_real32 val);

		/// <summary>
		/// 执行renderable自身的所有需要的更新(非线程安全)
		/// </summary>
		/// <param name="style">文本风格</param>
		/// <param name="pen">绘制字体的“笔”在局部坐标系下的位置,将以“笔”作为可渲染字符或文本的左上角起点</param>
		inline void refresh(const EarthView::World::Graphic::CTextureTextStyle* ref_style, _inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb)
		{
			if(mVertexDataStatus == GeometryOutofDate)
				updateGeometry(ref_style,pen,aabb);	
			if(mVertexDataStatus == ColorOutofDate)
				updateColor(ref_style,ref_style->getColorBegin(),ref_style->getColorEnd(),ref_style->getOutlineColor());
		}

		/// <summary>
		/// 强制执行renderable自身的所有需要的更新(非线程安全)
		/// </summary>
		/// <param name="pen">绘制字体的“笔”在局部坐标系下的位置,将以“笔”作为可渲染字符或文本的左上角起点</param>
		inline void forceRefresh(const EarthView::World::Graphic::CTextureTextStyle* ref_style,_inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb)
		{
			mVertexDataStatus.toInitialStatus();
			refresh(ref_style,pen,aabb);
		}

		/// <summary>
		/// 绑定世界变换矩阵
		/// </summary>
		inline void bindWorldMaxtrix(const EarthView::World::Spatial::Math::CMatrix4* mx4)
		{	mWorldMatrix = mx4; }

		/// <summary>
		/// 更新渲染状态
		/// </summary>
		void updateRenderStatus(ev_bool geometryOutOfDate, ev_bool colorOutOfDate);

		/// <summary>
		/// 是否开启偏移
		/// </summary>
		/// <param name="enable"></param>
		virtual ev_void setProjOffsetEnable(_in ev_bool enable);

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

	protected:
		/// <summary>
		///缓存绑定类型
		/// </summary>
		enum HardwareBufferBindingType
		{
			POS_TEX_BINDING = 0, ///3维坐标及纹理坐标绑定
			COLOR_BINDING = 1    ///颜色硬件缓存绑定
		};

		/// <summary>
		/// 顶点缓存状态
		/// </summary>
		enum VDSRightVal
		{
			GeometryOutofDate = 0U,
			ColorOutofDate = 1U,
			UpdateComplete = 2U
		};
		class VertexDataStatus
		{
		public:
			inline VertexDataStatus()
			{
				toInitialStatus();
			}
			inline void toNextStatus()
			{
				if(mData != UpdateComplete)
					mData++;
			}
			inline void toInitialStatus()
			{
				mData = GeometryOutofDate;
			}
			inline void toTerminalStatus()
			{
				mData = UpdateComplete;
			}
			friend ev_bool inline operator == (VertexDataStatus status, VDSRightVal right)
			{
				return status.mData == right;
			}
		private:
			ev_uint32 mData;
		};					

		/// <summary>
		/// 更新颜色
		/// </summary>					
		virtual void updateColor(const CTextureTextStyle* textStyle,ARGB colorBegin, ARGB colorEnd,ARGB outlineColor);

		/// <summary>
		/// 更新几何结构
		/// </summary>	
		virtual void updateGeometry(const CTextureTextStyle* textStyle, _inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb);

		/// <summary>字体材质</summary>
		EarthView::World::Graphic::CMaterialPtr        mMaterialPtr;

		/// <summary>已经定义好的渲染操作，参见init()</summary>
		EarthView::World::Graphic::CRenderOperation    mRenderOp;	

		/// <summary>世界变换矩阵</summary>
		const EarthView::World::Spatial::Math::CMatrix4*		mWorldMatrix;

		/// <summary>所在节点(如果已被挂载的话)</summary>
		EarthView::World::Graphic::CNode*				mNode;

		/// <summary>用于缓存当前帧的投影矩阵</summary>
		EarthView::World::Spatial::Math::CMatrix4            mProjMatrix;					

		/// <summary>投影矩阵Z偏移</summary>
		Real				mProjMatrixOffset;

		/// <summary>投影矩阵偏移被激活的角度上限</summary>
		Real				mProjOffsetMaxAngle;

		/// <summary>投影矩阵偏移被激活</summary>
		ev_bool				mProjOffsetEnabled;

		ev_bool             mForceEnableProjOffset;

		ev_bool             mDepthCheckEnabled;

		/// <summary>顶点缓存状态 </summary>
		VertexDataStatus mVertexDataStatus;
	ev_private:
		CRenderableFont(EarthView::World::Core::CNameValuePairList* pList);
	private:
		inline void init();
	};

}}}

#endif
