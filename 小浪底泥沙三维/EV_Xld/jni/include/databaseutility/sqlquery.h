#ifndef _SQLQUERY_H_H_
#define _SQLQUERY_H_H_

#include "sqlutility.h"
#include "sqldatabase.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlDriver;
class CSqlResult;
class CSqlRecord;
class CSqlQueryPrivate;
enum EVBatchExecutionMode
{
	ValuesAsRows,
	ValuesAsColumns
};
///<summary>
///提供执行和生成sql语句的方法
///</summary>
class EV_SQL_DLL CSqlQuery : public EarthView::World::Core::CAllocatedObject
{
public:
	///<summary>
	///构造函数
	///</summary>
	///<param name="r">result指针</param>
	///<returns><returns>
    CSqlQuery(EarthView::World::Core::Database::CSqlResult *r);
	///<summary>
	///构造函数
	///</summary>
	///<param name=""></param>
	///<returns><returns>
	CSqlQuery();
	///<summary>
	///构造函数
	///</summary>
	///<param name="query">sql语句</param>
	///<returns><returns>
	CSqlQuery(const ev_wstring& query);
	///<summary>
	///构造函数
	///</summary>
	///<param name="query">sql语句</param>
	///<param name="db">数据库连接对象</param>
	///<returns><returns>
    CSqlQuery(const ev_wstring& query, EarthView::World::Core::Database::CSqlDatabase db);
	///<summary>
	///显示构造函数
	///</summary>
	///<param name="query">数据库连接对象</param>
	///<returns><returns>
    explicit CSqlQuery(EarthView::World::Core::Database::CSqlDatabase db);
	///<summary>
	///默认构造函数
	///</summary>
	///<param name="other">query对象</param>
	///<returns><returns>
    CSqlQuery(const CSqlQuery& other);
	///<summary>
	///重载赋值操作符
	///</summary>
	///<param name="other">query对象</param>
	///<returns><returns>
    EarthView::World::Core::Database::CSqlQuery& operator=(const EarthView::World::Core::Database::CSqlQuery& other);
	///<summary>
	///析构函数
	///</summary>
	///<param name=""></param>
	///<returns><returns>
    ~CSqlQuery();

	///<summary>
	/// 绑定数据到指定的位置
	/// </summary>
	/// <param name="placeholder">绑定位置的占位符</param>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
	ev_void bindValue(const ev_wstring& placeholder, const EarthView::World::Core::CVariant& val,
                   EarthView::World::Core::Database::EVParamType type );	
	///<summary>
	/// 绑定数据到指定的位置
	/// </summary>
	/// <para m name="pos">绑定位置的索引</param>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
    ev_void bindValue(ev_int32 pos, const EarthView::World::Core::CVariant& val, EarthView::World::Core::Database::EVParamType type);
	
	///<summary>
	/// 添加绑定数据到下一个绑定位置，按顺序绑定
	/// </summary>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
    ev_void addBindValue(const EarthView::World::Core::CVariant& val, EarthView::World::Core::Database::EVParamType type );
	
	///<summary>
	/// 返回指定位置的绑定数据
	/// </summary>
	/// <param name="placeholder">指定绑定位置的占位符</param>
	///<returns>已绑定的数据</returns>
    EarthView::World::Core::CVariant boundValue(const ev_wstring& placeholder) const;
	///<summary>
	/// 返回指定位置的绑定数据
	/// </summary>
	/// <param name="pos">指定绑定位置的索引</param>
	///<returns>已绑定的数据</returns>
    EarthView::World::Core::CVariant boundValue(ev_int32 pos) const;

	///<summary>
	/// 清空对象的所有状态
	/// </summary>
	///<returns>void</returns>
	ev_void clear();
	///<summary>
	/// 返回driver
	/// </summary>
	///<returns>返回driver指针</returns>
	const EarthView::World::Core::Database::CSqlDriver* driver() const;
	///<summary>
	/// 执行SQL语句
	/// </summary>
	/// <param name="query">SQL语句</param>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool exec(const ev_wstring& query);
	///<summary>
	/// 执行已准备好的SQL语句
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool exec();
	///<summary>
	/// 执行已准备好的SQL语句,主要用于批量导入。
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	bool execBatch ( EarthView::World::Core::Database::EVBatchExecutionMode mode );
	///<summary>
	/// 返回已执行的SQL语句
	/// </summary>
	///<returns>已执行的SQL语句</returns>
	ev_wstring executedQuery() const;
	///<summary>
	/// 结束当前的数据库操作，清空当前操作状态
	/// </summary>
	///<returns>void</returns>
	ev_void finish();
	///<summary>
	/// 索引到第一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool first();
	///<summary>
	/// 索引到最后一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool last();
	///<summary>
	/// 索引到下一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool next();
	///<summary>
	/// 索引到上一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    ev_bool previous();
	///<summary>
	/// 是否是活动状态
	/// </summary>
	///<returns>是返回true，否返回false</returns>
	ev_bool isActive() const;
	///<summary>
	/// 是否只支持前向查询
	/// </summary>
	///<returns>是返回true，否返回false</returns>
	ev_bool isForwardOnly() const;

	//ev_bool nextResult();

	///<summary>
	/// 索引到指定的位置
	/// </summary>
	/// <param name="index">索引的位置</param>
	/// <param name="relative">是否是相对当前的位置</param>
	///<returns>成功返回true，失败返回false</returns>
	ev_bool seek(ev_int32 index, ev_bool relative = false);
	///<summary>
	/// 返回result的引用
	/// </summary>
	///<returns>返回result指针</returns>
	const EarthView::World::Core::Database::CSqlResult* result() const;
	///<summary>
	/// 返回当前的record
	/// </summary>
	///<returns>当前的record</returns>
    EarthView::World::Core::Database::CSqlRecord record() const;
	///<summary>
	/// 返回当前记录中的指定字段的值
	/// </summary>
	/// <param name="index">字段的索引的位置</param>
	///<returns>返回字段的值</returns>
	EarthView::World::Core::CVariant value(ev_int32 i) const;
	///<summary>
	/// 返回result的记录个数
	/// </summary>
	///<returns>成功返回记录个数，失败（可能数据库不支持，或者无法确定个数）返回-1</returns>
	ev_int32 size() const;
	///<summary>
	/// 当前是否是在有效的记录上
	/// </summary>
	///<returns>是返回true，否返回false</returns>
    ev_bool isValid() const;
	///<summary>
	/// 当前记录的指定位置字段是否为空
	/// </summary>
	///<returns>是返回true，否返回false</returns>
    ev_bool isNull(ev_int32 field) const;
	///<summary>
	/// 当前记录的位置
	/// </summary>
	///<returns>位置索引</returns>
    ev_int32 at() const;
	///<summary>
	/// 是否是查询状态
	/// </summary>
	///<returns>是返回true，否返回false</returns>
    ev_bool isSelect() const;
	///<summary>
	/// 设置是否仅前向
	/// </summary>
	/// <param name="forward">是否</param>
	///<returns>void</returns>
    ev_void setForwardOnly(ev_bool forward);
	///<summary>
	/// 准备查询语句
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    ev_bool prepare(const ev_wstring& query);
	///<summary>
	/// 获取最后插入的记录的ID
	/// </summary>
	///<returns>返回包含ID的EarthView::World::Core::CVariant</returns>
	EarthView::World::Core::CVariant lastInsertId () const;
	///<summary>
	///返回sql操作对结果集影响的行数
	///</summary>
	///<param name=""></param>
	///<returns>sql操作对结果集影响的行数</returns>
	ev_int32 numRowsAffected() const;
	///<summary>
	///设置当前数据库的精度
	///</summary>
	///<param name="precisionPolicy">精度</param>
	///<returns></returns>
	ev_void setNumericalPrecisionPolicy(EarthView::World::Core::Database::EVNumericalPrecisionPolicy precisionPolicy);
	///<summary>
	///获取当前数据库的精度
	///</summary>
	///<param name=""></param>
	///<returns>精度值</returns>
	EarthView::World::Core::Database::EVNumericalPrecisionPolicy numericalPrecisionPolicy() const;
	///<summary>
	///删除当前结果集并定位到下一个可用结果集
	///</summary>
	///<param name=""></param>
	///<returns>成功返回true,否则返回false</returns>
	ev_bool nextResult();
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlQuery(EarthView::World::Core::CNameValuePairList* pList );

	ev_void bindValue(ev_int32 pos, ev_vector<EarthView::World::Core::CVariant>& vals, EarthView::World::Core::Database::EVParamType type);

	ev_void bindValue(const ev_wstring& placeholder, ev_vector<EarthView::World::Core::CVariant>& vals,
                   EarthView::World::Core::Database::EVParamType type );

	///<summary>
	/// 添加绑定数据到下一个绑定位置，按顺序绑定
	/// </summary>
	/// <param name="vals">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
	ev_void addBindValue(ev_vector<EarthView::World::Core::CVariant>& vals,EarthView::World::Core::Database::EVParamType type );
private:
    CSqlQueryPrivate *m_private;
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLQUERY_H_H_

