#ifndef _DBML_SQL_H_
#define _DBML_SQL_H_

#pragma once

#include "graphic_config.h"
#include "databaseutility/sqldatabase.h"

namespace EarthView 
{
	namespace World		
	{
		namespace Core		
		{
			class CVariant;
		}
	}
}

//辅助性说明宏
#define DBML_TYPE		ev_uint16
#define DBML_MATERIAL	1<<0
#define DBML_GPU		1<<1
#define DBML_TEXURE		1<<2


#define DBML_TABLE_TYPE             EVString
#define DBML_TABLE_MATERIAL			"MATERIALDATA"
#define DBML_TABLE_GPU				"GPUDATA"
#define DBML_TABLE_TEXURE			"TEXTUREDATA"


#define DBML_FIELD_NAME             "NAME"
#define DBML_FIELD_CONTEXT			"CONTEXT"
#define DBML_FIELD_MATERIAL_TYPE    "TYPE"

//这个可以根据需要修改，这里只作为逻辑实现的宏
//#define DBML_GET_DATASTREAM(record, stream) do {stream = any_cast<DataStreamPtr>(record.value( DBML_FIELD_CONTEXT ));} while(0)
#define DBML_GET_DATASTREAM(record, stream) do {stream = record.value( DBML_FIELD_CONTEXT ).toDataStream();} while(0)
#define DBML_GET_NAME(record,name)		    do {name =record.value( DBML_FIELD_NAME).toWString();} while(0)

namespace EarthView {
	namespace World{
		namespace Graphic {

			class  EV_GRAPHIC_PRIVATE CDbmlSQL   : public  EarthView::World::Core::CAllocatedObject  
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="dbPath">数据库名称</param>
				/// <param name="arch">存档</param>
				/// <returns></returns>
				CDbmlSQL(EVString dbPath, EarthView::World::Core::CArchive* arch);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CDbmlSQL();
			ev_private:
				CDbmlSQL(_in EarthView::World::Core::CNameValuePairList *pList);

			public:

				/// <summary>
				/// 获取文件信息，存储到fileInfoList中
				/// </summary>
				/// <param name="fileInfoList">文件信息目录</param>
				/// <returns>是否成功存储文件的信息</returns>
				ev_bool			 list(EarthView::World::Core::FileInfoList& fileInfoList);

				/// <summary>
				/// 通过名称获取一条记录的字段值
				/// </summary>
				/// <param name="name">数据库一条记录的名称</param>
				/// <returns>数据库的一条记录</returns>
				EarthView::World::Core::Database::CSqlRecord  	 getValue(EVString name);

				/// <summary>
				/// 通过名称获取一条记录的字段值
				/// </summary>
				/// <param name="name">数据库一条记录的名称</param>
				/// <param name="table">表名类型</param>
				/// <returns>数据库的一条记录</returns>
				EarthView::World::Core::Database::CSqlRecord  	 getValue(EVString name, DBML_TABLE_TYPE table);

				/// <summary>
				/// 删除指定名称的记录的字段值
				/// </summary>
				/// <param name="name">数据库一条记录的名称</param>
				/// <param name="table">表名类型</param>
				/// <returns>是否删除</returns>
				ev_bool			 remove(EVString name, DBML_TABLE_TYPE table);

				/// <summary>
				/// 指定名称的记录是否存在
				/// </summary>
				/// <param name="name">数据库一条记录的名称</param>
				/// <param name="table">表名类型</param>
				/// <returns>是否存在</returns>
				ev_bool          exist(EVString name, DBML_TABLE_TYPE table);

			protected:
				/// <summary>
				/// 初始化数据库
				/// </summary>
				/// <param name="dbPath">数据库的名称</param>
				/// <returns></returns>
				void              initConn(EVString dbPath);

				/// <summary>
				/// 注销数据库
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void              releaseConn();

				/// <summary>
				/// 指定名称的记录是否存在
				/// </summary>
				/// <param name="name">数据库一条记录的名称</param>
				/// <param name="table">表名类型</param>
				/// <returns></returns>
				void              listTable(EVString table,EarthView::World::Core::FileInfoList& fileInfoList);
			

			protected:
				EarthView::World::Core::Database::CSqlDatabase  mDatabaseConn;
				EarthView::World::Core::CArchive     *mArch;
			};
		}
	}
}


#endif //_DBML_SQL_H_