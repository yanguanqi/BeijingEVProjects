#ifndef EV_CORE_GBKSTRING_H
#define EV_CORE_GBKSTRING_H
#pragma once

#include "core/multibytestring.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{

			class EV_CORE_DLL CGBKString : public CMultiByteString
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
				CGBKString();
				CGBKString(_in const ev_char &ch);
				CGBKString(_in const CChar  &ch);        
				CGBKString(_in const ev_char  *pMultiByteStr);
				CGBKString(_in const ev_char  *pMultiByteStr, CharSet cs);
				CGBKString(_in const ev_wchar *pUnicodeStr);
				CGBKString(const CGBKString &str);
				CGBKString(const CUnicodeString &wstr);
				CGBKString(const CMultiByteString &strMultiByte);


				CGBKString& assign(const ev_char* ptr,size_type offset,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CGBKString(ptr).c_str(),offset,count);
#else
					m_strDataBuffer.assign(ptr,offset,count);
#endif
					return *this;
				}

				CGBKString& assign(const ev_char* ptr,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CGBKString(ptr).c_str(),count);
#else
					m_strDataBuffer.assign(ptr,count);
#endif
					return *this;
				}

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
				CGBKString&  append(_in const CChar  &ch);
				CGBKString&  append(_in const ev_char  *pMultiByteStr);
				CGBKString&  append(_in const ev_wchar *pUnicodeStr);
				CGBKString&  append(_in const ev_char  *pMultiByteStr, _in ev_size_t nCount);
				CGBKString&  append(_in const ev_wchar *pUnicodeStr, _in ev_size_t nCount);
				CGBKString&  append(_in const CMultiByteString  &strMultiByte);
				CGBKString&  append(_in const CUnicodeString    &strUnicode);
				CGBKString&  append(_in const ev_char ch);
				CGBKString&  append(_in const CGBKString &ch);

				// <summary>
				// 在当前字符串对象的指定位置插入数据
				// </summary>
				// <param name="nIndexOfPos">插入字符串的位置</param>
				// <param name="ch">插入CChar字符</param>
				// <param name="pMultiByteStr">插入char*的字符串</param>
				// <param name="pUnicodeStr">插入Unicode字符串</param>
				// <returns>返回插入新数据后的当前字符串对象的引用</returns>
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const CChar  &ch);
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const ev_char  *pMultiByteStr);
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const ev_wchar *pUnicodeStr);

				// <summary>
				// 格式化当前字符串
				// </summary>
				// <param name="pFormatStr">格式化的描述字符串</param>
				// <param name="pFormatWStr">格式化的描述字符串</param>
				// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				virtual CGBKString&  format(_in const ev_char  *pFormatStr, _in ...); 
				virtual CGBKString&  format(_in const ev_wchar *pFormatWStr, _in ...);

				// <summary>
				// 生成指定的格式化字符串并追加到当前字符串末尾
				// </summary>
				// <param name="pFormatStr">格式化的描述字符串</param>
				// <param name="pFormatWStr">格式化的描述字符串</param>
				// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				virtual CGBKString&  formatAppend(_in const ev_char  *pFormatStr, ...); 
				virtual CGBKString&  formatAppend(_in const ev_wchar *pFormatWStr, ...);

				// <summary>
				// 赋值操作符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <param name="strMultiByte">多字节字符串对象</param>
				// <param name="strUnicode">Unicode字符串对象</param>
				// <returns>返回当前对象的引用</returns>
				CGBKString&  operator=(_in const CChar  &ch);
				CGBKString&  operator=(_in const ev_char  *pMultiByteStr);
				CGBKString&  operator=(_in const ev_wchar *pUnicodeStr);
				CGBKString&  operator=(_in const CMultiByteString &strMultiByte);
				CGBKString&  operator=(_in const CUnicodeString &strUnicode);
				CGBKString&  operator=(_in const std::string    &strMultiByte);
				CGBKString&  operator=(_in const wchar_string   &strUnicode);
				CGBKString&  operator=(_in const CGBKString   &strUtf);

				// <summary>
				// +号操作符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="strMultiByte">CMultiByteString对象</param>
				// <param name="strUnicode">CUnicodeString对象</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <returns>返回相加后的CMultiByteString对象</returns>
				friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strGBKL, _in const CGBKString &strGBKR); 
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const CUnicodeString strUnicode);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CChar  &ch, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const CChar  &ch);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_char* pMultiByteStr, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const ev_char* pMultiByteStr);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_wchar* pUnicodeStr, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const ev_wchar* pUnicodeStr);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_char* pMultiByteStr, _in const CChar  &ch);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CChar  &ch, _in const ev_char* pMultiByteStr);

				// <summary>
				// +=运算符重载
				// </summary>
				// <param name="ch">单个CChar字符</param>
				// <param name="strMultiByte">CMultiByteString对象</param>
				// <param name="strUnicode">CUnicodeString对象</param>
				// <param name="pMultiByteStr">ev_char型字符串</param>
				// <param name="pUnicodeStr">ev_wchar型字符串</param>
				// <returns>返回相加后的CMultiByteString对象</returns>
				CGBKString&  operator+=(_in const CGBKString  &strGBK);
				//CGBKString&  operator+=(_in const CChar  &ch);
				//CGBKString&  operator+=(_in const ev_char  *pMultiByteStr);
				//CGBKString&  operator+=(_in const ev_wchar *pUnicodeStr);
				//CGBKString&  operator+=(_in const CMultiByteString &strMultiByte);
				//CGBKString&  operator+=(_in const CUnicodeString &strUnicode);
				//CGBKString&  operator+=(_in const ev_char &ch);

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
				ev_bool operator==(_in const CGBKString  &strUtf) const;

			};
		}
	}
}
#endif