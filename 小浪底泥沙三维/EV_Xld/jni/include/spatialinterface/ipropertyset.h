#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATABASE_PROPERTYSET_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATABASE_PROPERTYSET_H

#include "core/memoryallocatedobject.h"
#include "core/variant.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 属性集合，一般成对出现，Key-Value
				/// </summary>
				class EV_INTERFACE_DLL IPropertySet
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IPropertySet();
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IPropertySet();
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IPropertySet( EarthView::World::Core::CNameValuePairList *pList );
				public:		
					/// <summary>
					/// 获取字段数目
					/// </summary>
					/// <returns>字段个数</returns>
                    virtual ev_uint32 getCount() const;
					/// <summary>
					/// 是否存在指定Key值
					/// </summary>
					/// <param name="key">指定Key值</param>
					/// <returns>存在，true；不存在，false</returns>
                    virtual ev_bool exist(const EVString& key)const;
                    /// <summary>
					/// 获取指定索引的Key值
					/// </summary>
					/// <param name="key">指定Key值</param>
					/// <returns>存在，true；不存在，false</returns>
					virtual EVString getKey(ev_uint32 index)const;  
					/// <summary>
					/// 设置属性值
					/// </summary>
					/// <param name="key">Key值</param>
					/// <param name="value">value值</param>
					/// <returns></returns>
                    virtual ev_void setProperty(const EVString& key, _in const EarthView::World::Core::CVariant& value);
					/// <summary>
					/// 获取指定Key值的属性值
					/// </summary>
					/// <param name="key">Key值</param>
					/// <returns>属性值</returns>
                    virtual const EarthView::World::Core::CVariant& getProperty(const EVString& key) const;  
					/// <summary>
					/// 移除指定Key值的属性值
					/// </summary>
					/// <param name="key">Key值</param>
					/// <returns></returns>
                    virtual ev_void remove(const EVString& key);
					/// <summary>
					/// 移除所有属性值
					/// </summary>
					/// <returns></returns>
                    virtual ev_void clear();
					/// <summary>
					/// 克隆函数
					/// </summary>
					/// <returns></returns>
                    virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* clone()const;
				};
			}
		}
	}
}

#endif
