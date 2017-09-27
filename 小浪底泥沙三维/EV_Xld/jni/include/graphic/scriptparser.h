#ifndef __SCRIPTPARSER_H_
#define __SCRIPTPARSER_H_
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
#include "scriptcompiler.h"
#include "scriptlexer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class EV_GRAPHIC_DLL CScriptParser : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CScriptParser(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptParser();
                virtual ~CScriptParser() {}
                EarthView::World::Graphic::ConcreteNodeListPtr parse(_in const EarthView::World::Graphic::ScriptTokenListPtr &tokens);
                EarthView::World::Graphic::ConcreteNodeListPtr parseChunk(_in const EarthView::World::Graphic::ScriptTokenListPtr &tokens);
            private:
                ScriptToken *getToken(_inout ScriptTokenList::iterator i, _inout ScriptTokenList::iterator end, _in ev_int32 offset);
                ScriptTokenList::iterator skipNewlines(_inout ScriptTokenList::iterator i, _inout ScriptTokenList::iterator end);
            };
        }
    }
}

#endif

