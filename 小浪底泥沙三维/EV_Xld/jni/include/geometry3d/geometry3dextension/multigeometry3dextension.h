#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSION_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSION_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include "core/workqueue.h"
#include "core/defaultworkqueuestandard.h"
#include <graphic/renderobjectlistener.h>
#include <graphic/renderqueuelistener.h>
#include <mathengine/vector3.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3dextension/geoentity.h"
#include "geometry3d/featureuserdata.h"
#include "geometry3d/vertex.h"
#include "geometry3d/visibleobject.h"
#include "graphic/texturemovabletext.h"
#include <graphic/camera.h>
#include "graphic/framelistener.h"
#include "symbol/symbol3d.h"
#include "spatialobject/geometry/linestring.h"
#include "geometry3d/featureuserdata.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{		
						
			/// <summary>				
			/// submesh数据
			///存储submesh数据信息
			/// </summary>
			class EV_GEOMETRY3D_DLL SubMeshData : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EarthView::World::Geometry3D::CVertexVector vertexs;

				ev_bool existPosition;
				ev_bool existNormal;
				ev_bool existColor;
				ev_bool existTextureCoord;

				EarthView::World::Geometry3D::CIndexVector indices;
				EarthView::World::Graphic::CRenderOperation::OperationType operationType;
				EarthView::World::Graphic::CMaterialPtr material;
				EarthView::World::Spatial::Math::CMatrix4 matrix;

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				SubMeshData()
				{
					existPosition = true;					
					existColor = true;
					existNormal = false;
					existTextureCoord = false;
				}

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				SubMeshData(EarthView::World::Core::CNameValuePairList* pList)
				{
					existPosition = true;					
					existColor = true;
					existNormal = false;
					existTextureCoord = false;
				}
			};

			/// </summary>
			///  submesh数据信息集合
			/// </summary>
			class EV_GEOMETRY3D_DLL CSubMeshDataVector : public EarthView::World::Core::CAllocatedObject
			{
				typedef vector<EarthView::World::Geometry3D::SubMeshData>  SubMeshDatas;  			///内部的数组
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CSubMeshDataVector( _in EarthView::World::Core::CNameValuePairList* pList) ;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSubMeshDataVector() ;
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CSubMeshDataVector();

			public:
				/// </summary>
				/// 获取submesh数据
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>submesh数据</returns>
				EarthView::World::Geometry3D::SubMeshData& operator[](_in ev_size_t index);
				/// </summary>
				/// 获取submesh数据
				/// </summary>
				/// <param name="pos">索引</param>
				/// <returns>submesh数据</returns>
				EarthView::World::Geometry3D::SubMeshData& getSubMeshData( _in ev_size_t pos);
				/// </summary>
				/// 追加submesh数据
				/// </summary>
				/// <param name="subMeshData">submesh数据</param>
				/// <returns></returns>
				void addSubMeshData(const EarthView::World::Geometry3D::SubMeshData& subMeshData) ;
				/// </summary>
				/// 插入submesh数据
				/// </summary>
				/// <param name="pos">索引位置</param>
				/// <param name="subMeshData">submesh数据</param>
				/// <returns></returns>
				void insertSubMeshData( _in ev_size_t pos,  _in const EarthView::World::Geometry3D::SubMeshData& subMeshData)  ;
				/// </summary>
				/// 删除submesh数据
				/// </summary>
				/// <param name="pos">索引位置</param>
				/// <returns></returns>
				void removeSubMeshData( _in ev_size_t pos) ;
				/// </summary>
				/// 删除所有submesh数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void removeAllSubMeshDatas()  ;
				/// </summary>
				/// 获取容器容量
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器容量</returns>
				ev_size_t getCapacity() const ;
				/// </summary>
				/// 设置容器容量
				/// </summary>
				/// <param name="count">容量</param>
				/// <returns></returns>
				void setCapacity( _in ev_size_t count)  ;

				/// </summary>
				/// 获取容器元素数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素数量</returns>
				ev_size_t getCount() const;

			protected:
				SubMeshDatas  m_subMeshDatas; 			///顶点集合
			};

			/// <summary>
			/// 如果希望从渲染队列中获得事件就必须执行该抽象接口
			/// </summary>
			class EV_GEOMETRY3D_DLL CRenderableGeometryExtensionListener: public EarthView::World::Graphic::CRenderable::CRenderableListener
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CRenderableGeometryExtensionListener(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRenderableGeometryExtensionListener(EarthView::World::Geometry3D::CMultiGeometry3DExtension* ex);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CRenderableGeometryExtensionListener() {}

				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <param name="renderable">renderable</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);
				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <param name="renderable">renderable</param>
				/// <returns></returns>
				virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);

				/// <summary>
				/// 销毁向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <param name="renderable">renderable</param>
				/// <returns></returns>
				virtual void destroyed(EarthView::World::Graphic::CRenderable* renderable);
			private:					
				EarthView::World::Spatial::Math::CMatrix4 mProjMatrix;
				ev_int32 mFlag;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* mParentExtension;
				ev_bool mbProjChanged;
			};

			class CMultiGeometry3DExtensionListener;	
			class CGeoStatistics3DExtension;
			struct FillVert;
			struct LineVert;
			/// <summary>
			/// 二维图像扩展类
			/// 管理地理对象扩展
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiGeometry3DExtension : public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiGeometry3DExtension(EarthView::World::Core::CNameValuePairList* pList);
			public:					
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CMultiGeometry3DExtension(EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CMultiGeometry3DExtension();

			protected:

				enum EVGeometryExtensionType
				{
					GET_Unknown,
					GET_Point,
					GET_PolylinePoint,
					GET_PolylineShape,
					GET_Polygon
				};
						
				/// <summary>
				/// 如果希望从渲染队列中获得事件就必须执行该抽象接口
				/// </summary>
				class CRenderQueueGeometryExtensionListener: public EarthView::World::Graphic::CRenderQueueListener
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRenderQueueGeometryExtensionListener();		
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CRenderQueueGeometryExtensionListener() {}

					/// <summary>
					/// 在渲染队列组被渲染之前事件提起
					/// </summary>
					/// <param name="queueGroupId">队列组的ID号</param>
					/// <param name="invocation"></param>
					/// <param name="skipThisInvocation"></param>
					/// <returns></returns>
					virtual void renderQueueStarted(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 queueGroupId, const EVString &invocation,
						ev_bool &skipThisInvocation);
					/// <summary>
					/// 在渲染队列组被渲染之后事件提起
					/// </summary>
					/// <param name="queueGroupId">队列组的ID号</param>
					/// <param name="invocation"></param>
					/// <param name="skipThisInvocation"></param>
					/// <returns></returns>
					virtual void renderQueueEnded(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 queueGroupId, const EVString &invocation,
						_inout ev_bool &repeatThisInvocation);

				private:					
					ev_bool mbStencilEnable;
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* mParentExtension;
				};

			public:					

				/// <summary>
				/// 获取监听
				/// </summary>
				/// <param name=""></param>
				/// <returns>监听对象</returns>
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* getListener() const;
				/// <summary>
				/// 设置监听
				/// </summary>
				/// <param name="ref_listener">监听</param>
				/// <returns></returns>
				ev_void setListener(EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ref_listener);
				/// <summary>
				/// 增加地理对象
				/// </summary>
				/// <param name="ref_geoObject">地理对象</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除地理对象
				/// </summary>
				/// <param name="geoObject">地理对象</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有地理对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects();
				/// <summary>
				/// 获得地理对象
				/// </summary>
				/// <param name="index">地理对象索引</param>
				/// <returns>地理对象</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 index) const;
				/// <summary>
				/// 获得地理对象数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>地理对象数量</returns>
				virtual ev_uint64 getGeoObjectCount() const;
				/// <summary>
				/// 获得三维地理实体
				/// </summary>
				/// <param name=""></param>
				/// <returns>三维地理实体</returns>
				EarthView::World::Geometry3D::CGeoEntity* getGeoEntity() const;					
				/// <summary>
				/// 获得是否渲染边框
				/// </summary>
				/// <param name=""></param>
				/// <returns>true 绘制边框</returns>
				virtual ev_bool getDrawWireBoundingBox() const;
				/// <summary>
				/// 设置是否渲染边框
				/// </summary>
				/// <param name="isdraw">是否绘制</param>
				/// <returns></returns>
				virtual ev_void setDrawWireBoundingBox(ev_bool isdraw);
				/// <summary>
				/// 绘制
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void draw();
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
				virtual ev_void build(_inout EarthView::World::Geometry3D::CSubMeshDataVector& subMeshData);

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
				/// 是否已经挂接渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否已经挂接渲染</returns>
				virtual ev_bool isRendering() const;

				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 设置是否精确插值，主要用于线扩展
				/// </summary>
				/// <param name="dense">是否高精度插值</param>
				/// <returns></returns>
				virtual ev_void setDenseInterpolation(ev_bool dense);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
				/// <summary>
				/// 返回用户数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>用户数据</returns>
				const EarthView::World::Spatial3D::CFeatureUserData& getUserData()const;
				/// <summary>
				/// 设置是否可选择
				/// </summary>
				/// <param name="selectable">是否可选择</param>
				/// <returns></returns>
				virtual ev_void setSelectable(ev_bool selectable);

				/// <summary>
				/// 获取场景节点坐标
				/// </summary>
				/// <param name=""></param>
				/// <returns>场景节点坐标</returns>
				const EarthView::World::Spatial::Math::CVector3& getSceneNodePostion() const;

				/// <summary>
				/// 设置场景节点坐标
				/// </summary>
				/// <param name=""></param>
				/// <returns>场景节点坐标</returns>
				const ev_void setSceneNodePostion(const EarthView::World::Spatial::Math::CVector3& pos);

				/// <summary>
				/// 设置高程精度(道路矢量专用,如有需要可以通用)
				/// </summary>
				/// <param name="precision">精度值</param>
				ev_void setAltitudePrecision(ev_int32 precision);
				/// <summary>
				/// 设置有效角度,针对偏移
				/// </summary>
				/// <param name="angle">有效角度</param>
				/// <returns></returns>
				void setProjOffsetMaxAngle(Real angle);
				/// <summary>
				/// 获取有效偏移角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取有效角度</returns>
				Real getProjOffsetMaxAngle() const;
				/// <summary>
				/// 设置是否进行模板缓冲，主要是面扩展和非简单线扩展
				/// </summary>
				/// <param name="useStencil">是否进行模板缓冲</param>
				/// <returns></returns>
				void setStencilEnable(ev_bool useStencil);
				/// <summary>
				/// 是否进行模板缓冲
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否进行模板缓冲</returns>
				ev_bool getStencilEnable() const;
				/// <summary>
				/// 设置是否进行偏移，主要是点扩展和简单线扩展
				/// </summary>
				/// <param name="useProjOffset">是否进行偏移</param>
				/// <returns></returns>
				void setProjOffsetEnable(ev_bool useProjOffset);
				/// <summary>
				/// 是否进行偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getProjOffsetEnable() const;
				/// <summary>
				/// 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name="multi">偏移常量的倍数</param>
				/// <returns></returns>
				void setProjOffset(Real offset);
				/// <summary>
				/// 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Real getProjOffset() const;
				
				/// <summary>
				/// 获取renderablelistener
				/// </summary>
				/// <param name=""></param>
				/// <returns>renderablelistener</returns>
				CRenderableGeometryExtensionListener* getRenderableListener() const;

ev_private:
				enum GetHeightMode
				{
					GH_Advanced = 0,//最高精度
					GH_SelfAdapt,//自适应
					GH_BestHeight//所有都获取bestheight
				};

				void setGetHeightMode(CMultiGeometry3DExtension::GetHeightMode ghMode);
				CMultiGeometry3DExtension::GetHeightMode getGetHeightMode() const;

				//自适应高程和线的插值地理范围
				//void setSelfAdaptGeoRange(Real minLon,Real maxLon,Real minLat,Real maxLat,Real targetSamplesPerDegrees);
				void setSelfAdaptGeoRange(EarthView::World::Spatial::Math::CVector3 center,Real r,Real targetSamplesPerDegrees);

				enum { IVALID_LEVEL = -1 };

				static list<CMultiGeometry3DExtension*> setExtensionsVisible(ev_bool visible);
				static void setExtensionsVisible(list<CMultiGeometry3DExtension*>& lstExtensions,ev_bool visible);
            public:
				/// <summary>
				/// 设置随某一瓦片级别的瓦片显示隐藏（仅用于道路矢量）
				/// </summary>
				void setLevel(ev_int32 level);

				/// <summary>
				/// 设置最小最大可见距离（仅用于道路矢量）
				/// </summary>
				void setRoadMinMaxVisibleDistance(Real min, Real max);
				/// <summary>
				/// 判断该扩展对象是否已经创建
				/// </summary>
				/// <param name="extension">扩展对象</param>
				/// <returns>是否已经创建</returns>
				static bool exist(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);

				/// <summary>
				/// 更新注记
				/// </summary>
				/// <param name="resetTextStyle">是否更新字体属性</param>
				/// <param name="derenderTxt">是否反挂接</param>
				/// <param name="reCreate">是否重新构建</param>
				/// <param name="attachLabel">是否挂接</param>
				/// <param name="pCamera">相机</param>
				/// <returns></returns>
				virtual ev_void updateLabel(ev_bool resetTextStyle,ev_bool derenderTxt,ev_bool reCreate,ev_bool attachLabel,EarthView::World::Graphic::CCamera* pCamera);
				/// <summary>
				/// 根据相机位置进行相应刷新
				/// </summary>
				/// <param name="pCamera">相机</param>
				/// <returns></returns>
				virtual ev_void updateByCamera(EarthView::World::Graphic::CCamera* pCamera);
				/// <summary>
				/// 获知注记可见距离
				/// </summary>
				virtual ev_real64 getLabelVisibleDistance();
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
				/// 获取有效偏移角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取有效角度</returns>
				virtual Real getLabelProjOffsetMaxAngle() const;
				/// <summary>
				/// 设置是否进行偏移，主要是点扩展和简单线扩展
				/// </summary>
				/// <param name="useProjOffset">是否进行偏移</param>
				/// <returns></returns>
				virtual void setLabelProjOffsetEnable(ev_bool useProjOffset);
				/// <summary>
				/// 是否进行偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool getLabelProjOffsetEnable() const;
				/// <summary>
				/// 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name="multi">偏移常量的倍数</param>
				/// <returns></returns>
				virtual void setLabelProjOffset(Real offset);
				/// <summary>
				/// 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getLabelProjOffset() const;

				/// <summary>
				/// 更新扩展实体材质
				/// </summary>
				/// <returns>是否成功</returns>
				virtual ev_bool updateMaterial();
				/// <summary>
				/// 绑定一个统计专题图扩展对象
				/// </summary>
				/// <param name="statisticsEx">统计专题图扩展对象</param>
				/// <returns></returns>
				ev_void attachStatisticsExtension(CGeoStatistics3DExtension* statisticsEx);
				/// <summary>
				/// 获知统计专题图扩展对象
				/// </summary>
				CGeoStatistics3DExtension* getStatisticsExtension( );
				/// <summary>
				/// 更新统计专题图
				/// </summary>
				/// <param name="derenderEx">是否反挂接</param>
				/// <param name="reBuildEx">是否重新构建</param>
				/// <param name="renderEx">是否挂接</param>
				/// <returns></returns>
				ev_bool updateStatisticsExtension(ev_bool derenderEx,ev_bool reBuildEx,ev_bool renderEx);

				/// <summary>
				/// 设置条件可见性
				/// </summary>
				/// <param name="visible">指定的ids是否可见</param>
				/// <param name="ids">指定的ids</param>
				/// <returns></returns>
				virtual ev_bool setVisibilityFilter(ev_bool visible,  const EarthView::World::Core::IntVector& ids);

				/// <summary>
				/// 设置某个对象的可见性
				/// </summary>
				/// <param name="visible">obj是否可见</param>
				/// <param name="ref_geoObject">ibj</param>
				/// <returns></returns>
				virtual ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject);

ev_private:
				virtual ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject,ev_bool bProcessAttach);
			public:

				/// <summary>
				///  获取节点，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual EarthView::World::Graphic::CNode* getNode();

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

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToScene();

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool detachFromScene();
			protected:
				EV_STATIC_MUTEX(mStaticMutex);
				static set<EarthView::World::Geometry3D::CMultiGeometry3DExtension*> mExtensions;
				friend class CGeometryExtensionBackgroundWorkQueue;
				
				struct pos_movable
				{
					EarthView::World::Spatial::Math::CVector3 position;
					EarthView::World::Graphic::CMovableObject* movable;
					ev_bool isVisible;
					ev_bool filterVisibility;
					EVString text;
					ev_bool liedown;
					EarthView::World::Graphic::CTextureTextStyle* textStyle;
					ev_uint32 index;

					ev_int32 lineSegmentIndex;//主要是用于点延伸到地面的线
					pos_movable()
					{
						movable = NULL;
						isVisible = false;
						filterVisibility = true;
						liedown = false;
						textStyle = NULL;
						lineSegmentIndex = -1;
					}

					pos_movable(const EarthView::World::Spatial::Math::CVector3& pos, EarthView::World::Graphic::CMovableObject*mov,EarthView::World::Graphic::CTextureTextStyle* txtSty)
					{
						position = pos;
						movable = mov;
						isVisible = true;
						liedown = false;
						textStyle = txtSty;
						filterVisibility = true;
						lineSegmentIndex = -1;
					}

					pos_movable(const EarthView::World::Spatial::Math::CVector3& pos, EarthView::World::Graphic::CMovableObject*mov,EarthView::World::Graphic::CTextureTextStyle* txtSty, const EVString& txt,ev_bool ld)
					{
						position = pos;
						movable = mov;
						isVisible = true;
						text = txt;
						liedown = ld;
						textStyle = txtSty;
						filterVisibility = true;
						lineSegmentIndex = -1;
					}

					pos_movable(const EarthView::World::Spatial::Math::CVector3& pos, EarthView::World::Graphic::CMovableObject*mov,EarthView::World::Graphic::CTextureTextStyle* txtSty, const EVString& txt,ev_bool ld,ev_bool visible,ev_uint32 i)
					{
						position = pos;
						movable = mov;
						isVisible = true;
						text = txt;
						liedown = ld;
						textStyle = txtSty;
						isVisible = visible;
						index = i;
						filterVisibility = true;
						lineSegmentIndex = -1;
					}

					pos_movable& operator = ( const pos_movable& val)
					{					
						position = val.position;
						movable = val.movable;
						isVisible = val.isVisible;
						text = val.text;
						liedown = val.liedown;
						textStyle = val.textStyle;
						isVisible = val.isVisible;
						index = val.index;
						filterVisibility = val.filterVisibility;
						lineSegmentIndex = val.lineSegmentIndex;
						return *this;
					}
				};

				struct pos_dis
				{
					EarthView::World::Spatial::Math::CVector3 pos;
					ev_real32 offset;

					pos_dis()
					{
						offset = 0.0;
					}
					pos_dis(const EarthView::World::Spatial::Math::CVector3& p,ev_real32 off)
					{
						pos = p;
						offset = off;
					}
				};

			protected:
				ev_real32* lockVertexBuf(EarthView::World::Graphic::CSubMesh* subMesh,ev_uint16 source);
				ev_void writeIndicesBuf(EarthView::World::Graphic::CSubMesh* subMesh,list<ev_uint32>& indices);
				ev_void buildHardwareBuf(EarthView::World::Graphic::CSubMesh* subMesh,list<FillVert>& verts,list<ev_uint32>& indices,ev_uint8 symbolType);
				ev_void buildHardwareBuf(EarthView::World::Graphic::CSubMesh* subMesh,list<FillVert>& verts,list<ev_uint32>& indices ,ev_uint8 symbolType,ev_real32& minX,ev_real32& maxX,ev_real32& minY,ev_real32& maxY,ev_real32& minZ,ev_real32& maxZ);
				ev_void buildHardwareBufLine(EarthView::World::Graphic::CSubMesh* subMesh,list<LineVert>& verts,list<ev_uint32>& indices);
				ev_void buildHardwareBufLine(EarthView::World::Graphic::CSubMesh* subMesh,list<LineVert>& verts,list<ev_uint32>& indices,ev_real32& minX,ev_real32& maxX,ev_real32& minY,ev_real32& maxY,ev_real32& minZ,ev_real32& maxZ);
				ev_void addGeoIndex(ev_uint32 geometryIndex,ev_uint32 buffNo,ev_uint32 beginIndex,ev_uint32 endIndex);
				ev_void parseTextureInfo(const EarthView::World::Spatial::Display::CTextureInfo& texInfo,ev_real32& minX ,ev_real32& maxX ,ev_real32& minY ,ev_real32& maxY,ev_real32& unitSizeX ,ev_real32& unitSizeY,ev_real32& unitX ,ev_real32& unitY);
				
				ev_real64 approxAngularDistance( _in ev_real64 latA,_in ev_real64 lonA, _in ev_real64 latB,_in ev_real64 lonB );
				ev_real32 worldPositionInterpolation(ev_real32 minDis,_in ev_real64 altitude,_in ev_real64 latA,_in ev_real64 lonA,_in ev_real64 zA,
					_in ev_real64 latB,_in ev_real64 lonB,ev_real64 zB, _out vector<EarthView::World::Spatial::Math::CVector3> &outPoints,ev_uint32 altitudeMode,ev_real32 interpolateDis , ev_bool dense);
				ev_void coordinateToCartesian(const Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate,ev_uint32 altitudeMode,ev_real64 altitude);
				virtual ev_void resetGeoEntity();

				virtual ev_void calOriginPoint();
				virtual ev_real64 calRealAltitude(ev_uint32 altitudeMode,ev_real64 altitude,ev_real64 lon,ev_real64 lat,ev_real64 z);
			
				ev_real64 makeInterpolationInterval(ev_bool dense,ev_real32 minDis,ev_real64 longAB);

				ev_void ComputeNormals(list<FillVert>& vertices, list<ev_uint32>& indices);
				ev_void ComputeNormals(list<EarthView::World::Geometry3D::CVertex>& vertices, list<ev_uint32>& indices);

				ev_void addSubMeshData(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas,list<FillVert>& verts,list<ev_uint32>& indices,EarthView::World::Graphic::CRenderOperation::OperationType ot,ev_bool haveUV,ev_bool haveNormal);
				ev_void addSubMeshData(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas,list<LineVert>& verts,list<ev_uint32>& indices,EarthView::World::Graphic::CRenderOperation::OperationType ot,ev_bool haveUV,ev_bool haveNormal);

				ev_void setSubEntData(EarthView::World::Graphic::CEntity* ent,ev_bool customGroupId,ev_uint8 renderGeoupId,ev_bool isVoid,ev_uint16 index,EarthView::World::Graphic::CMaterialPtr& mat,EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas);
				ev_void setSubMeshDataMaterial(ev_bool isVoid,ev_uint16 index,EarthView::World::Graphic::CMaterialPtr& mat,EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas);
			
				virtual ev_bool updateTextStyle();
				virtual ev_bool updateTextStyleBySymbol(EarthView::World::Spatial::Display::ISymbol* ref_pSymbol,EarthView::World::Graphic::CTextureTextStyle* ref_textStyle);

				ev_bool getGeometryCenter(const EarthView::World::Spatial::Geometry::IGeometry* geometry, EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& dirE,ev_uint32 altitudeMode,ev_real64 altitude);
				ev_void calculateEDirection( const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Math::CVector3& srPoint,const EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& dirE );
				
				EarthView::World::Spatial::Math::CMatrix4 makeStatisticsTransform(EarthView::World::Spatial::Math::CVector3& pos,EarthView::World::Spatial::Math::CVector3& directX);

				ev_bool find(const EarthView::World::Core::IntVector& ids,ev_uint32 id);

ev_internal:
				ev_bool appendMovableObject(EarthView::World::Graphic::CMovableObject* mo);

ev_private:
				virtual void releaseText(list<CMultiGeometry3DExtension::pos_movable>& needRelease);
				virtual void unloadText(list<CMultiGeometry3DExtension::pos_movable>& needUnload);
				virtual void updateByCameraInWorkqueue(list<pos_movable>& needRelease,list<pos_movable>& needAttach);
				virtual void loadText(list<pos_movable>& needAttach);
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CMultiGeometry3DExtension(const CMultiGeometry3DExtension& obj);				
				
			protected:
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*mpListener;		

				//不可以为静态，因为可能同时存在多种扩展类型
/*				friend class CRenderGeometryExtensionListener;
				CRenderGeometryExtensionListener* mpRenderListener;		*/		
				//static  CRenderQueueGeometryExtensionListener* msRenderListener;
				EarthView::World::Geometry3D::CGeoEntity* mpGeoEntity;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				ev_bool mbDrawWireBox;

				EVString msResourceGroupName;//用所属layer的name

				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;

				ev_bool mIsRendering;

				EarthView::World::Spatial::Math::CVector3 mOriginPoint;
				ev_bool mbOriginCalculated;
				ev_bool mbNeedCalculateOrigin;

				ev_bool mbDenseInterpolation;
			
				ev_real64 mLabelVisibleDistance;

				CGeoStatistics3DExtension* mStatisticsExtension;
				list<EarthView::World::Spatial::Math::CMatrix4> mStatisticsPositions;

				ev_bool mbFilterVisibility;
				EarthView::World::Core::IntVector mFilterIDs;

				ev_int32 mLevel;
				Real mAltitudePrecision;
				Real mMaxVDis;
				Real mMinVDis;
								
				Real mdProjOffset;
				Real mdEffectiveAngle;
				ev_bool mbUseStencil;
				ev_bool mbUseProjOffset;

				Real mdLabelProjOffset;
				Real mdLabelEffectiveAngle;
				ev_bool mbLabelUseProjOffset;

				CRenderableGeometryExtensionListener* mRenderableListener;

				map<EarthView::World::Graphic::CSubEntity*,ev_uint8> mStencilRenderables;

				GetHeightMode mGetHeightMode;
				Real mSelfAdptMinLon;
				Real mSelfAdptMaxLon;
				Real mSelfAdptMinLat;
				Real mSelfAdptMaxLat;

				EarthView::World::Spatial::Math::CVector3 mSelfAdptCenter;
				Real mSelfAdptRadius;

				Real mSamplesPerDegrees;
			};	

			//扩展对象中的线程
			class CGeometryExtensionBackgroundWorkManager;
			class CGeometryExtensionBackgroundWorkQueue : public EarthView::World::Core::CBackgroundQueue
			{
				friend class CGeometryExtensionBackgroundRequestHandler;
				friend class CGeometryExtensionBackgroundResponseHandler;
			public:				
				class  GeometryExtensionBackgroundRequest : public EarthView::World::Core::CWorkQueue::RequestPara
				{
				public:
					ev_uint32 requestType;
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* pExtension;
					list<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> needRelease;
				public:
					GeometryExtensionBackgroundRequest()
					{
						requestType = 0;
						pExtension = NULL;
					}
					virtual ~GeometryExtensionBackgroundRequest()
					{

					}
ev_private:
					friend std::ostream &operator <<( std::ostream &o, const GeometryExtensionBackgroundRequest &res )
					{
						o << "loadentity request" <<endl;
						return o;
					}
					virtual ev_bool operator<(const EarthView::World::Core::CWorkQueue::RequestPara& rhs) const;
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::RequestPara* clone()const
					{
						GeometryExtensionBackgroundRequest* req = new GeometryExtensionBackgroundRequest();
						*req = *this;
						return req;
					}
				};

				class  GeometryExtensionBackgroundResponse : public EarthView::World::Core::CWorkQueue::ResponsePara
				{
				public:
					GeometryExtensionBackgroundResponse()
					{
					}

					virtual ~GeometryExtensionBackgroundResponse(){}
ev_private:
					friend std::ostream &operator <<( std::ostream &o, const GeometryExtensionBackgroundResponse &res )
					{
						o << "loadentity response" <<endl;
						return o;
					}
				public:
					list<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> needUnload;
					list<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> needAttach;
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
					{
						GeometryExtensionBackgroundResponse* rsp = new GeometryExtensionBackgroundResponse();
						*rsp = *this;
						return rsp;
					}
				};

				class  CGeometryExtensionBackgroundRequestHandler : public EarthView::World::Core::CWorkQueue::CRequestHandler
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CGeometryExtensionBackgroundRequestHandler(EarthView::World::Core::CNameValuePairList* pList){}
				private:
					EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* mpParent;
				public:
					CGeometryExtensionBackgroundRequestHandler(EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* parent);
					virtual ~CGeometryExtensionBackgroundRequestHandler();

					/// <summary>
					/// 处理当前的请求
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="request">传递的请求</param>
					/// <returns>响应</returns>
					virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

					/// <summary>
					/// 这个hanler是否能处理当前传过来的响应
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="request">传递的请求</param>
					/// <returns>能否响应</returns>
					virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

				};

				class  CGeometryExtensionBackgroundResponseHandler : public EarthView::World::Core::CWorkQueue::CResponseHandler
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CGeometryExtensionBackgroundResponseHandler(EarthView::World::Core::CNameValuePairList* pList){}
				private:
					EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* mpParent;
				public:
					CGeometryExtensionBackgroundResponseHandler(EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* parent);
					virtual ~CGeometryExtensionBackgroundResponseHandler();

					/// <summary>
					/// 这个hanler是否能处理当前传过来的响应
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="response">传递的响应</param>
					/// <returns>是否能处理</returns>
					virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);

					/// <summary>
					/// 处理当前的响应，具体请求模型数据+模型关联资源数据
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="response">传递的响应</param>
					/// <returns></returns>
					virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				};

			protected:
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);

				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

				//void registerRequest(ev_uint64 filter,ev_uint64 ticket);
				//void unregisterRequest(ev_uint64 filter,ev_uint64 ticket);
			private:
				static EVString msBackgroundQueueGroupName;
				static EVString msBackgroundQueueName;

				CGeometryExtensionBackgroundRequestHandler* mpRequestHandle;
				CGeometryExtensionBackgroundResponseHandler* mpResponseHandle;

				static EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* mpSingletonPtr;

				ev_uint32 mChannel;

				/*EarthView::World::Core::CRecursiveMutex mRequestLock;
				typedef map< ev_uint64, set<ev_uint64> > RequestMap;
				RequestMap mRequestIDs;*/

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeometryExtensionBackgroundWorkQueue();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometryExtensionBackgroundWorkQueue(EarthView::World::Core::CNameValuePairList* pList){}
			public:
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkQueue* getSingletonPtr();

				/// <summary>
				/// 析构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void releaseSingleton();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGeometryExtensionBackgroundWorkQueue();

				/// <summary>
				///向队列里增加一个数据的请求
				/// </summary>
				/// <param name="request">请求的内容</param>
				/// <returns>请求的结果</returns>
				virtual ev_uint64 addRequest(GeometryExtensionBackgroundRequest& request);

				/// <summary>
				/// 获取线程队列的组名
				/// </summary>
				/// <param name=""></param>
				/// <returns>线程队列的组名</returns>
				virtual EVString getGroupName() const;

				/// <summary>
				///获取线程队列的名字，不可重复
				/// </summary>
				/// <param name=""></param>
				/// <returns>线程队列的名字</returns>
				virtual EVString getName() const;

				/// <summary>
				///启动线程队列，针对同类型的channel可能有多个，所以手动指定优先级
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void initialise();

				/// <summary>
				///关闭线程队列
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void shutdown();
				/// <summary>
				///中断请求
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void abortRequest(ev_uint64 ticket);
				//oid abortRequestByFilter(ev_uint64 filter);
				/// <summary>
				/// 判断指定的请求是否全部结束
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				//ev_bool isProcessCompleted(ev_uint64 filter);

				ev_uint64 requestReleaseTexts(EarthView::World::Geometry3D::CMultiGeometry3DExtension* pExtension,list<CMultiGeometry3DExtension::pos_movable>& needRelease);

				ev_uint64 updateExtensionByCamera(EarthView::World::Geometry3D::CMultiGeometry3DExtension* pExtension);

				ev_uint32 getWorkQueueChanel();
			};

			class CGeometryExtensionBackgroundQueueListener : public EarthView::World::Graphic::CFrameListener
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometryExtensionBackgroundQueueListener(EarthView::World::Core::CNameValuePairList* pList);
			private:
				CGeometryExtensionBackgroundWorkManager* mpParent;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pParent">模型管理器对象</param>
				/// <returns></returns>

				CGeometryExtensionBackgroundQueueListener(CGeometryExtensionBackgroundWorkManager* ref_pParent);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				virtual ~CGeometryExtensionBackgroundQueueListener();

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>成功返回true否则返回false</returns>
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
			};

			class CGeometryExtensionWorkQueue : public EarthView::World::Core::CDefaultWorkQueue
			{
			public:
				CGeometryExtensionWorkQueue(const EVString &name);
				CGeometryExtensionWorkQueue();
				virtual ~CGeometryExtensionWorkQueue();				

				ev_bool isQueueRunningByFilter(ev_uint16 channel,ev_uint64 filter);

			};

			class EV_GEOMETRY3D_DLL CGeometryExtensionBackgroundWorkManager : public EarthView::World::Core::CAllocatedObject
			{
				friend class CGeometryExtensionBackgroundWorkQueue;
				friend class CGeometryExtensionBackgroundQueueListener;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometryExtensionBackgroundWorkManager(EarthView::World::Core::CNameValuePairList* pList){}
			private:
				CGeometryExtensionBackgroundWorkManager();

				static CGeometryExtensionBackgroundWorkManager* mpSingletonPtr;
				CGeometryExtensionWorkQueue* mpWorkQueue;
				CGeometryExtensionBackgroundQueueListener* mpListener;

				ev_bool mbInit;

			public:
				virtual ~CGeometryExtensionBackgroundWorkManager();

				static CGeometryExtensionBackgroundWorkManager* getSingletonPtr();

				static void releaseSingleton();

				void init();

				EarthView::World::Core::CWorkQueue* getWorkQuque();
			};
		}
	}
}
#endif
