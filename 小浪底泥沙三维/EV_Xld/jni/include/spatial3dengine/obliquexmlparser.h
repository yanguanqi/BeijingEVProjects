#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEXMLPARSER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEXMLPARSER_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"
#include "mathengine/vector3.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager
			{
				class CTileLodXmlParser;;

				enum OBQDataType
				{
					OBQ_SMART3D = 0,
					OBQ_QSLIM = 1,
					OBQ_QSLIM_MERGE = 2,
					OBQ_QSLIM_SHAREDTEXTURE = 3,
				};

				class EV_Spatial3DEngine_DLL LodIndex : public EarthView::World::Core::CAllocatedObject
				{
					friend class CTileLodXmlParser;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					LodIndex(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					LodIndex();
					virtual ~LodIndex();
				public:
					ev_real64 mMinRange;
					ev_real64 mRadius;
					EarthView::World::Spatial::Math::CVector3 mCenter;
					EVString mModelPath;
					ev_uint32 mID;
					ev_uint32 mRecordID;
					ev_uint32 mLevel;
					ev_real32 mXmin;
					ev_real32 mXmax;
					ev_real32 mYmin;
					ev_real32 mYmax;
					ev_real32 mZmin;
					ev_real32 mZmax;
					EarthView::World::Spatial::Math::CMatrix4* mpOffMatrix;

					void setParent(LodIndex* parent);

					LodIndex* getParent();

					ev_uint32 getNumChild();

					LodIndex* getChild(ev_uint32 i);

					void addChild(LodIndex* child);

				private:
					LodIndex* mpParent;
					vector<LodIndex*> mChildren;
				};

				class EV_Spatial3DEngine_DLL LodIndexVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<LodIndex*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">迭代器</param>
					/// <param name="t">Handle标识</param>
					/// <returns>插入后的键值对</returns>
					iterator insert(_in iterator pos, _in LodIndex* const &t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					LodIndexVector(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					LodIndexVector();

					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in LodIndex* const &t);

					/// <summary>
					/// 删除最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回第一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个元素值</returns>
					LodIndex*& front();

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					LodIndex*& back();

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					LodIndex*& at(_in ev_uint32 pos);

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					LodIndex* const &at(_in ev_uint32 pos) const;

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in LodIndex* const &t);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>为空返回true，否则false</returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中元素数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器中元素数量大小</returns>
					ev_size_t size() const;

					/// <summary>
					/// 改变容器大小
					/// </summary>
					/// <param name="newSize">容器大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reserve(ev_size_t count);


					void release();
				};

				class EV_Spatial3DEngine_DLL CTileLodXmlParser : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTileLodXmlParser(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CTileLodXmlParser();
					virtual ~CTileLodXmlParser();

					void setXmlFile(const EVString& file);
					EVString getXmlFile();

					EVString getTileName();

					EVString getVersion();

					LodIndex* getRootNode();

					ev_int32 mMaxLevel;

					ev_int32 mStartQuadLevel;
				private:
					void _parseTile();
					void _clearAllNode();
					LodIndex* mpLodNode;
					EVString mVersion;
					EVString mTileName;
					EVString mXmlFile;
				};

				class EV_Spatial3DEngine_DLL CLodTreeExportXmlParser : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLodTreeExportXmlParser(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CLodTreeExportXmlParser();
					virtual ~CLodTreeExportXmlParser();

					void setXmlFile(const EVString& file);
					EVString getXmlFile();

					EVString getSRS();

					void getWorldPos(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);

					void getScale(_out ev_real64& scaleX, _out ev_real64& scaleY, _out ev_real64& scaleZ);

					void getRot(_out ev_real64& rotW,_out ev_real64& rotX, _out ev_real64& rotY, _out ev_real64& rotZ);

					EVString getOriginMode();

					EVString getVersion();

					void getTileArray(_out EarthView::World::Core::CStringArray& tileNames
						,_out EarthView::World::Core::CStringArray& tilePaths);

					OBQDataType getDataType();
				private:
					void _parseXml();
					EVString mXmlFile;
					EVString mSRS;
					ev_real64 mLat;
					ev_real64 mLon;
					ev_real64 mAlt;
					ev_real64 mScaleX;
					ev_real64 mScaleY;
					ev_real64 mScaleZ;
					ev_real64 mRotW;
					ev_real64 mRotX;
					ev_real64 mRotY;
					ev_real64 mRotZ;
					EVString mOriginMode;
					EVString mVersion;
					OBQDataType mDataType;

					EarthView::World::Core::CStringArray mTileNames;
					EarthView::World::Core::CStringArray mTilePaths;

				};

				class EV_Spatial3DEngine_DLL CMetaDataXmlParser : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMetaDataXmlParser(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CMetaDataXmlParser();
					virtual ~CMetaDataXmlParser();

				};

				class EV_Spatial3DEngine_DLL LodIndexStreamParser : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					LodIndexStreamParser(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					LodIndexStreamParser();
					virtual ~LodIndexStreamParser();

					static EarthView::World::Core::MemoryDataStreamPtr encodeToStream(const LodIndexVector& lv);

					static LodIndexVector decodeFromStream(const EarthView::World::Core::MemoryDataStreamPtr& mem);
				};
			}
		}
	}
}
#endif

