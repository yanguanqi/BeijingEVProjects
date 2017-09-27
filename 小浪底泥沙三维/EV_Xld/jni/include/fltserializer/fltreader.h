#ifndef EV_FLTREADER_H
#define EV_FLTREADER_H

#include "core/datastream.h"
#include "fltserializer/config.h"
#include "fltserializer/fltdocument.h"
#include "fltserializer/fltcustomdef.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace FLT
			{
				class EV_FLTSERIALIZER_DLL CFltReader : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltReader(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltReader();
					~CFltReader();
					bool loadFlt(const EVString& fltPath,CFltDocument& document);
				protected:
					EarthView::World::Core::DataStreamPtr toStream( const EVString& file );
				private:
					bool toFltDocument(EarthView::World::Core::DataStreamPtr dataPtr,CFltDocument& document);
					void optimizeFltFace( CFltFace* face);
					ev_void iterateFltNode(CFltDocument& document,CFltNode* node,EarthView::World::Spatial::Math::CMatrix4 parentMatrix,ev_vector<CFltNode*>& removeNodeList);
				};
			}
		}
	}
}
#endif