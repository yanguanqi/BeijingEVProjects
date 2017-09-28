#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOLYLINE3DEXTERNSION_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOLYLINE3DEXTERNSION_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "graphic/mesh.h"
#include "geometry3d/igeometry3dfactory.h"

namespace EarthView{
	namespace World{

		namespace Spatial
		{
			namespace Geometry
			{
				class CLineString;
			}
		}

	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 线类型的地理对象扩展到三维类
			/// 管理面线型的地理对象扩展到三维类方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiPolyline3DExtension: public EarthView::World::Geometry3D::CMultiGeometry3DExtension
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPolyline3DExtension(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CMultiPolyline3DExtension(EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName );
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CMultiPolyline3DExtension();

			public:	
				/// <summary>
				/// 从地理对象扩展创建三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void build();
				/// <summary>
				/// 从地理对象扩展创建三维模型
				/// </summary>
				/// <param name="subMeshData">返回submesh数据信息</param>
				/// <returns></returns>
				virtual ev_void build(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshData);
				/// <summary>
				/// 挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();
				/// <summary>
				/// 反挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();
				virtual ev_bool attachToScene();
				virtual ev_bool detachFromScene();
				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
				/// <summary>
				/// 更新注记
				/// </summary>
				/// <param name="resetTextStyle">是否更新字体属性</param>
				/// <param name="derenderTxt">是否反挂接</param>
				/// <param name="reCreate">是否重新构建</param>
				/// <param name="attachLabel">是否挂接</param>
				/// <returns></returns>
				ev_void updateLabel(ev_bool resetTextStyle,ev_bool derenderTxt,ev_bool reCreate,ev_bool attachLabel,EarthView::World::Graphic::CCamera* pCamera);
				/// <summary>
				/// 根据相机位置进行相应刷新
				/// </summary>
				/// <param name="vCamera">相机位置</param>
				/// <returns></returns>
				virtual ev_void updateByCamera(EarthView::World::Graphic::CCamera* pCamera);
				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				virtual ev_void setLabelVisibleDistance(ev_real64 dis);

				/// <summary>
				/// 设置有效角度,针对偏移
				/// </summary>
				/// <param name="angle">有效角度</param>
				/// <returns></returns>
				virtual void setLabelProjOffsetMaxAngle(Real angle);
				/// <summary>
				/// 设置是否进行偏移，主要是点扩展和简单线扩展
				/// </summary>
				/// <param name="useProjOffset">是否进行偏移</param>
				/// <returns></returns>
				virtual void setLabelProjOffsetEnable(ev_bool useProjOffset);
				/// <summary>
				/// 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name="multi">偏移常量的倍数</param>
				/// <returns></returns>
				virtual void setLabelProjOffset(Real offset);

				/// <summary>
				/// 更新扩展实体材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否成功</returns>
				virtual ev_bool updateMaterial();
				/// <summary>
				/// 获取mesh
				/// </summary>
				/// <param name=""></param>
				/// <returns>mesh</returns>
				virtual EarthView::World::Graphic::CMeshPtr getMesh();

				/// <summary>
				/// 设置条件可见性
				/// </summary>
				/// <param name="visible">指定的ids是否可见</param>
				/// <param name="ids">指定的ids</param>
				/// <returns></returns>
				virtual ev_bool setVisibilityFilter(ev_bool visible,  const EarthView::World::Core::IntVector& ids);
				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();
				/// <summary>
				/// build时是否计算注记和统计专题图位置信息，如果需要开启注记或统计专题图设置为true
				/// </summary>
				/// <returns></returns>
				ev_void setNeedCalLabelPosition(ev_bool value);

				enum LineInterpolationMode
				{
					LI_GenernalInterpolation = 0,//一般插值
					LI_DenseInterpolation,//高精度插值
					LI_SelfAdaptInterpolation
				};

				void setLineInterpolationMode(CMultiPolyline3DExtension::LineInterpolationMode liMode);
				CMultiPolyline3DExtension::LineInterpolationMode getLineInterpolationMode() const;
ev_internal:
				/// <summary>
				/// 获取内存流形式的注记位置信息，便于图层缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>内存流</returns>
				EarthView::World::Core::MemoryDataStreamPtr getLabelAndStatisticsPositionStream() const;
				/// <summary>
				/// 设置内存流形式的注记和统计专题图的位置信息
				/// </summary>
				/// <param name="labelPositions">内存流</param>
				/// <returns>是否成功</returns>
				ev_bool setLabelAndStatisticsPositionStream( EarthView::World::Core::MemoryDataStreamPtr& labelPositions );

				ev_bool setRoadTransparent(Real transperent);

ev_private:


			protected:
				/// <summary>
				/// 重置geoentity
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void resetGeoEntity();
				ev_bool updateTextStyle();
				virtual ev_real64 calRealAltitude(ev_uint32 altitudeMode,ev_real64 altitude,ev_real64 lon,ev_real64 lat,ev_real64 z);
			protected:
				struct TransectShape;			

				ev_void getLineStrings(map<ev_uint32,list<Spatial::Geometry::CLineString*> >& lines, map<ev_uint32,EarthView::World::Spatial::Display::ISymbol*>& symbols);

				ev_real32 getLinePoints(Spatial::Geometry::CLineString* line,ev_real32 minDis,vector<EarthView::World::Spatial::Math::CVector3>& points,ev_uint32 altitudeMode,ev_real32 altitude,ev_bool needInterpolation,ev_real32 interpolateDis);
				ev_real32 getLinePoints(Spatial::Geometry::CLineString* line,ev_real32 minDis,vector<EarthView::World::Spatial::Math::CVector3>& points,ev_uint32 altitudeMode,ev_real32 altitude,ev_bool needInterpolation,ev_real32 interpolateDis, ev_bool dense);

				ev_void getRelativeLinePoints(Spatial::Geometry::CLineString* line,vector<EarthView::World::Spatial::Math::CVector3>& points,ev_real64 altitude,ev_uint32 altiMode);
				ev_void getClampLinePoints(Spatial::Geometry::CLineString* line,vector<EarthView::World::Spatial::Math::CVector3>& clampPoints);

				EarthView::World::Spatial::Math::CVector3 intersect(const EarthView::World::Spatial::Math::CRay& ray0, const EarthView::World::Spatial::Math::CRay& ray1);
				ev_real32 getTransectShapes(Spatial::Geometry::CLineString* line,ev_real32 width,vector<TransectShape>& transectShapes,ev_uint32 altitudeMode,ev_real32 altitude,ev_bool needInterpolation,ev_real32 interpolateDis,ev_bool bCornerSmooth);
				ev_real32 getRoadTransectShapes(EarthView::World::Spatial::Geometry::CLineString* line,ev_real32 width,vector<TransectShape>& transectShapes,ev_uint32 altitudeMode,ev_real32 altitude,ev_bool needInterpolation,ev_real32 interpolateDis);
				ev_uint32 getNumofInterpolatedShapes(double angle);					

				ev_void getLineBuf(list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getWideLineBuf(list<CVertex>& lineVerts,list<ev_uint32>& lineIndices);

				int wallPositionInterpolation(_in ev_real64 altitude,_in ev_real64 latA,_in ev_real64 lonA,_in ev_real64 zA,
					_in ev_real64 latB,_in ev_real64 lonB,ev_real64 zB, _out vector<EarthView::World::Spatial::Math::CVector3> &outClampPoints,_out vector<EarthView::World::Spatial::Math::CVector3> &outRelativePoints,ev_uint32 altitudeMode,ev_real32 interpolateDis,ev_bool isFill = true);
				ev_void getWallLinePoints(Spatial::Geometry::CLineString* line,vector<EarthView::World::Spatial::Math::CVector3>& clampPoints,vector<EarthView::World::Spatial::Math::CVector3>& relativePoints,ev_uint32 altitudeMode,ev_real32 altitude,ev_bool needInterpolation,ev_real32 interpolateDis,ev_bool isFill = true);
				ev_void getWallsBuf(list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getTriangleBuf(list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getRectanglesBuf(list<FillVert>& topFillVerts,list<ev_uint32>& topFillIndices,list<FillVert>& bottomFillVerts,list<ev_uint32>& bottomFillIndices,list<FillVert>& rightSideFillVerts,list<ev_uint32>& rightSideFillIndices,list<FillVert>& leftSideFillVerts,list<ev_uint32>& leftSideFillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getTrapeziasBuf(ev_int32 transpectType,list<FillVert>& topFillVerts,list<ev_uint32>& topFillIndices,list<FillVert>& bottomFillVerts,list<ev_uint32>& bottomFillIndices,list<FillVert>& rightSideFillVerts,list<ev_uint32>& rightSideFillIndices,list<FillVert>& leftSideFillVerts,list<ev_uint32>& leftSideFillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getEllipsesBuf(list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getDomesBuf(list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void getRoadBuf(list<CVertex>& fillVerts,list<ev_uint32>& fillIndices);
				ev_void setEntityMaterial(EarthView::World::Graphic::CEntity* ent,EarthView::World::Spatial::Display::ISymbol* symbol,ev_int32 transectShapeType,EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas , ev_bool isVoid);

				ev_void createTransectShape(ev_int32 transectShape,EarthView::World::Spatial::Math::CVector3* shape,ev_real32 width,ev_real32 height,ev_real32 upOffset,ev_real32 rightOffset);
				ev_void createTrapziaTransectShape(EarthView::World::Spatial::Math::CVector3* shape,ev_real32 topLength,ev_real32 bottomLength,ev_real32 height,ev_real32 upOffset,ev_real32 rightOffset);
				ev_void createDomTransectShape(EarthView::World::Spatial::Math::CVector3* shape,ev_real32 width,ev_real32 height,ev_real32 arc,ev_real32 upOffset,ev_real32 rightOffset);
				ev_bool parseTriangleProperty(EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& height,ev_real32& bottomlength,ev_real32& upOffset,ev_real32& rightOffset,ev_bool& headerClose,ev_bool& tailClose,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);
				ev_bool parseRCTEProperty(EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& width,ev_real32& height,ev_real32& upOffset,ev_real32& rightOffset,ev_int32& headerClose,ev_int32& tailClose,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);
				ev_bool parseTrapeziasProperty(EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& topLength,ev_real32& height,ev_real32& bottomLength,ev_real32& upOffset,ev_real32& rightOffset,ev_int32& headerClose,ev_int32& tailClose,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);
				ev_bool parseDomProperty(EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& width,ev_real32& height,ev_real32& arc,ev_real32& upOffset,ev_real32& rightOffset,ev_int32& headerClose,ev_int32& tailClose,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);
				ev_bool parseWallProperty(EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& thickness,ev_bool& isFill,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);
				ev_bool parseRoadProperty( EarthView::World::Spatial::Display::ISymbol* symbol,ev_real32& width,ev_real32& upOffset,ev_real32& rightOffset ,ev_int32& headerClose,ev_int32& tailClose,ev_int32& altitudeMode,ev_real32& altitude,ev_bool& needInterpolation,ev_real32& interpolateDis);

				ev_void calculatorTriangleUV(ev_real32* v,ev_real32* u1,ev_real32* v1,ev_real32 offsetWidth,ev_real32 height,ev_real32 sidelength,ev_real32 bottomlength,ev_real32 unitX,ev_real32 unitY,ev_real32 maxX,ev_real32 minX,ev_real32 maxY,ev_real32 minY); 
				ev_void calculatorRectangleUV(ev_real32* v,ev_real32* u1,ev_real32* v1,ev_real32* u2,ev_real32* v2,ev_real32* u21,ev_real32* v21,ev_real32* u3,ev_real32* v3,ev_real32* u31,ev_real32* v31,ev_real32 width,ev_real32 height,ev_real32 linelength,ev_real32 unitX,ev_real32 unitY,ev_real32 maxX,ev_real32 minX,ev_real32 maxY,ev_real32 minY); 
				ev_void calculatorTrapeziaUV(ev_real32* v,ev_real32* u1,ev_real32* v1,ev_real32 topLength,ev_real32 sideLength,ev_real32 bottomLength,ev_real32 height,ev_real32 unitX,ev_real32 unitY,ev_real32 maxX,ev_real32 minX,ev_real32 maxY,ev_real32 minY); 
				ev_void calculatorEllipseUV(ev_real32* v,ev_real32 unitX,ev_real32 unitY,ev_real32 maxX,ev_real32 minX,ev_real32 maxY,ev_real32 minY,EarthView::World::Spatial::Math::CVector3* rawCircle); 
				ev_void calculatorDomUV(ev_real32* v,ev_real32* u1,ev_real32* v1,EarthView::World::Spatial::Math::CVector3* rawDome,ev_real32 width,ev_real32 height,ev_real32 arc,ev_real32 unitX,ev_real32 unitY,ev_real32 maxX,ev_real32 minX,ev_real32 maxY,ev_real32 minY); 
				ev_bool getColor(EarthView::World::Spatial::Display::ISymbol* symbol,ev_uint32& fillColor,ev_uint32& lineColor);
				ev_bool getColor(EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Graphic::CColourValue& fillColor,EarthView::World::Graphic::CColourValue& lineColor);
				//三角形buf
				ev_uint32 createTriangleShapeBuf(ev_bool isTextureSymbol,ev_int32 drawMode,vector<TransectShape>& shapes,EarthView::World::Spatial::Math::CVector3* beginTriangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,ev_uint32 fillIndex,list<EarthView::World::Spatial::Math::CVector3>& labelLine);
				//矩形上右面顶点坐标
				ev_void createRectangleTRShapeVerts(ev_bool isTextureSymbol,ev_int32 drawMode,vector<TransectShape>& shapes,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& topFillVerts,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts,list<EarthView::World::Spatial::Math::CVector3>& labelLine);
				//channel右面顶点坐标
				ev_void createRectangleRShapeVerts(ev_bool isTextureSymbol,ev_int32 drawMode,vector<TransectShape>& shapes,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts,list<EarthView::World::Spatial::Math::CVector3>& labelLine);
				//tunnel右面顶点坐标
				ev_void createRectangleLShapeVerts(ev_bool isTextureSymbol,ev_int32 drawMode,vector<TransectShape>& shapes,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//矩形下左面顶点坐标
				ev_void createRectangleBLShapeVerts(ev_bool isTextureSymbol,ev_int32 drawMode,vector<TransectShape>& shapes,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& topFillVerts,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//矩形前端线顶点坐标
				ev_void createRectangleHeaderLineVerts(EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 lineColor,list<LineVert>& lineVerts);
				//矩形尾端顶点坐标
				ev_void createRectangleTailLineVerts(EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 lineColor,list<LineVert>& lineVerts);
				//矩形平面前端侧面顶点坐标
				ev_void createRectangleLineHeaderSideFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//梯形平面前端侧面顶点坐标
				ev_void createTrapziaLineHeaderSideFillVerts(ev_bool isTextureSymbol,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginTrapezia,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32* u1,ev_real32* v1,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//梯形平面前端侧面顶点坐标
				ev_void createTrapziaLineTailSideFillVerts(ev_bool isTextureSymbol,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginTrapezia,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32* u1,ev_real32* v1,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//矩形平面尾端侧面顶点坐标
				ev_void createRectangleLineTailSideFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,ev_real32 offset,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//矩形弧面顶底面顶点坐标
				ev_void createRectangleArcTailTBFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,ev_bool isTop,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3& beginRectangle,ev_real32 rightOffset,ev_real32 interval,ev_uint32 fillColor,ev_real32* u,ev_real32* v,list<FillVert>& topFillVerts);
				//矩形平面尾端侧面顶点坐标
				ev_void createRectangleArcTailSideFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_real32 rightOffset,ev_real32 interval,ev_real32 offset,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//矩形弧面顶底面顶点坐标
				ev_void createRectangleArcHeaderTBFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,ev_bool isTop,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3& beginRectangle,ev_real32 rightOffset,ev_real32 interval,ev_uint32 fillColor,ev_real32* u,ev_real32* v,list<FillVert>& topFillVerts);
				//矩形平面尾端侧面顶点坐标
				ev_void createRectangleArcHeaderSideFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& xA,EarthView::World::Spatial::Math::CVector3& yA,EarthView::World::Spatial::Math::CVector3* beginRectangle,ev_real32 rightOffset,ev_real32 interval,ev_real32 offset,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& sideFillVerts,list<LineVert>& lineVerts);
				//椭圆顶点
				ev_void createEllipseFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3* rawCircle,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts,list<LineVert>& lineVerts,list<EarthView::World::Spatial::Math::CVector3>& labelLine);
				ev_void createEllipseLineEndsFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3 center,ev_real32 offset,ev_uint32 fillColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts);
				ev_void createEllipseArcTailFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3* rawCircle,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 upOffset,ev_real32 rightOffset,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts,list<LineVert>& lineVerts);
				ev_void createEllipseArcHeaderFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3* rawCircle,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_uint32 lineColor,ev_real32 width,ev_real32 upOffset,ev_real32 rightOffset,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts,list<LineVert>& lineVerts);
				//椭圆面索引
				ev_void createEllipseFillIndicess(ev_uint32 nums,ev_uint32 fillIndex,list<ev_uint32>& fillIndices);
				//dom顶点
				ev_void createDomFillVerts(ev_bool isTextureSymbol,ev_int32 drawMode,EarthView::World::Spatial::Math::CVector3* rawDome,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32* v,list<FillVert>& fillVerts,list<EarthView::World::Spatial::Math::CVector3>& labelLine);
				ev_void createDomHeaderFillVerts(ev_bool isTextureSymbol,EarthView::World::Spatial::Math::CVector3* rawDome,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_real32 width,ev_real32 arc,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32 unitY,ev_real32 maxY,ev_real32 minY,ev_real32* u1,ev_real32* v1,list<FillVert>& fillVerts);
				ev_void createDomTailFillVerts(ev_bool isTextureSymbol,EarthView::World::Spatial::Math::CVector3* rawDome,vector<TransectShape>& shapes,ev_uint32 fillColor,ev_real32 width,ev_real32 arc,ev_real32 unitX,ev_real32 maxX,ev_real32 minX,ev_real32 unitY,ev_real32 maxY,ev_real32 minY,ev_real32* u1,ev_real32* v1,list<FillVert>& fillVerts);
				ev_void createDomFillIndicess(ev_uint32 nums,ev_uint32 fillIndex,list<ev_uint32>& fillIndices);
				ev_void createDomEndsFillIndicess(ev_uint32 fillIndex,list<ev_uint32>& fillIndices);
				//面索引
				ev_void createFillIndicess(ev_uint32 nums,ev_uint32 index,list<ev_uint32>& fillIndices,ev_bool reverse = false);
				//矩形线索引
				ev_void createLineIndicess(ev_uint32 nums,ev_uint32 index,list<ev_uint32>& lineIndices);
				//tunnel两端线索引
				ev_void createTunnelEndsLineIndeices(ev_uint32 index,list<ev_uint32>& lineIndices);
				//tunnel两端线索引
				ev_void createTrapziaEndsLineIndeices(ev_uint32 lineIndex,ev_uint32 numShapes,list<ev_uint32>& lineIndices);

				static ev_void releaseLines(map<ev_uint32,list<Spatial::Geometry::CLineString*> >& lines);

				virtual ev_void build(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshData,ev_bool isVoid);

				ev_void checkXYNormal(EarthView::World::Spatial::Math::CVector3& v ,EarthView::World::Spatial::Math::CVector3& v1);

				ev_void renderLabels();					
				ev_void createLabels(EarthView::World::Graphic::CCamera* pCamera);
				ev_void derenderLabels();
				ev_void destroyLabels();
				ev_void createLabel(EarthView::World::Spatial::Display::CSymbol3D* symbol,ev_uint32 index,EVString& label);
				ev_void createLabel(EarthView::World::Spatial::Display::CSymbol3D* symbol,ev_uint32 index,EVString& label,EarthView::World::Graphic::CCamera* pCamera);
				ev_int32 calLabelDirectiongene( EarthView::World::Graphic::CCamera* pCamera,EarthView::World::Spatial::Math::CVector3& lineDir );
				ev_void dealLabelVisibility( EarthView::World::Graphic::CCamera* pCamera,ev_real32 fontSize,ev_real32 totaloffset, EarthView::World::Spatial::Math::CVector3& lineMid,ev_uint32 txtLength, ev_bool* visibility );
				EarthView::World::Graphic::CTextureMovableText* createLineTrackText( const EarthView::World::Core::ev_wstring& txt,const EarthView::World::Spatial::Math::CVector3& vecLine ,EarthView::World::Graphic::CTextureTextStyle* ref_textStyle);
				ev_void calcuPosDis(EarthView::World::Graphic::CCamera* pCamera, ev_uint32 geometryIndex, vector<vector<pos_dis> >& lstlstPP );
				ev_void updateLabel(list<vector<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> >& lines,const EarthView::World::Spatial::Math::CVector3& vCamera);	
				ev_void updateLineLabel(EarthView::World::Spatial::Display::CSymbol3D* symbol,ev_uint32 geometryIndex,list<vector<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> >& lines,EarthView::World::Graphic::CCamera* pCamera);
				ev_void calcuCenters(vector<TransectShape>& shapes,ev_uint32 nShapes,ev_uint32 altitudeMode,ev_real64 altitude,ev_real32 upOffset,ev_real32 rightOffset);

				ev_void setVisibility(list<vector<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> >& lstMovables,ev_bool visible);

				ev_void processFilterVisibility();

				ev_void writeWideLineBuf(EarthView::World::Graphic::CSubMesh* subMesh,ev_bool bWriteColor,list<EarthView::World::Geometry3D::CVertex>& verts,list<ev_uint32>& indices,ev_real32& minX,ev_real32& maxX,ev_real32& minY,ev_real32& maxY,ev_real32& minZ,ev_real32& maxZ);
				ev_void writeRoadHardwareBuf( EarthView::World::Graphic::CSubMesh* subMesh,list<CVertex>& verts,list<ev_uint32>& indices,ev_real32& minX,ev_real32& maxX,ev_real32& minY,ev_real32& maxY,ev_real32& minZ,ev_real32& maxZ );
				ev_bool getLineTraceDirection(Spatial::Geometry::CLineString* line);

			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				C_DISABLE_COPY(CMultiPolyline3DExtension);

				static EarthView::World::Core::CRecursiveMutex msRenderListenersLock;
				static map<EarthView::World::Graphic::CSceneManager*,CRenderQueueGeometryExtensionListener*> msShapeRenderListeners;

				map<ev_uint32, list<list<EarthView::World::Spatial::Math::CVector3> > > mLabelPositions;
				EarthView::World::Core::CReadWriteLock mLabelPosLock;
				map<ev_uint32, list<vector<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> > > mLabels;

				ev_bool mLabelCreated;
				ev_bool mLabelAttached;
				ev_bool mGeoEntityAttached;
				ev_bool m_bIsLoaded;
				ev_bool m_bIsAttached;

				ev_bool mbNeedCalLabelPosition;

				CMultiPolyline3DExtension::LineInterpolationMode mInterpolationMode;
			};	
			class EV_GEOMETRY3D_DLL CMultiPolyline3DExtensionFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPolyline3DExtensionFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CMultiPolyline3DExtensionFactory();
				~CMultiPolyline3DExtensionFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,ev_uint32 index) const;
				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const;
			private:
				ev_uint16 mFactoryType;
			};
		}
	}
}
#endif