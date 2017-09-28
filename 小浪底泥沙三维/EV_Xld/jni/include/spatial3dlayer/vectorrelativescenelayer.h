#ifndef CVECTORRELATIVESCENELAYER_H
#define CVECTORRELATIVESCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <graphic/common.h>
#include <spatialinterface/ifeatureclass.h>
#include "spatialinterface/ilabelproperty.h"
#include "mathengine/axisalignedbox.h"
#include <spatialobject/geoobject.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/irelativescenelayer.h"

#include "geometry3d/geometry3dextension/geoentity.h"
#include "geometry3d/globemovabletext.h"
#include <spatialobject/geometry/geometrycollection.h>

#include "spatial3ddataset/vectoroctreedataset.h"

#include "spatial3dlayer/vectoroctreecachepublisher.h"
#include "spatial3dlayer/featuregrouplayer.h"


namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class CEntity;
			class COctreeCamera;
		}

		namespace Geometry3D
		{
			class CMultiGeometry3DExtension;
			class CGeoStatistics3DExtension;
		}

		namespace Spatial{
			namespace Octree{
				class CBaseOctree;
			}

			class VectorOctreeCacheAccessor;
			class VectorOctreeCacheSyncAccessor;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class CVectorOctreeManager;
				class CRelativeLayerUpdator;
				class CSelectedGeometryStringInterface;
				struct pos_movable;
				struct pos_dis;
				struct OctreeNode_Box;
				/// <summary>
				/// 非贴地层-二维矢量数据，来自数据库或文件
				/// 管理非贴地层-二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL CVectorRelativeSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorRelativeSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorRelativeSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorRelativeSceneLayer(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVectorRelativeSceneLayer();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					virtual ev_void setVisible_impl(ev_bool visible);
					/// <summary>
					/// 获取注记可见距离
					/// </summary>
					ev_real64 getLabelVisibleDistance();

					/// <summary>
					/// 获取推荐的注记可见距离
					/// </summary>
					ev_real64 getSuggestLabelVisibleDistance();
					///<summary>
					///获取该图层所在的图层组
					///</summary>
					/// <param name=""></param>
					/// <returns>图层所在的图层组</returns>
					EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* getParent();
					///<summary>
					///设置该图层所在的图层组
					///</summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setParent(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* parent);
					/// <summary>
					/// 判断图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>有效返回true,否则返回false</returns>
					/// <summary>
					virtual ev_bool isValid() const;
					/// <summary>
					/// 设置图层注记可见距离
					/// </summary>
					/// <param name="dis">可见距离</param>
					virtual ev_void setLabelVisibleDistance(ev_real64 dis);
					/// <summary>
					/// 获知扩展对象可视级别，距离与包围盒大小的比例
					/// </summary>
					virtual ev_real32 getVisibleDistinction();
					/// <summary>
					/// 设置扩展对象可视级别，距离与包围盒大小的比例
					/// </summary>
					/// <param name="dis">距离与包围盒大小的比例</param>
					virtual ev_void setVisibleDistinction(ev_real32 dis);

					/// <summary>
					/// 获知八叉树可见距离
					/// </summary>
					virtual ev_real32 getVisibleOctreeDistance();
					/// <summary>
					/// 设置八叉树可见距离
					/// </summary>
					/// <param name="dis">距离与包围盒大小的比例</param>
					virtual ev_void setVisibleOctreeDistance(ev_real32 dis);

					/// <summary>
					/// 设置对象可见的相机距地面的距离条件
					/// </summary>
					ev_void setVisibleDistanceBetweenCameraAndGround(ev_bool bMinEnabled,ev_real64 minDistance,ev_bool bMaxEnabled,ev_real64 maxDistance);
					/// <summary>
					/// 获知对象可见的相机距地面的距离条件
					/// </summary>
					ev_void getVisibleDistanceBetweenCameraAndGround(ev_bool& bMinEnabled,ev_real64& minDistance,ev_bool& bMaxEnabled,ev_real64& maxDistance);

					/// <summary>
					/// 设置注记偏移效果的最大相机倾角
					/// </summary>
					/// <param name="angle">最大相机倾角</param>
					/// <returns></returns>
					virtual ev_void setLabelProjOffsetMaxAngle(Real angle);

					/// <summary>
					/// 注记偏移效果的最大相机倾角
					/// </summary>
					/// <param name="angle">最大相机倾角</param>
					/// <returns></returns>
					virtual Real getLabelProjOffsetMaxAngle();

					/// <summary>
					/// 获得数据集
					/// </summary>
					/// <returns>数据集指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 设置与图层所关联的数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// 更换数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					virtual ev_void switchDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// 获取矢量的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>矢量的类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 复制图层
					/// </summary>
					/// <returns>图层指针</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;		

					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 取消绑定二维图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void detachLayer();
					/// <summary>
					/// 获取专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 设置可选择性
					/// </summary>
					virtual ev_void setSelectable(ev_bool selectable);

					/// <summary>
					///设置图层高亮选择集
					/// </summary>
					/// <param name="selection">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					/// <summary>
					/// 设置图层里的选择对象的颜色
					/// </summary>
					/// <param name="colour">颜色</param>
					/// <returns></returns>
					ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );

					/// <summary>
					/// 获得图层里所有选择对象的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getSelectionColour()const;

					/// <summary>
					/// 获取图层标签属性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层标签属性</returns>
					EarthView::World::Spatial::Display::ILabelProperty* getLabelProperty() const;
					/// <summary>
					/// 设置注记属性
					/// </summary>
					/// <param name="labelproperty">注记属性</param>
					/// <returns></returns>
					ev_void setLabelProperty(const EarthView::World::Spatial::Display::ILabelProperty* labelproperty);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;					
					/// <summary>
					/// 设置条件可见性,ids为空时表示忽略条件可见性，恢复到最原始的状态
					/// </summary>
					/// <param name="visible">指定的ids是否可见</param>
					/// <param name="ids">指定的ids</param>
					/// <returns></returns>
					ev_bool setDisplayFilter(ev_bool visible,  EarthView::World::Core::IntVector ids);
					/// <summary>
					/// 获取条件可见性
					/// </summary>
					/// <param name="visible">指定的ids是否可见</param>
					/// <param name="ids">指定的ids</param>
					/// <returns></returns>
					ev_bool getDisplayFilter(ev_bool& visible,EarthView::World::Core::IntVector& ids);

					/// <summary>
					/// 设置图层显示过滤条件
					/// </summary>
					/// <param name="filter">过滤条件</param>
					/// <returns></returns>
					ev_void setDisplayFilter(const EVString & filter);
					/// <summary>
					/// 获取图层显示过滤条件
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回过滤条件</returns>
					EVString getDisplayFilter() const;

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
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;					

					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

				protected:
					/// <summary>
					/// 矢量扩展
					/// </summary>
					/// <param name="needBuildNodes">需要建立的节点</param>
					/// <param name="needLoadExtensions">需要加载的扩展</param>
					/// <param name="needReleases">需要是否的节点</param>
					/// <returns>是否成功</returns>
					virtual bool processGeometryExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension*& geoExtension);				
					/// <summary>
					/// 矢量扩展注记
					/// </summary>
					/// <param name="labelUpdate">注记更新</param>
					/// <returns>是否成功</returns>
					virtual bool processLabels(EarthView::World::Geometry3D::CMultiGeometry3DExtension* labelUpdate);
					/// <summary>
					/// 相机刷新时处理函数
					/// </summary>
					/// <param name="cam">相机</param>
					/// <param name="force">是否强制刷新</param>
					/// <returns></returns>
					virtual ev_void _processByCamera(EarthView::World::Graphic::COctreeCamera* cam, ev_bool force);
			
					/// <summary>
					/// 加载扩展对象
					/// </summary>
					/// <param name="mapNeedLoad">扩展对象</param>
					/// <returns></returns>
					ev_void loadExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension* needLoad);
					/// <summary>
					/// 挂接注记
					/// </summary>
					/// <param name="labelUpdate">注记更新</param>
					/// <returns>是否成功</returns>
					virtual bool loadLabels(EarthView::World::Geometry3D::CMultiGeometry3DExtension* labelLoad);

					bool processStatisticsEx(const EVString& nodeCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension* updateEx,ev_bool recreateEx,ev_bool recreateLabel);
					bool loadStatisticsEx( EarthView::World::Geometry3D::CMultiGeometry3DExtension* loadEx,ev_bool recreateEx,ev_bool recreateLabel);
					
					/// <summary>
					/// 获取可见的八叉树节点
					/// </summary>
					/// <param name="cam">相机</param>
					/// <param name="listNodeCode">可见的八叉树节点</param>
					/// <returns></returns>
					ev_void findVisibleOctreeNode(list<OctreeNode_Box>& visibleNodes);
					ev_void buildVisibleGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleases,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdates);
					ev_void updateGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleases,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdates);
					/// <summary>
					/// 遍历八叉树，找出可见的对象
					/// </summary>
					/// <param name="camera">照相机</param>
					/// <param name="octant">八叉树</param>
					/// <param name="foundvisible">是某可见</param>
					/// <param name="listNodeCode">可见八叉树节点</param>
					/// <returns></returns>
					ev_void walkOctree( EarthView::World::Graphic::COctreeCamera* cam, EarthView::World::Spatial::Octree::CBaseOctree *octant, ev_bool foundvisible,_inout list<OctreeNode_Box>& listNodeCode,ev_int32 altiMode,Real height);
					/// <summary>
					/// 停止请求
					/// </summary>
					void stopLayerRequests();
					
					ev_void calcuEnvelope();

				protected:
					friend class CVectorOctreeCachePublisher;
					CVectorOctreeCachePublisher* mPublisher;
					ev_bool publish(const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);
					void stopPublish();
					ev_void setGeometryObjectWithFeature(EarthView::World::Spatial3D::Atlas::CGeometryObject& obj,EarthView::World::Spatial::Display::ISymbol* sym,EarthView::World::Spatial::GeoDataset::IFeature* feature,const EarthView::World::Core::StringVector& fieldNames);
					void recursivePublishOctree(EarthView::World::Spatial::Octree::CBaseOctree* octree,EarthView::World::Spatial::GeoDataset::IDataset* pDataset,const CVector3DCacheFieldVector& fieldNames);
				public:
					/// <summary>
					/// 重新创建空间索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否成功</returns>
					virtual ev_bool rebulidSpatialIndex();
					/// <summary>
					/// 删除空间索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否成功</returns>
					virtual ev_bool deleteSpatialIndex();
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
				public:
					
					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// 数据集更新事件的通知
					/// </summary>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					/// <summary>
					/// 返回图层地理范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层地理范围</returns>
					const EarthView::World::Spatial::Geometry::CEnvelope& getGeoExtent() const;

					/// <summary>
					/// 更新注记
					/// </summary>
					/// <param name="updateTextStyle">是否更新字体属性</param>
					/// <param name="reCreate">是否重新构建</param>
					/// <returns></returns>
					ev_void updateLabel(ev_bool updateTextStyle,ev_bool reCreate);
					/// <summary>
					/// 更新统计专题图的注记
					/// </summary>
					/// <param name="reCreate">是否重新构建</param>
					/// <returns></returns>
					ev_void updateStaticsTheme(ev_bool recreateEx,ev_bool updateTextStyle,ev_bool reCreateLabel);
					/// <summary>
					/// 更新stringinterface
					/// </summary>
					/// <param name="ref_geoent">扩展实体</param>
					/// <returns></returns>
					const EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* updateStringInterface(EarthView::World::Geometry3D::CGeoEntity* ref_geoent);
ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
			
ev_private:
					void notifyAbortLayerRequest();
					static ev_void clearCache(const EVString& sceneManagerName,const EVString& datasourceName,const EVString& datasetName);
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CVectorRelativeSceneLayer);
				protected:
					void init();

					size_t readGeoIndexFromStream(EarthView::World::Core::MemoryDataStreamPtr& meshStream,EarthView::World::Spatial::CGeoObject& geoObject);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* createGeometryExtension();
					ev_bool createEntityFromStream(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension,EarthView::World::Core::MemoryDataStreamPtr& meshStream,const EVString& name);
					ev_void initDefaultTheme();
					ev_bool judgeTheme(EarthView::World::Core::MemoryDataStreamPtr& themeStream);
					ev_bool judgeFieldName(EarthView::World::Core::MemoryDataStreamPtr& themeStream);
					ev_void readIDs(EarthView::World::Core::MemoryDataStreamPtr& ids,EarthView::World::Core::IntVector& lstids);

					ev_void releaseExtension(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
					ev_void releaseExtension(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& extensions);

					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processPointExtension(const EVString& nodeCode);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processPointLocalCache(const EVString& nodeCode,EarthView::World::Core::MemoryDataStreamPtr& themeStream,EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Core::IntVector& vecIDs);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processPointVectorLayer(const EVString& nodeCode,EarthView::World::Spatial::Display::ISymbol* symbol,ev_bool exist,EarthView::World::Core::MemoryDataStreamPtr& IDs,EarthView::World::Core::IntVector& vecIDs,ev_real32 mMINX,ev_real32 mMAXX,ev_real32 mMINY,ev_real32 mMAXY,ev_real32 mMINZ,ev_real32 mMAXZ);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processLocalCache(const EVString& nodeCode,EarthView::World::Core::IntVector& vecIDs,EarthView::World::Core::MemoryDataStreamPtr& meshMemory);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processVectorLayer(const EVString& nodeCode,ev_bool exist,EarthView::World::Core::MemoryDataStreamPtr& IDs,EarthView::World::Core::IntVector& vecIDs,ev_real32 mMINX,ev_real32 mMAXX,ev_real32 mMINY,ev_real32 mMAXY,ev_real32 mMINZ,ev_real32 mMAXZ);
					EarthView::World::Spatial::Geometry::CGeometryCollection* parseGeometrys(const EVString& nodeCode,vector<ev_uint32>& EVIDs);
					EVString readString(EarthView::World::Core::MemoryDataStreamPtr& stream);
					ev_void writeString(const EVString& string,EarthView::World::Core::CDataStream& stream);

					ev_void setSymbolWithFeature(EarthView::World::Spatial::Display::ISymbol* sym,EarthView::World::Spatial::GeoDataset::IFeature* feature);

					//1:点、2：线、3：面
					ev_uint8 disVectorType();

					ev_void parseUniqueField(EarthView::World::Core::MemoryDataStreamPtr& fieldValuesStream,map<ev_uint32,EVString>& values);
					ev_void parseRangeField(EarthView::World::Core::MemoryDataStreamPtr& fieldValuesStream,map<ev_uint32,ev_real64>& values);

					ev_void updataLabelFromDB(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension,ev_bool reCreate);
					ev_void updataLabelFromCache(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension,ev_bool reCreate);

					EarthView::World::Spatial::Display::ISymbol* getThemeSymbol(const EarthView::World::Spatial::Theme::ITheme* theme,EarthView::World::Spatial::GeoDataset::IFeature* feature);
					ev_void getTopBottomHeight(ev_uint32 vectorType,EarthView::World::Spatial::GeoDataset::IFeature* feature,EarthView::World::Spatial::Display::ISymbol*symbol,ev_real32 height,ev_real32& topH,ev_real32& bottomH);
						 
					ev_bool symbolEqualOnSpatial(EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Spatial::Display::ISymbol* otherSymbol);
					ev_bool themeEqualOnSpatial(const EarthView::World::Spatial::Theme::ITheme* theme,const EarthView::World::Spatial::Theme::ITheme* otherTheme);

					/// <summary>
					/// 重新创建空间索引
					ev_bool reCreateOctree();
					ev_uint32 calculateOctreeDepth(EarthView::World::Spatial::Math::CAxisAlignedBox& box,ev_uint32 recordCount,ev_uint8 vectorType);

					ev_void updateDatasetInfo(EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					ev_void updateProjectManagerWithSymbol(EarthView::World::Spatial::Display::ISymbol* symbol, const EVString& name, ev_bool addSymbol) const;
					ev_void updateProjectManagerWithTheme(ev_bool addSymbol) const;

					void forceStopOctreeCreating();

					friend class CVectorRelativeSceneLayerFactory;
					friend class CExtensionBackgroundQueue;
				protected:
					/// <summary>
					/// 专题图
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* mpTheme;					
					EarthView::World::Core::CReadWriteLock mThemeLock;//theme锁
					
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;

					/******************
					八叉树索引
					******************/
					mutable EarthView::World::Core::CRecursiveMutex mOctreeManagerMutex;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeManager* mpOctreeMnger;

					mutable EarthView::World::Core::CRecursiveMutex mOctreeStatusMutex;
					ev_int8 mOcreeStatus;//0表示没有八叉树，1表示发送了创建请求但还未开始创建，2表示正在创建八叉树，3表示创建八叉树完毕

					EarthView::World::Core::CReadWriteLock mExtensionLock;
					map<EVString,EarthView::World::Geometry3D::CMultiGeometry3DExtension*> mCurrentExtensions;					
					set<EVString> mLoadingExtensons;

					//mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
					//EarthView::World::Graphic::COctreeCamera* mpCacheCamera;

					EarthView::World::Core::CReadWriteLock mCreatingOctreeAbortFlagLock;
					ev_bool mbCreatingOctreeAbortFlag;

					ev_void copyCameraParams(EarthView::World::Graphic::COctreeCamera& camera)const;

					EarthView::World::Spatial::Geometry::EVGeometryType mVectorType;
					EarthView::World::Spatial::Geometry::EVGeometryType mOldVectorType;

					ev_bool mbStencilEnabled;

					Real mLabelProjOffsetMaxAngle;

					ev_bool mbMinEnabled;
					ev_real64 mMinCam2Ground;
					ev_bool mbMaxEnabled;
					ev_real64 mMaxCam2Ground;

					ev_bool mbPublishStoped;

				//private:
				protected:
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpFeatureClass;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
					EarthView::World::Core::MemoryDataStreamPtr mpThemeDataStream;

					EVString mCacheDatasetName;	
					EVString mDatasetName;
					EVString mDataSourceName;
					/// <summary>
					/// 图层选择要素集合
					/// </summary>
					EarthView::World::Spatial::Atlas::ILayerSelection* mpSelectionSet;

					EarthView::World::Core::CReadWriteLock mLabelVisibleDisLock;
					ev_real64 mLabelVisibleDistance;

					EarthView::World::Core::CReadWriteLock mLabelPropertyLock;//labelProperty锁
					EarthView::World::Spatial::Display::ILabelProperty* mpLabelProperty;

					EarthView::World::Graphic::CColourValue mSelectionColour;

					EarthView::World::Core::CReadWriteLock mVisibleDistinctionLock;
					ev_real64 mVisibleDistinction;
					ev_real64 mVisibleOctreeDistance;

					ev_real64 mdStatisticsMaxValue;
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);

					EarthView::World::Geometry3D::CGeoStatistics3DExtension* buildStatisticsExtension(list<EarthView::World::Core::IntVector>& listIDs,EarthView::World::Geometry3D::CMultiGeometry3DExtension* geoExtension,EarthView::World::Core::IntVector& vecIDs,ev_bool bCache,ev_uint32& preSize,EarthView::World::Core::MemoryDataStreamPtr& meshMemory);

					mutable EarthView::World::Core::CRecursiveMutex mFilterVisibilityMutex;//dataset锁
					ev_bool mbFilterVisibility;
					EarthView::World::Core::IntVector mFilterIDs;
					EVString msFilter;

					friend class CRelativeLayerUpdator;
					CRelativeLayerUpdator* mUpdator;

					EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* mpStringInterface;
					EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer *mpParent;
				};

				/// <summary>
				/// 非贴地二维矢量数据Scenelayer的类工厂
				/// 管理非贴地二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL CVectorRelativeSceneLayerFactory:public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorRelativeSceneLayerFactory(EarthView::World::Core::CNameValuePairList*pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorRelativeSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVectorRelativeSceneLayerFactory();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <returns>实例指针</returns>			
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <returns>工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);					

				public:
					static const EVString msSceneLayerFactoryName;
				};			

			}
		}
	}
}
#endif
