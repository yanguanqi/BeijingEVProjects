#ifndef MODEL_SCENE_FILE_H__
#define MODEL_SCENE_FILE_H__
#include "modeldatasourcetool_config.h"
#include "utility.h"
BEGIN_MODEL_TOOL_NAMESPACE

	// <summary>
	// 
	// </summary>
	class ModelScene : public CAllocatedObject
	{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ModelScene();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ModelScene(const String& scenefile);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		~ModelScene();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_void setSceneFile(const String& scenefile);
		
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_void setModelRootPath(const String& modelrootfolder);

		/// <summary>
		/// 初始化场景文件，在模型导出时有意义
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_bool initModelSceneFile();

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
		ev_bool addNode(const String& nodename, CSpatialPosition& position, CAxisAlignedBox& box, const ModelFileDataArr& modelFileDataArr);


		/// <summary>
		/// 读取下一个场景节点
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_bool nextNode(CSpatialPosition& position, CAxisAlignedBox& box, ModelFileDataArr& modelFileDataArr);

	protected:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns>返回meshfile名称</returns>
		/// <memo></memo>
		String saveModeFileData(const ModelFileDataArr& modelFileDataArr);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		String createModelFileFolder(const String& meshfile);
	private:
		String mSceneFile;
		String mModelRoolFolder;

		CXmlFile mSceneXMLFile;
		CXmlElement mSceneXMLFileRoot;
		CXmlElement mSceneXMLFileNodes;
	};

END_MODEL_TOOL_NAMESPACE

#endif