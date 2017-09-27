#ifndef CPolylineFeatureManager_H
#define CPolylineFeatureManager_H

#include <vector>
#include <map>
#include "industryengine/industrygraphic/industrygraphic_cfg.h"
#include "core/stdheaders.h"
#include "industryengine/industrygraphic/basebandingobject.h"
#include "spatialobject/geometry/coordinate.h"
#include "graphic/scenemanager.h"
#include "spatialinterface/ispatialreference.h"
#include "symbol/simpleline3dsymbol.h"
#include "core/thread.h"
#include "core/mutex.h"
#include "core/threaddefines.h"
#include "graphic/root.h"
#include "graphic/framelistener.h"
#include "symbol/billboard3dsymbol.h"
#include "core/classfactory.h"
#include "industryengine/industrygraphic/polylinefeature.h"




namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CVertexIndexInfo;
			class CPolylineFeature;
			class CThreadFunPolylineFeature;
			class CPolylineFeatureManagerListener;
			class CSingleStyleLineFeatrueContainer;
			class CSingleStylePolygonFeatrueContainer;
			/// <summary>
			/// 线特征管理类，用于管理与渲染不同风格的线特征对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CPolylineFeatureManager :public EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CPolylineFeatureManager(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_pSceneManager">场景管理对象</param>
				CPolylineFeatureManager(_in const EarthView::World::Core::ev_string& name , _in EarthView::World::Graphic::CSceneManager* ref_pSceneManager); 

				/// <summary>
				/// 析构函数
				/// </summary>
				virtual ~CPolylineFeatureManager(); 

				/// <summary>
				/// 获取唯一标示的线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>线特征对象</returns>
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* getPolylineFeature(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				/// 添加线特征对象
				/// </summary>
				/// <param name="ref_polylineFeature">线特征对象(与线特征管理对象的生命周期保持一致)</param>
				/// <param name="needUpdate">是否需要刷新</param>
				ev_void addPolylineFeature(_in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature * ref_polylineFeature , _in const ev_bool& needUpdate); 

				/// <summary>
				/// 移除线特征对象
				/// </summary>
				/// <param name="polylineFeature">线特征对象</param>
				/// <param name="needUpdate">是否需要刷新</param>
				ev_void removePolylineFeature(_in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature * polylineFeature, _in const ev_bool& needUpdate); 

				/// <summary>
				/// 移除线特征对象中所有的点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="needUpdate">是否需要刷新</param>
				ev_void removePolylineFeaturePoints(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& needUpdate);

				/// <summary>
				/// 移除线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="needUpdate">是否需要刷新</param>
				ev_void removePolylineFeature(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& needUpdate);

				/// <summary>
				/// 判断是否包含唯一标示的线特征对象
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否包含线特征对象</returns>
				ev_bool contain(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 设置唯一标示的线特征对象的显示状态
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否可见</param>
				virtual ev_void setPolylineFeatureVisible(_in const ev_int32& polylineFeatureUniqueID ,_in const ev_bool& value);

				/// <summary>
				/// 获取唯一标示的线特征对象的显示状态
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示状态</returns>
				ev_bool getPolylineFeatureVisible(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 设置唯一标示的线特征对象是否清除冗余点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否清除冗余点</param>
				virtual ev_void setNeedClearUselessData(_in const ev_int32& polylineFeatureUniqueID , _in const ev_bool& value);

				/// <summary>
				/// 获取唯一标示的线特征对象的的是否清除冗余点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否清除冗余点</returns>
				ev_bool getNeedClearUselessData(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 设置唯一标示的线特征对象的描述信息
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="description">描述信息</param>
				ev_void setDescription(_in const ev_int32& polylineFeatureUniqueID ,_in const EVString& description);

				/// <summary>
				/// 统一设置线特征对象的显示状态
				/// </summary>
				/// <param name="value">是否可见</param>
				ev_void setUniformVisible(_in const ev_bool& value);

				/// <summary>
				/// 统一设置相应显示模式的线特征对象的显示风格
				/// </summary>
				/// <param name="ref_uniformSymbol">显示风格(与线特征管理对象的生命周期保持一致)</param>
				/// <param name="displayMode">显示模式</param>
				ev_void setUniformPolylineFeatureSymbol(_in EarthView::World::Spatial::Display::ISymbol * ref_uniformSymbol,_in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode); 

				/// <summary>
				/// 获取线特征对象的统一显示风格
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				const EarthView::World::Spatial::Display::ISymbol*  getUniformPolylineFeatureSymbol(_in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode) const; 

				/// <summary>
				/// 为唯一标示的线特征对象添加点
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="point">点坐标</param>
				/// <param name="needUpdate">是否需要更新</param>
				ev_void addPoint(_in const ev_int32& polylineFeatureUniqueID, _in const EarthView::World::Spatial::Geometry::CCoordinate& point, _in const ev_bool& needUpdate); 

				/// <summary>
				/// 设置唯一标示的线特征对象的显示风格
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="polylineFeatureSymbol">显示风格(内部进行clone)</param>
				ev_void setPolylineFeatureSymbol(_in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol); 

				/// <summary>
				/// 设置唯一标示的线特征对象的是否以视高线风格显示
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="value">是否为视高线</param>
				ev_void setIsPolylineFeatureHighLine(_in const ev_int32& polylineFeatureUniqueID, _in const ev_bool& value); 

				/// <summary>
				/// 获取唯一标示的线特征对象的是否以视高线风格显示
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否为视高线</returns>
				ev_bool getIsPolylineFeatureHighLine(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 设置线特征对象以点模式显示(非图片方式显示的点)时的显示策略
				/// </summary>
				/// <param name="strategyValue">策略值</param>
				ev_void setDisplayStrategyForPointMode(_in const ev_int32& strategyValue);

				/// <summary>
				/// 获取线特征对象以点模式显示(非图片方式显示的点)时的显示策略
				/// </summary>
				/// <returns>策略值</returns>
				ev_int32 getDisplayStrategyForPointMode();

				/// <summary>
				/// 设置唯一标示的线特征对象的视高线显示颜色
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				ev_void setHighLineColorInfo(_in const ev_int32& polylineFeatureUniqueID,EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor,EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor);
				/// <summary>
				/// 设置唯一标示的线特征对象的视高线间距
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="highLineDistance">间距</param>
				ev_void setHighLineDistance(_in const ev_int32& polylineFeatureUniqueID,const ev_real64& highLineDistance);
				/// <summary>
				/// 获取唯一标示的线特征对象的视高线间距
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>视高线间距</returns>
				Real getHighLineDistance(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 获取唯一标示的线特征对象的显示风格
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示风格</returns>
				const EarthView::World::Spatial::Display::ISymbol* getPolylineFeatureSymbol(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				/// 统一设置显示模式
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				/// <param name="uniformSymbol">与显示模式对应的风格(内部进行clone)</param>
				ev_void setUniformDisplayMode(_in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode,_in EarthView::World::Spatial::Display::ISymbol * uniformSymbol); 

				/// <summary>
				/// 获取统一的显示模式
				/// </summary>
				/// <returns>显示模式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getUniformDisplayMode() const; 

				/// <summary>
				/// 设置唯一标示的线特征对象的显示模式
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="displayMode">显示模式</param>
				ev_void setDisplayMode(_in const ev_int32& polylineFeatureUniqueID, _in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode); 

				/// <summary>
				/// 获取唯一标示的线特征对象的显示模式
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>显示模式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getDisplayMode(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				/// 设置唯一标示的线特征对象的空间参考
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="ref_iSpatialReference">空间参考(与线特征管理对象的生命周期保持一致)</param>
				ev_void setISpatialReference(_in const ev_int32& polylineFeatureUniqueID, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_iSpatialReference); 

				/// <summary>
				/// 获取唯一标示的线特征对象的空间参考
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>空间参考</returns>
				const EarthView::World::Spatial::Geometry::ISpatialReference* getISpatialReference(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				/// 统一设置空间参考
				/// </summary>
				/// <param name="ref_uniformSpatialReference">空间参考(与线特征管理对象的生命周期保持一致)</param>
				ev_void setUniformISpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_uniformSpatialReference); 

				/// <summary>
				/// 获取统一的空间参考
				/// </summary>
				/// <returns>空间参考</returns>
				const EarthView::World::Spatial::Geometry::ISpatialReference* getUniformISpatialReference() const; 

				/// <summary>
				///设置唯一标示的线特征对象的点显示数目
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="displayPointNum">显示数目</param>
				ev_void setDisplayPointNum(_in const ev_int32& polylineFeatureUniqueID, _in const ev_int32& displayPointNum); 

				/// <summary>
				///获取唯一标示的线特征对象的显示数目
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>线特征对象的显示数目</returns>
				ev_int32 getDisplayPointNum(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				///统一设置点显示数目
				/// </summary>
				/// <param name="displayPointNum">显示数目</param>
				ev_void setUniformDisplayPointNum(_in const ev_int32& displayPointNum); 

				/// <summary>
				///获取统一的点显示数目
				/// </summary>
				/// <returns>点显示数目</returns>
				ev_int32 getUniformDisplayPointNum() const; 

				/// <summary>
				///获取当前线特征对象的数目
				/// </summary>
				/// <returns>当前线特征对象的数目</returns>
				ev_int32 getPolylineFeatureCount() const ;

				/// <summary>
				///设置分段渲染参数，启用分段才有效
				/// </summary>
				/// <param name="perSegmentVertexCount">每个片段顶点个数(大于等于20)</param>
				ev_void setSegmentRenderParameter(_in const ev_int32& perSegmentVertexCount) ;

				/// <summary>
				///获取当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>是否使用渐变颜色</returns>
				virtual ev_bool getUseWallGradualColor(const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				///设置当前线特征对象是否使用渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="useWallGradualColor">否使用渐变颜色</param>
				virtual void setUseWallGradualColor(const ev_int32& polylineFeatureUniqueID,const ev_bool& useWallGradualColor);

				/// <summary>
				///获取当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <returns>渐变颜色</returns>
				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor(const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				///设置当前线特征对象的渐变颜色（目前只针对于截面为Wall的线）
				/// </summary>
				/// <param name="polylineFeatureUniqueID">唯一标示</param>
				/// <param name="pWallGradualColor">渐变颜色</param>
				virtual void setWallGradualColor(const ev_int32& polylineFeatureUniqueID,
					EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor);

				/// <summary>
				///是否能够释放所有线特征对象资源
				/// </summary>
				virtual ev_bool canReleaseResource();

				/// <summary>
				///是否能够释放唯一标识的线特征对象资源
				/// </summary>
				virtual ev_bool canReleaseResource(_in const ev_int32& polylineFeatureUniqueID);

				/// <summary>
				/// 设置是否需要更新
				/// </summary>
				/// <param name="needUpdate">更新状态</param>
				virtual ev_void setNeedUpdate(_in const ev_bool& needUpdate); 

				/// <summary>
				///更新
				/// </summary>
				virtual ev_void update() ; 

			protected:
				/// <summary>
				///刷新
				/// </summary>
				virtual ev_void refresh() ;

				/// <summary>
				///交换缓存数据
				/// </summary>
				virtual ev_void swapBuffer() ;

				/// <summary>
				/// 创建默认的线特征对象显示风格
				/// </summary>
				ev_void createDefaultPolylineFeatureSymbol(); 

				/// <summary>
				///获取点编辑同步对象
				/// </summary>
				/// <returns>同步对象</returns>
				EarthView::World::Core::CMutex& getMutex() ;			

				/// <summary>
				///组织线特征数据到不同的渲染容器
				/// </summary>
				virtual ev_void organizePolylineFeatureData() ;

				/// <summary>
				///初始资源
				/// </summary>
				ev_void initialResource();

				/// <summary>
				///获取线特征数据所在的渲染容器
				/// </summary>
				/// <param name="polylineFeature">线特征数据</param>
				/// <returns>渲染容器</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer* getSingleStylePolylineFeatureContainer(_in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature * polylineFeature); 

				/// <summary>
				///获取线特征数据所在的渲染容器
				/// </summary>
				/// <param name="polylineFeatureUniqueID">线特征数据的唯一标示</param>
				/// <returns>渲染容器</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer* getSingleStylePolylineFeatureContainer(_in const ev_int32& polylineFeatureUniqueID); 

				/// <summary>
				///获取线特征数据
				/// </summary>
				/// <param name="polylineFeatureUniqueID">线特征数据的唯一标示</param>
				/// <returns>线特征数据</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature* getInnerPolylineFeature(_in const ev_int32& polylineFeatureUniqueID) const; 

				/// <summary>
				///获取正在编辑的线特征数据信息
				/// </summary>
				/// <param name="polylineFeatureUniqueID">线特征数据的唯一标示</param>
				/// <returns>线特征数据信息</returns>
				EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo* getVertexIndexInfo(_in const ev_int32& polylineFeatureUniqueID) ;

				/// <summary>
				///创建资源
				/// </summary>
				virtual ev_void build() ; 

				/// <summary>
				///渲染
				/// </summary>
				virtual ev_void render() ; 


				/// <summary>
				///移除渲染
				/// </summary>
				virtual ev_void derender() ; 

			protected:
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EarthView::World::Spatial::Display::CSimpleLine3DSymbol* mpDefaultPolylineFeatureLineSymbol;
				EarthView::World::Spatial::Display::CBillboard3DSymbol* mpDefaultPolylineFeaturePointSymbol ;
				EarthView::World::Spatial::Display::ISymbol * mpUniformLineFeatureSymbol;
				EarthView::World::Spatial::Display::ISymbol * mpUniformPointFeatureSymbol;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode mUniformDisplayMode ;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpUniformSpatialReference;
				ev_int32 mpUniformDisplayPointNum;
				ev_int32 mPerSegmentVertexCount ;//分段渲染时每个片段中顶点的最大个数

				std::vector<EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *>* mpPolylineFeatureCollection;//线特征对象列表
				mutable EarthView::World::Core::CRecursiveMutex mPolylineFeatureCollectionMutex; //线特征对象编辑专有同步对象
				
				EarthView::World::Core::CThread mUpdateThread;//数据更新线程
				EarthView::World::Core::CRecursiveMutex mMutex; //添加移除点编辑同步对象
				
				
				ev_bool mEnableSegmentRender;//是否启用分段渲染
				ev_bool mIsCreateUpdateThread;//是否已经创建更新线程
				ev_bool mIsRegisterThread;//是否已经注册线程
				ev_bool mIsUpdatingData;//标识更新线程是否正在更新数据
				std::vector<EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo*>* mpEditingDataInfo;//正在编辑的数据信息
				std::vector<EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo*>* mpUpdatingDataInfo;//正在更新的数据信息

				EV_MUTEX(mInitMutex);
				EV_MUTEX(mTastMutex);
				EV_THREAD_SYNCHRONISER(mInitSync);			
				EV_THREAD_SYNCHRONISER(mTaskSync);			

				EarthView::World::Core::CRecursiveMutex mSingleStylePolylineFeatureContainerMutex;//polylineFeature渲染溶器编辑同步对象
				std::vector<EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer *>* mpSingleStylePolylineFeatureContainer;
				
				EarthView::IndustryEngine::IndustryGraphic::CThreadFunPolylineFeature* mUpdateThreadFunc;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManagerListener* mpPolylineFeatureManagerListener ;

				ev_int32 mPointDisplayStrategyValue;

				friend class CThreadFunPolylineFeature;
				friend class CPolylineFeatureManagerListener;
				friend class CPolylineFeatureContainer;
				friend class CSingleStylePointFeatrueContainer;
				friend class CSingleStyleLineFeatrueContainer;
				friend class CSingleStylePolygonFeatrueContainer;

			};  //end class CPolylineFeatureManager

		}
	}
}

#endif

