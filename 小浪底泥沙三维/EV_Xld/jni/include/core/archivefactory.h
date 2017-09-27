#ifndef _ArchiveFactory_H__
#define _ArchiveFactory_H__

#include "core/archive.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///<summary> Abstract factory class, archive codec plugins can register concrete
            ///subclasses of this.
            ///@remarks
            ///All access to 'archives' (collections of files, compressed or
            ///just folders, maybe even remote) is managed via the abstract
            ///CArchive class. Plugins are expected to provide the
            ///implementation for the actual codec itself, but because a
            ///subclass of CArchive has to be created for every archive, a
            ///factory class is required to create the appropriate subclass.
            ///@par
            ///So archive plugins create a subclass of CArchive AND a subclass
            ///of CArchiveFactory which creates instances of the CArchive
            ///subclass. See the 'Zip' and 'FileSystem' plugins for examples.
            ///Each CArchive and CArchiveFactory subclass pair deal with a
            ///single archive type (identified by a string).
            /// </summary>
            class EV_CORE_DLL CArchiveFactory : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CArchiveFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CArchiveFactory();
                CArchiveFactory();

                virtual EVString getType() const;
                /// <summary> Creates a new object.</summary>
                /// <param>name= "name" Name of the object to create</param>
                /// <returns>return An object created by the factory. The type of the object depends on
                ///the factory.</returns>

                virtual EarthView::World::Core::CArchive *createInstance( const EVString &name );
                /// <summary> Destroys an object which was created by this factory.</summary>
                /// <param> name  =" ptr" Pointer to the object to destroy </param>
                /// <returns></returns>
                virtual void destroyInstance( EarthView::World::Core::CArchive *ptr);
            };
        }
    }
}

#endif

