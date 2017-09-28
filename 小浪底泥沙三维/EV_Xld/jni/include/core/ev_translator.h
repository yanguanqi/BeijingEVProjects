#ifndef EV_CORE_TRANSLATOR_H
#define EV_CORE_TRANSLATOR_H

#include <core/global.h>
#include <core/multibytestring.h>
#include <core/ev_string.h>

using namespace std;

// #define EV_NO_TRANSLATOR 

#define EVTranslatorManager \
	EarthView::World::Core::CEvTranslatorManager::getSingletonPtr()

#ifndef EV_NO_TRANSLATOR
	#define EVTR(sourceText) EVTranslatorManager->translate(sourceText)
#else
	#define EVTR(sourceText) EVString(sourceText)
#endif

namespace EarthView
{
	namespace World 
	{
		namespace Core 
		{
			class EV_CORE_DLL CEvTranslator : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CEvTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				enum EvTranslatorFiedType { Contexts = 0x2f, Hashes = 0x42, Messages = 0x69, NumerusRules = 0x88 };

				enum EvTranslatorMsgTag { Tag_End = 1, Tag_SourceText16, Tag_Translation, Tag_Context16, Tag_Obsolete1,
					Tag_SourceText, Tag_Context, Tag_Comment, Tag_Obsolete2 };

				enum EvTranslatorOpcode {
					EV_EQ          = 0x01,
					EV_LT          = 0x02,
					EV_LEQ         = 0x03,
					EV_BETWEEN     = 0x04,

					EV_NOT         = 0x08,
					EV_MOD_10      = 0x10,
					EV_MOD_100     = 0x20,
					EV_LEAD_1000   = 0x40,

					EV_AND         = 0xFD,
					EV_OR          = 0xFE,
					EV_NEWRULE     = 0xFF,

					EV_OP_MASK     = 0x07,

					EV_NEQ         = EV_NOT | EV_EQ,
					EV_GT          = EV_NOT | EV_LEQ,
					EV_GEQ         = EV_NOT | EV_LT,
					EV_NOT_BETWEEN = EV_NOT | EV_BETWEEN
				};

				CEvTranslator();
				virtual ~CEvTranslator();

				ev_bool isEmpty() const;

				ev_bool load(const EVString & filename);
				ev_bool load(const EVString & filename, const EVString & directory, const EVString & suffix="");

				virtual EVString translate(const ev_char *sourceText, const ev_char *context = 0, const ev_char *comment = 0) const;
				EVString translate(const ev_char *sourceText, const ev_char *context, const ev_char *comment, ev_int32 n) const;

			protected:
				ev_bool load(ev_byte *data, ev_uint64 len);

			private:
				// for mmap'ed files, this is what needs to be unmapped.
				ev_byte *unmapPointer; 
				ev_uint64 unmapLength;

				// for squeezed but non-file data, this is what needs to be deleted
				const ev_byte *messageArray;  
				const ev_byte *offsetArray;
				const ev_byte *contextArray;
				const ev_byte *numerusRulesArray;
				ev_uint32 messageLength;
				ev_uint32 offsetLength;
				ev_uint32 contextLength;
				ev_uint32 numerusRulesLength;

			private:
				C_DISABLE_COPY(CEvTranslator)
			};

			class EV_CORE_DLL CEvTranslatorListener : public EarthView::World::Core::CAllocatedObject
            {
			ev_private:
				CEvTranslatorListener(_in EarthView::World::Core::CNameValuePairList *pList) {}

            public:
                CEvTranslatorListener() {}
                virtual ~CEvTranslatorListener() {}
				virtual ev_void changeLanguage() {}
            };

			class EV_CORE_DLL CEvTranslatorManager : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CEvTranslatorManager(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CEvTranslatorManager();
				virtual ~CEvTranslatorManager();

				enum EvLanguageType	{EV_ENGLISH = 0, EV_CHINESE};
				
				ev_void installTranslator(CEvTranslator* pTranslator);
				ev_void removeTranslator(CEvTranslator* pTranslator);

				ev_void setCurrentLanguage(EvLanguageType currLanguage);

				EvLanguageType getCurrentLanguage();

				// Returns a translated version of sourceText, optionally based on a comment string; 
				// otherwise returns sourceText itself if no appropriate translated string is available.
				EVString translate(const ev_char *sourceText, const ev_char *context = 0, const ev_char *comment = 0);

				static CEvTranslatorManager* getSingletonPtr();
				static ev_void releaseSingletonPtr();
				
                void addTranslatorListener(CEvTranslatorListener *newListener);
                void removeTranslatorListener(CEvTranslatorListener *oldListener);


			private:
				void changeTranslator();

			private:
				static CEvTranslatorManager* msSingleton;
				list<CEvTranslator*> mTranslators;				
				EarthView::World::Core::CRecursiveMutex mTranslatorListenerMutex;
				set<CEvTranslatorListener*> mTranslatorListeners;
				set<CEvTranslatorListener*> mRemovedTranslatorListeners;
				
				EvLanguageType mCurrentLanguage;
			};
		};
	};
};

#endif // EV_CORE_TRANSLATOR_H