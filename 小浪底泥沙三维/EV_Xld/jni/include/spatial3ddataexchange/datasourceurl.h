#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DATASOURCE_URL_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_DATASOURCE_URL_H


#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "core/name_value_pair.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据源打开链接时，用来保存数据源的设置
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CDataSourceUrl : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CDataSourceUrl(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CDataSourceUrl();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="url">数据源配置字符串</param>
					/// <returns></returns>
					CDataSourceUrl(const EVString& url);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CDataSourceUrl();

					/// <summary>
					/// 设置链接字符串
					/// </summary>
					/// <param name="url">链接字符串</param>
					/// <returns></returns>
					ev_void setURL(const EVString& url);

					/// <summary>
					/// 获取链接字符串
					/// </summary>
					/// <returns>返回链接字符串</returns>
					EVString getURL() const;

					/// <summary>
					/// 获取数据库的类型
					/// </summary>
					/// <returns>返回数据库的类型字符串</returns>
					const EVString& medium() const; 

					/// <summary>
					/// 获取链接参数
					/// </summary>
					/// <returns>返回链接参数</returns>
					const EVString& connectParameter() const; 

				protected:
					/// <summary>
					/// 解析数据源的URL
					/// </summary>
					/// <param name="url">URL字符串</param>
					/// <returns></returns>
					ev_void parseURL(const EVString& url);
				private:
					EVString mMedium;
					EVString mConnectParameter;
				};
			}
		}
	}
}
#endif

