#ifndef USINGPYTHON_H_
#define USINGPYTHON_H_
#include "dataanalyst/dataanalystenum.h"
#include "core/core_api.h"
#include "spatialinterface/ifields.h"
struct _object;
typedef _object PyObject;
namespace EarthView{
	namespace World{
		namespace Spatial{
class  EV_DataAnalyst_DLL CPythonUtil: public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CPythonUtil(EarthView::World::Core::CNameValuePairList *pList);
public:
	CPythonUtil();
	~CPythonUtil();
	//将预定义代码(如果有)和表达式合并成setCode支持的格式
	static EVString makeCode(const EVString& preCode, const EVString& expression);
	//获取传入代码中的预定义代码块和表达式，如果没有预定义代码块，返回false，否则返回true
	static ev_bool  parseCode(_in const EVString& code, _out EVString& preCode, _out EVString& expression);   
			
	ev_void setCode(const EVString& pythoncode, const EarthView::World::Spatial::GeoDataset::IFields* pFields = NULL);    //预定义代码
	ev_bool load();
	ev_void unload();

	EarthView::World::Core::CStringArray getParamName();

	ev_bool exec(
		EarthView::World::Core::CVariant* pValues,
		int count ,
		EarthView::World::Core::CVariant& retValue,
		EarthView::World::Core::CVariant::EVDataType returnType);

	EVString getErrorMsg();

private:
	void log_python_exception();
	EarthView::World::Core::CStringArray mvParamName;
	EVString mstrErrorMsg;

	EVString mstrPreCode;
	EVString mstrCommand;
	ev_bool  mbCommandValid;
	ev_bool  mbCodeValid;

	PyObject * mpDict;
	PyObject * mpCommand;
	PyObject * mpCode;
};
}}}
#endif
