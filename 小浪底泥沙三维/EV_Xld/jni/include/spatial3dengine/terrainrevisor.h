#ifndef _TERRAIN_REVISOR_H
#define _TERRAIN_REVISOR_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/name_value_pair.h"

#include "mathengine/ev_math.h"

#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/polygon.h"


namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
			/// <summary>
			/// 地形修改器虚类             
			/// </summary>
            class EV_Spatial3DEngine_DLL ITerrainRevisor : public EarthView::World::Core::CBaseObject
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ITerrainRevisor(){}
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ~ITerrainRevisor(){}
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                ITerrainRevisor(EarthView::World::Core::CNameValuePairList* pList){}

            public:
				/// <summary>
				/// 获取主键
				/// </summary>
				/// <param name=""></param>
				/// <returns>主键</returns>
                virtual EVString getKey() const;
				/// <summary>
				/// 自我复制
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Spatial3D::ITerrainRevisor* clone();
				/// <summary>
				/// 修改地形
				/// </summary>
				/// <param name="pt">位置</param>
				/// <returns>是否成功</returns>
                virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt){return false;}
				virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt,ev_real32 featureAtitude){return false;}
				/// <summary>
				/// 判断是否有关于倾斜模型的修改器
				/// </summary>
				/// <param name="pt"> </param>
				/// <returns>是否成功</returns>
				virtual ev_bool hasOBQTerrainRevisor(){return false;}	//dm+20161129
			};

            enum TerrainReviseMode
            {
                TRM_Exaggerate,
                TRM_Increase,
                TRM_Unify,
				TRM_OBQ_PAST,
				TRM_OBQ_UNIFY

            };

			enum TerrainRangeMode
			{
				TRM_Globe,
				TRM_PartialGlobe
			};

			/// <summary>
			/// 地形修改器类             
			/// </summary>
            class EV_Spatial3DEngine_DLL CTerrainRevisor : public EarthView::World::Spatial3D::ITerrainRevisor
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="key">主键</param>
				/// <param name="rangemode">范围类型</param>
				/// <param name="mode">修改类型</param>
				/// <param name="factor">比例</param>
				/// <param name="extent">范围</param>
				/// <returns></returns>
                CTerrainRevisor(const EVString& key,EarthView::World::Spatial3D::TerrainRangeMode rangemode,EarthView::World::Spatial3D::TerrainReviseMode mode,Real factor, 
                    EarthView::World::Spatial::Geometry::CPolygon* extent);
				/// <summary>
				/// 赋值构造函数
				/// </summary>
				/// <param name="tr">地形修改器</param>
                CTerrainRevisor(const CTerrainRevisor& tr);
				CTerrainRevisor();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ~CTerrainRevisor();
                
            public:
				/// <summary>
				/// 重写=操作符
				/// </summary>
				/// <param name="tr">地形修改器</param>
				/// <returns></returns>
                EarthView::World::Spatial3D::CTerrainRevisor& operator=(const EarthView::World::Spatial3D::CTerrainRevisor& tr);
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                CTerrainRevisor(EarthView::World::Core::CNameValuePairList* pList);

            public:
				/// <summary>
				/// 获取主键
				/// </summary>
				/// <param name=""></param>
				/// <returns>主键</returns>
                EVString getKey()const
                {
                    return mKey;
                }

				/// <summary>
				/// 获取修改范围类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>范围类型</returns>
				EarthView::World::Spatial3D::TerrainRangeMode getRangeMode()const
				{
					return mRangemode;
				}
				/// <summary>
				/// 设置修改范围类型
				/// </summary>
				/// <param name="m">范围类型</param>
				/// <returns></returns>
				ev_void setRangeMode(EarthView::World::Spatial3D::TerrainRangeMode m)
				{
					mRangemode = m;
				}
				/// <summary>
				/// 获取修改类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>修改类型</returns>
                EarthView::World::Spatial3D::TerrainReviseMode getMode()const
                {
                    return mMode;
                }
				/// <summary>
				/// 设置修改类型
				/// </summary>
				/// <param name="m">修改类型</param>
				/// <returns></returns>
                ev_void setMode(EarthView::World::Spatial3D::TerrainReviseMode m)
                {
                    mMode = m;
                }
				/// <summary>
				/// 获取比例
				/// </summary>
				/// <param name=""></param>
				/// <returns>比例</returns>
                Real getFactor()const
                {
                    return mFactor;
                }
				/// <summary>
				/// 设置比例
				/// </summary>
				/// <param name="factor">比例</param>
				/// <returns></returns>
                ev_void setFactor(Real factor)
                {
                    mFactor = factor;
                }

				/// <summary>
				/// 获取范围
				/// </summary>
				/// <param name=""></param>
				/// <returns>范围</returns>
                EarthView::World::Spatial::Geometry::CPolygon* getExtent()const
                {
                    return mPolygon;
                }
				/// <summary>
				/// 设置范围
				/// </summary>
				/// <param name="extent">范围</param>
				/// <returns></returns>
                ev_void setExtent(EarthView::World::Spatial::Geometry::CPolygon* extent);
				/// <summary>
				/// 修改地形
				/// </summary>
				/// <param name="pt">位置</param>
				/// <returns>是否成功</returns>
                virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt);


				/// <summary>
				/// 修改地形
				/// </summary>
				/// <param name="pt">位置</param>
				/// <returns>是否成功</returns>
				virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt,ev_real32 featureAtitude);
				/// <summary>
				/// 设置是否可用
				/// </summary>
				/// <param name="value">是否可用</param>
				/// <returns></returns>
				virtual ev_bool hasOBQTerrainRevisor()	//dm+20161129
				{
					return ( mMode==TRM_OBQ_PAST || mMode ==TRM_OBQ_UNIFY) ;
				}
				ev_void setEnabled(ev_bool value);

				/// <summary>
				/// 获取是否可用
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否可用</returns>
				ev_bool getEnabled() const;

				/// <summary>
				/// 设置高度值
				/// </summary>
				/// <param name=""></param>
				void setAltitude(ev_real64 alt){mAltitude = alt;}

				/// <summary>
				/// 获取高度值
				/// </summary>
				/// <param name=""></param>
				ev_real64 getAltitude(){return mAltitude;}

				/// <summary>
				/// 自我复制
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Spatial3D::ITerrainRevisor* clone();
            protected:
                EVString mKey;
				EarthView::World::Spatial3D::TerrainRangeMode mRangemode;
                EarthView::World::Spatial3D::TerrainReviseMode mMode;
                Real mFactor;
                EarthView::World::Spatial::Geometry::CPolygon* mPolygon;
				ev_real64 mAltitude;
				ev_bool mbEnabled;
            };
        }
    }
}

#endif
