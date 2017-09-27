// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/09/11		赵玻恩		类定义
//
#ifndef _KMLTREE_INCLUDE__
#define _KMLTREE_INCLUDE__

#include <QWidget>
#include "qtlibs/kmltree_global.h"
#include "core/global.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CKmlLayer;
			}
		}
	}
}
// using namespace EarthView::World::Spatial3D::Atlas;
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				class CKmlTreeManager;
			}
		}
		namespace Spatial
		{
			namespace Kml
			{
				class CGeoObjectExtension;
				class CKmlDocument;

			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CKmlLayer;
			}
		}
		namespace Desktop
		{
			namespace QT
			{
				class KmlTreeHelper;
				
				// using namespace EarthView::World::Desktop::QT;
				class KMLTREE_EXPORT KmlTree : public QWidget
				{
				public:
					KmlTree(QWidget* parent = 0);
					~KmlTree();
					void addKmlObject(_nofree EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobj,EarthView::World::Spatial::Kml::CKmlDocument* parentDoc);   
					void removeKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobj,EarthView::World::Spatial::Kml::CKmlDocument* parentDoc);
					void updateKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobj,EarthView::World::Spatial::Kml::CKmlDocument* parentDoc);
					//EarthView::World::Spatial::Kml::CGeoObjectExtension* findGeoObject(EVString name);
					EarthView::World::Spatial3D::Atlas::CKmlLayer* getCurrentLayer();
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* getKmlManager();
				protected:
					QScopedPointer<KmlTreeHelper> _helper;
				public:
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* m_pKmlManager;
					void showKmlTree(EarthView::World::Spatial3D::Atlas::CKmlLayer* layer);
				};
			}
		}
	}
}

#endif // _KMLTREE_INCLUDE__
