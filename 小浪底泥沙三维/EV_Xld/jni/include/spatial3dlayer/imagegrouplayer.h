#ifndef _IMAGEGROUPLAYER_H
#define _IMAGEGROUPLAYER_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "core/ev_time.h"
#include "core/readwritelock.h"

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iwebclampscenelayer.h"


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

                /// <summary>
                /// CImageGroupLayer(影像图层组)管理以下图层:
				/// 影像图层CImageClampSceneLayer
				/// 嵌套的影像图层组CImageGroupLayer
                /// </summary>
                class EV_3DLAYER_DLL CImageGroupLayer
                    : public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CImageGroupLayer(EarthView::World::Core::CNameValuePairList* pList);
                public:                   
                    enum TimePriority
                    {
                        TP_EARLIEST_WHEN_LATER = 1,     //晚于某个时间的最早的一个时间
                        TP_LATEST_WHEN_EARLIER,         //早于某个时间的最晚的一个时间                        
                        TP_CLOSET                       //最接近某个时间的一个时间(可早可晚)
                    };

                    class EV_3DLAYER_DLL TimeList : public EarthView::World::Core::CBaseObject         			
                    {
                    ev_private:
                        typedef deque<EarthView::World::Core::CCoreTime > InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        /// <summary>
                        /// 在迭代器pos插入
                        /// </summary>
                        /// <param name="pos">迭代器标志</param>
                        /// <param name="t">子</param>
                        /// <returns>迭代器</returns>
                        iterator insert(iterator pos, EarthView::World::Core::CCoreTime  const &t);                        
                        void splice(iterator where, EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimeList &lst)
                        {
                            mList.insert(where,lst.begin(),lst.end());
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        /// <summary>
                        /// 构造函数
                        /// </summary>
                        /// <param name="pList">构造函数参数键值对表</param>
                        /// <returns></returns>
                        TimeList(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        /// <summary>
                        /// 默认构造函数
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns></returns>
                        TimeList();

                        /// <summary>
                        /// 在当前粒子列表后面增加一个元素
                        /// </summary>
                        /// <param name="t">增加的元素</param>
                        /// <returns></returns>
                        void push_back(EarthView::World::Core::CCoreTime  const &t);
                        /// <summary>
                        /// 在当前粒子列表前面增加一个元素
                        /// </summary>
                        /// <param name="t">增加的元素</param>
                        /// <returns></returns>
                        void push_front(EarthView::World::Core::CCoreTime  const &t);
                        /// <summary>
                        /// 删除当前粒子列表最后一个元素
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns></returns>
                        void pop_back();

                        /// <summary>
                        /// 删除当前粒子列表第一个元素
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns></returns>
                        void pop_front();

                        /// <summary>
                        /// 返回当前粒子列表第一个元素的引用
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns>第一个元素的引用</returns>
                        EarthView::World::Core::CCoreTime  & front();

                        /// <summary>
                        /// 返回当前粒子列表最后一个元素的引用
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns>最后一个元素的引用</returns>
                        EarthView::World::Core::CCoreTime  & back();
                        /// <summary>
                        /// 返回当前粒子列表第pos元素的引用
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns>第pos元素的引用</returns>
                        EarthView::World::Core::CCoreTime  & at(ev_uint32 pos);
                        /// <summary>
                        /// 在当前粒子列表第pos元素之后插入元素t
                        /// </summary>
                        /// <param name="pos">迭代器下标</param>
                        /// <param name="t">要插入的元素</param>
                        /// <returns></returns>
                        void insert(ev_uint32 pos, EarthView::World::Core::CCoreTime  const &t);
                        /// <summary>
                        /// 移除当前粒子列表中的某一个元素
                        /// </summary>
                        /// <param name="pos">该移除元素所在迭代器位置</param>
                        /// <returns></returns>
                        void remove(ev_size_t pos);

                        /// <summary>
                        /// 判断当前粒子列表是否为空
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns>如果为空返回true，否则false</returns>
                        ev_bool empty() const;

                        /// <summary>
                        /// 当前粒子列表存储元素的大小
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns>当前广告版元素的个数</returns>
                        ev_size_t size() const;
                        /// <summary>
                        /// 调整粒子列表存储元素的大小
                        /// </summary>
                        /// <param name="newSize">新的列表存储元素的个数</param>
                        /// <returns></returns>
                        void resize(ev_size_t newSize);
                        /// <summary>
                        /// 清空列表中的元素
                        /// </summary>
                        /// <param name=""></param>
                        /// <returns></returns>
                        void clear();
                    };

                    class EV_3DLAYER_DLL CDesiredTime : public EarthView::World::Core::CBaseObject
                    {
                    public:      
                        CDesiredTime() : priority(TP_LATEST_WHEN_EARLIER)
                        {
                            time = EarthView::World::Core::CCoreTime::currentTime();
                        }
                        CDesiredTime(const EarthView::World::Core::CCoreTime & tm,EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimePriority prt) : time(tm),priority(prt)
                        {
                            
                        }
                    ev_private:
                        CDesiredTime(EarthView::World::Core::CNameValuePairList* pList) 
                            : time(pList != NULL ? *(EarthView::World::Core::CCoreTime*)pList->GetAt("tm") : EarthView::World::Core::CCoreTime::currentTime())
                            , priority(pList != NULL ? (EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimePriority)*(ev_uint32*)pList->GetAt("prt") : TP_LATEST_WHEN_EARLIER)
                        {
                           
                        }

                    public:
                        EarthView::World::Core::CCoreTime  time;
                        EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimePriority priority;

                    };

                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CImageGroupLayer();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">图层名</param>
                    /// <returns></returns>
                    CImageGroupLayer(const EVString& name);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CImageGroupLayer();

                public:
                    /// <summary>
                    /// 获取图层的类型
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>图层的类型</returns>
                    virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
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
					/// 获取所有可见图层的瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tiles">瓦片集合</param>
					/// <returns>是否成功</returns>
					ev_bool getCurtainTiles(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial3D::Atlas::CLayerTileList& tiles);
                    
					/// <summary>
					/// 获取指定图层的卷帘范围(像素单位，取值为[-1,1])
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="minPX">最小x坐标</param>
					/// <param name="minPY">最小y坐标</param>
					/// <param name="maxPX">最大x坐标</param>
					/// <param name="maxPY">最大y坐标</param>
					/// <returns>是否成功</returns>
					ev_bool getCurtainExtent(EarthView::World::Spatial3D::Atlas::IClampSceneLayer* layer, _out ev_real32& minPX,_out ev_real32& minPY,_out ev_real32& maxPX,_out ev_real32& maxPY, _out ev_real32& alpha);

					virtual ev_bool getCurtainExtent(_out ev_real32& minPX,_out ev_real32& minPY,_out ev_real32& maxPX,_out ev_real32& maxPY);
					/// <summary>
                    /// 添加一个EarthView::World::Spatial3D::Atlas::IClampSceneLayer图层
                    /// </summary>
                    /// <param name="layer">图层</param>
                    /// <returns></returns>
                    ev_bool addLayer(EarthView::World::Spatial3D::Atlas::IClampSceneLayer* ref_layer);
                    /// <summary>
                    /// 插入一个EarthView::World::Spatial3D::Atlas::IClampSceneLayer图层
                    /// </summary>
                    /// <param name="pos">插入的位置</param>
                    /// <param name="layer">图层</param>
                    /// <returns></returns>
                    ev_bool insertLayer(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::IClampSceneLayer* ref_layer);
                    /// <summary>
                    /// 删除图层
                    /// </summary>
                    /// <param name="index">索引</param>
                    /// <returns>是否成功</returns>
                    ev_bool removeLayer(ev_uint32 index);
					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					ev_bool removeLayer(EarthView::World::Spatial3D::Atlas::IClampSceneLayer* layer);
                    /// <summary>
                    /// 获取EarthView::World::Spatial3D::Atlas::IClampSceneLayer的数量
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>EarthView::World::Spatial3D::Atlas::IClampSceneLayer的数量</returns>
                    ev_uint32 getLayerCount() const;
                    /// <summary>
                    /// 获取EarthView::World::Spatial3D::Atlas::IClampSceneLayer的索引
                    /// </summary>
                    /// <param name="layer">WMTSLayer图层</param>
                    /// <returns>EarthView::World::Spatial3D::Atlas::IClampSceneLayer的索引</returns>
                    ev_int32 getLayerIndex(const EarthView::World::Spatial3D::Atlas::IClampSceneLayer* layer) const;
                    /// <summary>
                    /// 获取影像图层或者图层组
					/// 调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
                    /// </summary>
                    /// <param name="index">索引</param>
                    /// <returns></returns>
					virtual EarthView::World::Spatial3D::Atlas::IClampSceneLayer* getLayer(ev_uint32 index) const;

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);

					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					virtual ev_bool isVisible() const;

                    /// <summary>
                    /// 移动图层顺序
                    /// </summary>
                    /// <param name="index">索引</param>
                    /// <param name="pos">移动后的顺序</param>
                    /// <returns>是否成功</returns>
                    ev_bool moveLayer(ev_uint32 index,ev_uint32 pos);                    

					/// <summary>
					/// 通知图层增加
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
                    virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 通知图层移除
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
                    virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 通知图层刷新
					/// </summary>
					/// <param name="camera">镜头</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
                    virtual ev_void _notifyRefreshed( const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
                    /// <summary>
                    /// 序列化成xml文本
                    /// </summary>
                    /// <param name=""></param>   
                    /// <returns></returns>					
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;

                    /// <summary>
                    /// 获得时间的刻度
                    /// </summary>
                    /// <param name=""></param>   
                    /// <returns></returns>		
                    EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimeList getTimeList();

					/// <summary>
					/// 设置期望的时间
					/// </summary>
					/// <param name="dt">期望时间</param>
					/// <param name="layerOrderChanged">图层顺序是否改变</param>
					/// <returns></returns>
                    ev_void setDesiredTime(const EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime& dt,ev_bool &layerOrderChanged)
                    {
						if(mDesiredTimeValid)
                        {
							mDesiredTime = dt;
							EarthView::World::Core::CWriteLocker locker(&mLock);
							sortLayers(layerOrderChanged);
						}
						else
						{
							layerOrderChanged = false;
						}
                    }

					/// <summary>
					/// 获取期望的时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>期望时间</returns>
                    const EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime& getDesiredTime(){return mDesiredTime;}

					/// <summary>
					/// 设置期望的时间是否有效
					/// </summary>
					/// <param name="valid">是否有效</param>
					/// <param name="layerOrderChanged">图层顺序是否改变</param>
					/// <returns></returns>
                    ev_void setDesiredTimeValid(ev_bool valid,ev_bool &layerOrderChanged)
                    {
                        mDesiredTimeValid = valid;       
						EarthView::World::Core::CWriteLocker locker(&mLock);
                        sortLayers(layerOrderChanged);                       
                    }                 

					/// <summary>
					/// 获取期望的时间是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否有效</returns>
                    ev_bool getDesiredTimeValid(){return mDesiredTimeValid;}

					/// <summary>
					/// 判断是否有可见图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否有效</returns>
					ev_bool hasVisibleLayer()const;

					/// <summary>
					/// 启用或者禁用卷帘
					/// </summary>
					/// <param name="enabled"></param>
					/// <returns>是否有效</returns>
					ev_bool setCurtainEnabled(ev_bool enabled);

					/// <summary>
					/// 获取卷帘是否启用
					/// </summary>
					/// <param name="enabled"></param>
					/// <returns>是否有效</returns>
					ev_bool getCurtainEnabled()const;

					/// <summary>
					/// 获取卷帘图层数量
					/// </summary>					
					/// <returns></returns>
					ev_uint32 getCurtainLayerCount()const;

					/// <summary>
					/// 获取图层是否开启卷帘
					/// </summary>					
					/// <returns></returns>
					ev_bool getLayerCurtainEnabled(IClampSceneLayer* layer)const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
                protected:
                    static EarthView::World::Core::DataStreamPtr drawImages(list<EarthView::World::Core::DataStreamPtr>& images);
					static EarthView::World::Core::DataStreamPtr drawImages(list<EarthView::World::Core::DataStreamPtr>& images,ev_real64 lastX,ev_real64 lastY,ev_real64 lastW,ev_real64 lastH);
                    static ev_bool toTime(const EVString& str,EarthView::World::Core::CCoreTime & time);

                protected:
                    typedef list<EarthView::World::Spatial3D::Atlas::IClampSceneLayer*> ImageLayers;
					
                    ev_void notifyChanged();
                    ev_void sortLayers(ev_bool &layerOrderChanged);
                    ImageLayers decomposeLayers();
                    ev_bool lessTimeByDesired(const EarthView::World::Core::CCoreTime & a,const EarthView::World::Core::CCoreTime & b);

					EarthView::World::Spatial::CTileData getTile(ev_int32& level,ev_int32& row,ev_int32& col, const EVString& streamType, ev_bool excludeCurtain);
					ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,ev_bool excludeCurtain,_inout EarthView::World::Spatial::CTileData& tile);

					ev_void positionInParentTile(ev_int32 level,ev_int32 row,ev_int32 col,ev_real64& x,ev_real64& y, ev_real64& w,ev_real64& h);

					static EarthView::World::Core::MemoryDataStreamPtr combineThemeStream( list< pair<EarthView::World::Spatial3D::Atlas::IClampSceneLayer*,EarthView::World::Core::DataStreamPtr> >& layerThemes );
					ev_bool isThemesEqual( ev_int32 tileMode,ev_int32 level,ev_int32 row,ev_int32 col,ev_bool excludeCurtain,Real minX,Real minY,Real maxX,Real maxY,_out EarthView::World::Core::MemoryDataStreamPtr& stream);
                private:
                    C_DISABLE_COPY(CImageGroupLayer);

                    friend class CImageGroupLayerFactory;

                    ev_void insertLayer_nolock(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::IClampSceneLayer* layer);
                protected:

                    ImageLayers mImageLayers;
                    const EarthView::World::Graphic::CCamera* mpCamera;                     
           
                    CImageGroupLayer* mParentGroup;
                    ImageLayers mSortedImageLayers;  //将嵌套的图层组解开之后，按照影像时间排序的图层集合
                    EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime mDesiredTime;      //希望渲染的时间                    
                    ev_bool mDesiredTimeValid;      //是否使用时间维度

					ev_bool mCurtainEnabled;

                    mutable EarthView::World::Core::CReadWriteLock mLock;

					EarthView::World::Core::CReadWriteLock mCacheNameLock;
					EVString mCacheName;
                };

                /// <summary>
                /// ImageGroupLayer的类工厂
                /// 管理ImageGroupLayer类
                /// </summary>
                class EV_3DLAYER_DLL CImageGroupLayerFactory: public EarthView::World::Spatial::Atlas::ILayerFactory
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CImageGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CImageGroupLayerFactory();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CImageGroupLayerFactory();

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
                    /// <param name="strXML">xml</param>
                    /// <returns>工厂的产品</returns>
                    EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    EarthView::World::Spatial::Atlas::ILayer* createInstance();
                    /// <summary>
                    /// 销毁一个图层
                    /// </summary>
                    /// <param name="layer">销毁工厂的产品</param>
                    /// <returns>是否成功</returns>
                    ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

                public:
                    static const EVString msImageGroupLayerFactoryName;
                };
            }
        }
    }
}
#endif
