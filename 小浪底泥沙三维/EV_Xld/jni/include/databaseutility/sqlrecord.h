#ifndef _SQLRECORD_H_H_
#define _SQLRECORD_H_H_

#include "sqlutility.h"
#include "sqlfield.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlRecordPrivate;
///<summary>
///封装字段信息
///</summary>
class EV_SQL_DLL CSqlRecord : public EarthView::World::Core::CAllocatedObject 
{
public:
	///<summary>
	///默认构造函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    CSqlRecord();
	///<summary>
	///拷贝构造函数
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlRecord对象</param>
	///<returns></returns>
    CSqlRecord(const CSqlRecord& other);
	///<summary>
	///重载赋值操作符
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlRecord对象</param>
	///<returns></returns>
    EarthView::World::Core::Database::CSqlRecord& operator=(const EarthView::World::Core::Database::CSqlRecord& other);
	///<summary>
	///析构函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ~CSqlRecord();
	///<summary>
	///赋值操作符==的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlRecord对象</param>
	///<returns></returns>
    ev_bool operator==(const EarthView::World::Core::Database::CSqlRecord &other) const;
	///<summary>
	///赋值操作符!=的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlRecord对象</param>
	///<returns></returns>
    ev_bool operator!=(const EarthView::World::Core::Database::CSqlRecord &other) const { return !operator==(other); }
	///<summary>
	///当前索引位置的字段值
	///</summary>
	///<param name="i">字段索引</param>
	///<returns>字段值</returns>
    EarthView::World::Core::CVariant value(ev_int32 i) const;
	///<summary>
	///字段name的值
	///</summary>
	///<param name="name">字段名</param>
	///<returns>字段值</returns>
    EarthView::World::Core::CVariant value(const ev_wstring& name) const;
	///<summary>
	///设置在i字段的字段值
	///</summary>
	///<param name="i">字段索引</param>
	///<param name="val">字段值</param>
	///<returns></returns>
    ev_void setValue(ev_int32 i, const EarthView::World::Core::CVariant& val);
	///<summary>
	///设置name字段的字段值
	///</summary>
	///<param name="i">字段名</param>
	///<param name="val">字段值</param>
	///<returns></returns>
    ev_void setValue(const ev_wstring& name, const EarthView::World::Core::CVariant& val);
	///<summary>
	///设置i字段为空
	///</summary>
	///<param name="i">字段索引</param>
	///<returns></returns>
    ev_void setNull(ev_int32 i);
	///<summary>
	///设置name字段为空
	///</summary>
	///<param name="name">字段名</param>
	///<returns></returns>
    ev_void setNull(const ev_wstring& name);
	///<summary>
	///i字段是否为空
	///</summary>
	///<param name="i">字段索引</param>
	///<returns>为空返回true,否则返回false</returns>
    ev_bool isNull(ev_int32 i) const;
	///<summary>
	///name字段是否为空
	///</summary>
	///<param name="name">字段名</param>
	///<returns>为空返回true,否则返回false</returns>
    ev_bool isNull(const ev_wstring& name) const;
	///<summary>
	///name字段的索引号
	///</summary>
	///<param name="name">字段名</param>
	///<returns>索引号</returns>
    ev_int32 indexOf(const ev_wstring &name) const;
	///<summary>
	///索引为i的字段名
	///</summary>
	///<param name="i">索引号</param>
	///<returns>字段名</returns>
    ev_wstring fieldName(ev_int32 i) const;
	///<summary>
	///索引为i的字段
	///</summary>
	///<param name="i">索引号</param>
	///<returns>字段</returns>
    EarthView::World::Core::Database::CSqlField field(ev_int32 i) const;
	///<summary>
	///获取字段名为name的字段
	///</summary>
	///<param name="name">字段</param>
	///<returns>字段</returns>
    EarthView::World::Core::Database::CSqlField field(const ev_wstring &name) const;

    ev_bool isGenerated(ev_int32 i) const;
    ev_bool isGenerated(const ev_wstring& name) const;
    ev_void setGenerated(const ev_wstring& name, ev_bool generated);
    ev_void setGenerated(ev_int32 i, ev_bool generated);
	///<summary>
	///最佳字段
	///</summary>
	///<param name="field">字段</param>
	///<returns></returns>
    ev_void append(const EarthView::World::Core::Database::CSqlField& field);
	///<summary>
	///替换在pos处的字段
	///</summary>
	///<param name="pos">索引号</param>
	///<param name="field">字段</param>
	///<returns></returns>
    ev_void replace(ev_int32 pos, const EarthView::World::Core::Database::CSqlField& field);
	///<summary>
	///在pos处插入字段
	///</summary>
	///<param name="pos">索引号</param>
	///<param name="field">字段</param>
	///<returns></returns>
    ev_void insert(ev_int32 pos, const EarthView::World::Core::Database::CSqlField& field);
	///<summary>
	///删除在pos处的字段
	///</summary>
	///<param name="pos">索引号</param>
	///<returns></returns>
    ev_void remove(ev_int32 pos);
	///<summary>
	///字段数是否为0
	///</summary>
	///<param name=""></param>
	///<returns>为0返回true,否则返回false</returns>
    ev_bool isEmpty() const;
	///<summary>
	///是否包含字段名为name的字段
	///</summary>
	///<param name="name">字段名</param>
	///<returns>包含返回true,否则返回false</returns>
    ev_bool contains(const ev_wstring& name) const;
	///<summary>
	///删除所有字段
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ev_void clear();
	///<summary>
	///删除所有字段值并将值设为空
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ev_void clearValues();
	///<summary>
	///字段数
	///</summary>
	///<param name=""></param>
	///<returns>字段数</returns>
    ev_int32 count() const;
ev_private:
	// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlRecord( EarthView::World::Core::CNameValuePairList* pList );
private:
	void detach();
	CSqlRecordPrivate *m_private;
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLRECORD_H_H_

