/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：frmstylesmanager.h
* 摘    要：该文件是风格管理类
*
* 当前版本：1.0
* 作    者：王 威
* 完成日期：2013年01月11日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2013-01-11		王  威   1.0.0版本的内容声明
* 
**/
#ifndef EARTHVIEW_WORLD_DESKTOP_QT_FRMSTYLESMANAGER_H
#define EARTHVIEW_WORLD_DESKTOP_QT_FRMSTYLESMANAGER_H

#include <QtGui/QDialog>
#include "qtlibs/symbollibraryconfig.h"
#include "qtlibs/styles.h"

class QTableWidgetItem;

namespace Ui
{
	class CFrmStylesManagerClass;
}


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class ISymbol;
			}
		}

		namespace Display
		{
			class IPaintDevice;
		}

		namespace Desktop
		{
			namespace QT
			{
				class CFrmStylesManagerHelper;
				class EV_SYMBOLLIBRARY_DLL CFrmStylesManager : public QDialog
				{
					Q_OBJECT

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					CFrmStylesManager(QWidget *parent = 0, Qt::WFlags flags = 0);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CFrmStylesManager();
				public slots:
					/// <summary>
					/// 风格改变槽
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void stylesChanged( );
					/// <summary>
					/// 当前风格库改变槽
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void changeCurrentDB( int );
					/// <summary>
					/// 类型改变
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void changeMode( int );
					/// <summary>
					/// 增加风格
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void addBtnClicked( );
					/// <summary>
					/// 移除选中风格
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void removeBtnClicked( );
					/// <summary>
					/// 更新Symbol、色带
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void updateStream( QTableWidgetItem *item );
					/// <summary>
					/// 更新图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void updateRandomPicture( QTableWidgetItem *item );
					/// <summary>
					/// 更新名字
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void updateName( QTableWidgetItem *item );
				private:
					/// <summary>
					/// 设置信号与槽的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void setConnections( );
					/// <summary>
					/// 更新当前已经选择的风格库
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void updateDbCombox( );
					/// <summary>
					/// 更新风格表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void updateStylesList( );
					/// <summary>
					/// 清空风格表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void clearStylesList( );
					/// <summary>
					/// 添加符号记录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void addSymbolRecord( SymbolRecord *pRecord );
					/// <summary>
					/// 添加色带记录
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void addColorRampRecord ( ColorRampRecord *pRecord );
					/// <summary>
					/// 画风格图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void drawPicture( EarthView::World::Spatial::Display::ISymbol *pSymbol, EarthView::World::Display::IPaintDevice &pixmap );
					/// <summary>
					/// 画色带图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void drawPicture( EarthView::World::Spatial::Display::CColorRamp *pColorRamp, QPixmap &pixmap );
				ev_private:
					CFrmStylesManager( EarthView::World::Core::CNameValuePairList* pList );
				private:
					QScopedPointer<CFrmStylesManagerHelper> helper;
				private:
					C_DISABLE_COPY( CFrmStylesManager );
				};
			}
		}
	}
}

#endif // FRMSTYLESMANAGER_H
