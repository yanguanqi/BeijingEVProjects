#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFIELDS_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFIELDS_H

#include "core/memoryallocatedobject.h"

#include "spatialinterface/ifield.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary> 
				/// 字段集合，用于存储字段对象
				/// </summary>
				class EV_INTERFACE_DLL IFields :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					/// <summary> 
					/// 默认析构函数
					/// </summary>
					virtual ~IFields();
				public:
					/// <summary>
					/// 获取字段数目
					/// </summary>
					/// <returns>字段个数</returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引的字段
					/// </summary>
					/// <param name="index">指定索引</param>					
					/// <returns>字段对象，内部对象，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// 判断是否可以找到指定字段名称的字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>					
					/// <returns>如果能找到，返回索引；如果找不到，返回-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// 添加指定字段
					/// </summary>
					/// <param name="field">字段对象</param>					
					/// <returns>成功添加的个数，成功为1，不成功为0</returns>
					virtual ev_uint32 addField(const EarthView::World::Spatial::GeoDataset::IField* field);
					/// <summary>
					/// 移除指定索引的字段
					/// </summary>
					/// <param name="index">指定索引</param>					
					/// <returns>成功移除的个数，成功为1，不成功为0</returns>
					virtual ev_uint32 removeField(ev_uint32 index);
					/// <summary>
					/// 清除所有字段
					/// </summary>
					/// <returns></returns>
					virtual ev_uint32 clear();
					/// <summary>
					/// 移动指定索引的字段到指定索引处
					/// </summary>
					/// <param name="srcIndex">字段索引</param>
					/// <param name="destIndex">插入索引</param>
					/// <returns>成功为true；不成功为false</returns>
					virtual ev_bool moveField(ev_uint32 srcIndex,ev_uint32 destIndex);
					/// <summary>
					/// 克隆函数
					/// </summary>
					/// <returns>成功返回对象，不成功返回NULL</returns>
					virtual IFields * clone() const;
ev_private:
					/// <summary> 
					/// 用于封装的构造函数
					/// </summary>
					IFields( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary> 
					/// 默认构造函数
					/// </summary>
					IFields();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					C_DISABLE_COPY(IFields);
				};
			}
		}
	}
}

#endif
