#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFIELD_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFIELD_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				
				/// <summer>
				/// 字段类型枚举
				/// </summer>
				enum EVFieldType
				{
					/// <summer>
					/// 位置类型
					/// </summer>
					FT_UNKNOWN              = 0,
					/// <summer>
					/// 整型类型
					/// </summer>
					FT_INTEGER              = 1,
					/// <summer>
					/// 浮点型类型
					/// </summer>
					FT_REAL                 = 2,
					/// <summer>
					/// 字符串类型
					/// </summer>
					FT_STRING               = 3,
					/// <summer>
					/// 布尔类型
					/// </summer>
					FT_BOOLEAN              = 4,
					/// <summer>
					/// 二进制类型
					/// </summer>
					FT_BINARY               = 5,
					/// <summer>
					/// XML文本类型
					/// </summer>
					FT_XML                  = 6,
					/// <summer>
					/// 日期字段，要求转换格式为yyyymmdd
					/// </summer>
					FT_DATE					= 7,
					/// <summer>
					/// EVID类型
					/// </summer>
					FT_EVID                 = 21,					
					/// <summer>
					/// 几何体类型
					/// </summer>
					FT_GEOMETRY             = 22,
					/// <summer>
					/// 几何体长度类型
					/// </summer>
					FT_LENGTH               = 23,
					/// <summer>
					/// 几何体面积类型
					/// </summer>
					FT_AREA                 = 24,
					/// <summer>
					/// 几何体高度类型
					/// </summer>
					FT_HEIGHT               = 25
				};

				/// <summer>
				/// 字段类，用于描述字段相关信息。
				/// </summer>
				class EV_INTERFACE_DLL IField :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IField();

				public:
					/// <summary>
					/// 获取字段名称
					/// </summary>					
					/// <returns>字段名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取字段别名
					/// </summary>					
					/// <returns>字段别名</returns>
					virtual EVString getAliasName() const;
					/// <summary>
					/// 获取字段类型
					/// </summary>
					/// <returns>字段类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;
					/// <summary>
					/// 获取字段大小，一般用于EVString类型
					/// </summary>
					/// <returns>字段大小</returns>
					virtual ev_uint32 getSize() const;
					/// <summary>
					/// 获取字段精度，一般用于Real类型
					/// </summary>
					/// <returns>字段精度</returns>
					virtual ev_uint32 getPrecision() const;
					/// <summary>
					/// 获取字段描述
					/// </summary>
					/// <returns>字段描述</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 判断是否必需字段
					/// </summary>
					/// <returns>是，返回true；否则，返回false</returns>
					virtual ev_bool isRequest() const;
					/// <summary>
					/// 判断是否支持编辑，一般情况下，不允许编辑。
					/// </summary>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断是否支持删除，一般情况下，必需字段不允许删除。
					/// </summary>
					/// <returns>是，返回true；否则，返回false</returns>
					virtual ev_bool canDelete() const;
					/// <summary>
					/// 判断是否支持空值。
					/// </summary>
					/// <returns>是，返回true；否则，返回false</returns>
					virtual ev_bool canNull() const;
					/// <summary>
					/// 设置字段别名
					/// </summary>
					/// <param name="value">字段别名</param>
					/// <returns></returns>
					virtual ev_void setAliasName(const EVString& name);
					/// <summary>
					/// 设置字段大小
					/// </summary>
					/// <param name="value">字段大小</param>					
					/// <returns></returns>
					virtual ev_void setSize(ev_uint32 value);
					/// <summary>
					/// 设置字段精度
					/// </summary>
					/// <param name="value">字段精度</param>
					/// <returns></returns>
					virtual ev_void setPrecision(ev_uint32 value);
					/// <summary>
					/// 设置字段描述
					/// </summary>
					/// <param name="description">字段描述</param>
					/// <returns></returns>
					virtual ev_void setDescription(const EVString& description);
					/// <summary>
					/// 获取字段默认值
					/// </summary>
					/// <returns>字段描述</returns>
					virtual EarthView::World::Core::CVariant getDefaultValue() const;
					/// <summary>
					/// 设置字段默认值
					/// </summary>
					/// <param name="description">字段描述</param>
					/// <returns></returns>
					virtual ev_void setDefaultValue(const EarthView::World::Core::CVariant& defaultValue);
					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝对象</returns>
					virtual IField* clone() const;
                ev_private:
					IField( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IField();
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					C_DISABLE_COPY(IField);
				};
			}
		}
	}
}

#endif
