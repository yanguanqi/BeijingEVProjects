//Created by EagleFileGenerator
#ifndef __TILEATTACHMENT_H__
#define __TILEATTACHMENT_H__

#include "tileutility/tileutilityexports.h"
#include "mathengine/ev_math.h"
#include "core/memoryallocatedobject.h"
#include "core/sharedptr.h"
//#include "core/sharedptr.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class ITileAttachment;
			class EV_TILEUTILITY_DLL ITileAttachmentPtr: public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<ITileAttachment>
			{
			public:		
				ITileAttachmentPtr(ITileAttachment* instance):EarthView::World::Core::CSharedPtr<ITileAttachment>(instance)
				{}
				ITileAttachmentPtr():EarthView::World::Core::CSharedPtr<ITileAttachment>()
				{}
				~ITileAttachmentPtr()  /// 声明为非虚,禁止被继承
				{}
ev_private:
				ITileAttachmentPtr(Core::CNameValuePairList* pList);
			};

			/// <summary> 瓦片附属物 </summary>
			class EV_TILEUTILITY_DLL ITileAttachment:public EarthView::World::Core::CBaseObject
			{
			public:
				class EV_TILEUTILITY_DLL LodParam:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>瓦片级别</summary>
					ev_int32 tileLevel;
					/// <summary>相机级别</summary>
					ev_int32 cameraLevel;
					/// <summary>将会显示的子瓦片的数量</summary>
					ev_size_t tileChildCount;
					///// <summary>相机是否在地下</summary>
					//ev_bool isUnderGround;

					LodParam(ev_int32 level, ev_int32 camLevel, ev_size_t childCount)
						:tileLevel(level)
						,cameraLevel(camLevel)
						,tileChildCount(childCount)
					{}
					
					~LodParam()
					{}
ev_private:
					LodParam(EarthView::World::Core::CNameValuePairList* pList)
					{}
				};
				//ITileAttachment(ev_bool isHoldedByQuadNode)
				//	:mIsHoldedByQuadNode(isHoldedByQuadNode) { }
				ITileAttachment() { }
				virtual ~ITileAttachment();
ev_private:
				ITileAttachment(EarthView::World::Core::CNameValuePairList* pList);

ev_private:

				virtual ev_bool notifyFrameTime(Real timeSpan);
				virtual void add2Listener(ITileAttachmentPtr& attachmentPtr);

			public:

				/// <summary>瓦片被显示(主线程)</summary>
				virtual void onTileShown(const LodParam& param);

				/// <summary>瓦片被隐藏(主线程)</summary>
				virtual void onTileHid(const LodParam& param);

				/// <summary>从瓦片解除绑定(主线程),
				/// 在这个函数被调用后，附属物不再受瓦片控制。
				/// 建议在其中做一些必要的清理工作</summary>
				virtual void onDetachFromTile();

				/// <summary>瓦片被销毁(主线程)，
				/// 此时瓦片一定是不可见的。</summary>
				virtual void onTileDestroyed();
			//	/// <summary>从绑定到瓦片</summary>
			//	virtual void onAttachToTile(ev_void* parentTile);
			//	///// <summary>是否由四叉树节点析构<summary>
			//	//ev_bool isHoldedByQuadNode() const
			//	//{	return mIsHoldedByQuadNode;  }
			//protected:
			//	ev_void* mParentTile;
			////	ev_bool mIsHoldedByQuadNode;
			};
		}
	}
}
#endif // __TILEATTACHMENT_H__
