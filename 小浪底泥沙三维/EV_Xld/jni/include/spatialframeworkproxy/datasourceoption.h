/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// EarthView::World::Utilities::DataSourceOption等类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/12/09		赵玻恩		类定义
//
#ifndef _DATASOURCEOPTION_INCLUDE__
#define _DATASOURCEOPTION_INCLUDE__

#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/object.h"
#include "spatialframeworkproxy/forwarddeclare.h"


namespace EarthView{namespace World{namespace Utilities{

	class DataSourceOptionHelper;
	class DataSourceOption_Open;
	class DataSourceOption_Create;

	// SQLServer的版本，该枚举在打开SQLServer类型的数据源时使用。
	/*enum SQLServerVersion
	{
	SQLServerUnknow,
	SQLServer2005,
	SQLServer2008,
	SQLServer2012
	};*/

	// 网络服务器的类型，该枚举在打开网络数据源时使用。
	enum WebServerType
	{
		EarthViewServer,
		OGC_WMTS,
		OGC_WMS,
		OGC_WFS,
		Other
	};

	// class DataSourceOption
	// 数据源选项类 - 通过此类生成打开或创建数据源时所需的选项，通过将此类对象传给
	// AppDataSource::openDataSource或createDataSource来打开或创建一个数据源。
	//
	// (1) 使用DataSourceOption().open()来生成一个数据源打开选项，并且在open()之后
	// 根据要打开的数据源的类型选择对应的函数，例如，生成打开sqlite的选项如下：
	//		DataSourceOption().open().db().sqlite("c:\\test.end")
	//
	// (2) 使用DataSourceOption().create()来生成一个数据源创建选项，方式与打开相同。
	class EV_FRAMEWORKPROXY_DLL DataSourceOption : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 构造函数。
		/// </summary>
		/// <returns></returns>
		DataSourceOption();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DataSourceOption();

		/// <summary>
		/// 设置一个打开数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption_Open& open();

		/// <summary>
		/// 设置一个创建数据源的选项，具体请见AppDataSource::createDataSource()。
		/// </summary>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption_Create& create();

	protected:
		/// <summary>
		/// 拷贝构造函数。
		/// </summary>
		/// <returns></returns>
		DataSourceOption(DataSourceOption&){}
ev_private:
		DataSourceOption(EarthView::World::Core::CNameValuePairList *pList);

		DataSourceOptionHelper* helper;
	};

	class DataSourceOption_Open_DBHelper;
	class EV_FRAMEWORKPROXY_DLL DataSourceOption_Open_DB : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个打开sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& sqlite (const EVString& filepath);

		/// <summary>
		/// 设置一个打开odbc数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <param name="ip">服务器IP地址。</param>
		/// <param name="port">服务器端口。</param>
		/// <param name="user">数据库用户名。</param>
		/// <param name="password">数据库密码。</param>
		/// <param name="ver">SQLServer数据库的版本。</param>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& odbc (
			const EVString&	 ip, 
					  int	 port, 
			const EVString&	 user,
			const EVString&	 password
		);

		/// <summary>
		/// 设置一个打开oracle数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <param name="ip">服务器IP地址。</param>
		/// <param name="port">服务器端口。</param>
		/// <param name="user">数据库用户名。</param>
		/// <param name="password">数据库密码。</param>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& oracle (
			const EVString&   ip,
					  int	port,
			const EVString&   user,
			const EVString&   password
		);

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DataSourceOption_Open_DB();

	protected:
		DataSourceOption_Open_DBHelper* helper;

ev_private:
		/// <summary>
		/// 构造函数，此类不需要手动构造。
		/// </summary>
		/// <returns></returns>
		DataSourceOption_Open_DB(DataSourceOptionHelper* ref_helper);
	};

	class DataSourceOption_Create_DBHelper;
	class EV_FRAMEWORKPROXY_DLL DataSourceOption_Create_DB : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个创建sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <param name="filepath">sqlite数据库文件路径。</param>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& sqlite (const EVString& filepath);

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DataSourceOption_Create_DB();

	protected:
		DataSourceOption_Create_DBHelper* helper;

ev_private:
		/// <summary>
		/// 构造函数，此类不需要手动构造。
		/// </summary>
		/// <returns></returns>
		DataSourceOption_Create_DB(DataSourceOptionHelper* ref_helper);
	};

	class DataSourceOption_OpenHelper;
	class EV_FRAMEWORKPROXY_DLL DataSourceOption_Open : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个打开数据库数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption_Open_DB& db();

		/// <summary>
		/// 设置一个打开文件数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <param name="dirPath">
		/// 文件数据源的目录。
		/// 需要注意的是打开文件数据源时指定别名无效，数据库的别名就是目录名。
		/// </param>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& file(const EVString& dirPath);

		/// <summary>
		/// 设置一个打开网络数据源的选项，具体请见AppDataSource::openDataSource()。
		/// </summary>
		/// <param name="ip">服务器IP地址。</param>
		/// <param name="port">服务器端口。</param>
		/// <param name="user">数据库用户名。</param>
		/// <param name="password">数据库密码。</param>
		/// <param name="serverType">
		/// 服务器类型，根据此类型使用相应的服务器访问插件。
		/// 对于EV的服务器，就使用EarthViewServer即可。
		/// </param>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption& web(const EVString& ip, int port, const EVString& user, const EVString& password, const EVString& pluginFile, WebServerType serverType = EarthViewServer
			);
		EarthView::World::Utilities::DataSourceOption& web(const EVString& url, const EVString& user, const EVString& password, const EVString& pluginFile, WebServerType serverType = EarthViewServer
			);

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DataSourceOption_Open();

	protected:
		DataSourceOption_OpenHelper* helper;

ev_private:
		/// <summary>
		/// 构造函数，此类不需要手动构造。
		/// </summary>
		/// <returns></returns>
		DataSourceOption_Open(DataSourceOptionHelper* ref_helper);
	};

	class DataSourceOption_CreateHelper;
	class EV_FRAMEWORKPROXY_DLL DataSourceOption_Create : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 设置一个创建数据库数据源的选项，具体请见AppDataSource::createDataSource()。
		/// </summary>
		/// <returns></returns>
		EarthView::World::Utilities::DataSourceOption_Create_DB& db();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~DataSourceOption_Create();

	protected:
		DataSourceOption_CreateHelper* helper;

ev_private:
		/// <summary>
		/// 构造函数，此类不需要手动构造。
		/// </summary>
		/// <returns></returns>
		DataSourceOption_Create(DataSourceOptionHelper* ref_helper);
	};

}}}

#endif // _DATASOURCEOPTION_INCLUDE__

