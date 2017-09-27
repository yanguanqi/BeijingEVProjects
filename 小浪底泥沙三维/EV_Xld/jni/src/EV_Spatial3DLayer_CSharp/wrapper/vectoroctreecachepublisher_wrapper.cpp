/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectoroctreecachepublisher.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback)(_in EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer, _in char*& path, _in char*& fileName, _in const void* fieldNames);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback)(_in EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback)(_in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback)(_in char*& info, _in ev_uint32 publishCount);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback)(_in char*& info, _in ev_int32 percent);
				class CVectorOctreeCachePublisherProxy : public EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher
				{
				private:
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback;
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback;
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback;
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback;
				public:
					CVectorOctreeCachePublisherProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeCachePublisher(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback = pCallback;
					}
					virtual ev_bool publish(_in EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer, _in const EVString& path, _in const EVString& fileName, _in const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector& fieldNames)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback(pLayer, path_Char, fileName_Char, &fieldNames);
							return returnValue;
						}
						else
							return this->CVectorOctreeCachePublisher::publish(pLayer, path, fileName, fieldNames);
					}
					virtual void stopPublish()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback();
						}
						else
							return this->CVectorOctreeCachePublisher::stopPublish();
					}
					virtual void setPublishListener(_in EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* listener)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback(listener);
						}
						else
							return this->CVectorOctreeCachePublisher::setPublishListener(listener);
					}
					virtual void setTotalCount(_in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback(count);
						}
						else
							return this->CVectorOctreeCachePublisher::setTotalCount(count);
					}
					virtual void updateProgressInformation(_in const EVString& info, _in ev_uint32 publishCount)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback(info_Char, publishCount);
						}
						else
							return this->CVectorOctreeCachePublisher::updateProgressInformation(info, publishCount);
					}
					virtual void setInformation(_in const EVString& info, _in ev_int32 percent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback(info_Char, percent);
						}
						else
							return this->CVectorOctreeCachePublisher::setInformation(info, percent);
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreeCachePublisherProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer, _in const char* path, _in const char* fileName, _in const void* fieldNames )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::publish(pLayer, path1, fileName1, *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*)fieldNames);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->publish(pLayer, path1, fileName1, *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*)fieldNames);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_publish_ev_bool_ISceneLayer_EVString_EVString_CVector3DCacheFieldVector_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer, _in const char* path, _in const char* fileName, _in const void* fieldNames )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::publish(pLayer, path1, fileName1, *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*)fieldNames);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::stopPublish();
					else
						ptrNativeObject->stopPublish();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_stopPublish_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::stopPublish();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setPublishListener(listener);
					else
						ptrNativeObject->setPublishListener(listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setPublishListener_void_CVectorOctreePublishListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* listener )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setPublishListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setTotalCount(count);
					else
						ptrNativeObject->setTotalCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setTotalCount_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setTotalCount(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* info, _in ev_uint32 publishCount )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::updateProgressInformation(info1, publishCount);
					else
						ptrNativeObject->updateProgressInformation(info1, publishCount);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_updateProgressInformation_void_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* info, _in ev_uint32 publishCount )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::updateProgressInformation(info1, publishCount);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(void *pObjectXXXX, _in const char* info, _in ev_int32 percent )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setInformation(info1, percent);
					else
						ptrNativeObject->setInformation(info1, percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_Callback* pCallback )
				{
					CVectorOctreeCachePublisherProxy* ptr = dynamic_cast<CVectorOctreeCachePublisherProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreeCachePublisher_setInformation_void_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* info, _in ev_int32 percent )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher::setInformation(info1, percent);
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback)(_in char*& info, _in ev_int32 percent);
				class CVectorOctreePublishListenerProxy : public EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener
				{
				private:
					EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback* m_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback;
				public:
					CVectorOctreePublishListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreePublishListener(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback = pCallback;
					}
					virtual void setInformation(_in const EVString& info, _in ev_int32 percent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback(info_Char, percent);
						}
						else
							return this->CVectorOctreePublishListener::setInformation(info, percent);
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreePublishListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(void *pObjectXXXX, _in const char* info, _in ev_int32 percent )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreePublishListenerProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener::setInformation(info1, percent);
					else
						ptrNativeObject->setInformation(info1, percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_Callback* pCallback )
				{
					CVectorOctreePublishListenerProxy* ptr = dynamic_cast<CVectorOctreePublishListenerProxy*>((EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorOctreePublishListener_setInformation_void_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* info, _in ev_int32 percent )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener::setInformation(info1, percent);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mFieldName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjectXXXX)->mFieldName = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->mFieldType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CVector3DCacheField_mFieldType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)pObjectXXXX)->mFieldType = (EarthView::World::Spatial::GeoDataset::EVFieldType)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFieldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheField_getFieldType_EVFieldType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheField_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheField_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheField*) pObjectXXXX;
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_push_back_void_CVector3DCacheField(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_front_CVector3DCacheField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pXXXX = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_back_CVector3DCacheField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pXXXX = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_insert_void_ev_uint32_CVector3DCacheField(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Atlas::CVector3DCacheField*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_OperatorIndex_CVector3DCacheField_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector& objYYYY = *(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_at_CVector3DCacheField_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Atlas::CVector3DCacheField *pXXXX = new EarthView::World::Spatial3D::Atlas::CVector3DCacheField(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_swap_void_CVector3DCacheFieldVector(void *pObjectXXXX, _inout void* list )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*)list);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVector3DCacheFieldVector_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*) pObjectXXXX;
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
			}
		}
	}
}
