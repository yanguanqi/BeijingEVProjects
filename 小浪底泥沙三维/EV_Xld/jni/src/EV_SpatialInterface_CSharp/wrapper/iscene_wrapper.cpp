/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iscene.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback)(_in ev_bool active);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback)(_in char*& desc);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::IScene*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback)();
				class ISceneProxy : public EarthView::World::Spatial::Atlas::IScene
				{
				private:
					EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback* m_EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback;
					EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback;
				public:
					ISceneProxy(EarthView::World::Core::CNameValuePairList *pList) : IScene(pList)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(ISceneProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getName_EVString(EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_clone_IScene(EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IScene_toXML_EVString(EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScene::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IScene::setName(name);
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IScene::isActive();
					}
					virtual void setActive(_in ev_bool active)
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback(active);
						}
						else
							return this->IScene::setActive(active);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScene::getDescription();
					}
					virtual void setDescription(_in const EVString& desc)
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* desc_Char = desc.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback(desc_Char);
						}
						else
							return this->IScene::setDescription(desc);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IScene::getSpatialReference();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getKmlGroupLayer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IScene::getKmlGroupLayer();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getFeatureGroupLayer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IScene::getFeatureGroupLayer();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getImageGroupLayer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IScene::getImageGroupLayer();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getTerrainGroupLayer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IScene::getTerrainGroupLayer();
					}
					virtual EarthView::World::Spatial::Atlas::IScene* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IScene* returnValue = m_EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback();
							return returnValue;
						}
						else
							return this->IScene::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IScene::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IScene::toXML();
					}
				};
				REGISTER_FACTORY_CLASS(ISceneProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getName_EVString_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setActive(active);
					else
						ptrNativeObject->setActive(active);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setActive(active);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setDescription(desc1);
					else
						ptrNativeObject->setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getKmlGroupLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getKmlGroupLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getKmlGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getFeatureGroupLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getFeatureGroupLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getFeatureGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getImageGroupLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getImageGroupLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getImageGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getTerrainGroupLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getTerrainGroupLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::getTerrainGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_Atlas_IScene_clone_IScene(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_clone_IScene( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_clone_IScene_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_clone_IScene(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_Atlas_IScene_clone_IScene_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					if (dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Callback* pCallback )
				{
					ISceneProxy* ptr = dynamic_cast<ISceneProxy*>((EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IScene_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IScene_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IScene* ptrNativeObject = (EarthView::World::Spatial::Atlas::IScene*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IScene::toXML();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
