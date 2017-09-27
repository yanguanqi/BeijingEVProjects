#ifndef TERRAINRENDERABLE_H_
#define TERRAINRENDERABLE_H_

#include "graphic/renderable.h"
#include "graphic/framelistener.h"
#include "graphic/camera.h"
#include "globecontrol/globecontrol.h"
#include "spatial3dengine/globecamera.h"
#include "geometry3d/vertex.h"
#include "TerrainMovable.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Spatial3D;
using namespace EarthView::World::Spatial3D::Controls;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Geometry3D;

namespace EarthView
{
	namespace Xld
	{
		namespace RenderableObject
		{
			class CTerrainRenderable :
				public EarthView::World::Graphic::CRenderable
			{
				friend class CTerrainMovable;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="parent">父对象</param>
				CTerrainRenderable(const EVString& name, CTerrainMovable* parent);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				~CTerrainRenderable();

				/// <summary>
				/// 获得渲染对象的转换矩阵
				/// </summary>
				/// <param name="xform"></param>
				virtual void getWorldTransforms(CMatrix4 *xform) const;

				/// <summary>
				/// 获取材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质</returns>
				virtual const CMaterialPtr& getMaterial() const;

				/// <summary>
				/// 获取观察深度
				/// </summary>
				/// <param name="cam">相机</param>
				/// <returns>观察深度</returns>
				virtual Real getSquaredViewDepth(const CCamera* cam) const;

				/// <summary>
				/// 获取渲染参数
				/// </summary>
				/// <param name="op">渲染参数</param>
				void getRenderOperation(_inout CRenderOperation &op);

				/// <summary>
				/// 获取光照
				/// </summary>
				/// <param name=""></param>
				/// <returns>光照列表</returns>
				const LightList& getLights(void) const;

				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				virtual ev_bool preRender(CSceneManager *sm, CRenderSystem *rsys);

				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				virtual void postRender(CSceneManager *sm, CRenderSystem *rsys);


				/// <summary>
				/// 设置材质
				/// </summary>
				/// <param name="matName">材质名称</param>
				void setMaterial(const EVString& matName);

				/// <summary>
				/// 获取渲染参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染参数</returns>
				CRenderOperation* getRenderOperation();

			protected:

				/// <summary>
				/// 名称
				/// </summary>
				ev_string mName;

				/// <summary>
				/// 模型位置
				/// </summary>
				CVector3 mModelPosition;

				/// <summary>
				/// 投影矩阵
				/// </summary>
				CMatrix4 mProjM;

				/// <summary>
				/// 材质名称
				/// </summary>
				EVString mMaterialName;

				/// <summary>
				/// 材质组名
				/// </summary>
				EVString mGroupName;

				/// <summary>
				/// 材质
				/// </summary>
				mutable CMaterialPtr mMaterial;

				/// <summary>
				/// 渲染参数
				/// </summary>
				CRenderOperation mRenderOp;

				/// <summary>
				/// 父对象
				/// </summary>
				CTerrainMovable* mpParent;
			};
		}
	}
}

#endif

