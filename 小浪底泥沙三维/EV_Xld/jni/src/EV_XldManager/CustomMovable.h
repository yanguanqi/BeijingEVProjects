#ifndef TERRAINRMOVABLE_H_
#define TERRAINRMOVABLE_H_

#include "graphic/movableobject.h"
#include "globecontrol/globecontrol.h"
#include "mathengine/vector3.h"
#include "mathengine/axisalignedbox.h"
#include "CustomRenderable.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Spatial::Math;
namespace EarthView 
{
	namespace Xld
	{
		namespace RenderableObject 
		{
			class CCustomMovable :
				public CMovableObject
			{
				friend class CCustomRenderable;
			public:

				EVString TerrainName;

				/// <summary>
				/// 构造函数
				/// </summary>
				CCustomMovable(EVString terrainName, EarthView::World::Spatial3D::Controls::CGlobeControl* control);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CCustomMovable();

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">当前摄像机</param>
				virtual void _notifyCurrentCamera(CCamera* cam);

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				virtual void _updateRenderQueue(CRenderQueue* queue);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体</param>
				virtual void visitRenderables(CRenderable::CVisitor* visitor, ev_bool debugRenderables);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				virtual void visitRenderables(CRenderable::CVisitor* visitor);

				/// <summary>
				/// 获取对象类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>可移动的类型</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// 获取包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒</returns>
			    inline const CAxisAlignedBox& getBoundingBox(void) const
				{
					return this->mBox;
				};

				/// <summary>
				/// 获取包围盒半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒半径</returns>
				inline Real getBoundingRadius() const
				{
					return mRadius;
				};

				/// <summary>
				/// 获取材质名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质名称</returns>
				EVString getMaterial() const;

				/// <summary>
				/// 创建边框的顶点和索引缓存，并写入数据
				/// </summary>
				/// <param name="vertexVector">顶点集合</param>
				/// <param name="indexVector">索引集合</param>
				void buildSurfaceBuffer(const EarthView::World::Geometry3D::CVertexVector& vertexVector, const EarthView::World::Geometry3D::CIndexVector& indexVector);

				/// <summary>
				/// 设置材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				void setSurfaceMaterial(const EVString& matName);

			protected:

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;

				/// <summary>
				/// 场景管理器
				/// </summary>
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				/// <summary>
				/// 底板对象
				/// </summary>
				CCustomRenderable* mpTestSurfaceRenderable;

				/// <summary>
				/// 对应模型对象位置
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mModelPosition;

				/// <summary>
				/// 当前相机
				/// </summary>
				CCamera *mCurrentCamera;

				/// <summary>
				/// 顶点包围盒
				/// </summary>
				CAxisAlignedBox mBox;

				/// <summary>
				/// 顶点包围盒半径
				/// </summary>
				Real mRadius;

				/// <summary>
				/// 投影矩阵是否改变
				/// </summary>
				ev_bool mPrjMatrixChanged;

				/// <summary>
				/// 第一次计算矩阵是否结束
				/// </summary>
				ev_bool mIsComputedTransDone;
			};
			
		}
	}
}
#endif
