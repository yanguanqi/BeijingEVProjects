#ifndef EV_DATASET_LOCK_MANAGER_H_
#define EV_DATASET_LOCK_MANAGER_H_
#include "spatialdatabase/spatialdatabaseconfig.h"
#include "databaseutility/sqldatabase.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				// <summary>
				// 数据集锁管理类
				// 提供数据集锁查询，锁，破锁功能
				// </summary>
				class CDatasetLockInfo;
				class CDatasetLockInfoVector;
				class IFileDataSource;
				class EV_SPATIALDATABASE_DLL CDatasetLockManager : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDatasetLockManager(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					virtual ~CDatasetLockManager();

					/// <summary>
					/// 获取单例
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static EarthView::World::Spatial::GeoDataset::CDatasetLockManager* getSingleton();

					/// <summary>
					/// 析构单例
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					static void releaseSingleton();

					/// <summary>
					/// 给数据集加锁
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					ev_bool lockDataset(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);
					ev_bool lockDataset(IFileDataSource* pDataSource, const EVString& datasetName);
					/// <summary>
					/// 给数据集解锁
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>					
					ev_bool unlockDataset(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);
					ev_bool unlockDataset(EarthView::World::Core::Database::CSqlDatabase& db);
					ev_bool unlockDataset(IFileDataSource* pDataSource, const EVString& datasetName);
					/// <summary>
					/// 强制解锁
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool breakDatasetLock(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);

					/// <summary>
					/// 检查数据集是否被锁
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					ev_bool isDatasetLocked(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);
					ev_bool isDatasetLocked(IFileDataSource* pDataSource, const EVString& datasetname);
					/// <summary>
					/// 判断数据集是否已经被自己锁定
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isDatasetLockedBySelf(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);
					ev_bool isDatasetLockedBySelf(IFileDataSource* pDataSource, const EVString& datasetname);
					/// <summary>
					/// 查询所有数据集锁状态
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector queryAllLockInfo(EarthView::World::Core::Database::CSqlDatabase& db);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					const EVString& lockerName() const;

				private:
					CDatasetLockManager();

					static EarthView::World::Spatial::GeoDataset::CDatasetLockManager* mpSingleton;

					EVString mGuid;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static ev_int32 getDatasetID(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& datasetname);
				};

				class EV_SPATIALDATABASE_DLL CDatasetLockInfo : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDatasetLockInfo(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CDatasetLockInfo();

					EVString mDatasetName;
					EVString mGuid;
					EVString mTypeName;
					ev_int32 mEVID;
					ev_int32 mType;

				};

				class EV_SPATIALDATABASE_DLL CDatasetLockInfoVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::GeoDataset::CDatasetLockInfo> InternalList;
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
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::GeoDataset::CDatasetLockInfo const &t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDatasetLockInfoVector(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDatasetLockInfoVector();
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::GeoDataset::CDatasetLockInfo const &t);
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
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& front();
					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& back();
					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& at(_in ev_uint32 pos);

					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo const &at(_in ev_uint32 pos) const;
					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::GeoDataset::CDatasetLockInfo const &t);
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

					void reserve(ev_size_t count);
				};

			}
		}
	}
}
#endif
