#ifndef _SQLDATABASE_H_H_
#define _SQLDATABASE_H_H_

#include "sqlutility.h"
#include "sqlindex.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlDriver;
class CSqlIndex;
class CSqlRecord;
class CSqlQuery;
class CSqlDatabasePrivate;

///<summary>
///数据库驱动工厂的基类
///通过实现createobject返回所需要提供的数据库对象
///</summary>
class EV_SQL_DLL CSqlDriverCreatorBase : public EarthView::World::Core::CAllocatedObject
{
public:
	///<summary>
	///析构函数
	///</summary>
    virtual ~CSqlDriverCreatorBase() {}
	///<summary>
	///构造函数
	///</summary>
	CSqlDriverCreatorBase();
	/// <summary>
	/// 创建driver
	/// </summary>z
	/// <returns>数据库driver句柄</returns>
	virtual EarthView::World::Core::Database::CSqlDriver *createObject(){return NULL;}
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlDriverCreatorBase(EarthView::World::Core::CNameValuePairList* pList );
};
///<summary>
///代表一个数据库的连接
///通过一个数据库连接提供访问数据库的接口
///</summary>
class EV_SQL_DLL CSqlDatabase : public EarthView::World::Core::CAllocatedObject
{
public:
	///<summary>
	///默认构造函数
	///</summary>
    CSqlDatabase();
	///<summary>
	///拷贝构造函数
	///</summary>
    CSqlDatabase(const CSqlDatabase &other);
	///<summary>
	///析构函数
	///</summary>
    ~CSqlDatabase();
	///<summary>
	///复制操作符的重载
	///</summary>
	///<param name="other">EarthView::World::Core::Database::CSqlDatabase对象的引用</param>
	///<returns>当前对象的引</returns>
    EarthView::World::Core::Database::CSqlDatabase &operator=(const EarthView::World::Core::Database::CSqlDatabase &other);
	///<summary>
	///使用当前的连接值打开数据库连接
	///</summary>
	///<param name=""></param>
	///<returns>打开成功返回true，打开失败返回false</returns>
    ev_bool open();
	///<summary>
	///使用给定的用户名和密码打开数据库连接
	///</summary>
	///<param name="user">用户名</param>
	///<param name="password">密码</param>
	///<returns>打开成功返回true，打开失败返回false</returns>
    ev_bool open(const ev_wstring& user, const ev_wstring& password);
	///<summary>
	///关闭数据库连接
	///</summary>
	///<param name=""></param>
	///<returns></returns>
    ev_void close();
	///<summary>
	///当前数据库是否打开
	///</summary>
	///<param name=""></param>
	///<returns>打开返回true，否则返回false</returns>
    ev_bool isOpen() const;
	///<summary>
	///打开数据库时是否出错
	///</summary>
	///<param name=""></param>
	///<returns>打开出错返回true，否则返回false</returns>
    ev_bool isOpenError() const;
	///<summary>
	///是否有一个有效的数据库驱动
	///</summary>
	///<param name=""></param>
	///<returns>有效返回true，否则返回false</returns>
	ev_bool isValid() const;
   
	/// <summary>
	/// 开始事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
    ev_bool transaction();
	/// <summary>
	/// 提交事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
    ev_bool commit();
	/// <summary>
	/// 撤销事务
	/// </summary>
	/// <returns>成功返回true，失败返回false</returns>
    ev_bool rollback();
	///<summary>
	///设置数据库名
	///</summary>
	///<param name="name">数据库名</param>
	///<returns></returns>
    ev_void setDatabaseName(const ev_wstring& name);
	///<summary>
	///设置用户名
	///</summary>
	///<param name="name">用户名</param>
	///<returns></returns>
    ev_void setUserName(const ev_wstring& name);
	///<summary>
	///设置密码
	///</summary>
	///<param name="password">密码</param>
	///<returns></returns>
    ev_void setPassword(const ev_wstring& password);
	///<summary>
	///设置主机名
	///</summary>
	///<param name="host">主机名</param>
	///<returns></returns>
    ev_void setHostName(const ev_wstring& host);
	///<summary>
	///设置端口
	///</summary>
	///<param name="p">端口号</param>
	///<returns></returns>
    ev_void setPort(ev_int32 p);
	///<summary>
	///设置连接选项
	///</summary>
	///<param name="options">连接选项</param>
	///<returns></returns>
    ev_void setConnectOptions(const ev_wstring& options);
	///<summary>
	///获取数据库名
	///</summary>
	///<param name=""></param>
	///<returns>数据库名</returns>
   const ev_wstring& databaseName() const;
	///<summary>
	///获取用户名
	///</summary>
	///<param name=""></param>
	///<returns>用户名</returns>
    const ev_wstring& userName() const;
	///<summary>
	///获取密码
	///</summary>
	///<param name=""></param>
	///<returns>密码</returns>
    const ev_wstring& password() const;
	///<summary>
	///获取主机名
	///</summary>
	///<param name=""></param>
	///<returns>主机名</returns>
    const ev_wstring& hostName() const;
	///<summary>
	///获取驱动名
	///</summary>
	///<param name=""></param>
	///<returns>驱动名</returns>
    const ev_wstring& driverName() const;
	///<summary>
	///获取端口号
	///</summary>
	///<param name=""></param>
	///<returns>端口号</returns>
    ev_int32 port() const;
	///<summary>
	///获取连接选项
	///</summary>
	///<param name=""></param>
	///<returns>连接选项</returns>
    const ev_wstring& connectOptions() const;
	///<summary>
	///获取连接名
	///</summary>
	///<param name=""></param>
	///<returns>连接名</returns>
    const ev_wstring& connectionName() const;
	///<summary>
	///获取连接当前数据库的驱动对象
	///</summary>
	///<param name=""></param>
	///<returns>数据库驱动对象</returns>
    EarthView::World::Core::Database::CSqlDriver* driver() const;

	/// <summary>
	/// 返回数据库指定类型的所有表
	/// </summary>
	/// <param name="tablename">表名</param>
	/// <returns>返回包含的表名的EarthView::World::Core::CWStringArray</returns>
	EarthView::World::Core::CWStringArray tables(EarthView::World::Core::Database::EVTableType type) const;
	/// <summary>
	/// 返回指定表的元信息，包含各个字段信息
	/// </summary>
	/// <param name="tablename">表名</param>
	/// <returns>返回对应的表的元信息的record</returns>
	EarthView::World::Core::Database::CSqlRecord record(const ev_wstring& tablename) const;
	/// <summary>
	/// 返回表的主键索引
	/// </summary>
	/// <param name="tablename">表名</param>
	/// <returns>返回对应的表的EarthView::World::Core::Database::CSqlIndex</returns>
	EarthView::World::Core::Database::CSqlIndex primaryIndex(const ev_wstring& tablename) const;

	/// <summary>
	/// 添加数据库
	/// </summary>
	/// <param name="type">数据库类型字符串</param>
	/// <param name="connectionName">连接字符串</param>
	/// <returns>返回对应的数据库</returns>
    static EarthView::World::Core::Database::CSqlDatabase addDatabase(const ev_wstring& type, const ev_wstring& connectionName);
	/// <summary>
	/// 添加数据库
	/// </summary>
	/// <param name="driver">数据库驱动</param>
	/// <param name="connectionName">连接字符串</param>
	/// <returns>返回对应的数据库</returns>
    static EarthView::World::Core::Database::CSqlDatabase addDatabase(EarthView::World::Core::Database::CSqlDriver* driver, const ev_wstring& connectionName);
	/// <summary>
	/// 克隆数据库
	/// </summary>
	/// <param name="other">数据库</param>
	/// <param name="connectionName">连接字符串</param>
	/// <returns>返回克隆的数据库</returns>
    static EarthView::World::Core::Database::CSqlDatabase cloneDatabase(const EarthView::World::Core::Database::CSqlDatabase &other, const ev_wstring& connectionName);
	/// <summary>
	/// 查找数据库
	/// </summary>
	/// <param name="connectionName">连接字符串</param>
	/// <param name="open">如果没有是否打开</param>
	/// <returns>返回数据库</returns>
    static EarthView::World::Core::Database::CSqlDatabase database(const ev_wstring& connectionName, ev_bool open = true);
	/// <summary>
	/// 移除数据库
	/// </summary>
	/// <param name="connectionName">连接字符串</param>
	/// <returns></returns>
    static ev_void removeDatabase(const ev_wstring& connectionName);
	/// <summary>
	/// 判断是否包含了数据库
	/// </summary>
	/// <param name="connectionName">连接字符串</param>
	/// <returns>如果已存在，返回true，否则，false</returns>
    static ev_bool contains(const ev_wstring& connectionName);
    /// <summary>
	/// 获取所有的driver的对应字符串标识
	/// </summary>
	/// <returns>返回所有的driver的对应标识字符串数组</returns>
	static EarthView::World::Core::CWStringArray drivers();
    /// <summary>
	/// 获取所有的连接名
	/// </summary>
	/// <returns>返回所有的连接名字符串数组</returns>
	static EarthView::World::Core::CWStringArray connectionNames();
	/// <summary>
	/// 注册数据库driver
	/// </summary>
	/// <param name="name">数据库类型字符串</param>
	/// <param name="creator">driver的创建者</param>
	/// <returns></returns>
    static ev_void registerSqlDriver(const ev_wstring &name, EarthView::World::Core::Database::CSqlDriverCreatorBase *creator);
	/// <summary>
	/// 是否已经注册数据库driver
	/// </summary>
	/// <param name="name">数据库类型字符串</param>
	/// <returns>如果已注册返回true，否则false</returns>
    static ev_bool isDriverAvailable(const ev_wstring &name);
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
	CSqlDatabase( EarthView::World::Core::CNameValuePairList* pList );
protected:
	/// <summary>
	/// 显示构造函数
	/// </summary>
	/// <param name="type">数据库类型字符串</param>
	/// <returns>数据对象</returns>
    explicit CSqlDatabase(const ev_wstring& type);
    /// <summary>
	/// 显示构造函数
	/// </summary>
	/// <param name="driver">数据库驱动</param>
	/// <returns>数据对象</returns>
	explicit CSqlDatabase(EarthView::World::Core::Database::CSqlDriver* driver);

private:
	friend class CSqlDatabasePrivate;
	CSqlDatabasePrivate *m_private;
};


} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLDATABASE_H_H_
