#ifndef _SQLSTANDARDIZATION_H_
#define _SQLSTANDARDIZATION_H_

#include "core/core_api.h"
#include "spatialdatabase/spatialdatabaseconfig.h"


namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {
				class CSqlQuery;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				///<summary>
				///由于不同数据库上sql语句中关键字有所不同，
				///通过此类创建统一的方法
				///</summary>
				class EV_SPATIALDATABASE_DLL CSqlstandardization : public EarthView::World::Core::CAllocatedObject
				{					
				public:
					///<summary>
					///构造函数
					/// </summary>
					/// <param name="driverType">驱动名</param>
					///<returns></returns>
					CSqlstandardization(const EarthView::World::Core::ev_wstring & driverType);
				ev_private:
					CSqlstandardization(EarthView::World::Core::CNameValuePairList *pList);

					///<summary>
					///获取当前时间
					/// </summary>
					/// <param name=""></param>
					///<returns>当前时间</returns>
					const ev_char* sqlcurrentTime() const;
					///<summary>
					///不同数据库上自增长字段关键字
					/// </summary>
					/// <param name=""></param>
					///<returns>自增长字段关键字</returns>
					const ev_char* sqlautoincrement() const;
					///<summary>
					///达梦数据库上自增长字段关键字
					/// </summary>
					/// <param name=""></param>
					///<returns>自增长字段关键字</returns>
					const ev_char* sqlDMautoincrement() const;
					///<summary>
					///不同数据库上字符类型
					/// </summary>
					/// <param name=""></param>
					///<returns>字符类型</returns>
					const ev_char* sqlcharType() const;
					/*const ev_char* sqlOraclesequence() const;//oracle中为了实现自增长功能创建sequence*/
					///<summary>
					///不同数据库上二进制类型（区分image和blob）
					/// </summary>
					/// <param name=""></param>
					///<returns>二进制类型</returns>
					const ev_char* sqlbinaryType() const;
					///<summary>
					///选出sqlserver数据库中查询结果的前row行
					/// </summary>
					/// <param name="str"></param>
					/// <param name="row">行数</param>
					///<returns></returns>
					ev_void SqlserverSelectTop(_out EVString &str,ev_int32 row);
					///<summary>
					///选出查询结果的前row行（除sqlserver，dm外）
					/// </summary>
					/// <param name="str"></param>
					/// <param name="row">行数</param>
					///<returns></returns>
					ev_void sqlSelectTop(_out EVString &str,ev_int32 row);
					///<summary>
					///时间类型
					/// </summary>
					/// <param name=""></param>
					///<returns>时间类型</returns>
					const ev_char* sqlDateType() const;
					///<summary>
					///64位整形
					/// </summary>
					/// <param name=""></param>
					///<returns>时间类型</returns>
					const ev_char* sqlLongIntType() const;
					///<summary>
					///自增长字段
					/// </summary>
					/// <param name="fieldname">字段名</param>
					///<returns>字段名</returns>
					EVString sqlautoincrementField(const ev_char* fieldname) const;
					///<summary>
					///插入语句中自增长字段的值
					/// </summary>
					/// <param name="fieldname">字段名</param>
					///<returns>字段值</returns>
					EVString sqlautoincrementFieldValue(const ev_char *tablename) const;
					///<summary>
					///oracle中为了实现自增长功能创建sequence
					/// </summary>
					/// <param name="tablename">表名</param>
					///<returns>序列</returns>
					const ev_char* sqlOraclesequence(const ev_char *tablename) const;
					///<summary>
					///获取最后一条插入记录的主码值
					/// </summary>
					/// <param name="curQuery">查询对象</param>
					/// <param name="tablename">表名</param>
					///<returns>主码值</returns>
					ev_int32 getLastPrimaryKeyVal(EarthView::World::Core::Database::CSqlQuery& curQuery,const ev_char* tablename);
				private:
					EVString sqlIntercept(const EVString& name) const;//对于长度超过30的表名处理
					inline void createOracleSeqName(const ev_char* tablename,_out EVString& seqname) const;
				private:
					// SQLITE, SQLSERVER, MYSQL, ORACLE 
					EarthView::World::Core::ev_wstring m_driverType;
					static ev_uint32 m_index;
				};

			}}}} // End of Namespace

#endif //_DATASET_ITERATOR_H_H_
