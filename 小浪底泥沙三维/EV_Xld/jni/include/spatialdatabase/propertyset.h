#ifndef _CPROPERTYSET_H_H_
#define _CPROPERTYSET_H_H_

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialinterface/ipropertyset.h"



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				///<summary>
				///键值对类
				///</summary>
				class EV_SPATIALDATABASE_DLL CPropertySet
					: public EarthView::World::Spatial::GeoDataset::IPropertySet
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPropertySet();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CPropertySet();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPropertySet(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取键值对的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>键值对的个数</returns>
                    virtual ev_uint32 getCount() const;
					/// <summary>
					/// 是否存在键值
					/// </summary>
					/// <param name="key">键值对标示</param>
					/// <returns>存在返回true,否则返回false</returns>
                    virtual ev_bool exist(const EVString& key)const;
					/// <summary>
					/// 获取索引位置的键值标示
					/// </summary>
					/// <param name="index">索引号</param>
					/// <returns>键值标示</returns>
                    virtual EVString getKey(ev_uint32 index)const;  
					/// <summary>
					/// 设置键值属性
					/// </summary>
					/// <param name="key">键值标示</param>
					/// <param name="value">键值</param>
					/// <returns></returns>
                    virtual ev_void setProperty(const EVString& key, _in const EarthView::World::Core::CVariant& value);
					/// <summary>
					/// 获取键值属性
					/// </summary>
					/// <param name="key">键值标示</param>
					/// <returns>键值</returns>
                    virtual const EarthView::World::Core::CVariant& getProperty(const EVString& key) const;  
					/// <summary>
					/// 删除键值key处的键值对
					/// </summary>
					/// <param name="key">键值标示</param>
					/// <returns></returns>
                    virtual ev_void remove(const EVString& key);
					/// <summary>
					/// 删除所有的值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ev_void clear();
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>新的键值对类对象</returns>
                    virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* clone()const;
				protected:
					map<EVString, EarthView::World::Core::CVariant> mPropertySet;
				};
			}
		}
	}
}

#endif
