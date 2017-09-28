#ifndef __GEOSCENEQUERY_H__
#define __GEOSCENEQUERY_H__

#include "graphic/scenequery.h"
#include "spatial3dengine/spatial3denginecomdef.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Atlas;

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// 派生自RaySceneQueryResult，只用于提供一个函数传给给外部objID和component值,无其他用处;
			/// </summary>
			class EV_Spatial3DEngine_DLL RaySceneQueryResultSimple : public EarthView::World::Graphic::RaySceneQueryResult
			{
			public :
				RaySceneQueryResultSimple();
				RaySceneQueryResultSimple(RaySceneQueryResult *pParentRaySceneQueryResult);
				~RaySceneQueryResultSimple();

			private:
				struct internalInfo
				{
					ev_uint32 _objID;
					EarthView::World::Spatial3D::CComponent mComponent;

					internalInfo()
					{
						_objID = 0;
					}

					internalInfo(const internalInfo& rInfo)
					{
						if(this != &rInfo)
						{
							_objID = rInfo._objID;

							mComponent.mID = rInfo.mComponent.mID;
							mComponent.name = rInfo.mComponent.name;
							mComponent.mSubComponents = rInfo.mComponent.mSubComponents;
							mComponent.mOffsetMatrix = rInfo.mComponent.mOffsetMatrix;
							mComponent.mComponentUnits = rInfo.mComponent.mComponentUnits;
							mComponent.mModelType = rInfo.mComponent.mModelType;
							mComponent.mBounds = rInfo.mComponent.mBounds;
						}
					}

				};

				std::vector<internalInfo> mInternalInfos;

ev_private:
				RaySceneQueryResultSimple(_in EarthView::World::Core::CNameValuePairList *pList);

			public:

				/// <summary>
				/// 通过RaySceneQueryResult的指针去获取对应的objectID和component然后保存到vector中，供外部使用;
				/// </summary>
				/// <returns>返回false表示操作失败</returns>
				ev_bool queryObjIDAndComponent();

				/// <summary>
				/// 根据index获取objID和component
				/// </summary>
				/// <returns>返回false表示不存在</returns>
				ev_bool getComponent(_in ev_uint32 index, _out ev_uint32& objID, _out EarthView::World::Spatial3D::CComponent& component);

				ev_uint32 getComponentsSize()
				{
					return mInternalInfos.size();
				}

			private:
				RaySceneQueryResult *mpParent;

			};
		}
	}
}




#endif