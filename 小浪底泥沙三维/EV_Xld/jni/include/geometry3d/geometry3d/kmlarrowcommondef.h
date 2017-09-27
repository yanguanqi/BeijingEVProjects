#ifndef _KML_ARROW_COMMONDEF_H_
#define _KML_ARROW_COMMONDEF_H_ 

#include "core/memoryallocatedobject.h"
#include "graphic/colourvalue.h"
#include "mathengine/vector3.h"
#include "color/rgbcolor.h"
#include "graphic/mesh.h"
#include "geometry3d/vertex.h"
#include "geometry3d/geometryclampscenelayer.h"
#include "geometry3d/geometry3d/simplerenderableex.h"
#include "geometry3d/featureuserdata.h"
#include "geometry3d/visibleobject.h"
#include "kmlserializer/geoobjectextension.h"
#include "geometry3d/igeometry3dfactory.h"
#include "geometry3d/featureuserdata.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
		}
		namespace Spatial
		{
			namespace Geometry
			{
				class ISpatialReference;
			}			
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Geometry3D{
			// 绘制标绘的基础信息
			class EV_GEOMETRY3D_DLL CArrowBaseInfo : public EarthView::World::Core::CBaseObject
			{
				friend class CKmlArrow3DMovable;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CArrowBaseInfo(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CArrowBaseInfo();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CArrowBaseInfo();
				/// <summary>
				/// 拷贝构造函数
				/// </summary>
				/// <param name="arrowInfo">拷贝的对象</param>
				/// <returns></returns>
				CArrowBaseInfo(const CArrowBaseInfo& arrowInfo);
				/// <summary>
				/// 重载赋值运算
				/// </summary>
				/// <param name="arrowInfo">赋值对象</param>
				/// <returns></returns>
				CArrowBaseInfo&  operator=( const CArrowBaseInfo& arrowInfo);
				/// <summary>
				/// 判断是否相等
				/// </summary>
				/// <param name="arrowInfo"></param>
				/// <returns></returns>
				ev_bool isEqual(const CArrowBaseInfo& arrowInfo);
				/// <summary>
				/// 设置颜色
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns></returns>
				ev_void setColor(const EarthView::World::Graphic::CColourValue& color);
				/// <summary>
				/// 设置标绘的类型
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				ev_void setArrowType(EarthView::World::Spatial::Kml::ArrowType type);
				/// <summary>
				/// 设置起始高度
				/// </summary>
				/// <param name="atitudeValue">起始高度</param>
				/// <returns></returns>
				ev_void setStartAltitude(ev_real32 atitudeValue);
				/// <summary>
				/// 设置终止高度
				/// </summary>
				/// <param name="atitudeValue">终止高度</param>
				/// <returns></returns>
				ev_void setEndAltitude(ev_real32 atitudeValue);
				/// <summary>
				/// 添加关键点
				/// </summary>
				/// <param name="t">关键点</param>
				/// <returns></returns>
				ev_void addKeyPoint(const EarthView::World::Spatial::Math::CVector3& t);
				/// <summary>
				/// 删除所有关键点
				/// </summary>
				/// <returns></returns>
				ev_void reMoveAllPoints();
				/// <summary>
				/// 获取颜色
				/// </summary>
				/// <returns></returns>
				EarthView::World::Graphic::CColourValue getColor()const;
				/// <summary>
				/// 获取标绘的类型
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Kml::ArrowType getType()const;
				/// <summary>
				/// 获取起始的高度
				/// </summary>
				/// <returns></returns>
				ev_real32 getStartAltitude()const;
				/// <summary>
				/// 获取终止的高度
				/// </summary>
				/// <returns></returns>
				ev_real32 getEndAltitude()const;
				/// <summary>
				/// 获取所有的关键点
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::VertexList getKeyPoints()const;
				/// <summary>
				/// 根据索引获取关键点
				/// </summary>
				/// <param name="index">关键点索引</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getKeyPointByIndex(ev_int32 index);
			protected:
				EarthView::World::Graphic::CColourValue mColor;
				EarthView::World::Spatial::Kml::ArrowType mType;
				ev_real32 mStartAltitude;
				ev_real32 mEndAltitude;
				/// <summary>
				/// 关键点数组
				/// </summary>
				/// <remarks>关键点数组由四个点构成(起点1、起点2、中间控制点和结束点)，用来构造箭头的形状</remarks>
				EarthView::World::Spatial::Math::VertexList mKeyPoints;
				//ev_bool mIsNew;//是否为新创建
				//ev_bool mIsChangeKeyPoints;//是否改变箭头关键点
			};
			// 数学计算方法类， 不导出
			class EV_GEOMETRY3D_DLL CArrowMathEngine: public EarthView::World::Core::CBaseObject
			{
ev_private:
				CArrowMathEngine(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CArrowMathEngine();


				/// <summary>
				/// 析够函数
				/// </summary>
				/// <returns></returns>
				~CArrowMathEngine();
				/// <summary>
				/// 由四个关键点创建构造箭头的顶点
				/// </summary>
				/// <param name="gridPoints">关键点数组</param>
				/// <returns>构造箭头的顶点列表</returns>
				static EarthView::World::Spatial::Math::VertexList createGroundArrowPoints(const EarthView::World::Spatial::Math::VertexList& mKeyPoints);
				/// <summary>
				/// 由四个关键点生成构造空中箭头的所有顶点
				/// </summary>
				/// <param name="vectors">四个关键点数组</param>
				/// <param name="drawPointsT">箭头头部顶点数组</param>
				/// <param name="endPointT">箭头结束点顶点</param>
				/// <returns>箭头</returns>
				static EarthView::World::Spatial::Math::VertexList createThreeDArrowPoints(const EarthView::World::Spatial::Math::VertexList& mKeyPoints,
					EarthView::World::Spatial::Math::VertexList& drawPointsT,
					EarthView::World::Spatial::Math::CVector3& endPointT);

			private:
				/// <summary>
				/// 返回三次贝尔斯曲线采样点信息
				/// </summary>
				/// <param name="curvePoint">贝尔斯三个控制点</param>
				/// <param name="t">采样比率</param>
				/// <returns>采样点</returns>
				static EarthView::World::Spatial::Math::CVector3 getBezierPointByRate(const EarthView::World::Spatial::Math::VertexList& curvePoints, ev_real32 t);
				/// <summary>
				/// 生成三次贝尔斯曲线点(左侧曲线)
				/// </summary>
				/// <param name="bezierPoints">三次贝尔斯曲线的四个控制点</param>
				static ev_void getBezierPointsLeft(const EarthView::World::Spatial::Math::VertexList& bezierPoints,
					EarthView::World::Spatial::Math::VertexList& arrowPoints);
				/// <summary>
				/// 生成三次贝尔斯曲线点(右侧曲线)
				/// </summary>
				/// <param name="bezierPoints">三次贝尔斯曲线的四个控制点</param>
				static ev_void getBezierPointsRight(const EarthView::World::Spatial::Math::VertexList& bezierPoints,
					EarthView::World::Spatial::Math::VertexList& arrowPoints);

				/// <summary>
				/// 生成三次贝尔斯曲线点
				/// </summary>
				/// <param name="bezierPoints">三次贝尔斯曲线的四个控制点</param>
				static ev_void getBezierPoints(const EarthView::World::Spatial::Math::VertexList& bezierPoints,
					EarthView::World::Spatial::Math::VertexList& arrowPoints);

			};
			// 3D标绘的渲染对象
			class EV_GEOMETRY3D_DLL CKmlArrow3DMovable : public EarthView::World::Geometry3D::CSimpleRenderableEx
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlArrow3DMovable(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pSceMger">场景管理器</param>
				/// <param name="ArrowInfo">绘制的基本信息对象</param>
				/// <returns></returns>
				CKmlArrow3DMovable(EarthView::World::Graphic::CSceneManager* pSceMger, CArrowBaseInfo ArrowInfo);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CKmlArrow3DMovable();
				/// <summary>
				/// 构建渲染对象的buffer
				/// </summary>
				/// <returns></returns>
				ev_void create();
				/// <summary>
				/// 获取中心点
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getCenter()const;
			protected:
				// 计算法线
				ev_void computeNormal();
				// 构建buffer
				ev_void buildBuffer();
				ev_void updateAxisAlignedBox(EarthView::World::Spatial::Math::CVector3& minPoint, EarthView::World::Spatial::Math::CVector3& maxPoint, EarthView::World::Spatial::Math::CVector3& vertice);
				/// 生成三维主体点
				ev_void buildPositonColorBody(EarthView::World::Spatial::Math::VertexList& points,
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsUp, //shu chu 
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsBody, //shu chu 
					ev_real32 maxHeight, ev_real32 minHeight, 
					EarthView::World::Spatial::Math::CVector3 endPoint);
				/// 生成三维箭头主体侧面点
				ev_void buildPositonColorBodyBorder(EarthView::World::Spatial::Math::VertexList& points,
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsDown, //shu chu 
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsBody,//shu chu 
					ev_real32 maxHeight, ev_real32 minHeight,
					EarthView::World::Spatial::Math::CVector3 endPoint);
				///生成箭头头部顶点
				ev_void buildPositonColorHead(EarthView::World::Spatial::Math::VertexList& drawPoints, 
					vector<EarthView::World::Geometry3D::CVertex>& arrowPoints, //shu chu 
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsUp,
					ev_real32 maxHeight, ev_real32 minHeight,
					EarthView::World::Spatial::Math::CVector3 endPoint);
				/// 生成三维箭头侧面点
				ev_void buildPositonColorHeadBorder(EarthView::World::Spatial::Math::VertexList& drawPoints,
					vector<EarthView::World::Geometry3D::CVertex>& arrowPoints, //shu chu 
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsDown,
					vector<EarthView::World::Geometry3D::CVertex>& drawColorPointsUp,
					ev_real32 maxHeight, ev_real32 minHeight,
					EarthView::World::Spatial::Math::CVector3 endPoint);
				///// 创建索引
				ev_void createIndex(vector<ev_int32>& indicesLine,
					vector<ev_int32>& indicesHead,
					vector<ev_int32>& indicesBody);
				/// 计算所有点的中心点
				ev_void computeCenter(EarthView::World::Spatial::Math::CVector3& center,
					vector<EarthView::World::Geometry3D::CVertex>& points);
				/// 所有点减去中心点
				ev_void minusCenter(vector<EarthView::World::Geometry3D::CVertex>& points);	
				CArrowBaseInfo mArrowInfo;
				EarthView::World::Graphic::CSceneManager* mpSceMger;
				ev_int32 mLength;
				EarthView::World::Spatial::Math::CVector3 mCenterPosition;

				vector<EarthView::World::Geometry3D::CVertex> mVertexs;
				vector<ev_int32> mIndex;
			};
			// 标绘对象
			class EV_GEOMETRY3D_DLL CKmlArrowObjectEx : public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlArrowObjectEx(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_scenemanager">场景管理器</param>
				/// <param name="pGeoObj">扩展对象</param>
				/// <returns></returns>
				CKmlArrowObjectEx(EarthView::World::Graphic::CSceneManager* ref_scenemanager, EarthView::World::Spatial::Kml::CGeoObjectExtension* pGeoObj);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CKmlArrowObjectEx();
			public:
				/// <summary>
				///  获取节点
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual EarthView::World::Graphic::CNode* getNode();
				virtual ev_void setSelectable(ev_bool selectable);

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();
				virtual ev_bool update();

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
				/// 获取包围盒最大
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getMaxnum();
				/// <summary>
				/// 获取包围盒最小
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getMinnum();
				/// <summary>
				/// 设置可见性
				/// </summary>
				/// <param name="b">可见性</param>
				/// <returns></returns>
				ev_void setVisible(ev_bool b);
				/// <summary>
				/// 获取可见性
				/// </summary>
				/// <returns></returns>
				ev_bool getVisible()const;
				/// <summary>
				/// 获取标绘的类型
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Kml::ArrowType getType();
				/// <summary>
				/// 构建渲染对象
				/// </summary>
				/// <param name="pGeoObj">扩展对象</param>
				/// <returns></returns>
				virtual ev_void build();
				/// <summary>
				/// 通过基础数据更新
				/// </summary>
				/// <param name="info">绘制的基本数据</param>
				/// <returns></returns>
				virtual ev_void updataByArrowInfo(const CArrowBaseInfo& info);
				/// <summary>
				/// 是否已经挂接渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否已经挂接渲染</returns>
				virtual ev_bool isRendering();
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
				/// 设置空间参照系，贴地的时候用的着
				/// </summary>
				/// <param name="pSpatialRef">空间参照系</param>
				/// <returns></returns>
				virtual ev_void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);
				/// <summary>
				/// 获取关键点列表
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::VertexList getKeyPoints()const;
				/// <summary>
				/// 根据索引取关键点
				/// </summary>
				/// <param name="index">关键点索引</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getKeyPointByIndex(ev_int32 index);
				ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				C_DISABLE_COPY(CKmlArrowObjectEx);

			protected:
				EarthView::World::Spatial::Math::CVector3 computerCenter();
				ev_void initArrowInfoByGeoObjectEx();
				ev_void createMaterial();
				ev_void buildGroundArrow();
				ev_void buildThree3DArrow();
				EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObjectEX; // 提供渲染对象的基础参数来源 
				CArrowBaseInfo mArrowInfo;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;
				EarthView::World::Graphic::CNode*               m_pNode;
				EarthView::World::Spatial::Kml::CGeoObjectExtension* m_TmpGeoObject;

				CKmlArrow3DMovable* mpKmlArrowMovable;
				EarthView::World::Spatial::CGeoObject* mpGeoObj;

				EarthView::World::Geometry3D::CGeometryClampSceneLayer* mpGeometryClampLayer;
				EVString mMaterialName;
				ev_bool mIsRendering;
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;

				// 表识渲染几何体得状态 2014/10/8增加
				ev_bool                                    m_bIsLoaded;
				ev_bool                                    m_bIsAttached;
			};

			class EV_GEOMETRY3D_DLL CKmlArrowObjectExFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlArrowObjectExFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CKmlArrowObjectExFactory();
				~CKmlArrowObjectExFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
			private:
				ev_uint16 mFactoryType;
			};

		}
	}
}
#endif