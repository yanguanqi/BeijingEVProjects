#ifndef _PROJECTMANAGERADAPTOR_INCLUDE__
#define _PROJECTMANAGERADAPTOR_INCLUDE__

#include "core/stringdefines.h"

namespace EarthView{namespace World{namespace FrameWorkProxy{
	namespace ProjectManager{

class ProjectManagerAdaptor
{
public:
	// 因为要自动化封装，所以宏不能给值。
	enum ErrorCode
	{
		Success = 0,				// 成功
		FileNotExist,				// 文件不存在
		UndefinedSymbol,			// 自定义符号未解析
		UndefinedMapParam,			// 地图参数未解析
		UndefinedSymbolMapParam,	// 自定义符号和地图参数未解析
		UndefinedSceneParam,		// 场景参数未解析
		UndefinedSymbolParam,		// 自定义符号和参数未解析
		UndefinedMapSceneParam,		// 地图参数和场景参数未解析
		UndefinedSymbolMapSceneParam, // 自定义符号、地图参数和场景参数未解析
		DataSourceNotExist,			// 数据源不存在
		UnknownError				// 未知错误
	};

	ProjectManagerAdaptor();
	~ProjectManagerAdaptor();

	ProjectManagerAdaptor::ErrorCode openProject(const EVString& fileName);

	static ProjectManagerAdaptor* getInstance();

protected:

	static ProjectManagerAdaptor* instance;
};

}}}}

#endif // _PROJECTMANAGERADAPTOR_INCLUDE__

