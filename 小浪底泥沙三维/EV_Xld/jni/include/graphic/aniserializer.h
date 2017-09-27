#ifndef ANISERIALIZER_H
#define ANISERIALIZER_H
#include "graphic/graphic_config.h"
#include "core/stdheaders.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "mathengine/matrix4.h"
#include "core/sharedptr.h"
#include "graphic/colourvalue.h"
#include "core/commonstringpairlist.h"
#include "core/datastream.h"
#include "core/gbkstring.h"
#include "mathengine/axisalignedbox.h"

#define  USEMATRIX 1

#define USEXML 0

//#if USEXML
//#include "core/xml.h"
//#endif

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/*namespace ModelManager
			{*/
				class EV_GRAPHIC_DLL CNodeTag:public EarthView::World::Core::CBaseObject
				{
				public:
					CNodeTag();
					~CNodeTag();
					EVString mTagName;
					EVString mTagDescription;

					ev_uint32 mID;
ev_private:

					CNodeTag(_in EarthView::World::Core::CNameValuePairList* plist);
				protected:
				private:
				};

				class EV_GRAPHIC_DLL CNodeTagList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CNodeTag> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CNodeTagList::iterator insert(_in CNodeTagList::iterator pos, _in CNodeTag const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CNodeTagList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNodeTagList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CNodeTag const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CNodeTag& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CNodeTag& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CNodeTag const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CNodeTag& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CNodeTag const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CNodeTag & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CNodeTag const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CFrameTag:public EarthView::World::Core::CBaseObject
				{
				public:
					CFrameTag();
					~CFrameTag();
					EVString mTagName;
					ev_real64 mTimeValue;
					
					ev_uint32 mID;
ev_private:

					CFrameTag(_in EarthView::World::Core::CNameValuePairList* plist);
				};

				class EV_GRAPHIC_DLL CFrameTagList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CFrameTag> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CFrameTagList::iterator insert(_in CFrameTagList::iterator pos, _in CFrameTag const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFrameTagList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFrameTagList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CFrameTag const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CFrameTag& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CFrameTag& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CFrameTag const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CFrameTag& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CFrameTag const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CFrameTag & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CFrameTag const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 跟据时间排序
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void sort();
				};
				
				class EV_GRAPHIC_DLL CAnimationBaseSerializer : public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CAnimationBaseSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CAnimationBaseSerializer();

					virtual ~CAnimationBaseSerializer();

					enum Endian
					{
						//// Use the platform native endian
						ENDIAN_NATIVE,
						//// Use big endian (0x1000 is serialised as 0x10 0x00)
						ENDIAN_BIG,
						//// Use little endian (0x1000 is serialised as 0x00 0x10)
						ENDIAN_LITTLE
					};

					enum ModelAnimationChunkID
					{
						UNKNOWNCHUNK                      = 0,		        ///0x1000,

						FRAMETAGLIST                      = 33025,			

						FRAME_TAG                         = 12288,			///0x3000,

						NODE_TAG                          = 16384,			///0x4000,

	                    CATEGORY                          = 16400,			///0x4010,

						NAMEVALUEPAIR                     = 16640,			///0x4100,

						TRANSLATION                       = 16896,			///0x4200,

						ROTATION                          = 20480,			///0x5000,

						SCALE                             = 20736,			///0x5100,

						KEYFRAME                          = 20752,			///0x5110,

						ANIMATION                         = 20992,			///0x5200,

						MATRIX                            = 21008,			///0x5210,

						COLOR                             = 24576,			///0x6000,

						SUBMESH                           = 28672,			///0x7000,

						NODE                              = 32768,			///0x8000,

						ANIFILE                           = 33024,			///0x8100,

						CATEGORYLIST                      = 33026,

						MATRIXCOLOR                       = 33027,

						SUMMESHMATRIXCOLOR                = 33028,

						SUMMESHMATRIXCOLORLIST            = 33029,

						ANIFILEANIMATION                  = 33030
				};

				public:
					void setFlipEndian(_in ev_bool flipEndian);

					ev_bool getFilpEndian() const;

					ev_uint32 getLength() const;

					ev_uint16 getChunkID() const;

					void fromStream(_in EarthView::World::Core::DataStreamPtr &stream);

					void fromStream(_in EarthView::World::Core::DataStreamPtr &stream ,ModelAnimationChunkID filterChunkID);

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					void toStream(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					/// <summary>
//					/// 从ＸＭＬ中序列化出对象
//					/// </summary>
//					/// <returns></returns>
//					virtual void fromXMl();
//					/// <summary>
//					/// 写出为XML
//					/// </summary>
//					/// <returns></returns>
//					virtual void toXml();
//
//					EarthView::World::Core::CXmlElement mxmlElement;
//
//					EVString mxmlElementName;
//#endif
				public:
					ev_uint32 mVersion;


				protected:
					ev_bool mFlipEndian; 			//// default to native endian, derive from header

					ev_uint16 mChunkID;

					ev_uint32 mLength;

					ev_uint32 mStart;

					ev_uint32 mEnd;
				protected:
					void writeChunk(_in EarthView::World::Core::DataStreamPtr &stream,_in ev_uint16 id, _in ev_size_t size);
					void writeFloats(_in EarthView::World::Core::DataStreamPtr &stream, _in const ev_real32 *const pfloat, _in ev_size_t count);
					void writeFloats(_in EarthView::World::Core::DataStreamPtr &stream, _in const ev_real64 *const pfloat, _in ev_size_t count);
					void writeShorts( _in EarthView::World::Core::DataStreamPtr &stream,_in const ev_uint16 *const pShort, _in ev_size_t count);
					void writeInts( _in EarthView::World::Core::DataStreamPtr &stream,_in const ev_uint32 *const pInt, _in ev_size_t count);
					void writeBools(_in EarthView::World::Core::DataStreamPtr &stream, _in const ev_bool *const pLong, _in ev_size_t count);
					void writeObject( _in EarthView::World::Core::DataStreamPtr &stream,_in const EarthView::World::Spatial::Math::CVector3 &vec);
					void writeObject( _in EarthView::World::Core::DataStreamPtr &stream,_in const EarthView::World::Spatial::Math::CQuaternion &q);

					void writeString( _in EarthView::World::Core::DataStreamPtr &stream,_in const EVString &string);
					void writeGBKString(_in EarthView::World::Core::DataStreamPtr &stream,_in const EarthView::World::Core::CGBKString &string);
					void writeData(_in EarthView::World::Core::DataStreamPtr &stream, _in const void *const buf, _in ev_size_t size, _in ev_size_t count);
				protected:
					virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr &stream,_inout ev_uint32& chunkLength);
					virtual void readChunk(_in EarthView::World::Core::DataStreamPtr &stream);
					void readBools(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_bool *pDest, _in ev_size_t count);
					void readFloats(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_real32 *pDest, _in ev_size_t count);
					void readFloats(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_real64 *pDest, _in ev_size_t count);
					void readShorts(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_uint16 *pDest, _in ev_size_t count);
					void readInts(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_uint32 *pDest, _in ev_size_t count);
					void readObject(_in EarthView::World::Core::DataStreamPtr &stream, _inout EarthView::World::Spatial::Math::CVector3 &pDest);
					void readObject(_in EarthView::World::Core::DataStreamPtr &stream, _inout EarthView::World::Spatial::Math::CQuaternion &pDest);
					EVString readString(_in EarthView::World::Core::DataStreamPtr &stream, _in ev_size_t numChars);
					EarthView::World::Core::CGBKString readGBKString(_in EarthView::World::Core::DataStreamPtr &stream, _in ev_size_t numChars);
ev_internal:
					virtual void flipToLittleEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
					virtual void flipToLittleEndian(_inout void *pData, _in ev_size_t size);
					virtual void flipFromLittleEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
					virtual void flipFromLittleEndian(_inout void *pData, _in ev_size_t size);

					virtual void flipEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
					virtual void flipEndian(_inout void *pData, _in ev_size_t size);
					//// Determine the endianness of the incoming stream compared to native
					virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr &stream);
					//// Determine the endianness to write with based on option
					virtual void determineEndianness(_in Endian requestedEndian);

				};

				class EV_GRAPHIC_DLL CFrameTagSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CFrameTagSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CFrameTagSerializer();

					virtual ~CFrameTagSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					EarthView::World::Graphic::CFrameTag mFrameTag;
				};

				class EV_GRAPHIC_DLL CFrameTagSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CFrameTagSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CFrameTagSerializerList::iterator insert(_in CFrameTagSerializerList::iterator pos, _in CFrameTagSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFrameTagSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFrameTagSerializerList();
					ev_real64 mFrameLength;
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CFrameTagSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CFrameTagSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CFrameTagSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CFrameTagSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CFrameTagSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CFrameTagSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CFrameTagSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CFrameTagSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CNodeTagSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CNodeTagSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CNodeTagSerializer();

					virtual ~CNodeTagSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					EarthView::World::Graphic::CNodeTag mNodeTag;
				};

				class EV_GRAPHIC_DLL CNodeTagSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CNodeTagSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CNodeTagSerializerList::iterator insert(_in CNodeTagSerializerList::iterator pos, _in CNodeTagSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CNodeTagSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNodeTagSerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CNodeTagSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CNodeTagSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CNodeTagSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CNodeTagSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CNodeTagSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CNodeTagSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CNodeTagSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CNodeTagSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CCategory:public EarthView::World::Core::CBaseObject
				{
				public:
					CCategory();
					~CCategory();
					EVString mTagName;
					EVString mTagDescription;

					ev_uint32 mID;
					EarthView::World::Core::NameValuePairList mCategoryAttributeList;
ev_private:

					CCategory(_in EarthView::World::Core::CNameValuePairList* plist);
				protected:
				private:
				};

				class EV_GRAPHIC_DLL CCategoryList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CCategory> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CCategoryList::iterator insert(_in CCategoryList::iterator pos, _in CCategory const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CCategoryList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCategoryList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CCategory const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CCategory& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CCategory& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CCategory const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CCategory& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CCategory const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CCategory & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CCategory const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
					/*/// <summary>
					/// 跟据时间排序
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void sort();*/
				};

				class EV_GRAPHIC_DLL CCategorySerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CCategorySerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CCategorySerializer();

					virtual ~CCategorySerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					EarthView::World::Graphic::CCategory mCategory;
					EarthView::World::Graphic::CNodeTagSerializerList mNodeTagSerializerList;
					EarthView::World::Graphic::CNodeTagList getNodeTagList(); 
				};

				class EV_GRAPHIC_DLL CCategorySerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CCategorySerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CCategorySerializerList::iterator insert(_in CCategorySerializerList::iterator pos, _in CCategorySerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CCategorySerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCategorySerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CCategorySerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CCategorySerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CCategorySerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CCategorySerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CCategorySerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CCategorySerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CCategorySerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CCategorySerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CTranslationSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CTranslationSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CTranslationSerializer();

					virtual ~CTranslationSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					EarthView::World::Spatial::Math::CVector3 mpostion;
				};

				class EV_GRAPHIC_DLL CRotationSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CRotationSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CRotationSerializer();

					virtual ~CRotationSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//
//					virtual void fromXMl();
//
//					virtual void toXml();
//
//#endif

					EarthView::World::Spatial::Math::CQuaternion mquaterniion;
				};

				class EV_GRAPHIC_DLL CScaleSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CScaleSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CScaleSerializer();

					virtual ~CScaleSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//
//					virtual void fromXMl();
//
//					virtual void toXml();
//
//#endif

					EarthView::World::Spatial::Math::CVector3 msacle;
				};

				class EV_GRAPHIC_DLL CKeyframeSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CKeyframeSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CKeyframeSerializer();

					virtual ~CKeyframeSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//
//					virtual void fromXMl();
//
//					virtual void toXml();
//
//#endif

//#if USEMATRIX       
					EarthView::World::Spatial::Math::CMatrix4 mmartix;
//#else
//					CTranslationSerializer mtranslation;
//
//					CRotationSerializer mrotation;
//
//					CScaleSerializer mscale;
//#endif
					

					ev_real64 mtime;

				};

				class EV_GRAPHIC_DLL CKeyframeSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CKeyframeSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CKeyframeSerializerList::iterator insert(_in CKeyframeSerializerList::iterator pos, _in CKeyframeSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKeyframeSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CKeyframeSerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CKeyframeSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CKeyframeSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CKeyframeSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CKeyframeSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CKeyframeSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CKeyframeSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CKeyframeSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CKeyframeSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CAnimationSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CAnimationSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CAnimationSerializer();

					virtual ~CAnimationSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif


					EarthView::World::Graphic::CKeyframeSerializerList mkeyFrameSerializerList;

					EVString mname;

					EVString menable;

					EVString mloop;

					EVString minterpolationMode; 

					EVString mrotationInterpolationMode;

					ev_real64 mAnimationLength;

				};

				class EV_GRAPHIC_DLL CAnimationSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CAnimationSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CAnimationSerializerList::iterator insert(_in CAnimationSerializerList::iterator pos, _in CAnimationSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnimationSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CAnimationSerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CAnimationSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CAnimationSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CAnimationSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CAnimationSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CAnimationSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CAnimationSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CAnimationSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CAnimationSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CMatrixSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CMatrixSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CMatrixSerializer();

					virtual ~CMatrixSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif  
					EarthView::World::Spatial::Math::CMatrix4 mmartix;

				};

				class EV_GRAPHIC_DLL CColorSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CColorSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CColorSerializer();

					virtual ~CColorSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif

					EarthView::World::Graphic::CColourValue mcolor;
				};

				class EV_GRAPHIC_DLL CSubMeshSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CSubMeshSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CSubMeshSerializer();

					virtual ~CSubMeshSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

				    virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					ev_uint32 msubMeshID;
					ev_uint32 mInstanceIndex;
					//索引段
					ev_int32 mIndexBegun;
					ev_int32 mIndexEnd;
					//EarthView::World::Graphic::CMatrixSerializer mmatrixSerializer;
					//EarthView::World::Graphic::CColorSerializer mcolorSerializer;

				};

				class EV_GRAPHIC_DLL CSubMeshSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CSubMeshSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CSubMeshSerializerList::iterator insert(_in CSubMeshSerializerList::iterator pos, _in CSubMeshSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSubMeshSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSubMeshSerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CSubMeshSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CSubMeshSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CSubMeshSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CSubMeshSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CNodeSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CNodeSerializer(_in EarthView::World::Core::CNameValuePairList* plist);

					//typedef vector<EarthView::World::Graphic::CNodeSerializer> CNodeSerializerList;

					//CNodeSerializerList msubNodeSerializerList;

				public:

					class EV_GRAPHIC_DLL CNodeSerializerList : public EarthView::World::Core::CBaseObject
					{	
ev_private:
						typedef vector<EarthView::World::Graphic::CNodeSerializer> InternalList;
						typedef InternalList::iterator iterator;
						typedef InternalList::const_iterator const_iterator;
						typedef InternalList::reverse_iterator reverse_iterator;
						typedef InternalList::const_reverse_iterator const_reverse_iterator;
						typedef InternalList::reference reference;
						typedef InternalList::const_reference const_reference;
						typedef InternalList::value_type value_type;
						RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
						/// <summary>
						/// 集合插入元素
						/// </summary>
						/// <param name="pos">位置迭代器</param>
						/// <param name="t">元素值</param>
						/// <returns>插入元素后元素迭代器</returns>
						CNodeSerializerList::iterator insert(_in CNodeSerializerList::iterator pos, _in EarthView::World::Graphic::CNodeSerializer const &t);
					private:
						InternalList mList;
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						CNodeSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						/// <summary>
						/// 默认构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						CNodeSerializerList();
						/// <summary>
						/// 在容器最后添加元素
						/// </summary>
						/// <param name="t">元素值</param>
						/// <returns></returns>
						ev_void push_back(_in EarthView::World::Graphic::CNodeSerializer const &t);
						/// <summary>
						/// 删除容器最后元素
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						ev_void pop_back();
						/// <summary>
						/// 返回容器首个元素
						/// </summary>
						/// <param name=""></param>
						/// <returns>返回容器首个元素</returns>
						EarthView::World::Graphic::CNodeSerializer& front();
						/// <summary>
						/// 返回容器最后元素
						/// </summary>
						/// <param name=""></param>
						/// <returns>返回容器最后元素</returns>
						EarthView::World::Graphic::CNodeSerializer& back();
						/// <summary>
						/// 容器中间位置插入元素
						/// </summary>
						/// <param name="pos">位置</param>
						/// <param name="t">元素值</param>
						/// <returns></returns>
						ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CNodeSerializer const &t);
						/// <summary>
						/// 删除容器中间位置元素
						/// </summary>
						/// <param name="pos">位置</param>
						/// <returns></returns>
						ev_void remove(_in ev_size_t pos);
						/// <summary>
						/// 返回容器是否为空
						/// </summary>
						/// <param name=""></param>
						/// <returns>容器为空返回true，否则false</returns>
						ev_bool empty() const;
						/// <summary>
						/// 重载[]操作符
						/// </summary>
						/// <param name="n">下标位置</param>
						/// <returns>返回下标对应的值</returns>
						EarthView::World::Graphic::CNodeSerializer& operator[](_in ev_size_t n);
						/// <summary>
						/// 重载[]操作符
						/// </summary>
						/// <param name="n">下标位置</param>
						/// <returns>返回下标对应的值</returns>
						EarthView::World::Graphic::CNodeSerializer const &operator[](_in ev_size_t n) const;
						/// <summary>
						/// 返回某位置的元素值
						/// </summary>
						/// <param name="n">位置</param>
						/// <returns>返回位置对应的值</returns>
						EarthView::World::Graphic::CNodeSerializer& at(_in ev_size_t n);
						/// <summary>
						/// 返回某位置的元素值
						/// </summary>
						/// <param name="n">位置</param>
						/// <returns>返回位置对应的值</returns>
						EarthView::World::Graphic::CNodeSerializer const &at(_in ev_size_t n) const;
						/// <summary>
						/// 返回元素的数量大小
						/// </summary>
						/// <param name=""></param>
						/// <returns>返回元素的数量大小</returns>
						ev_size_t size() const;
						/// <summary>
						/// 改变容器中元素数量大小
						/// </summary>
						/// <param name="newSize">改变的容器中元素数量大小</param>
						/// <returns></returns>
						ev_void resize(_in ev_size_t newSize);
						/// <summary>
						/// 改变容器中最小的元素容纳数量
						/// </summary>
						/// <param name="count">最小的元素容纳数量</param>
						/// <returns></returns>
						ev_void reserve(_in ev_size_t count);
						/// <summary>
						/// 清空所有元素
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						ev_void clear();
					};

					CNodeSerializer();

					virtual ~CNodeSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//					virtual void fromXMl();
//
//					virtual void toXml();
//#endif
					/// <summary>
					/// 从根到自身，如果其中一个节点有动画，返回true;
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool hasAnimation() const;
					/// <summary>
					/// 任意一个子节点有动画，返回true;
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool childHasAnimation() const;
						 
					//描述信息
					EVString mxmlElementDescription;

					EVString mxmlElementName;
					//句柄
					ev_uint32 mID;

					EarthView::World::Graphic::CMatrixSerializer mmatrixSerializer;
					EarthView::World::Graphic::CMatrixSerializer moffsetMatrixSerializer;

					EarthView::World::Graphic::CAnimationSerializerList manimationSerializerList;

					EarthView::World::Graphic::CSubMeshSerializerList msubMeshSerializerList;

					ev_bool mHasAnimation;

					CNodeSerializerList msubNodeSerializerList;

					EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
				};

				class EV_GRAPHIC_DLL CMatrixColor:public EarthView::World::Core::CBaseObject
				{
				public:
					CMatrixColor();
					~CMatrixColor();
					EarthView::World::Spatial::Math::CMatrix4 mmartix;
					EarthView::World::Graphic::CColourValue mcolor;
					ev_uint32 mInstanceIndex;
ev_private:

					CMatrixColor(_in EarthView::World::Core::CNameValuePairList* plist);
				protected:
				private:
				};

				class EV_GRAPHIC_DLL CMatrixColorList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CMatrixColor> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CMatrixColorList::iterator insert(_in CMatrixColorList::iterator pos, _in CMatrixColor const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMatrixColorList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMatrixColorList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CMatrixColor const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CMatrixColor& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CMatrixColor& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CMatrixColor const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CMatrixColor& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CMatrixColor const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CMatrixColor & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CMatrixColor const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CMatrixColorSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CMatrixColorSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CMatrixColorSerializer();

					virtual ~CMatrixColorSerializer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//
//					virtual void fromXMl();
//
//					virtual void toXml();
//
//#endif

					EarthView::World::Graphic::CMatrixColor mMatrixColor;
				};

				class EV_GRAPHIC_DLL CMatrixColorSerializerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CMatrixColorSerializer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CMatrixColorSerializerList::iterator insert(_in CMatrixColorSerializerList::iterator pos, _in CMatrixColorSerializer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMatrixColorSerializerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMatrixColorSerializerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CMatrixColorSerializer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CMatrixColorSerializer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CMatrixColorSerializer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CMatrixColorSerializer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CMatrixColorSerializer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CMatrixColorSerializer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CMatrixColorSerializer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CMatrixColorSerializer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CSubMeshMatrixColor:public EarthView::World::Core::CBaseObject
				{
				public:
					CSubMeshMatrixColor();
					~CSubMeshMatrixColor();
					ev_uint32 mSubMeshId;
					//索引段
					ev_int32 mIndexBegun;
					ev_int32 mIndexEnd;
					CMatrixColorSerializerList mMatrixColorSerializerList;

ev_private:

					CSubMeshMatrixColor(_in EarthView::World::Core::CNameValuePairList* plist);
				protected:
				private:
				};

				class EV_GRAPHIC_DLL CSubMeshMatrixColorList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CSubMeshMatrixColor> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CSubMeshMatrixColorList::iterator insert(_in CSubMeshMatrixColorList::iterator pos, _in CSubMeshMatrixColor const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSubMeshMatrixColorList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSubMeshMatrixColorList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CSubMeshMatrixColor const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CSubMeshMatrixColor const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColor const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CSubMeshMatrixColorSeriailzer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CSubMeshMatrixColorSeriailzer(_in EarthView::World::Core::CNameValuePairList* plist);

				public:
					CSubMeshMatrixColorSeriailzer();

					virtual ~CSubMeshMatrixColorSeriailzer();

					virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

					virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr &stream);

//#if USEXML
//
//					virtual void fromXMl();
//
//					virtual void toXml();
//
//#endif
					CSubMeshMatrixColor mSubMeshMatrixColor;
				};

				class EV_GRAPHIC_DLL CSubMeshMatrixColorSeriailzerList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CSubMeshMatrixColorSeriailzerList::iterator insert(_in CSubMeshMatrixColorSeriailzerList::iterator pos, _in CSubMeshMatrixColorSeriailzer const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSubMeshMatrixColorSeriailzerList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSubMeshMatrixColorSeriailzerList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer & at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_GRAPHIC_DLL CAniFileSerializer:public EarthView::World::Graphic::CAnimationBaseSerializer
				{
ev_private:
					CAniFileSerializer(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CAniFileSerializer();

					virtual ~CAniFileSerializer();

					void fromStream(_in EarthView::World::Core::DataStreamPtr& stream);

					void toStream(_in EarthView::World::Core::DataStreamPtr &stream);

					void toStream(_in EarthView::World::Core::DataStreamPtr &stream,_in Endian endianMode);

//#if USEXML
//					virtual void fromXMl(_in const EVString& filePath);
//
//					virtual void toXml(_in const EVString& filePath);
//
//					void fromString(_in const EVString& xmlContext);
//
//					EVString toString();
//#endif

					EarthView::World::Graphic::CNodeSerializer getRootNodeSerializer(_in EarthView::World::Core::DataStreamPtr &stream);
					EarthView::World::Graphic::CNodeSerializer getRootNodeSerializer();
					void setRootNodeSerializer(EarthView::World::Graphic::CNodeSerializer rootNodeSerializer);

					EarthView::World::Graphic::CFrameTagList getFrameTagList(_in EarthView::World::Core::DataStreamPtr &stream); 
					EarthView::World::Graphic::CFrameTagList getFrameTagList(); 
					void setFrameTagSerializerList(EarthView::World::Graphic::CFrameTagSerializerList frameTagSerializerList);
					ev_real64 getFrameTagLength(_in EarthView::World::Core::DataStreamPtr &stream);
					ev_real64 getFrameTagLength();

					EarthView::World::Graphic::CCategoryList getCategoryList(_in EarthView::World::Core::DataStreamPtr &stream); 
					void setCategorySerializerList(EarthView::World::Graphic::CCategorySerializerList categatorySerializerList);
					EarthView::World::Graphic::CSubMeshMatrixColorList getSubMeshMatrixColorList(_in EarthView::World::Core::DataStreamPtr &stream); 
					void setMatrixColorSerializerList(EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList subMeshMatrixColorSerializerList);

					ev_bool getAnimation(_in EarthView::World::Core::DataStreamPtr &stream);

					void setReadStream(_in EarthView::World::Core::DataStreamPtr &stream);
					//
					CCategorySerializerList getCategorySerializerList(_in EarthView::World::Core::DataStreamPtr &stream);
					//
					ev_bool initAniFileVersion(_in EarthView::World::Core::DataStreamPtr &stream);
				private:

					void fromStream(_in EarthView::World::Core::DataStreamPtr &stream,_in ModelAnimationChunkID filter);

					ev_bool m_hasReadFrameTag;
					ev_bool m_hasReadCategatory;
					ev_bool m_hasReadNode;
					ev_bool m_hasReadMatrixColor;
					ev_bool m_hasAnimation;
					ev_bool m_hasReadHasAnimation;
					EarthView::World::Graphic::CNodeSerializer mnodeSerializer;
					EarthView::World::Graphic::CFrameTagSerializerList mTagSerializerList;
					EarthView::World::Graphic::CCategorySerializerList mCategatorySerializerList;
					EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList mMatrixColorSerializerList;

					EarthView::World::Core::DataStreamPtr mStream;
//#if USEXML
//ev_private:
//					EarthView::World::Core::CSharedPtr<EarthView::World::Core::CXmlFile> mfile;
//#endif

				};

			//}
		}
	}
}

#endif
