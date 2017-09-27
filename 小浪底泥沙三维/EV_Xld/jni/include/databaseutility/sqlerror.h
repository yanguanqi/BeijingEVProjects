#ifndef _SQLERROR_H_H_
#define _SQLERROR_H_H_

#include "sqlutility.h"


namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {
///<summary>
///数据库错误信息类
///</summary>
class EV_SQL_DLL CSqlError : public EarthView::World::Core::CAllocatedObject
{
public:
    enum EVErrorType {
        ET_NoError,
        ET_ConnectionError,
        ET_StatementError,
        ET_TransactionError,
        ET_UnknownError
    };
	///<summary>
	///构造函数
	///</summary>
	///<param name=""></param>
	///<returns></returns>
	CSqlError();
	///<summary>
	///构造函数
	///</summary>
	///<param name="driverText">驱动错误文本</param>
	///<returns></returns>
	CSqlError( const ev_wstring& driverText); 
	///<summary>
	///构造函数
	///</summary>
	///<param name="driverText">驱动错误文本</param>
	///<param name="databaseText">数据库错误文本</param>
	///<returns></returns>
	CSqlError( const ev_wstring& driverText ,const ev_wstring& databaseText);
	///<summary>
	///构造函数
	///</summary>
	///<param name="driverText">驱动错误文本</param>
	///<param name="databaseText">数据库错误文本</param>
	///<param name="type">错误类型</param>
	///<returns></returns>
	CSqlError( const ev_wstring& driverText ,
               const ev_wstring& databaseText,
                EarthView::World::Core::Database::CSqlError::EVErrorType type);
	///<summary>
	///构造函数
	///</summary>
	///<param name="driverText">驱动错误文本</param>
	///<param name="databaseText">数据库错误文本</param>
	///<param name="type">错误类型</param>
	///<param name="number">错误个数</param>
	///<returns></returns>
    CSqlError( const ev_wstring& driverText,
                const ev_wstring& databaseText,
                EarthView::World::Core::Database::CSqlError::EVErrorType type ,
                ev_int32 number);
	///<summary>
	///拷贝构造函数
	///</summary>
	///<param name="other">错误类</param>
	///<returns></returns>
    CSqlError(const CSqlError& other);
	///<summary>
	///赋值操作符的重载
	///</summary>
	///<param name="other">错误类</param>
	///<returns></returns>
    EarthView::World::Core::Database::CSqlError& operator=(const EarthView::World::Core::Database::CSqlError& other);
	///<summary>
	///析构函数
	///</summary>
    ~CSqlError();
	///<summary>
	///获取驱动错误文本
	///</summary>
	///<param name=""></param>
	///<returns>驱动错误文本</returns>
    const ev_wstring& driverText() const;
	///<summary>
	///设置驱动错误文本
	///</summary>
	///<param name="driverText">驱动错误文本</param>
	///<returns></returns>
    void setDriverText(const ev_wstring& driverText);
	///<summary>
	///获取数据库错误文本
	///</summary>
	///<param name=""></param>
	///<returns>数据库错误文本</returns>
    const ev_wstring& databaseText() const;
	///<summary>
	///设置数据库错误文本
	///</summary>
	///<param name="databaseText">数据库错误文本</param>
	///<returns></returns>
    void setDatabaseText(const ev_wstring& databaseText);
	///<summary>
	///获取错误类型
	///</summary>
	///<param name=""></param>
	///<returns>错误类型</returns>
    EarthView::World::Core::Database::CSqlError::EVErrorType type() const;
	///<summary>
	///设置错误类型
	///</summary>
	///<param name="type">错误类型</param>
	///<returns></returns>
    void setType(EarthView::World::Core::Database::CSqlError::EVErrorType type);
	///<summary>
	///获取错误个数
	///</summary>
	///<param name=""></param>
	///<returns>错误个数</returns>
    int number() const;
	///<summary>
	///设置错误个数
	///</summary>
	///<param name="number">错误个数</param>
	///<returns></returns>
    void setNumber(int number);
	///<summary>
	///获取由驱动错误和数据库错误组成的字符串
	///</summary>
	///<param name=""></param>
	///<returns>驱动错误和数据库错误组成的字符串</returns>
    ev_wstring text() const;
	///<summary>
	///错误是否被设置
	///</summary>
	///<param name=""></param>
	///<returns>被设置返回true,否则返回false</returns>
    bool isValid() const;
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CSqlError( EarthView::World::Core::CNameValuePairList* pList );
private:
    ev_wstring driverError;
    ev_wstring databaseError;
    EarthView::World::Core::Database::CSqlError::EVErrorType errorType;
    int errorNumber;
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif // _SQLERROR_H_H_

