#ifndef Vector3DServiceCONNECTION_SOAP_H_
#define Vector3DServiceCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/vector3dserviceconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class Vector3DServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL Vector3DServiceConnectionImp_soap : public EarthView::World::Spatial::Download::Vector3DServiceConnectionImp
				{
				public:
					Vector3DServiceConnectionImp_soap();
					~Vector3DServiceConnectionImp_soap();
					
					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

					virtual ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names);
					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readMetaData(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

					/// <summary>
					/// 读取图层信息
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
					Vector3DServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif