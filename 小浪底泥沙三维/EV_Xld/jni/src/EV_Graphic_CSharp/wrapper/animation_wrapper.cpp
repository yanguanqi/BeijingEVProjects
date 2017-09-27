/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animation.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef bool  ( _stdcall EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback)(_in char*& name);
			class CAnimationContainerProxy : public EarthView::World::Graphic::CAnimationContainer
			{
			private:
				EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback* m_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback;
				EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback;
			public:
				CAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationContainer(pList)
				{
					m_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16(EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString(EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString(EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback = pCallback;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CAnimationContainer::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CAnimationContainer::getAnimation(index);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CAnimationContainer::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CAnimationContainer::createAnimation(name, length);
				}
				virtual bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						bool returnValue = m_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CAnimationContainer::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CAnimationContainer::removeAnimation(name);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationContainerProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getNumAnimations();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumAnimations();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationContainer_getNumAnimations_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getNumAnimations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getAnimation(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getAnimation(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getAnimation(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_getAnimation_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::getAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::createAnimation(name1, length);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->createAnimation(name1, length);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationContainer_createAnimation_CAnimation_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::createAnimation(name1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::hasAnimation(name1);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->hasAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CAnimationContainer_hasAnimation_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::hasAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::removeAnimation(name1);
				else
					ptrNativeObject->removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_Callback* pCallback )
			{
				CAnimationContainerProxy* ptr = dynamic_cast<CAnimationContainerProxy*>((EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationContainer_removeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CAnimationContainer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationContainer::removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CAnimation_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimation_getLength_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setLength_void_Real(void *pObjectXXXX, _in Real len )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setLength(len);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createNodeTrack_CNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->createNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createSphereNodeTrack_CSphereNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->createSphereNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createNumericTrack_CNumericAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->createNumericTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createVertexTrack_CVertexAnimationTrack_ev_uint16_VertexAnimationType(void *pObjectXXXX, _in ev_uint16 handle, _in int animType )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->createVertexTrack(handle, (EarthView::World::Graphic::VertexAnimationType)animType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createNodeTrack_CNodeAnimationTrack_ev_uint16_CNode(void *pObjectXXXX, _in ev_uint16 handle, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->createNodeTrack(handle, ref_node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createSphereNodeTrack_CSphereNodeAnimationTrack_ev_uint16_CNode(void *pObjectXXXX, _in ev_uint16 handle, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->createSphereNodeTrack(handle, ref_node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createNumericTrack_CNumericAnimationTrack_ev_uint16_AnimableValuePtr(void *pObjectXXXX, _in ev_uint16 handle, _in const void* anim )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->createNumericTrack(handle, *(EarthView::World::Graphic::AnimableValuePtr*)anim);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_createVertexTrack_CVertexAnimationTrack_ev_uint16_CVertexData_VertexAnimationType(void *pObjectXXXX, _in ev_uint16 handle, _in EarthView::World::Graphic::CVertexData* ref_data, _in int animType )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->createVertexTrack(handle, ref_data, (EarthView::World::Graphic::VertexAnimationType)animType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_getNumNodeTracks_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumNodeTracks();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_getNumSphereNodeTracks_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumSphereNodeTracks();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_getNodeTrack_CNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->getNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_getSphereNodeTrack_CSphereNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->getSphereNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_hasNodeTrack_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_hasSphereNodeTrack_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSphereNodeTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_getNumNumericTracks_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumNumericTracks();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_getNumericTrack_CNumericAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->getNumericTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_hasNumericTrack_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasNumericTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_getNumVertexTracks_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumVertexTracks();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_getVertexTrack_CVertexAnimationTrack_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->getVertexTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_hasVertexTrack_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasVertexTrack(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyNodeTrack_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyNodeTrack(handle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroySphereNodeTrack_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroySphereNodeTrack(handle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyNumericTrack_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyNumericTrack(handle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyVertexTrack_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyVertexTrack(handle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyAllTracks_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyAllTracks();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyAllNodeTracks_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyAllNodeTracks();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyAllSphereNodeTracks_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyAllSphereNodeTracks();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyAllNumericTracks_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyAllNumericTracks();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_destroyAllVertexTracks_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->destroyAllVertexTracks();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_Real_Real_Real(void *pObjectXXXX, _in Real timePos, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(timePos, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_Real_Real(void *pObjectXXXX, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToNode_void_CNode_Real_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToNode(node, timePos, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToNode_void_CNode_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToNode(node, timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToNode_void_CNode_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToNode(node, timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToSphereNode_void_CNode_Real_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToSphereNode(node, timePos, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToSphereNode_void_CNode_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToSphereNode(node, timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToSphereNode_void_CNode_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToSphereNode(node, timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_CSkeleton_Real_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSkeleton* skeleton, _in Real timePos, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(skeleton, timePos, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_CSkeleton_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSkeleton* skeleton, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(skeleton, timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_CSkeleton_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSkeleton* skeleton, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(skeleton, timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_CSkeleton_Real_ev_real32_BoneBlendMask_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CSkeleton* skeleton, _in Real timePos, _in ev_real32 weight, _in const EarthView::World::Graphic::CAnimationState::BoneBlendMask* blendMask, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(skeleton, timePos, weight, blendMask, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_apply_void_CEntity_Real_Real_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* entity, _in Real timePos, _in Real weight, _in ev_bool software, _in ev_bool hardware )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->apply(entity, timePos, weight, software, hardware);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToAnimable_void_AnimableValuePtr_Real_Real_Real(void *pObjectXXXX, _in const void* anim, _in Real timePos, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, timePos, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToAnimable_void_AnimableValuePtr_Real_Real(void *pObjectXXXX, _in const void* anim, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToAnimable_void_AnimableValuePtr_Real(void *pObjectXXXX, _in const void* anim, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToVertexData_void_CVertexData_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in Real timePos, _in Real weight )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToVertexData(data, timePos, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_applyToVertexData_void_CVertexData_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->applyToVertexData(data, timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setInterpolationMode_void_InterpolationMode(void *pObjectXXXX, _in int im )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setInterpolationMode((EarthView::World::Graphic::CAnimation::InterpolationMode)im);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CAnimation_getInterpolationMode_InterpolationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::InterpolationMode objXXXX = ptrNativeObject->getInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setRotationInterpolationMode_void_RotationInterpolationMode(void *pObjectXXXX, _in int im )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setRotationInterpolationMode((EarthView::World::Graphic::CAnimation::RotationInterpolationMode)im);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CAnimation_getRotationInterpolationMode_RotationInterpolationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode objXXXX = ptrNativeObject->getRotationInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setDefaultInterpolationMode_void_InterpolationMode(_in int im )
			{
				EarthView::World::Graphic::CAnimation::setDefaultInterpolationMode((EarthView::World::Graphic::CAnimation::InterpolationMode)im);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CAnimation_getDefaultInterpolationMode_InterpolationMode( )
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode objXXXX = EarthView::World::Graphic::CAnimation::getDefaultInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setDefaultRotationInterpolationMode_void_RotationInterpolationMode(_in int im )
			{
				EarthView::World::Graphic::CAnimation::setDefaultRotationInterpolationMode((EarthView::World::Graphic::CAnimation::RotationInterpolationMode)im);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CAnimation_getDefaultRotationInterpolationMode_RotationInterpolationMode( )
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode objXXXX = EarthView::World::Graphic::CAnimation::getDefaultRotationInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_push_ev_bool_ev_uint16_CNodeAnimationTrack(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CNodeAnimationTrack*& ref_val )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_OperatorIndex_CNodeAnimationTrack_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList& objYYYY = *(EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_get_CNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_push_ev_bool_ev_uint16_CSphereNodeAnimationTrack(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CSphereNodeAnimationTrack*& ref_val )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_OperatorIndex_CSphereNodeAnimationTrack_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList& objYYYY = *(EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_get_CSphereNodeAnimationTrack_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CAnimation_NodeTrackPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_NodeTrackPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall Get_EarthView_World_Graphic_CAnimation_NodeTrackPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackPair*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_NodeTrackPair_second( void *pObjectXXXX, EarthView::World::Graphic::CNodeAnimationTrack*  value )
			{
				((EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CAnimation_SphereNodeTrackPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_SphereNodeTrackPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall Get_EarthView_World_Graphic_CAnimation_SphereNodeTrackPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_SphereNodeTrackPair_second( void *pObjectXXXX, EarthView::World::Graphic::CSphereNodeAnimationTrack*  value )
			{
				((EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_nextValue_CNodeAnimationTrack(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack**  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_nextValuePtr_CNodeAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_next_CNodeAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_getBegin_NodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CAnimation::NodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_getEnd_NodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CAnimation::NodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NodeTrackIterator_getCurrent_NodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CAnimation::NodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_nextValue_CSphereNodeAnimationTrack(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack**  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_nextValuePtr_CSphereNodeAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_next_CSphereNodeAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_getBegin_SphereNodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_getEnd_SphereNodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_SphereNodeTrackIterator_getCurrent_SphereNodeTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_push_ev_bool_ev_uint16_CNumericAnimationTrack(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CNumericAnimationTrack*& ref_val )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_OperatorIndex_CNumericAnimationTrack_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList& objYYYY = *(EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_get_CNumericAnimationTrack_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NumericTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CAnimation_NumericTrackPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_NumericTrackPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall Get_EarthView_World_Graphic_CAnimation_NumericTrackPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackPair*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_NumericTrackPair_second( void *pObjectXXXX, EarthView::World::Graphic::CNumericAnimationTrack*  value )
			{
				((EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_nextValue_CNumericAnimationTrack(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack**  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_nextValuePtr_CNumericAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_next_CNumericAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_getBegin_NumericTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CAnimation::NumericTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_getEnd_NumericTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CAnimation::NumericTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_NumericTrackIterator_getCurrent_NumericTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CAnimation::NumericTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_push_ev_bool_ev_uint16_CVertexAnimationTrack(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CVertexAnimationTrack*& ref_val )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_OperatorIndex_CVertexAnimationTrack_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList& objYYYY = *(EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_get_CVertexAnimationTrack_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::VertexTrackList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CAnimation_CVertexAnimationTrackPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_CVertexAnimationTrackPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall Get_EarthView_World_Graphic_CAnimation_CVertexAnimationTrackPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair* ptrNativeObject = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimation_CVertexAnimationTrackPair_second( void *pObjectXXXX, EarthView::World::Graphic::CVertexAnimationTrack*  value )
			{
				((EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_nextValue_CVertexAnimationTrack(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack**  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_nextValuePtr_CVertexAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_next_CVertexAnimationTrack(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_getBegin_CVertexAnimationTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_getEnd_CVertexAnimationTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation_VertexTrackIterator_getCurrent_CVertexAnimationTrackPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator* ptrNativeObject = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation__getNodeTrackList_NodeTrackList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackList& objXXXX = ptrNativeObject->_getNodeTrackList();
				const EarthView::World::Graphic::CAnimation::NodeTrackList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation__getSphereNodeTrackList_SphereNodeTrackList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList& objXXXX = ptrNativeObject->_getSphereNodeTrackList();
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimation_getNodeTrackIterator_NodeTrackIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::NodeTrackIterator objXXXX = ptrNativeObject->getNodeTrackIterator();
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pXXXX = new EarthView::World::Graphic::CAnimation::NodeTrackIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimation_getSphereNodeTrackIterator_SphereNodeTrackIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator objXXXX = ptrNativeObject->getSphereNodeTrackIterator();
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pXXXX = new EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation__getNumericTrackList_NumericTrackList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackList& objXXXX = ptrNativeObject->_getNumericTrackList();
				const EarthView::World::Graphic::CAnimation::NumericTrackList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimation_getNumericTrackIterator_NumericTrackIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::NumericTrackIterator objXXXX = ptrNativeObject->getNumericTrackIterator();
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pXXXX = new EarthView::World::Graphic::CAnimation::NumericTrackIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CAnimation__getVertexTrackList_VertexTrackList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimation::VertexTrackList& objXXXX = ptrNativeObject->_getVertexTrackList();
				const EarthView::World::Graphic::CAnimation::VertexTrackList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimation_getVertexTrackIterator_VertexTrackIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::VertexTrackIterator objXXXX = ptrNativeObject->getVertexTrackIterator();
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pXXXX = new EarthView::World::Graphic::CAnimation::VertexTrackIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_optimise_void_ev_bool(void *pObjectXXXX, _in ev_bool discardIdentityNodeTracks )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->optimise(discardIdentityNodeTracks);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_optimise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->optimise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_insert_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 val )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ptrNativeObject->insert(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_erase_ev_size_t_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->erase(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_empty_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_count_ev_size_t_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_max_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->max_size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_TrackHandleList_swap_void_TrackHandleList(void *pObjectXXXX, _inout void* other )
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList* ptrNativeObject = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CAnimation::TrackHandleList*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation__collectIdentityNodeTracks_void_TrackHandleList(void *pObjectXXXX, _inout void* tracks )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->_collectIdentityNodeTracks(*(EarthView::World::Graphic::CAnimation::TrackHandleList*)tracks);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation__destroyNodeTracks_void_TrackHandleList(void *pObjectXXXX, _in const void* tracks )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->_destroyNodeTracks(*(EarthView::World::Graphic::CAnimation::TrackHandleList*)tracks);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimation_clone_CAnimation_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->clone(newName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation__keyFrameListChanged_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->_keyFrameListChanged();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimation__getTimeIndex_CTimeIndex_Real(void *pObjectXXXX, _in Real timePos )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CTimeIndex objXXXX = ptrNativeObject->_getTimeIndex(timePos);
				EarthView::World::Graphic::CTimeIndex *pXXXX = new EarthView::World::Graphic::CTimeIndex(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setUseBaseKeyFrame_void_ev_bool_Real_EVString(void *pObjectXXXX, _in ev_bool useBaseKeyFrame, _in Real keyframeTime, _in const char* baseAnimName )
			{
				EarthView::World::Core::ev_string baseAnimName1 = baseAnimName;
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setUseBaseKeyFrame(useBaseKeyFrame, keyframeTime, baseAnimName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setUseBaseKeyFrame_void_ev_bool_Real(void *pObjectXXXX, _in ev_bool useBaseKeyFrame, _in Real keyframeTime )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setUseBaseKeyFrame(useBaseKeyFrame, keyframeTime);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation_setUseBaseKeyFrame_void_ev_bool(void *pObjectXXXX, _in ev_bool useBaseKeyFrame )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->setUseBaseKeyFrame(useBaseKeyFrame);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimation_getUseBaseKeyFrame_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseBaseKeyFrame();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimation_getBaseKeyFrameTime_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getBaseKeyFrameTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CAnimation_getBaseKeyFrameAnimationName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getBaseKeyFrameAnimationName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation__applyBaseKeyFrame_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->_applyBaseKeyFrame();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimation__notifyContainer_void_CAnimationContainer(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationContainer* ref_c )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				ptrNativeObject->_notifyContainer(ref_c);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationContainer*  _stdcall EarthView_World_Graphic_CAnimation_getContainer_CAnimationContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimation* ptrNativeObject = (EarthView::World::Graphic::CAnimation*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationContainer* objXXXX = ptrNativeObject->getContainer();
				return objXXXX;
			}
		}
	}
}
