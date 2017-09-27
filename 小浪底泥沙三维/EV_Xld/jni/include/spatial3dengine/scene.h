#ifndef _SCENE_H_
#define _SCENE_H_

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialinterface/iscene.h"

#include "core/xml.h"
#include "core/stringinterface.h"

namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
            class CGeoSceneManager;
        }
    }
}


namespace EarthView{
    namespace World{
        namespace Spatial3D{
            namespace Atlas{   
                
                class CSceneFactory;
                class EV_Spatial3DEngine_DLL CScene : public EarthView::World::Spatial::Atlas::IScene
                {
				protected:

                private:
                    friend class CSceneFactory;
                public:       
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CScene();

                public:
					/// <summary>
					/// 获取场景管理器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    EarthView::World::Spatial3D::CGeoSceneManager* getGeoSceneManager()const;

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
                    virtual EarthView::World::Spatial::Atlas::IScene * clone() const;

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
					
					/// <summary>
					/// 设置用于序列化的xml
					/// </summary>
					/// <param name="xml">xml</param>
					/// <returns></returns>
					ev_void setSerialXML(EVString& xml);

					/// <summary>
					/// 获取用于序列化的xml
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					EVString& getSerialXML();

					/// <summary>
					/// 从流初始化
					/// </summary>
					/// <param name="stream">流数据</param>
					/// <returns></returns>
					ev_void fromStream(EarthView::World::Core::CDataStream &stream);

					/// <summary>
					/// 从xml初始化
					/// </summary>
					/// <param name="strXML">xml数据</param>
					/// <returns></returns>
					ev_void fromXml(const EVString& strXML);

					/// <summary>
					/// 获取EarthView::World::Core::CStringInterface对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::CStringInterface对象</returns>
					const EarthView::World::Core::CStringInterface& getStringInterface()const;

					/// <summary>
					/// 获取EarthView::World::Core::CStringInterface对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Core::CStringInterface对象</returns>
					EarthView::World::Core::CStringInterface& getStringInterface();

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
                    CScene( EarthView::World::Core::CNameValuePairList *pList );
                protected:       
                    CScene();
                    C_DISABLE_COPY( CScene );

					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void initParams();

                protected:
                    EarthView::World::Spatial3D::CGeoSceneManager* mGeoSceneMgr;

					EVString mSerialXML;  //序列化xml字符串(from)

				protected:

					EarthView::World::Core::CStringInterface mStringInterface;
                };
            }
        }
    }
}
#endif


