#ifndef _String_H__
#define _String_H__
#pragma once

#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"
#include "core/stringvector.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class StringVector;
            /**** Utility class for manipulating Strings.  ****/
            class EV_CORE_DLL CStringUtil : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CStringUtil(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CStringUtil();
                typedef StringStream StrStreamType;
                /**** Removes any whitespace characters, be it standard space or
                    TABs and so on.
                    @remarks
                        The user may specify wether they want to trim only the
                        beginning or the end of the EVString ( the default action is
                        to trim both).
                ****/
                static void trim(_in EVString &str);
                static void trim(_in EVString &str, _in ev_bool left);
                static void trim(_in EVString &str, _in ev_bool left, _in ev_bool right);
                /**** Returns a EarthView::World::Core::StringVector that contains all the substrings delimited
                    by the characters in the passed <code>delims</code> argument.
                    @param
                        delims A list of delimiter characters to split by
                    @param
                        maxSplits The maximum number of splits to perform (0 for unlimited splits). If this
                        parameters is > 0, the splitting process will stop after this many splits, left to right.
                ****/
                static EarthView::World::Core::StringVector split(_in const EVString &str);
                static EarthView::World::Core::StringVector split(_in const EVString &str, _in const EVString &delims);
                static EarthView::World::Core::StringVector split(_in const EVString &str, _in const EVString &delims, _in ev_uint32 maxSplits);
                /**** Returns a EarthView::World::Core::StringVector that contains all the substrings delimited
                    by the characters in the passed <code>delims</code> argument,
                	or in the <code>doubleDelims</code> argument, which is used to include (normal)
                	delimeters in the tokenised string. For example, "strings like this".
                    @param
                        delims A list of delimiter characters to split by
                	@param
                        delims A list of double delimeters characters to tokenise by
                    @param
                        maxSplits The maximum number of splits to perform (0 for unlimited splits). If this
                        parameters is > 0, the splitting process will stop after this many splits, left to right.
                ****/
                static EarthView::World::Core::StringVector tokenise(_in const EVString &str);
                static EarthView::World::Core::StringVector tokenise(_in const EVString &str, _in const EVString &delims);
                static EarthView::World::Core::StringVector tokenise(_in const EVString &str, _in const EVString &delims, _in const EVString &doubleDelims);
                static EarthView::World::Core::StringVector tokenise(_in const EVString &str, _in const EVString &delims, _in const EVString &doubleDelims, _in ev_uint32 maxSplits);
                /**** Lower-cases all the characters in the string.
                ****/
                static void toLowerCase(_in EVString &str );
                /**** Upper-cases all the characters in the string.
                ****/
                static void toUpperCase(_in EVString &str );

                /**** Returns whether the string begins with the pattern passed in.
                @param pattern The pattern to compare with.
                @param lowerCase If true, the start of the string will be lower cased before
                    comparison, pattern should also be in lower case.
                ****/
                static ev_bool startsWith(_in const EVString &str, _in const EVString &pattern);
                static ev_bool startsWith(_in const EVString &str, _in const EVString &pattern, _in ev_bool lowerCase);
                /**** Returns whether the string ends with the pattern passed in.
                @param pattern The pattern to compare with.
                @param lowerCase If true, the end of the string will be lower cased before
                    comparison, pattern should also be in lower case.
                ****/
                static ev_bool endsWith(_in const EVString &str, _in const EVString &pattern);
                static ev_bool endsWith(_in const EVString &str, _in const EVString &pattern, _in ev_bool lowerCase);
                /**** Method for standardising paths - use forward slashes only, end with slash.
                ****/
                static EVString standardisePath(_in const EVString &init);
                /**** Method for splitting a fully qualified filename into the base name
                    and path.
                @remarks
                    Path is standardised as in standardisePath
                ****/
                static void splitFilename(_in const EVString &qualifiedName,
                                          _out EVString &outBasename, _out EVString &outPath);
                /**** Method for splitting a fully qualified filename into the base name,
                extension and path.
                @remarks
                Path is standardised as in standardisePath
                ****/
                static void splitFullFilename(_in const EVString &qualifiedName,
                                              _out	EVString &outBasename, _out EVString &outExtention,
                                              _out	EVString &outPath);
                /**** Method for splitting a filename into the base name
                and extension.
                ****/
                static void splitBaseFilename(_in const EVString &fullName,
                                              _out	EVString &outBasename, _out EVString &outExtention);

                /**** Simple pattern-matching routine allowing a wildcard pattern.
                @param str EVString to test
                @param pattern Pattern to match against; can include simple '*' wildcards
                @param caseSensitive Whether the match is case sensitive or not
                ****/
                static ev_bool match(_in const EVString &str, _in const EVString &pattern);
                static ev_bool match(_in const EVString &str, _in const EVString &pattern, _in ev_bool caseSensitive);

                /**** replace all instances of a sub-string with a another sub-string.
                @param source Source string
                @param replaceWhat Sub-string to find and replace
                @param replaceWithWhat Sub-string to replace with (the new sub-string)
                @returns An updated string with the sub-string replaced
                ****/
                static const EVString replaceAll(_in const EVString &source, _in const EVString &replaceWhat, _in const EVString &replaceWithWhat);
                //// Constant blank string, useful for returning by ref where local does not exist
                static const EVString BLANK;
            };
        }
    }
}
#endif //// _String_H__

