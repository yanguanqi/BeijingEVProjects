#ifndef _FEATURE_USERDATA_H_
#define _FEATURE_USERDATA_H_

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <graphic/movableobject.h>

#include "geometry3d_config.h"
#include "geometry3d/iglobelayer.h"
#include "spatialdatabase/propertyset.h"



namespace EarthView
{
    namespace World
    {
		namespace Spatial
		{
			namespace GeoDataset
			{
				class CPropertySet;
			}
			namespace Kml
			{
				class CGeoObjectExtension;
			}
		}
		
        namespace Spatial3D
        {

			/// <summary>
			/// 用户数据记录
			/// </summary>
            class EV_GEOMETRY3D_DLL CFeatureUserData : public EarthView::World::Graphic::CMovableObject::CUserData
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                CFeatureUserData();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ~CFeatureUserData();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                CFeatureUserData(EarthView::World::Core::CNameValuePairList* pList);

            public:
				/// <summary>
				/// 复制用户数据
				/// </summary>
                virtual _extfree EarthView::World::Graphic::CMovableObject::CUserData* clone();
            public:
				/// <summary>
				/// 所在图层
				/// </summary>
                EarthView::World::Spatial3D::Atlas::IGlobeLayer* OwnerLayer;
				/// <summary>
				/// 记录IDs
				/// </summary>
                EarthView::World::Core::IntVector IDs;
ev_private:
				EarthView::World::Spatial::GeoDataset::CPropertySet PropSet;

            };

			class EV_GEOMETRY3D_DLL CKmlFeatureUserData : public EarthView::World::Spatial3D::CFeatureUserData
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CKmlFeatureUserData();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CKmlFeatureUserData();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlFeatureUserData(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 复制用户数据
				/// </summary>
				virtual _extfree EarthView::World::Graphic::CMovableObject::CUserData* clone();
			public:
				EarthView::World::Spatial::Kml::CGeoObjectExtension* pGeoObjectExtension;		


			}; 
        }
    }
}

#endif
