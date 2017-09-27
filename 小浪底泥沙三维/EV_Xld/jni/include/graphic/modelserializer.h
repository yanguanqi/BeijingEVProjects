#pragma once
#ifndef __ModelSerialzer_H__
#define __ModelSerialzer_H__
#include "graphic/graphic_config.h"
#include "serializer.h"
#include "core/graphic_exception.h"
#include "core/commonstringpairlist.h"
#include "graphic/mesh.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class DataStreamPtr;
			class CArchive;
			class CArchiveFactory;
			class CArchiveManager;
		}
	}
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /**
            @remarks
            This class allows users to hook into the mesh loading process and
            modify references within the mesh as they are loading. CMaterial and
            finer control over resources.
            */
            class EV_GRAPHIC_DLL CModelSerializerListener : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CModelSerializerListener(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CModelSerializerListener() {}
                virtual ~CModelSerializerListener() {}
                //// Called to override the loading of the given named material
                virtual void processMaterialName(EarthView::World::Graphic::CMesh *mesh, _inout EVString &name)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "processMaterialName", "EarthView::World::Graphic::CModelSerializerListener");
                }
                //// Called to override the reference to a skeleton
                virtual void processSkeletonName(EarthView::World::Graphic::CMesh *mesh, EVString &name)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "processSkeletonName", "EarthView::World::Graphic::CModelSerializerListener");
                }
            };
            class  EV_GRAPHIC_DLL CModelSerializer : public EarthView::World::Graphic::CSerializer
            {
            public:
                CModelSerializer(void);
            ev_private:
                CModelSerializer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CModelSerializer(void);
                virtual EVString getFileExtension()  const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "getFileExtension", "EarthView::World::Graphic::CModelSerializer");
                }
				virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh,EarthView::World::Core::NameValuePairList& miscParams)
				{
					EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "importMesh", "EarthView::World::Graphic::CModelSerializer");
				}
                virtual void importMesh(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CMesh *pMesh)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "importMesh", "EarthView::World::Graphic::CModelSerializer");
                }
                //// Sets the listener for this serializer
                void setListener(EarthView::World::Graphic::CModelSerializerListener *ref_listener)
                {
                    mListener = ref_listener;
                }
                //// Returns the current listener
                EarthView::World::Graphic::CModelSerializerListener *getListener()
                {
                    return mListener;
                }
            protected:
                EarthView::World::Graphic::CModelSerializerListener *mListener;
            };
            class EV_GRAPHIC_DLL CModelSerializerFactory : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CModelSerializerFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CModelSerializerFactory() {}
                virtual ~CModelSerializerFactory() {}
            public:
                virtual EVString getFileExtension()  const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "getFileExtension", "EarthView::World::Graphic::CModelSerializerFactory");
                }
                virtual EarthView::World::Graphic::CModelSerializer *createInstance() const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "createInstance", "EarthView::World::Graphic::CModelSerializerFactory");
                }
                virtual void destroyInstance(EarthView::World::Graphic::CModelSerializer *pSerializer) const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_ITEM_NOT_FOUND, "destroyInstance", "EarthView::World::Graphic::CModelSerializerFactory");
                }
            };
            class EV_GRAPHIC_DLL CModelSerializerFactoryEnum : public EarthView::World::Core::CBaseObject
            {
            private:
                static EarthView::World::Graphic::CModelSerializerFactoryEnum *ms_Singleton;
            ev_private:
                CModelSerializerFactoryEnum(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CModelSerializerFactoryEnum();
                ~CModelSerializerFactoryEnum();
            public:
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CModelSerializerFactoryEnum &getSingleton();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CModelSerializerFactoryEnum *getSingletonPtr();
            public:
                bool registerFactory(EarthView::World::Graphic::CModelSerializerFactory *ref_pFactory)
                {
                    if(mMapFactory.find(ref_pFactory->getFileExtension()) != mMapFactory.end())
                        return false;
                    else
                    {
                        mMapFactory[ref_pFactory->getFileExtension()] = ref_pFactory;
                        return true;
                    }
                }

                EarthView::World::Graphic::CModelSerializerFactory *getFactory(const EVString &fileExt)
                {
                    if(mMapFactory.find(fileExt) != mMapFactory.end())
                    {
                        return 	mMapFactory[fileExt];
                    }
                    else
                    {
                        return NULL;
                    }
                }
            protected:
                map<EVString, EarthView::World::Graphic::CModelSerializerFactory *> mMapFactory;
            };
        }
    }
}

#endif
