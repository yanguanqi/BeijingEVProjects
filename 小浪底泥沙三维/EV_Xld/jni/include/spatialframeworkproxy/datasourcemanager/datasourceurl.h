#ifndef DATASOURCE_URL__
#define  DATASOURCE_URL__
#include "core/stringdefines.h"
#include "core/memoryallocatedobject.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "spatialframeworkproxy/datasourceoption.h"
using namespace EarthView::World::Utilities;
namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				/**********************************************************************************************
				URL: "file@c:/fileDataSource"
				URL: "db:sqlite@c:/model.db&username=ttt&password=1111&sourcename=数据源1"
				URL: "web@http://192.168.5.55:8080&username=ttt&password=1111&sourcename=服务器1&serviceplugin=服务插件路径&servertype=服务类型"
				***********************************************************************************************/
				class EV_FRAMEWORKPROXY_DLL CDataSourceURL : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
					CDataSourceURL(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					CDataSourceURL();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="url">数据源描述字符串</param>
					/// <returns></returns>					
					CDataSourceURL(const EVString& url);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					~CDataSourceURL();

					/// <summary>
					/// 设置数据源描述字符串
					/// </summary>
					/// <param name="url">数据源描述字符串</param>
					/// <returns></returns>					
					ev_void setURL(const EVString& url);

					/// <summary>
					/// 获取数据源描述字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源描述字符串</returns>					
					EVString getURL() const;

					/// <summary>
					/// 获取数据源介质
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源介质</returns>					
					const EVString& medium() const; 

					/// <summary>
					/// 获取数据源连接参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源连接参数</returns>					
					const EVString& connectParameter() const; 

					/// <summary>
					/// 获取数据源别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源别名</returns>	
					const EVString& getAliasName()const;

					/// <summary>
					/// 设置数据源别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源别名</returns>	
					ev_void setAliasName(const EVString& strAliasName);

				protected:
					/// <summary>
					/// 解析数据源描述字符串
					/// </summary>
					/// <param name="url">数据源描述字符串</param>
					/// <returns></returns>					
					ev_void parseURL(const EVString& url);

					
				private:
					EVString mMedium;
					EVString mConnectParameter;
					EVString mAliasName;
				};

				class EV_FRAMEWORKPROXY_DLL CDataSourceURLStruct : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CDataSourceURLStruct(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					CDataSourceURLStruct(){}
					~CDataSourceURLStruct(){}
					EVString sourcetype;				//数据源类型("file, db, web")
					EVString connectpath;			//连接路径
					EVString username;			//用户名
					EVString password;			//密码
					EVString sourcename;			//数据源名称
					EVString ip;					//网络数据集ip
					EVString port;				//网络数据集端口
					EVString dbtype;				//数据库数据源驱动类型
					EVString serviceplugin;  //服务插件路径
					WebServerType serverType;
				};

				class EV_FRAMEWORKPROXY_DLL CDataSourceURLTool : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">参数键值对</param>
					/// <returns></returns>
					CDataSourceURLTool(_in EarthView::World::Core::CNameValuePairList *pList);
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					CDataSourceURLTool();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					~CDataSourceURLTool();

					/// <summary>
					/// 通过参数构造url
					/// </summary>
					/// <param name="urlStruct">URL结构体</param>
					/// <returns></returns>					
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL createFileDataSourceUrl(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& urlStruct);

					/// <summary>
					/// 解析数据源描述符
					/// </summary>
					/// <param name="url">数据源描述字符串</param>
					/// <returns>数据源描述对象</returns>					
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct parseDataSourceUrl(const EVString& url);

					/// <summary>
					/// 解析数据源描述符
					/// </summary>
					/// <param name="url">数据源描述对象</param>
					/// <returns>数据源描述对象</returns>
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct parseDataSourceUrl(const CDataSourceURL& url);

				protected:
					/// <summary>
					/// 判断是否为根目录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					static ev_bool isRootDir(const EVString& testStr);
				private:
				};

			}}}}
#endif
