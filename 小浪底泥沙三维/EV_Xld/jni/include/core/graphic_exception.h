#ifndef __Exception_H_
#define __Exception_H_
#pragma once
#include "core/headerprefix.h"
#include "core/logmanager.h"
#include "core/stringdefines.h"
#include "core/memoryallocatedobject.h"
#if EV_RELEASE_ASSERT == 1
#define EV_ASSERT_MODE 1
#endif
#if EV_ASSERT_MODE == 1
#ifdef _DEBUG
#define GraphicAssert( a, b ) EV_ASSERT( (a) && (b) )
#else
#if EV_COMP != EV_COMPILER_BORL
#define GraphicAssert( a, b ) if( !(a) ) EV_EXCEPT( CException::ERR_RT_ASSERTION_FAILED, (b), "no function info")
#else
#define GraphicAssert( a, b ) if( !(a) ) EV_EXCEPT( CException::ERR_RT_ASSERTION_FAILED, (b), __FUNC__ )
#endif
#endif
#elif EV_ASSERT_MODE == 2
#if EV_COMP != EV_COMPILER_BORL
#define GraphicAssert( a, b ) if( !(a) ) EV_EXCEPT( CException::ERR_RT_ASSERTION_FAILED, (b), "no function info")
#else
#define GraphicAssert( a, b ) if( !(a) ) EV_EXCEPT( CException::ERR_RT_ASSERTION_FAILED, (b), __FUNC__ )
#endif
#else
#define GraphicAssert( a, b ) EV_ASSERT( (a) && (b) )
#endif
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CNameValuePairList;
            class CBaseObject;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 关于异常类
            /// 在发生错误时跳出异常信息
            /// </summary>
            class EV_CORE_DLL CException : public EarthView::World::Core::CBaseObject, public std::exception
            {
            protected:
                ev_int32 line;
                ev_int32 number;
                EVString typeName;
                EVString description;
                EVString source;
                EVString file;
                mutable EVString fullDesc;
            public:
                enum ExceptionCodes
                {
                    ERR_CANNOT_WRITE_TO_FILE,
                    ERR_INVALID_STATE,
                    ERR_INVALIDPARAMS,
                    ERR_RENDERINGAPI_ERROR,
                    ERR_DUPLICATE_ITEM,
                    ERR_ITEM_NOT_FOUND,
                    ERR_FILE_NOT_FOUND,
                    ERR_INTERNAL_ERROR,
                    ERR_RT_ASSERTION_FAILED,
                    ERR_NOT_IMPLEMENTED,
					ERR_NOT_LICENSED
                };
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="number">错误编码</param>
                /// <param name="description">错误描述</param>
                /// <param name="source">发生错误的函数</param>
                /// <returns></returns>
                CException(_in ev_int32 number, _in const EVString &description, _in const EVString &source );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="number">错误编码</param>
                /// <param name="description">错误描述</param>
                /// <param name="source">发生错误的函数</param>
                /// <param name="type">错误的类型</param>
                /// <param name="file">错误所在的文件</param>
                /// <param name="line">错误所在的文件的行数</param>
                /// <returns></returns>
                CException(_in ev_int32 number, _in const EVString &description, _in const EVString &source, _in const ev_char *type, _in const ev_char *file, _in ev_int32 line );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rhs">EarthView::World::Core::CException类的引用</param>
                /// <returns></returns>
                CException(_in const CException &rhs);
            ev_private:

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CException( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CException() throw() {}
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Core::CException类的引用</param>
                /// <returns></returns>
                void operator = (_in const EarthView::World::Core::CException &rhs);
                /// <summary>
                /// 得到错误的完整描述，包括错误编码，发生错误的行数以及发生错误的函数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误描述</returns>
                virtual EVString getFullDescription() const;
                /// <summary>
                /// 得到错误编码
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误编码</returns>
                virtual ev_int32 getNumber() const;
                /// <summary>
                /// 得到发生错误的函数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误函数</returns>
                virtual EVString getSource() const;
                /// <summary>
                /// 得到发生错误的文件
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误文件</returns>
                virtual EVString getFile() const;
                /// <summary>
                /// 得到发生错误的行数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误行数</returns>
                virtual ev_int32 getLine() const;
                /// <summary>
                /// 得到发生错误的描述（只是单纯的描述）
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误描述</returns>
                virtual EVString getDescription() const;
                /// <summary>
                /// 跳过标准库中异常类中what函数
                /// </summary>
                /// <param name=""></param>
                /// <returns>直接返回getFullDescription函数返回值</returns>
                const ev_char *what() const throw();
            };
            /// <summary>
            /// 未实现的异常类
            /// 跳出未实现异常信息
            /// </summary>
            class EV_CORE_DLL CUnimplementedException : public EarthView::World::Core::CException
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CUnimplementedException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CUnimplementedException( _in EarthView::World::Core::CNameValuePairList *pList );
            };

			/// <summary>
			/// 未许可的异常类
			/// 跳出未实现异常信息
			/// </summary>
			class EV_CORE_DLL CNotLicensedException : public EarthView::World::Core::CException
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				CNotLicensedException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CNotLicensedException( _in EarthView::World::Core::CNameValuePairList *pList );
			};

            /// <summary>
            /// 文件未找到的异常类
            /// 跳出文件未找到异常信息
            /// </summary>
            class EV_CORE_DLL CFileNotFoundException : public EarthView::World::Core::CException
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CFileNotFoundException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CFileNotFoundException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 输入输出的异常类
            /// 跳出输入输出异常信息
            /// </summary>
            class EV_CORE_DLL CIOException : public EarthView::World::Core::CException
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CIOException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CIOException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 无效声明的异常类
            /// 跳出无效声明异常信息
            /// </summary>
            class EV_CORE_DLL CInvalidStateException : public EarthView::World::Core::CException
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CInvalidStateException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CInvalidStateException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 无效参数的异常类
            /// 跳出无效参数异常信息
            /// </summary>
            class EV_CORE_DLL CInvalidParametersException : public EarthView::World::Core::CException
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CInvalidParametersException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CInvalidParametersException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 项目一致性的异常类
            /// 跳出项目一致性异常信息
            /// </summary>
            class EV_CORE_DLL CItemIdentityException : public EarthView::World::Core::CException
            {
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CItemIdentityException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CItemIdentityException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 内部错误的异常类
            /// 跳出内部错误异常信息
            /// </summary>
            class EV_CORE_DLL CInternalErrorException : public EarthView::World::Core::CException
            {
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CInternalErrorException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CInternalErrorException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 渲染接口的异常类
            /// 跳出渲染接口异常信息
            /// </summary>
            class EV_CORE_DLL CRenderingAPIException : public EarthView::World::Core::CException
            {
            public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CRenderingAPIException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderingAPIException( _in EarthView::World::Core::CNameValuePairList *pList );
            };
            /// <summary>
            /// 运行时断言的异常类
            /// 跳出运行时断言异常信息
            /// </summary>
            class EV_CORE_DLL CRuntimeAssertionException : public EarthView::World::Core::CException
            {
            public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="inNumber">错误编码</param>
                /// <param name="inDescription">错误描述</param>
                /// <param name="inSource">发生错误的函数</param>
                /// <param name="inFile">错误所在的文件</param>
                /// <param name="inLine">错误所在的文件的行数</param>
                /// <returns></returns>
                CRuntimeAssertionException(_in ev_int32 inNumber, _in const EVString &inDescription, _in const EVString &inSource, _in const ev_char *inFile, _in ev_int32 inLine);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRuntimeAssertionException( _in EarthView::World::Core::CNameValuePairList *pList );
            };

            class CExceptionFactory
            {
            private:
                CExceptionFactory() {}
            public:
                template <ev_int32 num>
                struct ExceptionCodeType
                {
                    enum { number = num };
                };
                static CUnimplementedException create(
                    ExceptionCodeType<CException::ERR_NOT_IMPLEMENTED> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CUnimplementedException(code.number, desc, src, file, line);
                }
				static CNotLicensedException create(
					ExceptionCodeType<CException::ERR_NOT_LICENSED> code,
					const EVString &desc,
					const EVString &src, const ev_char *file, ev_int32 line)
				{
#if EV_PLATFORM == EV_PLATFORM_ANDROID
					EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
					return CNotLicensedException(code.number, desc, src, file, line);
				}
                static CFileNotFoundException create(
                    ExceptionCodeType<CException::ERR_FILE_NOT_FOUND> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CFileNotFoundException(code.number, desc, src, file, line);
                }
                static CIOException create(
                    ExceptionCodeType<CException::ERR_CANNOT_WRITE_TO_FILE> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CIOException(code.number, desc, src, file, line);
                }
                static CInvalidStateException create(
                    ExceptionCodeType<CException::ERR_INVALID_STATE> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CInvalidStateException(code.number, desc, src, file, line);
                }
                static CInvalidParametersException create(
                    ExceptionCodeType<CException::ERR_INVALIDPARAMS> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CInvalidParametersException(code.number, desc, src, file, line);
                }
                static CItemIdentityException create(
                    ExceptionCodeType<CException::ERR_ITEM_NOT_FOUND> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CItemIdentityException(code.number, desc, src, file, line);
                }
                static CItemIdentityException create(
                    ExceptionCodeType<CException::ERR_DUPLICATE_ITEM> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CItemIdentityException(code.number, desc, src, file, line);
                }
                static CInternalErrorException create(
                    ExceptionCodeType<CException::ERR_INTERNAL_ERROR> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CInternalErrorException(code.number, desc, src, file, line);
                }
                static CRenderingAPIException create(
                    ExceptionCodeType<CException::ERR_RENDERINGAPI_ERROR> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CRenderingAPIException(code.number, desc, src, file, line);
                }
                static CRuntimeAssertionException create(
                    ExceptionCodeType<CException::ERR_RT_ASSERTION_FAILED> code,
                    const EVString &desc,
                    const EVString &src, const ev_char *file, ev_int32 line)
                {
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    EV_GRAPHIC_LOG("EXCEPTION :[" + desc + "] [" + src + "]");
#endif
                    return CRuntimeAssertionException(code.number, desc, src, file, line);
                }
            };



#ifndef EV_EXCEPT
#define EV_EXCEPT(num, desc, src) throw EarthView::World::Core::CExceptionFactory::create( \
	EarthView::World::Core::CExceptionFactory::ExceptionCodeType<num>(), desc, src, __FILE__, __LINE__ );
#endif
        }
    }
}

#include "headersuffix.h"
#endif

