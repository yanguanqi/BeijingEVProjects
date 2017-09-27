#ifndef _Archive_H__
#define _Archive_H__
#include "core/stringdefines.h"
#include "core/datastream.h"
#include "core/sharedptr.h"
#include "core/stringvector.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CArchive;

            class EV_CORE_DLL FileInfo : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                FileInfo(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                FileInfo();
                //// The archive in which the file has been found (for info when performing
                //// multi-EarthView::World::Core::CArchive searches, note you should still open through CResourceGroupManager)
                const EarthView::World::Core::CArchive *archive;
                //// The file's fully qualified name
                EVString filename;
                //// Path name; separated by '/' and ending with '/'
                EVString path;
                //// Base filename
                EVString basename;
                //// Compressed size
                ev_size_t compressedSize;
                //// Uncompressed size
                ev_size_t uncompressedSize;
            };
            class EV_CORE_DLL FileInfoList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                FileInfoList(EarthView::World::Core::CNameValuePairList *pList);
            ev_private:
                typedef vector<EarthView::World::Core::FileInfo> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;


                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///淇濈暀閮ㄥ垎瀹瑰櫒镄勫嚱鏁?涓庡弬鏁扮被鍨嫔拰杩斿洖链兼棤鍏崇殑鍑芥暟锛屽begin/end)
                void insert(iterator where, iterator first, iterator last)
                {
                    mList.insert(where, first, last);
                }
            private:
                InternalList mList;
            public:
                FileInfoList();
               
                void push_back(const EarthView::World::Core::FileInfo &t)
                {
                    mList.push_back(t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EarthView::World::Core::FileInfo &operator[](ev_size_t n)
                {
                    reference l = mList[n];
                    return l;
                }
                EarthView::World::Core::FileInfo const &operator[](ev_size_t n) const
                {
                    const_reference l =  mList[n];
                    return l;
                }
                EarthView::World::Core::FileInfo &at(ev_size_t n)
                {
                    reference l = mList[n];
                    return l;
                }
                EarthView::World::Core::FileInfo const &at(ev_size_t n) const
                {
                    const_reference l =  mList[n];
                    return l;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void clear()
                {
                    mList.clear();
                }
            };
            /*typedef CSharedPtr<EarthView::World::Core::FileInfoList> EarthView::World::Core::FileInfoListPtr;*/
            class EV_CORE_DLL FileInfoListPtr : public EarthView::World::Core::CBaseObject, public CSharedPtr<EarthView::World::Core::FileInfoList>
            {
            ev_private:
                FileInfoListPtr(_in EarthView::World::Core::CNameValuePairList *pList): CSharedPtr<FileInfoList>(
                        pList && pList->Exist("rep") ? (EarthView::World::Core::FileInfoList *)pList->GetAt("rep") : (EarthView::World::Core::FileInfoList *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        CSharedPtr<EarthView::World::Core::FileInfoList>r = *(CSharedPtr<EarthView::World::Core::FileInfoList>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
					else 
					{

					}
                }
            public:
                FileInfoListPtr() : CSharedPtr<FileInfoList>() {}
                explicit FileInfoListPtr(FileInfoList *rep) : CSharedPtr<FileInfoList>(rep) {}
                explicit FileInfoListPtr(FileInfoList *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : CSharedPtr<FileInfoList>(rep, inFreeMethod) {}
                FileInfoListPtr(const FileInfoListPtr &r) : CSharedPtr<FileInfoList>(r) {}

                EarthView::World::Core::FileInfoList *get() const
                {
                    return CSharedPtr<EarthView::World::Core::FileInfoList>::get();
                }
            };

            class EV_CORE_DLL CArchive : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                //// EarthView::World::Core::CArchive name
                EVString mName;
                //// EarthView::World::Core::CArchive type code
                EVString mType;
                //// Read-only flag
                ev_bool mReadOnly;

            ev_private:
                CArchive(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary> Constructor - don't call direct, used by CArchiveFactory </summary>
                /// <param name = "name"> </param>
                ///<param name = "archType"> </param>
                ///<returns></returns>
                CArchive( const EVString &name, const EVString &archType );

                /// <summary> Default destructor.</summary>
                /// <param></param>
                ///<returns></returns>
                virtual ~CArchive();
                /// <summary> Get the name of this archive </summary>
                /// <param></param>
                /// <returns> EVString </returns>
                const EVString &getName() const;
                /// <summary> Returns whether this archive is case sensitive in the way it matches files </summary>
                /// <param></param>
                /// <returns>case sensitive returns true,else return false</returns>
                virtual ev_bool isCaseSensitive() const;
                /// <summary> Loads the archive.
                ///  This initializes all the internal data of the class.
                ///  Do not call this function directly, it is meant to be used
                ///    only by the CArchiveManager class.
                /// </summary>
                /// <param></param>
                /// <returns></returns>
                virtual void load();
                /// <summary> Unloads the archive.
                ///warning
                ///    Do not call this function directly, it is meant to be used
                ///    only by the CArchiveManager class.
                /// </summary>
                /// <param></param>
                /// <returns></returns>
                virtual void unload();
                /// <summary> Reports whether this EarthView::World::Core::CArchive is read-only, or whether the contents
                ///	can be updated.
                /// </summary>
                /// <param> </param>
                /// <returns>whether is it read only? read only returns true,else returns false</returns>
                virtual ev_bool isReadOnly() const;
                /// <summary> Open a stream on a given file.
                ///note
                ///    There is no equivalent 'close' method; the returned stream
                ///   controls the lifecycle of this file operation.
                /// </summary>
                ///<param> name = "filename" The fully qualified name of the file</param>
                ///<param> name = "readOnly" Whether to open the file in read-only mode or not (note,
                ///	if the archive is read-only then this cannot be set to false </param>
                /// <returns> A shared pointer to a CDataStream which can be used to
                ///    read / write the file. If the file is not present, returns a null
                ///	shared pointer.</returns>

                virtual EarthView::World::Core::DataStreamPtr open(const EVString &filename) const;
                virtual EarthView::World::Core::DataStreamPtr open(const EVString &filename, ev_bool readOnly ) const;
                ///<summary> Create a new file (or overwrite one already there).
                ///note If the archive is read-only then this method will fail.
                /// </summary>
                /// <param>name= "filename" The fully qualified name of the file </param>
                /// <returns> A shared pointer to a CDataStream which can be used to
                /// read / write the file.</returns>
                virtual EarthView::World::Core::DataStreamPtr create(const EVString &filename) const;
                /// <summary> Delete a named file.
                ///remarks Not possible on read-only archives
                /// </summary>
                /// <param> name ="filename" The fully qualified name of the file</param>
                /// <returns></returns>
                virtual void remove(const EVString &filename) const;
                /// <summary> List all file names in the archive.
                ///note
                ///    This method only returns filenames, you can also retrieve other
				/// </summary>
                ///<param> name= "recursive" Whether all paths of the archive are searched (if the
                ///    archive has a concept of that</param>
                ///<param> name="dirs" Set to true if you want the directories to be listed
                ///    instead of files</param>
                /// <returns> A list of filenames matching the criteria, all are fully qualified </returns>
                virtual EarthView::World::Core::StringVectorPtr list(ev_bool recursive, ev_bool dirs);
                virtual EarthView::World::Core::StringVectorPtr list(ev_bool recursive);
                virtual EarthView::World::Core::StringVectorPtr list();
                ///<summary> List all files in the archive with accompanying information.</summary>
                /// <param> name ="recursive" Whether all paths of the archive are searched (if the
                ///   archive has a concept of that) </param>
                ///<param> name=" dirs" Set to true if you want the directories to be listed
                ///    instead of files </param>
                /// <returns> A list of structures detailing quite a lot of information about
                ///    all the files in the archive.</returns>
                virtual EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive , ev_bool dirs );
                virtual EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive);
                virtual EarthView::World::Core::FileInfoListPtr listFileInfo();
                ///<summary> Find all file or directory names matching a given pattern
                ///    in this archive.
                ///note
                ///   This method only returns filenames, you can also retrieve other
                ///</summary>
                ///<param>name="pattern" The pattern to search for; wildcards (*) are allowed</param>
                ///<param>name= "recursive" Whether all paths of the archive are searched (if the
                ///    archive has a concept of that)</param>
                ///<param> name= "dirs" Set to true if you want the directories to be listed
                ///    instead of files </param>
                ///<returns> A list of filenames matching the criteria, all are fully qualified</returns>
                virtual EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive , ev_bool dirs );
                virtual EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive );
                virtual EarthView::World::Core::StringVectorPtr find(const EVString &pattern);
                /// <summary> Find out if the named file exists (note: fully qualified filename required) </summary>
                /// <param>name = "filename" named file </param>
                /// <returns> exist return true,else return false.</returns>
                virtual ev_bool exists(const EVString &filename);



                /// <summary> Find all files or directories matching a given pattern in this
                ///    archive and get some detailed information about them.
                /// </summary>
                /// <param> name = "pattern" The pattern to search for; wildcards (*) are allowed </param>
                /// <param>name = "recursive" Whether all paths of the archive are searched (if the
                /// archive has a concept of that)</param>
                /// <param> name = "dirs" Set to true if you want the directories to be listed
                ///    instead of files </param>
                /// <returns> A list of file information structures for all files matching
                ///    the criteria.</returns>
                virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive, ev_bool dirs ) const;
                virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive ) const;
                virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern) const;

                /// <summary> Return the type code of this EarthView::World::Core::CArchive
                /// <param></param>
                /// <returns> type </returns>
                const EVString &getType() const;

                ///ev_private:
                /// <summary> Retrieve the modification time of a given file </summary>
                /// <param> name = "filename" </param>
                /// <returns> time elapsed from modified </returns>
                virtual ev_int64 getModifiedTime(const EVString &filename);
            };
        }
    }
}

#endif

