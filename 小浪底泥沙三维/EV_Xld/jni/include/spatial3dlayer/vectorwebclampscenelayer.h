#ifndef CVECTORCLAMPSCENELAYER_H
#define CVECTORCLAMPSCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <mathengine/vector3.h>

#include <tileutility/vectortile.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iwebclampscenelayer.h"

#include "spatialinterface/itheme.h"
#include "spatialinterface/ilabelproperty.h"

namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class CCamera;
			class COctreeCamera;
			class CTextureMovableText;
			class CTextureTextStyle;
			class CMovableObject;
			class CSceneNode;
		}

		namespace Spatial{

			class CAttributionTile;

			namespace Display
			{
				class CTextSymbol;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				struct pos_movable;
				struct lev_row_col;
				class CTileLabel;
				class CFeatureGroupLayer;
				class CWebClampLayerUpdator;
				/// <summary>
				/// 贴地层-二维矢量数据，来自数据库或文件的栅格数据
				/// 管理贴地层-二维矢量数据图层
				/// </summary>
				class EV_3DLAYER_DLL CVectorWebClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IWebClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorWebClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorWebClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//CVectorClampSceneLayer(const EVString& layerName);
					CVectorWebClampSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVectorWebClampSceneLayer();

				public:
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
					/// 瓦片创建通知
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns></returns>
					virtual ev_void _notifyTileCreated(ev_uint32 level,ev_uint32 row,ev_uint32 col);
					/// <summary>
					/// 瓦片销毁通知
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns></returns>
					virtual ev_void _notifyTileDestroyed(ev_uint32 level,ev_uint32 row,ev_uint32 col);

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
					/// 返回图层图元类型
					/// </summary>
					EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const;
					/// <summary>
					/// 复制图层
					/// </summary>	
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	

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
					/// 获得专题图数据流
					/// </summary>
					/// <returns>数据流对象智能指针</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断专题图数据流是否相同
					/// </summary>
					/// <returns>是否</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);

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
					/// 获取注记最大可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记最大可视距离</returns>
					virtual ev_real64 getMaxLabelVisibleDistance();
					/// <summary>
					/// 设置注记最大可视距离
					/// </summary>
					/// <param name="dis">注记最大可视距离</param>
					/// <returns></returns>
					virtual ev_void setMaxLabelVisibleDistance(ev_real64 dis);
					/// <summary>
					/// 获取注记最小可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记最小可视距离</returns>
					virtual ev_real64 getMinLabelVisibleDistance();
					/// <summary>
					/// 设置注记最小可视距离
					/// </summary>
					/// <param name="dis">注记最小可视距离</param>
					/// <returns></returns>
					virtual ev_void setMinLabelVisibleDistance(ev_real64 dis);

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
					/// 获取图层透明度值
					/// </summary>
					/// <returns>图层透明度值</returns>					
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// 返回是否是影像格式的瓦片
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否影像格式的瓦片</returns>
					ev_bool isImage() const;
					/// <summary>
					/// 获知指定级别的瓦片是否有效
					/// </summary>
					/// <returns>指定级别的瓦片有效性</returns>
					virtual ev_bool levelValid(ev_int32 level) const;
ev_private:

					void notifyAbortLayerRequest();

					ev_bool getTileLabel(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);

				protected:

					/// <summary>
					/// 创建注记
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="vectortile">瓦片数据信息</param>
					/// <param name="lstNeedAttach">创建成功需要挂接的注记</param>
					/// <param name="reqType">请求的类型，0创建，1销毁,2创建时超出瓦片级别范围，3销毁时超出瓦片级别范围</param>
					/// <returns>是否成功</returns>
					ev_bool buildLabel(ev_int32 level,ev_int32 row,ev_int32 col, EarthView::World::Spatial::CVectorTile* vectortile,_inout list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedAttach,ev_uint8 reqType);

					void labelsOverlapCheck();

					EarthView::World::Core::MemoryDataStreamPtr clipParentTile(EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y);
					void stopLayerRequests();

					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);

					friend class CFeatureGroupLayer;
					CFeatureGroupLayer* mParent;
					void setParentGroupLayer(CFeatureGroupLayer* parent);
					void updateWebLabelLayers(ev_bool forceRemove);

					friend class CTileLabel;
					void updateLabelInfo(ev_int32 level,ev_int32 row,ev_int32 col,list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedUpdate,ev_int8 type);//1：挂接；2：反挂接；3：反挂接和销毁
					/// <summary>
					/// 获得专题图数据流
					/// </summary>
					/// <returns>数据流对象智能指针</returns>
					EarthView::World::Core::MemoryDataStreamPtr getThemeStream_noLock();

				public:
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>		   
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
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
					/// 更新助记属性
					/// </summary>
					void  updateTextStyle();

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

				protected:
					/// <summary>
					/// 专题图
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* mpTheme;	
					EarthView::World::Core::CReadWriteLock mThemeLock;

					mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
					EarthView::World::Graphic::COctreeCamera* mpCacheCamera;		
					ev_void copyCameraParams(EarthView::World::Graphic::COctreeCamera& camera)const;

					friend class CWebClampLayerUpdator;
					CWebClampLayerUpdator* mUpdator;

					ev_uint8 mLabelUpdateStatus;//0线程正在排队，1线程已经工作,或者空闲
					ev_void _processByCamera();

					EarthView::World::Core::CReadWriteLock mPositionLock;//label锁
					typedef map<EarthView::World::Spatial3D::Atlas::lev_row_col,list<EarthView::World::Spatial3D::Atlas::pos_movable> > MapPosition;
					MapPosition mPositions;

					mutable EarthView::World::Core::CRecursiveMutex mNeedUpdateLabelsMutex;
					MapPosition mNeedUpdateLabels;
					set<EarthView::World::Spatial3D::Atlas::lev_row_col> mNeedDetachLabels;
					MapPosition mNeedReleaseLabels;
					ev_bool mNeedStopWork;

					typedef map<EarthView::World::Spatial3D::Atlas::lev_row_col,EarthView::World::Spatial3D::Atlas::CTileLabel*> MapTileLabels;
					mutable EarthView::World::Core::CRecursiveMutex mMapTielLabelsMutex;
					MapTileLabels mMapTielLabels;

					EarthView::World::Core::CReadWriteLock mLabelPropertyLock;//labelProperty锁
					EarthView::World::Spatial::Display::ILabelProperty* mpLabelProperty;

					EarthView::World::Graphic::CTextureTextStyle* mTextStyle;

					ev_real64 mMaxLabelVisibleDistance;
					ev_real64 mMinLabelVisibleDistance;

					Real mLabelProjOffsetMaxAngle;

					ev_bool mbOverlapCheck;

					EarthView::World::Core::MemoryDataStreamPtr drawBlackImage();

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CVectorWebClampSceneLayer);

					ev_void initDefaultTheme();
					ev_int8 drawGeoElement(EarthView::World::Spatial::CVectorTile* vectorTile,EarthView::World::Core::MemoryDataStreamPtr& streamPtr);
					ev_bool getParentTileData(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Core::MemoryDataStreamPtr& tileData);
					ev_void sphericalToCartesian(const EarthView::World::Spatial::Math::CVector3& srcCoordinate,EarthView::World::Spatial::Math::CVector3& resCoordinate );
					ev_bool judgeFieldName(ev_int32 tileMode,ev_int32 level,ev_int32 row,ev_int32 col,const EVString& fieldName);

					EVString readString(EarthView::World::Core::MemoryDataStreamPtr& stream);
					ev_void writeString(const EVString& string,EarthView::World::Core::CDataStream& stream);

					ev_bool isTileVisible(EarthView::World::Graphic::CCamera* camera,ev_int32 level,ev_int32 row,ev_int32 col);

					EarthView::World::Graphic::CTextureMovableText* createText(const EarthView::World::Core::ev_wstring& txt);
					EarthView::World::Graphic::CTextureMovableText* createLineTrackText(const EarthView::World::Core::ev_wstring& txt,const EarthView::World::Spatial::Math::CVector3& vecLine);

					ev_bool imageToPNG(EarthView::World::Core::MemoryDataStreamPtr& ptr,ev_uint8 streamType);

					ev_int32 getRealTileLevel(ev_int32 level) const;

					//1:点、2：线、3：面
					ev_uint8 disVectorType();

					EarthView::World::Spatial::Geometry::IGeometry* getTextMovablePoints(EarthView::World::Graphic::CMovableObject* mo,EarthView::World::Spatial::Math::CMatrix4& m);
					ev_bool layoutCheck(EarthView::World::Graphic::CCamera *cam,EarthView::World::Spatial3D::Atlas::pos_movable& pm,EarthView::World::Spatial3D::Atlas::pos_movable& pm1);
					ev_void releaseLabels(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedRelease);
					ev_void processAttach(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedAttach,ev_bool bLineLabel);
					ev_void processDetach(list<EarthView::World::Spatial3D::Atlas::pos_movable>& lstNeedDetach);
					ev_uint8 mTransparent;

					ev_bool mbIsImage;

					EarthView::World::Graphic::CSceneNode* mpSceneNode;
					//mutable EarthView::World::Core::CRecursiveMutex mLayerMutex;

					friend class CVectorWebClampSceneLayerFactory;
					friend class CWebLabelBackgroundQueue;					
				};

				/// <summary>
				/// 贴地二维矢量数据Scenelayer的类工厂
				/// 管理贴地二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL CVectorWebClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorWebClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorWebClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVectorWebClampSceneLayerFactory();

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
					/// <param name="layerName">图层名称</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
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
