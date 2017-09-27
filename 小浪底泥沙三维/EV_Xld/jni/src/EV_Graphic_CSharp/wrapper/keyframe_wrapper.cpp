/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/keyframe.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CKeyFrameProxy : public EarthView::World::Graphic::CKeyFrame
			{
			private:
				EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CKeyFrame_getTime_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CKeyFrame*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CKeyFrameProxy*>((EarthView::World::Graphic::CKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CKeyFrameProxy* ptr = dynamic_cast<CKeyFrameProxy*>((EarthView::World::Graphic::CKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CNumericKeyFrameProxy : public EarthView::World::Graphic::CNumericKeyFrame
			{
			private:
				EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CNumericKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CNumericKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CNumericKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CNumericKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CNumericKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CNumericKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CNumericKeyFrameProxy*>((EarthView::World::Graphic::CNumericKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CNumericKeyFrameProxy* ptr = dynamic_cast<CNumericKeyFrameProxy*>((EarthView::World::Graphic::CNumericKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNumericKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CNumericKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CNumericKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback)(_in const void* trans);
			typedef void  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback)(_in const void* scale);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback)(_in const void* rot);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CTransformKeyFrameProxy : public EarthView::World::Graphic::CTransformKeyFrame
			{
			private:
				EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback;
				EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback;
				EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback;
				EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback;
				EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CTransformKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CTransformKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3(EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3(EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3(EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion(EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion(EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4(EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual void setTranslate(_in const EarthView::World::Spatial::Math::CVector3& trans)
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback(&trans);
					}
					else
						return this->CTransformKeyFrame::setTranslate(trans);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback(&scale);
					}
					else
						return this->CTransformKeyFrame::setScale(scale);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTransformKeyFrame::getScale();
				}
				virtual void setRotation(_in const EarthView::World::Spatial::Math::CQuaternion& rot)
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback(&rot);
					}
					else
						return this->CTransformKeyFrame::setRotation(rot);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getRotation() const
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CTransformKeyFrame::getRotation();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CTransformKeyFrame::setMatrix(mat);
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CTransformKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CTransformKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3(void *pObjectXXXX, _in const void* trans )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setTranslate(*(EarthView::World::Spatial::Math::CVector3*)trans);
				else
					ptrNativeObject->setTranslate(*(EarthView::World::Spatial::Math::CVector3*)trans);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setTranslate_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* trans )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setTranslate(*(EarthView::World::Spatial::Math::CVector3*)trans);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTransformKeyFrame_getTranslate_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getTranslate();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTransformKeyFrame_getScale_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::getScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion(void *pObjectXXXX, _in const void* rot )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)rot);
				else
					ptrNativeObject->setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)rot);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setRotation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* rot )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)rot);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::getRotation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getRotation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTransformKeyFrame_getRotation_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::getRotation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
				else
					ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTransformKeyFrame_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CTransformKeyFrameProxy* ptr = dynamic_cast<CTransformKeyFrameProxy*>((EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CTransformKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTransformKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback)(_in ev_real64 latitude);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback)(_in ev_real64 longitude);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback)(_in ev_real64 heading);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback)(_in const void* yaw);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback)(_in const void* pitch);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback)(_in const void* roll);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CSphereTransformKeyFrameProxy : public EarthView::World::Graphic::CSphereTransformKeyFrame
			{
			private:
				EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback;
				EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CSphereTransformKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereTransformKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64(EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64(EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64(EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64(EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64(EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree(EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual void setLatiude(_in ev_real64 latitude)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback(latitude);
					}
					else
						return this->CSphereTransformKeyFrame::setLatiude(latitude);
				}
				virtual void setLongitude(_in ev_real64 longitude)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback(longitude);
					}
					else
						return this->CSphereTransformKeyFrame::setLongitude(longitude);
				}
				virtual void setHeading(_in ev_real64 heading)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback(heading);
					}
					else
						return this->CSphereTransformKeyFrame::setHeading(heading);
				}
				virtual void setRadius(_in ev_real64 radius)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback(radius);
					}
					else
						return this->CSphereTransformKeyFrame::setRadius(radius);
				}
				virtual ev_real64 getRadius() const
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CSphereTransformKeyFrame::getRadius();
				}
				virtual void setYaw(_in const EarthView::World::Spatial::Math::CDegree& yaw)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback(&yaw);
					}
					else
						return this->CSphereTransformKeyFrame::setYaw(yaw);
				}
				virtual EarthView::World::Spatial::Math::CDegree getYaw() const
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CDegree returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CSphereTransformKeyFrame::getYaw();
				}
				virtual void setPitch(_in const EarthView::World::Spatial::Math::CDegree& pitch)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback(&pitch);
					}
					else
						return this->CSphereTransformKeyFrame::setPitch(pitch);
				}
				virtual EarthView::World::Spatial::Math::CDegree getPitch() const
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CDegree returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CSphereTransformKeyFrame::getPitch();
				}
				virtual void setRoll(_in const EarthView::World::Spatial::Math::CDegree& roll)
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback(&roll);
					}
					else
						return this->CSphereTransformKeyFrame::setRoll(roll);
				}
				virtual EarthView::World::Spatial::Math::CDegree getRoll() const
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CDegree returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CSphereTransformKeyFrame::getRoll();
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSphereTransformKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CSphereTransformKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64(void *pObjectXXXX, _in ev_real64 latitude )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setLatiude(latitude);
				else
					ptrNativeObject->setLatiude(latitude);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLatiude_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setLatiude(latitude);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getLatiude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLatiude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 longitude )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setLongitude(longitude);
				else
					ptrNativeObject->setLongitude(longitude);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setLongitude_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 longitude )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setLongitude(longitude);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getLongitude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLongitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64(void *pObjectXXXX, _in ev_real64 heading )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setHeading(heading);
				else
					ptrNativeObject->setHeading(heading);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setHeading_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 heading )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setHeading(heading);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getHeading_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getHeading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setRadius(radius);
				else
					ptrNativeObject->setRadius(radius);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRadius_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 radius )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setRadius(radius);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getRadius();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRadius_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree(void *pObjectXXXX, _in const void* yaw )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setYaw(*(EarthView::World::Spatial::Math::CDegree*)yaw);
				else
					ptrNativeObject->setYaw(*(EarthView::World::Spatial::Math::CDegree*)yaw);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setYaw_void_CDegree_NoVirtual(void *pObjectXXXX, _in const void* yaw )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setYaw(*(EarthView::World::Spatial::Math::CDegree*)yaw);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getYaw();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getYaw();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getYaw_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getYaw();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree(void *pObjectXXXX, _in const void* pitch )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setPitch(*(EarthView::World::Spatial::Math::CDegree*)pitch);
				else
					ptrNativeObject->setPitch(*(EarthView::World::Spatial::Math::CDegree*)pitch);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setPitch_void_CDegree_NoVirtual(void *pObjectXXXX, _in const void* pitch )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setPitch(*(EarthView::World::Spatial::Math::CDegree*)pitch);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getPitch();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getPitch();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getPitch_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getPitch();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree(void *pObjectXXXX, _in const void* roll )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setRoll(*(EarthView::World::Spatial::Math::CDegree*)roll);
				else
					ptrNativeObject->setRoll(*(EarthView::World::Spatial::Math::CDegree*)roll);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_setRoll_void_CDegree_NoVirtual(void *pObjectXXXX, _in const void* roll )
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::setRoll(*(EarthView::World::Spatial::Math::CDegree*)roll);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getRoll();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getRoll();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame_getRoll_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::getRoll();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CSphereTransformKeyFrameProxy* ptr = dynamic_cast<CSphereTransformKeyFrameProxy*>((EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CSphereTransformKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CSphereTransformKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereTransformKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CVertexMorphKeyFrameProxy : public EarthView::World::Graphic::CVertexMorphKeyFrame
			{
			private:
				EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CVertexMorphKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexMorphKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CVertexMorphKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CVertexMorphKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexMorphKeyFrame_setVertexBuffer_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* buf )
			{
				EarthView::World::Graphic::CVertexMorphKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjectXXXX;
				ptrNativeObject->setVertexBuffer(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)buf);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexMorphKeyFrame_getVertexBuffer_CHardwareVertexBufferSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexMorphKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjectXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->getVertexBuffer();
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CVertexMorphKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CVertexMorphKeyFrameProxy*>((EarthView::World::Graphic::CVertexMorphKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexMorphKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CVertexMorphKeyFrameProxy* ptr = dynamic_cast<CVertexMorphKeyFrameProxy*>((EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexMorphKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CVertexMorphKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexMorphKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback)(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent);
			class CVertexPoseKeyFrameProxy : public EarthView::World::Graphic::CVertexPoseKeyFrame
			{
			private:
				EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* m_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback;
			public:
				CVertexPoseKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexPoseKeyFrame(pList)
				{
					m_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack(EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(_in EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if(m_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback(ref_newParent);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CVertexPoseKeyFrame::_clone(ref_newParent);
				}
			};
			REGISTER_FACTORY_CLASS(CVertexPoseKeyFrameProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRef_poseIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->poseIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRef_poseIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjectXXXX)->poseIndex = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRef_influence( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->influence;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRef_influence( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjectXXXX)->influence = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_push_back_void_PoseRef(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_front_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_back_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_insert_void_ev_uint32_PoseRef(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_OperatorIndex_PoseRef_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList& objYYYY = *(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_at_PoseRef_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_addPoseReference_void_ev_uint16_Real(void *pObjectXXXX, _in ev_uint16 poseIndex, _in Real influence )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				ptrNativeObject->addPoseReference(poseIndex, influence);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_updatePoseReference_void_ev_uint16_Real(void *pObjectXXXX, _in ev_uint16 poseIndex, _in Real influence )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				ptrNativeObject->updatePoseReference(poseIndex, influence);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_removePoseReference_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 poseIndex )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				ptrNativeObject->removePoseReference(poseIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_removeAllPoseReferences_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				ptrNativeObject->removeAllPoseReferences();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_getPoseReferences_PoseRefList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList& objXXXX = ptrNativeObject->getPoseReferences();
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_getCurrent_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_next_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_getBegin_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_PoseRefIterator_getEnd_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_getCurrent_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_next_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_getBegin_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_ConstPoseRefIterator_getEnd_PoseRef(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame_getPoseReferenceIterator_PoseRefIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator objXXXX = ptrNativeObject->getPoseReferenceIterator();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pXXXX = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				if (dynamic_cast<CVertexPoseKeyFrameProxy*>((EarthView::World::Graphic::CVertexPoseKeyFrame*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexPoseKeyFrame::_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->_clone(ref_newParent);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_Callback* pCallback )
			{
				CVertexPoseKeyFrameProxy* ptr = dynamic_cast<CVertexPoseKeyFrameProxy*>((EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame__clone_CKeyFrame_CAnimationTrack_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack* ref_newParent )
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexPoseKeyFrame::_clone(ref_newParent);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexPoseKeyFrame__applyBaseKeyFrame_void_CVertexPoseKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexPoseKeyFrame* base )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame* ptrNativeObject = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjectXXXX;
				ptrNativeObject->_applyBaseKeyFrame(base);
			}
		}
	}
}
