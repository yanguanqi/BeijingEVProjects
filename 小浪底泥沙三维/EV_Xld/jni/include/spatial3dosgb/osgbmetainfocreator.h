#ifndef EARTHVIEW_WORLD_SPATIAL3D_OSGBMETAINFOCREATOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_OSGBMETAINFOCREATOR_H

#include "spatial3dosgb/spatial3dosgbconfig.h"
#include "core/stdheaders.h"
#include "core/stringdefines.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
		
			class EV_Spatial3D_OSGB_DLL COsgbMetaInfoCreator:public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				COsgbMetaInfoCreator(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				class EV_Spatial3D_OSGB_DLL InfoListener  : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					InfoListener(_in EarthView::World::Core::CNameValuePairList *pList){};
				public:
					InfoListener(){};

					virtual ~InfoListener(){};
					virtual ev_void printInfo(const EVString& info){printf("%s", info.getString());};
					virtual ev_void printProcess(ev_int32 process){printf("%d/100", process);};
					virtual ev_void setRange(int min,int max){};
				protected:
				private:
				};

				public:
					COsgbMetaInfoCreator();

					~COsgbMetaInfoCreator();

					/// <summary>
					/// 生成osgb的元数据信息
					/// </summary>
					/// <param name="">osgb源数据路径</param>
					/// <returns></returns>
					ev_bool generatorMetaInfo(const EVString& srcPath);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addInfoListener(EarthView::World::Spatial3D::COsgbMetaInfoCreator::InfoListener* pListener);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeInfoListener(EarthView::World::Spatial3D::COsgbMetaInfoCreator::InfoListener* pListener);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void printInfo(const EVString& info);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void printProcess(ev_int32 process);

					//ev_void setRange(int min,int max);

					ev_void stopGeneratorMeta();

			protected:
			private:
				list<EarthView::World::Spatial3D::COsgbMetaInfoCreator::InfoListener*> mInfoListenerList;
				ev_bool mbStop;
			};
		
		}
	}
}
#endif