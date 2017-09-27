#pragma once;
#include "effect3d_config.h"
#include <graphic/colourvalue.h>
#include <mathengine/ev_math.h>
#include "cloud_definitions.h"
#include <spatialobject/geometry/envelope.h>
#include "lightning.h"
#include "heightrange.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 云层类
				/// </summary>
				class CRegionAtmosphere;
				class EV_EFFECT3D_DLL CCloudLayer : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CCloudLayer(EarthView::World::Core::CNameValuePairList *pList);
					friend class CRegionAtmosphere;
				public:
				
					/// <summary>
                    /// 析构函数
                    /// </summary>
					~CCloudLayer();
					 /// <summary>
                    /// 获取名称
                    /// </summary>
					EVString getName() const;
					 /// <summary>
                    /// 设置名称
                    /// </summary>
					void setName(const EVString &name);
					 /// <summary>
                    /// 获取类型
                    /// </summary>
					EarthView::World::Spatial::Effect3D::EVCloudType getCloudType()const;
					 /// <summary>
                    /// 设置类型
                    /// </summary>
					/// <param name="type">天气类型</param>
                    void setCloudType(EarthView::World::Spatial::Effect3D::EVCloudType type);
					 /// <summary>
                    /// 获取高度范围
                    /// </summary>
					/// <returns>高度范围</returns>
					EarthView::World::Spatial::Effect3D::CHeightRange getHeightRange()const;
					 /// <summary>
                    /// 设置高度范围
                    /// </summary>
					/// <param name="heightRange">高度范围</param>
					/// <returns></returns>
                    void setHeightRange(EarthView::World::Spatial::Effect3D::CHeightRange heightRange);
					 /// <summary>
                    /// 设置范围
                    /// </summary>
					/// <param name="index">子高度范围序号</param>
					void setArea(EarthView::World::Spatial::Geometry::CEnvelope &envelope);
					 /// <summary>
                    /// 获取范围
                    /// </summary>
					/// <returns>范围</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getArea()const;
					/// <summary>
                    /// 设置密度
                    /// </summary>
					/// <param name="density">密度</param>
					void setDensity(Real density);
					/// <summary>
                    /// 获取密度
                    /// </summary>
					/// <returns>密度</returns>
					Real getDensity()const;
					/// <summary>
                    /// 设置显隐
                    /// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					void setVisible(ev_bool visible);
					/// <summary>
                    /// 获取显隐
                    /// </summary>
					/// <returns>可见性</returns>
					ev_bool isVisible()const;
					/// <summary>
                    /// 类型转字符串
                    /// </summary>
					/// <param name="type">天气类型</param>
					/// <returns>字符串</returns>
                    EVString cloudTypeToString(EarthView::World::Spatial::Effect3D::EVCloudType type);
					/// <summary>
                    /// 字符串转类型
                    /// </summary>
					/// <param name="type">类型字符串</param>
					/// <returns>类型枚举</returns>
                    EarthView::World::Spatial::Effect3D::EVCloudType stringToCloudType(const EVString& type);
					
					/// <summary>
                    /// 获取闪电数量
                    /// </summary>
					/// <returns>数量</returns>
					ev_size_t getLightningManagersCount()const;
					/// <summary>
                    /// 根据索引获取闪电对象
                    /// </summary>
					/// <param name="index">索引号</param>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CLightningManager* getLightningManager(ev_int32 index) ;
					/// <summary>
                    /// 清空闪电
                    /// </summary>
					/// <returns></returns>
					ev_void clearLightning();

					/// <summary>
                    /// 添加闪电
                    /// </summary>
					/// <param name="rage">闪电大小</param>
					/// <returns>新建闪电对象</returns>
					EarthView::World::Spatial::Effect3D::CLightningManager* createLightningManager(const EarthView::World::Spatial::Effect3D::CHeightRange &range);

					/// <summary>
                    /// 销毁闪电
                    /// </summary>
					/// <param name="lightning">闪电对象</param>
					/// <returns></returns>
					ev_void destroyLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);
					/// <summary>
                    /// 刷新渲染对象(即渲染闪电）
                    /// </summary>
					/// <param name="lightning">闪电对象</param>
					/// <returns></returns>
					ev_void updateToRender(EarthView::World::Spatial::Effect3D::CLightningManager *ref_lightning);
					/// <summary>
					/// 克隆云图层
					/// </summary>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Effect3D::CCloudLayer* clone();

					ev_void setAllowVolumeCloudMove(ev_bool bol);
					ev_bool getAllowVolumeCloudMove()const;	
					
					/// <summary>
					/// 获取父环境对象
					/// </summary>
					/// <returns>环境对象</returns>
					CRegionAtmosphere* getParent()const;
				private:
					/// <summary>
					/// 构造函数
					/// </summary>
					CCloudLayer(EarthView::World::Graphic::CSceneManager *sceMgr,EarthView::World::Spatial::Effect3D::EVCloudType type,const EarthView::World::Spatial::Effect3D::CHeightRange &height);

					/// <summary>
					/// 添加闪电
					/// </summary>
					/// <param name="lightning">闪电对象</param>
					/// <returns></returns>
					ev_void addLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);
					/// <summary>
					/// 移除闪电
					/// </summary>
					/// <param name="lightning">闪电对象</param>
					/// <returns></returns>
					ev_void removeLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);


					
					CCloudLayer(const CCloudLayer	&);
					EarthView::World::Spatial::Effect3D::CCloudLayer& operator=(const EarthView::World::Spatial::Effect3D::CCloudLayer&);
				protected:
						EarthView::World::Spatial::Effect3D::EVCloudType mType;
						EarthView::World::Spatial::Effect3D::CHeightRange mHeightRange;
						EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
						Real mDensity;
						ev_bool mbIsVisible;
						EVString mName;
						list<EarthView::World::Spatial::Effect3D::CLightningManager*> mlistLightningManagers;
						EarthView::World::Graphic::CSceneManager *mSceMgr;
						bool mAllowMove;
						CRegionAtmosphere *mParent;
				};
			}
		}
	}
}
