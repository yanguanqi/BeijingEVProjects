#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEDBUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEDBUTILITY_H

#include "core/memoryallocatedobject.h"
#include "spatial3dengine/spatial3denginecomdef.h"
#include "databaseutility/sqldatabase.h"
#include "core/string_array.h"
#include "spatial3dengine/obliquexmlparser.h"
#include "mathengine/matrix4.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class CSqlstandardization;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager
			{
				class LodIndex;

				class EV_Spatial3DEngine_DLL OBQRecordInfo : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					OBQRecordInfo(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					OBQRecordInfo()
					{
						EVID = 0;
						EntityName = "";
						ObqFullFilePath = "";
						Lon = 0;
						Lat = 0;
						Alt = 0;
						ScaleX = 1;
						ScaleY = 1;
						ScaleZ = 1;
						OrientationW = 1;
						OrientationX = 0;
						OrientationY = 0;
						OrientationZ = 0;
					}

					~OBQRecordInfo()
					{

					}
					//
					ev_uint32 EVID;
					EVString EntityName;
					EVString ObqFullFilePath;
					ev_real64 Lon;
					ev_real64 Lat;
					ev_real64 Alt;
					EarthView::World::Spatial::Math::CAxisAlignedBox WorldBounds;
					ev_bool Instance;
					Real ScaleX;
					Real ScaleY;
					Real ScaleZ;
					Real OrientationW;
					Real OrientationX;
					Real OrientationY;
					Real OrientationZ;
				};

				class EV_Spatial3DEngine_DLL OBQRecordInfoList : public EarthView::World::Core::CAllocatedObject         		
				{
ev_private:
					typedef list<OBQRecordInfo> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					iterator insert(iterator pos, OBQRecordInfo const &t)
					{
						return mList.insert(pos, t);
					}

				private:
					InternalList mList;
ev_private:

					OBQRecordInfoList(_in EarthView::World::Core::CNameValuePairList *pList) 
					{

					}
				public:
					OBQRecordInfoList() {}
					void push_back(OBQRecordInfo const &t)
					{
						mList.push_back(t);
					}
					void push_front(OBQRecordInfo const   &t)
					{
						mList.push_front(t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					OBQRecordInfo &front()
					{
						return mList.front();
					}
					OBQRecordInfo &back()
					{
						return mList.back();
					}
					OBQRecordInfo &at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, OBQRecordInfo const &t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};

				class EV_Spatial3DEngine_DLL OBQMetaInfo : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					OBQMetaInfo(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					OBQMetaInfo()
					{
						mLatitude = 0;
						mLongitude = 0;
						mAltitude = 0;
						mWorldScalex = 1;
						mWorldScaley = 1;
						mWorldScalez = 1;
						mWorldRotx = 0;
						mWorldRoty = 0;
						mWorldRotz = 0;
						mWorldRotw = 1;
						mXmin = 0;
						mXmax = 0;
						mYmin = 0;
						mYmax = 0;
						mZmin = 0;
						mZmax = 0;
						mDataType = OBQ_SMART3D;
						mPosx = 0;
						mPosy = 0;
						mPosz = 0;
						mScalex = 1;
						mScaley = 1;
						mScalez = 1;
						mRotw = 1;
						mRotx = 0;
						mRoty = 0;
						mRotz = 0;
						mMaxLevel = 0;
					}
					virtual ~OBQMetaInfo(){}
				public:
					EVString mVersion;
					EVString mSrs;
					ev_real64 mLatitude;
					ev_real64 mLongitude;
					ev_real64 mAltitude;
					ev_real64 mWorldScalex;
					ev_real64 mWorldScaley;
					ev_real64 mWorldScalez;
					ev_real64 mWorldRotx;
					ev_real64 mWorldRoty;
					ev_real64 mWorldRotz;
					ev_real64 mWorldRotw;
					ev_real32 mXmin;
					ev_real32 mXmax;
					ev_real32 mYmin;
					ev_real32 mYmax;
					ev_real32 mZmin;
					ev_real32 mZmax;
					OBQDataType mDataType;
					ev_real64 mPosx;
					ev_real64 mPosy;
					ev_real64 mPosz;
					ev_real64 mScalex;
					ev_real64 mScaley;
					ev_real64 mScalez;
					ev_real64 mRotw;
					ev_real64 mRotx;
					ev_real64 mRoty;
					ev_real64 mRotz;
					ev_uint8 mMaxLevel;

					OBQRecordInfoList mRecordList;
				};

				enum OBQDemType
				{
					OBQDT_Float32,
					OBQDT_Int16
				};

				class EV_Spatial3DEngine_DLL OBQDemMetaInfo : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					OBQDemMetaInfo(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					OBQDemMetaInfo()
					{
						mPointNumberPerSide = 0;
						mLevelCount = 0;

						mZeroTileWidth = 0;
						mStartQuadLevel = 0;
						mZeroLevelRowCount = 0;
						mZeroLevelColCount = 0;

						mStartX = 0;
						mStartY = 0;
						mStartZ = 0;

						mEndX = 0;
						mEndY = 0;
						mEndZ = 0;

						mDataType = OBQDT_Float32;
					}
					virtual ~OBQDemMetaInfo(){}
				public:
					ev_uint32 mPointNumberPerSide;
					ev_uint8 mLevelCount;

					OBQDemType mDataType;
					 
					ev_real32 mZeroTileWidth;
					ev_uint8 mStartQuadLevel;
					ev_uint32 mZeroLevelRowCount;
					ev_uint32 mZeroLevelColCount;

					ev_real32 mStartX;
					ev_real32 mStartY;
					ev_real32 mStartZ;
					
					ev_real32 mEndX;
					ev_real32 mEndY;
					ev_real32 mEndZ;
				};

				class EV_Spatial3DEngine_DLL OBQInitData : public EarthView::World::Core::CAllocatedObject  
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					OBQInitData(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					OBQInitData(){}
				public:
					/// <param name="metaInfo">图层元数据信息</param>
					/// <param name="demMetaInfo">dem元数据信息</param>
					/// <param name="topTileNames">顶级索引对应的瓦块名</param>
					/// <param name="topIndexVec">顶级索引信息</param>
					/// <param name="mapLevel">级别映射表</param>
					/// <param name="sharedMaterialStream">共享材质（不存在则为NULL）</param>
					/// <param name="mSharedTextureStreamVec">共享纹理</param>
					OBQMetaInfo mMetaInfo;
					OBQDemMetaInfo mDemMetaInfo;
					EarthView::World::Core::CStringArray mTopTileNames;
					LodIndexVector mTopIndexVec;
					EarthView::World::Core::IntPairVector mMapLevel;
					EarthView::World::Core::MemoryDataStreamPtr mSharedMaterialStream;
					EarthView::World::Core::MemoryDataStreamVector mSharedTextureStreamVec;
				};

				class EV_Spatial3DEngine_DLL CObliqueDBUtility : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CObliqueDBUtility(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					
					CObliqueDBUtility(const EarthView::World::Core::Database::CSqlDatabase& db);

					virtual ~CObliqueDBUtility();

					enum EVDataType
					{
						DT_OBQ,
						DT_QSLIM
					};
					/// <summary>
					/// 插入metadataxml信息
					/// <returns>true插入成功，false插入不成功</returns>
					ev_bool insertMetaDataInfo(const OBQMetaInfo& info);

					/// <summary>
					/// 读取metadataxml信息
					/// <returns>ev_bool，返回true，读取成功，返回false，读取失败</returns>
					ev_bool readMetaDataInfo(_out OBQMetaInfo& info);

					/// <summary>
					/// 更新metadataxml信息
					/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
					ev_bool updateMetaDataInfo(const OBQMetaInfo& info);


					/// <summary>
					/// 插入DEM metadataxml信息
					/// <returns>true插入成功，false插入不成功</returns>
					ev_bool insertDemMetaDataInfo(const OBQDemMetaInfo& info);

					/// <summary>
					/// 读取DEM metadataxml信息
					/// <returns>ev_bool，返回true，读取成功，返回false，读取失败</returns>
					ev_bool readDemMetaDataInfo(_out OBQDemMetaInfo& info);

					/// <summary>
					/// 更新DEM metadataxml信息
					/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
					ev_bool updateDemMetaDataInfo(const OBQDemMetaInfo& info);


					/// <summary>
					/// LodIndex*下面挂接了瓦块所有lod信息
					/// <param name="tileName">瓦片名称</param>
					/// <param name="pLodNode">Lod信息</param>
					/// <returns>true插入成功，false插入不成功</returns>
					ev_bool insertTileLod(const EVString& tileName, LodIndex* pLodNode);

					
					/// <summary>
					/// 更新个边框信息
					/// <param name="tileName">瓦片名称</param>
					/// <param name="id">id</param>
					/// <param name="xmin">x轴最小值</param>
					/// <param name="xmax">x轴最大值</param>
					/// <param name="zmin">z轴最小值</param>
					/// <param name="zmax">z轴最大值</param>
					/// <returns>true插入成功，false插入不成功</returns>
					ev_bool updateTileLodBound(const EVString& tileName, ev_uint32 id, ev_real32 xmin, ev_real32 xmax, ev_real32 ymin, ev_real32 ymax, ev_real32 zmin, ev_real32 zmax);
					ev_bool updateTileLodBound(const EVString& tileName, const EVString& meshName, ev_real32 xmin, ev_real32 xmax, ev_real32 ymin, ev_real32 ymax, ev_real32 zmin, ev_real32 zmax);


					/// <summary>
					/// 获取所有目录下瓦块名称
					/// <returns>CStringArray，名称数组</returns>
					EarthView::World::Core::CStringArray readAllTileName();
					//只支持7z的组织方式
					ev_bool readAllTileNameAndTopTileLod(_out EarthView::World::Core::CStringArray& tileNames, _out LodIndexVector& lodVec);

					/// <summary>
					/// 读取瓦片LOD信息
					/// <param name="tileName">瓦片名称</param>
					/// <returns>LodIndex，LOD信息，LodIndex*需要释放</returns>
					_extfree LodIndex* readTileLod(const EVString& tileName);

					/// <summary>
					/// 读取子瓦片LOD信息
					/// <param name="tileName">瓦片名称</param>
					/// <param name="parentID">父亲ID</param>
					/// <returns>LodIndex，LOD信息，LodIndex*需要释放</returns>
					_extfree LodIndexVector readChildLod(const EVString& tileName, ev_uint32 parentID);
					_extfree LodIndexVector readChildLod(const EVString& tileName, const EVString& modelPath);
					_extfree LodIndex* readLodByID(const EVString& tileName, ev_uint32 id);
					/// <summary>
					/// 更新metadataxml高度信息
					/// <param name="altitude">高度</param>
					/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
					ev_bool updateMetaDataInfo(ev_real64 altitude);

					/// <summary>
					/// 插入所有顶级瓦块索引到顶级瓦块表
					/// <returns></returns>
					ev_bool insertAllTopLod();

					/// <summary>
					/// 创建顶级瓦块表
					/// <returns></returns>
					ev_bool createTopLodTable();

					/// <summary>
					/// 插入顶级瓦块索引到顶级瓦块表
					/// <param name="tileName">瓦片名称</param>
					/// <param name="pLodIndex">顶级瓦块索引</param>
					/// <param name="haveTopTileIndexTab">是否含有TopTileIndexTab表</param>
					/// <returns></returns>
					ev_bool insertTopLod(const EVString& tileName, LodIndex* pLodIndex,ev_bool haveTopTileIndexTab);

					/// <summary>
					/// 读取所有顶级瓦块索引
					/// <returns></returns>
					_extfree LodIndexVector readAllTopLod();

					/// <summary>
					/// 删除所有瓦块索引表
					/// <returns></returns>
					ev_bool dropAllLodTab();

					/// <summary>
					/// 插入级别映射
					/// <returns></returns>
					ev_bool insertLevelMap(EarthView::World::Core::IntPairVector& mapLevel);

					/// <summary>
					/// 读取级别映射
					/// <returns></returns>
					ev_bool readLevelMap(EarthView::World::Core::IntPairVector& mapLevel);

					/// <summary>
					/// 获取DB文件路径
					/// <returns>EVString，返回DB文件路径</returns>
					EVString getDBFile();

					/// <summary>
					/// 获取数据库连接
					/// <returns>CSqlDatabase，数据库连接</returns>
					EarthView::World::Core::Database::CSqlDatabase getSqlDatabase();

					/// <summary>
					/// 序列化所有元数据信息成流对象 
					/// <returns></returns>
					static ev_bool baseInfoToStream(const OBQInitData& initData
													, _out EarthView::World::Core::MemoryDataStreamPtr& stream);

					/// <summary>
					/// 从流对象解析元数据信息
					//注意：传出的LodIndexVector里边的指针需要外部释放
					/// <returns></returns>
					static ev_bool streamToBaseInfo(const EarthView::World::Core::MemoryDataStreamPtr& stream
													,_out OBQInitData& initData);

					/// <summary>
					/// 解析publish文件					
					/// <returns></returns>
					static ev_bool obqPublishFileToInfo(_in const EVString& filePath,_out ev_int32& version,_out EarthView::World::Core::CStringArray& rootNames, _out EarthView::World::Core::CStringArray& modelNames);
					
					/// <summary>
					/// 保存publish文件				
					/// <returns></returns>
					static ev_bool obqPublishInfoToFile(_in const EVString& filePath,_in ev_int32 version,_in EarthView::World::Core::CStringArray& rootNames,_in EarthView::World::Core::CStringArray& modelNames);
					//
					ev_void setDataType(CObliqueDBUtility::EVDataType type);
				private:
					CObliqueDBUtility::EVDataType mDataType;
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* mpSqlStd;
					EarthView::World::Core::Database::CSqlDatabase mDB;
					EVString mDBFile;
					ev_bool _insertTileLod(const EVString& tabName, LodIndex* pLodNode, ev_uint32 parentID);
					ev_bool _createTileLodTable(const EVString& tabName);
					ev_bool _createTopTileIndexTable();
					ev_bool _createMetaDataTable();
					ev_bool _createDemMetaDataTable();
					ev_bool _createLevelMapTable();
					ev_bool _updateTopTileIndexTileName(const EVString& modelPath, const EVString& tileName);
					EarthView::World::Core::CStringArray _readTileNameFromTopTileIndex();
					EarthView::World::Core::CStringArray _readTileNameFromDBTables();
				};
			}
		}
	}
}
#endif

