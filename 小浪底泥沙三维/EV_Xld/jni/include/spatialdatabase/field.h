#ifndef _FIELD_H_H_
#define _FIELD_H_H_

#include "spatialinterface/ifield.h"
#include "core/variant.h"

#include "spatialdatabase/spatialdatabaseconfig.h"


namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace Geometry{

class IGeometry;

} ////Geometry
} ////Spatial
} ////World
} ////EarthView

namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace GeoDataset{

///<summary>
///字段构造类
///</summary>
class EV_SPATIALDATABASE_DLL CField : public EarthView::World::Spatial::GeoDataset::IField
{
public:
	friend class CFieldFactory;
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <returns></returns>
	~CField();
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
	/// 深度拷贝
	/// </summary>
	/// <param name=""></param>
	/// <returns>拷贝对象</returns>
	virtual EarthView::World::Spatial::GeoDataset::IField* clone() const;
	/// <summary>
	/// 释放当前字段的内存空间
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual void release();			
	virtual EVString toXML(bool isSegment) const;
	/// <summary>
	/// 序列化字段信息
	/// </summary>
	/// <param name="stream">流</param>
	/// <param name="hasHead">是否有头信息</param>
	/// <returns></returns>
	virtual void toStream(EarthView::World::Core::CDataStream & stream,bool hasHead/* = true*/) const;
	/// <summary>
	/// 序列化字段信息
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns></returns>
	virtual void toStream(EarthView::World::Core::CDataStream & stream) const{ toStream(stream, true); }
	/// <summary>
	/// 从流中获取只读
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns>字段</returns>
	static EarthView::World::Spatial::GeoDataset::CField* fromStream(EarthView::World::Core::CDataStream & stream);
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="fieldType"></param>
	/// <returns></returns>
	CField(EarthView::World::Spatial::GeoDataset::EVFieldType fieldType);
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="fieldName"></param>
	/// <param name="fieldType"></param>
	/// <returns></returns>
	CField(const EVString& fieldName, EarthView::World::Spatial::GeoDataset::EVFieldType fieldType);
	/// <summary>
	/// 设置字段名
	/// </summary>
	/// <param name="name">字段名</param>
	/// <returns></returns>
	virtual ev_void setName(const EVString& name);
	/// <summary>
	/// 设置字段是否可以为空
	/// </summary>
	/// <param name="value">是否</param>
	/// <returns></returns>
	virtual ev_void setCanNull(ev_bool value);
	/// <summary>
	/// 设置字段是否可以编辑
	/// </summary>
	/// <param name="value"></param>
	/// <returns></returns>
	virtual ev_void setCanEdit(ev_bool value);
	/// <summary>
	/// 设置字段是否可以被删除
	/// </summary>
	/// <param name="value"></param>
	/// <returns></returns>
	virtual ev_void setCanDelete(ev_bool value);
	//virtual ev_void setIsPrimary(ev_bool value);
	
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
protected:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CField();

	

	static EarthView::World::Spatial::GeoDataset::CField* fromStreamWithVersion1(EarthView::World::Core::CDataStream & stream);

ev_private:
	/// <summary>
	/// 用于封装的构造函数
	/// </summary>
	/// <param name="pList">参数健值对</param>
	/// <returns></returns>
	CField(EarthView::World::Core::CNameValuePairList *pList);
public:
	/// <summary>
	/// 拷贝构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CField(const CField & field);

private:
	///* 从引擎模块接受的数据 */
	//static EarthView::World::Spatial::GeoDataset::CField* fromBinary(EarthView::World::Core::CDataStream & stream);
	///* 序列化引擎所需数据格式 */
	//void toBinary(EarthView::World::Core::CDataStream & stream) const;

private:
	/// <summary>
	/// 字段名称。
	/// </summary>
	EVString mstrName;
	/// <summary>
	/// 字段别名
	/// </summary>
	EVString mstrAliasName;
	/// <summary>
	/// 字段类型
	/// </summary>
	EarthView::World::Spatial::GeoDataset::EVFieldType mnFieldType;
	/// <summary>
	/// 字段大小
	/// </summary>
	ev_uint32 mnSize;
	/// <summary>
	/// 字段精度
	/// </summary>
	ev_uint32 mnPrecision;
	/// <summary>
	/// 字段描述
	/// </summary>
	EVString mstrDescription;
	/// <summary>
	/// 是否必需
	/// </summary>
	ev_bool mbIsRequest;
	/// <summary>
	/// 是否可编辑
	/// </summary>
	ev_bool mbCanEdit;
	/// <summary>
	/// 是否可删除
	/// </summary>
	ev_bool mbCanDelete;
	/// <summary>
	/// 是否可为空
	/// </summary>
	ev_bool mbCanNull;
	/// <summary>
	/// 默认值
	/// </summary>
	EarthView::World::Core::CVariant mdefaultVal;

	friend class CFieldFactory;
};



} ////GeoDataset
} ////Spatial
} ////World
} ////EarthView

#endif //_FIELD_H_H_

