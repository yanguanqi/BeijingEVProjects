#ifndef _ISCENE_H_
#define _ISCENE_H_

#include "spatialinterface/config.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ilayer.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Atlas{               

               
                class EV_INTERFACE_DLL IScene : public EarthView::World::Core::CAllocatedObject
                {
                public:
                   virtual ~IScene();

                public:
                    /// <summary>
                    /// 获取场景名称
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>场景名字</returns>
                    virtual EVString getName() const;

                    /// <summary>
                    /// 设置场景名称
                    /// </summary>
                    /// <param name="name">场景名称</param>
                    /// <returns></returns>
                    virtual ev_void setName( _in const EVString &name );

					/// <summary>
					/// 是否被打开
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isActive()const;

					/// <summary>
					/// 标记打开状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setActive(ev_bool active);

                    /// <summary>
                    /// 获取关于场景的描述
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>场景的描述</returns>
                    virtual EVString getDescription() const;

                    /// <summary>
                    /// 设置关于场景的描述
                    /// </summary>
                    /// <param name="desc">场景描述</param>
                    /// <returns></returns>
                    virtual ev_void setDescription( _in const EVString &desc );                    

                    /// <summary>
                    /// 获取场景当前坐标系统
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>坐标系统</returns>
                    virtual EarthView::World::Spatial::Geometry::ISpatialReference * getSpatialReference() const;
                    

                    /// <summary>
                    /// 获得KML图层组
                    /// </summary>                   
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* getKmlGroupLayer()const;                    

                    /// <summary>
                    /// 获得特征图层组(包括二维扩展图层、模型图层、特效图层)
                    /// </summary>                   
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* getFeatureGroupLayer()const;

                    /// <summary>
                    /// 获得影像图层组
                    /// </summary>                   
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* getImageGroupLayer()const;

                    /// <summary>
                    /// 获得高程图层组
                    /// </summary>                   
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* getTerrainGroupLayer()const;

                    /// <summary>
                    /// 创建场景的克隆体
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>场景的克隆体</returns>
                    virtual IScene * clone() const;

                    /// <summary>
                    /// 将场景的配置以流的方式导出
                    /// </summary>
                    /// <param name="stream">导出的流</param>
                    /// <returns></returns>
                    virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

                    /// <summary>
                    /// 将场景的配置以XML的方式导出
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>xml</returns>
                    virtual EVString toXML() const;

                ev_private:
                    IScene( EarthView::World::Core::CNameValuePairList *pList );

					void* mUserData;
                protected:
                    IScene();
                    C_DISABLE_COPY( IScene );
                };
            }
        }
    }
}
#endif


