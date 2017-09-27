#ifndef EARTHVIEW_WORLD_SPATIAL_Vector3DServiceCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_Vector3DServiceCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"
#include "core/variant.h"
#include "core/string_array.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

			class Vector3DServiceConnection;
			class Vector3DServiceConnectionImp;

/*
			class EV_DOWNLOAD_DLL Vector3DServiceData: public EarthView::World::Core::CBaseObject
			{
ev_private:
				Vector3DServiceData(EarthView::World::Core::CNameValuePairList* namevaluelist);

			public:
				Vector3DServiceData();
				virtual ~Vector3DServiceData();
				EVString ServiceName;
				EVString ServictType;
			};

			class EV_DOWNLOAD_DLL Vector3DServiceCapability: public EarthView::World::Core::CBaseObject
			{
ev_private:
				Vector3DServiceCapability(EarthView::World::Core::CNameValuePairList* namevaluelist){}
			public:
				Vector3DServiceCapability(){}
				virtual ~Vector3DServiceCapability(){}
				EVString Type;
				EVString Url;
				EVString Version;

			};
			class EV_DOWNLOAD_DLL Vector3DServiceCapabilitys: public EarthView::World::Core::CBaseObject
			{

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				Vector3DServiceCapabilitys(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Vector3DServiceCapabilitys();

ev_private:
				typedef vector<Vector3DServiceCapability> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个对象
				/// </summary>
				/// <param name="t">特效对象</param>
				/// <returns></returns>
				void push_back(Vector3DServiceCapability const &t);

				/// <summary>
				/// 删除最后一个数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效对象的引用</returns>
				Vector3DServiceCapability& front();

				/// <summary>
				/// 传回容器中最后一个特效对象,不检查这个特效对象是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效对象的引用</returns>
				Vector3DServiceCapability& back();

				/// <summary>
				/// 在pos位置插入一个特效对象
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">特效对象</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, Vector3DServiceCapability const &t);

				/// <summary>
				/// 删除pos位置的数据
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效对象的引用 </returns>
				Vector3DServiceCapability& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效对象的引用 </returns>
				Vector3DServiceCapability const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效对象的引用 </returns>
				Vector3DServiceCapability& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个特效对象的引用 </returns>
				Vector3DServiceCapability const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};
*/
			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL Vector3DServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Vector3DServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~Vector3DServiceConnection();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);

				/// <summary>
				/// 断开与web服务器的连接
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void  closeConnect();

				/// <summary>
				/// 连接web服务器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void openConnect();

				ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names);

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readMetaData(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readLayerInfo(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);
				/// <summary>
				/// 读取八叉树信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readOctreeNodes(_in const EVString& servicename,_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取八叉树信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readOctreeObjects(_in const EVString& servicename,_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

			protected:
				Vector3DServiceConnection();

			private:
				C_DISABLE_COPY(Vector3DServiceConnection);
				Vector3DServiceConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL Vector3DServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				Vector3DServiceConnectionImp();
				virtual ~Vector3DServiceConnectionImp();
				virtual ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names) = 0;
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readMetaData(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readLayerInfo(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;
				/// <summary>
				/// 读取八叉树信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readOctreeNodes(_in const EVString& servicename,_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;
				virtual ev_int32 readOctreeObjects(_in const EVString& servicename,_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;
			protected:
			private:
			};

		}}}}
#endif