#ifndef _VECTORDBCLAMPSCENELAYER_H_
#define _VECTORDBCLAMPSCENELAYER_H_

#include "spatial3dlayer/3dlayerconfig.h"

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <core/datastream.h>

#include "mathengine/axisalignedbox.h"

#include "geometry3d/iclampscenelayer.h"
#include "geometry3d/globemovabletext.h"

#include "spatialinterface/ilabelproperty.h"
#include <spatialobject/geometry/linestring.h>
#include <spatialobject/geometry/geometrycollection.h>
#include <spatialinterface/igeometry.h>
#include "spatial3dlayer/vectoroctreecachepublisher.h"

namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class COctreeCamera;
			class CTextureTextStyle;
		}

		namespace Geometry3D
		{
			class CGeoStatistics3DExtension;
		}

		namespace Spatial{		
			namespace GeoDataset
			{
				class IFeatureSelection;
			}
			namespace Octree{
				class CBaseOctree;
			}

			namespace Utility
			{
				class CSpatialReference;
			}

			namespace Display
			{
				class CTextSymbol;
				class CStatistics3DSymbol;
				class CSpatialDisplay;
			}
		}
	}
}


namespace EarthView{
    namespace World{
        namespace Spatial3D{
            namespace Atlas{

				class CFeatureGroupLayer;
				class CLabelBackgroundQueue;
				class CVectorOctreeManager;
				class CClampLayerUpdator;
				class CSelectedGeometryStringInterface;
				struct pos_movable;
				struct pos_dis;
				struct OctreeNode_Box;
				struct Pos_Dir;
				/// <summary>
				/// 贴地矢量图层
				/// 管理贴地矢量
				/// </summary>
                class EV_3DLAYER_DLL CVectorDBClampSceneLayer : public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
                    CVectorDBClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CVectorDBClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
                    CVectorDBClampSceneLayer(const EVString& layername);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CVectorDBClampSceneLayer();
                public:
                    /// <summary>
                    /// 绑定一个二维图层
                    /// </summary>
                    /// <param name="layer">二维图层</param>
                    /// <returns></returns>
                    virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

                    /// <summary>
                    /// 获取图层的类型
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>图层的类型</returns>
                   virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 获取矢量类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>矢量类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
                    virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="minX">瓦片经纬度范围minX</param>
					/// <param name="minY">瓦片经纬度范围minY</param>
					/// <param name="maxX">瓦片经纬度范围maxX</param>
					/// <param name="maxY">瓦片经纬度范围maxY</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);
					
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
										
					/// <summary>
					/// 获取瓦片最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取瓦片最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置瓦片最大级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);

					/// <summary>
					/// 获取注记最大可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记最大可视距离</returns>
					ev_real64 getMaxLabelVisibleDistance();

					/// <summary>
					/// 获取推荐的注记最大可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>推荐的最大可视距离</returns>
					ev_real64 getSuggestMaxLabelVisibleDistance();
					
					/// <summary>
					/// 设置注记最大可视距离
					/// </summary>
					/// <param name="dis">注记最大可视距离</param>
					/// <returns></returns>
					ev_void setMaxLabelVisibleDistance(ev_real64 dis);
					/// <summary>
					/// 获取注记最小可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记最小可视距离</returns>
					ev_real64 getMinLabelVisibleDistance();
					/// <summary>
					/// 设置注记最小可视距离
					/// </summary>
					/// <param name="dis">注记最小可视距离</param>
					/// <returns></returns>
					ev_void setMinLabelVisibleDistance(ev_real64 dis);

					/// <summary>
					/// 设置注记偏移效果的最大相机倾角
					/// </summary>
					/// <param name="angle">最大相机倾角</param>
					/// <returns></returns>
					ev_void setLabelProjOffsetMaxAngle(Real angle);

					/// <summary>
					/// 注记偏移效果的最大相机倾角
					/// </summary>
					/// <param name="angle">最大相机倾角</param>
					/// <returns></returns>
					Real getLabelProjOffsetMaxAngle();

					/// <summary>
					/// 获取注记可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns>可见性</returns>
					ev_bool getLabelVisible() const;
					/// <summary>
					/// 设置注记可见性
					/// </summary>
					/// <param name="vis">可见性</param>
					/// <returns></returns>
					ev_void setLabelVisible(ev_bool vis);
                    /// <summary>
                    /// 获取专题图
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
                    /// <summary>
                    /// 设置专题图
                    /// </summary>
                    /// <param name="theme">专题图</param>
                    /// <returns></returns>
                    virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 获取专题图流
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断专题图流是否相等
					/// </summary>
					/// <param name="stream">风格流</param>
					/// <returns>相等返回true，否则false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);

					/// <summary>
					/// 返回图层透明度
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明度</returns>
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);

					/// <summary>
					/// 设置是否可选择
					/// </summary>
					/// <param name="selectable">可选择性</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);
					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );
					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取图层选择记录集
					/// </summary>
					/// <param name=""></param>
					/// <returns>选择记录集</returns>
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* getFeatureSelection() const;
					
					/// <summary>
					/// 获取图层选择风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>选择风格</returns>
					EarthView::World::Spatial::Display::ISymbol* getSelectionSymbol() const;
					/// <summary>
					/// 获取图层选择记录集
					/// </summary>
					/// <param name="">选择风格</param>
					/// <returns></returns>
					void setSelectionSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);
					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	

                    /// <summary>
                    /// 序列化成xml文本
                    /// </summary>
                    /// <param name=""></param>   
                    /// <returns></returns>					
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;	
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
                    virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
                    virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
					/// <summary>
					/// 数据集更新事件的通知
					/// </summary>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					/// <summary>
					/// 更新助记属性
					/// </summary>
					void  updateTextStyle();

					/// <summary>
					/// 更新统计专题图的注记
					/// </summary>
					/// <param name="reCreate">是否重新构建</param>
					/// <returns></returns>
					ev_void updateStaticsThemeLabel(ev_bool updateTextStyle,ev_bool reCreate);
					/// <summary>
					/// 获取专题图最大可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题图最大可视距离</returns>
					virtual ev_real64 getMaxStaticsThemeVisibleDistance();
					/// <summary>
					/// 设置专题图最大可视距离
					/// </summary>
					/// <param name="dis">专题图最大可视距离</param>
					/// <returns></returns>
					virtual ev_void setMaxStaticsThemeVisibleDistance(ev_real64 dis);

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
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);  
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
					/// 更新stringinterface
					/// </summary>
					/// <param name="id">记录的id</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* updateStringInterface(ev_uint32 id);
					
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

				ev_private:
					static ev_void clearCache(const EVString& sceneManagerName,const EVString& datasourceName,const EVString& datasetName);
               
					void notifyAbortLayerRequest();
				protected:
					friend class CFeatureGroupLayer;
					void setDrawingState(ev_bool bDrawing);			
				protected:
					friend class CVectorOctreeCachePublisher;
					CVectorOctreeCachePublisher* mPublisher;
					ev_bool publish(const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);
					void stopPublish();
					void recursivePublishOctree(EarthView::World::Spatial::Octree::CBaseOctree* octree,EarthView::World::Spatial::GeoDataset::IDataset* pDataset,const CVector3DCacheFieldVector& fieldNames);
                private:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="obj">对象</param>
                    /// <returns></returns>
                    C_DISABLE_COPY(CVectorDBClampSceneLayer);

                protected:
					ev_void calcuEnvelope();

					virtual ev_bool rebulidSpatialIndex();
					virtual ev_bool deleteSpatialIndex();

					/// <summary>
					/// 
					/// </summary>
					/// <param name="layer"></param>
					/// <param name="cam"></param>					
					/// <returns></returns>
					ev_bool buildLabel(const EVString& buildNode,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedAttach);
					
					ev_bool updateLineLabel(const EVString& updateNode,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedUpdate,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);
					ev_bool updateLabel(const EVString& updateNode,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedAttach,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);

					ev_void processAttach(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedAttach);
					ev_void processUpdate(const EVString& nodeCode,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedUpdate,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);
					ev_void processRelease(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);
					ev_void processDetach(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedDetach,ev_bool abort = false);

					virtual bool processGeometryExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CGeoStatistics3DExtension*& needLoadExtension);
					ev_void loadExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CGeoStatistics3DExtension* needLoad);
					ev_void releaseExtensions(list<EarthView::World::Geometry3D::CGeoStatistics3DExtension*>& extensions);
					ev_void updateExtensions(list<EarthView::World::Geometry3D::CGeoStatistics3DExtension*>& needReleaseExtensions,list<EarthView::World::Geometry3D::CGeoStatistics3DExtension*>& needUpdateExtensions,ev_bool abort = false);

					EarthView::World::Geometry3D::CGeoStatistics3DExtension* processLocalCache(const EVString& nodeCode,EarthView::World::Core::IntVector& vecIDs,EarthView::World::Core::MemoryDataStreamPtr& meshMemory);
					EarthView::World::Geometry3D::CGeoStatistics3DExtension* processVectorLayer(const EVString& nodeCode,ev_bool exist,EarthView::World::Core::MemoryDataStreamPtr& IDs,EarthView::World::Core::IntVector& vecIDs,ev_real32 mMINX,ev_real32 mMAXX,ev_real32 mMINY,ev_real32 mMAXY,ev_real32 mMINZ,ev_real32 mMAXZ);

					ev_bool getGeometryCenter(const EarthView::World::Spatial::Geometry::IGeometry* geometry, EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& dirE);
					ev_void calculateEDirection(Real lon,Real lat,const EarthView::World::Spatial::Math::CVector3& center,EarthView::World::Spatial::Math::CVector3& dirE);

					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);

					ev_void readIDs(EarthView::World::Core::MemoryDataStreamPtr& ids,EarthView::World::Core::IntVector& lstids,ev_bool considerVisibleFilter);
					ev_void coordinateToCartesian(ev_bool isBestHeight,const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate );
					ev_void calcuPosDis(const EarthView::World::Spatial::Geometry::IGeometry* geometry,vector<vector<pos_dis> >& lstlstPP);
					/// <summary>
					/// 遍历八叉树，找出可见的对象
					/// </summary>
					/// <param name="camera">照相机</param>
					/// <param name="octant">八叉树</param>
					/// <param name="foundvisible">是否可见</param>
					/// <returns></returns>
					ev_void walkOctree( EarthView::World::Graphic::COctreeCamera* cam, EarthView::World::Spatial::Octree::CBaseOctree *octant, ev_bool foundvisible,list<OctreeNode_Box>& listNodeCode,ev_bool lableOctree);
					ev_void findVisibleOctreeNode(list<OctreeNode_Box>& visibleNodes,ev_bool isLableOctree);
					ev_void processVisibleOctreeNode(ev_bool isLableOctree,list<pos_movable>& lstNeedRelease,list<EarthView::World::Geometry3D::CGeoStatistics3DExtension*>& needReleasesStaticTheme,list<EarthView::World::Geometry3D::CGeoStatistics3DExtension*>& needUpdateStaticTheme);
			protected:

                    ev_void initDefaultTheme();

                    //返回值-1表示绘制异常，0表示空白，1表示成功
                    ev_int8 drawImage(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Core::MemoryDataStreamPtr& imageStream);
					ev_int8 drawImage(Real minX,Real minY,Real maxX,Real maxY,ev_bool drawAsTile,EarthView::World::Core::MemoryDataStreamPtr& imageStream);
					EarthView::World::Core::MemoryDataStreamPtr drawBlackImage();

					virtual ev_void _processByCamera(EarthView::World::Graphic::COctreeCamera* cam,LayerRefreshFactor updateType);
    					
					void stopLayerRequests();

					EarthView::World::Graphic::CTextureMovableText* createText(const EarthView::World::Core::ev_wstring& txt);
					EarthView::World::Graphic::CTextureMovableText* createLineTrackText(const EarthView::World::Core::ev_wstring& txt,const EarthView::World::Spatial::Math::CVector3& vecLine);
					//1:点、2：线、3：面
					ev_uint8 disVectorType();

					ev_void dealLabelVisibility(ev_real32 totaloffset, EarthView::World::Spatial::Math::CVector3& lineMid,ev_uint32 txtLength,ev_bool* visibility);
					ev_int32 calLabelDirectiongene(EarthView::World::Spatial::Math::CVector3& lineDir);

					ev_bool createFeatureLineLabel(const EarthView::World::Spatial::Geometry::IGeometry* geometry,const EarthView::World::Core::ev_string& txt,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstTxts,ev_bool isVsible,EarthView::World::Graphic::COctreeCamera* cam,list<pos_movable>& lstNeedAttach,ev_bool* visibility);
					ev_bool createFeaturePolygonLabel(const EarthView::World::Spatial::Geometry::IGeometry* geometry,const EarthView::World::Core::ev_string& txt,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstTxts,ev_bool isVsible,EarthView::World::Graphic::COctreeCamera* cam,list<pos_movable>& lstNeedAttach);

					ev_bool judgeFieldName(const EVString&szFieldName,EarthView::World::Core::MemoryDataStreamPtr& fieldMemory);

					ev_bool judgeTheme(EarthView::World::Core::MemoryDataStreamPtr& themeStream);

					ev_void createLabels(const EVString& nodeCode,map<ev_uint32,list<EarthView::World::Spatial3D::Atlas::pos_movable> >& lstIDPMs,ev_uint32 id,const EarthView::World::Spatial::Geometry::IGeometry* geometry,const EarthView::World::Core::ev_string& label,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstTxts,ev_bool isVsible,EarthView::World::Graphic::COctreeCamera* cam,list<pos_movable>& lstNeedAttach);
					EarthView::World::Spatial::Geometry::CGeometryCollection* parseGeometrys( const EVString& nodeCode,list<EVString>& labels,list<ev_uint32>& ids);

					bool processGeoStatisticsExLabel( EarthView::World::Geometry3D::CGeoStatistics3DExtension* exUpdate );
					bool loadGeoStatisticsExLabel( EarthView::World::Geometry3D::CGeoStatistics3DExtension* exLoad );


					EVString readString(EarthView::World::Core::MemoryDataStreamPtr& stream);
					ev_void writeString(const EVString& string,EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 重新创建空间索引
					ev_bool recreateOctree();
					ev_uint32 calculateOctreeDepth(EarthView::World::Spatial::Math::CAxisAlignedBox& box, ev_uint32 recordCount, ev_uint8 vectorType);

					ev_void updateDatasetInfo(EarthView::World::Spatial::GeoDataset::IDataset* dataset,EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					ev_void setMovablesVisibility(list<EarthView::World::Spatial3D::Atlas::pos_movable>& movables,ev_bool visible);

					void updateVisiblity(ev_bool visible, const EarthView::World::Core::IntVector& ids);

					void releaseOctree();

					void refreshOctree(ev_bool force);

					void forceReleaseLabelsStaticsExtensions(ev_bool releaseLable,ev_bool releaseExtensions);

					void forceStopOctreeCreating();

					ev_bool layoutCheck(EarthView::World::Graphic::CCamera *cam,EarthView::World::Spatial3D::Atlas::pos_movable& pm1,EarthView::World::Spatial3D::Atlas::pos_movable& pm2);
					EarthView::World::Spatial::Geometry::IGeometry* getTextMovablePoints(EarthView::World::Graphic::CMovableObject* mo,EarthView::World::Spatial::Math::CMatrix4& m);
					
					void checkTextMovableVisible(EarthView::World::Graphic::CCamera* cam, const EVString& nodeCode, ev_uint32 id,const EVString&txt, list<Pos_Dir>& lstPosDirs,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedUpdate,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);
					void checkTextMovableVisibleByLayout(EarthView::World::Graphic::CCamera* cam, const EVString& nodeCode, ev_uint32 id,list<EarthView::World::Spatial3D::Atlas::pos_movable>& currLstPms,ev_bool* visibility);
					void checkTextMovableVisibleByLayout(EarthView::World::Graphic::CCamera* cam, ev_uint32 id,list<EarthView::World::Spatial3D::Atlas::pos_movable>& currLstPms,map<ev_uint32,list<EarthView::World::Spatial3D::Atlas::pos_movable> >& lstIDPMs,ev_bool* visibility);
				protected:
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;

					/******************
					八叉树索引
					******************/
					mutable EarthView::World::Core::CReadWriteLock mOctreeManagerLock;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeManager* mpOctreeManager;
					
					mutable EarthView::World::Core::CReadWriteLock mOctreeTypeLock;
					ev_int8 mOctreeType;//0,无八叉树遍历请求,1，注记八叉树请求,2，专题图八叉树请求,3，两种请求

					mutable EarthView::World::Core::CRecursiveMutex mOctreeStatusMutex;
					ev_int8 mOcreeStatus;//0表示没有八叉树，1表示发送了创建请求但还未开始创建，2表示正在创建八叉树，3表示创建八叉树完毕

					EarthView::World::Core::CReadWriteLock mCreatingOctreeAbortFlagLock;
					ev_bool mbCreatingOctreeAbortFlag;

                    EVString mCacheDatasetName;
					EVString mDatasetName;
					EVString mDataSourceName;

					EarthView::World::Core::CReadWriteLock mThemeLock;//theme锁
                    EarthView::World::Spatial::Theme::ITheme* mpTheme;

					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;

					EarthView::World::Core::CReadWriteLock mLableVisibleDistanceLock;//theme锁
					ev_real64 mMaxLabelVisibleDistance;
					ev_real64 mMinLabelVisibleDistance;

					ev_real64 mMaxStatisticVisibleDistance;
	
					EarthView::World::Graphic::CSceneNode* mpLayerNode;

					mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
					EarthView::World::Graphic::COctreeCamera* mpCacheCamera;		
					ev_void copyCameraParams(EarthView::World::Graphic::COctreeCamera& camera)const;

					EarthView::World::Spatial::Geometry::EVGeometryType mVectorType;

					EarthView::World::Core::CReadWriteLock mRenderingLabelsLock;//label锁
					map<EVString,map<ev_uint32,list<EarthView::World::Spatial3D::Atlas::pos_movable> > > mRenderingLabels;//正在渲染的注记
					
					EarthView::World::Core::CReadWriteLock mUpdatingLabelsLock;//label锁
					set<EVString> mUpdatingLabels;//正在更新位置的注记

					EarthView::World::Core::CRecursiveMutex mBuildMutex;//build锁
					set<EVString> mBuildingLabels;//需要创建的注记					

					EarthView::World::Core::CReadWriteLock mExtensionLock;//extension锁
					map<EVString,EarthView::World::Geometry3D::CGeoStatistics3DExtension*> mCurrentExtensions;
					set<EVString> mLoadingExtensons;

					ev_bool mbLabelVisible;
					ev_bool mbStaticTheme;

					EarthView::World::Core::CReadWriteLock mLabelPropertyLock;//labelProperty锁
					EarthView::World::Spatial::Display::ILabelProperty* mpLabelProperty;

					ev_uint8 mTransparent;

					Real mLabelProjOffsetMaxAngle;

					EarthView::World::Graphic::CTextureTextStyle* mTextStyle;
					
					EarthView::World::Core::CReadWriteLock mLayerLock;//dataset锁					

					EarthView::World::Core::CRecursiveMutex mSelectionLock;//选择集锁
					/// <summary>
					/// 图层选择要素集合
					/// </summary>
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* mpFeatureSelection;
					EarthView::World::Spatial::Display::ISymbol* mpSelectionSymbol;

					ev_real64 mdStatisticsMaxValue;

					mutable EarthView::World::Core::CReadWriteLock mFilterVisibilityMutex;//dataset锁
					ev_bool mbFilterVisibility;
					EarthView::World::Core::IntVector mFilterIDs;

					friend class CDBLabelBackgroundQueue;
                    friend class CVectorDBClampSceneLayerFactory;

					friend class CClampLayerUpdator;
					CClampLayerUpdator* mUpdator;

					EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* mpStringInterface;

					ev_bool mIsDrawing;
					EarthView::World::Core::CRecursiveMutex mSpatialDisplayLock;
					set<EarthView::World::Spatial::Display::CSpatialDisplay*> mSetSpatialDisplay;

					ev_uint32 mFeatureCount;

					ev_bool mbOverlapCheck;

					ev_bool mNeedStopWork;

					ev_bool mbPublishStoped;
				private:
						
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);
					static ev_bool find(const EarthView::World::Core::IntVector& ids,ev_uint32 id);

                };

				/// <summary>
				/// 贴地矢量图层工厂类
				/// 管理贴地矢量图层
				/// </summary>
                class EV_3DLAYER_DLL CVectorDBClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
                {
ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CVectorDBClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CVectorDBClampSceneLayerFactory();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CVectorDBClampSceneLayerFactory();

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
                    /// <param name="name">图层的名字</param>
                    /// <returns>工厂的产品</returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
                    /// <summary>
                    /// 销毁一个图层
                    /// </summary>
                    /// <param name="layer">销毁工厂的产品</param>
                    /// <returns>是否成功</returns>
                    virtual ev_bool destroyInstance( EarthView::World::Spatial::Atlas::ILayer* layer);

                public:
                    static const EVString msSceneLayerFactoryName;
                };
            }
        }
    }
}

#endif
