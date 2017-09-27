#ifndef EARTHVIEW_WORLD_SPATIAL_ModelServiceConnection_H
#define EARTHVIEW_WORLD_SPATIAL_ModelServiceConnection_H
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

				class ModelServiceConnection;
				class ModelServiceConnectionImp;

		
				class EV_DOWNLOAD_DLL ModelServiceData: public EarthView::World::Core::CBaseObject
				{
ev_private:
					ModelServiceData(EarthView::World::Core::CNameValuePairList* namevaluelist);

				public:
					ModelServiceData();
					virtual ~ModelServiceData();
					EVString ServiceName;
					EVString ServictType;
				};

				class EV_DOWNLOAD_DLL ServiceCapability: public EarthView::World::Core::CBaseObject
				{
ev_private:
					ServiceCapability(EarthView::World::Core::CNameValuePairList* namevaluelist){}
				public:
					ServiceCapability(){}
					virtual ~ServiceCapability(){}
					EVString Type;
					EVString Url;
					EVString Version;

				};
				class EV_DOWNLOAD_DLL ServiceCapabilitys: public EarthView::World::Core::CBaseObject
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ServiceCapabilitys(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ServiceCapabilitys();

ev_private:
					typedef vector<ServiceCapability> InternalList;
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
					void push_back(ServiceCapability const &t);

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
					ServiceCapability& front();

					/// <summary>
					/// 传回容器中最后一个特效对象,不检查这个特效对象是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效对象的引用</returns>
					ServiceCapability& back();

					/// <summary>
					/// 在pos位置插入一个特效对象
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效对象</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, ServiceCapability const &t);

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
					ServiceCapability& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					ServiceCapability const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					ServiceCapability& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					ServiceCapability const &at(ev_size_t n) const;

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

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL ModelServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ModelServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~ModelServiceConnection();

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

				virtual ev_int32 getServiceData(_in const EVString& servicename, _out ModelServiceData& servicedata);

				virtual ev_int32 getServices(_out EarthView::World::Core::CStringArray& names);

				virtual ev_int32 getServiceCapabilities(_in const EVString& servicename, _out ServiceCapabilitys& capabilitys);


			protected:
				ModelServiceConnection();

			private:
				C_DISABLE_COPY(ModelServiceConnection);
				ModelServiceConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL ModelServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				ModelServiceConnectionImp();
				virtual ~ModelServiceConnectionImp();
				virtual ev_int32 getServiceData(_in const EVString& servicename, _out ModelServiceData& servicedata)=0;

				virtual ev_int32 getServices(_out EarthView::World::Core::CStringArray& names)=0;

				//virtual ev_int32 getMetaData(_in const EVString& servicename,_out )

				virtual ev_int32 getServiceCapabilities(_in const EVString& servicename, _out ServiceCapabilitys& capabilitys)=0;
				
				
			protected:
			private:
			};

		}}}}
#endif