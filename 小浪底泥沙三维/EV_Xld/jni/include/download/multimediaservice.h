#ifndef EV_DOWNLOAD_MULTIMEDIA_SERVICE_H
#define EV_DOWNLOAD_MULTIMEDIA_SERVICE_H

#include "download/downloadglobal.h"
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/connectionimpplugin.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{
				
				class MultiMedaServiceConnectionImp;

				class EV_DOWNLOAD_DLL MediaFileData : public EarthView::World::Core::CAllocatedObject
				{
				public:
					MediaFileData(){};
					~MediaFileData(){};
					__WebIn EVString filename;	/* optional element of type xsd:string */
					__WebIn EVString datatype;	/* optional element of type xsd:string */

					__WebOut EarthView::World::Core::MemoryDataStreamPtr mediafiledata;
				protected:
				private:
					C_DISABLE_COPY(MediaFileData)
				};

				class EV_DOWNLOAD_DLL MediaFileLength : public EarthView::World::Core::CAllocatedObject
				{
				public:
					MediaFileLength(){};
					~MediaFileLength(){};
					__WebIn EVString filename;	/* optional element of type xsd:string */
					__WebIn EVString datatype;	/* optional element of type xsd:string */

					__WebOut ev_int64 mediafilelength;
				protected:
				private:
					C_DISABLE_COPY(MediaFileLength)
				};
				
				class EV_DOWNLOAD_DLL MediaFileDataWithOffset : public EarthView::World::Core::CAllocatedObject
				{
				public:
					MediaFileDataWithOffset(){};
					~MediaFileDataWithOffset(){};
					__WebIn EVString filename;	/* optional element of type xsd:string */
					__WebIn EVString datatype;	/* optional element of type xsd:string */
					__WebIn ev_int64 offset;
					__WebIn ev_int64 length;

					__WebOut EarthView::World::Core::MemoryDataStreamPtr mediafiledata;
				protected:
				private:
					C_DISABLE_COPY(MediaFileDataWithOffset)
				};


				class EV_DOWNLOAD_DLL MultiMedaServiceConnection : public CWebServiceConnection
				{
					friend class CWebManager;
					friend class MultiMedaServiceConnectionImp;
	public:

					MultiMedaServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

					~MultiMedaServiceConnection();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setConnectionImp(ConnectionImp* ref_pImp);

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

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMediaFileLength(MediaFileLength& mediaFileLength);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMediaFile(MediaFileData& mediaFileData);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMediaFileByOffset(MediaFileDataWithOffset& mediaFileDataWithOffset);

				protected:
					MultiMedaServiceConnection();

				private:
					C_DISABLE_COPY(MultiMedaServiceConnection);
					MultiMedaServiceConnectionImp* mpImp;
				};

				///////////////////////////////////////////////////////////////////////////
				class EV_DOWNLOAD_DLL MultiMedaServiceConnectionImp : public ConnectionImp
				{
				public:
					MultiMedaServiceConnectionImp();
					virtual ~MultiMedaServiceConnectionImp() = 0;


					virtual ev_int32 getMediaFileLength(MediaFileLength& mediaFileLength) = 0;
					virtual ev_int32 getMediaFile(MediaFileData& mediaFileData) = 0;
					virtual ev_int32 getMediaFileByOffset(MediaFileDataWithOffset& mediaFileDataWithOffset) = 0;

				protected:
				private:
				};
			}
		}
	}
}

#endif