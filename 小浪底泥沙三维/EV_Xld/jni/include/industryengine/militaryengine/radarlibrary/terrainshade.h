#ifndef TERRAINSHADE_H
#define TERRAINSHADE_H

#include "industryengine/militaryengine/radarlibrary/radarlibrary_cfg.h"
#include "industryengine/militaryengine/radarlibrary/radarcharacter.h"
#include "mathengine/vector3.h"
#include "spatial3danalysisobject/mathutility3d.h"
#include "graphic/scenemanager.h"
#include "graphic/scenenode.h"
#include "geometry3d/geometry3d/simplerenderableex.h"
#include "spatial3dengine/geoscenemanager.h"



namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				class CSectionPoints;
				class CSectionPoint;

				struct ScaleVector
				{
					/// <summary>
					/// 俯仰角
					/// </summary>
					Real verticalAngle;
					/// <summary>
					/// 威力系数
					/// </summary>
					Real powerScale;
				};

				class EV_RADARLIBRARY_DLL CScaleVectorList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*> InternalList;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::iterator iterator;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::const_iterator const_iterator;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::reverse_iterator reverse_iterator;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::const_reverse_iterator const_reverse_iterator;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::reference reference;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::const_reference const_reference;
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*>::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 	

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList::iterator insert(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList::iterator pos, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* value);

ev_private:
					CScaleVectorList(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CScaleVectorList();

					ev_void operator = (_in const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList& value);

					ev_void push_back(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* value);

					ev_void pop_back();

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  front();

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  back();

					ev_void insert(_in ev_uint32 pos, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* value);

					ev_void remove(_in ev_size_t pos);

					ev_bool empty() const;

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* operator[](_in ev_size_t n);

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* const operator[](_in ev_size_t n) const;

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* at(_in ev_size_t n);

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* const at(_in ev_size_t n) const;

					ev_size_t size() const;

					ev_void resize(_in ev_size_t newSize);

					ev_void reserve(_in ev_size_t count);

					ev_void clear();
				private:
					InternalList mList;
				};

				class  EV_RADARLIBRARY_DLL CTerrainShade :  public EarthView::World::Core::CBaseObject
				{
ev_private:
					CTerrainShade(EarthView::World::Core::CNameValuePairList* pList);
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="nodeName">节点名称</param>
					/// <param name="ref_pGeoSceneMgr">地理场景管理器</param>
					/// <param name="pSectionPoints">截面点集合</param>
					/// <param name="horizontalnum">水平分段数</param>
					CTerrainShade(const EVString& nodeName, EarthView::World::Spatial3D::CGeoSceneManager* ref_pGeoSceneMgr ,  
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* pSectionPoints, const ev_uint32& horizontalnum);
					~CTerrainShade();
					/// <summary>
					/// 计算遮蔽信息
					/// 只考虑EV-Globe地形对遮蔽的影响
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					ev_void shadeAnalysistCalculateOnlyTerrain(const EarthView::World::Geometry3D::CVertexVector& vertexVector, const ev_uint32& splitNum);
					/// <summary>
					/// 计算遮蔽信息
					/// 不考虑EV-Globe地形对遮蔽的影响，只是考虑近山遮蔽数据。如果不存在近山遮蔽数据则返回数据无遮蔽效果
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					/// <param name="ref_shadeDataList">近山遮蔽数据列表</param>
					ev_void shadeAnalysistCalculateOnlyNearAngle(const EarthView::World::Geometry3D::CVertexVector& vertexVector, const ev_uint32& splitNum, EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ref_shadeDataList);
					/// <summary>
					/// 计算遮蔽信息
					/// 考虑ev-Globe地形对遮蔽的影响，先考虑近山遮蔽，再考虑地形数据，如无近山遮蔽数据则只考虑地形
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					/// <param name="ref_shadeDataList">近山遮蔽数据列表</param>
					ev_void shadeAnalysistCalculateWithTerrainNearAngle( const EarthView::World::Geometry3D::CVertexVector& vertexVector, const ev_uint32 splitNum, EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ref_shadeDataList);
					/// <summary>
					/// 获取威力系数列表
					/// </summary>
					/// <returns>威力系数列表</returns>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* getScaleVectorList();

				protected:
					/// <summary>
					/// 威力系数列表
					/// </summary>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* mpScaleVectorList;
					/// <summary>
					/// 是否使用近山遮蔽角
					/// </summary>
					ev_bool mUseNearAngle;
					/// <summary>
					/// 是否只使用地形计算遮蔽
					/// </summary>
					ev_bool mOnlyTerrain;
					/// <summary>
					/// 近山遮蔽角
					/// </summary>
					Real mNearAngle;
					/// <summary>
					/// 高程控制
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* mpAltitude3DListener;
					/// <summary>
					/// 垂直剖面点（只取它的俯仰角）
					/// </summary>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpSectionPoints;
					/// <summary>
					/// 结点名称
					/// </summary>
					EVString mNodeName;
					/// <summary>
					/// 地理场景管理器
					/// </summary>
					EarthView::World::Spatial3D::CGeoSceneManager* mpGeoSceneMgr;
					/// <summary>
					/// 顶点集合
					/// </summary>
					EarthView::World::Geometry3D::CVertexVector mVertexVector;
					/// <summary>
					/// 雷达水平分段数
					/// </summary>
					ev_uint32  mHorizontalnum;
					/// <summary>
					/// 数学计算对象
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* mpMathUtility3D;
					/// <summary>
					/// 插分顶点集合
					/// </summary>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpSplitLineVector;
					/// <summary>
					/// 垂直剖面点集合
					/// </summary>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpVerticalVector;
					/// <summary>
					/// 插分一条线得到最大的俯仰角
					/// </summary>
					Real mMaxAngle;
					/// <summary>
					/// 遮蔽角列表
					/// </summary>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* mpShadeDataList;
					/// <summary>
					/// 插分雷达起始点、垂直剖面点构成的线段
					/// </summary>
					/// <param name="startPos">雷达起始位置</param>
					/// <param name="endPos">垂直剖面点</param>
					/// <param name="splitNum">插分线段数</param>
					ev_void splitTwoPosition(const EarthView::World::Spatial::Math::CVector3&  startPos,const  EarthView::World::Spatial::Math::CVector3&  endPos, const ev_uint32& splitNum);
					/// <summary>
					/// 获取垂直剖面点
					/// </summary>
					/// <param name="head">第几个垂直剖面</param>
					/// <param name="vertexVector">垂直剖面点集合</param>
					ev_void getVerticalVectors(ev_uint32 head, const  EarthView::World::Geometry3D::CVertexVector& vertexVector);
					/// <summary>
					/// 局部坐标转为世界坐标
					/// </summary>
					/// <param name="vector">局部坐标</param>
					ev_void convertToWorldPosition(EarthView::World::Spatial::Math::CVector3& vector); 
					/// <summary>
					/// 遮蔽分析
					/// </summary>
					/// <param name="head">第几个垂直剖面</param>
					/// <param name="splitLineVector">插分点集合</param>
					/// <param name="verticalVector">垂直剖面点集合</param>
					/// <param name="startPos">雷达起始位置</param>
					/// <param name="endPos">垂直剖面点</param>
					ev_void shadeAnalysist(const ev_uint32& head, 
						const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpSplitLineVector,
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpVerticalVector,
						const EarthView::World::Spatial::Math::CVector3& startPos,
						const EarthView::World::Spatial::Math::CVector3& endPos);
				};
			}
		}
	}
}


#endif
