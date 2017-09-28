
#ifndef MOVELINE_H_
#define  MOVELINE_H_
#include "RenderLibDataType.h"
#include "globecontrol\globecontrol.h"
#include "mathengine\vector3.h"
#include "graphic\scenenode.h"
#include "spatial3danalysisobject\mathutility3d.h"
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			class CMoveLine
			{
			public:
				CMoveLine(const EVString& name, EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, CMoveLineType style);
				~CMoveLine();
				/// <summary>
				/// 设置中心点
				/// </summary>
				/// <param name="center">中心点地理坐标(经度,纬度,高度)</param>
				void SetCenter(EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
				/// 改变移动点
				/// </summary>
				/// <param name="current">移动点地理坐标(经度,纬度,0)</param>
				void ChangeCurrent(EarthView::World::Spatial::Math::CVector3& currentPoint);
			private:
				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				CMoveLineType mLineType;
				EarthView::World::Graphic::CManualObject* mpManualObject;
				EarthView::World::Spatial::Math::CVector3 mGeoFirstPoint;
				EarthView::World::Spatial::Math::CVector3 mGeoCenterPoint;
				EarthView::World::Spatial::Math::CVector3 mGeoCurrentPoint;
				EarthView::World::Graphic::CSceneNode* mpSceneNode;
				EarthView::World::Spatial::Math::CVector3 mPosition;
				EarthView::World::Graphic::CColourValue mLineColor;
				EVString mName;
				ev_int32 mInsertCount;
				EarthView::World::Spatial3D::Analysis::CMathUtility3D mMathUtility3D;
				void CreateMesh();
			};
		}
	}
}
#endif
