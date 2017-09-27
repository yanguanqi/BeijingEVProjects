#ifndef EV_CORE_CLASSFACTORY_H
#define EV_CORE_CLASSFACTORY_H
#pragma once
#include "core/stringdefines.h"
#include "core/name_value_pair.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CBaseObject;
            class CMutexInternal;
            class EV_CORE_DLL CObjectCollection4ExternFree
            {
            public:
                typedef set<CBaseObject *> ObjectSet;
            public:
                static bool Exist(CBaseObject *pObj);
                static void Add(CBaseObject *pObj);
                static void Remove(CBaseObject *pObj);
            private:
                static ObjectSet mSet;
                static CMutexInternal mMutex;
            };
            /// <summary>
            /// 类对象生产者的接口
            /// </summary>
            class IClassObjectProducer
            {
            public:
                /// <summary>
                /// 创建一个类的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>创建的类对象，该对象由调用者负责释放</returns>
                ///virtual void* createObject() const = 0;
                /// <summary>
                /// 初始化对象
                /// </summary>
                /// <param name="pObject">对象</param>
                /// <param name="pList">参数列表</param>
                /// <returns>初始化成功返回true，否则返回false</returns>
                virtual void *createObject(_in void *pList = NULL) const = 0;
                /// <summary>
                /// 释放一个类对象
                /// </summary>
                /// <param name="ppObject">对象</param>
                /// <returns></returns>
                virtual void releaseObject(_inout void **ppObject) const = 0;
                /// <summary>
                /// 获取当前接口创建的类对象的类名称
                /// </summary>
                /// <param name="strClassName">类名字符串</param>
                /// <returns></returns>
                virtual void getClassName(_out ev_string &strClassName) const = 0;

                virtual ~IClassObjectProducer() {}
            };
            /// <summary>
            /// 类工厂，提供通过类名创建对象的方法、初始化对象的方法、销毁对象的方法等
            /// </summary>
            class EV_CORE_DLL CClassFactory
            {
                typedef hashmap<ev_string, IClassObjectProducer *, _StringHash> FactoryProducerMap;
            public:
                /// <summary>
                /// 创建指定类名的实例对象
                /// </summary>
                /// <param name="strClassName">类名</param>
                /// <returns>实例对象</returns>
                // static ev_void* createClassObject(_in const ev_string &strClassName);
                /// <summary>
                /// 初始化指定类名的实例对象
                /// </summary>
                /// <param name="pObject">对象</param>
                /// <param name="strClassName">类名</param>
                /// <param name="pList">参数列表</param>
                /// <returns>初始化成功返回true，否则返回false</returns>
                static ev_void *createClassObject(_in const ev_string &strClassName, _in EarthView::World::Core::CNameValuePairList *pList = NULL);

                /// <summary>
                /// 释放由工厂创建的实例对象
                /// </summary>
                /// <param name="ppObject">对象</param>
                /// <param name="pClassName">类名</param>
                /// <returns>释放成功返回true，否则返回false</returns>
                static ev_bool releaseClassObject(_inout void **ppObject, _in const ev_char *pClassName);
                /// <summary>
                /// 注册指定的类生产者到类工厂
                /// </summary>
                /// <param name="pClassObjectProducer">类生产者</param>
                /// <returns>注册成功返回true，否则返回false</returns>
                static ev_bool registerClassProducer(_in IClassObjectProducer *pClassObjectProducer);
                /// <summary>
                /// 重置类工厂
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static ev_void resetClassFactory();
            protected:
                ///存储类名与对应的类对象生产者映射关系的Map
                static FactoryProducerMap *ms_pMapProducers;
            };
            /// <summary>
            /// 类的注册者，通过该类的全局对象的构造过程，将某个类注册进类工厂
            /// 用户不需要直接使用该类，只需通过提供的宏来对类进行注册
            /// </summary>
            class EV_CORE_DLL CClassRegisterHelper
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="object">类生产者对象</param>
                /// <returns></returns>
                CClassRegisterHelper(void *object);
                ~CClassRegisterHelper();

            private:
                void *m_pObj;
            };
#define REGISTER_FACTORY_CLASS(ClassName) \
	class C##ClassName##Producer : public EarthView::World::Core::IClassObjectProducer { \
	public:\
		virtual ev_void* createObject(_in void* pList = NULL) const {ClassName* p = new ClassName((EarthView::World::Core::CNameValuePairList*)pList);return p;}\
        virtual ev_void releaseObject(_inout ev_void **ppObject) const{if(ppObject != NULL){ClassName *p = (ClassName*)*ppObject; delete p;} }\
		virtual ev_void getClassName(_out EarthView::World::Core::ev_string &strClassName) const{strClassName = #ClassName;}\
        virtual ~C##ClassName##Producer(){}\
	}; \
	static EarthView::World::Core::CClassRegisterHelper s_##ClassName##ReigsterHelper(new C##ClassName##Producer);
#define REGISTER_FACTORY_CLASS_INTERNAL(Scope, ClassName) \
	class C##ClassName##Producer : public EarthView::World::Core::IClassObjectProducer { \
	public:\
	virtual ev_void* createObject(_in void* pList = NULL) const {Scope::ClassName* p = new Scope::ClassName((EarthView::World::Core::CNameValuePairList*)pList);return p;}\
	virtual ev_void releaseObject(_inout ev_void **ppObject) const{if(ppObject != NULL){Scope::ClassName *p = (Scope::ClassName*)*ppObject; delete p;} }\
	virtual ev_void getClassName(_out EarthView::World::Core::ev_string &strClassName) const{strClassName = #ClassName;}\
	}; \
	static EarthView::World::Core::CClassRegisterHelper s_##ClassName##ReigsterHelper(new C##ClassName##Producer);

            ///EV_DLL_EXPORT_C  EV_CORE_DLL ev_void* __stdcall ev_CreateObjectByName(ev_char* strClassName);
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void *__stdcall ev_CreateObjectByNamePara(ev_char *strClassName, ev_void *pList);
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_bool  __stdcall ev_DestoryObject(ev_void **ppObject, ev_char *strClassName);
#if EV_WCHAR_T_STRINGS
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_wchar   *__stdcall ev_allocString(ev_wchar *pStr);
#else
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_char   *__stdcall ev_allocString(ev_char *pStr);
#endif
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void __stdcall ev_freeString(ev_void **ppStr);


        }
    }
}

#endif
