#ifndef _Jstring_Utility_H__
#define _Jstring_Utility_H__
#include <jni.h>
#include <string>
#include "core/multibytestring.h"
#include "core/unicodestring.h"

#ifdef EV_OS_WIN
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			EXPORT std::string& to_stdstring(JNIEnv* env, jstring jString, std::string& outString);

			EXPORT ev_string& to_stdstring(JNIEnv* env, jstring jString, ev_string& outString);

			EXPORT std::string& to_stdstringUTF8(JNIEnv* env, jstring jString, std::string& outString);

			EXPORT std::wstring& to_stdwstring(JNIEnv* env, jstring jString, std::wstring& outString);

			EXPORT ev_wstring& to_stdwstring(JNIEnv* env, jstring jString, ev_wstring& outString);

			EXPORT char* to_cstring(JNIEnv* env, jstring jString, char* outString);

			EXPORT jstring to_jstring(JNIEnv* env, const std::string& str);

			EXPORT jstring to_jstring(JNIEnv* env, const ev_string& str);

			EXPORT jstring to_jstring(JNIEnv* env, const char*);

			EXPORT jstring to_jstring(JNIEnv* env, const std::wstring&);

			EXPORT jstring to_jstring(JNIEnv* env, const ev_wstring&);

			EXPORT jsize getStringLength(JNIEnv* env, const jstring& jString);

			EXPORT ev_uint64 to_int64(JNIEnv* env, const jstring& jString);

			EXPORT jstring to_jstring(JNIEnv* env, const ev_uint64& ll);
		}
	}
}

#endif
