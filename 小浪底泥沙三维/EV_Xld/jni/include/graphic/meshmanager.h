#ifndef __MeshManager_H__
#define __MeshManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "mathengine/vector3.h"
#include "patchmesh.h"
#include "mathengine/plane.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CModelSerializerListener;
            /// <summary>
            /// 模型管理器
            /// </summary>
            class EV_GRAPHIC_DLL CMeshManager: public EarthView::World::Graphic::CResourceManager
            {
            private:
				static EarthView::World::Graphic::CMeshManager *ms_Singleton;
			public:
				static EarthView::World::Graphic::CMeshManager &getSingleton();
				static EarthView::World::Graphic::CMeshManager *getSingletonPtr();
				class EV_GRAPHIC_DLL CMeshManagerInternalResourceLoader : public EarthView::World::Graphic::CManualResourceLoader
				{
ev_private:
					CMeshManagerInternalResourceLoader(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="_parant"></param>
					/// <returns></returns>
					CMeshManagerInternalResourceLoader(CMeshManager  *ref_parent);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMeshManagerInternalResourceLoader();
					virtual void prepareResource(EarthView::World::Graphic::CResource *resource);
					virtual void loadResource(EarthView::World::Graphic::CResource *resource) ;
				protected:
					EarthView::World::Graphic::CMeshManager *mParent;
				};
				virtual void prepareResource(EarthView::World::Graphic::CResource *resource);
				///virtual void loadResource(EarthView::World::Graphic::CResource* resource) ;
				virtual EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *getManualResourceLoaderPtr();
				///virtual EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader& getManualResourceLoaderPtr() const;

			private:
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *m_pManualResourceLoader;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMeshManager(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshManager();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMeshManager();
				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void _initialise();
				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会被附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会被附有阴影</param>
				/// <returns></returns>
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
					const EVString &name,
					const EVString &group,
					ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
					const EarthView::World::Core::NameValuePairList *params,
					EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
					EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
					ev_bool vertexBufferShadowed, ev_bool indexBufferShadowed);
				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会被附有阴影</param>
				/// <returns></returns>
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
					const EVString &name,
					const EVString &group,
					ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *params,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
                    ev_bool vertexBufferShadowed);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">设置资源是否手动下载</param>
                /// <param name="loader">指向ManualLoader的指针</param>
                /// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group,
                    ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *params,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">设置资源是否手动下载</param>
                /// <param name="loader">指向ManualLoader的指针</param>
                /// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group,
                    ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *params,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">设置资源是否手动下载</param>
                /// <param name="loader">指向ManualLoader的指针</param>
                /// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group,
                    ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *params);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">设置资源是否手动下载</param>
                /// <param name="loader">指向ManualLoader的指针</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group,
                    ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">设置资源是否手动下载</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group,
                    ev_bool isManual);
                /// <summary>
                /// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
                /// </summary>
                /// <param name="name">资源的名称</param>
                /// <param name="group">资源组的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name,
                    const EVString &group);
                /// <summary>
                /// 准备模型，如果模型已经被创建，则返回一个已存在的实例
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
                /// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr prepare( const EVString &filename, const EVString &groupName,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
                                  ev_bool vertexBufferShadowed, ev_bool indexBufferShadowed);
                /// <summary>
                /// 准备模型，如果模型已经被创建，则返回一个已存在的实例
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr prepare( const EVString &filename, const EVString &groupName,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage ,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                                  ev_bool vertexBufferShadowed);
                /// <summary>
                /// 准备模型，如果模型已经被创建，则返回一个已存在的实例
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr prepare( const EVString &filename, const EVString &groupName,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 准备模型，如果模型已经被创建，则返回一个已存在的实例
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr prepare( const EVString &filename, const EVString &groupName,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 加载模型
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
                /// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr load( const EVString &filename, const EVString &groupName,
                               EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage ,
                               EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                               ev_bool vertexBufferShadowed, ev_bool indexBufferShadowed);
                /// <summary>
                /// 加载模型
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr load( const EVString &filename, const EVString &groupName,
                               EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage ,
                               EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                               ev_bool vertexBufferShadowed);
                /// <summary>
                /// 加载模型
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
                /// <param name="indexBufferUsage">索引缓存创建的用法标</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr load( const EVString &filename, const EVString &groupName,
                               EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                               EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 加载模型
                /// </summary>
                /// <param name="filename">模型文件的实例</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMeshPtr load( const EVString &filename, const EVString &groupName,
                               EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 手动创建一个新的模型
                /// </summary>
                /// <param name="name">新模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针，被调用下载该模型</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createManual( const EVString &name, const EVString &groupName,
                                       EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                /// <summary>
                /// 手动创建一个新的模型
                /// </summary>
                /// <param name="name">新模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createManual( const EVString &name, const EVString &groupName);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果设置为true,顶点缓存会被创建并附有阴影</param>
                /// <param name="indexShadowBuffer">如果设置为true,索引缓存会被创建并附有阴影</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments, ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile, const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                    ev_bool vertexShadowBuffer , ev_bool indexShadowBuffer);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果设置为true,顶点缓存会被创建并附有阴影</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
                    ev_bool vertexShadowBuffer);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments , ev_int32 ysegments);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height,
                    ev_int32 xsegments);
                /// <summary>
                /// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
                /// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
                /// <param name="ySegmentsToKeep">从半球顶向下线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments, ev_int32 ysegments,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile , Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    const EarthView::World::Spatial::Math::CQuaternion &orientation,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                    ev_bool vertexShadowBuffer , ev_bool indexShadowBuffer ,
                    ev_int32 ySegmentsToKeep );
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
                /// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
                    ev_bool vertexShadowBuffer, ev_bool indexShadowBuffer);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage,
                    ev_bool vertexShadowBuffer);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector, const EarthView::World::Spatial::Math::CQuaternion &orientation);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile , const EarthView::World::Spatial::Math::CVector3 &upVector);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <param name="vTile">纹理在V方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile, Real vTile);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="uTile">纹理在U方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real uTile);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments , ev_int32 ysegments);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real curvature,
                    ev_int32 xsegments);
                /// <summary>
                /// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="curvature">平面的曲率</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedIllusionPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height , Real curvature);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
                /// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals , ev_uint16 numTexCoordSets ,
                    Real xTile , Real yTile , const EarthView::World::Spatial::Math::CVector3 &upVector ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage ,
                    ev_bool vertexShadowBuffer, ev_bool indexShadowBuffer );
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow,
                    ev_int32 xsegments, ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real xTile , Real yTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage, ev_bool vertexShadowBuffer);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow,
                    ev_int32 xsegments, ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets ,
                    Real xTile , Real yTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments , ev_int32 ysegments,
                    ev_bool normals , ev_uint16 numTexCoordSets,
                    Real xTile , Real yTile , const EarthView::World::Spatial::Math::CVector3 &upVector,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <param name="upVector">平面的'up'方向</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments, ev_int32 ysegments,
                    ev_bool normals , ev_uint16 numTexCoordSets ,
                    Real xTile, Real yTile , const EarthView::World::Spatial::Math::CVector3 &upVector);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <param name="yTile">纹理在y方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments, ev_int32 ysegments ,
                    ev_bool normals, ev_uint16 numTexCoordSets,
                    Real xTile , Real yTile );
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <param name="xTile">纹理在x方向上重复的次数</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals , ev_uint16 numTexCoordSets,
                    Real xTile );
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments, ev_int32 ysegments,
                    ev_bool normals, ev_uint16 numTexCoordSets);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <param name="normals">如果为true，创建该平面的法线</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow,
                    ev_int32 xsegments , ev_int32 ysegments ,
                    ev_bool normals);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <param name="ysegments">Y轴方向线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow,
                    ev_int32 xsegments, ev_int32 ysegments);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <param name="xsegments">X轴方向线段的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow ,
                    ev_int32 xsegments);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="bow">曲面中弓形的数量</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height, Real bow);
                /// <summary>
                /// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="plane">平面的方向和到原定的距离</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMeshPtr createCurvedPlane(
                    const EVString &name, const EVString &groupName, const EarthView::World::Spatial::Math::CPlane &plane,
                    Real width, Real height);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
                /// <param name="vbUsage">顶点缓存的用法标记</param>
                /// <param name="ibUsage">索引缓存的用法标记</param>
                /// <param name="vbUseShadow">决定顶点缓存是否产生阴影缓存</param>
                /// <param name="ibUseShadow">决定索引缓存是否产生阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel,
                    ev_size_t vMaxSubdivisionLevel,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage,
                    EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage ,
                    ev_bool vbUseShadow, ev_bool ibUseShadow );
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
                /// <param name="vbUsage">顶点缓存的用法标记</param>
                /// <param name="ibUsage">索引缓存的用法标记</param>
                /// <param name="vbUseShadow">决定顶点缓存是否产生阴影缓存</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel,
                    ev_size_t vMaxSubdivisionLevel ,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage ,
                    ev_bool vbUseShadow);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
                /// <param name="vbUsage">顶点缓存的用法标记</param>
                /// <param name="ibUsage">索引缓存的用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel,
                    ev_size_t vMaxSubdivisionLevel ,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
                /// <param name="vbUsage">顶点缓存的用法标记</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel ,
                    ev_size_t vMaxSubdivisionLevel ,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                    EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel,
                    ev_size_t vMaxSubdivisionLevel,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel , ev_size_t vMaxSubdivisionLevel);
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    ev_size_t uMaxSubdivisionLevel );
                /// <summary>
                /// 基于控制顶点队列创建一个贝塞尔曲面
                /// </summary>
                /// <param name="name">模型的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
                /// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
                /// <param name="width">在世界坐标系下平面的宽</param>
                /// <param name="height">在世界坐标系下平面的高</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPatchMeshPtr createBezierPatch(
                    const EVString &name, const EVString &groupName, void *controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height);
                /// <summary>
                /// 设置是否为阴影准备模型
                /// </summary>
                /// <param name="enable"></param>
                /// <returns></returns>
                void setPrepareAllMeshesForShadowVolumes(ev_bool enable);

                /// <summary>
                /// 获得是否为阴影准备模型
                /// </summary>
                /// <param name="enable"></param>
                /// <returns></returns>
                ev_bool getPrepareAllMeshesForShadowVolumes();
                /** Gets the factor by which the bounding box of an entity is padded.
                    Default is 0.01
                */
                Real getBoundsPaddingFactor();

                /** Sets the factor by which the bounding box of an entity is padded
                */
                void setBoundsPaddingFactor(Real paddingFactor);
                /// <summary>
                /// 设置一个监听器控制模型下载的连续化
                /// </summary>
                /// <param name="listener"></param>
                /// <returns></returns>
                void setListener(EarthView::World::Graphic::CModelSerializerListener *listener);
                /// <summary>
                /// 获得控制模型下载的连续化的监听器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CModelSerializerListener *getListener();
                /** @see CManualResourceLoader::loadResource */
                void loadResource(EarthView::World::Graphic::CResource *res);
            ev_internal:
                //// @copydoc CResourceManager::createImpl
                EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                      const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *loader,
                                      const EarthView::World::Core::NameValuePairList *createParams);
            protected:
                /** Utility method for tessellating 2D meshes.
                */
                void tesselate2DMesh(CSubMesh *pSub, ev_uint16 meshWidth, ev_uint16 meshHeight,
                                     ev_bool doubleSided = false,
                                     EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = CHardwareBuffer::HBU_STATIC_WRITE_ONLY,
                                     ev_bool indexSysMem = false);
                void createPrefabPlane();
                void createPrefabCube();
                void createPrefabSphere();

                /** Enum identifying the types of manual mesh built by this manager */
                enum MeshBuildType
                {
                    MBT_PLANE,
                    MBT_CURVED_ILLUSION_PLANE,
                    MBT_CURVED_PLANE
                };
                /** Saved parameters used to (re)build a manual mesh built by this class */
                struct MeshBuildParams
                {
                    MeshBuildType type;
                    EarthView::World::Spatial::Math::CPlane plane;
                    Real width;
                    Real height;
                    Real curvature;
                    ev_int32 xsegments;
                    ev_int32 ysegments;
                    ev_bool normals;
                    ev_uint16 numTexCoordSets;
                    Real xTile;
                    Real yTile;
                    EarthView::World::Spatial::Math::CVector3 upVector;
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                    EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage;
                    EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage;
                    ev_bool vertexShadowBuffer;
                    ev_bool indexShadowBuffer;
                    ev_int32 ySegmentsToKeep;
                };
                /** Map from resource pointer to parameter set */
                typedef map<EarthView::World::Graphic::CResource *, MeshBuildParams> MeshBuildParamsMap;
                MeshBuildParamsMap mMeshBuildParams;
                /** Utility method for manual loading a plane */
                void loadManualPlane(CMesh *pMesh, MeshBuildParams &params);
                /** Utility method for manual loading a curved plane */
                void loadManualCurvedPlane(CMesh *pMesh, MeshBuildParams &params);
                /** Utility method for manual loading a curved illusion plane */
                void loadManualCurvedIllusionPlane(CMesh *pMesh, MeshBuildParams &params);
                ev_bool mPrepAllMeshesForShadowVolumes;

                ///the factor by which the bounding box of an entity is padded
                Real mBoundsPaddingFactor;
                /// The listener to pass to serializers
                EarthView::World::Graphic::CModelSerializerListener *mListener;
            };
            /** @} */
            /** @} */
        }
    }
}
///namespace
#endif

