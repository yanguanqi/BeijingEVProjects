#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_EVLASXGDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_EVLASXGDATASET_H


#include "spatial3dengine/iobqdataset.h"
#include "spatialgui/editevent.h"
#include "spatialdatabase/propertyset.h"
namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeatureClass;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class  EV_Spatial3DEngine_DLL CEVLasxgEditEvent : public EarthView::World::Spatial::SystemUI::CDatasetEditEvent
				{
ev_private:
					CEVLasxgEditEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					CEVLasxgEditEvent( EarthView::World::Spatial::GeoDataset::IDataset* dataset, ev_uint16 eventtype);
					virtual ~CEVLasxgEditEvent();
				public:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					ev_uint32 mCacheID;
					ev_uint32 mRecordID;
				};

				class EV_Spatial3DEngine_DLL CEVLasxgEditingState : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEVLasxgEditingState(_in EarthView::World::Core::CNameValuePairList *pList)
					{
						id=0;
						isInstance = false;
					}

				public:
					CEVLasxgEditingState()
					{
						id=0;
						isInstance = false;
					}

					virtual ~CEVLasxgEditingState(){}

					ev_uint32 id;
					EVString meshxfile;
					ev_real64 lat;
					ev_real64 lon;
					ev_real64 alt;

					EarthView::World::Spatial::Math::CVector3 localScale;
					EarthView::World::Spatial::Math::CQuaternion localOrientation;
					EarthView::World::Spatial::GeoDataset::CPropertySet mPropertyVal;
					ev_bool isInstance;
				};

				class EV_Spatial3DEngine_DLL CEVLasxgEditingStateMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CEVLasxgEditingStateMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVLasxgEditingStateMap();
					/// <summary>
					/// 添加数据
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					ev_bool push(const ev_uint32 &key, CEVLasxgEditingState const &val);
					/// <summary>
					/// 判断指的指定的键是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_bool exist(const ev_uint32 &key);
					CEVLasxgEditingState& operator[](const ev_uint32 &key);
					/// <summary>
					/// 根据指定的键返回值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					CEVLasxgEditingState& get(ev_uint32 key);
					/// <summary>
					/// 根据指定的键删除数据
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_void erase(const ev_uint32 &key);
					/// <summary>
					/// 返回长度
					/// </summary>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <returns></returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_uint32, CEVLasxgEditingState> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CEVLasxgEditingStateMap::_Pairib insert(const value_type &val);
					CEVLasxgEditingStateMap::iterator find(const ev_uint32 &key);
					CEVLasxgEditingStateMap::const_iterator find(const ev_uint32 &key) const;

					ev_void operator = (const CEVLasxgEditingStateMap& rhs);
				private:
					InternalList mList;
				};

				class EV_Spatial3DEngine_DLL CEVLasXGDataset : public IObqDataset
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEVLasXGDataset(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CEVLasXGDataset();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">数据集的名字</param>
					/// <returns></returns>
					CEVLasXGDataset(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataSource* ref_DataSource);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CEVLasXGDataset();

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					/// <summary>
					/// 获取最小最大高程
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void getElevationMinMaxZ(ev_real64& elevationMinZ,ev_real64& elevationMaxZ);

					/************************需要重写数据流读写接口********************/
					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name="initData">初始化信息</param>
					/// <returns>成功0，失败非0</returns>
					virtual ev_int32 readInitData(_out OBQInitData& initData);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name="filename">文件名</param>
					/// <param name="tileName">瓦块名</param>
					/// <param name="lodID">当前请求的文件瓦块的LODID</param>
					/// <param name="meshStream">传出，请求数据流资源</param>
					/// <param name="childIndexVec">传出，请求数据子瓦块索引，（注意：传出的childIndexVec指针需要释放内存）</param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readTileData(const EVString& filename
												, const EVString& tileName
												, ev_uint32 lodID
												, _out EarthView::World::Spatial::MeshStream& meshStream
												, _out LodIndexVector& childIndexVec);

					virtual ev_int32 readTileMeshData(const EVString& filename
													, const EVString& tileName
													, _out EarthView::World::Core::MemoryDataStreamPtr& meshStream);


					///************************记录表相关接口********************/
					void setRecordFeatureClass(EarthView::World::Spatial::GeoDataset::IFeatureClass* fs){mpRecordCls = fs;}

					EarthView::World::Spatial::GeoDataset::IFeatureClass* getRecordFeatureClass(){return mpRecordCls;}

				

					///************************编辑相关接口********************/
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing();
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					virtual ev_bool saveEditing();
					ev_bool cancelEditing();

					ev_bool addObject(const CEVLasxgEditingState& st);

					ev_bool updateObject(const CEVLasxgEditingState& st);

					ev_bool getObject(ev_uint32 id, _out CEVLasxgEditingState& st);

					ev_bool deleteObject(ev_uint32 id, _out CEVLasxgEditingState& st);

					void getAddEditingStateMap(_out CEVLasxgEditingStateMap& estm);

					ev_bool findUpdateObject(ev_uint32 id, _out CEVLasxgEditingState& st);

					ev_bool findDeleteObject(ev_uint32 id);
				protected:
					ev_bool findAddList(ev_uint32 id, _out CEVLasxgEditingState& st);
					ev_bool pushAddList(const CEVLasxgEditingState& st);
					ev_bool updateAddList(const CEVLasxgEditingState& st);
					ev_bool deleteAddList(ev_uint32 id);

					ev_bool findUpdateList(ev_uint32 id, _out CEVLasxgEditingState& st);
					ev_bool pushUpdateList(const CEVLasxgEditingState& st);
					ev_bool updateUpdateList(const CEVLasxgEditingState& st);
					ev_bool deleteUpdateList(ev_uint32 id);

					ev_bool findDeleteList(ev_uint32 id);
					ev_bool pushDeleteList(ev_uint32 id);
					ev_bool deleteDeleteList(ev_uint32 id);

					typedef set<ev_uint32> DeleteList;

					ev_bool checkOtherInstance(ev_uint32 id, _out EVString& meshxfilename);
					ev_uint32 addRecord(const CEVLasxgEditingState& st);
					ev_bool deleteRecord(ev_uint32 id);
					ev_bool updateRecord(const CEVLasxgEditingState& st);
					ev_bool processAddList();
					ev_bool processUpdateList();
					ev_bool processDeleteList();
					ev_bool buildIndex();
					ev_bool updateMeshxMetaInfo(const EVString& meshxfile
												,ev_real64 lat, ev_real64 lon, ev_real64 alt
												,EarthView::World::Spatial::Math::CVector3& localScale, EarthView::World::Spatial::Math::CQuaternion& localOrientation);
				protected:
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpRecordCls;
					ev_bool mIsEditing;
					ev_bool mIsWithUndo;

					CEVLasxgEditingStateMap mAddList;
					CEVLasxgEditingStateMap mUpdateList;
					DeleteList mDeleteList;
				};
			}
		}
	}
}
#endif
