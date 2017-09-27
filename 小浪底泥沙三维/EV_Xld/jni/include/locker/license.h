#ifndef EARTHVIEW_WORLD_LICENSE_H
#define EARTHVIEW_WORLD_LICENSE_H

#include "../core/core_api.h"
#include "locker_config.h"

namespace EarthView{
	namespace World{
		namespace License{
			/// <summary>
			/// 许可结果枚举
			/// <summary>
			enum EVLicenseResult
			{
				/// <summary>
				/// 初始化成功
				/// <summary>
				LR_INIT_SUCCESS           = 0,
				/// <summary>
				/// 初始化失败
				/// <summary>
				LR_INIT_FAIL              = 1,
				/// <summary>
				/// 模块已经存在
				/// <summary>
				LR_INIT_HAS_MODULE        = 2,
				/// <summary>
				/// 反初始化成功
				/// <summary>
				LR_UNINIT_SUCCESS         = 3,
				/// <summary>
				/// 反初始化失败
				/// <summary>
				LR_UNINIT_FAIL            = 4,
				/// <summary>
				/// 不存在该模块
				/// <summary>
				LR_UNINIT_NOT_MODULE      = 5
			};

			/// <summary>
			/// 许可状态类型
			/// <summary>
			enum EVLicenseStatusType
			{				
				/// <summary>
				/// 没有该模块
				/// <summary>
				LS_NOT_MODULE       = 0,
				/// <summary>
				/// 有效
				/// <summary>
				LS_VALID            = 1,
				/// <summary>
				/// 无效
				/// <summary>
				LS_INVALID          = 2,
				/// <summary>
				/// 过期
				/// <summary>
				LS_EXPIRED          = 3,
				/// <summary>
				/// 没有可用许可
				/// <summary>
				LS_NOT_LICENSE      = 4,
				/// <summary>
				/// 没有密钥
				/// <summary>
				LS_NOT_KEY          = 5
			};
			/// <summary>
			/// 许可模块
			/// <summary>
			enum EVLicenseModule
			{
				/// <summary>
				/// 未知模块
				/// <summary>
				LM_UNKNOWN                  = 0,
				/// <summary>
				/// EV-Globe 运行版
				/// <summary>
				LM_EV_GLOBECLIENT_RUNTIME   = 1,
				LM_EV_GLOBE_SDK_RUNTIME     = LM_EV_GLOBECLIENT_RUNTIME,
				/// <summary>
				/// EV-Globe 开发版
				/// <summary>
				LM_EV_GLOBECLIENT_DEVELOPE  = 2,
				LM_EV_GLOBE_SDK_DEVELOPE    = LM_EV_GLOBECLIENT_DEVELOPE,
				/// <summary>
				/// EV-Globe 桌面版
				/// <summary>
				LM_EV_GLOBE_DESKTOP          = 3,
				/// <summary>
				/// EV-Server
				/// <summary>
				LM_EV_SERVER                = 100,
				/// <summary>
				/// EV-Globe Browse 许可
				/// <summary>
				LM_EV_WEBPLUGIN             = 110,
				/// <summary>
				/// EV-Creator
				/// <summary>
				LM_EV_CREATOR               = 200,
				/// <summary>
				/// EarthView 自定义
				/// <summary>
				LM_EV_CUSTOM                = 1000
			};

			class CLicensePrivate;
			/// <summary>
			/// 许可对象
			/// <summary>
			class EV_LOCKER_DLL CLicense:
				public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// <summary>
				CLicense();
				/// <summary>
				/// 默认析构函数
				/// <summary>
				virtual ~CLicense();

ev_private:
				/// <summary>
				/// 用于封装的构造函数
				/// <summary>
				CLicense(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 注册模块许可
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>许可结果枚举</returns>
				EarthView::World::License::EVLicenseResult initialize(EarthView::World::License::EVLicenseModule module,const EVString& value);
				/// <summary>
				/// 反注册模块许可
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>许可结果枚举</returns>
				EarthView::World::License::EVLicenseResult uninitialize(EarthView::World::License::EVLicenseModule module,const EVString& value);
				/// <summary>
				/// 获取模块初始化状态
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>模块状态</returns>
				EarthView::World::License::EVLicenseStatusType getModuleStatus(EarthView::World::License::EVLicenseModule module,const EVString& value);
				/// <summary>
				/// 获取模块过期时间
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>过期时间字符串</returns>
				EVString getExpiredDate(EarthView::World::License::EVLicenseModule module,const EVString& value);
				/// <summary>
				/// 是否正式版
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>正式版，true；试用版，false</returns>
				ev_bool isOffical(EarthView::World::License::EVLicenseModule module,const EVString& value);
				/// <summary>
				/// 获取模块错误信息
				/// <summary>
				/// <param name="module">许可模块枚举</param>
				/// <param name="value">模块字符串表示
				///                     如果许可模块为自定义，则value有效，用作判断
				///                     反之，value无效。</param>
				/// <returns>最后一次错误描述</returns>
				EVString getModuleError(EarthView::World::License::EVLicenseModule module,const EVString& value);
			private:
				CLicensePrivate* mpPrivate;
			};

			class CWebLicensePrivate;
			/// <summary>
			///  网络许可对象
			/// <summary>
			class EV_LOCKER_DLL CWebLicense : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 用于封装的构造函数
				/// <summary>
				CWebLicense(EarthView::World::Core::CNameValuePairList* pList);
			public:
				CWebLicense();
				~CWebLicense();
				EarthView::World::License::EVLicenseStatusType getModuleStatus( const EVString &ip, const EVString &port, const EVString &module);
			private:
				CWebLicensePrivate *d_ptr;
			};
		}
	}
}

#endif
