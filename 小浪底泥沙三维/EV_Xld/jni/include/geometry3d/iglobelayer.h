#ifndef IGLOBELAYER_H
#define IGLOBELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <core/xml.h>
#include <core/datastream.h>

#include <spatialinterface/ilayer.h>
#include <tileutility/tiledata.h>
#include <spatialserverclient/evspatialserver.h>

#include "geometry3d/geometry3d_config.h"


namespace EarthView{
    namespace World{
        namespace Graphic{
            class CCamera;
            class CSceneManager;
        }
    }
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				enum LAYERSRS
				{
					LAYERSRS_Unknown		= 0,
					LAYERSRS_WGS_1984		= 4326,
					LAYERSRS_Mercator		= 3395,
				};

				enum LayerRefreshFactor
				{
					LRF_General,//一般改变
					LRF_VisibleChanged,//可见性改变
					LRF_TerrainChanged,//地形改变
					LRF_DatasetChanged,//数据集改变
					LRF_LabelVisibleChanged,//图层注记可见性改变
					LRF_ThemeChanged//专题图改变
				};

				/// <summary>
				/// 三维中的图层总称
				/// 管理三维中的图层
				/// </summary>
				class EV_GEOMETRY3D_DLL IGlobeLayer
					: public EarthView::World::Spatial::Atlas::ILayer
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IGlobeLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IGlobeLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IGlobeLayer(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IGlobeLayer();

				public:
					/// <summary>
					/// 获得场景名称
					/// </summary>
					/// <returns>场景名称</return>
					virtual EVString getSceneName() const;
					/// <summary>
					/// 获得图层名称
					/// </summary>
					/// <returns>图层名称</return>
					virtual EVString getName() const;
					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">新的图层名称</param>
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取图层描述
					/// </summary>
					/// <returns>图层描述字符串</return>
					virtual EVString getDescription() const;
					/// <summary>
					/// 设置图层描述
					/// </summary>
					/// <param name="value">图层描述字符串值</param>
					virtual ev_void setDescription(const EVString& value);
					/// <summary>
					/// 获知图层是否可编辑
					/// </summary>
					/// <returns>可编辑性</return>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 设置图层可编辑性
					/// </summary>
					/// <param name="can">可编辑性</param>
					virtual ev_void setCanEdit(ev_bool can);
					/// <summary>
					/// 获知图层是否处于编辑状态
					/// </summary>
					/// <returns>是否处于编辑状态</return>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 启用或禁用图层编辑
					/// </summary>
					/// <param name="editing">编辑状态</param>
					virtual ev_void setEditing(ev_bool editing);
					/// <summary>
					/// 获知图层是否可见
					/// </summary>
					/// <returns>可见性</return>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 获知图层是否有效
					/// </summary>
					/// <returns>图层是否有效</return>
					virtual ev_bool isValid() const;
					/// <summary>
					/// 获知图层是否可选择
					/// </summary>
					/// <returns>图层是否可选择</return>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// 设置图层可选择性
					/// </summary>
					/// <param name="selectable">图层可选择性</param>
					virtual ev_void setSelectable(ev_bool selectable);
										
					/// <summary>
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;

					/// <summary>
					/// 根据经纬度和级别获取高程 
					/// </summary>
					/// <param name="lat">纬度</param> 
					/// <param name="lon">经度</param>   
                    /// <param name="targetSamplesPerDegrees">每度采样数，-1表示最高精度</param>
					/// <returns></returns>
					virtual ev_bool getHeightAt(_in ev_real32 lat,_in ev_real32 lon,_in ev_real32 targetSamplesPerDegrees,_inout ev_real32& height);

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
					/// <param name="level">当前的级别</param>
					/// <param name="force">是否为强制刷新</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
										
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera);

                    /// <summary>
                    /// 数据集更新事件的通知
                    /// </summary>
                    /// <param name="strDatasetName">数据集名称</param>
                    /// <returns></returns>
                    virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					
					/// <summary>
					/// 获得场景管理器
					/// </summary>
					/// <returns>场景管理器</return>
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const;
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager();
					/// <summary>
					/// xml反序列化
					/// </summary>
					/// <param name="element">xml元素</param>
                    virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml元素
					/// </summary>
					/// <returns>xml元素</returns>
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>xml文本</returns>
                    virtual EVString toXML() const;

                    /// <summary>
                    /// 序列化成流
                    /// </summary>
                    /// <param name=""></param>   
                    /// <returns></returns>
                    virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					ev_internal:
					/// <summary>
					/// 流的反序列化
					/// </summary>
					/// <param name="stream">流</param>
                    virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(IGlobeLayer);

					protected:
						EVString mLayerName;

						//图层状态
						ev_bool mIsVisible;
						ev_bool mIsValid;
						ev_bool mIsSelectable;
						ev_bool mCanEdit;
						ev_bool mIsEditing;
						EVString msDescription;

						EarthView::World::Graphic::CSceneManager* mpSceneMgr;

				};
				

			}//namespace
		}
	}
}
#endif
