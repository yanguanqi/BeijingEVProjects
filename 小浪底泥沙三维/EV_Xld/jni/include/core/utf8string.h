/*根据测试结果表明，只是在windows平台下需要转码，
在Linux、MAC OS和Andriod平台下不需要转码*/
#ifndef EV_CORE_UTF8STRING_H
#define EV_CORE_UTF8STRING_H
#pragma once
#include "core/multibytestring.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{

			class EV_CORE_DLL CUtf8String : public CMultiByteString
			{
			public:
				// <summary>
				// 构造函数
				// </summary>
				// <param name="&ch">初始化当前对象的CChar字符</param>
				// <param name="*pMultiByteStr">初始化当前对象的多字节字符串</param>
				// <param name="*pUnicodeStr">初始化当前对象的Unicode字符串</param>
				// <param name="&str">初始化当前对象的CMultiByteString对象</param>
				// <param name="&wstr">初始化当前对象的CUnicodeString对象</param>
				// <returns></returns>
				CUtf8String();
				CUtf8String(_in const ev_char &ch);
				CUtf8String(_in const CChar  &ch);        
				CUtf8String(_in const ev_char  *pMultiByteStr);
				CUtf8String(_in const ev_wchar *pUnicodeStr);
				CUtf8String(const CUtf8String &str);
				CUtf8String(const CUnicodeString &wstr);
				CUtf8String(const CMultiByteString &strMultiByte);


				CUtf8String& assign(const ev_char* ptr,size_type offset,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CUtf8String(ptr).c_str(),offset,count);
#else
					m_strDataBuffer.assign(ptr,offset,count);
#endif
					return *this;
				}

				CUtf8String& assign(const ev_char* ptr,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CUtf8String(ptr).c_str(),count);
#else
					m_strDataBuffer.assign(ptr,count);
#endif
					return *this;
				}

				// <summary>
				// 设置当前对象的字符串值
				// </summary>
				// <param name="pMultiByteStr">指定的多字节字符串值</param>
				// <param name="pUnicodeStr">指定的Unicode字符串值</param>
				// <returns></returns>
				void setString(_in const ev_char  *pMultiByteStr);
				void setString(_in const ev_wchar *pUnicodeStr);
				// <summary>
				// 在当前字符串对象末尾追加数据
				// </summary>
				// <param name="ch">追加CChar字符</param>
				// <param name="pMultiByteStr">追加char*的字符串</param>
				// <param name="pUnicodeStr">追加Unicode字符串</param>
				// <param name="nCount">从缓冲区中指定的字符数目</param>
				// <param name="strMultiByte">char*的字符串</param>
				// <param name="strUnicode">Unicode的字符串</param>
				// <returns>返回追加后的当前字符串对象的引用</returns>
				CUtf8String&  append(_in const CChar  &ch);
				CUtf8String&  append(_in const ev_char  *pMultiByteStr);
				CUtf8String&  append(_in const ev_wchar *pUnicodeStr);
				CUtf8String&  append(_in const ev_char  *pMultiByteStr, _in ev_size_t nCount);
				CUtf8String&  append(_in const ev_wchar *pUnicodeStr, _in ev_size_t nCount);
				CUtf8String&  append(_in const CMultiByteString  &strMultiByte);
				CUtf8String&  append(_in const CUnicodeString    &strUnicode);
				CUtf8String&  append(_in const ev_char ch);
				CUtf8String&  append(_in const CUtf8String &ch);

				// <summary>
				// 在当前字符串对象的指定位置插入数据
				// </summary>
				// <param name="nIndexOfPos">插入字符串的位置</param>
				// <param name="ch">插入CChar字符</param>
				// <param name="pMultiByteStr">插入char*的字符串</param>
				// <param name="pUnicodeStr">插入Unicode字符串</param>
				// <returns>返回插入新数据后的当前字符串对象的引用</returns>
				virtual CUtf8String&  insert(_in ev_size_t nIndexOfPos, _in const CChar  &ch);
				virtual CUtf8String&  insert(_in ev_size_t nIndexOfPos, _in const ev_char  *pMultiByteStr);
				virtual CUtf8String&  insert(_in ev_size_t nIndexOfPos, _in const ev_wchar *pUnicodeStr);

				// <summary>
				// 格式化当前字符串
				// </summary>
				// <param name="pFormatStr">格式化的描述字符串</param>
				// <param name="pFormatWStr">格式化的描述字符串</param>
				// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				virtual CUtf8String&  format(_in const ev_char  *pFormatStr, _in ...); 
				virtual CUtf8String&  format(_in const ev_wchar *pFormatWStr, _in ...);

				// <summary>
				// 生成指定的格式化字符串并追加到当前字符串末尾
				// </summary>
				// <param name="pFormatStr">格式化的描述字符串</param>
				// <param name="pFormatWStr">格式化的描述字符串</param>
				// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				virtual CUtf8String&  formatAppend(_in const ev_char  *pFormatStr, ...); 
				virtual CUtf8String&  formatAppend(_in const ev_wchar *pFormatWStr, ...);

				// <summary>
				// 赋值操作符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <param name="strMultiByte">多字节字符串对象</param>
				// <param name="strUnicode">Unicode字符串对象</param>
				// <returns>返回当前对象的引用</returns>
				CUtf8String&  operator=(_in const CChar  &ch);
				CUtf8String&  operator=(_in const ev_char  *pMultiByteStr);
				CUtf8String&  operator=(_in const ev_wchar *pUnicodeStr);
				CUtf8String&  operator=(_in const CMultiByteString &strMultiByte);
				CUtf8String&  operator=(_in const CUnicodeString &strUnicode);
				CUtf8String&  operator=(_in const std::string    &strMultiByte);
				CUtf8String&  operator=(_in const wchar_string   &strUnicode);
				CUtf8String&  operator=(_in const CUtf8String   &strUtf);

				// <summary>
				// +号操作符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="strMultiByte">CMultiByteString对象</param>
				// <param name="strUnicode">CUnicodeString对象</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <returns>返回相加后的CMultiByteString对象</returns>
				friend EV_CORE_DLL CUtf8String  operator+(_in const CUtf8String &strUtfL, _in const CUtf8String &strUtfR); 
				friend EV_CORE_DLL CUtf8String  operator+(_in const CUtf8String &strUtf, _in const CUnicodeString strUnicode);
				friend EV_CORE_DLL CUtf8String  operator+(_in const CChar  &ch, _in const CUtf8String &strUtf);
				friend EV_CORE_DLL CUtf8String  operator+(_in const CUtf8String &strUtf, _in const CChar  &ch);
				friend EV_CORE_DLL CUtf8String  operator+(_in const ev_char* pMultiByteStr, _in const CUtf8String &strUtf);
				friend EV_CORE_DLL CUtf8String  operator+(_in const CUtf8String &strUtf, _in const ev_char* pMultiByteStr);
				friend EV_CORE_DLL CUtf8String  operator+(_in const ev_wchar* pUnicodeStr, _in const CUtf8String &strUtf);
				friend EV_CORE_DLL CUtf8String  operator+(_in const CUtf8String &strUtf, _in const ev_wchar* pUnicodeStr);
				//friend EV_CORE_DLL CUtf8String  operator+(_in const ev_char* pMultiByteStr, _in const CChar  &ch);
				//friend EV_CORE_DLL CUtf8String  operator+(_in const CChar  &ch, _in const ev_char* pMultiByteStr);

				// <summary>
				// +=运算符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="strMultiByte">CMultiByteString对象</param>
				// <param name="strUnicode">CUnicodeString对象</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <returns>返回相加后的CMultiByteString对象</returns>
				CUtf8String&  operator+=(_in const CUtf8String  &strUtf);
				CUtf8String&  operator+=(_in const CChar  &ch);
				CUtf8String&  operator+=(_in const ev_char  *pMultiByteStr);
				CUtf8String&  operator+=(_in const ev_wchar *pUnicodeStr);
				CUtf8String&  operator+=(_in const CMultiByteString &strMultiByte);
				CUtf8String&  operator+=(_in const CUnicodeString &strUnicode);
				CUtf8String&  operator+=(_in const ev_char &ch);

				// <summary>
				// 等于操作符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="strMultiByte">CMultiByteString对象</param>
				// <param name="strUnicode">CUnicodeString对象</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <returns>如果两边相等返回true，否则返回false</returns>
				ev_bool operator==(_in const CChar  &ch) const;
				ev_bool operator==(_in const ev_char  *pMultiByteStr) const;
				ev_bool operator==(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator==(_in const CMultiByteString &strMultiByte) const;
				ev_bool operator==(_in const CUnicodeString &strUnicode) const;
				ev_bool operator==(_in const CUtf8String  &strUtf) const;

				operator   CMultiByteString();
				CUtf8String& assignFromUtf8Charset(const ev_char*Utf8str);
				static CMultiByteString fromUtf8toMutiByteString(_in const ev_char* ch);
			};
			typedef CUtf8String ev_utf8string;
		}
	}
}
#endif