#ifndef EV_CONNECTION_IMP_PLUGIN_H_
#define EV_CONNECTION_IMP_PLUGIN_H_
#include "core/memoryallocatedobject.h"
#include "core/plugin.h"
#include "download/downloadglobal.h"

namespace EarthView{namespace World{namespace Spatial{namespace Download{

	class ConnectionImp;
	class ConnectionImpAdapter;
	class CWebServiceConnection;
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	class EV_DOWNLOAD_DLL ConnectionImpPlugin : public EarthView::World::Core::CPlugin
	{
		ev_private:
			/// <summary>
			/// 
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
		ConnectionImpPlugin(EarthView::World::Core::CNameValuePairList* pList){};
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ConnectionImpPlugin(const EVString& host) ;

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ~ConnectionImpPlugin();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		const EVString& getHost() const;

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		void setPluginPath(const EVString& pluginPaht);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		const EVString& getPluginPath() const;

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual void install();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual void initialise();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual void shutdown();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual void uninstall();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_int32 connectionImpCount() const;

		/// <summary>
		/// 这里子类需要new一个对象返回
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual EarthView::World::Spatial::Download::ConnectionImp* createConnectionImp(ev_int32 type);

		virtual ev_bool useMetadataServiceConnectState(){return false;}
		virtual void setMetadataServiceConnectState(ev_bool connectable){}
		virtual ev_bool getMetadataServiceConnectState(){return true;}

		/// <summary>
		/// 释放 createConnectionImp()函数产生的对象
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		static ev_void releaseConnectionImp(ConnectionImp* pConnectionImp);
	protected:
		EVString mHost;
		EVString mPluginPath;
	private:
	};

	// <summary>
	// 
	// </summary>
	class EV_DOWNLOAD_DLL ConnectionImp : public EarthView::World::Core::CAllocatedObject
	{
ev_private:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ConnectionImp(EarthView::World::Core::CNameValuePairList* pList){};
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ConnectionImp();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ~ConnectionImp();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_void setWebServiceConnection(EarthView::World::Spatial::Download::CWebServiceConnection* pWebServiceConnection);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_int32 getType() const;

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ev_bool openConnection();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ev_bool closeConnection();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ev_void setConnectTimeout(ev_int32 timeout);
	protected:
		ev_int32 mType;
		ConnectionImpAdapter* mpConnectionImpAdapter;
		EarthView::World::Spatial::Download::CWebServiceConnection* mpWebServiceConnection;
	private:
	};

	// <summary>
	// 
	// </summary>
	class EV_DOWNLOAD_DLL ConnectionImpAdapter : public EarthView::World::Core::CAllocatedObject
	{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ConnectionImpAdapter();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		~ConnectionImpAdapter();

	protected:
	private:
	};


}}}}
#endif
