#ifndef EV_CACHE_MODELFIELDS_DEFINE_H__
#define EV_CACHE_MODELFIELDS_DEFINE_H__
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace GeoDataset{
				class CFields;
			}}}}
namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_CACHEMANAGER_DLL CModelFieldsDefine
			{
			public:
				CModelFieldsDefine();
				~CModelFieldsDefine();

				/// <summary>
				/// 实体表结构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static const EarthView::World::Spatial::GeoDataset::CFields* entityTableFields();

				/// <summary>
				/// 实体表和模型表结构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static const EarthView::World::Spatial::GeoDataset::CFields* entityAndModelTableFields();

				/// <summary>
				/// 模型资源表结构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static const EarthView::World::Spatial::GeoDataset::CFields* modelResTableFields();

				/// <summary>
				/// model instance table 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static const EarthView::World::Spatial::GeoDataset::CFields* modelTemplateTableFields();

				/// <summary>
				/// 模板资源部结构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static const EarthView::World::Spatial::GeoDataset::CFields* modelTemplateResTableFields();

			protected:
			private:
				static void init();
				static EarthView::World::Spatial::GeoDataset::CFields msEntityTableFields;
				static EarthView::World::Spatial::GeoDataset::CFields msEntityAndModelTableFields;
				static EarthView::World::Spatial::GeoDataset::CFields msModelResTableFields;
				static EarthView::World::Spatial::GeoDataset::CFields msModelTemplateTableFields;
				static EarthView::World::Spatial::GeoDataset::CFields msModelTemplateResTableFields;
			};
		}}}
#endif