#ifndef EV_CORE_UNICODESTRING_H
#define EV_CORE_UNICODESTRING_H
#pragma once
#include <vector>
#include "core/global.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class CMultiByteString;
			class ITextCodec;
			class CChar;
			class CUtf8String;
			class EV_CORE_DLL CUnicodeString
			{
				friend class CMultiByteString;
				friend class CUtf8String;

ev_private:
				typedef wchar_string::const_iterator const_iterator;
				typedef wchar_string::iterator iterator;
				typedef wchar_string::value_type value_type;
				typedef wchar_string::size_type size_type;
				void replace(iterator begin, iterator end, const wchar_string &str);
				/// <summary>
				/// 返回字符串首字符的迭代器
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				const_iterator begin() const;
				iterator begin();
				/// <summary>
				/// 返回字符串尾字符的迭代器
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				const_iterator end() const;
				iterator end();
				/// <summary>
				/// 从字符串指定位置中擦除字符
				/// </summary>
				/// <param name="pos">开始擦除的位置</param>
				/// <param name="count">要擦除字符的个数</param>
				/// <param name="first">开始擦除的位置</param>
				/// <param name="last">结束擦除的位置</param>
				/// <returns>擦除后的字符串或者迭代器</returns>
				CUnicodeString &erase(ev_size_t pos = 0, ev_size_t count = npos);
				iterator erase(iterator pos);
				iterator erase(iterator first, iterator last);
			public:
				static ev_size_t npos;
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ch">初始化当前对象的CChar字符</param>
				/// <param name="pMultiByteStr">初始化当前对象的多字节字符串</param>
				/// <param name="pUnicodeStr">初始化当前对象的Unicode字符串</param>
				/// <param name="str">初始化当前对象的CMultiByteString对象</param>
				/// <param name="wstr">初始化当前对象的CUnicodeString对象</param>
				/// <returns></returns>
				CUnicodeString();
				virtual ~CUnicodeString();
				CUnicodeString(_in const ev_wchar &ch);
				CUnicodeString(_in const CChar &ch);
				CUnicodeString(_in const ev_char *pMultiByteStr);
				CUnicodeString(_in const ev_wchar *pUnicodeStr);
				CUnicodeString(const CMultiByteString &str);
				CUnicodeString(const CUnicodeString &wstr);
				CUnicodeString(const CUtf8String &strutf);
				/// <summary>
				/// 获取当前字符串对象的长度
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回字符的个数</returns>
				ev_size_t getLength() const;
				ev_size_t length() const;
				/// <summary>
				/// 获取当前字符串对象的内存长度
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 重新指定字符串的长度,会重置字符串
				/// </summary>
				/// <param name="len">字符个数</param>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void   resize(ev_size_t len);
				/// <summary>
				/// 保留给定长度的内存
				/// </summary>
				/// <param name="len">字符个数</param>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void   reserve(ev_size_t len);

				CUnicodeString &assign(const_iterator first, const_iterator last);
				CUnicodeString &assign(const ev_wchar *ptr, size_type offset, size_type count);
				CUnicodeString &assign(size_type count, ev_wchar ch);
				CUnicodeString &assign(const ev_wchar *ptr);
				CUnicodeString &assign(const ev_wchar *ptr, size_type count);

				inline EV_CORE_DLL friend std::basic_stringstream<ev_wchar>& operator <<
					( std::basic_stringstream<ev_wchar>& stm, const CUnicodeString &str )
				{
					stm << str.m_wstrDataBuffer;
					return stm;
				}
				inline EV_CORE_DLL friend std::basic_stringstream<ev_wchar>& operator >>
					( std::basic_stringstream<ev_wchar>& stm, CUnicodeString &str )
				{
					stm >> str.m_wstrDataBuffer;
					return stm;
				}
				inline EV_CORE_DLL friend CUnicodeString &operator <<
					( const ev_char *stm, CUnicodeString &str )
				{
					str = stm + str;
					return str;
				}
				inline EV_CORE_DLL friend CUnicodeString &operator <<
					( const ev_wchar *stm, CUnicodeString &str )
				{
					str = stm + str;
					return str;
				}


				/// <summary>
				/// 重载(ev_size_t)操作符
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回字符串作为键值的键值长度</returns>
				operator ev_size_t()const
				{
					ev_size_t ret = 0;
					for(const_iterator it = m_wstrDataBuffer.begin(); it != m_wstrDataBuffer.end(); ++it )
						ret = 5 * ret + *it;
					return ret;
				}
				/// <summary>
				/// 重载流输出运算符
				/// </summary>
				/// <param name="o">输出流</param>
				/// <param name="str">字符串</param>
				/// <returns></returns>
				friend std::ostream &operator <<
					( _out std::ostream &o, _in const CUnicodeString &str );
				/// <summary>
				/// 返回字符串数据块的指针
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				const ev_wchar *data()
				{
					return m_wstrDataBuffer.data();
				}
				/// <summary>
				/// 获取当前已分配的缓冲区长度
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回缓冲区的长度</returns>
				ev_size_t getAllocLength() const;
				/// <summary>
				/// 判断当前字符串对象是否为空
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>如果字符串为空返回true，否则返回false</returns>
				ev_bool isEmpty() const;
				ev_bool empty()   const
				{
					return isEmpty();
				}
				/// <summary>
				/// 清空当前字符串
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 返回字符串指针
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				const ev_wchar *c_str() const;
				/// <summary>
				/// 释放掉已经分配但未使用的缓冲内存以减小内存占用单位
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
				void freeExtraMem();
				/// <summary>
				/// 获取指定位置的字符
				/// </summary>
				/// <param name="nIndex">所要获取的字符的位置</param>
				/// <returns>返回指定位置的字符</returns>
				CChar getAt(_in ev_size_t nIndex) const;
				ev_wchar at(_in ev_size_t nIndex) const
				{
					return m_wstrDataBuffer[nIndex];
				}
				/// <summary>
				/// 直接获取当前字符串对象的缓冲区，const ev_wchar*形式
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回const ev_wchar*形式的缓冲区指针</returns>
				const ev_wchar *getString() const;
				/// <summary>
				/// 直接获取当前字符串对象的缓冲区，ev_wchar*形式。
				/// </summary>
				/// <param name="nMinBufferLengthInChars">最小缓冲区长度</param>
				/// <returns>返回ev_wchar*形式的缓冲区指针</returns>
				ev_wchar *getBuffer(_in ev_size_t nMinBufferLengthInChars);
				ev_wchar *getBuffer();
				/// <summary>
				/// 生成缓冲区,并将内容复制到该缓冲区
				/// 该缓冲区由调用者释放
				/// </summary>
				/// <returns>返回ev_char*形式的缓冲区指针</returns>
				ev_wchar *makeBuffer() const;
				/// <summary>
				/// 删除指定位置指定数量的字符
				/// </summary>
				/// <param name="nBeginIndex">删除的起始位置</param>
				/// <param name="nCount">删除字符的数量</param>
				/// <returns>返回实际删除字符的个数</returns>
				ev_size_t deleteAt(_in ev_size_t nBeginIndex, _in ev_size_t nCount);
				ev_size_t deleteAt(_in ev_size_t nBeginIndex);
				/// <summary>
				/// 设置指定位置的字符
				/// </summary>
				/// <param name="nIndex">删除的起始位置</param>
				/// <param name="ch">设置的字符值</param>
				/// <returns></returns>
				void setAt(_in ev_size_t nIndex, _in CChar ch);
				/// <summary>
				/// 设置当前对象的字符串值
				/// </summary>
				/// <param name="pMultiByteStr">指定的多字节字符串值</param>
				/// <param name="pUnicodeStr">指定的Unicode字符串值</param>
				/// <returns></returns>
				void setString(_in const ev_char *pMultiByteStr);
				void setString(_in const ev_wchar *pUnicodeStr);
				/// <summary>
				/// 在当前字符串对象末尾追加数据
				/// </summary>
				/// <param name="ch">追加CChar字符</param>
				/// <param name="pMultiByteStr">追加char*的字符串</param>
				/// <param name="pUnicodeStr">追加Unicode字符串</param>
				/// <param name="nCount">从缓冲区中指定的字符数目</param>
				/// <param name="strMultiByte">char*的字符串</param>
				/// <param name="strUnicode">Unicode的字符串</param>
				/// <returns>返回追加后的当前字符串对象的引用</returns>
				CUnicodeString &append(_in const CChar &ch);
				CUnicodeString &append(_in const ev_char *pMultiByteStr);
				CUnicodeString &append(_in const ev_wchar *pUnicodeStr);
				CUnicodeString &append(_in const ev_char *pMultiByteStr, _in ev_size_t nCount);
				CUnicodeString &append(_in const ev_wchar *pUnicodeStr, _in ev_size_t nCount);
				CUnicodeString &append(_in const CMultiByteString &strMultiByte);
				CUnicodeString &append(_in const CUnicodeString &strUnicode);
				CUnicodeString &append(_in const ev_wchar ch);
				/// <summary>
				/// 在当前字符串对象的指定位置插入数据
				/// </summary>
				/// <param name="nIndexOfPos">插入字符串的位置</param>
				/// <param name="ch">插入CChar字符</param>
				/// <param name="pMultiByteStr">插入char*的字符串</param>
				/// <param name="pUnicodeStr">插入Unicode字符串</param>
				/// <returns>返回插入新数据后的当前字符串对象的引用</returns>
				CUnicodeString &insert(_in ev_size_t nIndexOfPos, _in const CChar &ch);
				CUnicodeString &insert(_in ev_size_t nIndexOfPos, _in const ev_char *pMultiByteStr);
				CUnicodeString &insert(_in ev_size_t nIndexOfPos, _in const ev_wchar *pUnicodeStr);
				/// <summary>
				/// 格式化当前字符串
				/// </summary>
				/// <param name="pFormatStr">格式化的描述字符串</param>
				/// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				CUnicodeString &format(_in const ev_char *pFormatStr, _in ...);
				CUnicodeString &format(_in const ev_wchar *pFormatStr, _in ...);
				/// <summary>
				/// 生成指定的格式化字符串并追加到当前字符串末尾
				/// </summary>
				/// <param name="pFormatStr">格式化的描述字符串</param>
				/// <returns>返回格式化完成后的当前字符串对象的引用</returns>
				CUnicodeString &formatAppend(_in const ev_char *pFormatStr, ...);
				CUnicodeString &formatAppend(_in const ev_wchar *pFormatStr, ...);
				/// <summary>
				/// 查找指定字符或字符串在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的子串</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找</param>
				/// <param name="bIsBeginFromLeft">指定查找方向, true表示从左往右查找，false表示从右往左查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 find(_in const CChar &ch, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				/// <summary>
				/// 查找指定字符或字符串在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的子串</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找,-1表示从末尾开始查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 rfind(_in const CChar &ch, _in ev_size_t nStartIndex = npos) const;
				ev_int32 rfind(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = npos) const;
				ev_int32 rfind(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = npos) const;

				/// <summary>
				/// 查找单个字符或字符串中任一字符首次出现在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的字符集</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找</param>
				/// <param name="bIsBeginFromLeft">指定查找方向, true表示从左往右查找，false表示从右往左查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 find_first_of(_in const CChar &ch, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find_first_of(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find_first_of(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				/// <summary>
				/// 查找单个字符或字符串中任一字符首次未出现在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的字符集</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找</param>
				/// <param name="bIsBeginFromLeft">指定查找方向, true表示从左往右查找，false表示从右往左查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 find_first_not_of(_in const CChar &ch, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find_first_not_of(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				ev_int32 find_first_not_of(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = 0, _in ev_bool bIsBeginFromLeft = true) const;
				/// <summary>
				/// 查找单个字符或字符串中任一字符最后一次出现在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的字符集</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找,-1表示从末尾开始查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 find_last_of(_in const CChar &ch, _in ev_size_t nStartIndex = npos) const;
				ev_int32 find_last_of(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = npos) const;
				ev_int32 find_last_of(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = npos) const;
				/// <summary>
				/// 查找单个字符或字符串中任一字符最后一次未出现在当前对象中的位置
				/// </summary>
				/// <param name="ch">要查找的字符</param>
				/// <param name="pSubStr">要查找的字符集</param>
				/// <param name="nStartIndex">查找的起始位置, 0表示从字符串首字符开始查找,-1表示从末尾开始查找</param>
				/// <returns>找到查找的字符或字符串，返回其所在位置(首字母的位置序号为0，其他的以此类推)，如果未找到则返回-1</returns>
				ev_int32 find_last_not_of(_in const CChar &ch, _in ev_size_t nStartIndex = npos) const;
				ev_int32 find_last_not_of(_in const ev_char *pSubStr, _in ev_size_t nStartIndex = npos) const;
				ev_int32 find_last_not_of(_in const ev_wchar *pSubStr, _in ev_size_t nStartIndex = npos) const;

				/// <summary>
				/// 查找指定字符或字符串，并使用指定的字符或字符进行替换
				/// </summary>
				/// <param name="chOld">要查找的字符</param>
				/// <param name="chNew">查找成功后替换的字符</param>
				/// <param name="pStrOld">要查找的字符串</param>
				/// <param name="pStrNew">查找成功后替换的字符串</param>
				/// <returns>返回替换发生的次数</returns>
				ev_size_t replace(_in const CChar &chOld, _in const CChar &chNew);
				ev_size_t replace(_in const ev_char *pStrOld, _in const ev_char *pStrNew);
				ev_size_t replace(_in const ev_wchar *pStrOld, _in const ev_wchar *pStrNew);

				/// <summary>
				/// 将当前字符串中的字符进行反序处理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void reverse();
				/// <summary>
				/// 从当前对象中剔除所有指定的字符
				/// </summary>
				/// <param name="ch">要剔除的字符</param>
				/// <param name="pCharSet">要剔除的字符集合，字符串中指定的每个字符都将被剔除</param>
				/// <returns>返回剔除的字符数目</returns>
				ev_size_t trim(_in const CChar &ch);
				ev_size_t trim(_in const ev_char *pCharSet);
				ev_size_t trim(_in const ev_wchar *pCharSet);
				/// <summary>
				/// 从当前对象左端开始剔除指定的字符，直到遇到非剔除字符为止
				/// </summary>
				/// <param name="ch">要剔除的字符</param>
				/// <param name="pCharSet">要剔除的字符集合，字符串中指定的每个字符都将被剔除</param>
				/// <returns>返回剔除的字符数目</returns>
				ev_size_t trimLeft(_in const CChar &ch);
				ev_size_t trimLeft(_in const ev_char *pCharSet);
				ev_size_t trimLeft(_in const ev_wchar *pCharSet);
				/// <summary>
				/// 从当前对象右端开始剔除指定的字符，直到遇到非剔除字符为止
				/// </summary>
				/// <param name="ch">要剔除的字符</param>
				/// <param name="pCharSet">要剔除的字符集合，字符串中指定的每个字符都将被剔除</param>
				/// <returns>返回剔除的字符数目</returns>
				ev_size_t trimRight(_in const CChar &ch);
				ev_size_t trimRight(_in const ev_char *pCharSet);
				ev_size_t trimRight(_in const ev_wchar *pCharSet);
				/// <summary>
				/// 使用指定的分隔符，将当前对象折分成若干子串
				/// </summary>
				/// <param name="chToken">分隔字符</param>
				/// <param name="pTokens">分隔字符集，该串中的每个字符都将作为分隔字符</param>
				/// <param name="strList">存储拆分后的子串的list</param>
				/// <returns>返回拆分的子串数量</returns>
				ev_size_t tokenize(_in const CChar &chToken, _out vector<CUnicodeString> &strList) const;
				ev_size_t tokenize(_in const ev_char *pTokens, _out vector<CUnicodeString> &strList) const ;
				ev_size_t tokenize(_in const ev_wchar *pTokens, _out vector<CUnicodeString> &strList) const;
				/// <summary>
				/// 从当前操作系统中获取指定环境变量，并将其存储在当前对象中
				/// </summary>
				/// <param name="pEnvVarName">环境变量名称</param>
				/// <returns>获取环境变量成功返回true，否则返回false</returns>
				ev_bool getEnvironmentVariable(_in const ev_char *pEnvVarName);
				ev_bool getEnvironmentVariable(_in const ev_wchar *pEnvVarName);

				/// <summary>
				/// 从当前操作系统中获取EV-Globe环境变量，并将其存储在当前对象中
				/// </summary>				
				/// <returns>获取环境变量成功返回true，否则返回false</returns>
				ev_bool getGlobeEnvironmentVariable();

				/// <summary>
				/// 取当前对象的子串
				/// </summary>
				/// <param name="nStartIndex">要获取的子串的起始位置</param>
				/// <param name="nCount">子串的长度</param>
				/// <returns>返回子串对象</returns>
				CUnicodeString subString(_in ev_size_t nStartIndex, _in ev_size_t nCount) const;
				CUnicodeString substr(_in ev_size_t nStartIndex, _in ev_size_t nCount = 0) const;
				/// <summary>
				/// 将当前对象的字符串变成小写
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回改变后的当前对象</returns>
				CUnicodeString &makeLower();
				/// <summary>
				/// 将当前对象转化为小写字符串返回，但当前对象不改变
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回转化为小写的字符串对象</returns>
				CUnicodeString toLower() const;
				/// <summary>
				/// 将当前对象的字符串变成大写
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回改变后的当前对象</returns>
				CUnicodeString &makeUpper();
				/// <summary>
				/// 将当前对象转化为大写字符串返回，但当前对象不改变
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns>返回转化为大写的字符串对象</returns>
				CUnicodeString toUpper() const;
				/// <summary>
				/// 判断当前对象是否是以某个指定的字符串为头
				/// </summary>
				/// <param name="str">字符串对象</param>
				/// <returns>如果当前对象是以str为头返回true，否则返回false</returns>
				ev_bool isHeadString(_in const CUnicodeString &str) const;
				/// <summary>
				/// 判断当前对象是否是以某个指定的字符串为尾
				/// </summary>
				/// <param name="str">字符串对象</param>
				/// <returns>如果当前对象是以str为尾返回true，否则返回false</returns>
				ev_bool isTailString(_in const CUnicodeString &str) const;
				/// <summary>
				/// 将当前字符串转换成ev_real64
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_real64值</returns>
				ev_real64 getReal64() const;
				/// <summary>
				/// 将当前字符串转换成ev_real32
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_real32值</returns>
				ev_real32 getReal32() const;
				/// <summary>
				/// 将当前字符串转换成ev_int64
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_int64值</returns>
				ev_int64 getInt64() const;
				/// <summary>
				/// 将当前字符串转换成ev_uint64
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_uint64值</returns>
				ev_uint64 getUint64() const;

				/// <summary>
				/// 将当前字符串转换成ev_size_t
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_size_t值</returns>
				ev_int32 getInt32() const;
				/// <summary>
				/// 将当前字符串转换成ev_size_t
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回转换后的ev_size_t值</returns>
				ev_uint32 getUint32() const;

				/// <summary>
				/// 赋值操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <param name="strMultiByte">多字节字符串对象</param>
				/// <param name="strUnicode">Unicode字符串对象</param>
				/// <returns>返回当前对象的引用</returns>
				CUnicodeString &operator=(_in const CChar &ch);
				CUnicodeString &operator=(_in const ev_char *pMultiByteStr);
				CUnicodeString &operator=(_in const ev_wchar *pUnicodeStr);
				CUnicodeString &operator=(const CMultiByteString &strMultiByte);
				CUnicodeString &operator=(const CUnicodeString &strUnicode);
				CUnicodeString &operator=(const std::string &strMultiByte);
				CUnicodeString &operator=(const wchar_string &strUnicode);
				CUnicodeString& operator=(const CUtf8String &strUtf);
				/// <summary>
				/// +号操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>返回相加后的CUnicodeString对象</returns>
				friend EV_CORE_DLL CUnicodeString operator+(_in const CUnicodeString &strMultiByteL, _in const CUnicodeString &strMultiByteR);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CUnicodeString &strMultiByte, _in const CMultiByteString strUnicode);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CChar &ch, _in const CUnicodeString &strMultiByte);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CUnicodeString &strMultiByte, _in const CChar &ch);
				friend EV_CORE_DLL CUnicodeString operator+(_in const ev_char *pMultiByteStr, _in const CUnicodeString &strMultiByte);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CUnicodeString &strMultiByte, _in const ev_char *pMultiByteStr);
				friend EV_CORE_DLL CUnicodeString operator+(_in const ev_wchar *pUnicodeStr, _in const CUnicodeString &strMultiByte);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CUnicodeString &strMultiByte, _in const ev_wchar *pUnicodeStr);
				friend EV_CORE_DLL CUnicodeString operator+(_in const ev_wchar *pUnicodeStr, _in const CChar &ch);
				friend EV_CORE_DLL CUnicodeString operator+(_in const CChar &ch, _in const ev_wchar *pUnicodeStr);
				/// <summary>
				/// +=运算符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>返回相加后的CUnicodeString对象</returns>
				CUnicodeString &operator+=(_in const CChar &ch);
				CUnicodeString &operator+=(_in const ev_char *pMultiByteStr);
				CUnicodeString &operator+=(_in const ev_wchar *pUnicodeStr);
				CUnicodeString &operator+=(const CMultiByteString &strMultiByte);
				CUnicodeString &operator+=(const CUnicodeString &strUnicode);
				CUnicodeString &operator+=(_in const ev_wchar ch);
				/// <summary>
				/// 等于操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="pStr">CChar型的字符串</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>如果两边相等返回true，否则返回false</returns>
				ev_bool operator==(_in const CChar &ch) const;
				ev_bool operator==(_in const ev_char *pMultiByteStr) const;
				ev_bool operator==(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator==(const CMultiByteString &strMultiByte) const;
				ev_bool operator==(const CUnicodeString &strUnicode) const;
				friend EV_CORE_DLL ev_bool operator==(_in const ev_char *pMultiByteStr, CUnicodeString strUnicode);
				friend EV_CORE_DLL ev_bool operator==(_in const ev_wchar *pUnicodeStr, CUnicodeString strUnicode);
				/// <summary>
				/// 不等于操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="pStr">CChar型的字符串</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>如果两边不相等返回true，否则返回false</returns>
				ev_bool operator!=(_in const CChar &ch) const;
				ev_bool operator!=(_in const ev_char *pMultiByteStr) const;
				ev_bool operator!=(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator!=(const CMultiByteString &strMultiByte) const;
				ev_bool operator!=(const CUnicodeString &strUnicode) const;
				friend EV_CORE_DLL ev_bool operator!=(_in const ev_char *pMultiByteStr, CUnicodeString strUnicode);
				friend EV_CORE_DLL ev_bool operator!=(_in const ev_wchar *pUnicodeStr, CUnicodeString strUnicode);
				/// <summary>
				/// 小于操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>如果左边小于右边返回true，否则返回false</returns>
				ev_bool operator<(_in const CChar &ch) const;
				ev_bool operator<(_in const ev_char *pMultiByteStr) const;
				ev_bool operator<(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator<(_in const CMultiByteString &strMultiByte) const;
				ev_bool operator<(_in const CUnicodeString &strUnicode) const;
				friend EV_CORE_DLL ev_bool operator<(_in const ev_char *pMultiByteStr, CUnicodeString strUnicode);
				friend EV_CORE_DLL ev_bool operator<(_in const ev_wchar *pUnicodeStr, CUnicodeString strUnicode);
				/// <summary>
				/// 大于操作符重载
				/// </summary>
				/// <param name="ch">单个CChar字符</param>
				/// <param name="strMultiByte">CMultiByteString对象</param>
				/// <param name="strUnicode">CUnicodeString对象</param>
				/// <param name="pMultiByteStr">ev_char型字符串</param>
				/// <param name="pUnicodeStr">ev_wchar型字符串</param>
				/// <returns>如果左边大于右边返回true，否则返回false</returns>
				ev_bool operator>(_in const CChar &ch) const;
				ev_bool operator>(_in const ev_char *pMultiByteStr) const;
				ev_bool operator>(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator>(_in const CMultiByteString &strMultiByte) const;
				ev_bool operator>(_in const CUnicodeString &strUnicode) const;
				friend EV_CORE_DLL ev_bool operator>(_in const ev_char *pMultiByteStr, CUnicodeString strUnicode);
				friend EV_CORE_DLL ev_bool operator>(_in const ev_wchar *pUnicodeStr, CUnicodeString strUnicode);

				/// <summary>
				/// 数组操作符重载
				/// </summary>
				/// <param name="nIndex">要访问的字符的位置，0表示首字母</param>
				/// <returns>返回ev_wchar字符</returns>
#ifdef EV_OS_WIN64
				ev_wchar &operator[](_in ev_size_t iIndex);
				const ev_wchar &operator[](_in ev_size_t iIndex) const;
				//                ev_wchar &operator[](_in ev_size_t nIndex);
				//                const ev_wchar &operator[](_in ev_size_t nIndex) const;
				//				ev_wchar &operator[](_in ev_size_t nIndex);
				//                const ev_wchar &operator[](_in ev_size_t nIndex) const;
#elif defined(EV_OS_LINUX64)
				ev_wchar &operator[](_in ev_size_t iIndex);
				const ev_wchar &operator[](_in ev_size_t iIndex) const;
				//                ev_wchar &operator[](_in ev_size_t nIndex);
				//                const ev_wchar &operator[](_in ev_size_t nIndex) const;
				//				ev_wchar &operator[](_in ev_size_t nIndex);
				//                const ev_wchar &operator[](_in ev_size_t nIndex) const;
#else
				ev_wchar &operator[](_in ev_int32 iIndex);
				const ev_wchar &operator[](_in ev_int32 iIndex) const;
				ev_wchar &operator[](_in ev_uint32 nIndex);
				const ev_wchar &operator[](_in ev_uint32 nIndex) const;
#endif
				/// <summary>
				/// 类似于getString，直接访问数据区
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回const ev_wchar*的数据缓冲区</returns>
				operator const ev_wchar*() const;
				operator ev_wchar*();
				CUnicodeString &operator<<(_in const ev_char *pStr);
				CUnicodeString &operator<<(_in const ev_wchar *pWStr);
				CUnicodeString &operator<<(_in const ev_int8 iNumber);
				CUnicodeString &operator<<(_in const ev_uint8 nNumber);
				CUnicodeString &operator<<(_in const ev_int16 iNumber);
				CUnicodeString &operator<<(_in const ev_uint16 nNumber);
				CUnicodeString &operator<<(_in const ev_int32 iNumber);
				CUnicodeString &operator<<(_in const ev_uint32 nNumber);
				CUnicodeString &operator<<(_in const ev_int64 iNumber);
				CUnicodeString &operator<<(_in const ev_uint64 nNumber);
				CUnicodeString &operator<<(_in const ev_real32 fNumber);
				CUnicodeString &operator<<(_in const ev_real64 dbNumber);
				CUnicodeString &operator<<(_in const void *pointer);
				CUnicodeString &operator<<(_in const CMultiByteString &str);
				CUnicodeString &operator<<(_in const CUnicodeString &wstr);
				/// <summary>
				/// 将给定的字符串转换成ev_real64
				/// </summary>
				/// <param name="pNumberString">给定的字符串</param>
				/// <returns>返回转换后的ev_real64值，当字符串无法转换为ev_real64时，将返回0</returns>
				static ev_real64 stringToReal64(_in const ev_wchar *pNumberString);

				static CUnicodeString convertFromUtf8(const ev_char *chars, int len);
				CMultiByteString convertToUtf8() const;
			protected:
				///字符数据存储对象
				wchar_string m_wstrDataBuffer;
				///字符编码器
				static ITextCodec *m_pTextCodec;
			}; 			///class CUnicodeString
			typedef CUnicodeString ev_wstring;


		}
	}
}

#endif
