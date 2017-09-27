#ifndef IATMOSPHERE_H
#define IATMOSPHERE_H
#include "effect3d_config.h"
#include "core/xml.h"
#include <spatialobject/geometry/envelope.h>
#include "core/memoryallocatedobject.h"
#include "graphic/scenemanager.h"
#include <graphic/framelistener.h>

namespace EarthView
{
	namespace World
	{
        namespace Spatial
        {
			namespace Spatial3D
            {      
				/// <summary>
				/// 环境基类
				/// </summary>
				class EV_EFFECT3D_DLL IAtmosphere : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener//CFrameListener
				{
                public: 
                    virtual ~IAtmosphere();
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
                    virtual EVString getName()const;
					/// <summary>
					///　设置名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
                    virtual ev_void setName(const EVString &name);

                    /// <summary>
                    /// 从xml元素读取
                    /// </summary>
                    /// <param name=""></param>   
                    /// <returns></returns>
                    virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					///　序列化xml元素
					/// </summary>
					/// <returns></returns>
                    virtual EarthView::World::Core::CXmlElement toXmlElement(EarthView::World::Core::CXmlElement&element);
					/// <summary>
					///　序列化xml文本
					/// </summary>
					/// <returns></returns>
                    virtual ev_void fromXML(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					///　存储为xml文本
					/// </summary>
					/// <returns></returns>
                    virtual EVString toXML() const;	
                    //virtual EVString toXML(EarthView::World::Core::CXmlElement&element) const;
				ev_private:
                    IAtmosphere();
                    IAtmosphere(EarthView::World::Core::CNameValuePairList *pList);
                protected:
                    EarthView::World::Core::CXmlElement telement;
                private:
                };

				/// <summary>
				///　环境工厂类
				/// </summary>
                class EV_EFFECT3D_DLL IAtmosphereFactory : public EarthView::World::Core::CAllocatedObject
                {
ev_private:
					IAtmosphereFactory(EarthView::World::Core::CNameValuePairList *pList);
               public:
                    IAtmosphereFactory();

                    virtual ~IAtmosphereFactory();
                protected:
                    
				public:
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Graphic::CSceneManager* pScene);
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(const EVString& strXml, EarthView::World::Graphic::CSceneManager* pScene);
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Core::CXmlElement& element, EarthView::World::Graphic::CSceneManager* pScene);
					virtual   ev_void destroyInstance(EarthView::World::Spatial::Spatial3D::IAtmosphere* environment);
				private:
                };
            
            }
        }
	}
}
#endif
