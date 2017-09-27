#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CFIELDNAMECHECKER_H
#define EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CFIELDNAMECHECKER_H
#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换字段名检查器(平台内部保留字段，sql关键字等)
				/// 判断传入名称是否与关键字冲突
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CSQLKeyChecker
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CSQLKeyChecker();
					/// <summary>
					/// 获取检查器单例
					/// </summary>
					/// <returns></returns>
					static CSQLKeyChecker* getInstance();
					/// <summary>
					/// 重新加载关键字
					/// </summary>
					/// <returns></returns>
					ev_int32 reloadKeyValue();
					/// <summary>
					/// 检查名称是否与关键字冲突
					/// </summary>
					/// <returns>冲突返回true</returns>
					ev_bool isNameConflict(const EVString& name)const;
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSQLKeyChecker();
				ev_private:
					CSQLKeyChecker(_in EarthView::World::Core::CNameValuePairList* pList );
				private:
					ev_set<EVString>m_keyValue;
					EarthView::World::Core::CReadWriteLock m_Lock;

				};
			}
		}
	}
}
#endif


