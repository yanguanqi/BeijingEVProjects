#ifndef _SQLRESULT_H_H_
#define _SQLRESULT_H_H_

#include "sqlutility.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlError;
class CSqlRecord;
class CSqlDriver;
class CSqlResultPrivate;
///<summary>
///提供一个从特定结果集上获取数据的接口
///</summary>

class EV_SQL_DLL CSqlResult : public EarthView::World::Core::CAllocatedObject
{
public:
	///<summary>
	///析构函数
    ///</summary>
    virtual ~CSqlResult();
	///<summary>
	///获取一个低级别的数据库句柄并绑定到cvariant对象上
	///</summary>
	///<param name=""></param>
	///<returns>绑定有数据库句柄的cvariant对象</returns>
    virtual EarthView::World::Core::CVariant handle() const;

	///<summary>
	///返回当前sql查询语句
	///</summary>
	///<param name=""></param>
	///<returns>当前sql查询语句</returns>
	ev_wstring lastQuery() const;

protected:
    enum EVBindingSyntax {
        BS_PositionalBinding,
        BS_NamedBinding
    };

    explicit CSqlResult(const CSqlDriver * db);
	///<summary>
	///返回当前结果集中的行位置（从0开始）
	///</summary>
	///<param name=""></param>
	///<returns>当前结果集中的行位置（从0开始）</returns>
    ev_int32 at() const;

	///<summary>
	/// 添加绑定数据到下一个绑定位置，按顺序绑定
	/// </summary>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
	void addBindValue(const EarthView::World::Core::CVariant& val, EVParamType type);
	void addBindValue(ev_vector<EarthView::World::Core::CVariant>& vals, EVParamType type);

	EVParamType bindValueType(const ev_wstring& placeholder) const;
    EVParamType bindValueType(ev_int32 pos) const;
	EarthView::World::Core::CVariant boundValue(const ev_wstring& placeholder) const;
    EarthView::World::Core::CVariant boundValue(ev_int32 pos) const;
	ev_int32 boundValueCount() const;

	ev_vector<EarthView::World::Core::CVariant>& boundValues() const;

	ev_vector<vector<EarthView::World::Core::CVariant> >& boundValuess() const;
	///<summary>
	///清楚整个结果集并释放相关资源
	///</summary>
	///<param name=""></param>
	///<returns></returns>
	ev_void clear();
	const CSqlDriver* driver() const;
	ev_wstring executedQuery() const;
	ev_bool isValid() const;
    ev_bool isActive() const;
	///<summary>
	///当前查询是否是选择查询
	///</summary>
	///<param name=""></param>
	///<returns>是选择查询则返回true,否则返回false</returns>
    ev_bool isSelect() const;
	///<summary>
	///结果集是否只支持向前查询
	///</summary>
	///<param name=""></param>
	///<returns>只支持向前查询则返回true,否则返回false</returns>
    ev_bool isForwardOnly() const;

	EVBindingSyntax bindingSyntax() const;
	///<summary>
	///返回与结果集相联系的最后的错误
	///</summary>
	///<param name=""></param>
	///<returns>错误信息</returns>
	CSqlError lastError() const;
ev_private:
	///<summary>
	/// 绑定数据到指定的位置
	/// </summary>
	/// <para m name="pos">绑定位置的索引</param>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
	virtual ev_void bindValue(ev_int32 pos, const EarthView::World::Core::CVariant& val, EVParamType type);

	virtual ev_void bindValues(ev_int32 pos, const ev_vector<EarthView::World::Core::CVariant> & vals, EVParamType type);
	///<summary>
	/// 绑定数据到指定的位置
	/// </summary>
	/// <param name="placeholder">绑定位置的占位符</param>
	/// <param name="val">待绑定的数据</param>
	/// <param name="type">绑定类型</param>
	///<returns>void</returns>
        virtual ev_void bindValue(const ev_wstring& placeholder, const EarthView::World::Core::CVariant& val,
                             EVParamType type);
	virtual ev_void bindValues(const ev_wstring& placeholder, const ev_vector<EarthView::World::Core::CVariant> & vals,
                            EVParamType type);
	///<summary>
	/// 返回当前的record
	/// </summary>
	///<returns>当前的record</returns>
	virtual CSqlRecord record() const;
	///<summary>
	/// 准备查询语句
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
	virtual ev_bool prepare(const ev_wstring& query);
	///<summary>
	/// 准备查询语句
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool savePrepare(const ev_wstring& sqlquery);
	///<summary>
	/// 执行已准备好的SQL语句
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool exec();
	///<summary>
	/// 执行已准备好的SQL语句
	/// </summary>
	///<param name="needCursor">是否使用游标</param>
	///<returns>成功返回true，失败返回false</returns>
	virtual ev_bool execQuery(ev_bool needCursor);
	///<summary>
	/// 设置当前行
	/// </summary>
	///<param name="at">当前行</param>
	///<returns></returns>
    virtual ev_void setAt(ev_int32 at);
	///<summary>
	/// 设置是否为活动状态
	/// </summary>
	/// <param name="a">是否</param>
	///<returns>void</returns>
    virtual ev_void setActive(ev_bool a);
	///<summary>
	/// 设置当前执行的查询语句
	/// </summary>
	/// <param name="query">sql查询语句</param>
	///<returns>void</returns>
    virtual ev_void setQuery(const ev_wstring& query);
	///<summary>
	/// 设置是否为选择语句
	/// </summary>
	/// <param name="s">是否</param>
	///<returns>void</returns>
    virtual ev_void setSelected(ev_bool s);
	///<summary>
	/// 设置是否仅前向
	/// </summary>
	/// <param name="forward">是否</param>
	///<returns>void</returns>
    virtual ev_void setForwardOnly(ev_bool forward);
	///<summary>
	/// 设置错误信息
	/// </summary>
	/// <param name="e">错误信息</param>
	///<returns>void</returns>
	virtual void setLastError(const CSqlError& e);

	///<summary>
	/// 返回当前记录中的指定字段的值
	/// </summary>
	/// <param name="i">字段的索引的位置</param>
	///<returns>返回字段的值</returns>
	virtual EarthView::World::Core::CVariant data(ev_int32 i);
	///<summary>
	/// 索引到指定的位置
	/// </summary>
	/// <param name="i">索引的位置</param>
	///<returns>成功返回true，失败返回false</returns>
	virtual ev_bool fetch(ev_int32 i);
	///<summary>
	/// 索引到下一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool fetchNext();
	///<summary>
	/// 索引到上一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool fetchPrevious();
	///<summary>
	/// 索引到第一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool fetchFirst() ;
	///<summary>
	/// 索引到最后一个select的结果
	/// </summary>
	///<returns>成功返回true，失败返回false</returns>
    virtual ev_bool fetchLast();
	///<summary>
	/// 执行SQL语句
	/// </summary>
	/// <param name="sqlquery">SQL语句</param>
	///<returns>成功返回true，失败返回false</returns>
	virtual ev_bool reset(const ev_wstring& sqlquery);
	///<summary>
	/// 获取选择结果集的大小
	/// </summary>
	/// <param name=""></param>
	///<returns>选择结果集的大小，如果查询结果无法确定或者不是select查询返回-1</returns>
	virtual ev_int32 size();
	///<summary>
	/// 在i字段处当前行的值是否为空
	/// </summary>
	/// <param name="i">字段索引值</param>
	///<returns>为空返回true,否则返回false</returns>
	virtual ev_bool isNull(ev_int32 i);
	///<summary>
	///返回sql操作对结果集影响的行数
	///</summary>
	///<param name=""></param>
	///<returns>sql操作对结果集影响的行数</returns>
	virtual ev_int32 numRowsAffected() const;
	///<summary>
	///获取最后插入表的id号
	///</summary>
	///<param name=""></param>
	///<returns>最后插入表的id号</returns>
	virtual EarthView::World::Core::CVariant lastInsertId () const;
	enum VirtualHookOperation { BatchOperation, DetachFromResultSet, SetNumericalPrecision, NextResult };
	///<summary>
	///根据VirtualHookOperation中的枚举值确定执行什么操作
	///</summary>
	///<param name="id">VirtualHookOperation成员</param>
	///<param name="data">输出变量</param>
	///<returns></returns>
	virtual ev_void virtual_hook(int id, void *data);
protected:
    ev_bool nextResult();
	ev_void disableDriver();
	ev_bool execBatch(bool arrayBind);

	ev_void detachFromResultSet();
	ev_void setNumericalPrecisionPolicy(EVNumericalPrecisionPolicy precisionPolicy);
	EVNumericalPrecisionPolicy numericalPrecisionPolicy() const;
ev_private:
	// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlResult( EarthView::World::Core::CNameValuePairList* pList );
private:
	friend class CSqlResultPrivate;
	CSqlResultPrivate *m_private;
	void resetBindCount(); // HACK

private:
    C_DISABLE_COPY(CSqlResult)
	friend class CSqlQuery;
};


} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLRESULT_H_H_

