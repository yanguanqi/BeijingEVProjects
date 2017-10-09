#ifndef __MeshStream7zTool_H__
#define __MeshStream7zTool_H__

#include "tileutility/tileutilityexports.h"
#include "core/datastream.h"

namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
			enum MeshStreamItemType
			{
				MSIT_Mesh = 0,
				MSIT_Material,
				MSIT_Texture,
				MSIT_Skeleton,
				MSIT_Ani,
				MSIT_Extend
			};

			class EV_TILEUTILITY_DLL MeshStream : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				MeshStream(EarthView::World::Core::CNameValuePairList *pList){}
			public:
				MeshStream(){}
				virtual ~MeshStream(){}

				MeshStream clone();

				EarthView::World::Core::MemoryDataStreamPtr convertToMemoryDataStream();

				void resumeFromMemoryDataStream(const EarthView::World::Core::MemoryDataStreamPtr& mem);
			public:
				EarthView::World::Core::MemoryDataStreamPtr mMeshStream;
				EarthView::World::Core::MemoryDataStreamPtr mMaterialStream;
				EarthView::World::Core::MemoryDataStreamVector mTexStreamVec;
				EarthView::World::Core::MemoryDataStreamPtr mSkeletonStream;
				EarthView::World::Core::MemoryDataStreamPtr mAniStream;
				EarthView::World::Core::MemoryDataStreamPtr mExtendStream; //扩展的流
			};

			class EV_TILEUTILITY_DLL CMeshStreamPackageTool: public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMeshStreamPackageTool(_in EarthView::World::Core::CNameValuePairList *pList){}

			public:
				CMeshStreamPackageTool(){}

				virtual ~CMeshStreamPackageTool(){}

				static EarthView::World::Core::MemoryDataStreamPtr encodeMeshStreamTo7z(const MeshStream& meshStream);

				static EarthView::World::Core::MemoryDataStreamPtr encodeMeshStreamTo7z_ForBatch(const MeshStream& meshStream);

				static void clearMemForBatch();

				static MeshStream decodeMeshStreamFrom7z(const EarthView::World::Core::MemoryDataStreamPtr& package7z);
			};
		
            /** @} */
            /** @} */
        }
    }
}

#endif

