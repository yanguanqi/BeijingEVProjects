#ifndef _Codec_H__
#define _Codec_H__
#include "graphic/graphic_config.h"
#include "core/sharedptr.h"
#include <core/datastream.h>
#include <core/iteratorwrapper.h>
#include <core/stringvector.h>


namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class DataStreamPtr;
        }
    }
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCodec;
            //typedef map< EVString, EarthView::World::Graphic::CCodec* > EarthView::World::Graphic::CodecList; 
            class EV_GRAPHIC_DLL CodecList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                // <summary>
                // 构造函数
                // </summary>
                // <param name="pList">构造函数参数键值对表</param>
                // <returns></returns>
                CodecList(_in EarthView::World::Core::CNameValuePairList* pList);
            public:
                // <summary>
                // 默认构造函数
                // </summary>
                // <param name=""></param>
                // <returns></returns>
                CodecList();
                // <summary>
                // 增加动画集合元素
                // </summary>
                // <param name="key">键</param>
                // <param name="val">值</param>
                // <returns>成功增加true，否则false</returns>
                ev_bool push( _in const EVString& key, _in EarthView::World::Graphic::CCodec* const& ref_val);
                // <summary>
                // 判断元素是否存在
                // </summary>
                // <param name="key">键</param>
                // <returns>存在true，否则false</returns>
                ev_bool exist( _in const EVString& key);
                // <summary>
                // 重载[]操作符
                // </summary>
                // <param name="key">键</param>
                // <returns>返回键对应的值</returns>
                EarthView::World::Graphic::CCodec*& operator[]( _in const EVString& key);
                // <summary>
                // 获得键对应的值
                // </summary>
                // <param name="key">键</param>
                // <returns>返回键对应的值</returns>
                EarthView::World::Graphic::CCodec*& get( _in const EVString& key);
                // <summary>
                // 删除键对应的键值对
                // </summary>
                // <param name="key">键</param>
                // <returns></returns>
                void erase( _in const EVString& key);
                // <summary>
                // 返回集合的大小
                // </summary>
                // <param name=""></param>
                // <returns>集合的大小</returns>
                ev_size_t size() const;
                // <summary>
                // 清空集合
                // </summary>
                // <param name=""></param>
                // <returns></returns>
                void clear();
                // <summary>
                // 判断集合是否为空
                // </summary>
                // <param name=""></param>
                // <returns>集合为空返回true，否则false</returns>
                ev_bool empty() const;

            ev_private:
                typedef map<EVString, EarthView::World::Graphic::CCodec*> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;            
                typedef pair<InternalList::iterator, bool> _Pairib;

                RESERVE_CONTAINER_FUNCTION_MAP(mList);// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                // <summary>
                // 集合插入元素
                // </summary>
                // <param name="val">值</param>
                // <returns>插入后的键值对</returns>
                _Pairib insert( _in const value_type& val);
                // <summary>
                // 查找元素
                // </summary>
                // <param name="key">键</param>
                // <returns>查找后返回对应迭代器</returns>
                iterator find( _in const EVString& key);       
                const_iterator find( _in const EVString& key) const;

            private:
                InternalList mList;

            };

            //<summary> Abstract class that defines a 'codec'.
            //    @remarks
            //        A codec class works like a two-way filter for data - data entered on
            //        one end (the decode end) gets processed and transformed into easily
            //        usable data while data passed the other way around codes it back.
            //    @par
            //        The codec concept is a pretty generic one - you can easily understand
            //        how it can be used for images, sounds, archives, even compressed data.
            //</summary>
            class EV_GRAPHIC_DLL CCodec : public EarthView::World::Core::CAllocatedObject
            {   

            protected:

                /** A map that contains all the registered codecs.
                */
                static EarthView::World::Graphic::CodecList ms_mapCodecs;

            public:
                class EV_GRAPHIC_DLL CCodecData : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CCodecData(EarthView::World::Core::CNameValuePairList* pList){}
                public:
                    CCodecData(){}

                    virtual ~CCodecData() {}

                    /** Returns the type of the data.
                    */
                    virtual EVString dataType() const { return "EarthView::World::Graphic::CCodec::CCodecData"; }
                };
                /*typedef CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData> EarthView::World::Graphic::CCodec::CodecDataPtr;*/
                class EV_GRAPHIC_DLL CodecDataPtr :public EarthView::World::Core::CBaseObject,public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>
                {
                ev_private:
                    CodecDataPtr(_in EarthView::World::Core::CNameValuePairList* pList):
                    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>(
                        pList && pList->Exist("rep") ? (EarthView::World::Graphic::CCodec::CCodecData*)pList->GetAt("rep") :(EarthView::World::Graphic::CCodec::CCodecData*) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                        	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData> r =
                        			*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>*)pList->GetAt("r");
                            EV_SET_AUTO_SHARED_MUTEX_NULL
                                EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                            {
                                EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                                    EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                                    pRep = r.pRep;
                                pUseCount = r.pUseCount; 
                                useFreeMethod = r.useFreeMethod;
                                // Handle zero pointer gracefully to manage STL containers
                                if(pUseCount)
                                {
                                    ++(*pUseCount); 
                                }
                            }
                        }
                    }
                public:
                    CodecDataPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>() {}
                    explicit CodecDataPtr(EarthView::World::Graphic::CCodec::CCodecData* rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>(rep) {}
                    explicit CodecDataPtr(EarthView::World::Graphic::CCodec::CCodecData* rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod)
                    : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>(rep, inFreeMethod) {}
                    CodecDataPtr(const CodecDataPtr& r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>(r) {}

                    EarthView::World::Graphic::CCodec::CCodecData* get() const
                    {
                    	return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCodec::CCodecData>::get();
                    }
                };

                //   typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CodecList> EarthView::World::Graphic::CCodec::CodecIterator;
                class EV_GRAPHIC_DLL CCodecPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    CCodecPair();			
                    ~CCodecPair();
                    EVString first;
                    EarthView::World::Graphic::CCodec* second;
                ev_private:
                    CCodecPair(EarthView::World::Core::CNameValuePairList* pList);
                };
                class EV_GRAPHIC_DLL CodecIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CodecIterator(EarthView::World::Core::CNameValuePairList* pList);

                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CodecList> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;

                    // <summary>
                    // 赋值符号"="的重载
                    // </summary>
                    // <param name="other">EarthView::World::Graphic::CCodec::CodecIterator类的引用</param>
                    // <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CCodec::CodecIterator& operator=(_in const EarthView::World::Graphic::CCodec::CodecIterator& other)
                    {
                        if ( &other == this )
                            return *this;

                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator,InternalIterator);
                            mIterator = NULL;
                        }

                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }

                    CodecIterator(const_iterator first,const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first,last);
                    }



                    KeyType peekNextKey() const
                    {
                        return mIterator->peekNextKey();
                    }

                    ValueType peekNextValue (  ) const
                    {
                        return mIterator->peekNextValue();
                    }

                    const PointerType peekNextValuePtr ()
                    {        
                        mvt = peekNextValue();
                        return &mvt;
                    }

                    ValueType getNext()
                    {
                        return mIterator->getNext() ;
                    }	

                    const IteratorType& begin() {return mIterator->begin();}

                    IteratorType& current(){return mIterator->current();}

                    const IteratorType& end() {return mIterator->end();}

                public:          
                    CodecIterator(EarthView::World::Graphic::CodecList& lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }

                    CodecIterator(const CodecIterator& other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);                
                    }

                    ~CodecIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator,InternalIterator);
                            mIterator = NULL;
                        }
                    }

                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }

                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }

                    EVString nextKey() const
                    {               
                        return mIterator->peekNextKey();
                    }

                    EarthView::World::Graphic::CCodec* nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }

                    EarthView::World::Graphic::CCodec** nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }

                    EarthView::World::Graphic::CCodec* next()
                    {
                        return mIterator->getNext();
                    }

                    const EarthView::World::Graphic::CCodec::CCodecPair& getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;

                        return mBeginPair;
                    }

                    const EarthView::World::Graphic::CCodec::CCodecPair& getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;

                        return mEndPair;
                    }

                    const EarthView::World::Graphic::CCodec::CCodecPair& getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;

                        return mCurrentPair;
                    }


                private:
                    InternalIterator *mIterator;

                    EarthView::World::Graphic::CCodec::CCodecPair mBeginPair;
                    EarthView::World::Graphic::CCodec::CCodecPair mCurrentPair;
                    EarthView::World::Graphic::CCodec::CCodecPair mEndPair;

                    EarthView::World::Graphic::CCodec* mptr;
                    ValueType mvt;
                };
            ev_private:
                CCodec(_in EarthView::World::Core::CNameValuePairList* pList):NeedConversion(false),NeedDeCompress(false),DxtFormat(1),IsEVG(false){}

            public:
                /**判断是否将像素格式24bits(B8G8R8)转换为32bits(A8B8G8R8)，
                应用于DDS压缩处理
                */
                ev_bool NeedConversion;

				/**对DDS文件进行解压
				*/
				ev_bool NeedDeCompress;

                /**是否将JPG文件转为EVG格式，该格式为DXT1类型
                */
                ev_bool IsEVG;
                /**判断DDS的压缩格式（1为DXT1，5为DXT5），目前已实现的为DXT1和DXT5两种格式
                */
                ev_uint16 DxtFormat;

				/*****DDS压缩时是否有MipMap
				****/
				ev_bool HasMipMap;

				/*****DDS压缩时是否有Alpha通道，默认为false，设置为true后将强制使用DXT1进行压缩
				****/
				ev_bool HasOneBitAlpha;
             
            public:
                CCodec():NeedConversion(false),NeedDeCompress(false),DxtFormat(1),IsEVG(false){}

                virtual ~CCodec();

                //<summary> Registers a new codec in the database.</summary>
                //<param>name="pCodec"</param>
                //<returns></returns>
                static void registerCodec( EarthView::World::Graphic::CCodec *ref_pCodec );

                //<summary> Return whether a codec is registered already. </summary>
                //<param>name="codecType"</param>
                //<returns></returns>
                static ev_bool isCodecRegistered( const EVString& codecType );

                //<summary> Unregisters a codec from the database.</summary>
                //<param>name="pCodec"</param>
                //<returns></returns>
                static void unRegisterCodec( EarthView::World::Graphic::CCodec *pCodec );

                //<summary> Gets the iterator for the registered codecs. </summary>
                //<param></param>
                //<returns></returns>
                static EarthView::World::Graphic::CCodec::CodecIterator getCodecIterator();

                //<summary> Gets the file extension list for the registered codecs. </summary>
                //<param></param>
                //<returns> Gets the file extension list for the registered codecs.</returns>
                static EarthView::World::Core::StringVector getExtensions();

                // <summary> Gets the codec registered for the passed in file extension. </summary>
                // <param>name="extension"</param>
                // <returns>EarthView::World::Graphic::CCodec pointer </returns>
                static EarthView::World::Graphic::CCodec* getCodec(const EVString& extension);

                //<summary> Gets the codec that can handle the given 'magic' identifier. </summary>
                //<param> name="magicNumberPtr" Pointer to a stream of bytes which should identify the file.
                //	Note that this may be more than needed - each codec may be looking for 
                //	a different size magic number.</param>
                //<param> name="maxbytes" The number of bytes passed</param>
                //<returns>EarthView::World::Graphic::CCodec pointer</returns>
                static EarthView::World::Graphic::CCodec* getCodec(ev_char *magicNumberPtr, ev_size_t maxbytes);

                //<summary> Codes the data in the input stream and saves the result in the output stream.</summary>
                //<param>name="input"</param>
                //<param>name="pData"</param>
                //<returns></returns>
                virtual EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr& input, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const;

                //<summary> Codes the data in the input chunk and saves the result in the output
                //    filename provided. Provided for efficiency since coding to memory is
                //    progressive therefore memory required is unknown leading to reallocations.</summary>
                //<param> name="input" The input data</param>
                //<param>name="outFileName" The filename to write to</param>
                //<param>name="pData" Extra information to be passed to the codec (codec type specific)</param>
                //<returns></returns>
                virtual void codeToFile(EarthView::World::Core::MemoryDataStreamPtr& input, const EVString& outFileName, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const;

                /// Result of a decoding; both a decoded data stream and EarthView::World::Graphic::CCodec::CCodecData metadata
                /* typedef std::pair<EarthView::World::Core::MemoryDataStreamPtr, EarthView::World::Graphic::CCodec::CodecDataPtr> EarthView::World::Graphic::CCodec::DecodeResult;*/
                class EV_GRAPHIC_DLL DecodeResult : public EarthView::World::Core::CBaseObject
                {
                public:			
                    EarthView::World::Core::MemoryDataStreamPtr first;
                    EarthView::World::Graphic::CCodec::CodecDataPtr second;
                    // <summary>
                    // 构造函数
                    // </summary>
                    // <param name="fir">键</param>
                    // <param name="sec">值</param>
                    // <returns></returns>
                    DecodeResult(_in EarthView::World::Core::MemoryDataStreamPtr fir,_in EarthView::World::Graphic::CCodec::CodecDataPtr sec)
                    {
                        first = fir;
                        second = sec;
                    }
                    DecodeResult()
                    {

                    }

                ev_private:
                    // <summary>
                    // 构造函数
                    // </summary>
                    // <param name="pList">构造函数参数键值对表</param>
                    // <returns></returns>
                    DecodeResult(_in EarthView::World::Core::CNameValuePairList* pList)
                    {
                        if (pList && pList->Count()>0)
                        {
                            first = *(EarthView::World::Core::MemoryDataStreamPtr*)pList->GetAt("fir");
                            second = *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pList->GetAt("sec");
                        }
                        else
                        {

                        }
                    }
                };

                //<summary> Codes the data from the input chunk into the output chunk.</summary>
                //<param> name="input" CStream containing the encoded data</param>
                //<returns></returns>
                virtual EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr& input) const;

                //<summary> Returns the type of the codec as a EVString</summary>
                //<param></param>
                //<returns></returns>
                virtual EVString getType() const;

                //<summary> Returns the type of the data that supported by this codec as a EVString</summary>
                //<param></param>
                //<returns></returns>
                virtual EVString getDataType() const;

                //<summary> Returns whether a magic number header matches this codec.</summary>
                //<param> magicNumberPtr Pointer to a stream of bytes which should identify the file.
                //	Note that this may be more than needed - each codec may be looking for 
                //	a different size magic number.</param>
                //<param> maxbytes The number of bytes passed</param>
                //<returns></returns>

                virtual ev_bool magicNumberMatch(const ev_char *magicNumberPtr, ev_size_t maxbytes) const ;
                // <summary>Maps a magic number header to a file extension, if this codec recognises it.</summary>
                // <param> magicNumberPtr Pointer to a stream of bytes which should identify the file.
                //	Note that this may be more than needed - each codec may be looking for 
                //	a different size magic number.</param>
                //<param> maxbytes The number of bytes passed</param>
                //<returns> A blank string if the magic number was unknown, or a file extension.</returns>
                virtual EVString magicNumberToFileExt(const ev_char *magicNumberPtr, ev_size_t maxbytes) const;
            };
        }
    }
}
/// namespace
#endif

