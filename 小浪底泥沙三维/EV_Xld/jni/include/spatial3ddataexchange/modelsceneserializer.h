#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELSCENESERIALIZER_H_
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELSCENESERIALIZER_H_

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "mathengine/vector3.h"
#include "core/xml.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				class EV_Spatial3DDataExchange_DLL CModelSceneSerialzier : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CModelSceneSerialzier(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					CModelSceneSerialzier(const EVString& scenefile);
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CModelSceneSerialzier();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setModelRootPath(const EVString& modelrootfolder);

					/// <summary>
					/// 解析场景文件，在模型入库时有意义
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool parseModelSceneFile();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool saveModelSceneFile();

					/// <summary>
					/// 添加一个场景节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool addNode(const EVString& modelfilePath,ev_real32 lat,ev_real32 lon,ev_real32 alt,EarthView::World::Spatial::Math::CVector3 scale,ev_real32 rotateX,ev_real32 rotateY,ev_real32 rotateZ);
				private:
					EVString getFileName(const EVString& file);
					/// <summary>
					/// 初始化场景文件，在模型导出时有意义
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool initModelSceneFile();
				private:
					EVString mSceneFile;
					EVString mModelRoolFolder;

					EarthView::World::Core::CXmlFile mSceneXMLFile;
					EarthView::World::Core::CXmlElement mSceneXMLFileRoot;
					EarthView::World::Core::CXmlElement mSceneXMLFileNodes;
				};
			}
		}
	}
}

#endif