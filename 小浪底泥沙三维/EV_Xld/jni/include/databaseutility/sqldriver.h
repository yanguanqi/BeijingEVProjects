#ifndef _SQLDRIVER_H_H_
#define _SQLDRIVER_H_H_

#include "sqlutility.h"
#include "sqlindex.h"
#include "sqlerror.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlDatabase;
class CSqlField;
class CSqlIndex;
class CSqlRecord;
class CSqlResult;
class CSqlError;
class CSqlDriverPrivate;
///<summary>
///访问指定数据库的数据库驱动基类
///</summary>
class EV_SQL_DLL CSqlDriver : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 数据库特性枚举
	/// </summary>
    enum EVDriverFeature { DF_Transactions, DF_QuerySize, DF_BLOB, DF_Unicode, DF_PreparedQueries,
                         DF_NamedPlaceholders, DF_PositionalPlaceholders, DF_LastInsertId,
                         DF_BatchOperations, DF_SimpleLocking, DF_LowPrecisionNumbers,
                         DF_EventNotifications, DF_FinishQuery, DF_MultipleResultSets };
	/// <summary>
	///	SQL语句类型枚举
	/// </summary>
    enum EVStatementType {ST_WhereStatement, ST_SelectStatement, ST_UpdateStatement,
                         ST_InsertStatement, ST_DeleteStatement };
	/// <summary>
	///	标识类型枚举
	/// </summary>
    enum EVIdentifierType { IT_FieldName, IT_TableName };
protected:
    explicit CSqlDriver();
public:
	///<summary>
	///析构函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ~CSqlDriver();

	/// <summary>
	/// 返回数据库的句柄
	/// </summary>
	/// <returns>数据库句柄</returns>
	virtual EarthView::World::Core::CVariant handle() const;
	/// <summary>
	/// 判断数据库是否支持某一特性
	/// </summary>
	/// <param name="f">数据库特性</param>
	/// <returns>如果支持返回true，否则false</returns>
    virtual ev_bool hasFeature(EarthView::World::Core::Database::CSqlDriver::EVDriverFeature f) const;
	///<summary>
	///当前数据库是否打开
	///</summary>
	///<param name=""></param>
	///<returns>打开返回true，否则返回false</returns>
    virtual ev_bool isOpen() const;
	///<summary>
	///打开数据库时是否出错
	///</summary>
	///<param name=""></param>
	///<returns>打开出错返回true，否则返回false</returns>
    ev_bool isOpenError() const;
	///<summary>
	///获取发生在数据库上面的最后的错误
	///</summary>
	///<param name=""></param>
	///<returns>包含发生在数据库上面的最后的错误信息的EarthView::World::Core::Database::CSqlError对象</returns>
	EarthView::World::Core::Database::CSqlError lastError() const;

	/// <summary>
	/// 判断指定数据库是否存在
	/// </summary>
	/// <param name="dbname">数据库名</param>
	/// <returns>返回True or False</returns>
	virtual ev_bool exist(const ev_wstring &dbname) const;
	/// <summary>
	/// 检索数据库的指定类型的所有表名
	/// </summary>
	/// <param name="tableType">表类型</param>
	/// <returns>返回数据库的指定类型的所有表名</returns>
    virtual EarthView::World::Core::CWStringArray tables(EarthView::World::Core::Database::EVTableType tableType) const;
	/// <summary>
	/// 返回表的主键索引
	/// </summary>
	/// <param name="tablename">表名</param>
	/// <returns>返回对应的表的EarthView::World::Core::Database::CSqlIndex</returns>
    virtual EarthView::World::Core::Database::CSqlIndex primaryIndex(const ev_wstring &tableName) const;
	/// <summary>
	/// 返回指定表的元信息，包含各个字段信息
	/// </summary>
	/// <param name="tablename">表名</param>
	/// <returns>返回对应的表的元信息的record</returns>
    virtual EarthView::World::Core::Database::CSqlRecord record(const ev_wstring &tableName) const;
	///<summary>
	///根据给定的信息打开数据库
	///</summary>
	///<param name="db">数据库名</param>
	///<param name="user">用户名</param>
	///<param name="password">密码</param>
	///<param name="host">主机名</param>
	///<param name="port">端口号</param>
	///<param name="connOpts">连接选项</param>
	///<returns>打开成功返回true,否则返回false</returns>
	virtual ev_bool open(const ev_wstring& db,
                      const ev_wstring& user ,
                      const ev_wstring& password ,
                      const ev_wstring& host ,
                      ev_int32 port ,
                      const ev_wstring& connOpts);
	/// <summary>
	/// 关闭数据库连接
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void close();
	/// <summary>
	/// 创建对应的EarthView::World::Core::Database::CSqlResult对象
	/// </summary>
	/// <returns>返回driver对应的result对象</returns>
	virtual EarthView::World::Core::Database::CSqlResult *createResult() const;
	/// <summary>
	/// 开始事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
	virtual ev_bool beginTransaction();
    /// <summary>
	/// 提交事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
	virtual ev_bool commitTransaction();
	/// <summary>
	/// 撤销事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
    virtual ev_bool rollbackTransaction();
	///<summary>
	///根据所给参数信息，构造sql语句
	///</summary>
	///<param name="type">sql语句类型</param>
	///<param name="tablename">表名</param>
	///<param name="rec">表的元信息</param>
	///<param name="preparedStatement">是否是准备语句</param>
	///<returns>sql语句</returns>
	virtual ev_wstring sqlStatement(EarthView::World::Core::Database::CSqlDriver::EVStatementType type, const ev_wstring &tableName,
                                 const EarthView::World::Core::Database::CSqlRecord &rec, ev_bool preparedStatement) const;
	///<summary>
	///是否为需要跳过的标示符
	///</summary>
	///<param name="identifier">标示符</param>
	///<param name="type">标示符类型</param>
	///<returns>是需要跳过的标示符返回true,否则返回false</returns>
	virtual ev_bool isIdentifierEscaped(const ev_wstring &identifier, EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const;
	///<summary>
	///跳过标示符
	///</summary>
	///<param name="identifier">标示符</param>
	///<param name="type">标示符类型</param>
	///<returns>跳过标示后的字符串</returns>
    virtual ev_wstring escapeIdentifier(const ev_wstring &identifier, EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const;
	///<summary>
	///格式化字段值
	///</summary>
	///<param name="field">字段</param>
	///<param name="trimStrings">是否截断filed尾部的所有空白字符</param>
	///<returns>格式化后的字符串</returns>
    virtual ev_wstring formatValue(const EarthView::World::Core::Database::CSqlField& field, ev_bool trimStrings = false) const;
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
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlDriver( EarthView::World::Core::CNameValuePairList* pList ); 
protected:
	/// <summary>
	/// 设置是否打开
	/// </summary>
	/// <returns></returns>
    virtual ev_void setOpen(ev_bool o);
	/// <summary>
	/// 设置是否打开错误
	/// </summary>
	/// <returns></returns>
    virtual ev_void setOpenError(ev_bool e);
	/// <summary>
	/// 设置最后的出错信息
	/// </summary>
	///<param name="e">错误信息</param>
	/// <returns></returns>
	virtual void setLastError(const EarthView::World::Core::Database::CSqlError& e);

private:
	CSqlDriverPrivate* m_private;

private:
    C_DISABLE_COPY(CSqlDriver)
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLDRIVER_H_H_

