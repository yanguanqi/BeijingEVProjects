#ifndef _SQLFIELD_H_H_
#define _SQLFIELD_H_H_

#include "sqlutility.h"


namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlFieldPrivate;
///<summary>
///包含数据库某一表或者视图所有的字段
///</summary>
class EV_SQL_DLL CSqlField : public EarthView::World::Core::CAllocatedObject
{
public:
    enum EVRequiredStatus { RS_Unknown = -1, RS_Optional = 0, RS_Required = 1 };
	///<summary>
	///默认构造函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
	CSqlField();
	///<summary>
	///默认构造函数
	///</summary>
	///<param name="fieldName">字段名</param>
	///<returns></returns>
	CSqlField(const ev_wstring& fieldName);
	///<summary>
	///默认构造函数
	///</summary>
	///<param name="fieldName">字段名</param>
	///<param name="type">字段类型</param>
	///<returns></returns>
    CSqlField(const ev_wstring& fieldName, EarthView::World::Core::CVariant::EVDataType type);
	///<summary>
	///拷贝构造函数
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlField对象</param>
	///<returns></returns>
    CSqlField(const CSqlField& other);
	///<summary>
	///赋值操作符的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlField对象</param>
	///<returns></returns>
    EarthView::World::Core::Database::CSqlField& operator=(const EarthView::World::Core::Database::CSqlField& other);
	///<summary>
	///操作符==的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlField对象</param>
	///<returns></returns>
    ev_bool operator==(const EarthView::World::Core::Database::CSqlField& other) const;
	///<summary>
	///操作符!=的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlField对象</param>
	///<returns></returns>
    inline ev_bool operator!=(const EarthView::World::Core::Database::CSqlField &other) const { return !operator==(other); }
	///<summary>
	///析构函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ~CSqlField();
	///<summary>
	///设置字段值
	///</summary>
	///<param name="value">字段值</param>
	///<returns></returns>
    ev_void setValue(const EarthView::World::Core::CVariant& value);
	///<summary>
	///获取字段值
	///</summary>
	///<param name=""></param>
	///<returns>字段值</returns>
	inline EarthView::World::Core::CVariant value() const {return val;}
	///<summary>
	///设置字段名
	///</summary>
	///<param name="name">字段名</param>
	///<returns></returns>
    ev_void setName(const ev_wstring& name);
	///<summary>
	///获取字段名
	///</summary>
	///<param name=""></param>
	///<returns>字段名</returns>
    const ev_wstring& name() const;
	///<summary>
	///字段是否为空
	///</summary>
	///<param name=""></param>
	///<returns>为空返回true,否则返回false</returns>
    ev_bool isNull() const;
	///<summary>
	///设置字段是否只读
	///</summary>
	///<param name="readOnly">是否只读</param>
	///<returns></returns>
    ev_void setReadOnly(ev_bool readOnly);
	///<summary>
	///获取字段是否只读
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ev_bool isReadOnly() const;
	///<summary>
	///清除字段值并设置为空
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ev_void clear();
	///<summary>
	///获取字段类型
	///</summary>
	///<param name=""></param>
	///<returns>字段类型</returns>
    EarthView::World::Core::CVariant::EVDataType type() const;
	///<summary>
	///字段值是否是由数据库自动生成的
	///</summary>
	///<param name=""></param>
	///<returns>是自动生成的返回true,否则返回false</returns>
    ev_bool isAutoValue() const;
	///<summary>
	///设置字段类型
	///</summary>
	///<param name="type">字段类型</param>
	///<returns></returns>
    ev_void setType(EarthView::World::Core::CVariant::EVDataType type);
	///<summary>
	///设置字段要求状态（有符号型还是无符号型）
	///</summary>
	///<param name="status">字段要求状态</param>
	///<returns></returns>
    ev_void setRequiredStatus(EarthView::World::Core::Database::CSqlField::EVRequiredStatus status);
	///<summary>
	///设置字段要求状态（有符号型还是无符号型）
	///</summary>
	///<param name="required">是否</param>
	///<returns></returns>
	ev_void setRequired(ev_bool required) {setRequiredStatus(required ? RS_Required : RS_Optional);}
	///<summary>
	///设置字段长度
	///</summary>
	///<param name="fieldLength">字段长度</param>
	///<returns></returns>
    ev_void setLength(ev_int32 fieldLength);
	///<summary>
	///设置字段精度
	///</summary>
	///<param name="precision">字段精度</param>
	///<returns></returns>
    ev_void setPrecision(ev_int32 precision);
	///<summary>
	///设置字段默认值
	///</summary>
	///<param name="value">字段默认值</param>
	///<returns></returns>
    ev_void setDefaultValue(const EarthView::World::Core::CVariant &value);
	///<summary>
	///设置字段的sql类型
	///</summary>
	///<param name="type">类型</param>
	///<returns></returns>
    ev_void setSqlType(ev_int32 type);
	///<summary>
	///设置字段的生成状态
	///</summary>
	///<param name="gen">是否生成此字段</param>
	///<returns></returns>
    ev_void setGenerated(ev_bool gen);
	///<summary>
	///设置字段值是否是由数据库自动生成的
	///</summary>
	///<param name="autoVal">是否</param>
	///<returns></returns>
    ev_void setAutoValue(ev_bool autoVal);
	///<summary>
	///获取字段要求状态（有符号型还是无符号型）
	///</summary>
	///<param name="status"></param>
	///<returns>字段要求状态</returns>
    EarthView::World::Core::Database::CSqlField::EVRequiredStatus RequiredStatus() const;
	///<summary>
	///获取字段长度
	///</summary>
	///<param name=""></param>
	///<returns>字段长度</returns>
    ev_int32 length() const;
	///<summary>
	///设置字段精度
	///</summary>
	///<param name=""></param>
	///<returns>字段精度</returns>
    ev_int32 precision() const;
	///<summary>
	///获取字段默认值
	///</summary>
	///<param name=""></param>
	///<returns>字段默认值</returns>
    EarthView::World::Core::CVariant defaultValue() const;
	///<summary>
	///获取字段的生成状态
	///</summary>
	///<param name=""></param>
	///<returns>如果此字段能被生成返回true,否则返回false</returns>
    ev_bool isGenerated() const;
	///<summary>
	///字段的EarthView::World::Core::CVariant类型是否有效
	///</summary>
	///<param name=""></param>
	///<returns>有效返回true</returns>
    ev_bool isValid() const;

ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlField( EarthView::World::Core::CNameValuePairList* pList );
private:
	void detach();
	EarthView::World::Core::CVariant	val;
	CSqlFieldPrivate *m_private;

};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLFIELD_H_H_

