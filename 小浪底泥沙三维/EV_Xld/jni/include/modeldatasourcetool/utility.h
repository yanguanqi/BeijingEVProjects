#ifndef MODEL_TOOL_UTILITY_H___
#define MODEL_TOOL_UTILITY_H___
#include "modeldatasourcetool_config.h"

BEGIN_MODEL_TOOL_NAMESPACE

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	MemoryDataStreamPtr loadBinaryFile(const String& file);

/// <summary>
/// 
/// </summary>
/// <param name=""></param>
/// <returns></returns>
/// <memo></memo>
ev_bool saveBinaryFile(const String& fullName, const MemoryDataStreamPtr& pdata);


/// <summary>
/// 
/// </summary>
/// <param name=""></param>
/// <returns></returns>
/// <memo></memo>
ev_void splitFilePath(const String& file, String& filepath, String& filename);

/// <summary>
/// 
/// </summary>
/// <param name=""></param>
/// <returns></returns>
/// <memo></memo>
ev_bool creatFolder(const String& folder);


// <summary>
// 模型文件数据
// </summary>
typedef struct
{
	String					fileName;
	MemoryDataStreamPtr		fileData;
	MaterialResourceType    fileType;
}ModelFileData;
typedef vector<ModelFileData> ModelFileDataArr;


END_MODEL_TOOL_NAMESPACE
#endif
