#ifndef GISDATENGINE_H_
#define GISDATENGINE_H_

#include "GISDataType.h"
namespace EarthView 
{
	namespace Xld 
	{
		class CGISDataEngine
		{
			/*ev_private:
				CGISDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/
		public:
			CGISDataEngine();
			~CGISDataEngine();
			static void Grd2Tiff(_in const EVString& srcFileName,_in const EVString& destFileName);
			static void Grd2Tiff(_in const EVString& srcFileName, _in const EVString& bacFileName, _in const EVString& destFileName);
			static GISDataType::CGrdData* ReadGrd(_in const EVString& srcFileName);
			static void SplitGrdFile(_in const EVString& srcFile, _in ev_uint64 rowCount, _in ev_uint64 columnCount, _out vector<GISDataType::CGrdData*> * pGrdDatas);
		};
	}
}
#endif

