/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：styles.h
* 摘    要：该文件是风格类
*
* 当前版本：1.0
* 作    者：王 威
* 完成日期：2013年01月14日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2013-01-14		王  威   1.0.0版本的内容声明
* 
**/
#ifndef EARTHVIEW_WORLD_DESKTOP_QT_STYLES_H
#define EARTHVIEW_WORLD_DESKTOP_QT_STYLES_H

#include "symbollibraryconfig.h"
#include "color/colorramp.h"
#include "spatialinterface/isymbol.h"
#include "databaseutility/sqldatabase.h"

#include "core/name_value_pair.h"

#ifdef list
#undef list
#endif
#ifdef vector
#undef vector
#endif
#ifdef map
#undef map
#endif

#include <QString>
#include <QObject>
#include <QSettings>
#include <QStringList>
#include <QMap>

#define STYLE_FILE_SUFFIX "style"
#define STYLE_FILE_NAME "default"

namespace EarthView
{
	namespace World
	{
		namespace Desktop
		{
			namespace QT
			{
				struct SymbolRecord
				{
					ev_int32 nId;
					QString name;
					EarthView::World::Spatial::Display::ISymbol *pSymbol;
					QString groupName;
				};
				struct ColorRampRecord
				{
					ev_int32 nID;
					QString name;
					EarthView::World::Spatial::Display::CColorRamp *pColorRamp;
					QString type;
				};
				class EV_SYMBOLLIBRARY_DLL CStyles : public QObject
				{
					Q_OBJECT

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					CStyles( );
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CStyles();
				signals:
					void DBListChanged( );

				public:

					ev_void initialize( );
					/// <summary>
					/// 设定风格模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>必须设置该函数</memo>
					ev_void setSymbolMode( const EVSymbolMode mode );
					/// <summary>
					/// 设定渐变色模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setColorRampMode( const EVColorRampMode mode );

					/// <summary>
					/// 设定当前数据库路径
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool setCurrentDB( const QString &path );
					QString getCurrentDB( ) const;
					/// <summary>
					/// 改变风格选中状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void selectDB( const QString &name, ev_bool bSelected );
					/// <summary>
					/// 获取所有库的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getDbNames( QMap<QString, bool>& names );
					/// <summary>
					/// 增加库
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool addDB( const QString& path );
					/// <summary>
					/// 获取当前表的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>根据EVSymolMode,表名有EV_Marker、EV_Line、EV_Fill、EV_ColorRamp</memo>
					ev_void getTableName( QString& name );

					/// <summary>
					/// 获取风格所有名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getGroupNames( QStringList& names );

					/// <summary>
					/// 获取当前DB文件中的风格
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getSymbols( QList<SymbolRecord *>&symbolList );

					/// <summary>
					/// 获取指定组名所有文件下的风格
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getAllSymbols( QList<SymbolRecord *>&symbolList, const QString & groupName );
					/// <summary>
					/// 更新指定id的符号名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateSymbolName( ev_int32 id, const QString &newName );
					/// <summary>
					/// 更新指定id的符号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateSymbol( ev_int32 id, EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 更新指定id的组名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateSymbolGroupName( ev_int32 id, const QString &groupName );

					/// <summary>
					/// 添加风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回ID号</returns>
					/// <memo></memo>
					ev_int32 addSymbol( const QString &name, EarthView::World::Spatial::Display::ISymbol *symbol, const QString &groupName );
					
					/// <summary>
					/// 移除指定id的符号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeSymbol( ev_int32 id );

					//关于对色带的操作
					/// <summary>
					/// 获取所有色带记录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getAllColorRamps( QList<ColorRampRecord *>& colorRampList);	
					/// <summary>
					/// 获取所有色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>					
					ev_void getAllColorRamps( QList< EarthView::World::Spatial::Display::CColorRamp *> &colorRampList );

					//关于对色带的操作
					/// <summary>
					/// 获取当前DB文件中的色带记录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getColorRamps( QList<ColorRampRecord *>& colorRampList);
					/// <summary>
					/// 获取当前DB文件中的色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getColorRamps( QList< EarthView::World::Spatial::Display::CColorRamp *> &colorRampList );
					/// <summary>
					/// 更新色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateColorRamp( ColorRampRecord *pRecord );
					/// <summary>
					/// 更新色带名字
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void updateColorRampName( ev_int32 id, const QString &newName );
					/// <summary>
					/// 添加色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_int32 addColorRamp( ColorRampRecord *pRecord );
					/// <summary>
					/// 移除指定id的色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeColorRamp( ev_int32 id );
				ev_private:
					CStyles( EarthView::World::Core::CNameValuePairList* pList );
				private:
					/// <summary>
					/// 获取指定路径的符号记录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void getSymbols( QList<SymbolRecord *>&symbolList, const QString &path, const QString& pBuffer );
					/// <summary>
					/// 判断表是否存在，不存在创建
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool createTables( const QString & path );
					ev_bool execSql(EarthView::World::Core::ev_wstring& sql);
					ev_bool execSql(EarthView::World::Core::Database::CSqlDatabase&db,EarthView::World::Core::ev_wstring& sql);
					/// <summary>
					/// 标示符号类型:点、线、面
					/// </summary>
					EVSymbolMode m_eSymbolMode;
					/// <summary>
					/// 标示色带类型:随机色带、渐变色带
					/// </summary>
					EVColorRampMode m_eColorRampMode;
					/// <summary>
					/// 记录选中的风格
					/// </summary>
					QMap< QString, bool > m_pLocal;
					/// <summary>
					/// 扩展风格
					/// </summary>
					QStringList m_pExtent;
					/// <summary>
					/// 配置信息，并写到注册表内
					/// </summary>
					QSettings* m_pSettings;
					/// <summary>
					/// 当前DB路径
					/// </summary>
					QString m_szCurrentPath;
					/// <summary>
					/// 风格库路径
					/// </summary>
					QString m_szStylesPath;
					/// <summary>
					/// 当前DB
					/// </summary>
					EarthView::World::Core::Database::CSqlDatabase m_pCurrentDB;
					/// <summary>
					/// 标识是否是第一次创建
					/// </summary>
					ev_bool m_bFlag;
				};
			}
		}
	}
}

#endif // QXSTYLES_H

/* 风格：表名 EV_Marker  EV_Line  EV_Fill 
字段 ID(ev_int32) Name(varchar) Symbol(blob) GroupName(varchar)
*
色带：表名 EV_ColorRamp
字段 ID(ev_int32) Name(varchar) ColorRamp(blob)
*/