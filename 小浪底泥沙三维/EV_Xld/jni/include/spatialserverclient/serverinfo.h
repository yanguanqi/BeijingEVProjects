#ifndef EARTHVIEW_WORLD_SPATIAL_CSERVERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CSERVERINFO_H

#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/spatialserverclientenums.h"
#include "spatialinterface/idatametainfos.h"
// using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// 空间服务器数据集元数据类
			/// </summary>
			class CServerLayerInfo;

			/// <summary>
			/// OGC 服务提供商信息类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCServiceProviderInfo
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCServiceProviderInfo();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCServiceProviderInfo();

				/// <summary>
                /// 获取联系人名字
                /// </summary>
                /// <returns>名字</returns>
				const EVString& getIndividualPersion()const;

				/// <summary>
                /// 获取联系人职位
                /// </summary>
                /// <returns>联系人职位</returns>
				const EVString& getPersionPosition()const;
				
				/// <summary>
                /// 获取提供机构名称
                /// </summary>
                /// <returns>提供机构名称</returns>
				const EVString& getProviderName()const;
				
				/// <summary>
                /// 获取提供机构网址
                /// </summary>
                /// <returns>提供机构网址</returns>
				const EVString& getProviderSite()const;
				
				/// <summary>
                /// 获取联系电话
                /// </summary>
                /// <returns>联系电话</returns>
				const EVString& getVoiceTelephone()const;
				
				/// <summary>
                /// 获取传真号
                /// </summary>
                /// <returns>传真号</returns>
				const EVString& getFacsimileTelephone()const;
				
				/// <summary>
                /// 获取电子邮件地址
                /// </summary>
                /// <returns>电子邮件地址</returns>
				const EVString& getElectronicMailAddress()const;
				
				/// <summary>
                /// 获取邮编
                /// </summary>
                /// <returns>邮编</returns>
				const EVString& getPostCode()const;
				
				/// <summary>
                /// 获取所在国家
                /// </summary>
                /// <returns>国家名</returns>
				const EVString& getCountry()const;
				
				/// <summary>
                /// 获取所在省份
                /// </summary>
                /// <returns>省份名</returns>
				const EVString& getProvince()const;
				
				/// <summary>
                /// 获取所在城市
                /// </summary>
                /// <returns>城市名</returns>
				const EVString& getCity()const;
				
				/// <summary>
                /// 获取联系地址
                /// </summary>
                /// <returns>地址</returns>
				const EVString& getAddress()const;
				
				/// <summary>
                /// 获取地址类型
                /// </summary>
                /// <returns>地址类型</returns>
				const EVString& getAddressType()const;

				/// <summary>
                /// 设置联系人
                /// </summary>
				/// <param name="value">联系人人名</param>
                /// <returns></returns>
				ev_void setIndividualPersion(_in const EVString& value);
				
				/// <summary>
                /// 设置联系人职位
                /// </summary>
				/// <param name="value">联系人职位</param>
                /// <returns></returns>
				ev_void setPersionPosition(_in const EVString& value);
				
				/// <summary>
                /// 获取数据提供机构名称
                /// </summary>
				/// <param name="value">机构名称</param>
                /// <returns></returns>
				ev_void setProviderName(_in const EVString& value);
				
				/// <summary>
                /// 获取数据提供机构网址
                /// </summary>
				/// <param name="value">网址</param>
                /// <returns></returns>
				ev_void setProviderSite(_in const EVString& value);
				
				/// <summary>
                /// 设置联系电话
                /// </summary>
				/// <param name="value">联系电话</param>
                /// <returns></returns>
				ev_void setVoiceTelephone(_in const EVString& value);
				
				/// <summary>
                /// 设置传真地址
                /// </summary>
				/// <param name="value">传真地址</param>
                /// <returns></returns>
				ev_void setFacsimileTelephone(_in const EVString& value);
				
				/// <summary>
                /// 设置电子邮件地址
                /// </summary>
				/// <param name="value">电子邮件地址</param>
                /// <returns></returns>
				ev_void setElectronicMailAddress(_in const EVString& value);
				
				/// <summary>
                /// 设置邮编
                /// </summary>
				/// <param name="value">邮编</param>
                /// <returns></returns>
				ev_void setPostCode(_in const EVString& value);
				
				/// <summary>
                /// 设置所在国家
                /// </summary>
				/// <param name="value">国家</param>
                /// <returns></returns>
				ev_void setCountry(_in const EVString& value);
				
				/// <summary>
                /// 设置所在省份
                /// </summary>
				/// <param name="value">省份</param>
                /// <returns></returns>
				ev_void setProvince(_in const EVString& value);

				/// <summary>
                /// 设置所在城市
                /// </summary>
				/// <param name="value">市名</param>
                /// <returns></returns>
				ev_void setCity(_in const EVString& value);

				/// <summary>
                /// 设置联系地址
                /// </summary>
				/// <param name="value">联系地址</param>
                /// <returns></returns>
				ev_void setAddress(_in const EVString& value);

				/// <summary>
                /// 设置联系地址类型
                /// </summary>
				/// <param name="value">联系地址类型</param>
                /// <returns></returns>
				ev_void setAddressType(_in const EVString& value);
			ev_private:
				COGCServiceProviderInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
			private:
				///第一联系人
				EVString strIndividualPersion;
				///联系人岗位
				EVString strPersionPosition;
				///提供商名称
				EVString strProviderName;
				///供应商网址
				EVString strProviderSite;
				///声音电话
				EVString strVoiceTelephone;
				///视频电话
				EVString strFacsimileTelephone;
				///电子邮件
				EVString strElectronicMailAddress;
				///邮政编码
				EVString strPostCode;
				///国家
				EVString strCountry;
				///省份
				EVString strProvince;
				///城市
				EVString strCity;
				///地址
				EVString strAddress;
				///
				EVString strAddressType;
				friend class CWMSServerInfo;
				friend class CWMTSServerInfo;
				friend class CWFSServerInfo;
				friend class CServerInfo;
			};

			/// <summary>
			/// OGC 服务描述信息类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCServiceInfo
				:public EarthView::World::Core::CAllocatedObject
			{
				ev_private:
					COGCServiceInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
			public:
				//////////////////////////////////////////////////////////////////////////////////
				/*								网络通信描述信息									*/
				//////////////////////////////////////////////////////////////////////////////////
				class EV_SPATIALSERVERCLIENT_DLL COGCHttpInfo
					:public EarthView::World::Core::CAllocatedObject
				{
				private:
					///通信方法 post、get
					EVString strHTTPMethod;
					///服务地址
					EVString strHTTPHref;
					///编码方法：KVP\SOAP
					vector<EVString> listAllowedValue;

					friend class CServerInfo;
					friend class CWMTSServerInfo;
					friend class CWMSServerInfo;
					friend class CWFSServerInfo;
				public:
					/// <summary>
					/// 获取通信方法
					/// </summary>
					/// <returns>通信方法</returns>
					const EVString getHttpMethod() const;

					/// <summary>
					/// 获取服务地址
					/// </summary>
					/// <returns>服务地址</returns>
					const EVString getHttpHref() const;

					/// <summary>
					/// 获取通信编码方法种类
					/// </summary>
					/// <returns>通信编码方法种类</returns>
					ev_uint32 getAllowedValueCount() const;

					/// <summary>
					/// 获取指定通信编码方法
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>指定通信编码方法</returns>
					const EVString getAllowedValue(_in ev_uint32 index) const;

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					COGCHttpInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~COGCHttpInfo();

					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆结果对象指针</returns>
					_extfree EarthView::World::Spatial::COGCServiceInfo::COGCHttpInfo* clone();
				ev_private:
					COGCHttpInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
				};

				/// <summary>
                /// 获取服务名称
                /// </summary>
                /// <returns>服务名称</returns>
				const EVString getServiceName() const;

				/// <summary>
                /// 获取通信方法数目
                /// </summary>
                /// <returns>通信方法数目</returns>
				ev_uint32 getHttpInfoCount() const;

				/// <summary>
                /// 获取指定通行方法描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定通行方法描述</returns>
				const EarthView::World::Spatial::COGCServiceInfo::COGCHttpInfo* getHttpInfo(_in ev_uint32 index) const;

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCServiceInfo();

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				COGCServiceInfo();

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCServiceInfo* clone();
			private:
				///服务名称
				EVString strServiceName;
				///服务通信方法描述
				vector<EarthView::World::Spatial::COGCServiceInfo::COGCHttpInfo*> listHttpInfo;

				friend class CServerInfo;
				friend class CWMTSServerInfo;
				friend class CWMSServerInfo;
				friend class CWFSServerInfo;
			};

			/// <summary>
			/// 字符编码转换工具类
			/// </summary>
			class CStringFormatConvertor;
			/// <summary>
			/// 服务描述信息类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CServerInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfos
			{
			
			public:
				/*-----------------继承的接口--------------*/
				
				/// <summary>
                /// 获取含有的元数据个数
                /// </summary>
                /// <returns>元数据个数</returns>
				virtual ev_uint32 getCount() const;
				
				//virtual IDataMetaInfo* getInfo(ev_uint32 index) const;//在子类实现
				//virtual ev_uint32 add(const IDataMetaInfo* info);//同上
				
				/// <summary>
                /// 移除某个元数据信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns></returns>
				virtual ev_uint32 remove(ev_uint32 index);
				
				/// <summary>
                /// 清除所含元数据信息
                /// </summary>
                /// <returns></returns>
				virtual ev_uint32 clear();///清除图层信息，其他信息保留
				/*-----------------自有接口----------------*/
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CServerInfo();

				/// <summary>
                /// 获取服务器名称
                /// </summary>
                /// <returns>服务器名称</returns>
				const EVString& getName() const;

				/// <summary>
                /// 获取服务类型
                /// </summary>
                /// <returns>服务类型</returns>
				EarthView::World::Spatial::EVServerInfoType getType() const;

				/// <summary>
                /// 获取服务器地址
                /// </summary>
                /// <returns>服务器地址</returns>
				const EVString& getURL() const;

				/// <summary>
                /// 获取服务版本
                /// </summary>
                /// <returns>服务版本</returns>
				const EVString& getVersion() const;

				/// <summary>
                /// 获取服务描述
                /// </summary>
                /// <returns>服务描述</returns>
				const EVString& getAbstract() const;

				/// <summary>
                /// 获取服务标题
                /// </summary>
                /// <returns>服务标题</returns>
				const EVString& getTitle() const;

				/// <summary>
                /// 获取服务资费
                /// </summary>
                /// <returns>服务资费</returns>
				const EVString& getFees() const;

				/// <summary>
                /// 获取服务限制
                /// </summary>
                /// <returns>服务限制</returns>
				const EVString& getAccessConstraints() const;

				/// <summary>
                /// 获取服务关键词数目
                /// </summary>
                /// <returns>服务关键词数目</returns>
				ev_uint32 getKeywordCount() const;

				/// <summary>
                /// 获取指定关键词
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定关键词</returns>
				const EVString getKeyword(_in ev_uint32 index) const;

				
				/// <summary>
                /// 获取指定异常格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定异常格式</returns>
				const EVString getExceptionFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取异常格式数目
                /// </summary>
                /// <returns>异常格式数目</returns>
				ev_uint32 getExceptionFormatCount() const;

				/// <summary>
                /// 获取所支持服务数目
                /// </summary>
                /// <returns>支持的服务数目</returns>
				ev_uint32 getOGCServiceInfoCount() const;

				/// <summary>
                /// 获取指定的服务描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的服务描述，不需释放</returns>
				const EarthView::World::Spatial::COGCServiceInfo* getCOGCServiceInfo(_in ev_uint32 index) const;

				/// <summary>
                /// 获取该服务所含图层数目
                /// </summary>
                /// <returns>所含图层数目</returns>
				ev_uint32 getLayerCount() const;

				/// <summary>
                /// 获取服务提供者信息
                /// </summary>
                /// <returns>服务提供者对象指针，不需释放</returns>
				const EarthView::World::Spatial::COGCServiceProviderInfo* getOGCServiceProviderInfo() const;
				/*const CServerLayerInfo* getLayerInfoRef(ev_uint32 index) const;
				const CServerLayerInfo* getLayerInfoRef(_in EVString layername) const;*/
			ev_private:
				CServerInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			protected:
				///构造函数
				CServerInfo();
				CServerInfo(_in const CServerInfo& info);
				
			protected:
				///服务器信息类型
				EarthView::World::Spatial::EVServerInfoType mnServerInfoType;
				///服务器名称
				EVString mstrName;//wmts 中的节点为ows:ServiceIdentification/ows:ServiceType
				///服务器标题
				EVString mstrTitle;
				///服务器描述
				EVString mstrAbstract;
				///服务器版本
				EVString mstrVersion;
				///服务器地址
				EVString mstrURL;
				///收费情况
				EVString mstrFee;
				///关键词列表
				vector<EVString> mlistKeyword;
				///获取限制
				EVString mstrAccessConstraints;
				///异常的返回格式列表
				vector<EVString> mlistException;///异常 format
				///所含图层数目
				ev_uint32 mnLayerCount;
				///图层信息列表
				vector<CServerLayerInfo*> mlistLayerInfo;
				///所支持的服务
				vector<EarthView::World::Spatial::COGCServiceInfo*> mlistOGCServiceInfo;
				///contact
				EarthView::World::Spatial::COGCServiceProviderInfo mServiceProviderInfo;
			};
		}
	}
}
#endif


