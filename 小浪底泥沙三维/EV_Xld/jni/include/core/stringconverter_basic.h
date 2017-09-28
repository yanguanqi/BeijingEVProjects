#pragma once
#include "core/stringvector.h"
#include "core/ev_time.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            /****
            @remarks
                The code for converting values to and from strings is here as a separate
                class to avoid coupling EVString to other datatypes (and vice-versa) which reduces
                compilation dependency: important given how often the core types are used.
            @par
                This class is mainly used for parsing settings in text files. External applications
                can also use it to interface with classes which use the CStringInterface template
                class.
            @par
                The EVString formats of each of the major types is listed with the methods. The basic types
                like ev_int32 and ev_real64 just use the underlying C runtime library atof and atoi family methods.
            @author
                Steve Streeting
            ****/
            class EV_CORE_DLL CStringConverterBasic : public CBaseObject
            {
            ev_private:
                CStringConverterBasic(_in CNameValuePairList *pList);
            public:
                CStringConverterBasic();
                /**** Converts a ev_real64 to a EVString. ****/
                static EVString toString(ev_real64 val);
                static EVString toString(ev_real64 val, ev_uint16 precision);
                static EVString toString(ev_real64 val, ev_uint16 precision, ev_uint16 width);
                static EVString toString(ev_real64 val, ev_uint16 precision, ev_uint16 width, ev_char fill);
                static EVString toString(ev_real64 val, ev_uint16 precision,
                                       ev_uint16 width, ev_char fill ,
                                       std::ios::fmtflags flags);
                /**** Converts an ev_int32 to a EVString. ****/
                static EVString toString(ev_int32 val);
                static EVString toString(ev_int32 val, ev_uint16 width);
                static EVString toString(ev_int32 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_int32 val, ev_uint16 width,
                                       ev_char fill, std::ios::fmtflags flags);
                ////zxt updatefor v1.8
#if EV_PLATFORM != EV_PLATFORM_NACL &&  ( EV_ARCH_TYPE == EV_ARCHITECTURE_64 || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS )
//
//				/**** Converts an ev_uint32 to a EVString. ****/
//                static EVString toString(ev_uint32 val,
//                                       ev_uint16 width = 0, ev_char fill = ' ', std::ios::fmtflags flags = std::ios::fmtflags(0));
// 
//				/**** Converts a ev_size_t to a EVString. ****/
//                static EVString toString(ev_size_t val,
//                                       ev_uint16 width = 0, ev_char fill = ' ', std::ios::fmtflags flag = std::ios::fmtflags(0));
//
//#if EV_COMPILER == EV_COMPILER_MSVC
//                /**** Converts an ev_uint32 to a EVString. ****/
//                static EVString toString(ev_uint32 val,
//                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
//#endif
				static EVString toString(ev_uint32 val);
                static EVString toString(ev_uint32 val, ev_uint16 width);
                static EVString toString(ev_uint32 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_uint32 val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);

				static EVString toString(ev_size_t val);
                static EVString toString(ev_size_t val, ev_uint16 width);
                static EVString toString(ev_size_t val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_size_t val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);

#else
#ifdef EV_ARCH_AARCH64
                 static EVString toString(ev_size_t val);
                 static EVString toString(ev_size_t val, ev_uint16 width);
                 static EVString toString(ev_size_t val, ev_uint16 width, ev_char fill);

                 static EVString toString(ev_size_t val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
#endif
                /***** Converts a ev_size_t to a EVString. ****/
                static EVString toString(ev_uint64 val);
                static EVString toString(ev_uint64 val, ev_uint16 width);
                static EVString toString(ev_uint64 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_uint64 val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
                /****** Converts an ev_uint32 to a EVString. ****/
                static EVString toString(ev_uint32 val);
                static EVString toString(ev_uint32 val, ev_uint16 width);
                static EVString toString(ev_uint32 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_uint32 val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
#endif
                /****** Converts a boolean to a EVString.
                @param yesNo If set to true, result is 'yes' or 'no' instead of 'true' or 'false'
                *****/
                static EVString toString(ev_bool val);
                static EVString toString(ev_bool val, ev_bool yesNo);
                /****** Converts a StringVector to a string.
                @remarks
                    Strings must not contain spaces since space is used as a delimiter in
                    the output.
                *****/
                static EVString toString(const StringVector &val);

				static EVString toString(const CCoreTime &val);
                /****** Converts a EVString to a ev_real64.
                @returns
                    0.0 if the value could not be parsed, otherwise the ev_real64 version of the EVString.
                *****/
                static ev_real64 parseReal(const EVString &val);
                static ev_real64 parseReal(const EVString &val, ev_real64 defaultValue);
                /****** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                *****/
                static ev_int32 parseInt(const EVString &val);
                static ev_int32 parseInt(const EVString &val, ev_int32 defaultValue);
                /****** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                *****/
                static ev_uint32 parseUnsignedInt(const EVString &val);
                static ev_uint32 parseUnsignedInt(const EVString &val, ev_uint32 defaultValue);
                /****** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                *****/
                static ev_int32 parseLong(const EVString &val);
                static ev_int32 parseLong(const EVString &val, ev_int32 defaultValue);
                /****** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                *****/
                static ev_uint32 parseUnsignedLong(const EVString &val);
                static ev_uint32 parseUnsignedLong(const EVString &val, ev_uint32 defaultValue);
                /****** Converts a EVString to a boolean.
                @remarks
                    Returns true if case-insensitive match of the start of the string
                	matches "true", "yes" or "1", false otherwise.
                *****/
                static ev_bool parseBool(const EVString &val);
                static ev_bool parseBool(const EVString &val, ev_bool defaultValue);
                /****** Pareses a StringVector from a string.
                @remarks
                    Strings must not contain spaces since space is used as a delimiter in
                    the output.
                *****/

                static StringVector parseStringVector(const EVString &val);
                /****** Checks the EVString is a valid number value. *****/
                static ev_bool isNumber(const EVString &val);

				static CCoreTime parseDateTime(const EVString &val);
				static CCoreTime parseDateTime(const EVString &val, const CCoreTime &defaultValue);

				static EVString urlEncode(const EVString& str);
				static EVString urlDecode(const EVString& str);
            };
        }
    }
}
