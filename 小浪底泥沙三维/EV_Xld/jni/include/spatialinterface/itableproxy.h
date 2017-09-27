#ifndef _ITABLEPROXY_H_H_
#define _ITABLEPROXY_H_H_

#include "spatialinterface/config.h"

#if EV_PLATFORM == EV_PLATFORM_ANDROID
#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif
#endif

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 字段类基类
				/// </summary>
				class EV_INTERFACE_DLL ITableProxy :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~ITableProxy();
					/// <summary>
					/// 获取指定表达式下最大值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最爱值</returns>
					virtual EarthView::World::Core::CVariant max(const EVString &expression);
					/// <summary>
					/// 获取指定表达式下最小值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最小值</returns>
					virtual EarthView::World::Core::CVariant min(const EVString &expression);
					/// <summary>
					/// 获取字段值数组
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <param name="isUnique">是否唯一</param>
					/// <returns>返回字段值数组</returns>
					virtual EarthView::World::Core::CVariantArray column(const EVString &fieldName,ev_bool isUnique=false);
                ev_private:
					ITableProxy(EarthView::World::Core::CNameValuePairList* pList);
				protected:
					ITableProxy();
				};

			}
		}
	}
}

#endif //_ITABLEPROXY_H_H_

