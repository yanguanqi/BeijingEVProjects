#pragma once
#include "graphic_config.h"
#include <mathengine/ev_math.h>
#include <mathengine/matrix3.h>
#include <mathengine/matrix4.h>
#include <mathengine/quaternion.h>
#include <mathengine/vector2.h>
#include <mathengine/vector3.h>
#include <mathengine/vector4.h>
#include "colourvalue.h"
#include <core/platform.h>
#include <core/stringvector.h>
#include <core/ev_time.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
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
                like ev_int32 and Real just use the underlying C runtime library atof and atoi family methods,
                however custom types like EarthView::World::Spatial::Math::CVector3, CColourValue and EarthView::World::Spatial::Math::CMatrix4 are also supported by this class
            @author
                Steve Streeting
            ****/
            class EV_GRAPHIC_DLL CStringConverter : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CStringConverter(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CStringConverter();

				                /***** Converts a ev_real64 to a EVString. ****/
                static EVString toString(ev_real64 val);
                static EVString toString(ev_real64 val, ev_uint16 precision);
                static EVString toString(ev_real64 val, ev_uint16 precision, ev_uint16 width);
                static EVString toString(ev_real64 val, ev_uint16 precision, ev_uint16 width, ev_char fill);
                static EVString toString(ev_real64 val, ev_uint16 precision,
                                       ev_uint16 width, ev_char fill ,
                                       std::ios::fmtflags flags);
                /***** Converts an ev_int32 to a EVString. ****/
                static EVString toString(ev_int32 val);
                static EVString toString(ev_int32 val, ev_uint16 width);
                static EVString toString(ev_int32 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_int32 val, ev_uint16 width,
                                       ev_char fill, std::ios::fmtflags flags);

                


         
#if EV_PLATFORM != EV_PLATFORM_NACL &&  ( EV_ARCH_TYPE == EV_ARCHITECTURE_64 || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS )
                /***** Converts an ev_uint32 to a EVString. ****/
//                static EVString toString(ev_uint32 val,
//                                       ev_uint16 width = 0, ev_char fill = ' ', std::ios::fmtflags flags = std::ios::fmtflags(0));
//
//                /***** Converts a ev_size_t to a EVString. ****/
//                static EVString toString(ev_size_t val,
//                                       ev_uint16 width = 0, ev_char fill = ' ', std::ios::fmtflags flag = std::ios::fmtflags(0));
//#if EV_COMPILER == EV_COMPILER_MSVC
//                /***** Converts an ev_uint32 to a EVString. ****/
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
                /***** Converts an ev_uint32 to a EVString. ****/
                static EVString toString(ev_uint32 val);
                static EVString toString(ev_uint32 val, ev_uint16 width);
                static EVString toString(ev_uint32 val, ev_uint16 width, ev_char fill);
                static EVString toString(ev_uint32 val,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
#endif
                /***** Converts a boolean to a EVString.
                @param yesNo If set to true, result is 'yes' or 'no' instead of 'true' or 'false'
                ****/
                static EVString toString(ev_bool val);
                static EVString toString(ev_bool val, ev_bool yesNo);
                /***** Converts a EarthView::World::Core::StringVector to a string.
                @remarks
                    Strings must not contain spaces since space is used as a delimiter in
                    the output.
                ****/
                static EVString toString(const EarthView::World::Core::StringVector &val);

				static EVString toString(const EarthView::World::Core::CCoreTime &val);
                /***** Converts a EVString to a ev_real64.
                @returns
                    0.0 if the value could not be parsed, otherwise the ev_real64 version of the EVString.
                ****/
                static ev_real64 parseReal(const EVString &val);
                static ev_real64 parseReal(const EVString &val, ev_real64 defaultValue);
                /***** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                ****/
                static ev_int32 parseInt(const EVString &val);
                static ev_int32 parseInt(const EVString &val, ev_int32 defaultValue);
                /***** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                ****/
                static ev_uint32 parseUnsignedInt(const EVString &val);
                static ev_uint32 parseUnsignedInt(const EVString &val, ev_uint32 defaultValue);
                /***** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                ****/
                static ev_int32 parseLong(const EVString &val);
                static ev_int32 parseLong(const EVString &val, ev_int32 defaultValue);
                /***** Converts a EVString to a whole number.
                @returns
                    0.0 if the value could not be parsed, otherwise the numeric version of the EVString.
                ****/
                static ev_uint32 parseUnsignedLong(const EVString &val);
                static ev_uint32 parseUnsignedLong(const EVString &val, ev_uint32 defaultValue);
                /***** Converts a EVString to a boolean.
                @remarks
                    Returns true if case-insensitive match of the start of the string
                	matches "true", "yes" or "1", false otherwise.
                ****/
                static ev_bool parseBool(const EVString &val);
                static ev_bool parseBool(const EVString &val, ev_bool defaultValue);
                /***** Pareses a EarthView::World::Core::StringVector from a string.
                @remarks
                    Strings must not contain spaces since space is used as a delimiter in
                    the output.
                ****/
                static EarthView::World::Core::StringVector parseStringVector(const EVString &val);
                /***** Checks the EVString is a valid number value. ****/
                static ev_bool isNumber(const EVString &val);

				static EarthView::World::Core::CCoreTime parseDateTime(const EVString &val);
				static EarthView::World::Core::CCoreTime parseDateTime(const EVString &val, const EarthView::World::Core::CCoreTime &defaultValue);


                /***** Converts a CRadian to a EVString. ****/
                static EVString toString(EarthView::World::Spatial::Math::CRadian val);
                static EVString toString(EarthView::World::Spatial::Math::CRadian val, ev_uint16 precision);
                static EVString toString(EarthView::World::Spatial::Math::CRadian val, ev_uint16 precision, ev_uint16 width);
                static EVString toString(EarthView::World::Spatial::Math::CRadian val, ev_uint16 precision, ev_uint16 width, ev_char fill);
                static EVString toString(EarthView::World::Spatial::Math::CRadian val, ev_uint16 precision,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags );
                /***** Converts a CDegree to a EVString. ****/
                static EVString toString(EarthView::World::Spatial::Math::CDegree  val);
				static EVString toString(EarthView::World::Spatial::Math::CDegree  val, ev_uint16 precision);
				static EVString toString(EarthView::World::Spatial::Math::CDegree  val, ev_uint16 precision, ev_uint16 width);
                static EVString toString(EarthView::World::Spatial::Math::CDegree  val, ev_uint16 precision, ev_uint16 width, ev_char fill);
                static EVString toString(EarthView::World::Spatial::Math::CDegree  val, ev_uint16 precision,
                                       ev_uint16 width, ev_char fill, std::ios::fmtflags flags);
                /***** Converts a EarthView::World::Spatial::Math::CVector2 to a EVString.
                @remarks
                    Format is "x y" (i.e. 2x Real values, space delimited)
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CVector2 &val);
                /***** Converts a EarthView::World::Spatial::Math::CVector3 to a EVString.
                @remarks
                    Format is "x y z" (i.e. 3x Real values, space delimited)
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CVector3 &val);
                /***** Converts a CVector4 to a EVString.
                @remarks
                    Format is "x y z w" (i.e. 4x Real values, space delimited)
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CVector4 &val);
                /***** Converts a EarthView::World::Spatial::Math::CMatrix3 to a EVString.
                @remarks
                    Format is "00 01 02 10 11 12 20 21 22" where '01' means row 0 column 1 etc.
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CMatrix3 &val);
                /***** Converts a EarthView::World::Spatial::Math::CMatrix4 to a EVString.
                @remarks
                    Format is "00 01 02 03 10 11 12 13 20 21 22 23 30 31 32 33" where
                    '01' means row 0 column 1 etc.
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CMatrix4 &val);
                /***** Converts a EarthView::World::Spatial::Math::CQuaternion to a EVString.
                @remarks
                    Format is "w x y z" (i.e. 4x Real values, space delimited)
                ****/
                static EVString toString(const EarthView::World::Spatial::Math::CQuaternion &val);
                /***** Converts a CColourValue to a EVString.
                @remarks
                    Format is "r g b a" (i.e. 4x Real values, space delimited).
                ****/
                static EVString toString(const CColourValue &val);
                /***** Converts a EVString to a CAngle.
                @returns
                    0.0 if the value could not be parsed, otherwise the CAngle version of the EVString.
                ****/
                static EarthView::World::Spatial::Math::CRadian parseAngle(const EVString &val);
                static EarthView::World::Spatial::Math::CRadian parseAngle(const EVString &val, EarthView::World::Spatial::Math::CRadian defaultValue);
                /***** Parses a EarthView::World::Spatial::Math::CVector2 out of a EVString.
                @remarks
                    Format is "x y" ie. 2 Real components, space delimited. Failure to parse returns
                    EarthView::World::Spatial::Math::CVector2::ZERO.
                ****/
                static EarthView::World::Spatial::Math::CVector2 parseVector2(const EVString &val);
                static EarthView::World::Spatial::Math::CVector2 parseVector2(const EVString &val, const EarthView::World::Spatial::Math::CVector2 &defaultValue);
                /***** Parses a EarthView::World::Spatial::Math::CVector3 out of a EVString.
                @remarks
                    Format is "x y z" ie. 3 Real components, space delimited. Failure to parse returns
                    EarthView::World::Spatial::Math::CVector3::ZERO.
                ****/
                static EarthView::World::Spatial::Math::CVector3 parseVector3(const EVString &val);
                static EarthView::World::Spatial::Math::CVector3 parseVector3(const EVString &val, const EarthView::World::Spatial::Math::CVector3 &defaultValue);
                /***** Parses a CVector4 out of a EVString.
                @remarks
                    Format is "x y z w" ie. 4 Real components, space delimited. Failure to parse returns
                    CVector4::ZERO.
                ****/
                static EarthView::World::Spatial::Math::CVector4 parseVector4(const EVString &val);
                static EarthView::World::Spatial::Math::CVector4 parseVector4(const EVString &val, const EarthView::World::Spatial::Math::CVector4 &defaultValue);
                /***** Parses a EarthView::World::Spatial::Math::CMatrix3 out of a EVString.
                @remarks
                    Format is "00 01 02 10 11 12 20 21 22" where '01' means row 0 column 1 etc.
                    Failure to parse returns EarthView::World::Spatial::Math::CMatrix3::IDENTITY.
                ****/
                static EarthView::World::Spatial::Math::CMatrix3 parseMatrix3(const EVString &val);
                static EarthView::World::Spatial::Math::CMatrix3 parseMatrix3(const EVString &val, const EarthView::World::Spatial::Math::CMatrix3 &defaultValue);
                /***** Parses a EarthView::World::Spatial::Math::CMatrix4 out of a EVString.
                @remarks
                    Format is "00 01 02 03 10 11 12 13 20 21 22 23 30 31 32 33" where
                    '01' means row 0 column 1 etc. Failure to parse returns EarthView::World::Spatial::Math::CMatrix4::IDENTITY.
                ****/
				/****static EarthView::World::Spatial::Math::CMatrix4 parseMatrix4(const EVString& val, const EarthView::World::Spatial::Math::CMatrix4& defaultValue = EarthView::World::Spatial::Math::CMatrix4::IDENTITY);****/
                static EarthView::World::Spatial::Math::CMatrix4 parseMatrix4(const EVString &val);
                static EarthView::World::Spatial::Math::CMatrix4 parseMatrix4(const EVString &val, const EarthView::World::Spatial::Math::CMatrix4 &defaultValue);
                /***** Parses a EarthView::World::Spatial::Math::CQuaternion out of a EVString.
                @remarks
                    Format is "w x y z" (i.e. 4x Real values, space delimited).
                    Failure to parse returns EarthView::World::Spatial::Math::CQuaternion::IDENTITY.
                ****/
                static EarthView::World::Spatial::Math::CQuaternion parseQuaternion(const EVString &val);
                static EarthView::World::Spatial::Math::CQuaternion parseQuaternion(const EVString &val, const EarthView::World::Spatial::Math::CQuaternion &defaultValue);
                /***** Parses a CColourValue out of a EVString.
                @remarks
                    Format is "r g b a" (i.e. 4x Real values, space delimited), or "r g b" which implies
                    an alpha value of 1.0 (opaque). Failure to parse returns CColourValue::Black.
                ****/
                static CColourValue parseColourValue(const EVString &val);
                static CColourValue parseColourValue(const EVString &val, const CColourValue &defaultValue);
            };
        }
    }
}

