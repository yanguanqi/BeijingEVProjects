#ifndef _SQLINDEX_H_H_
#define _SQLINDEX_H_H_

#include "sqlrecord.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {
///<summary>
///提供生成和描述数据库索引的方法
///</summary>
class EV_SQL_DLL CSqlIndex : public EarthView::World::Core::Database::CSqlRecord 
{
public:
	///<summary>
	///构造函数
	///</summary>
	CSqlIndex();
	///<summary>
	///构造函数
	///</summary>
	///<param name="cursorName">游标名</param>
	///<returns></returns>
	CSqlIndex(const ev_wstring &cursorName);
	///<summary>
	///构造函数
	///</summary>
	///<param name="cursorName">游标名</param>
	///<param name="name">索引名</param>
	///<returns></returns>
    CSqlIndex(const ev_wstring &cursorName, const ev_wstring &name);
	///<summary>
	///拷贝构造函数
	///</summary>
	///<param name="other">索引对象</param>
	///<returns></returns>
    CSqlIndex(const CSqlIndex &other);
	///<summary>
	///析构函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ~CSqlIndex();
	///<summary>
	///赋值操作符的重载
	///</summary>
	///<param name="other">索引对象</param>
	///<returns></returns>
    EarthView::World::Core::Database::CSqlIndex &operator=(const EarthView::World::Core::Database::CSqlIndex &other);
	///<summary>
	///设置当前索引对应的游标名
	///</summary>
	///<param name="cursorName">游标名</param>
	///<returns></returns>
    ev_void setCursorName(const ev_wstring &cursorName);
	///<summary>
	///获取当前索引对应的游标名
	///</summary>
	///<param name=""></param>
	///<returns>当前索引对应的游标名</returns>
	inline const ev_wstring& cursorName() const {return cursor;};
	///<summary>
	///设置索引名
	///</summary>
	///<param name="name">索引名</param>
	///<returns></returns>
    ev_void setName(const ev_wstring& name);
	///<summary>
	///获取当前索引对应的索引名
	///</summary>
	///<param name=""></param>
	///<returns>当前索引对应的索引名</returns>
	inline const ev_wstring& name() const {return nm;};
	///<summary>
	///有索引的字段链表中追加字段
	///</summary>
	///<param name="field">字段</param>
	///<returns></returns>
    ev_void append(const EarthView::World::Core::Database::CSqlField &field);
	///<summary>
	///有索引的字段链表中追加字段
	///</summary>
	///<param name="field">字段</param>
	///<param name="desc">是否为降序</param>
	///<returns></returns>
    ev_void append(const EarthView::World::Core::Database::CSqlField &field, ev_bool desc);
	///<summary>
	///在索引i处的字段是否为降序排列
	///</summary>
	///<param name="i">索引号</param>
	///<returns>是降序返回true，否则返回false</returns>
    ev_bool isDescending(ev_int32 i) const;
	///<summary>
	///设置在索引i处的字段是否为降序排列
	///</summary>
	///<param name="i">索引号</param>
	///<param name="desc">是否为降序</param>
	///<returns></returns>
    ev_void setDescending(ev_int32 i, ev_bool desc);
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlIndex( EarthView::World::Core::CNameValuePairList* pList );
private:
	ev_wstring cursor;
    ev_wstring nm;
    ev_list<ev_bool> sorts;
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLINDEX_H_H_

