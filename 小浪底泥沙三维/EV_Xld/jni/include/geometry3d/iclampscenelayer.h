#ifndef ICLAMPSCENELAYER_H
#define ICLAMPSCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/iscenelayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace Utility
			{
				class CSpatialReference;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
							
				enum ClampMode
				{
					CLM_DEM = 1,//贴地形
					CLM_DSM = 2, //贴模型
					CLM_ALL = 3
				};

				/// <summary>
				/// 聚合贴地层 二维的图层，提供在三维中渲染的接口
				/// 管理三维中贴地层 二维图层
				/// </summary>
				class EV_GEOMETRY3D_DLL IClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::ISceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IClampSceneLayer(const EVString& name);		
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IClampSceneLayer();

				public:
					/// <summary>
					/// 获取瓦片，具体在子类中实现
					/// </summary>
					/// <param name="tile">瓦片内容</param>
					/// <param name="north">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					/// <summary>
					/// 获取瓦片，具体在子类中实现
					/// </summary>
					/// <param name="tile">瓦片内容</param>
					/// <param name="north">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(_in const EarthView::World::Spatial::CTileInfo& tileInfo,_inout EarthView::World::Spatial::CTileData& tile);
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
					/// 获取最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大级别</returns>
					virtual ev_int32 getMaxLevel() const;
					/// <summary>
					/// 获取最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小级别</returns>
					virtual ev_int32 getMinLevel() const;
					/// <summary>
					/// 获取最大瓦片级别
					/// </summary>
					/// <returns>最大瓦片级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取最小瓦片级别
					/// </summary>
					/// <returns>最小瓦片级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置最大瓦片级别
					/// </summary>
					/// <param name="maxlevel">最大瓦片级别</param>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置最小瓦片级别
					/// </summary>
					/// <param name="maxlevel">最小瓦片级别</param>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);
					
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
                    /// 获取专题图
                    /// </summary>
                    /// <returns>专题图</returns>
                    virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
                    /// <summary>
                    /// 设置专题图
                    /// </summary>
                    /// <param name="theme">专题图</param>
                    /// <returns></returns>
                    /// <memo></memo>
                    virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 获取专题图内存流
					/// </summary>
					/// <returns>专题图内存流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断内存流是否相同
					/// </summary>
					/// <returns>内存流是否相同</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);
					/// <summary>
					/// 通知瓦片已创建/销毁
					/// </summary>
					/// <param name="level">级别</param>
					/// <param name="row">行</param>
					/// <param name="col">列</param>
					virtual ev_void _notifyTileCreated(ev_uint32 level,ev_uint32 row,ev_uint32 col);
					virtual ev_void _notifyTileDestroyed(ev_uint32 level,ev_uint32 row,ev_uint32 col);
					/// <summary>
					/// 获知指定级别的瓦片是否有效
					/// </summary>
					/// <returns>指定级别的瓦片有效性</returns>
					virtual ev_bool levelValid(ev_int32 level) const;

					/// <summary>
					/// 返回图层地理范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层地理范围</returns>
					virtual const EarthView::World::Spatial::Geometry::CEnvelope& getGeoExtent() const;

					/// <summary>
					/// 设置卷帘范围(像素单位，取值为[-1,1])
					/// </summary>
					/// <param name="minPX">最小x坐标</param>
					/// <param name="minPY">最小y坐标</param>
					/// <param name="maxPX">最大x坐标</param>
					/// <param name="maxPY">最大y坐标</param>
					/// <returns>是否成功</returns>
					virtual ev_bool setCurtainExtent(ev_real32 minPX,ev_real32 minPY,ev_real32 maxPX,ev_real32 maxPY);

					/// <summary>
					/// 设置卷帘透明度(取值范围[0,1]; 0为不透明,1为全透明)
					/// </summary>
					/// <param name="alpha">透明度</param>					
					/// <returns>是否成功</returns>
					virtual ev_bool setCurtainAlpha(ev_real32 alpha);

					/// <summary>
					/// 获取卷帘范围(像素单位，取值为[-1,1])
					/// </summary>
					/// <param name="minPX">最小x坐标</param>
					/// <param name="minPY">最小y坐标</param>
					/// <param name="maxPX">最大x坐标</param>
					/// <param name="maxPY">最大y坐标</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getCurtainExtent(_out ev_real32& minPX,_out ev_real32& minPY,_out ev_real32& maxPX,_out ev_real32& maxPY);
					
					/// <summary>
					/// 获取卷帘是否开启
					/// </summary>					
					/// <returns></returns>
					virtual ev_bool getCurtainEnabled()const;

					/// <summary>
					/// 开启或者关闭卷帘
					/// </summary>		
					/// <param name="enabled"></param>
					/// <returns></returns>
					virtual ev_bool setCurtainEnabled(ev_bool enabled);

					/// <summary>
					/// 获取卷帘透明度(取值范围[0,1]; 0为不透明,1为全透明)
					/// </summary>
					/// <param name="alpha">透明度</param>					
					/// <returns>是否成功</returns>
					virtual ev_bool getCurtainAlpha(ev_real32& alpha);
					/// <summary>
					/// 获取图层贴地模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>贴地模式</returns>
					virtual ClampMode getClampMode() const;
					/// <summary>
					/// 设置图层贴地模式
					/// </summary>
					/// <param name="mode">贴地模式</param>
					/// <returns></returns>
					virtual void setClampMode(ClampMode mode);

                ev_private:
					ev_bool intersect2(Real minX,Real minY,Real maxX,Real maxY);
					ev_bool intersect(Real minX,Real minY,Real maxX,Real maxY);
				protected:
					ev_void lonlat2mercator(ev_real64& x, ev_real64& y);
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;

					EarthView::World::Spatial::Utility::CSpatialReference* mSRMercator;
					EarthView::World::Spatial::Utility::CSpatialReference* mSRWorld;

					ev_int32 mMinLevel;
					ev_int32 mMaxLevel;

					ev_real32 mMinCurtainX;
					ev_real32 mMinCurtainY;
					ev_real32 mMaxCurtainX;
					ev_real32 mMaxCurtainY;

					ev_real32 mCurtainAlpha;

					ev_bool mCurtianEnabled;

					ClampMode mClampMode;

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(IClampSceneLayer);

				};

				class EV_GEOMETRY3D_DLL CLayerTilePair : public EarthView::World::Core::CBaseObject
				{
				public:
					CLayerTilePair();
					CLayerTilePair(IClampSceneLayer* layer,const EarthView::World::Spatial::CTileData& tile);
				ev_private:
					CLayerTilePair(EarthView::World::Core::CNameValuePairList* pList);
				public:
					IClampSceneLayer* mpLayer;
					EarthView::World::Spatial::CTileData mTileData;
				};

				class EV_GEOMETRY3D_DLL CLayerTileList : public EarthView::World::Core::CBaseObject         			
				{
				ev_private:
					typedef list<CLayerTilePair> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					iterator insert(iterator pos, CLayerTilePair const &t)
					{
						return mList.insert(pos, t);
					}

					void insert(iterator pos, iterator first, iterator last)
					{
						return mList.insert(pos, first,last);
					}

				private:
					InternalList mList;
				ev_private:
					CLayerTileList(_in EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CLayerTileList() {}
					void push_back(CLayerTilePair const &t)
					{
						mList.push_back(t);
					}
					void push_front(CLayerTilePair const   &t)
					{
						mList.push_front(t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					CLayerTilePair &front()
					{
						return mList.front();
					}
					CLayerTilePair &back()
					{
						return mList.back();
					}
					CLayerTilePair &at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, CLayerTilePair const &t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};
			}
		}
	}
}
#endif
