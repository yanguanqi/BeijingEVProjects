#ifndef CPolylineFeature_H
#define CPolylineFeature_H

#include"mathengine/vector3.h"
#include"industrygraphic_cfg.h"
#include "symbol/simpleline3dsymbol.h"
#include "globecontrol/globecontrol.h"
#include "spatialobject/geometry/linestring.h"
#include "core/global.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "core/multibytestring.h"
#include "spatialinterface/isymbol.h"
#include "color/rgbcolor.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CPolylineFeatureContainer;
			class CPolylineFeatureManager;

			/// <summary>
			/// 工具类
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CSymbolTool : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CSymbolTool(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 静态加载图片
				/// </summary>
				/// <param name="imagePath">图片路径</param>
				/// <param name="dataStream">返回的数据流</param>
				static ev_void loadImage(_in const EVString& imagePath,_inout EarthView::World::Core::MemoryDataStreamPtr& dataStream);

				static ev_bool isEqualSymbol(_in EarthView::World::Spatial::Display::ISymbol * pSymbol1, _in EarthView::World::Spatial::Display::ISymbol * pSymbol2);
			};

			/// <summary>
			/// 线特征对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CPolylineFeature : public EarthView::World::Core::CBaseObject
			{

			public:
				/// <summary>
				/// 显示模式
				/// </summary>
				enum EVDisplayMode
				{
					DM_POLYGON , //面模式
					DM_LINE ,	 //线模式
					DM_POINT	 //点模式
				};

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CPolylineFeature(EarthView::World::Core::CNameValuePairList* pList);
			public:

				/// <summary>
				/// 默认构造函数
				/// </summary>
				CPolylineFeature(); 

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="uniqueID">唯一标示</param>
				CPolylineFeature(_in const EVString& name,_in const ev_int32& uniqueID);

				/// <summary>
				///析构函数
				/// </summary>
				virtual ~CPolylineFeature(); 	

				/// <summary>
				/// 添加点
				/// </summary>
				/// <param name="point">点坐标</param>
				virtual ev_void addPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& point); 

				/// <summary>
				/// 设置唯一标示
				/// </summary>
				/// <param name="uniqueID">唯一标示</param>
				virtual ev_void setUniqueID(_in const ev_int32& uniqueID);

				/// <summary>
				/// 获取唯一标示
				/// </summary>
				/// <returns>唯一标示</returns>
				virtual ev_int32 getUniqueID() const;

				/// <summary>
				/// 是否显示所有点
				/// </summary>
				/// <returns>是否显示所有点</returns>
				virtual ev_bool isShowAllPoints() const; 

				/// <summary>
				/// 是否为有效索引
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>是否有效</returns>
				virtual ev_bool isValidIndex(_in const ev_int32& index) ;

				/// <summary>
				/// 设置更新状态
				/// </summary>
				/// <param name="needUpdate">是否需要更新</param>
				virtual ev_void setNeedUpdate(_in const ev_bool& needUpdate);

				/// <summary>
				/// 获取更新状态
				/// </summary>
				/// <returns>更新状态</returns>
				virtual ev_bool getNeedUpdate() const;

				/// <summary>
				/// 设置显示的点数目
				/// </summary>
				/// <param name="displayNumber">点数目</param>
				virtual ev_void setDisplayPointNum(_in const ev_int32& displayNumber); 

				/// <summary>
				/// 设置显示模式(要与风格匹配，即：DM_LINE对应线风格，DM_POINT对应点风格)
				/// </summary>
				/// <param name="displayMode">显示模式</param>
				virtual ev_void setDisplayMode(_in const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode) ;

				/// <summary>
				/// 获取显示模式
				/// </summary>
				/// <returns>显示模式</returns>
				virtual EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getDisplayMode() const;

				/// <summary>
				/// 获取显示的点数目
				/// </summary>
				/// <returns>显示的点数目</returns>
				virtual ev_int32 getDisplayPointNum() const;  

				/// <summary>
				/// 设置显示风格(要与显示模式匹配，即：DM_LINE对应线风格，DM_POINT对应点风格)
				/// </summary>
				/// <param name="polylineFeatureSymbol">风格(内部进行clone)</param>
				virtual ev_void setPolylineFeatureSymbol(_in EarthView::World::Spatial::Display::ISymbol * polylineFeatureSymbol); 

				/// <summary>
				/// 获取示风格
				/// </summary>
				/// <returns>风格</returns>
				virtual EarthView::World::Spatial::Display::ISymbol* getPolylineFeatureSymbol() const; 

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				virtual ev_void setName(const EVString& name); 

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				virtual EarthView::World::Core::ev_string getName(); 

				/// <summary>
				/// 设置线路径
				/// </summary>
				/// <param name="ref_polylineFeaturePath">路径</param>
				virtual ev_void setPolylineFeaturePath(_in EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath); 

				/// <summary>
				/// 获取线路径
				/// </summary>
				/// <returns>线路径</returns>
				virtual EarthView::World::Spatial::Geometry::CLineString* getPolylineFeaturePath() const; 

				/// <summary>
				/// 移除线路径中所有的点
				/// </summary>
				virtual ev_void removeAllPoints(); 

				/// <summary>
				/// 获取空间参考
				/// </summary>
				/// <returns>空间参考</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getISpatialReference() const;

				/// <summary>
				/// 设置空间参考
				/// </summary>
				/// <param name="ref_pSpatialReference">空间参考(与线特征对象的生命周期保持一致)</param>
				virtual ev_void setISpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference);

				/// <summary>
				/// 设置显示状态
				/// </summary>
				/// <param name="value">是否可见</param>
				virtual ev_void setVisible(_in const ev_bool& value);

				/// <summary>
				/// 获取显示状态
				/// </summary>
				/// <returns>是否可见</returns>
				virtual ev_bool getVisible() const;

				/// <summary>
				/// 设置描述信息
				/// </summary>
				/// <param name="description">描述信息</param>
				virtual ev_void setDescription(_in const EVString& description);
				/// <summary>
				/// 获取描述信息
				/// </summary>
				/// <returns>描述信息</returns>
				virtual EVString getDescription() const ;
				/// <summary>
				/// 刷新
				/// </summary>
				virtual ev_void refresh(); 

				/// <summary>
				/// 设置视高线的延伸颜色信息（顶部线颜色由风格对象控制）
				/// </summary>
				/// <param name="staticHighLineColor">静态延伸颜色(内部进行clone)</param>
				/// <param name="dynamicHighLineColor">动态延伸颜色(内部进行clone)</param>
				virtual ev_void setHighLineColorInfo(_in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor,_in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor);

				/// <summary>
				/// 设置视高线之间的间距
				/// </summary>
				/// <param name="highLineDistance">视高线之间的间距</param>
				virtual ev_void setHighLineDistance(_in const ev_real64& highLineDistance);
				/// <summary>
				/// 设置是否使用视高线距离模式(只能在线特征对象加入到线管理器之前使用)
				/// </summary>
				/// <param name="value">是否使用</param>
				virtual ev_void setUseHighLineDistance(_in const ev_bool& value);
				virtual ev_bool getUseHighLineDistance();

				/// <summary>
				/// 获取视高线之间的间距
				/// </summary>
				/// <returns>视高线之间的间距</returns>
				virtual ev_real64 getHighLineDistance();

				/// <summary>
				/// 设置是否为视高线
				/// </summary>
				/// <param name="isHighLine">是否为视高线</param>
				virtual ev_void setIsHighLine(_in const ev_bool& isHighLine);

				/// <summary>
				/// 获取是否为视高线
				/// </summary>
				/// <returns>是否为视高线</returns>
				virtual ev_bool getIsHighLine() const;

				/// <summary>
				/// 设置是否需要清除冗余数据
				/// </summary>
				/// <param name="value">是否需要清除冗余数据</param>
				virtual ev_void setNeedClearUselessData(_in const ev_bool& value);

				/// <summary>
				/// 获取是否需要清除冗余数据
				/// </summary>
				/// <returns>是否需要清除冗余数据</returns>
				virtual ev_bool getNeedClearUselessData() const ;

				/// <summary>
				/// 清除冗余数据
				/// </summary>
				/// <returns>清除冗余点数据个数</returns>
				virtual ev_int32 clearUselessData();

				/// <summary>
				/// 设置允许存在的冗余点个数
				/// </summary>
				/// <param name="maxUselessDataCount">允许存在的冗余点个数</param>
				virtual ev_void setMaxUselessDataCount(const ev_int32& maxUselessDataCount);

				/// <summary>
				/// 获取允许存在的冗余点个数
				/// </summary>
				/// <returns>冗余点数据个数</returns>
				virtual ev_int32 getMaxUselessDataCount();

				virtual ev_bool getUseWallGradualColor();

				virtual void setUseWallGradualColor(const ev_bool& useWallGradualColor);

				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor();

				virtual void setWallGradualColor(EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor);

			protected:
				/// <summary>
				/// 获取有效状态
				/// </summary>
				/// <returns>有效状态</returns>
				virtual ev_bool getIsValid() const;

				/// <summary>
				/// 设置有效状态
				/// </summary>
				/// <param name="isValid">有效状态</param>
				virtual ev_void setIsValid(_in const ev_bool& isValid);

				/// <summary>
				/// 设置父渲染容器
				/// </summary>
				/// <param name="pParentContainer">父渲染容器</param>
				virtual ev_void setParentContainer(_in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer* ref_pParentContainer);
				/// <summary>
				/// 获取父渲染容器
				/// </summary>
				/// <returns>父渲染容器</returns>
				virtual EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer* getParentContainer() const ;

				/// <summary>
				/// 设置所在的线管理对象
				/// </summary>
				/// <param name="pParentManager">线管理对象</param>
				virtual ev_void setParentManager(_in EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* ref_pParentManager) ;

				/// <summary>
				/// 获取所在的线管理对象
				/// </summary>
				/// <returns>线管理对象</returns>
				virtual EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* getParentManager() const;

				/// <summary>
				/// 处理需要显示数据
				/// </summary>
				/// <param name="outPolylineFeature">线特征对象(外部释放)</param>
				virtual ev_bool handleDisplayPolylineFeature(_inout EarthView::World::Spatial::Geometry::CLineString*& outPolylineFeature); 

			protected:
				/// <summary>
				/// 线特征对象管理器
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* mpParentManager;

				/// <summary>
				/// 线路点集合
				/// </summary>
				EarthView::World::Spatial::Geometry::CLineString * mpPolylineFeaturePath;

				/// <summary>
				/// 空间参考
				/// </summary>
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialReference;

				/// <summary>
				/// 显示风格
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol * mpPolylineFeatureSymbol;

				/// <summary>
				/// 需要显示的最新加入的点个数
				/// </summary>
				ev_int32 mDisplayNum;

				/// <summary>
				/// 是否显示
				/// </summary>
				ev_bool mVisible;

				/// <summary>
				/// 是否处于有效状态
				/// </summary>
				ev_bool mIsValid ;

				/// <summary>
				/// 名称
				/// </summary>
				EarthView::World::Core::ev_string mName;

				/// <summary>
				/// 是否需要更新
				/// </summary>
				ev_bool mIsNeedUpdate;

				/// <summary>
				/// 唯一标示
				/// </summary>
				ev_int32 mUniqueID ;

				/// <summary>
				/// 显示模式
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode mDisplayMode; 

				/// <summary>
				/// 描述信息
				/// </summary>
				EVString mDescription;

				/// <summary>
				/// 是否为视高线
				/// </summary>
				ev_bool mIsHighLine;

				/// <summary>
				/// 静态视高线延伸颜色
				/// </summary>
				EarthView::World::Spatial::Display::CRgbColor* mStaticHighLineColor;

				/// <summary>
				/// 动态视高线延伸颜色
				/// </summary>
				EarthView::World::Spatial::Display::CRgbColor* mDynamicHighLineColor;

				/// <summary>
				/// 视高线之间的间距
				/// </summary>
				ev_real64 mHighLineDistance;

				/// <summary>
				/// 是否清除冗余的点数据
				/// </summary>
				ev_bool mNeedClearUselessData;

				/// <summary>
				/// 最近一次清除的点个数
				/// </summary>
				ev_int32 mNumOfClearUselessData;

				/// <summary>
				/// 是否只使用当前的数据
				/// </summary>
				ev_bool mOnlyUseCurData;

				/// <summary>
				/// 最大无效点个数（可以作为可存储的点数的最大值）
				/// </summary>
				ev_int32 mMaxUselessDataCount;

				/// <summary>
				/// 是否需要重量渲染buffer数据
				/// </summary>
				ev_bool mNeedResetBufferData;

				/// <summary>
				/// 是否使用渐变颜色
				/// </summary>
				ev_bool mUseWallGradualColor;

				/// <summary>
				/// 是否使用视高线距离模式
				/// </summary>
				ev_bool mUseHighLineDistance;


				/// <summary>
				/// 渐变颜色
				/// </summary>
				EarthView::World::Spatial::Display::CRgbColor* mpWallGradualColor;

			protected:
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureContainer* mpParentContainer;

				friend class CSingleStylePointFeatrueContainer;
				friend class CSingleStyleLineFeatrueContainer;
				friend class CSingleStylePolygonFeatrueContainer;
				friend class CPolylineFeatureManager;
				friend class CPolylineFeatureContainer;
			};  //end class CPolylineFeature


		}
	}
}

#endif

