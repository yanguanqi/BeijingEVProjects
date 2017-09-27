#ifndef __ANIMABLE_H__
#define __ANIMABLE_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/any.h>
#include <core/sharedptr.h>
#include <core/stringdefines.h>
#include "stringconverter.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector2;
				class CVector3;
				class CVector4;
				class CQuaternion;
				class CRadian;
				class CDegree;
			}
		}

	}
}
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {          
            class CColourValue;
            
            /// <summary>
            /// 动画的值
            /// 管理动画的值类型
            /// </summary>
            class EV_GRAPHIC_DLL CAnimableValue : public EarthView::World::Core::CAllocatedObject
            {
            public:
                enum ValueType
                {
                    INT,
                    REAL,
                    VECTOR2,
                    VECTOR3,
                    VECTOR4,
                    QUATERNION,
                    COLOUR,
                    RADIAN,
                    DEGREE
                };
            protected:
                EarthView::World::Graphic::CAnimableValue::ValueType mType;
                union
                {
                    ev_int32 mBaseValueInt;
                    Real mBaseValueReal[4];
                };
            ev_internal:
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值int32</param>
                /// <returns></returns>
                virtual void setAsBaseValue(_in ev_int32 val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值real</param>
                /// <returns></returns>
                virtual void setAsBaseValue(_in Real val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值vactor2</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CVector2 &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值vector3</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CVector3 &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值vector4</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CVector4 &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值quaternion</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CQuaternion &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值colovalue</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Graphic::CColourValue &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值radian</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CRadian &val);
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值degree</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Spatial::Math::CDegree &val);
            ev_private:
                /// <summary>
                /// 设置动画基值
                /// </summary>
                /// <param name="val">动画的值any</param>
                /// <returns></returns>
                virtual void setAsBaseValue( _in const EarthView::World::Core::CAny &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Core::CAny &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Core::CAny &val);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="t">动画的值类型</param>
                /// <returns></returns>
                CAnimableValue(_in EarthView::World::Graphic::CAnimableValue::ValueType t);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAnimableValue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAnimableValue();
                /// <summary>
                /// 获得动画的值类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画的值类型</returns>
                EarthView::World::Graphic::CAnimableValue::ValueType getType() const;
                /// <summary>
                /// 在数值动画中设置当前值类型为基值类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>动画的值类型</returns>
                virtual void setCurrentStateAsBaseValue();
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue(_in ev_int32 val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue(_in Real val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CVector2 &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CVector3 &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CVector4 &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CQuaternion &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Graphic::CColourValue &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CRadian &val);
                /// <summary>
                /// 设置动画值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setValue( _in const EarthView::World::Spatial::Math::CDegree &val);

                /// <summary>
                /// 重新设置动画的值为动画基值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetToBaseValue();
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue(_in ev_int32 val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue(_in Real val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CVector2 &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CVector3 &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CVector4 &val);
                //// Apply delta value
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CQuaternion &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Graphic::CColourValue &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CDegree &val);
                /// <summary>
                /// 应用增量数值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void applyDeltaValue( _in const EarthView::World::Spatial::Math::CRadian &val);

            };
            /*typedef CSharedPtr<EarthView::World::Graphic::CAnimableValue> EarthView::World::Graphic::AnimableValuePtr;*/
            class EV_GRAPHIC_DLL AnimableValuePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>
            {
            ev_private:
                AnimableValuePtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>(
                        pList && pList->Exist("rep") ? (EarthView::World::Graphic::CAnimableValue *)pList->GetAt("rep") : (EarthView::World::Graphic::CAnimableValue *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                AnimableValuePtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>() {}
                explicit AnimableValuePtr(EarthView::World::Graphic::CAnimableValue *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>(ref_rep) {}
                explicit AnimableValuePtr(EarthView::World::Graphic::CAnimableValue *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>(ref_rep, inFreeMethod) {}
                AnimableValuePtr(const AnimableValuePtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>(r) {}

                EarthView::World::Graphic::CAnimableValue *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAnimableValue>::get();
                }
            };
            /// <summary>
            /// 访问AnimableValues的抽象接口类，
            /// 供访问AnimableValues的任何类进行扩展
            /// </summary>
            class EV_GRAPHIC_DLL CAnimableObject : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                typedef map<EVString, EarthView::World::Core::StringVector> AnimableDictionaryMap;

                static AnimableDictionaryMap msAnimableDictionary;
                /// <summary>
                /// 创建可动画路径
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void createAnimableDictionary() const;

                /// <summary>
                /// 获得可动画的值名称集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>可动画的值名称集合</returns>
                EarthView::World::Core::StringVector &_getAnimableValueNames();
            ev_internal:
                /// <summary>
                /// 初始化可动画路径
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void initialiseAnimableDictionary(EarthView::World::Core::StringVector &val) const;
                /// <summary>
                /// 获得可动画路径
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回路径名称</returns>
                virtual EVString getAnimableDictionaryName() const;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CAnimableObject();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">参数键值对表</param>
                /// <returns></returns>
                CAnimableObject(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAnimableObject();
                /// <summary>
                /// 获得可动画的值名称的集合
                /// </summary>
                /// <param name=""></param>
                /// <returns>可动画的值名称集合</returns>
                const EarthView::World::Core::StringVector &getAnimableValueNames() const;
                /// <summary>
                /// 为可动画的值名称创建公共指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>可动画值名称公共指针</returns>
                virtual EarthView::World::Graphic::AnimableValuePtr createAnimableValue( _in const EVString &valueName);
            };
        }
    }
}

#endif

