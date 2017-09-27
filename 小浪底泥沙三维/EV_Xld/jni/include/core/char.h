#ifndef EV_CORE_CHAR_H
#define EV_CORE_CHAR_H
#pragma once

#include "core/global.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class ITextCodec;
            class EV_CORE_DLL CChar:public CBaseObject
            {
ev_private:
                   CChar(CNameValuePairList *pList);
            public:

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="asciiChar">Ascii字符</param>
                /// <param name="*pAsciiStr">指针</param>
                /// <param name="unicodeChar">Unicode字符</param>
                /// <returns></returns>
                CChar();
                CChar(_in const ev_char &asciiChar);
                CChar(_in const ev_char *pAsciiStr);
                CChar(_in const ev_wchar &unicodeChar);
				inline void fromuint(ev_uint32 rc) {m_charData=ev_uint16(rc & 0xffff);}
				inline void fromuint(ev_uint16 rc) { m_charData=rc;}
				inline bool isHighSurrogate() const {
					return ((m_charData & 0xfc00) == 0xd800);
				}
				inline bool isLowSurrogate() const {
					return ((m_charData & 0xfc00) == 0xdc00);
				}
				static inline ev_uint32 surrogateToUcs4(ev_uint16 high, ev_uint16 low) {
					return (ev_uint32(high)<<10) + low - 0x35fdc00;
				}
                /// <summary>
                /// 得到当前字符的阿拉伯数字形式
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回转换成功则返回0~9之间的数字，否则返回-1</returns>
                ev_int32 getDigit() const;
                /// <summary>
                /// 得到当前字符的ASCII码字符形式
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回转换后的字符，若当前字符值不在ASCII码的范围内，则返回值为当前字符的低字节的ASCII码字符</returns>
                ev_char getAscii() const;

                /// <summary>
                /// 得到当前字符的小写字母形式
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回已经转化为小写字符的字符，若当前符不为字母，则直接返回当前字符</returns>
                CChar toLower() const;
                /// <summary>
                /// 得到当前字符的大写字符形式
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回已经转化为大写字符的字符，若当前符不为字母，则直接返回当前字符</returns>
                CChar toUpper() const;
                /// <summary>
                /// 将当前字符转化为小写字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回转化后当前字符的引用</returns>
                CChar &makeLower();
                /// <summary>
                /// 将当前字符转化为大写字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回转化后当前字符的引用</returns>
                CChar &makeUpper();
                /// <summary>
                /// 得到当前字符的Unicode字符形式
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回已经转化的Unicode字符</returns>
                ev_wchar getUnicode() const;

                /// <summary>
                /// 判断当前字符是否为单字节的字符，即使用单个多字节类型字符初始化的字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为单字节字符则返回true，否则返回false</returns>
                ev_bool isSingleByte() const;
                /// <summary>
                /// 判断当前字符是否为阿拉伯数字字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为阿拉伯数字字符则返回true，否则返回false</returns>
                ev_bool isDigit() const;
                /// <summary>
                /// 判断当前字符是否为字母字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为字母字符则返回true，否则返回false</returns>
                ev_bool isLetter() const;
                /// <summary>
                /// 判断当前字符是否为ASCII字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为ASCII字符则返回true，否则返回false</returns>
                ev_bool isAscii() const;
                /// <summary>
                /// 判断当前字符是否为小写字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为小写字符则返回true，否则返回false</returns>
                ev_bool isLower() const;
                /// <summary>
                /// 判断当前字符是否为大写字符
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>如果为大写字符则返回true，否则返回false</returns>
                ev_bool isUpper() const;
                /// <summary>
                /// 使当前类能进行=号运算
                /// </summary>
                /// <param name="cchar">当前字符</param>
                /// <param name="asciiChar">Ascii字符</param>
                /// <param name="unicodeChar">Unicode字符</param>
                /// <returns>返回当前对象被赋值的对象引用</returns>
                CChar &operator= (_in const CChar &cchar);
                CChar &operator= (_in const ev_char asciiChar);
                CChar &operator= (_in const ev_wchar unicodeChar);
                /// <summary>
                /// 使当前类能进行==号运算
                /// </summary>
                /// <param name="cchar">当前字符</param>
                /// <param name="asciiChar">Ascii字符</param>
                /// <param name="unicodeChar">Unicode字符</param>
                /// <returns>相等返回true，否则返回false</returns>
                ev_bool operator== (_in const CChar &cchar);
                ev_bool operator== (_in const ev_char asciiChar);
                ev_bool operator== (_in const ev_wchar unicodeChar);
                friend ev_bool operator== (_in const ev_char asciiChar, _in const CChar &cchar);
                friend ev_bool operator== (_in const ev_wchar unicodeChar, _in const CChar &cchar);
                /// <summary>
                /// 使当前类能进行!=号运算
                /// </summary>
                /// <param name="cchar">当前字符</param>
                /// <param name="asciiChar">Ascii字符</param>
                /// <param name="unicodeChar">Unicode字符</param>
                /// <returns>不相等返回true，否则返回false</returns>
                ev_bool operator!= (_in const CChar &cchar);
                ev_bool operator!= (_in const ev_char asciiChar);
                ev_bool operator!= (_in const ev_wchar unicodeChar);
                friend ev_bool operator!= (_in const ev_char asciiChar, _in const CChar &cchar);
                friend ev_bool operator!= (_in const ev_wchar unicodeChar, _in const CChar &cchar);

				static inline ev_int16 highSurrogate(ev_int32 ucs4) { return ev_int16((ucs4>>10) + 0xd7c0);}
				static inline ev_int16 lowSurrogate(ev_int32 ucs4) {return ev_int16(ucs4%0x400 + 0xdc00);}
            protected:
                ///字符数据
                ev_wchar m_charData;
                ///标识当前字符是否为由多字节类型字符初始化的字符
                ev_bool m_bIsMultiByte;
            protected:
                static ITextCodec *m_pTextCodec;
            };
            inline ev_bool operator== (_in const ev_char asciiChar, _in const CChar &cchar)
            {
                return cchar.m_charData == asciiChar;
            }
            inline ev_bool operator== (_in const ev_wchar unicodeChar, _in const CChar &cchar)
            {
                return cchar.m_charData == unicodeChar;
            }
            inline ev_bool operator!= (_in const ev_char asciiChar, _in const CChar &cchar)
            {
                return cchar.m_charData != asciiChar;
            }
            inline ev_bool operator!= (_in const ev_wchar unicodeChar, _in const CChar &cchar)
            {
                return cchar.m_charData != unicodeChar;
            }
        }
    }
}

#endif
